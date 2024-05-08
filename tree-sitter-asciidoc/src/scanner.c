#include "tree_sitter/parser.h"

typedef enum TokenType {
    TOKEN_TYPE_EOF,
    TOKEN_TITLE_H1_MARKER,
    TOKEN_TITLE_H2_MARKER,
    TOKEN_TITLE_H3_MARKER,
    TOKEN_TITLE_H4_MARKER,
    TOKEN_TITLE_H5_MARKER,
} TokenType;

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
        switch(lexer->lookahead) {
            case '=': {
                lexer->advance(lexer, false);
                if(!valid_symbols[TOKEN_TITLE_H1_MARKER]) {
                    break;
                }
                unsigned level = TOKEN_TITLE_H1_MARKER;
                while(lexer->lookahead == '=') {
                    lexer->advance(lexer, false);
                    ++level;
                }
                if(level > TOKEN_TITLE_H5_MARKER) {
                    return false;
                }
                if(lexer->lookahead != ' ') {
                    return false;
                }
                lexer->mark_end(lexer);
                lexer->result_symbol = level;
                return true;
            }
        }
    }

    return false;
}
