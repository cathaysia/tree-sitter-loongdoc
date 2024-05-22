#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
    anon_sym_link = 36,
    anon_sym_mailto = 37,
    aux_sym_inline_link_macro_token1 = 38,
    aux_sym_inline_link_macro_token2 = 39,
    anon_sym_stem = 40,
    anon_sym_latexmath = 41,
    anon_sym_asciimath = 42,
    anon_sym_LBRACK_LBRACK = 43,
    aux_sym_inline_anchor_rx_token1 = 44,
    anon_sym_RBRACK_RBRACK = 45,
    anon_sym_anchor = 46,
    sym_inline = 47,
    sym_replacement = 48,
    sym_word = 49,
    sym_punctuation = 50,
    sym_inline_link_macro = 51,
    sym_inline_math_macro = 52,
    sym_inline_anchor_rx = 53,
    aux_sym_inline_repeat1 = 54,
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
    [anon_sym_link] = "link",
    [anon_sym_mailto] = "mailto",
    [aux_sym_inline_link_macro_token1] = "inline_link_macro_token1",
    [aux_sym_inline_link_macro_token2] = "inline_link_macro_token2",
    [anon_sym_stem] = "stem",
    [anon_sym_latexmath] = "latexmath",
    [anon_sym_asciimath] = "asciimath",
    [anon_sym_LBRACK_LBRACK] = "[[",
    [aux_sym_inline_anchor_rx_token1] = "inline_anchor_rx_token1",
    [anon_sym_RBRACK_RBRACK] = "]]",
    [anon_sym_anchor] = "anchor",
    [sym_inline] = "inline",
    [sym_replacement] = "replacement",
    [sym_word] = "word",
    [sym_punctuation] = "punctuation",
    [sym_inline_link_macro] = "inline_link_macro",
    [sym_inline_math_macro] = "inline_math_macro",
    [sym_inline_anchor_rx] = "inline_anchor_rx",
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
    [anon_sym_link] = anon_sym_link,
    [anon_sym_mailto] = anon_sym_mailto,
    [aux_sym_inline_link_macro_token1] = aux_sym_inline_link_macro_token1,
    [aux_sym_inline_link_macro_token2] = aux_sym_inline_link_macro_token2,
    [anon_sym_stem] = anon_sym_stem,
    [anon_sym_latexmath] = anon_sym_latexmath,
    [anon_sym_asciimath] = anon_sym_asciimath,
    [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
    [aux_sym_inline_anchor_rx_token1] = aux_sym_inline_anchor_rx_token1,
    [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
    [anon_sym_anchor] = anon_sym_anchor,
    [sym_inline] = sym_inline,
    [sym_replacement] = sym_replacement,
    [sym_word] = sym_word,
    [sym_punctuation] = sym_punctuation,
    [sym_inline_link_macro] = sym_inline_link_macro,
    [sym_inline_math_macro] = sym_inline_math_macro,
    [sym_inline_anchor_rx] = sym_inline_anchor_rx,
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
    [anon_sym_link] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_mailto] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_inline_link_macro_token1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_inline_link_macro_token2] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_stem] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_latexmath] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_asciimath] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LBRACK_LBRACK] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_inline_anchor_rx_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_RBRACK_RBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_anchor] = {
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
    [sym_inline_link_macro] = {
        .visible = true,
        .named = true,
    },
    [sym_inline_math_macro] = {
        .visible = true,
        .named = true,
    },
    [sym_inline_anchor_rx] = {
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
    [10] = 10,
    [11] = 11,
    [12] = 12,
    [13] = 13,
    [14] = 14,
    [15] = 15,
    [16] = 16,
    [17] = 17,
    [18] = 18,
    [19] = 19,
    [20] = 20,
    [21] = 21,
    [22] = 22,
    [23] = 23,
    [24] = 24,
    [25] = 25,
    [26] = 26,
    [27] = 27,
    [28] = 28,
    [29] = 29,
    [30] = 30,
    [31] = 31,
    [32] = 32,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(8);
            ADVANCE_MAP(
                '!', 78,
                '"', 79,
                '#', 80,
                '$', 81,
                '%', 82,
                '&', 83,
                '\'', 84,
                '(', 85,
                ')', 86,
                '*', 87,
                '+', 88,
                ',', 89,
                '-', 90,
                '.', 91,
                '/', 92,
                ':', 93,
                ';', 94,
                '<', 95,
                '=', 96,
                '>', 97,
                '?', 98,
                '@', 99,
                '[', 101,
                '\\', 102,
                ']', 103,
                '^', 104,
                '_', 108,
                '`', 109,
                'a', 29,
                'l', 13,
                'm', 10,
                's', 34,
                '{', 9,
                '|', 110,
                '}', 43,
                '~', 111,
                0x0b, 44,
                '\f', 44,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(41);
            if(('A' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0)
                ADVANCE(75);
            END_STATE();
        case 1:
            if(lookahead == ',')
                ADVANCE(89);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == '[')
                ADVANCE(100);
            if(lookahead == ']')
                ADVANCE(3);
            if(lookahead == '}')
                ADVANCE(43);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            END_STATE();
        case 2:
            if(lookahead == ']')
                ADVANCE(103);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(2);
            END_STATE();
        case 3:
            if(lookahead == ']')
                ADVANCE(128);
            END_STATE();
        case 4:
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 5:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(5);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(116);
            END_STATE();
        case 6:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(126);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(127);
            END_STATE();
        case 7:
            if(eof)
                ADVANCE(8);
            ADVANCE_MAP(
                '!', 78,
                '"', 79,
                '#', 80,
                '$', 81,
                '%', 82,
                '&', 83,
                '\'', 84,
                '(', 85,
                ')', 86,
                '*', 87,
                '+', 88,
                ',', 89,
                '-', 90,
                '.', 91,
                '/', 92,
                ':', 93,
                ';', 94,
                '<', 95,
                '=', 96,
                '>', 97,
                '?', 98,
                '@', 99,
                '[', 101,
                '\\', 102,
                ']', 103,
                '^', 104,
                '_', 105,
                '`', 109,
                'a', 64,
                'l', 48,
                'm', 45,
                's', 69,
                '{', 9,
                '|', 110,
                '}', 43,
                '~', 111,
                0x0b, 76,
                '\f', 76,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(7);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(77);
            if(lookahead != 0)
                ADVANCE(75);
            END_STATE();
        case 8:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 9:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 10:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'a')
                ADVANCE(21);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 11:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'a')
                ADVANCE(36);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 12:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'a')
                ADVANCE(38);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 13:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'a')
                ADVANCE(35);
            if(lookahead == 'i')
                ADVANCE(30);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 14:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'c')
                ADVANCE(18);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 15:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'c')
                ADVANCE(23);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 16:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'e')
                ADVANCE(26);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 17:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'e')
                ADVANCE(39);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 18:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'h')
                ADVANCE(31);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 19:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'h')
                ADVANCE(123);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 20:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'h')
                ADVANCE(121);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 21:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'i')
                ADVANCE(25);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 22:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'i')
                ADVANCE(27);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 23:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'i')
                ADVANCE(22);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 24:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'k')
                ADVANCE(112);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 25:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'l')
                ADVANCE(37);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 26:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'm')
                ADVANCE(119);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 27:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'm')
                ADVANCE(11);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 28:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'm')
                ADVANCE(12);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 29:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'n')
                ADVANCE(14);
            if(lookahead == 's')
                ADVANCE(15);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 30:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'n')
                ADVANCE(24);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 31:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'o')
                ADVANCE(33);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 32:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'o')
                ADVANCE(114);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 33:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'r')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 34:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 't')
                ADVANCE(16);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 35:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 't')
                ADVANCE(17);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 36:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 't')
                ADVANCE(19);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 37:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 't')
                ADVANCE(32);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 38:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 't')
                ADVANCE(20);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 39:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(lookahead == 'x')
                ADVANCE(28);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 40:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(40);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 41:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(41);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            END_STATE();
        case 42:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            END_STATE();
        case 43:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 44:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(106);
            if(lookahead == 'a')
                ADVANCE(29);
            if(lookahead == 'l')
                ADVANCE(13);
            if(lookahead == 'm')
                ADVANCE(10);
            if(lookahead == 's')
                ADVANCE(34);
            if(lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(44);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 45:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'a')
                ADVANCE(56);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || 'a' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 46:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'a')
                ADVANCE(71);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || 'a' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 47:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'a')
                ADVANCE(73);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || 'a' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 48:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'a')
                ADVANCE(70);
            if(lookahead == 'i')
                ADVANCE(65);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || 'a' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 49:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'c')
                ADVANCE(53);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 50:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'c')
                ADVANCE(58);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 51:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'e')
                ADVANCE(61);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 52:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'e')
                ADVANCE(74);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 53:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'h')
                ADVANCE(66);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 54:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'h')
                ADVANCE(124);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 55:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'h')
                ADVANCE(122);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 56:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'i')
                ADVANCE(60);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 57:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'i')
                ADVANCE(62);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 58:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'i')
                ADVANCE(57);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 59:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'k')
                ADVANCE(113);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 60:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'l')
                ADVANCE(72);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 61:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'm')
                ADVANCE(120);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 62:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'm')
                ADVANCE(46);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 63:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'm')
                ADVANCE(47);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 64:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'n')
                ADVANCE(49);
            if(lookahead == 's')
                ADVANCE(50);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 65:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'n')
                ADVANCE(59);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 66:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'o')
                ADVANCE(68);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 67:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'o')
                ADVANCE(115);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 68:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'r')
                ADVANCE(130);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 69:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 't')
                ADVANCE(51);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 70:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 't')
                ADVANCE(52);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 71:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 't')
                ADVANCE(54);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 72:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 't')
                ADVANCE(67);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 73:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 't')
                ADVANCE(55);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 74:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'x')
                ADVANCE(63);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 75:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 76:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(107);
            if(lookahead == 'a')
                ADVANCE(64);
            if(lookahead == 'l')
                ADVANCE(48);
            if(lookahead == 'm')
                ADVANCE(45);
            if(lookahead == 's')
                ADVANCE(69);
            if(lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(76);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || 'a' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 77:
            ACCEPT_TOKEN(sym__digits);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(77);
            END_STATE();
        case 78:
            ACCEPT_TOKEN(anon_sym_BANG);
            END_STATE();
        case 79:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 80:
            ACCEPT_TOKEN(anon_sym_POUND);
            END_STATE();
        case 81:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 82:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 83:
            ACCEPT_TOKEN(anon_sym_AMP);
            END_STATE();
        case 84:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 85:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 86:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 87:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 88:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 89:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 90:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 91:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 92:
            ACCEPT_TOKEN(anon_sym_SLASH);
            END_STATE();
        case 93:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 94:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 95:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 96:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 97:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 98:
            ACCEPT_TOKEN(anon_sym_QMARK);
            END_STATE();
        case 99:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 100:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 101:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(125);
            END_STATE();
        case 102:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            END_STATE();
        case 103:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 104:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 105:
            ACCEPT_TOKEN(anon_sym__);
            END_STATE();
        case 106:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '_')
                ADVANCE(40);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 107:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 108:
            ACCEPT_TOKEN(anon_sym__);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            END_STATE();
        case 109:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            END_STATE();
        case 110:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 111:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 112:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '_')
                ADVANCE(40);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 113:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 114:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '_')
                ADVANCE(40);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 115:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 116:
            ACCEPT_TOKEN(aux_sym_inline_link_macro_token1);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '[')
                ADVANCE(116);
            END_STATE();
        case 117:
            ACCEPT_TOKEN(aux_sym_inline_link_macro_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(117);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(118);
            END_STATE();
        case 118:
            ACCEPT_TOKEN(aux_sym_inline_link_macro_token2);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(118);
            END_STATE();
        case 119:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '_')
                ADVANCE(40);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 120:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 121:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '_')
                ADVANCE(40);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 122:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 123:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '_')
                ADVANCE(40);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 124:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 125:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            END_STATE();
        case 126:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(126);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(127);
            END_STATE();
        case 127:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ' ||
               ('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(127);
            END_STATE();
        case 128:
            ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
            END_STATE();
        case 129:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '_')
                ADVANCE(40);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        case 130:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(75);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 7 },
    [2] = { .lex_state = 7 },
    [3] = { .lex_state = 7 },
    [4] = { .lex_state = 0 },
    [5] = { .lex_state = 7 },
    [6] = { .lex_state = 7 },
    [7] = { .lex_state = 7 },
    [8] = { .lex_state = 7 },
    [9] = { .lex_state = 7 },
    [10] = { .lex_state = 7 },
    [11] = { .lex_state = 7 },
    [12] = { .lex_state = 7 },
    [13] = { .lex_state = 1 },
    [14] = { .lex_state = 1 },
    [15] = { .lex_state = 5 },
    [16] = { .lex_state = 1 },
    [17] = { .lex_state = 1 },
    [18] = { .lex_state = 1 },
    [19] = { .lex_state = 117 },
    [20] = { .lex_state = 6 },
    [21] = { .lex_state = 1 },
    [22] = { .lex_state = 1 },
    [23] = { .lex_state = 117 },
    [24] = { .lex_state = 2 },
    [25] = { .lex_state = 1 },
    [26] = { .lex_state = 117 },
    [27] = { .lex_state = 2 },
    [28] = { .lex_state = 1 },
    [29] = { .lex_state = 0 },
    [30] = { .lex_state = 2 },
    [31] = { .lex_state = 1 },
    [32] = { .lex_state = 1 },
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
        [anon_sym_link] = ACTIONS(1),
        [anon_sym_mailto] = ACTIONS(1),
        [anon_sym_stem] = ACTIONS(1),
        [anon_sym_latexmath] = ACTIONS(1),
        [anon_sym_asciimath] = ACTIONS(1),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
        [anon_sym_anchor] = ACTIONS(1),
    },
    [1] = {
        [sym_inline] = STATE(29),
        [sym_replacement] = STATE(2),
        [sym_word] = STATE(2),
        [sym_punctuation] = STATE(2),
        [sym_inline_link_macro] = STATE(2),
        [sym_inline_math_macro] = STATE(2),
        [sym_inline_anchor_rx] = STATE(2),
        [aux_sym_inline_repeat1] = STATE(2),
        [anon_sym_LBRACE] = ACTIONS(3),
        [anon_sym_RBRACE] = ACTIONS(5),
        [sym__word_no_digit] = ACTIONS(7),
        [sym__digits] = ACTIONS(7),
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
        [anon_sym_link] = ACTIONS(9),
        [anon_sym_mailto] = ACTIONS(9),
        [anon_sym_stem] = ACTIONS(11),
        [anon_sym_latexmath] = ACTIONS(11),
        [anon_sym_asciimath] = ACTIONS(11),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(13),
        [anon_sym_anchor] = ACTIONS(15),
    },
    [2] = {
        [sym_replacement] = STATE(3),
        [sym_word] = STATE(3),
        [sym_punctuation] = STATE(3),
        [sym_inline_link_macro] = STATE(3),
        [sym_inline_math_macro] = STATE(3),
        [sym_inline_anchor_rx] = STATE(3),
        [aux_sym_inline_repeat1] = STATE(3),
        [ts_builtin_sym_end] = ACTIONS(17),
        [anon_sym_LBRACE] = ACTIONS(3),
        [anon_sym_RBRACE] = ACTIONS(5),
        [sym__word_no_digit] = ACTIONS(7),
        [sym__digits] = ACTIONS(7),
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
        [anon_sym_link] = ACTIONS(9),
        [anon_sym_mailto] = ACTIONS(9),
        [anon_sym_stem] = ACTIONS(11),
        [anon_sym_latexmath] = ACTIONS(11),
        [anon_sym_asciimath] = ACTIONS(11),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(13),
        [anon_sym_anchor] = ACTIONS(15),
    },
    [3] = {
        [sym_replacement] = STATE(3),
        [sym_word] = STATE(3),
        [sym_punctuation] = STATE(3),
        [sym_inline_link_macro] = STATE(3),
        [sym_inline_math_macro] = STATE(3),
        [sym_inline_anchor_rx] = STATE(3),
        [aux_sym_inline_repeat1] = STATE(3),
        [ts_builtin_sym_end] = ACTIONS(19),
        [anon_sym_LBRACE] = ACTIONS(21),
        [anon_sym_RBRACE] = ACTIONS(24),
        [sym__word_no_digit] = ACTIONS(27),
        [sym__digits] = ACTIONS(27),
        [anon_sym_BANG] = ACTIONS(24),
        [anon_sym_DQUOTE] = ACTIONS(24),
        [anon_sym_POUND] = ACTIONS(24),
        [anon_sym_DOLLAR] = ACTIONS(24),
        [anon_sym_PERCENT] = ACTIONS(24),
        [anon_sym_AMP] = ACTIONS(24),
        [anon_sym_SQUOTE] = ACTIONS(24),
        [anon_sym_LPAREN] = ACTIONS(24),
        [anon_sym_RPAREN] = ACTIONS(24),
        [anon_sym_STAR] = ACTIONS(24),
        [anon_sym_PLUS] = ACTIONS(24),
        [anon_sym_COMMA] = ACTIONS(24),
        [anon_sym_DASH] = ACTIONS(24),
        [anon_sym_DOT] = ACTIONS(24),
        [anon_sym_SLASH] = ACTIONS(24),
        [anon_sym_COLON] = ACTIONS(24),
        [anon_sym_SEMI] = ACTIONS(24),
        [anon_sym_LT] = ACTIONS(24),
        [anon_sym_EQ] = ACTIONS(24),
        [anon_sym_GT] = ACTIONS(24),
        [anon_sym_QMARK] = ACTIONS(24),
        [anon_sym_AT] = ACTIONS(24),
        [anon_sym_LBRACK] = ACTIONS(24),
        [anon_sym_BSLASH] = ACTIONS(24),
        [anon_sym_RBRACK] = ACTIONS(24),
        [anon_sym_CARET] = ACTIONS(24),
        [anon_sym__] = ACTIONS(24),
        [anon_sym_BQUOTE] = ACTIONS(24),
        [anon_sym_PIPE] = ACTIONS(24),
        [anon_sym_TILDE] = ACTIONS(24),
        [anon_sym_link] = ACTIONS(30),
        [anon_sym_mailto] = ACTIONS(30),
        [anon_sym_stem] = ACTIONS(33),
        [anon_sym_latexmath] = ACTIONS(33),
        [anon_sym_asciimath] = ACTIONS(33),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(36),
        [anon_sym_anchor] = ACTIONS(39),
    },
    [4] = {
        [ts_builtin_sym_end] = ACTIONS(42),
        [anon_sym_LBRACE] = ACTIONS(44),
        [aux_sym_replacement_token1] = ACTIONS(46),
        [anon_sym_RBRACE] = ACTIONS(44),
        [sym__word_no_digit] = ACTIONS(44),
        [sym__digits] = ACTIONS(44),
        [anon_sym_BANG] = ACTIONS(44),
        [anon_sym_DQUOTE] = ACTIONS(44),
        [anon_sym_POUND] = ACTIONS(44),
        [anon_sym_DOLLAR] = ACTIONS(44),
        [anon_sym_PERCENT] = ACTIONS(44),
        [anon_sym_AMP] = ACTIONS(44),
        [anon_sym_SQUOTE] = ACTIONS(44),
        [anon_sym_LPAREN] = ACTIONS(44),
        [anon_sym_RPAREN] = ACTIONS(44),
        [anon_sym_STAR] = ACTIONS(44),
        [anon_sym_PLUS] = ACTIONS(44),
        [anon_sym_COMMA] = ACTIONS(44),
        [anon_sym_DASH] = ACTIONS(44),
        [anon_sym_DOT] = ACTIONS(44),
        [anon_sym_SLASH] = ACTIONS(44),
        [anon_sym_COLON] = ACTIONS(44),
        [anon_sym_SEMI] = ACTIONS(44),
        [anon_sym_LT] = ACTIONS(44),
        [anon_sym_EQ] = ACTIONS(44),
        [anon_sym_GT] = ACTIONS(44),
        [anon_sym_QMARK] = ACTIONS(44),
        [anon_sym_AT] = ACTIONS(44),
        [anon_sym_LBRACK] = ACTIONS(44),
        [anon_sym_BSLASH] = ACTIONS(44),
        [anon_sym_RBRACK] = ACTIONS(44),
        [anon_sym_CARET] = ACTIONS(44),
        [anon_sym__] = ACTIONS(44),
        [anon_sym_BQUOTE] = ACTIONS(44),
        [anon_sym_PIPE] = ACTIONS(44),
        [anon_sym_TILDE] = ACTIONS(44),
        [anon_sym_link] = ACTIONS(44),
        [anon_sym_mailto] = ACTIONS(44),
        [anon_sym_stem] = ACTIONS(44),
        [anon_sym_latexmath] = ACTIONS(44),
        [anon_sym_asciimath] = ACTIONS(44),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(44),
        [anon_sym_anchor] = ACTIONS(44),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(42),
        [anon_sym_LBRACE] = ACTIONS(44),
        [anon_sym_RBRACE] = ACTIONS(44),
        [sym__word_no_digit] = ACTIONS(44),
        [sym__digits] = ACTIONS(44),
        [anon_sym_BANG] = ACTIONS(44),
        [anon_sym_DQUOTE] = ACTIONS(44),
        [anon_sym_POUND] = ACTIONS(44),
        [anon_sym_DOLLAR] = ACTIONS(44),
        [anon_sym_PERCENT] = ACTIONS(44),
        [anon_sym_AMP] = ACTIONS(44),
        [anon_sym_SQUOTE] = ACTIONS(44),
        [anon_sym_LPAREN] = ACTIONS(44),
        [anon_sym_RPAREN] = ACTIONS(44),
        [anon_sym_STAR] = ACTIONS(44),
        [anon_sym_PLUS] = ACTIONS(44),
        [anon_sym_COMMA] = ACTIONS(44),
        [anon_sym_DASH] = ACTIONS(44),
        [anon_sym_DOT] = ACTIONS(44),
        [anon_sym_SLASH] = ACTIONS(44),
        [anon_sym_COLON] = ACTIONS(44),
        [anon_sym_SEMI] = ACTIONS(44),
        [anon_sym_LT] = ACTIONS(44),
        [anon_sym_EQ] = ACTIONS(44),
        [anon_sym_GT] = ACTIONS(44),
        [anon_sym_QMARK] = ACTIONS(44),
        [anon_sym_AT] = ACTIONS(44),
        [anon_sym_LBRACK] = ACTIONS(44),
        [anon_sym_BSLASH] = ACTIONS(44),
        [anon_sym_RBRACK] = ACTIONS(44),
        [anon_sym_CARET] = ACTIONS(44),
        [anon_sym__] = ACTIONS(44),
        [anon_sym_BQUOTE] = ACTIONS(44),
        [anon_sym_PIPE] = ACTIONS(44),
        [anon_sym_TILDE] = ACTIONS(44),
        [anon_sym_link] = ACTIONS(44),
        [anon_sym_mailto] = ACTIONS(44),
        [anon_sym_stem] = ACTIONS(44),
        [anon_sym_latexmath] = ACTIONS(44),
        [anon_sym_asciimath] = ACTIONS(44),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(44),
        [anon_sym_anchor] = ACTIONS(44),
    },
    [6] = {
        [ts_builtin_sym_end] = ACTIONS(48),
        [anon_sym_LBRACE] = ACTIONS(50),
        [anon_sym_RBRACE] = ACTIONS(50),
        [sym__word_no_digit] = ACTIONS(50),
        [sym__digits] = ACTIONS(50),
        [anon_sym_BANG] = ACTIONS(50),
        [anon_sym_DQUOTE] = ACTIONS(50),
        [anon_sym_POUND] = ACTIONS(50),
        [anon_sym_DOLLAR] = ACTIONS(50),
        [anon_sym_PERCENT] = ACTIONS(50),
        [anon_sym_AMP] = ACTIONS(50),
        [anon_sym_SQUOTE] = ACTIONS(50),
        [anon_sym_LPAREN] = ACTIONS(50),
        [anon_sym_RPAREN] = ACTIONS(50),
        [anon_sym_STAR] = ACTIONS(50),
        [anon_sym_PLUS] = ACTIONS(50),
        [anon_sym_COMMA] = ACTIONS(50),
        [anon_sym_DASH] = ACTIONS(50),
        [anon_sym_DOT] = ACTIONS(50),
        [anon_sym_SLASH] = ACTIONS(50),
        [anon_sym_COLON] = ACTIONS(50),
        [anon_sym_SEMI] = ACTIONS(50),
        [anon_sym_LT] = ACTIONS(50),
        [anon_sym_EQ] = ACTIONS(50),
        [anon_sym_GT] = ACTIONS(50),
        [anon_sym_QMARK] = ACTIONS(50),
        [anon_sym_AT] = ACTIONS(50),
        [anon_sym_LBRACK] = ACTIONS(50),
        [anon_sym_BSLASH] = ACTIONS(50),
        [anon_sym_RBRACK] = ACTIONS(50),
        [anon_sym_CARET] = ACTIONS(50),
        [anon_sym__] = ACTIONS(50),
        [anon_sym_BQUOTE] = ACTIONS(50),
        [anon_sym_PIPE] = ACTIONS(50),
        [anon_sym_TILDE] = ACTIONS(50),
        [anon_sym_link] = ACTIONS(50),
        [anon_sym_mailto] = ACTIONS(50),
        [anon_sym_stem] = ACTIONS(50),
        [anon_sym_latexmath] = ACTIONS(50),
        [anon_sym_asciimath] = ACTIONS(50),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(50),
        [anon_sym_anchor] = ACTIONS(50),
    },
    [7] = {
        [ts_builtin_sym_end] = ACTIONS(52),
        [anon_sym_LBRACE] = ACTIONS(54),
        [anon_sym_RBRACE] = ACTIONS(54),
        [sym__word_no_digit] = ACTIONS(54),
        [sym__digits] = ACTIONS(54),
        [anon_sym_BANG] = ACTIONS(54),
        [anon_sym_DQUOTE] = ACTIONS(54),
        [anon_sym_POUND] = ACTIONS(54),
        [anon_sym_DOLLAR] = ACTIONS(54),
        [anon_sym_PERCENT] = ACTIONS(54),
        [anon_sym_AMP] = ACTIONS(54),
        [anon_sym_SQUOTE] = ACTIONS(54),
        [anon_sym_LPAREN] = ACTIONS(54),
        [anon_sym_RPAREN] = ACTIONS(54),
        [anon_sym_STAR] = ACTIONS(54),
        [anon_sym_PLUS] = ACTIONS(54),
        [anon_sym_COMMA] = ACTIONS(54),
        [anon_sym_DASH] = ACTIONS(54),
        [anon_sym_DOT] = ACTIONS(54),
        [anon_sym_SLASH] = ACTIONS(54),
        [anon_sym_COLON] = ACTIONS(54),
        [anon_sym_SEMI] = ACTIONS(54),
        [anon_sym_LT] = ACTIONS(54),
        [anon_sym_EQ] = ACTIONS(54),
        [anon_sym_GT] = ACTIONS(54),
        [anon_sym_QMARK] = ACTIONS(54),
        [anon_sym_AT] = ACTIONS(54),
        [anon_sym_LBRACK] = ACTIONS(54),
        [anon_sym_BSLASH] = ACTIONS(54),
        [anon_sym_RBRACK] = ACTIONS(54),
        [anon_sym_CARET] = ACTIONS(54),
        [anon_sym__] = ACTIONS(54),
        [anon_sym_BQUOTE] = ACTIONS(54),
        [anon_sym_PIPE] = ACTIONS(54),
        [anon_sym_TILDE] = ACTIONS(54),
        [anon_sym_link] = ACTIONS(54),
        [anon_sym_mailto] = ACTIONS(54),
        [anon_sym_stem] = ACTIONS(54),
        [anon_sym_latexmath] = ACTIONS(54),
        [anon_sym_asciimath] = ACTIONS(54),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(54),
        [anon_sym_anchor] = ACTIONS(54),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(56),
        [anon_sym_LBRACE] = ACTIONS(58),
        [anon_sym_RBRACE] = ACTIONS(58),
        [sym__word_no_digit] = ACTIONS(58),
        [sym__digits] = ACTIONS(58),
        [anon_sym_BANG] = ACTIONS(58),
        [anon_sym_DQUOTE] = ACTIONS(58),
        [anon_sym_POUND] = ACTIONS(58),
        [anon_sym_DOLLAR] = ACTIONS(58),
        [anon_sym_PERCENT] = ACTIONS(58),
        [anon_sym_AMP] = ACTIONS(58),
        [anon_sym_SQUOTE] = ACTIONS(58),
        [anon_sym_LPAREN] = ACTIONS(58),
        [anon_sym_RPAREN] = ACTIONS(58),
        [anon_sym_STAR] = ACTIONS(58),
        [anon_sym_PLUS] = ACTIONS(58),
        [anon_sym_COMMA] = ACTIONS(58),
        [anon_sym_DASH] = ACTIONS(58),
        [anon_sym_DOT] = ACTIONS(58),
        [anon_sym_SLASH] = ACTIONS(58),
        [anon_sym_COLON] = ACTIONS(58),
        [anon_sym_SEMI] = ACTIONS(58),
        [anon_sym_LT] = ACTIONS(58),
        [anon_sym_EQ] = ACTIONS(58),
        [anon_sym_GT] = ACTIONS(58),
        [anon_sym_QMARK] = ACTIONS(58),
        [anon_sym_AT] = ACTIONS(58),
        [anon_sym_LBRACK] = ACTIONS(58),
        [anon_sym_BSLASH] = ACTIONS(58),
        [anon_sym_RBRACK] = ACTIONS(58),
        [anon_sym_CARET] = ACTIONS(58),
        [anon_sym__] = ACTIONS(58),
        [anon_sym_BQUOTE] = ACTIONS(58),
        [anon_sym_PIPE] = ACTIONS(58),
        [anon_sym_TILDE] = ACTIONS(58),
        [anon_sym_link] = ACTIONS(58),
        [anon_sym_mailto] = ACTIONS(58),
        [anon_sym_stem] = ACTIONS(58),
        [anon_sym_latexmath] = ACTIONS(58),
        [anon_sym_asciimath] = ACTIONS(58),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(58),
        [anon_sym_anchor] = ACTIONS(58),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(60),
        [anon_sym_LBRACE] = ACTIONS(62),
        [anon_sym_RBRACE] = ACTIONS(62),
        [sym__word_no_digit] = ACTIONS(62),
        [sym__digits] = ACTIONS(62),
        [anon_sym_BANG] = ACTIONS(62),
        [anon_sym_DQUOTE] = ACTIONS(62),
        [anon_sym_POUND] = ACTIONS(62),
        [anon_sym_DOLLAR] = ACTIONS(62),
        [anon_sym_PERCENT] = ACTIONS(62),
        [anon_sym_AMP] = ACTIONS(62),
        [anon_sym_SQUOTE] = ACTIONS(62),
        [anon_sym_LPAREN] = ACTIONS(62),
        [anon_sym_RPAREN] = ACTIONS(62),
        [anon_sym_STAR] = ACTIONS(62),
        [anon_sym_PLUS] = ACTIONS(62),
        [anon_sym_COMMA] = ACTIONS(62),
        [anon_sym_DASH] = ACTIONS(62),
        [anon_sym_DOT] = ACTIONS(62),
        [anon_sym_SLASH] = ACTIONS(62),
        [anon_sym_COLON] = ACTIONS(62),
        [anon_sym_SEMI] = ACTIONS(62),
        [anon_sym_LT] = ACTIONS(62),
        [anon_sym_EQ] = ACTIONS(62),
        [anon_sym_GT] = ACTIONS(62),
        [anon_sym_QMARK] = ACTIONS(62),
        [anon_sym_AT] = ACTIONS(62),
        [anon_sym_LBRACK] = ACTIONS(62),
        [anon_sym_BSLASH] = ACTIONS(62),
        [anon_sym_RBRACK] = ACTIONS(62),
        [anon_sym_CARET] = ACTIONS(62),
        [anon_sym__] = ACTIONS(62),
        [anon_sym_BQUOTE] = ACTIONS(62),
        [anon_sym_PIPE] = ACTIONS(62),
        [anon_sym_TILDE] = ACTIONS(62),
        [anon_sym_link] = ACTIONS(62),
        [anon_sym_mailto] = ACTIONS(62),
        [anon_sym_stem] = ACTIONS(62),
        [anon_sym_latexmath] = ACTIONS(62),
        [anon_sym_asciimath] = ACTIONS(62),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(62),
        [anon_sym_anchor] = ACTIONS(62),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(64),
        [anon_sym_LBRACE] = ACTIONS(66),
        [anon_sym_RBRACE] = ACTIONS(66),
        [sym__word_no_digit] = ACTIONS(66),
        [sym__digits] = ACTIONS(66),
        [anon_sym_BANG] = ACTIONS(66),
        [anon_sym_DQUOTE] = ACTIONS(66),
        [anon_sym_POUND] = ACTIONS(66),
        [anon_sym_DOLLAR] = ACTIONS(66),
        [anon_sym_PERCENT] = ACTIONS(66),
        [anon_sym_AMP] = ACTIONS(66),
        [anon_sym_SQUOTE] = ACTIONS(66),
        [anon_sym_LPAREN] = ACTIONS(66),
        [anon_sym_RPAREN] = ACTIONS(66),
        [anon_sym_STAR] = ACTIONS(66),
        [anon_sym_PLUS] = ACTIONS(66),
        [anon_sym_COMMA] = ACTIONS(66),
        [anon_sym_DASH] = ACTIONS(66),
        [anon_sym_DOT] = ACTIONS(66),
        [anon_sym_SLASH] = ACTIONS(66),
        [anon_sym_COLON] = ACTIONS(66),
        [anon_sym_SEMI] = ACTIONS(66),
        [anon_sym_LT] = ACTIONS(66),
        [anon_sym_EQ] = ACTIONS(66),
        [anon_sym_GT] = ACTIONS(66),
        [anon_sym_QMARK] = ACTIONS(66),
        [anon_sym_AT] = ACTIONS(66),
        [anon_sym_LBRACK] = ACTIONS(66),
        [anon_sym_BSLASH] = ACTIONS(66),
        [anon_sym_RBRACK] = ACTIONS(66),
        [anon_sym_CARET] = ACTIONS(66),
        [anon_sym__] = ACTIONS(66),
        [anon_sym_BQUOTE] = ACTIONS(66),
        [anon_sym_PIPE] = ACTIONS(66),
        [anon_sym_TILDE] = ACTIONS(66),
        [anon_sym_link] = ACTIONS(66),
        [anon_sym_mailto] = ACTIONS(66),
        [anon_sym_stem] = ACTIONS(66),
        [anon_sym_latexmath] = ACTIONS(66),
        [anon_sym_asciimath] = ACTIONS(66),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(66),
        [anon_sym_anchor] = ACTIONS(66),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(68),
        [anon_sym_LBRACE] = ACTIONS(70),
        [anon_sym_RBRACE] = ACTIONS(70),
        [sym__word_no_digit] = ACTIONS(70),
        [sym__digits] = ACTIONS(70),
        [anon_sym_BANG] = ACTIONS(70),
        [anon_sym_DQUOTE] = ACTIONS(70),
        [anon_sym_POUND] = ACTIONS(70),
        [anon_sym_DOLLAR] = ACTIONS(70),
        [anon_sym_PERCENT] = ACTIONS(70),
        [anon_sym_AMP] = ACTIONS(70),
        [anon_sym_SQUOTE] = ACTIONS(70),
        [anon_sym_LPAREN] = ACTIONS(70),
        [anon_sym_RPAREN] = ACTIONS(70),
        [anon_sym_STAR] = ACTIONS(70),
        [anon_sym_PLUS] = ACTIONS(70),
        [anon_sym_COMMA] = ACTIONS(70),
        [anon_sym_DASH] = ACTIONS(70),
        [anon_sym_DOT] = ACTIONS(70),
        [anon_sym_SLASH] = ACTIONS(70),
        [anon_sym_COLON] = ACTIONS(70),
        [anon_sym_SEMI] = ACTIONS(70),
        [anon_sym_LT] = ACTIONS(70),
        [anon_sym_EQ] = ACTIONS(70),
        [anon_sym_GT] = ACTIONS(70),
        [anon_sym_QMARK] = ACTIONS(70),
        [anon_sym_AT] = ACTIONS(70),
        [anon_sym_LBRACK] = ACTIONS(70),
        [anon_sym_BSLASH] = ACTIONS(70),
        [anon_sym_RBRACK] = ACTIONS(70),
        [anon_sym_CARET] = ACTIONS(70),
        [anon_sym__] = ACTIONS(70),
        [anon_sym_BQUOTE] = ACTIONS(70),
        [anon_sym_PIPE] = ACTIONS(70),
        [anon_sym_TILDE] = ACTIONS(70),
        [anon_sym_link] = ACTIONS(70),
        [anon_sym_mailto] = ACTIONS(70),
        [anon_sym_stem] = ACTIONS(70),
        [anon_sym_latexmath] = ACTIONS(70),
        [anon_sym_asciimath] = ACTIONS(70),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(70),
        [anon_sym_anchor] = ACTIONS(70),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(72),
        [anon_sym_LBRACE] = ACTIONS(74),
        [anon_sym_RBRACE] = ACTIONS(74),
        [sym__word_no_digit] = ACTIONS(74),
        [sym__digits] = ACTIONS(74),
        [anon_sym_BANG] = ACTIONS(74),
        [anon_sym_DQUOTE] = ACTIONS(74),
        [anon_sym_POUND] = ACTIONS(74),
        [anon_sym_DOLLAR] = ACTIONS(74),
        [anon_sym_PERCENT] = ACTIONS(74),
        [anon_sym_AMP] = ACTIONS(74),
        [anon_sym_SQUOTE] = ACTIONS(74),
        [anon_sym_LPAREN] = ACTIONS(74),
        [anon_sym_RPAREN] = ACTIONS(74),
        [anon_sym_STAR] = ACTIONS(74),
        [anon_sym_PLUS] = ACTIONS(74),
        [anon_sym_COMMA] = ACTIONS(74),
        [anon_sym_DASH] = ACTIONS(74),
        [anon_sym_DOT] = ACTIONS(74),
        [anon_sym_SLASH] = ACTIONS(74),
        [anon_sym_COLON] = ACTIONS(74),
        [anon_sym_SEMI] = ACTIONS(74),
        [anon_sym_LT] = ACTIONS(74),
        [anon_sym_EQ] = ACTIONS(74),
        [anon_sym_GT] = ACTIONS(74),
        [anon_sym_QMARK] = ACTIONS(74),
        [anon_sym_AT] = ACTIONS(74),
        [anon_sym_LBRACK] = ACTIONS(74),
        [anon_sym_BSLASH] = ACTIONS(74),
        [anon_sym_RBRACK] = ACTIONS(74),
        [anon_sym_CARET] = ACTIONS(74),
        [anon_sym__] = ACTIONS(74),
        [anon_sym_BQUOTE] = ACTIONS(74),
        [anon_sym_PIPE] = ACTIONS(74),
        [anon_sym_TILDE] = ACTIONS(74),
        [anon_sym_link] = ACTIONS(74),
        [anon_sym_mailto] = ACTIONS(74),
        [anon_sym_stem] = ACTIONS(74),
        [anon_sym_latexmath] = ACTIONS(74),
        [anon_sym_asciimath] = ACTIONS(74),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(74),
        [anon_sym_anchor] = ACTIONS(74),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 2,
    ACTIONS(76),
    1,
    anon_sym_COMMA,
    ACTIONS(78),
    1,
    anon_sym_RBRACK_RBRACK,
    [7] = 1,
    ACTIONS(80),
    1,
    anon_sym_COLON,
    [11] = 1,
    ACTIONS(82),
    1,
    aux_sym_inline_link_macro_token1,
    [15] = 1,
    ACTIONS(84),
    1,
    anon_sym_LBRACK,
    [19] = 1,
    ACTIONS(86),
    1,
    aux_sym_replacement_token1,
    [23] = 1,
    ACTIONS(88),
    1,
    anon_sym_LBRACK,
    [27] = 1,
    ACTIONS(90),
    1,
    aux_sym_inline_link_macro_token2,
    [31] = 1,
    ACTIONS(92),
    1,
    aux_sym_inline_anchor_rx_token1,
    [35] = 1,
    ACTIONS(94),
    1,
    anon_sym_COLON,
    [39] = 1,
    ACTIONS(96),
    1,
    anon_sym_LBRACK,
    [43] = 1,
    ACTIONS(98),
    1,
    aux_sym_inline_link_macro_token2,
    [47] = 1,
    ACTIONS(100),
    1,
    anon_sym_RBRACK,
    [51] = 1,
    ACTIONS(102),
    1,
    anon_sym_RBRACK_RBRACK,
    [55] = 1,
    ACTIONS(104),
    1,
    aux_sym_inline_link_macro_token2,
    [59] = 1,
    ACTIONS(106),
    1,
    anon_sym_RBRACK,
    [63] = 1,
    ACTIONS(108),
    1,
    anon_sym_RBRACE,
    [67] = 1,
    ACTIONS(110),
    1,
    ts_builtin_sym_end,
    [71] = 1,
    ACTIONS(112),
    1,
    anon_sym_RBRACK,
    [75] = 1,
    ACTIONS(114),
    1,
    aux_sym_replacement_token1,
    [79] = 1,
    ACTIONS(116),
    1,
    anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(13)] = 0,
    [SMALL_STATE(14)] = 7,
    [SMALL_STATE(15)] = 11,
    [SMALL_STATE(16)] = 15,
    [SMALL_STATE(17)] = 19,
    [SMALL_STATE(18)] = 23,
    [SMALL_STATE(19)] = 27,
    [SMALL_STATE(20)] = 31,
    [SMALL_STATE(21)] = 35,
    [SMALL_STATE(22)] = 39,
    [SMALL_STATE(23)] = 43,
    [SMALL_STATE(24)] = 47,
    [SMALL_STATE(25)] = 51,
    [SMALL_STATE(26)] = 55,
    [SMALL_STATE(27)] = 59,
    [SMALL_STATE(28)] = 63,
    [SMALL_STATE(29)] = 67,
    [SMALL_STATE(30)] = 71,
    [SMALL_STATE(31)] = 75,
    [SMALL_STATE(32)] = 79,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(4),
    [5] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(5),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(6),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(21),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(32),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(31),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(14),
    [17] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [19] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    [21] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(4),
    [24] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(5),
    [27] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(6),
    [30] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(21),
    [33] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(32),
    [36] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(31),
    [39] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(14),
    [42] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [44] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [46] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(28),
    [48] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_word, 1, 0, 0),
    [50] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_word, 1, 0, 0),
    [52] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 6, 0, 0),
    [54] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 6, 0, 0),
    [56] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_link_macro, 6, 0, 0),
    [58] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_link_macro, 6, 0, 0),
    [60] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 5, 0, 0),
    [62] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 5, 0, 0),
    [64] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_math_macro, 5, 0, 0),
    [66] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_math_macro, 5, 0, 0),
    [68] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 3, 0, 0),
    [70] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 3, 0, 0),
    [72] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 0),
    [74] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 0),
    [76] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [78] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [80] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [82] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [84] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [86] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [88] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [90] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [92] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [94] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [96] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [98] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [100] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [102] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [104] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [106] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [108] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [110] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [112] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [114] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [116] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
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
