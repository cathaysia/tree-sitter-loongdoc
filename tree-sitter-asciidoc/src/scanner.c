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
    TOKEN_DELIMITED_BLOCK_MARKER,
    TOKEN_RAW_BLOCK_MARKER,
    TOKEN_INCLUDE_TOKEN
} TokenType;

static bool parse_sequence(TSLexer *lexer, char const *sequence);
static bool parse_ordered_marker(TSLexer *lexer, const bool *valid_symbols);
static bool parse_block_title_marker(TSLexer *lexer, const bool *valid_symbols);
static bool parse_breaks(char start, TSLexer *lexer, const bool *valid_symbols);
static bool consume(i32 ch, TSLexer *lexer, bool skip_space, usize *counter, usize max);
static bool skip_white_space(TSLexer *lexer);
static bool is_white_space(i32 ch);
static bool is_new_line(i32 ch);
static bool is_ascii_digit(i32 ch);
static bool is_ascii_alpha_lower(i32 ch);
static bool is_geek_lower(i32 ch);
static bool is_newline(i32 ch);

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
        bool is_i = lexer->lookahead == 'i';
        if(parse_ordered_marker(lexer, valid_symbols)) {
            return true;
        }

        if(is_i) {
            if(valid_symbols[TOKEN_INCLUDE_TOKEN]) {
                if(parse_sequence(lexer, "nclude")) {
                    lexer->result_symbol = TOKEN_INCLUDE_TOKEN;
                    lexer->mark_end(lexer);
                    return true;
                }
            }
        }

        switch(lexer->lookahead) {
            case '=': {
                consume('=', lexer, false, NULL, USIZE_MAX);
                lexer->mark_end(lexer);
                if(lexer->get_column(lexer) == 4 && is_newline(lexer->lookahead)) {
                    lexer->result_symbol = TOKEN_DELIMITED_BLOCK_MARKER;
                    return true;
                }

                usize level = TOKEN_TITLE_H0_MARKER - 1 + lexer->get_column(lexer);
                if(level <= TOKEN_TITLE_H5_MARKER && is_white_space(lexer->lookahead)) {
                    lexer->result_symbol = level;
                    return true;
                }
                return false;
            }
            case '*': {
                lexer->result_symbol = TOKEN_LIST_MARKER_STAR;
                usize counter = 0;
                consume('*', lexer, false, &counter, USIZE_MAX);
                lexer->mark_end(lexer);
                bool is_unordered_marker = is_white_space(lexer->lookahead);
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

                return is_unordered_marker;
            }
            case '-': {
                lexer->result_symbol = TOKEN_LIST_MARKER_HYPHEN;
                usize counter = 0;
                consume('-', lexer, false, &counter, USIZE_MAX);
                lexer->mark_end(lexer);
                bool is_unordered_marker = is_white_space(lexer->lookahead);
                if(lexer->get_column(lexer) == 4 && is_newline(lexer->lookahead)) {
                    lexer->result_symbol = TOKEN_RAW_BLOCK_MARKER;
                    return true;
                }

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
                if(valid_symbols[TOKEN_DOCUMENT_ATTR_MARKER]) {
                    lexer->advance(lexer, false);
                    lexer->mark_end(lexer);
                    lexer->result_symbol = TOKEN_DOCUMENT_ATTR_MARKER;
                    return true;
                }
                break;
            }
            case '[': {
                lexer->advance(lexer, false);
                lexer->mark_end(lexer);
                lexer->result_symbol = TOKEN_ELEMENT_ATTR_MARKER;
                return true;
            }
            case '\'': {
                if(parse_breaks('\'', lexer, valid_symbols)) {
                    lexer->result_symbol = TOKEN_BREAKS_MARKS;
                    return true;
                }
                break;
            }
            case '<': {
                if(parse_breaks('<', lexer, valid_symbols)) {
                    lexer->result_symbol = TOKEN_BREAKS_MARKS;
                    return true;
                }
                break;
            }
            case '|': {
                lexer->advance(lexer, false);
                consume('=', lexer, false, NULL, USIZE_MAX);
                if(is_newline(lexer->lookahead)) {
                    lexer->mark_end(lexer);
                    lexer->result_symbol = TOKEN_TABLE_BLOCK_MARKER;
                    return true;
                }
                break;
            }
        }
    }

    return false;
}

bool parse_ordered_marker(TSLexer *lexer, const bool *valid_symbols) {
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
