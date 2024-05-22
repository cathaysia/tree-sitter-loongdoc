#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 10
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
    anon_sym_LBRACE = 1,
    aux_sym_replacement_token1 = 2,
    anon_sym_RBRACE = 3,
    sym__word_no_digit = 4,
    sym__digits = 5,
    anon_sym_BANG = 6,
    anon_sym_DQUOTE = 7,
    anon_sym_POUND = 8,
    anon_sym_DOLLAR = 9,
    anon_sym_PERCENT = 10,
    anon_sym_AMP = 11,
    anon_sym_SQUOTE = 12,
    anon_sym_LPAREN = 13,
    anon_sym_RPAREN = 14,
    anon_sym_STAR = 15,
    anon_sym_PLUS = 16,
    anon_sym_COMMA = 17,
    anon_sym_DASH = 18,
    anon_sym_DOT = 19,
    anon_sym_SLASH = 20,
    anon_sym_COLON = 21,
    anon_sym_SEMI = 22,
    anon_sym_LT = 23,
    anon_sym_EQ = 24,
    anon_sym_GT = 25,
    anon_sym_QMARK = 26,
    anon_sym_AT = 27,
    anon_sym_LBRACK = 28,
    anon_sym_BSLASH = 29,
    anon_sym_RBRACK = 30,
    anon_sym_CARET = 31,
    anon_sym__ = 32,
    anon_sym_BQUOTE = 33,
    anon_sym_PIPE = 34,
    anon_sym_TILDE = 35,
    sym_inline = 36,
    sym_replacement = 37,
    sym_word = 38,
    sym_punctuation = 39,
    aux_sym_inline_repeat1 = 40,
};

