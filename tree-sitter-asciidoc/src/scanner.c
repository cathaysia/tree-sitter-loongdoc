#include "include/base_types.h"
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
    TOKEN_DELIMITED_BLOCK_MARKER,
    TOKEN_RAW_BLOCK_MARKER,
    TOKEN_QUOTED_BLOCK_MARKER,
    TOKEN_QUOTED_BLOCK_MD_MARKER,
    TOKEN_QUOTED_PARAGRAPH_MARKER,
    TOKEN_OPEN_BLOCK_MARKER,
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
} TokenType;

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

typedef struct Scanner {
    bool is_matching_raw_block;
} Scanner;

void *tree_sitter_asciidoc_external_scanner_create() {
    Scanner *s = (Scanner *)malloc(sizeof(Scanner));
    s->is_matching_raw_block = false;
    return s;
}

void tree_sitter_asciidoc_external_scanner_destroy(void *payload) {
    free(payload);
}

unsigned tree_sitter_asciidoc_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *s = (Scanner *)payload;
    usize size = 0;

    buffer[size++] = (char)s->is_matching_raw_block;

    return size;
}

void tree_sitter_asciidoc_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    ADOC_UNUSED(length);

    if(buffer) {
        Scanner *s = (Scanner *)payload;
        s->is_matching_raw_block = (bool)buffer[0];
    }
}

bool tree_sitter_asciidoc_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
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
                        if(lexer->get_column(lexer) == 4 && is_newline(lexer->lookahead)) {
                            lexer->result_symbol = TOKEN_DELIMITED_BLOCK_MARKER;
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

                    if(valid_symbols[TOKEN_RAW_BLOCK_MARKER]) {
                        if(lexer->get_column(lexer) == 4 && is_newline(lexer->lookahead)) {
                            lexer->result_symbol = TOKEN_RAW_BLOCK_MARKER;
                            s->is_matching_raw_block = !s->is_matching_raw_block;
                            return true;
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
                    if(valid_symbols[TOKEN_RAW_BLOCK_MARKER]) {
                        if(parse_sequence(lexer, "...")) {
                            if(is_newline(lexer->lookahead)) {
                                lexer->mark_end(lexer);
                                lexer->result_symbol = TOKEN_RAW_BLOCK_MARKER;
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
                        consume('=', lexer, false, NULL, USIZE_MAX);
                        if(is_newline(lexer->lookahead)) {
                            lexer->mark_end(lexer);
                            lexer->result_symbol = TOKEN_TABLE_BLOCK_MARKER;
                            return true;
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
