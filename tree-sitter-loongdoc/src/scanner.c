#include <assert.h>
#include "include/base_types.h"
#include "include/quick_buffer.h"
#include "tree_sitter/alloc.h"
#include "tree_sitter/parser.h"

typedef enum TokenType {
    TOKEN_TYPE_EOF,
    TOKEN_TITLE_H0_MARKER,
    TOKEN_TITLE_H1_MARKER,
    TOKEN_TITLE_H2_MARKER,
    TOKEN_TITLE_H3_MARKER,
    TOKEN_TITLE_H4_MARKER,
    TOKEN_TITLE_H5_MARKER,
    TOKEN_LIST_MARKER_STAR,
    TOKEN_LIST_MARKER_HYPHEN,
    TOKEN_LIST_MARKER_DOT,
    TOKEN_LIST_MARKER_DIGIT,
    TOKEN_LIST_MARKER_GEEK,
    TOKEN_LIST_MARKER_ALPHA,
    TOKEN_DOCUMENT_ATTR_MARKER,
    TOKEN_ELEMENT_ATTR_MARKER,
    TOKEN_BLOCK_TITLE_MARKER,
    TOKEN_BREAKS_MARKS,
    TOKEN_TABLE_BLOCK_MARKER,
    TOKEN_NTABLE_BLOCK_MARKER,
    TOKEN_CELL_ATTR,
    TOKEN_DELIMITED_BLOCK_START_MARKER,
    TOKEN_DELIMITED_BLOCK_END_MARKER,
    TOKEN_LISTING_BLOCK_START_MARKER,
    TOKEN_LISTING_BLOCK_END_MARKER,
    TOKEN_LITERAL_BLOCK_MARKER,
    TOKEN_QUOTED_BLOCK_MARKER,
    TOKEN_QUOTED_BLOCK_MD_MARKER,
    TOKEN_QUOTED_PARAGRAPH_MARKER,
    TOKEN_OPEN_BLOCK_MARKER,
    TOKEN_PASSTHROUGH_BLOCK_MARKER,
    TOKEN_BLOCK_MACRO_NAME,
    TOKEN_ANNO_MARKER,
    TOKEN_ANNO_LIST_MARKER,
    TOKEN_LINE_COMMENT_MARKER,
    TOKEN_BLOCK_COMMENT_MARKER,

    TOKEN_ADMONITION_NOTE,
    TOKEN_ADMONITION_TIP,
    TOKEN_ADMONITION_IMPORTANT,
    TOKEN_ADMONITION_CAUTION,
    TOKEN_ADMONITION_WARNING,
    TOKEN_IDENT_MARKER,
    TOKEN_LIST_CONTINUATION
} TokenType;

static bool parse_table_attr(TSLexer *lexer);
static bool parse_number(TSLexer *lexer);
static bool parse_sequence(TSLexer *lexer, char const *sequence);
static bool parse_ordered_marker(TSLexer *lexer);
static bool parse_breaks(char start, TSLexer *lexer);
static bool consume(i32 ch, TSLexer *lexer, bool skip_space, usize *counter, usize max);
static bool skip_white_space(TSLexer *lexer);
static bool is_white_space(i32 ch);
static bool is_new_line(i32 ch);
static bool is_ascii_digit(i32 ch);
static bool is_ascii_alpha_lower(i32 ch);
static bool is_geek_lower(i32 ch);
static bool is_newline(i32 ch);
static bool is_eof(TSLexer *lexer);

typedef enum BlockKind {
    BLOCK_KIND_DELIMITED,
    BLOCK_KIND_TITLE,
    BLOCK_KIND_ATTR,
    BLOCK_KIND_TABLE,
    BLOCK_KIND_LISTING
} BlockKind;

typedef struct Node {
    BlockKind kind;
    usize counter;
    struct Node *next;
} Node;

static Result node_serialize(Node const *self, QuickBuffer *qb) {
    Result ret = RESULT_OK;

    ret &= quick_buffer_write_u32(qb, self->kind);
    ret &= quick_buffer_write_usize(qb, self->counter);

    return ret;
}

static Result node_deserialize(Node *self, QuickBuffer *qb) {
    Result ret = RESULT_OK;
    bzero(self, sizeof(Node));
    ret &= quick_buffer_read_u32(qb, &self->kind);
    ret &= quick_buffer_read_usize(qb, &self->counter);
    return ret;
}