static const char *const ts_symbol_names[] = {
    [ts_builtin_sym_end] = "end",
    [anon_sym_LBRACE] = "{",
    [aux_sym_replacement_token1] = "replacement_token1",
    [anon_sym_RBRACE] = "}",
    [sym__word_no_digit] = "_word_no_digit",
    [sym__digits] = "_digits",
    [anon_sym_BANG] = "!",
    [anon_sym_DQUOTE] = "\"",
    [anon_sym_POUND] = "#",
    [anon_sym_DOLLAR] = "$",
    [anon_sym_PERCENT] = "%",
    [anon_sym_AMP] = "&",
    [anon_sym_SQUOTE] = "'",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_STAR] = "*",
    [anon_sym_PLUS] = "+",
    [anon_sym_COMMA] = ",",
    [anon_sym_DASH] = "-",
    [anon_sym_DOT] = ".",
    [anon_sym_SLASH] = "/",
    [anon_sym_COLON] = ":",
    [anon_sym_SEMI] = ";",
    [anon_sym_LT] = "<",
    [anon_sym_EQ] = "=",
    [anon_sym_GT] = ">",
    [anon_sym_QMARK] = "\?",
    [anon_sym_AT] = "@",
    [anon_sym_LBRACK] = "[",
    [anon_sym_BSLASH] = "\\",
    [anon_sym_RBRACK] = "]",
    [anon_sym_CARET] = "^",
    [anon_sym__] = "_",
    [anon_sym_BQUOTE] = "`",
    [anon_sym_PIPE] = "|",
    [anon_sym_TILDE] = "~",
    [sym_inline] = "inline",
    [sym_replacement] = "replacement",
    [sym_word] = "word",
    [sym_punctuation] = "punctuation",
    [aux_sym_inline_repeat1] = "inline_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
    [ts_builtin_sym_end] = ts_builtin_sym_end,
    [anon_sym_LBRACE] = anon_sym_LBRACE,
    [aux_sym_replacement_token1] = aux_sym_replacement_token1,
    [anon_sym_RBRACE] = anon_sym_RBRACE,
    [sym__word_no_digit] = sym__word_no_digit,
    [sym__digits] = sym__digits,
    [anon_sym_BANG] = anon_sym_BANG,
    [anon_sym_DQUOTE] = anon_sym_DQUOTE,
    [anon_sym_POUND] = anon_sym_POUND,
    [anon_sym_DOLLAR] = anon_sym_DOLLAR,
    [anon_sym_PERCENT] = anon_sym_PERCENT,
    [anon_sym_AMP] = anon_sym_AMP,
    [anon_sym_SQUOTE] = anon_sym_SQUOTE,
    [anon_sym_LPAREN] = anon_sym_LPAREN,
    [anon_sym_RPAREN] = anon_sym_RPAREN,
    [anon_sym_STAR] = anon_sym_STAR,
    [anon_sym_PLUS] = anon_sym_PLUS,
    [anon_sym_COMMA] = anon_sym_COMMA,
    [anon_sym_DASH] = anon_sym_DASH,
    [anon_sym_DOT] = anon_sym_DOT,
    [anon_sym_SLASH] = anon_sym_SLASH,
    [anon_sym_COLON] = anon_sym_COLON,
    [anon_sym_SEMI] = anon_sym_SEMI,
    [anon_sym_LT] = anon_sym_LT,
    [anon_sym_EQ] = anon_sym_EQ,
    [anon_sym_GT] = anon_sym_GT,
    [anon_sym_QMARK] = anon_sym_QMARK,
    [anon_sym_AT] = anon_sym_AT,
    [anon_sym_LBRACK] = anon_sym_LBRACK,
    [anon_sym_BSLASH] = anon_sym_BSLASH,
    [anon_sym_RBRACK] = anon_sym_RBRACK,
    [anon_sym_CARET] = anon_sym_CARET,
    [anon_sym__] = anon_sym__,
    [anon_sym_BQUOTE] = anon_sym_BQUOTE,
    [anon_sym_PIPE] = anon_sym_PIPE,
    [anon_sym_TILDE] = anon_sym_TILDE,
    [sym_inline] = sym_inline,
    [sym_replacement] = sym_replacement,
    [sym_word] = sym_word,
    [sym_punctuation] = sym_punctuation,
    [aux_sym_inline_repeat1] = aux_sym_inline_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
    [ts_builtin_sym_end] = {
        .visible = false,
        .named = true,
    },
    [anon_sym_LBRACE] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_replacement_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_RBRACE] = {
        .visible = true,
        .named = false,
    },
    [sym__word_no_digit] = {
        .visible = false,
        .named = true,
    },
    [sym__digits] = {
        .visible = false,
        .named = true,
    },
    [anon_sym_BANG] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_DQUOTE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_POUND] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_DOLLAR] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_PERCENT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_AMP] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_SQUOTE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LPAREN] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_RPAREN] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_STAR] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_PLUS] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COMMA] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_DASH] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_DOT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_SLASH] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COLON] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_SEMI] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_EQ] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_GT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_QMARK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_AT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASH] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_RBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_CARET] = {
        .visible = true,
        .named = false,
    },
    [anon_sym__] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BQUOTE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_PIPE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_TILDE] = {
        .visible = true,
        .named = false,
    },
    [sym_inline] = {
        .visible = true,
        .named = true,
    },
    [sym_replacement] = {
        .visible = true,
        .named = true,
    },
    [sym_word] = {
        .visible = true,
        .named = true,
    },
    [sym_punctuation] = {
        .visible = true,
        .named = true,
    },
    [aux_sym_inline_repeat1] = {
        .visible = false,
        .named = false,
    },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
    [0] = { 0 },
};

