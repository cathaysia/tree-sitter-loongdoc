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
    TOKEN_BREAKS_MARKS
} TokenType;

static bool parse_unordered_marker(char start, TSLexer *lexer, const bool *valid_symbols, uintptr_t *counter);
static bool parse_ordered_marker(TSLexer *lexer, const bool *valid_symbols);
static bool parse_block_title_marker(TSLexer *lexer, const bool *valid_symbols);
static bool parse_breaks(char start, TSLexer *lexer, const bool *valid_symbols);
static void skip_white_space(TSLexer *lexer);
static bool is_white_space(int32_t ch);
static bool is_ascii_digit(int32_t ch);
static bool is_ascii_alpha_lower(int32_t ch);
static bool is_geek_lower(int32_t ch);
static bool is_newline(int32_t ch);

void *tree_sitter_asciidoc_external_scanner_create() {
    return NULL;
}

void tree_sitter_asciidoc_external_scanner_destroy(void *payload) {
    // ...
}

unsigned tree_sitter_asciidoc_external_scanner_serialize(void *payload, char *buffer) {
    return 0;
}

void tree_sitter_asciidoc_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    // ...
}

bool tree_sitter_asciidoc_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    if(lexer->eof(lexer)) {
        if(valid_symbols[TOKEN_TYPE_EOF]) {
            lexer->result_symbol = TOKEN_TYPE_EOF;
            return true;
        }
    }

    if(lexer->get_column(lexer) == 0) {
        if(parse_ordered_marker(lexer, valid_symbols)) {
            return true;
        }
        switch(lexer->lookahead) {
            case '=': {
                if(!valid_symbols[TOKEN_TITLE_H0_MARKER]) {
                    break;
                }
                unsigned level = TOKEN_TITLE_H0_MARKER - 1;
                while(lexer->lookahead == '=') {
                    lexer->advance(lexer, false);
                    lexer->mark_end(lexer);
                    ++level;
                }
                if(level > TOKEN_TITLE_H5_MARKER) {
                    return false;
                }
                if(!is_white_space(lexer->lookahead)) {
                    return false;
                }
                lexer->result_symbol = level;
                return true;
            }
            case '*': {
                lexer->result_symbol = TOKEN_LIST_MARKER_STAR;
                uintptr_t counter = 0;
                bool is_unordered_marker = parse_unordered_marker('*', lexer, valid_symbols, &counter);
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

                return is_unordered_marker;
            }
            case '-': {
                lexer->result_symbol = TOKEN_LIST_MARKER_HYPHEN;
                uintptr_t counter = 0;
                bool is_unordered_marker = parse_unordered_marker('-', lexer, valid_symbols, &counter);
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

                return is_unordered_marker;
            }
            case '.': {
                lexer->result_symbol = TOKEN_BLOCK_TITLE_MARKER;
                if(parse_block_title_marker(lexer, valid_symbols)) {
                    return true;
                }
                lexer->result_symbol = TOKEN_LIST_MARKER_DOT;
                if(lexer->get_column(lexer) != 1) {
                    return false;
                }
                while(lexer->lookahead == '.') {
                    lexer->advance(lexer, false);
                }
                if(is_white_space(lexer->lookahead)) {
                    lexer->mark_end(lexer);
                    return true;
                }
            }
            case ':': {
                lexer->result_symbol = TOKEN_DOCUMENT_ATTR_MARKER;
                if(lexer->get_column(lexer) != 0) {
                    return false;
                }
                lexer->advance(lexer, false);
                lexer->mark_end(lexer);
                return true;
            }
            case '[': {
                lexer->result_symbol = TOKEN_ELEMENT_ATTR_MARKER;
                if(lexer->get_column(lexer) != 0) {
                    return false;
                }
                lexer->advance(lexer, false);
                lexer->mark_end(lexer);
                return true;
            }
            case '\'': {
                lexer->result_symbol = TOKEN_BREAKS_MARKS;
                if(parse_breaks('\'', lexer, valid_symbols)) {
                    return true;
                }
            }
            case '<': {
                lexer->result_symbol = TOKEN_BREAKS_MARKS;
                if(parse_breaks('<', lexer, valid_symbols)) {
                    return true;
                }
            }
        }
    }

    return false;
}

bool parse_unordered_marker(char start, TSLexer *lexer, const bool *valid_symbols, uintptr_t *counter) {
    if(lexer->get_column(lexer) != 0) {
        return false;
    }
    while(lexer->lookahead == start) {
        lexer->advance(lexer, false);
        ++(*counter);
    }
    if(!is_white_space(lexer->lookahead)) {
        return false;
    }
    lexer->mark_end(lexer);

    return true;
}

bool parse_ordered_marker(TSLexer *lexer, const bool *valid_symbols) {
    if(lexer->get_column(lexer) != 0) {
        return false;
    }

    typedef bool (*FnJudge)(int32_t);
    FnJudge is_order_marker;
    if(is_ascii_digit(lexer->lookahead)) {
        is_order_marker = is_ascii_digit;
        lexer->result_symbol = TOKEN_LIST_MARKER_DIGIT;
    } else if(is_ascii_alpha_lower(lexer->lookahead)) {
        is_order_marker = is_ascii_alpha_lower;
        lexer->result_symbol = TOKEN_LIST_MARKER_ALPHA;
    } else if(is_geek_lower(lexer->lookahead)) {
        is_order_marker = is_geek_lower;
        lexer->result_symbol = TOKEN_LIST_MARKER_GEEK;
    } else {
        return false;
    }

    while(is_order_marker(lexer->lookahead)) {
        lexer->advance(lexer, false);
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

static bool is_white_space(int32_t ch) {
    return ch == ' ' || ch == '\t';
}

static bool is_ascii_digit(int32_t ch) {
    return ch >= '0' && ch <= '9';
}

static bool is_ascii_alpha_lower(int32_t ch) {
    return ch >= 'a' && ch <= 'z';
}

static bool is_geek_lower(int32_t ch) {
    return ch >= 945 && ch <= 969;
}

static bool parse_block_title_marker(TSLexer *lexer, const bool *valid_symbols) {
    if(!valid_symbols[TOKEN_BLOCK_TITLE_MARKER]) {
        return false;
    }
    if(lexer->get_column(lexer) != 0) {
        return false;
    }

    lexer->advance(lexer, false);
    if(is_white_space(lexer->lookahead)) {
        return false;
    }

    lexer->mark_end(lexer);
    return true;
}

static bool parse_breaks(char start, TSLexer *lexer, const bool *valid_symbols) {
    if(!valid_symbols[TOKEN_BREAKS_MARKS]) {
        return false;
    }
    if(lexer->get_column(lexer) != 0) {
        return false;
    }

    uint32_t counter = 0;

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

static void skip_white_space(TSLexer *lexer) {
    while(is_white_space(lexer->lookahead)) {
        lexer->advance(lexer, false);
    }
}

static bool is_newline(int32_t ch) {
    return ch == '\r' || ch == '\n';
}