typedef struct Scanner {
    bool is_matching_raw_block;
    usize counter;
    Node *top;
} Scanner;

static bool scanner_is_expect_block_start(Scanner const *self) {
    if(!self->top) {
        return false;
    }

    return self->top->kind == BLOCK_KIND_ATTR || self->top->kind == BLOCK_KIND_TITLE;
}

static inline bool scanner_is_matching(Scanner const *self, BlockKind kind, usize counter) {
    if(!self->top) {
        return false;
    }

    if(!counter) {
        return self->top->kind == kind;
    }

    return self->top->kind == kind && self->top->kind == counter;
}
static Result scanner_serialize(Scanner const *self, QuickBuffer *qb) {
    Result ret = RESULT_OK;

    ret &= quick_buffer_write_bool(qb, self->is_matching_raw_block);
    ret &= quick_buffer_write_usize(qb, self->counter);

    Node *head = self->top;
    while(head) {
        ret &= node_serialize(head, qb);
        head = head->next;
    }

    return ret;
}

static Result scanner_deserialize(Scanner *self, QuickBuffer *qb) {
    Result ret = RESULT_OK;

    bzero(self, sizeof(Scanner));

    ret &= quick_buffer_read_bool(qb, &self->is_matching_raw_block);
    ret &= quick_buffer_read_usize(qb, &self->counter);

    for(usize i = 0; i < self->counter; ++i) {
        Node *node = ts_malloc(sizeof(Node));
        ret &= node_deserialize(node, qb);
        node->next = self->top;
        self->top = node;
    }

    Node *head = self->top;
    Node *bak = head;
    while(self->top) {
        Node *b = head;
        head = self->top;
        self->top = self->top->next;
        head->next = b;
    }
    if(bak) {
        bak->next = NULL;
    }
    self->top = head;

    return ret;
}

static bool scanner_assert_top(Scanner *scanner, BlockKind kind, usize counter) {
    if(!scanner->top) {
        return false;
    }

    return scanner->top->kind == kind && scanner->top->counter == counter;
}

static inline bool scanner_pop_kind(Scanner *self, BlockKind kind, usize counter) {
    if(!self->top) {
        return false;
    }

    if(self->top->kind == kind && self->top->counter == counter) {
        Node *top = self->top;
        self->top = top->next;
        ts_free(top);
        self->counter -= 1;
        return true;
    }

    return false;
}

static void scanner_pop(Scanner *self) {
    if(!self->top) {
        return;
    }
    Node *top = self->top;
    self->top = top->next;
    ts_free(top);
    self->counter -= 1;
}

static void scanner_push(Scanner *scanner, BlockKind kind, usize counter) {
    Node *block = (Node *)ts_malloc(sizeof(Node));
    block->kind = kind;
    block->counter = counter;
    block->next = scanner->top;

    scanner->top = block;
    scanner->counter += 1;
}

void *tree_sitter_loongdoc_external_scanner_create() {
    Scanner *s = (Scanner *)malloc(sizeof(Scanner));
    s->top = NULL;
    s->is_matching_raw_block = false;
    return s;
}

void tree_sitter_loongdoc_external_scanner_destroy(void *payload) {
    Scanner *s = (Scanner *)payload;
    while(s->top) {
        scanner_pop(s);
    }
    ts_free(s);
}

unsigned tree_sitter_loongdoc_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *s = (Scanner *)payload;

    QuickBuffer qb = quick_buffer_new(buffer, TREE_SITTER_SERIALIZATION_BUFFER_SIZE);

    Result ret = scanner_serialize(s, &qb);
    assert(ret == RESULT_OK);

    return qb.pos;
}

void tree_sitter_loongdoc_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    if(!buffer) {
        return;
    }

    Scanner *s = (Scanner *)payload;
    QuickBuffer qb = quick_buffer_new((void *)buffer, length);
    Result ret = scanner_deserialize(s, &qb);
    assert(ret == RESULT_OK);
}

