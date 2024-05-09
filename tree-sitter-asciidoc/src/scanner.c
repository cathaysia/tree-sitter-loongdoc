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
} TokenType;

static bool parse_unordered_marker(char start, TSLexer *lexer, const bool *valid_symbols);
static bool parse_ordered_marker(TSLexer *lexer, const bool *valid_symbols);
static bool is_white_space(int32_t ch);
static bool is_ascii_digit(int32_t ch);
static bool is_ascii_alpha_lower(int32_t ch);
static bool is_geek_lower(int32_t ch);

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
                if(parse_unordered_marker('*', lexer, valid_symbols)) {
                    return true;
                }
            }
            case '-': {
                lexer->result_symbol = TOKEN_LIST_MARKER_HYPHEN;
                if(parse_unordered_marker('-', lexer, valid_symbols)) {
                    return true;
                }
            }
            case '.': {
                lexer->result_symbol = TOKEN_LIST_MARKER_DOT;
                if(parse_unordered_marker('.', lexer, valid_symbols)) {
                    return true;
                }
            }
            case ':': {
                lexer->result_symbol = TOKEN_DOCUMENT_ATTR_MARKER;
                if(lexer->get_column(lexer) != 0) {
                    return false;
                }
                lexer->advance(lexer, true);
                lexer->mark_end(lexer);
                return true;
            }
        }
    }

    return false;
}

bool parse_unordered_marker(char start, TSLexer *lexer, const bool *valid_symbols) {
    if(lexer->get_column(lexer) != 0) {
        return false;
    }
    while(lexer->lookahead == start) {
        lexer->advance(lexer, false);
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