static const uint16_t ts_non_terminal_alias_map[] = {
    0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
    [0] = 0,
    [1] = 1,
    [2] = 2,
    [3] = 3,
    [4] = 4,
    [5] = 5,
    [6] = 6,
    [7] = 7,
    [8] = 8,
    [9] = 9,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(4);
            ADVANCE_MAP(
                '!', 14,
                '"', 15,
                '#', 16,
                '$', 17,
                '%', 18,
                '&', 19,
                '\'', 20,
                '(', 21,
                ')', 22,
                '*', 23,
                '+', 24,
                ',', 25,
                '-', 26,
                '.', 27,
                '/', 28,
                ':', 29,
                ';', 30,
                '<', 31,
                '=', 32,
                '>', 33,
                '?', 34,
                '@', 35,
                '[', 36,
                '\\', 37,
                ']', 38,
                '^', 39,
                '_', 43,
                '`', 44,
                '{', 5,
                '|', 45,
                '}', 9,
                '~', 46,
                0x0b, 10,
                '\f', 10,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(7);
            if(('A' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if(lookahead != 0)
                ADVANCE(11);
            END_STATE();
        case 1:
            if(lookahead == '_')
                ADVANCE(1);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(11);
            END_STATE();
        case 2:
            if(lookahead == '}')
                ADVANCE(9);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(2);
            END_STATE();
        case 3:
            if(eof)
                ADVANCE(4);
            ADVANCE_MAP(
                '!', 14,
                '"', 15,
                '#', 16,
                '$', 17,
                '%', 18,
                '&', 19,
                '\'', 20,
                '(', 21,
                ')', 22,
                '*', 23,
                '+', 24,
                ',', 25,
                '-', 26,
                '.', 27,
                '/', 28,
                ':', 29,
                ';', 30,
                '<', 31,
                '=', 32,
                '>', 33,
                '?', 34,
                '@', 35,
                '[', 36,
                '\\', 37,
                ']', 38,
                '^', 39,
                '_', 40,
                '`', 44,
                '{', 5,
                '|', 45,
                '}', 9,
                '~', 46,
                0x0b, 12,
                '\f', 12,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(3);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(13);
            if(lookahead != 0)
                ADVANCE(11);
            END_STATE();
        case 4:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 5:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 6:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(6);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(8);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(11);
            END_STATE();
        case 7:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(7);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            END_STATE();
        case 8:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            END_STATE();
        case 9:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 10:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(41);
            if(lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(10);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(11);
            END_STATE();
        case 11:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(1);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(11);
            END_STATE();
        case 12:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(42);
            if(lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(12);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(11);
            END_STATE();
        case 13:
            ACCEPT_TOKEN(sym__digits);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(13);
            END_STATE();
        case 14:
            ACCEPT_TOKEN(anon_sym_BANG);
            END_STATE();
        case 15:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 16:
            ACCEPT_TOKEN(anon_sym_POUND);
            END_STATE();
        case 17:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 18:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 19:
            ACCEPT_TOKEN(anon_sym_AMP);
            END_STATE();
        case 20:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 21:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 22:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 23:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 24:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 25:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 26:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 27:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 28:
            ACCEPT_TOKEN(anon_sym_SLASH);
            END_STATE();
        case 29:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 30:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 31:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 32:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 33:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 34:
            ACCEPT_TOKEN(anon_sym_QMARK);
            END_STATE();
        case 35:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 36:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 37:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            END_STATE();
        case 38:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 39:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 40:
            ACCEPT_TOKEN(anon_sym__);
            END_STATE();
        case 41:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '_')
                ADVANCE(6);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(8);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(11);
            END_STATE();
        case 42:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '_')
                ADVANCE(1);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(11);
            END_STATE();
        case 43:
            ACCEPT_TOKEN(anon_sym__);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            END_STATE();
        case 44:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            END_STATE();
        case 45:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 46:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 3 },
    [2] = { .lex_state = 3 },
    [3] = { .lex_state = 3 },
    [4] = { .lex_state = 0 },
    [5] = { .lex_state = 3 },
    [6] = { .lex_state = 3 },
    [7] = { .lex_state = 3 },
    [8] = { .lex_state = 0 },
    [9] = { .lex_state = 2 },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_LBRACE] = ACTIONS(1),
        [aux_sym_replacement_token1] = ACTIONS(1),
        [anon_sym_RBRACE] = ACTIONS(1),
        [sym__word_no_digit] = ACTIONS(1),
        [sym__digits] = ACTIONS(1),
        [anon_sym_BANG] = ACTIONS(1),
        [anon_sym_DQUOTE] = ACTIONS(1),
        [anon_sym_POUND] = ACTIONS(1),
        [anon_sym_DOLLAR] = ACTIONS(1),
        [anon_sym_PERCENT] = ACTIONS(1),
        [anon_sym_AMP] = ACTIONS(1),
        [anon_sym_SQUOTE] = ACTIONS(1),
        [anon_sym_LPAREN] = ACTIONS(1),
        [anon_sym_RPAREN] = ACTIONS(1),
        [anon_sym_STAR] = ACTIONS(1),
        [anon_sym_PLUS] = ACTIONS(1),
        [anon_sym_COMMA] = ACTIONS(1),
        [anon_sym_DASH] = ACTIONS(1),
        [anon_sym_DOT] = ACTIONS(1),
        [anon_sym_SLASH] = ACTIONS(1),
        [anon_sym_COLON] = ACTIONS(1),
        [anon_sym_SEMI] = ACTIONS(1),
        [anon_sym_LT] = ACTIONS(1),
        [anon_sym_EQ] = ACTIONS(1),
        [anon_sym_GT] = ACTIONS(1),
        [anon_sym_QMARK] = ACTIONS(1),
        [anon_sym_AT] = ACTIONS(1),
        [anon_sym_LBRACK] = ACTIONS(1),
        [anon_sym_BSLASH] = ACTIONS(1),
        [anon_sym_RBRACK] = ACTIONS(1),
        [anon_sym_CARET] = ACTIONS(1),
        [anon_sym__] = ACTIONS(1),
        [anon_sym_BQUOTE] = ACTIONS(1),
        [anon_sym_PIPE] = ACTIONS(1),
        [anon_sym_TILDE] = ACTIONS(1),
    },
    [1] = {
        [sym_inline] = STATE(8),
        [sym_replacement] = STATE(2),
        [sym_word] = STATE(2),
        [sym_punctuation] = STATE(2),
        [aux_sym_inline_repeat1] = STATE(2),
        [anon_sym_LBRACE] = ACTIONS(3),
        [anon_sym_RBRACE] = ACTIONS(5),
        [sym__word_no_digit] = ACTIONS(7),
        [sym__digits] = ACTIONS(9),
        [anon_sym_BANG] = ACTIONS(5),
        [anon_sym_DQUOTE] = ACTIONS(5),
        [anon_sym_POUND] = ACTIONS(5),
        [anon_sym_DOLLAR] = ACTIONS(5),
        [anon_sym_PERCENT] = ACTIONS(5),
        [anon_sym_AMP] = ACTIONS(5),
        [anon_sym_SQUOTE] = ACTIONS(5),
        [anon_sym_LPAREN] = ACTIONS(5),
        [anon_sym_RPAREN] = ACTIONS(5),
        [anon_sym_STAR] = ACTIONS(5),
        [anon_sym_PLUS] = ACTIONS(5),
        [anon_sym_COMMA] = ACTIONS(5),
        [anon_sym_DASH] = ACTIONS(5),
        [anon_sym_DOT] = ACTIONS(5),
        [anon_sym_SLASH] = ACTIONS(5),
        [anon_sym_COLON] = ACTIONS(5),
        [anon_sym_SEMI] = ACTIONS(5),
        [anon_sym_LT] = ACTIONS(5),
        [anon_sym_EQ] = ACTIONS(5),
        [anon_sym_GT] = ACTIONS(5),
        [anon_sym_QMARK] = ACTIONS(5),
        [anon_sym_AT] = ACTIONS(5),
        [anon_sym_LBRACK] = ACTIONS(5),
        [anon_sym_BSLASH] = ACTIONS(5),
        [anon_sym_RBRACK] = ACTIONS(5),
        [anon_sym_CARET] = ACTIONS(5),
        [anon_sym__] = ACTIONS(5),
        [anon_sym_BQUOTE] = ACTIONS(5),
        [anon_sym_PIPE] = ACTIONS(5),
        [anon_sym_TILDE] = ACTIONS(5),
    },
    [2] = {
        [sym_replacement] = STATE(3),
        [sym_word] = STATE(3),
        [sym_punctuation] = STATE(3),
        [aux_sym_inline_repeat1] = STATE(3),
        [ts_builtin_sym_end] = ACTIONS(11),
        [anon_sym_LBRACE] = ACTIONS(3),
        [anon_sym_RBRACE] = ACTIONS(5),
        [sym__word_no_digit] = ACTIONS(7),
        [sym__digits] = ACTIONS(9),
        [anon_sym_BANG] = ACTIONS(5),
        [anon_sym_DQUOTE] = ACTIONS(5),
        [anon_sym_POUND] = ACTIONS(5),
        [anon_sym_DOLLAR] = ACTIONS(5),
        [anon_sym_PERCENT] = ACTIONS(5),
        [anon_sym_AMP] = ACTIONS(5),
        [anon_sym_SQUOTE] = ACTIONS(5),
        [anon_sym_LPAREN] = ACTIONS(5),
        [anon_sym_RPAREN] = ACTIONS(5),
        [anon_sym_STAR] = ACTIONS(5),
        [anon_sym_PLUS] = ACTIONS(5),
        [anon_sym_COMMA] = ACTIONS(5),
        [anon_sym_DASH] = ACTIONS(5),
        [anon_sym_DOT] = ACTIONS(5),
        [anon_sym_SLASH] = ACTIONS(5),
        [anon_sym_COLON] = ACTIONS(5),
        [anon_sym_SEMI] = ACTIONS(5),
        [anon_sym_LT] = ACTIONS(5),
        [anon_sym_EQ] = ACTIONS(5),
        [anon_sym_GT] = ACTIONS(5),
        [anon_sym_QMARK] = ACTIONS(5),
        [anon_sym_AT] = ACTIONS(5),
        [anon_sym_LBRACK] = ACTIONS(5),
        [anon_sym_BSLASH] = ACTIONS(5),
        [anon_sym_RBRACK] = ACTIONS(5),
        [anon_sym_CARET] = ACTIONS(5),
        [anon_sym__] = ACTIONS(5),
        [anon_sym_BQUOTE] = ACTIONS(5),
        [anon_sym_PIPE] = ACTIONS(5),
        [anon_sym_TILDE] = ACTIONS(5),
    },
    [3] = {
        [sym_replacement] = STATE(3),
        [sym_word] = STATE(3),
        [sym_punctuation] = STATE(3),
        [aux_sym_inline_repeat1] = STATE(3),
        [ts_builtin_sym_end] = ACTIONS(13),
        [anon_sym_LBRACE] = ACTIONS(15),
        [anon_sym_RBRACE] = ACTIONS(18),
        [sym__word_no_digit] = ACTIONS(21),
        [sym__digits] = ACTIONS(24),
        [anon_sym_BANG] = ACTIONS(18),
        [anon_sym_DQUOTE] = ACTIONS(18),
        [anon_sym_POUND] = ACTIONS(18),
        [anon_sym_DOLLAR] = ACTIONS(18),
        [anon_sym_PERCENT] = ACTIONS(18),
        [anon_sym_AMP] = ACTIONS(18),
        [anon_sym_SQUOTE] = ACTIONS(18),
        [anon_sym_LPAREN] = ACTIONS(18),
        [anon_sym_RPAREN] = ACTIONS(18),
        [anon_sym_STAR] = ACTIONS(18),
        [anon_sym_PLUS] = ACTIONS(18),
        [anon_sym_COMMA] = ACTIONS(18),
        [anon_sym_DASH] = ACTIONS(18),
        [anon_sym_DOT] = ACTIONS(18),
        [anon_sym_SLASH] = ACTIONS(18),
        [anon_sym_COLON] = ACTIONS(18),
        [anon_sym_SEMI] = ACTIONS(18),
        [anon_sym_LT] = ACTIONS(18),
        [anon_sym_EQ] = ACTIONS(18),
        [anon_sym_GT] = ACTIONS(18),
        [anon_sym_QMARK] = ACTIONS(18),
        [anon_sym_AT] = ACTIONS(18),
        [anon_sym_LBRACK] = ACTIONS(18),
        [anon_sym_BSLASH] = ACTIONS(18),
        [anon_sym_RBRACK] = ACTIONS(18),
        [anon_sym_CARET] = ACTIONS(18),
        [anon_sym__] = ACTIONS(18),
        [anon_sym_BQUOTE] = ACTIONS(18),
        [anon_sym_PIPE] = ACTIONS(18),
        [anon_sym_TILDE] = ACTIONS(18),
    },
    [4] = {
        [ts_builtin_sym_end] = ACTIONS(27),
        [anon_sym_LBRACE] = ACTIONS(29),
        [aux_sym_replacement_token1] = ACTIONS(31),
        [anon_sym_RBRACE] = ACTIONS(29),
        [sym__word_no_digit] = ACTIONS(29),
        [sym__digits] = ACTIONS(29),
        [anon_sym_BANG] = ACTIONS(29),
        [anon_sym_DQUOTE] = ACTIONS(29),
        [anon_sym_POUND] = ACTIONS(29),
        [anon_sym_DOLLAR] = ACTIONS(29),
        [anon_sym_PERCENT] = ACTIONS(29),
        [anon_sym_AMP] = ACTIONS(29),
        [anon_sym_SQUOTE] = ACTIONS(29),
        [anon_sym_LPAREN] = ACTIONS(29),
        [anon_sym_RPAREN] = ACTIONS(29),
        [anon_sym_STAR] = ACTIONS(29),
        [anon_sym_PLUS] = ACTIONS(29),
        [anon_sym_COMMA] = ACTIONS(29),
        [anon_sym_DASH] = ACTIONS(29),
        [anon_sym_DOT] = ACTIONS(29),
        [anon_sym_SLASH] = ACTIONS(29),
        [anon_sym_COLON] = ACTIONS(29),
        [anon_sym_SEMI] = ACTIONS(29),
        [anon_sym_LT] = ACTIONS(29),
        [anon_sym_EQ] = ACTIONS(29),
        [anon_sym_GT] = ACTIONS(29),
        [anon_sym_QMARK] = ACTIONS(29),
        [anon_sym_AT] = ACTIONS(29),
        [anon_sym_LBRACK] = ACTIONS(29),
        [anon_sym_BSLASH] = ACTIONS(29),
        [anon_sym_RBRACK] = ACTIONS(29),
        [anon_sym_CARET] = ACTIONS(29),
        [anon_sym__] = ACTIONS(29),
        [anon_sym_BQUOTE] = ACTIONS(29),
        [anon_sym_PIPE] = ACTIONS(29),
        [anon_sym_TILDE] = ACTIONS(29),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(27),
        [anon_sym_LBRACE] = ACTIONS(29),
        [anon_sym_RBRACE] = ACTIONS(29),
        [sym__word_no_digit] = ACTIONS(27),
        [sym__digits] = ACTIONS(29),
        [anon_sym_BANG] = ACTIONS(29),
        [anon_sym_DQUOTE] = ACTIONS(29),
        [anon_sym_POUND] = ACTIONS(29),
        [anon_sym_DOLLAR] = ACTIONS(29),
        [anon_sym_PERCENT] = ACTIONS(29),
        [anon_sym_AMP] = ACTIONS(29),
        [anon_sym_SQUOTE] = ACTIONS(29),
        [anon_sym_LPAREN] = ACTIONS(29),
        [anon_sym_RPAREN] = ACTIONS(29),
        [anon_sym_STAR] = ACTIONS(29),
        [anon_sym_PLUS] = ACTIONS(29),
        [anon_sym_COMMA] = ACTIONS(29),
        [anon_sym_DASH] = ACTIONS(29),
        [anon_sym_DOT] = ACTIONS(29),
        [anon_sym_SLASH] = ACTIONS(29),
        [anon_sym_COLON] = ACTIONS(29),
        [anon_sym_SEMI] = ACTIONS(29),
        [anon_sym_LT] = ACTIONS(29),
        [anon_sym_EQ] = ACTIONS(29),
        [anon_sym_GT] = ACTIONS(29),
        [anon_sym_QMARK] = ACTIONS(29),
        [anon_sym_AT] = ACTIONS(29),
        [anon_sym_LBRACK] = ACTIONS(29),
        [anon_sym_BSLASH] = ACTIONS(29),
        [anon_sym_RBRACK] = ACTIONS(29),
        [anon_sym_CARET] = ACTIONS(29),
        [anon_sym__] = ACTIONS(29),
        [anon_sym_BQUOTE] = ACTIONS(29),
        [anon_sym_PIPE] = ACTIONS(29),
        [anon_sym_TILDE] = ACTIONS(29),
    },
    [6] = {
        [ts_builtin_sym_end] = ACTIONS(33),
        [anon_sym_LBRACE] = ACTIONS(35),
        [anon_sym_RBRACE] = ACTIONS(35),
        [sym__word_no_digit] = ACTIONS(33),
        [sym__digits] = ACTIONS(35),
        [anon_sym_BANG] = ACTIONS(35),
        [anon_sym_DQUOTE] = ACTIONS(35),
        [anon_sym_POUND] = ACTIONS(35),
        [anon_sym_DOLLAR] = ACTIONS(35),
        [anon_sym_PERCENT] = ACTIONS(35),
        [anon_sym_AMP] = ACTIONS(35),
        [anon_sym_SQUOTE] = ACTIONS(35),
        [anon_sym_LPAREN] = ACTIONS(35),
        [anon_sym_RPAREN] = ACTIONS(35),
        [anon_sym_STAR] = ACTIONS(35),
        [anon_sym_PLUS] = ACTIONS(35),
        [anon_sym_COMMA] = ACTIONS(35),
        [anon_sym_DASH] = ACTIONS(35),
        [anon_sym_DOT] = ACTIONS(35),
        [anon_sym_SLASH] = ACTIONS(35),
        [anon_sym_COLON] = ACTIONS(35),
        [anon_sym_SEMI] = ACTIONS(35),
        [anon_sym_LT] = ACTIONS(35),
        [anon_sym_EQ] = ACTIONS(35),
        [anon_sym_GT] = ACTIONS(35),
        [anon_sym_QMARK] = ACTIONS(35),
        [anon_sym_AT] = ACTIONS(35),
        [anon_sym_LBRACK] = ACTIONS(35),
        [anon_sym_BSLASH] = ACTIONS(35),
        [anon_sym_RBRACK] = ACTIONS(35),
        [anon_sym_CARET] = ACTIONS(35),
        [anon_sym__] = ACTIONS(35),
        [anon_sym_BQUOTE] = ACTIONS(35),
        [anon_sym_PIPE] = ACTIONS(35),
        [anon_sym_TILDE] = ACTIONS(35),
    },
    [7] = {
        [ts_builtin_sym_end] = ACTIONS(37),
        [anon_sym_LBRACE] = ACTIONS(39),
        [anon_sym_RBRACE] = ACTIONS(39),
        [sym__word_no_digit] = ACTIONS(37),
        [sym__digits] = ACTIONS(39),
        [anon_sym_BANG] = ACTIONS(39),
        [anon_sym_DQUOTE] = ACTIONS(39),
        [anon_sym_POUND] = ACTIONS(39),
        [anon_sym_DOLLAR] = ACTIONS(39),
        [anon_sym_PERCENT] = ACTIONS(39),
        [anon_sym_AMP] = ACTIONS(39),
        [anon_sym_SQUOTE] = ACTIONS(39),
        [anon_sym_LPAREN] = ACTIONS(39),
        [anon_sym_RPAREN] = ACTIONS(39),
        [anon_sym_STAR] = ACTIONS(39),
        [anon_sym_PLUS] = ACTIONS(39),
        [anon_sym_COMMA] = ACTIONS(39),
        [anon_sym_DASH] = ACTIONS(39),
        [anon_sym_DOT] = ACTIONS(39),
        [anon_sym_SLASH] = ACTIONS(39),
        [anon_sym_COLON] = ACTIONS(39),
        [anon_sym_SEMI] = ACTIONS(39),
        [anon_sym_LT] = ACTIONS(39),
        [anon_sym_EQ] = ACTIONS(39),
        [anon_sym_GT] = ACTIONS(39),
        [anon_sym_QMARK] = ACTIONS(39),
        [anon_sym_AT] = ACTIONS(39),
        [anon_sym_LBRACK] = ACTIONS(39),
        [anon_sym_BSLASH] = ACTIONS(39),
        [anon_sym_RBRACK] = ACTIONS(39),
        [anon_sym_CARET] = ACTIONS(39),
        [anon_sym__] = ACTIONS(39),
        [anon_sym_BQUOTE] = ACTIONS(39),
        [anon_sym_PIPE] = ACTIONS(39),
        [anon_sym_TILDE] = ACTIONS(39),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 1,
    ACTIONS(41),
    1,
    ts_builtin_sym_end,
    [4] = 1,
    ACTIONS(43),
    1,
    anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(8)] = 0,
    [SMALL_STATE(9)] = 4,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(4),
    [5] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(5),
    [7] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(6),
    [11] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [13] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    [15] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(4),
    [18] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(5),
    [21] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(6),
    [24] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(6),
    [27] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [29] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [31] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(9),
    [33] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_word, 1, 0, 0),
    [35] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_word, 1, 0, 0),
    [37] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 0),
    [39] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 0),
    [41] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_asciidoc_inline(void) {
    static const TSLanguage language = {
        .version = LANGUAGE_VERSION,
        .symbol_count = SYMBOL_COUNT,
        .alias_count = ALIAS_COUNT,
        .token_count = TOKEN_COUNT,
        .external_token_count = EXTERNAL_TOKEN_COUNT,
        .state_count = STATE_COUNT,
        .large_state_count = LARGE_STATE_COUNT,
        .production_id_count = PRODUCTION_ID_COUNT,
        .field_count = FIELD_COUNT,
        .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
        .parse_table = &ts_parse_table[0][0],
        .small_parse_table = ts_small_parse_table,
        .small_parse_table_map = ts_small_parse_table_map,
        .parse_actions = ts_parse_actions,
        .symbol_names = ts_symbol_names,
        .symbol_metadata = ts_symbol_metadata,
        .public_symbol_map = ts_symbol_map,
        .alias_map = ts_non_terminal_alias_map,
        .alias_sequences = &ts_alias_sequences[0][0],
        .lex_modes = ts_lex_modes,
        .lex_fn = ts_lex,
        .primary_state_ids = ts_primary_state_ids,
    };
    return &language;
}
#ifdef __cplusplus
}
#endif