bool tree_sitter_loongdoc_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    usize start_pos = lexer->get_column(lexer);
    Scanner *s = (Scanner *)payload;

    if(lexer->eof(lexer)) {
        if(valid_symbols[TOKEN_TYPE_EOF]) {
            lexer->result_symbol = TOKEN_TYPE_EOF;
            return true;
        }
    }

    if(lexer->get_column(lexer) == 0) {
        if(valid_symbols[TOKEN_ADMONITION_NOTE]) {
            do {
                if(parse_sequence(lexer, "NOTE")) {
                    lexer->result_symbol = TOKEN_ADMONITION_NOTE;
                } else if(parse_sequence(lexer, "TIP")) {
                    lexer->result_symbol = TOKEN_ADMONITION_TIP;
                } else if(parse_sequence(lexer, "IMPORTANT")) {
                    lexer->result_symbol = TOKEN_ADMONITION_IMPORTANT;
                } else if(parse_sequence(lexer, "CAUTION")) {
                    lexer->result_symbol = TOKEN_ADMONITION_CAUTION;
                } else if(parse_sequence(lexer, "WARNING")) {
                    lexer->result_symbol = TOKEN_ADMONITION_WARNING;
                } else {
                    break;
                }

                lexer->mark_end(lexer);
                if(lexer->lookahead == ':') {
                    return true;
                }
            } while(0);
        }

        bool is_alpha_lower = is_ascii_alpha_lower(lexer->lookahead);
        if(valid_symbols[TOKEN_LIST_MARKER_ALPHA]) {
            if(parse_ordered_marker(lexer)) {
                return true;
            }
        }

        if(is_alpha_lower && s->is_matching_raw_block) {
            if(valid_symbols[TOKEN_BLOCK_MACRO_NAME]) {
                if(parse_sequence(lexer, "include")) {
                    lexer->mark_end(lexer);
                    if(parse_sequence(lexer, "::")) {
                        lexer->result_symbol = TOKEN_BLOCK_MACRO_NAME;
                        return true;
                    }
                }
            }
        }

        if(is_alpha_lower && !s->is_matching_raw_block) {
            if(valid_symbols[TOKEN_BLOCK_MACRO_NAME]) {
                while(is_ascii_alpha_lower(lexer->lookahead)) {
                    lexer->advance(lexer, false);
                }
                lexer->mark_end(lexer);
                if(parse_sequence(lexer, "::")) {
                    lexer->result_symbol = TOKEN_BLOCK_MACRO_NAME;
                    return true;
                }
            }
        }

        if(lexer->get_column(lexer) == 0) {
            switch(lexer->lookahead) {
                case '=': {
                    consume('=', lexer, false, NULL, USIZE_MAX);
                    lexer->mark_end(lexer);
                    if(!s->is_matching_raw_block) {
                        usize counter = lexer->get_column(lexer);
                        if(counter >= 4 && is_new_line(lexer->lookahead)) {
                            if(!scanner_is_expect_block_start(s) && scanner_assert_top(s, BLOCK_KIND_DELIMITED, counter)) {
                                lexer->result_symbol = TOKEN_DELIMITED_BLOCK_END_MARKER;
                                scanner_pop(s);
                                while(scanner_pop_kind(s, BLOCK_KIND_TITLE, 1) ||
                                      scanner_pop_kind(s, BLOCK_KIND_ATTR, 1)
                                ) {
                                }
                            } else {
                                scanner_push(s, BLOCK_KIND_DELIMITED, counter);
                                lexer->result_symbol = TOKEN_DELIMITED_BLOCK_START_MARKER;
                            }
                            return true;
                        }
                    }

                    if(!s->is_matching_raw_block) {
                        usize level = TOKEN_TITLE_H0_MARKER - 1 + lexer->get_column(lexer);
                        if(level <= TOKEN_TITLE_H5_MARKER && is_white_space(lexer->lookahead)) {
                            lexer->result_symbol = level;
                            return true;
                        }
                    }
                    break;
                }
                case '*': {
                    usize counter = 0;
                    consume('*', lexer, false, &counter, USIZE_MAX);
                    lexer->mark_end(lexer);
                    bool is_unordered_marker = is_white_space(lexer->lookahead);

                    if(valid_symbols[TOKEN_BREAKS_MARKS]) {
                        skip_white_space(lexer);
                        while(lexer->lookahead == '*') {
                            lexer->advance(lexer, false);
                            skip_white_space(lexer);
                            ++counter;
                            if(counter > 3) {
                                break;
                            }
                        }
                        if(counter == 3 && is_newline(lexer->lookahead)) {
                            lexer->result_symbol = TOKEN_BREAKS_MARKS;
                            lexer->mark_end(lexer);
                            return true;
                        }
                    }

                    if(valid_symbols[TOKEN_LIST_MARKER_STAR]) {
                        lexer->result_symbol = TOKEN_LIST_MARKER_STAR;
                        return is_unordered_marker;
                    }

                    break;
                }
                case '-': {
                    usize counter = 0;
                    consume('-', lexer, false, &counter, USIZE_MAX);
                    lexer->mark_end(lexer);
                    bool is_unordered_marker = is_white_space(lexer->lookahead);
                    if(valid_symbols[TOKEN_OPEN_BLOCK_MARKER]) {
                        if(lexer->get_column(lexer) == 2 && is_newline(lexer->lookahead)) {
                            lexer->result_symbol = TOKEN_OPEN_BLOCK_MARKER;
                            return true;
                        }
                    }

                    if(valid_symbols[TOKEN_QUOTED_PARAGRAPH_MARKER]) {
                        if(lexer->get_column(lexer) == 2 && is_white_space(lexer->lookahead)) {
                            lexer->result_symbol = TOKEN_QUOTED_PARAGRAPH_MARKER;
                            return true;
                        }
                    }

                    if(valid_symbols[TOKEN_LISTING_BLOCK_START_MARKER] || valid_symbols[TOKEN_LISTING_BLOCK_END_MARKER]) {
                        usize counter = lexer->get_column(lexer);
                        if(counter >= 4 && is_newline(lexer->lookahead)) {
                            if(scanner_is_matching(s, BLOCK_KIND_LISTING, counter)) {
                                s->is_matching_raw_block = false;
                                scanner_pop(s);
                                lexer->result_symbol = TOKEN_LISTING_BLOCK_END_MARKER;
                                return true;
                            } else {
                                scanner_push(s, BLOCK_KIND_LISTING, counter);
                                s->is_matching_raw_block = true;
                                lexer->result_symbol = TOKEN_LISTING_BLOCK_START_MARKER;
                                return true;
                            }
                        }
                    }

                    if(valid_symbols[TOKEN_BREAKS_MARKS]) {
                        skip_white_space(lexer);
                        while(lexer->lookahead == '-') {
                            lexer->advance(lexer, false);
                            skip_white_space(lexer);
                            ++counter;
                            if(counter > 3) {
                                break;
                            }
                        }
                        if(counter == 3 && is_newline(lexer->lookahead)) {
                            lexer->result_symbol = TOKEN_BREAKS_MARKS;
                            lexer->mark_end(lexer);
                            return true;
                        }
                    }

                    if(valid_symbols[TOKEN_LIST_MARKER_HYPHEN] && is_unordered_marker) {
                        lexer->result_symbol = TOKEN_LIST_MARKER_HYPHEN;
                        return true;
                    }
                    break;
                }
                case '.': {
                    lexer->advance(lexer, false);
                    lexer->mark_end(lexer);
                    if(valid_symbols[TOKEN_LITERAL_BLOCK_MARKER]) {
                        if(parse_sequence(lexer, "...")) {
                            if(is_newline(lexer->lookahead)) {
                                lexer->mark_end(lexer);
                                lexer->result_symbol = TOKEN_LITERAL_BLOCK_MARKER;
                                s->is_matching_raw_block = !s->is_matching_raw_block;
                                return true;
                            }
                        }
                    }

                    if(valid_symbols[TOKEN_LIST_MARKER_DOT]) {
                        consume('.', lexer, false, NULL, USIZE_MAX);
                        if(is_white_space(lexer->lookahead)) {
                            lexer->mark_end(lexer);
                            lexer->result_symbol = TOKEN_LIST_MARKER_DOT;
                            return true;
                        }
                    }

                    if(valid_symbols[TOKEN_BLOCK_TITLE_MARKER]) {
                        if(lexer->get_column(lexer) == 1) {
                            lexer->mark_end(lexer);
                            lexer->result_symbol = TOKEN_BLOCK_TITLE_MARKER;
                            scanner_push(s, BLOCK_KIND_ATTR, 1);
                            return true;
                        }
                    }

                    break;
                }
                case ':': {
                    if(valid_symbols[TOKEN_DOCUMENT_ATTR_MARKER]) {
                        lexer->advance(lexer, false);
                        lexer->mark_end(lexer);
                        lexer->result_symbol = TOKEN_DOCUMENT_ATTR_MARKER;
                        return true;
                    }
                    break;
                }
                case '[': {
                    if(valid_symbols[TOKEN_ELEMENT_ATTR_MARKER]) {
                        lexer->advance(lexer, false);
                        lexer->mark_end(lexer);
                        lexer->result_symbol = TOKEN_ELEMENT_ATTR_MARKER;
                        scanner_push(s, BLOCK_KIND_ATTR, 1);
                        return true;
                    }
                    break;
                }
                case '\'': {
                    if(valid_symbols[TOKEN_BREAKS_MARKS]) {
                        if(parse_breaks('\'', lexer)) {
                            lexer->result_symbol = TOKEN_BREAKS_MARKS;
                            return true;
                        }
                    }
                    break;
                }
                case '<': {
                    if(valid_symbols[TOKEN_BREAKS_MARKS]) {
                        if(parse_breaks('<', lexer)) {
                            lexer->result_symbol = TOKEN_BREAKS_MARKS;
                            return true;
                        }
                    }
                    if(valid_symbols[TOKEN_ANNO_LIST_MARKER]) {
                        if(lexer->get_column(lexer) == 1) {
                            if(parse_sequence(lexer, ".>")) {
                                lexer->mark_end(lexer);
                                lexer->result_symbol = TOKEN_ANNO_LIST_MARKER;
                                if(is_white_space(lexer->lookahead)) {
                                    return true;
                                }
                            }
                            if(parse_number(lexer)) {
                                if(lexer->lookahead == '>') {
                                    lexer->advance(lexer, false);
                                    lexer->mark_end(lexer);
                                    if(is_white_space(lexer->lookahead)) {
                                        lexer->result_symbol = TOKEN_ANNO_LIST_MARKER;
                                        return true;
                                    }
                                }
                            }
                        }
                    }
                    break;
                }
                case '|': {  // Table
                    if(valid_symbols[TOKEN_TABLE_BLOCK_MARKER]) {
                        lexer->advance(lexer, false);
                        usize counter = 0;
                        consume('=', lexer, false, &counter, USIZE_MAX);
                        if(counter >= 3 && is_newline(lexer->lookahead)) {
                            if(scanner_is_matching(s, BLOCK_KIND_TABLE, 0)) {
                                if(scanner_is_matching(s, BLOCK_KIND_TABLE, counter)) {
                                    lexer->mark_end(lexer);
                                    lexer->result_symbol = TOKEN_TABLE_BLOCK_MARKER;
                                    scanner_pop(s);
                                    return true;
                                }
                            } else {
                                lexer->mark_end(lexer);
                                lexer->result_symbol = TOKEN_TABLE_BLOCK_MARKER;
                                scanner_push(s, BLOCK_KIND_TABLE, counter);
                                return true;
                            }
                        }
                    }
                    break;
                }
                case '!': {  // NTable
                    if(valid_symbols[TOKEN_NTABLE_BLOCK_MARKER]) {
                        lexer->advance(lexer, false);
                        consume('=', lexer, false, NULL, USIZE_MAX);
                        if(is_newline(lexer->lookahead)) {
                            lexer->mark_end(lexer);
                            lexer->result_symbol = TOKEN_NTABLE_BLOCK_MARKER;
                            return true;
                        }
                    }
                    break;
                }
                case '/': {
                    if(valid_symbols[TOKEN_LINE_COMMENT_MARKER] ||
                       valid_symbols[TOKEN_BLOCK_COMMENT_MARKER]) {
                        if(parse_sequence(lexer, "//")) {
                            lexer->mark_end(lexer);
                            if(valid_symbols[TOKEN_BLOCK_COMMENT_MARKER]) {
                                if(parse_sequence(lexer, "//")) {
                                    if(is_newline(lexer->lookahead)) {
                                        lexer->result_symbol = TOKEN_BLOCK_COMMENT_MARKER;
                                        lexer->mark_end(lexer);
                                        return true;
                                    }
                                }
                            }
                            lexer->result_symbol = TOKEN_LINE_COMMENT_MARKER;
                            return true;
                        }
                    }
                    break;
                }
                case '_': {
                    if(valid_symbols[TOKEN_QUOTED_BLOCK_MARKER]) {
                        if(parse_sequence(lexer, "____")) {
                            lexer->mark_end(lexer);
                            lexer->result_symbol = TOKEN_QUOTED_BLOCK_MARKER;
                            if(is_newline(lexer->lookahead) || is_eof(lexer)) {
                                return true;
                            }
                        }
                    }
                    break;
                }
                case '>': {
                    if(valid_symbols[TOKEN_QUOTED_BLOCK_MD_MARKER]) {
                        lexer->advance(lexer, false);
                        lexer->mark_end(lexer);
                        lexer->result_symbol = TOKEN_QUOTED_BLOCK_MD_MARKER;
                        if(is_white_space(lexer->lookahead) || is_eof(lexer) || is_newline(lexer->lookahead)) {
                            return true;
                        }
                    }
                    break;
                }
                case '+': {
                    lexer->advance(lexer, false);
                    if(valid_symbols[TOKEN_LIST_CONTINUATION]) {
                        if(is_newline(lexer->lookahead)) {
                            lexer->result_symbol = TOKEN_LIST_CONTINUATION;
                            lexer->mark_end(lexer);
                            return true;
                        }
                    }
                    if(valid_symbols[TOKEN_PASSTHROUGH_BLOCK_MARKER]) {
                        if(parse_sequence(lexer, "+++")) {
                            lexer->mark_end(lexer);
                            lexer->result_symbol = TOKEN_PASSTHROUGH_BLOCK_MARKER;
                            if(is_new_line(lexer->lookahead) || is_eof(lexer)) {
                                return true;
                            }
                        }
                    }
                }
            }
        }

        if(
            lexer->get_column(lexer) == 0 && valid_symbols[TOKEN_IDENT_MARKER] && is_white_space(lexer->lookahead)
        ) {
            skip_white_space(lexer);
            if(!is_new_line(lexer->lookahead) && !is_eof(lexer)) {
                lexer->mark_end(lexer);
                lexer->result_symbol = TOKEN_IDENT_MARKER;
                return true;
            }
        }
    }

    if(valid_symbols[TOKEN_ANNO_MARKER]) {
        parse_sequence(lexer, "#");
        parse_sequence(lexer, "//");
        parse_sequence(lexer, ";;");
        skip_white_space(lexer);

        if(parse_sequence(lexer, "<.>")) {
            lexer->mark_end(lexer);
            if(is_newline(lexer->lookahead)) {
                lexer->result_symbol = TOKEN_ANNO_MARKER;
                return true;
            }
        }

        if(parse_number(lexer)) {
            if(lexer->lookahead == '>') {
                lexer->advance(lexer, false);
                lexer->mark_end(lexer);
                if(is_newline(lexer->lookahead)) {
                    lexer->result_symbol = TOKEN_ANNO_MARKER;
                    return true;
                }
            }
        }

        if(parse_sequence(lexer, "!--")) {
            if(lexer->lookahead == '.' || parse_number(lexer)) {
                if(parse_sequence(lexer, "-->")) {
                    lexer->mark_end(lexer);
                    if(is_new_line(lexer->lookahead)) {
                        lexer->result_symbol = TOKEN_ANNO_MARKER;
                        return true;
                    }
                }
            }
        }
    }

    if(
        start_pos == lexer->get_column(lexer) &&
        valid_symbols[TOKEN_CELL_ATTR]
    ) {
        bool has_token = false;
        while(parse_table_attr(lexer)) {
            has_token = true;
        }

        if(has_token) {
            if(lexer->lookahead == '|' || lexer->lookahead == '!') {
                lexer->result_symbol = TOKEN_CELL_ATTR;
                lexer->mark_end(lexer);
                return true;
            }
        }
    }

    return false;
}

bool parse_ordered_marker(TSLexer *lexer) {
    if(lexer->get_column(lexer) != 0) {
        return false;
    }

    if(is_ascii_digit(lexer->lookahead)) {
        while(is_ascii_digit(lexer->lookahead)) {
            lexer->advance(lexer, false);
        }
        lexer->result_symbol = TOKEN_LIST_MARKER_DIGIT;
    } else if(is_ascii_alpha_lower(lexer->lookahead)) {
        lexer->result_symbol = TOKEN_LIST_MARKER_ALPHA;
        lexer->advance(lexer, false);
    } else if(is_geek_lower(lexer->lookahead)) {
        lexer->result_symbol = TOKEN_LIST_MARKER_GEEK;
        lexer->advance(lexer, false);
    } else {
        return false;
    }

    if(lexer->lookahead != '.') {
        return false;
    }
    lexer->advance(lexer, false);
    if(!is_white_space(lexer->lookahead)) {
        return false;
    }
    lexer->mark_end(lexer);
    return true;
}

static bool is_white_space(i32 ch) {
    return ch == ' ' || ch == '\t';
}

static bool is_ascii_digit(i32 ch) {
    return ch >= '0' && ch <= '9';
}

static bool is_ascii_alpha_lower(i32 ch) {
    return ch >= 'a' && ch <= 'z';
}

static bool is_geek_lower(i32 ch) {
    return ch >= 945 && ch <= 969;
}

static bool parse_breaks(char start, TSLexer *lexer) {
    if(lexer->get_column(lexer) != 0) {
        return false;
    }

    i32 counter = 0;

    while(lexer->lookahead == start) {
        lexer->advance(lexer, false);
        skip_white_space(lexer);
        ++counter;
        if(counter > 3) {
            return false;
        }
    }

    lexer->mark_end(lexer);

    return counter == 3 && is_newline(lexer->lookahead);
}

static bool skip_white_space(TSLexer *lexer) {
    bool has_skiped = false;
    while(is_white_space(lexer->lookahead)) {
        lexer->advance(lexer, false);
        has_skiped = true;
    }

    return has_skiped;
}

static bool is_newline(i32 ch) {
    return ch == '\r' || ch == '\n';
}

static bool is_eof(TSLexer *lexer) {
    return lexer->eof(lexer);
}

static bool is_new_line(i32 ch) {
    return ch == '\r' || ch == '\n';
}

static bool consume(i32 ch, TSLexer *lexer, bool skip_space, usize *counter, usize max) {
    bool has_space = false;
    if(skip_space) {
        has_space |= skip_white_space(lexer);
    }

    while(lexer->lookahead == ch) {
        lexer->advance(lexer, false);
        if(skip_space) {
            has_space |= skip_white_space(lexer);
        }
        --max;
        if(counter != NULL) {
            *counter += 1;
        }
        if(max == 0) {
            break;
        }
    }

    lexer->mark_end(lexer);
    return has_space;
}

static usize ts_str_len(char const *str) {
    usize len = 0;
    while(str[len] != 0) {
        ++len;
    }

    return len;
}

static bool parse_sequence(TSLexer *lexer, char const *sequence) {
    usize len = ts_str_len(sequence);
    usize pos = 0;

    while(pos < len) {
        if(lexer->lookahead != sequence[pos]) {
            return false;
        }

        lexer->advance(lexer, false);
        ++pos;
    }

    return true;
}

static bool parse_number(TSLexer *lexer) {
    bool has_number = false;
    while(is_ascii_digit(lexer->lookahead)) {
        lexer->advance(lexer, false);
        has_number = true;
    }
    return has_number;
}

char table_cell_attr_align_left = '<';
char table_cell_attr_align_right = '>';
char table_cell_attr_align_middle = '^';
char table_cell_attr_style_none = 'd';
char table_cell_attr_style_strong = 's';
char table_cell_attr_style_emphasis = 'e';
char table_cell_attr_style_monospaced = 'm';
char table_cell_attr_style_header = 'h';
char table_cell_attr_style_literal = 'l';
char table_cell_attr_style_loongdoc = 'a';

static bool parse_table_attr(TSLexer *lexer) {
    if(lexer->lookahead == table_cell_attr_align_left ||
       lexer->lookahead == table_cell_attr_align_right ||
       lexer->lookahead == table_cell_attr_align_middle ||
       lexer->lookahead == table_cell_attr_style_none ||
       lexer->lookahead == table_cell_attr_style_strong ||
       lexer->lookahead == table_cell_attr_style_emphasis ||
       lexer->lookahead == table_cell_attr_style_monospaced ||
       lexer->lookahead == table_cell_attr_style_header ||
       lexer->lookahead == table_cell_attr_style_literal ||
       lexer->lookahead == table_cell_attr_style_loongdoc) {
        lexer->advance(lexer, false);
        return true;
    }
    // table_cell_span_vertical = /\.\d+\+/;
    if(lexer->lookahead == '.') {
        lexer->advance(lexer, false);
        return parse_number(lexer);
    }
    // table_cell_span_width = /\d+\+/;
    // table_cell_span_vw = /\d+\.\d+\+/;
    if(parse_number(lexer)) {
        if(lexer->lookahead == '.') {
            lexer->advance(lexer, false);
            if(!parse_number(lexer)) {
                return false;
            }
        }
        if(lexer->lookahead == '+') {
            lexer->advance(lexer, false);
            return true;
        }
    }

    return false;
}
