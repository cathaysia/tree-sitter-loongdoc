#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
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
    anon_sym_LBRACK_LBRACK = 36,
    aux_sym_inline_anchor_rx_token1 = 37,
    anon_sym_RBRACK_RBRACK = 38,
    anon_sym_anchor = 39,
    aux_sym_inline_anchor_rx_token2 = 40,
    sym_inline_email_rx = 41,
    anon_sym_link = 42,
    anon_sym_mailto = 43,
    aux_sym_inline_link_macro_token1 = 44,
    anon_sym_stem = 45,
    anon_sym_latexmath = 46,
    anon_sym_asciimath = 47,
    sym_inline = 48,
    sym_replacement = 49,
    sym_word = 50,
    sym_punctuation = 51,
    sym_inline_anchor_rx = 52,
    sym_inline_link_macro = 53,
    sym_inline_math_macro = 54,
    aux_sym_inline_repeat1 = 55,
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
    [anon_sym_LBRACK_LBRACK] = "[[",
    [aux_sym_inline_anchor_rx_token1] = "inline_anchor_rx_token1",
    [anon_sym_RBRACK_RBRACK] = "]]",
    [anon_sym_anchor] = "anchor",
    [aux_sym_inline_anchor_rx_token2] = "inline_anchor_rx_token2",
    [sym_inline_email_rx] = "inline_email_rx",
    [anon_sym_link] = "link",
    [anon_sym_mailto] = "mailto",
    [aux_sym_inline_link_macro_token1] = "inline_link_macro_token1",
    [anon_sym_stem] = "stem",
    [anon_sym_latexmath] = "latexmath",
    [anon_sym_asciimath] = "asciimath",
    [sym_inline] = "inline",
    [sym_replacement] = "replacement",
    [sym_word] = "word",
    [sym_punctuation] = "punctuation",
    [sym_inline_anchor_rx] = "inline_anchor_rx",
    [sym_inline_link_macro] = "inline_link_macro",
    [sym_inline_math_macro] = "inline_math_macro",
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
    [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
    [aux_sym_inline_anchor_rx_token1] = aux_sym_inline_anchor_rx_token1,
    [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
    [anon_sym_anchor] = anon_sym_anchor,
    [aux_sym_inline_anchor_rx_token2] = aux_sym_inline_anchor_rx_token2,
    [sym_inline_email_rx] = sym_inline_email_rx,
    [anon_sym_link] = anon_sym_link,
    [anon_sym_mailto] = anon_sym_mailto,
    [aux_sym_inline_link_macro_token1] = aux_sym_inline_link_macro_token1,
    [anon_sym_stem] = anon_sym_stem,
    [anon_sym_latexmath] = anon_sym_latexmath,
    [anon_sym_asciimath] = anon_sym_asciimath,
    [sym_inline] = sym_inline,
    [sym_replacement] = sym_replacement,
    [sym_word] = sym_word,
    [sym_punctuation] = sym_punctuation,
    [sym_inline_anchor_rx] = sym_inline_anchor_rx,
    [sym_inline_link_macro] = sym_inline_link_macro,
    [sym_inline_math_macro] = sym_inline_math_macro,
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
    [aux_sym_inline_anchor_rx_token2] = {
        .visible = false,
        .named = false,
    },
    [sym_inline_email_rx] = {
        .visible = true,
        .named = true,
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
    [sym_inline_anchor_rx] = {
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
                ADVANCE(48);
            ADVANCE_MAP(
                '!', 122,
                '"', 123,
                '#', 124,
                '$', 125,
                '%', 126,
                '&', 127,
                '\'', 128,
                '(', 129,
                ')', 130,
                '*', 131,
                '+', 132,
                ',', 133,
                '-', 134,
                '.', 135,
                '/', 136,
                ':', 137,
                ';', 138,
                '<', 139,
                '=', 140,
                '>', 141,
                '?', 142,
                '@', 143,
                '[', 145,
                '\\', 146,
                ']', 147,
                '^', 148,
                '_', 151,
                '`', 153,
                'a', 69,
                'l', 53,
                'm', 50,
                's', 74,
                '{', 49,
                '|', 154,
                '}', 86,
                '~', 155,
                0x0b, 118,
                '\f', 118,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(81);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0)
                ADVANCE(119);
            END_STATE();
        case 1:
            if(lookahead == '"')
                ADVANCE(34);
            if(lookahead == '\\')
                ADVANCE(46);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 2:
            if(lookahead == ',')
                ADVANCE(133);
            if(lookahead == ':')
                ADVANCE(137);
            if(lookahead == '[')
                ADVANCE(144);
            if(lookahead == ']')
                ADVANCE(40);
            if(lookahead == '}')
                ADVANCE(85);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(2);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(84);
            END_STATE();
        case 3:
            if(lookahead == '-')
                ADVANCE(4);
            if(lookahead == '.')
                ADVANCE(44);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            END_STATE();
        case 4:
            if(lookahead == '-')
                ADVANCE(4);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            END_STATE();
        case 5:
            if(lookahead == '-')
                ADVANCE(5);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(165);
            END_STATE();
        case 6:
            if(lookahead == '-')
                ADVANCE(13);
            if(lookahead == '0')
                ADVANCE(11);
            if(lookahead == '1')
                ADVANCE(10);
            if(lookahead == '2')
                ADVANCE(7);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(9);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            END_STATE();
        case 7:
            if(lookahead == '-')
                ADVANCE(13);
            if(lookahead == '5')
                ADVANCE(8);
            if(lookahead == ':')
                ADVANCE(38);
            if(lookahead == ']')
                ADVANCE(164);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(11);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(9);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            END_STATE();
        case 8:
            if(lookahead == '-')
                ADVANCE(13);
            if(lookahead == ':')
                ADVANCE(38);
            if(lookahead == ']')
                ADVANCE(164);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(11);
            if(('6' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            END_STATE();
        case 9:
            if(lookahead == '-')
                ADVANCE(13);
            if(lookahead == ':')
                ADVANCE(38);
            if(lookahead == ']')
                ADVANCE(164);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(11);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            END_STATE();
        case 10:
            if(lookahead == '-')
                ADVANCE(13);
            if(lookahead == ':')
                ADVANCE(38);
            if(lookahead == ']')
                ADVANCE(164);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(9);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            END_STATE();
        case 11:
            if(lookahead == '-')
                ADVANCE(13);
            if(lookahead == ':')
                ADVANCE(38);
            if(lookahead == ']')
                ADVANCE(164);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            END_STATE();
        case 12:
            if(lookahead == '-')
                ADVANCE(13);
            if(lookahead == ':')
                ADVANCE(38);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            END_STATE();
        case 13:
            if(lookahead == '-')
                ADVANCE(13);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            END_STATE();
        case 14:
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 15:
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 16:
            if(lookahead == '.')
                ADVANCE(6);
            END_STATE();
        case 17:
            if(lookahead == '.')
                ADVANCE(6);
            if(lookahead == '5')
                ADVANCE(18);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(16);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(19);
            END_STATE();
        case 18:
            if(lookahead == '.')
                ADVANCE(6);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(16);
            END_STATE();
        case 19:
            if(lookahead == '.')
                ADVANCE(6);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(16);
            END_STATE();
        case 20:
            if(lookahead == '.')
                ADVANCE(6);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(19);
            END_STATE();
        case 21:
            if(lookahead == '.')
                ADVANCE(32);
            END_STATE();
        case 22:
            if(lookahead == '.')
                ADVANCE(32);
            if(lookahead == '5')
                ADVANCE(23);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(21);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(24);
            END_STATE();
        case 23:
            if(lookahead == '.')
                ADVANCE(32);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(21);
            END_STATE();
        case 24:
            if(lookahead == '.')
                ADVANCE(32);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(21);
            END_STATE();
        case 25:
            if(lookahead == '.')
                ADVANCE(32);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(24);
            END_STATE();
        case 26:
            if(lookahead == '.')
                ADVANCE(33);
            END_STATE();
        case 27:
            if(lookahead == '.')
                ADVANCE(33);
            if(lookahead == '5')
                ADVANCE(28);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(26);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(29);
            END_STATE();
        case 28:
            if(lookahead == '.')
                ADVANCE(33);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(26);
            END_STATE();
        case 29:
            if(lookahead == '.')
                ADVANCE(33);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(26);
            END_STATE();
        case 30:
            if(lookahead == '.')
                ADVANCE(33);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(29);
            END_STATE();
        case 31:
            if(lookahead == '0')
                ADVANCE(26);
            if(lookahead == '1')
                ADVANCE(30);
            if(lookahead == '2')
                ADVANCE(27);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(29);
            END_STATE();
        case 32:
            if(lookahead == '0')
                ADVANCE(16);
            if(lookahead == '1')
                ADVANCE(20);
            if(lookahead == '2')
                ADVANCE(17);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(19);
            END_STATE();
        case 33:
            if(lookahead == '0')
                ADVANCE(21);
            if(lookahead == '1')
                ADVANCE(25);
            if(lookahead == '2')
                ADVANCE(22);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(24);
            END_STATE();
        case 34:
            if(lookahead == '@')
                ADVANCE(35);
            END_STATE();
        case 35:
            if(lookahead == '[')
                ADVANCE(31);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            END_STATE();
        case 36:
            if(lookahead == '\\')
                ADVANCE(37);
            if(lookahead == ']')
                ADVANCE(166);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(36);
            END_STATE();
        case 37:
            if(lookahead == '\\')
                ADVANCE(37);
            if(lookahead == ']')
                ADVANCE(166);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(36);
            END_STATE();
        case 38:
            if(lookahead == '\\')
                ADVANCE(37);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(36);
            END_STATE();
        case 39:
            if(lookahead == ']')
                ADVANCE(147);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(39);
            END_STATE();
        case 40:
            if(lookahead == ']')
                ADVANCE(159);
            END_STATE();
        case 41:
            if(lookahead == '_')
                ADVANCE(41);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 42:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(42);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(171);
            END_STATE();
        case 43:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(157);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(158);
            END_STATE();
        case 44:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(165);
            END_STATE();
        case 45:
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               lookahead == '-' ||
               ('/' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 46:
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 47:
            if(eof)
                ADVANCE(48);
            ADVANCE_MAP(
                '!', 122,
                '"', 123,
                '#', 124,
                '$', 125,
                '%', 126,
                '&', 127,
                '\'', 128,
                '(', 129,
                ')', 130,
                '*', 131,
                '+', 132,
                ',', 133,
                '-', 134,
                '.', 135,
                '/', 136,
                ':', 137,
                ';', 138,
                '<', 139,
                '=', 140,
                '>', 141,
                '?', 142,
                '@', 143,
                '[', 145,
                '\\', 146,
                ']', 147,
                '^', 148,
                '_', 152,
                '`', 153,
                'a', 106,
                'l', 90,
                'm', 87,
                's', 111,
                '{', 49,
                '|', 154,
                '}', 86,
                '~', 155,
                0x0b, 120,
                '\f', 120,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(47);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(121);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead != 0)
                ADVANCE(119);
            END_STATE();
        case 48:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 49:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 50:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'a')
                ADVANCE(61);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 51:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'a')
                ADVANCE(76);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 52:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'a')
                ADVANCE(78);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 53:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'a')
                ADVANCE(75);
            if(lookahead == 'i')
                ADVANCE(70);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 54:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'c')
                ADVANCE(58);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 55:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'c')
                ADVANCE(63);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 56:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'e')
                ADVANCE(66);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 57:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'e')
                ADVANCE(79);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 58:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'h')
                ADVANCE(71);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 59:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'h')
                ADVANCE(176);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 60:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'h')
                ADVANCE(174);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 61:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'i')
                ADVANCE(65);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 62:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'i')
                ADVANCE(67);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 63:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'i')
                ADVANCE(62);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 64:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'k')
                ADVANCE(167);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 65:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'l')
                ADVANCE(77);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 66:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'm')
                ADVANCE(172);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 67:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'm')
                ADVANCE(51);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 68:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'm')
                ADVANCE(52);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 69:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'n')
                ADVANCE(54);
            if(lookahead == 's')
                ADVANCE(55);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 70:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'n')
                ADVANCE(64);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 71:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'o')
                ADVANCE(73);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 72:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'o')
                ADVANCE(169);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 73:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'r')
                ADVANCE(160);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 74:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 't')
                ADVANCE(56);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 75:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 't')
                ADVANCE(57);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 76:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 't')
                ADVANCE(59);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 77:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 't')
                ADVANCE(72);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 78:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 't')
                ADVANCE(60);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 79:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(lookahead == 'x')
                ADVANCE(68);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 80:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 81:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(81);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(84);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(82);
            END_STATE();
        case 82:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(84);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(82);
            END_STATE();
        case 83:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(83);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(84);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 84:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(84);
            END_STATE();
        case 85:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 86:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 87:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'a')
                ADVANCE(98);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 88:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'a')
                ADVANCE(113);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 89:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'a')
                ADVANCE(115);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 90:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'a')
                ADVANCE(112);
            if(lookahead == 'i')
                ADVANCE(107);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 91:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'c')
                ADVANCE(95);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 92:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'c')
                ADVANCE(100);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 93:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'e')
                ADVANCE(103);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 94:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'e')
                ADVANCE(116);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 95:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'h')
                ADVANCE(108);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 96:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'h')
                ADVANCE(177);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 97:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'h')
                ADVANCE(175);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 98:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'i')
                ADVANCE(102);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 99:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'i')
                ADVANCE(104);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 100:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'i')
                ADVANCE(99);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 101:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'k')
                ADVANCE(168);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 102:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'l')
                ADVANCE(114);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 103:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'm')
                ADVANCE(173);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 104:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'm')
                ADVANCE(88);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 105:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'm')
                ADVANCE(89);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 106:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'n')
                ADVANCE(91);
            if(lookahead == 's')
                ADVANCE(92);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 107:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'n')
                ADVANCE(101);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 108:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'o')
                ADVANCE(110);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 109:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'o')
                ADVANCE(170);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 110:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'r')
                ADVANCE(161);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 111:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 't')
                ADVANCE(93);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 112:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 't')
                ADVANCE(94);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 113:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 't')
                ADVANCE(96);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 114:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 't')
                ADVANCE(109);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 115:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 't')
                ADVANCE(97);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 116:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(lookahead == 'x')
                ADVANCE(105);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 117:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 118:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(149);
            if(lookahead == 'a')
                ADVANCE(69);
            if(lookahead == 'l')
                ADVANCE(53);
            if(lookahead == 'm')
                ADVANCE(50);
            if(lookahead == 's')
                ADVANCE(74);
            if(lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(118);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 119:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(41);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 120:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(150);
            if(lookahead == 'a')
                ADVANCE(106);
            if(lookahead == 'l')
                ADVANCE(90);
            if(lookahead == 'm')
                ADVANCE(87);
            if(lookahead == 's')
                ADVANCE(111);
            if(lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(120);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 121:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(121);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 122:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 123:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(34);
            if(lookahead == '\\')
                ADVANCE(46);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 124:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 125:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 126:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 127:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 128:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 129:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 130:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 131:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 132:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 133:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 134:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 135:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 136:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 137:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 138:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 139:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 140:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 141:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 142:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 143:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 144:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 145:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(156);
            END_STATE();
        case 146:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            END_STATE();
        case 147:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 148:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 149:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 150:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 151:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(84);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(82);
            END_STATE();
        case 152:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 153:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 154:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 155:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            END_STATE();
        case 156:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            END_STATE();
        case 157:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(157);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(158);
            END_STATE();
        case 158:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ' ||
               ('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(158);
            END_STATE();
        case 159:
            ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
            END_STATE();
        case 160:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 161:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 162:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(162);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(163);
            END_STATE();
        case 163:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(163);
            END_STATE();
        case 164:
            ACCEPT_TOKEN(sym_inline_email_rx);
            END_STATE();
        case 165:
            ACCEPT_TOKEN(sym_inline_email_rx);
            if(lookahead == '-')
                ADVANCE(5);
            if(lookahead == '.')
                ADVANCE(44);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(165);
            END_STATE();
        case 166:
            ACCEPT_TOKEN(sym_inline_email_rx);
            if(lookahead == '\\')
                ADVANCE(37);
            if(lookahead == ']')
                ADVANCE(166);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(36);
            END_STATE();
        case 167:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 168:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 169:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 170:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 171:
            ACCEPT_TOKEN(aux_sym_inline_link_macro_token1);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '[')
                ADVANCE(171);
            END_STATE();
        case 172:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 173:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 174:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 175:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 176:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(80);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(82);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(83);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(80);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        case 177:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(45);
            if(lookahead == '@')
                ADVANCE(35);
            if(lookahead == '_')
                ADVANCE(14);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(15);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(119);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 47 },
    [2] = { .lex_state = 47 },
    [3] = { .lex_state = 47 },
    [4] = { .lex_state = 0 },
    [5] = { .lex_state = 47 },
    [6] = { .lex_state = 47 },
    [7] = { .lex_state = 47 },
    [8] = { .lex_state = 47 },
    [9] = { .lex_state = 47 },
    [10] = { .lex_state = 47 },
    [11] = { .lex_state = 47 },
    [12] = { .lex_state = 47 },
    [13] = { .lex_state = 2 },
    [14] = { .lex_state = 2 },
    [15] = { .lex_state = 2 },
    [16] = { .lex_state = 42 },
    [17] = { .lex_state = 2 },
    [18] = { .lex_state = 43 },
    [19] = { .lex_state = 2 },
    [20] = { .lex_state = 2 },
    [21] = { .lex_state = 2 },
    [22] = { .lex_state = 162 },
    [23] = { .lex_state = 2 },
    [24] = { .lex_state = 162 },
    [25] = { .lex_state = 162 },
    [26] = { .lex_state = 39 },
    [27] = { .lex_state = 2 },
    [28] = { .lex_state = 39 },
    [29] = { .lex_state = 39 },
    [30] = { .lex_state = 0 },
    [31] = { .lex_state = 2 },
    [32] = { .lex_state = 2 },
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
        [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
        [anon_sym_anchor] = ACTIONS(1),
        [sym_inline_email_rx] = ACTIONS(1),
        [anon_sym_link] = ACTIONS(1),
        [anon_sym_mailto] = ACTIONS(1),
        [anon_sym_stem] = ACTIONS(1),
        [anon_sym_latexmath] = ACTIONS(1),
        [anon_sym_asciimath] = ACTIONS(1),
    },
    [1] = {
        [sym_inline] = STATE(30),
        [sym_replacement] = STATE(3),
        [sym_word] = STATE(3),
        [sym_punctuation] = STATE(3),
        [sym_inline_anchor_rx] = STATE(3),
        [sym_inline_link_macro] = STATE(3),
        [sym_inline_math_macro] = STATE(3),
        [aux_sym_inline_repeat1] = STATE(3),
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
        [anon_sym_LBRACK_LBRACK] = ACTIONS(9),
        [anon_sym_anchor] = ACTIONS(11),
        [sym_inline_email_rx] = ACTIONS(13),
        [anon_sym_link] = ACTIONS(15),
        [anon_sym_mailto] = ACTIONS(15),
        [anon_sym_stem] = ACTIONS(17),
        [anon_sym_latexmath] = ACTIONS(17),
        [anon_sym_asciimath] = ACTIONS(17),
    },
    [2] = {
        [sym_replacement] = STATE(2),
        [sym_word] = STATE(2),
        [sym_punctuation] = STATE(2),
        [sym_inline_anchor_rx] = STATE(2),
        [sym_inline_link_macro] = STATE(2),
        [sym_inline_math_macro] = STATE(2),
        [aux_sym_inline_repeat1] = STATE(2),
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
        [anon_sym_LBRACK_LBRACK] = ACTIONS(30),
        [anon_sym_anchor] = ACTIONS(33),
        [sym_inline_email_rx] = ACTIONS(36),
        [anon_sym_link] = ACTIONS(39),
        [anon_sym_mailto] = ACTIONS(39),
        [anon_sym_stem] = ACTIONS(42),
        [anon_sym_latexmath] = ACTIONS(42),
        [anon_sym_asciimath] = ACTIONS(42),
    },
    [3] = {
        [sym_replacement] = STATE(2),
        [sym_word] = STATE(2),
        [sym_punctuation] = STATE(2),
        [sym_inline_anchor_rx] = STATE(2),
        [sym_inline_link_macro] = STATE(2),
        [sym_inline_math_macro] = STATE(2),
        [aux_sym_inline_repeat1] = STATE(2),
        [ts_builtin_sym_end] = ACTIONS(45),
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
        [anon_sym_LBRACK_LBRACK] = ACTIONS(9),
        [anon_sym_anchor] = ACTIONS(11),
        [sym_inline_email_rx] = ACTIONS(47),
        [anon_sym_link] = ACTIONS(15),
        [anon_sym_mailto] = ACTIONS(15),
        [anon_sym_stem] = ACTIONS(17),
        [anon_sym_latexmath] = ACTIONS(17),
        [anon_sym_asciimath] = ACTIONS(17),
    },
    [4] = {
        [ts_builtin_sym_end] = ACTIONS(49),
        [anon_sym_LBRACE] = ACTIONS(51),
        [aux_sym_replacement_token1] = ACTIONS(53),
        [anon_sym_RBRACE] = ACTIONS(51),
        [sym__word_no_digit] = ACTIONS(51),
        [sym__digits] = ACTIONS(51),
        [anon_sym_BANG] = ACTIONS(51),
        [anon_sym_DQUOTE] = ACTIONS(51),
        [anon_sym_POUND] = ACTIONS(51),
        [anon_sym_DOLLAR] = ACTIONS(51),
        [anon_sym_PERCENT] = ACTIONS(51),
        [anon_sym_AMP] = ACTIONS(51),
        [anon_sym_SQUOTE] = ACTIONS(51),
        [anon_sym_LPAREN] = ACTIONS(51),
        [anon_sym_RPAREN] = ACTIONS(51),
        [anon_sym_STAR] = ACTIONS(51),
        [anon_sym_PLUS] = ACTIONS(51),
        [anon_sym_COMMA] = ACTIONS(51),
        [anon_sym_DASH] = ACTIONS(51),
        [anon_sym_DOT] = ACTIONS(51),
        [anon_sym_SLASH] = ACTIONS(51),
        [anon_sym_COLON] = ACTIONS(51),
        [anon_sym_SEMI] = ACTIONS(51),
        [anon_sym_LT] = ACTIONS(51),
        [anon_sym_EQ] = ACTIONS(51),
        [anon_sym_GT] = ACTIONS(51),
        [anon_sym_QMARK] = ACTIONS(51),
        [anon_sym_AT] = ACTIONS(51),
        [anon_sym_LBRACK] = ACTIONS(51),
        [anon_sym_BSLASH] = ACTIONS(51),
        [anon_sym_RBRACK] = ACTIONS(51),
        [anon_sym_CARET] = ACTIONS(51),
        [anon_sym__] = ACTIONS(51),
        [anon_sym_BQUOTE] = ACTIONS(51),
        [anon_sym_PIPE] = ACTIONS(51),
        [anon_sym_TILDE] = ACTIONS(51),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(51),
        [anon_sym_anchor] = ACTIONS(51),
        [sym_inline_email_rx] = ACTIONS(51),
        [anon_sym_link] = ACTIONS(51),
        [anon_sym_mailto] = ACTIONS(51),
        [anon_sym_stem] = ACTIONS(51),
        [anon_sym_latexmath] = ACTIONS(51),
        [anon_sym_asciimath] = ACTIONS(51),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(49),
        [anon_sym_LBRACE] = ACTIONS(51),
        [anon_sym_RBRACE] = ACTIONS(51),
        [sym__word_no_digit] = ACTIONS(51),
        [sym__digits] = ACTIONS(51),
        [anon_sym_BANG] = ACTIONS(51),
        [anon_sym_DQUOTE] = ACTIONS(51),
        [anon_sym_POUND] = ACTIONS(51),
        [anon_sym_DOLLAR] = ACTIONS(51),
        [anon_sym_PERCENT] = ACTIONS(51),
        [anon_sym_AMP] = ACTIONS(51),
        [anon_sym_SQUOTE] = ACTIONS(51),
        [anon_sym_LPAREN] = ACTIONS(51),
        [anon_sym_RPAREN] = ACTIONS(51),
        [anon_sym_STAR] = ACTIONS(51),
        [anon_sym_PLUS] = ACTIONS(51),
        [anon_sym_COMMA] = ACTIONS(51),
        [anon_sym_DASH] = ACTIONS(51),
        [anon_sym_DOT] = ACTIONS(51),
        [anon_sym_SLASH] = ACTIONS(51),
        [anon_sym_COLON] = ACTIONS(51),
        [anon_sym_SEMI] = ACTIONS(51),
        [anon_sym_LT] = ACTIONS(51),
        [anon_sym_EQ] = ACTIONS(51),
        [anon_sym_GT] = ACTIONS(51),
        [anon_sym_QMARK] = ACTIONS(51),
        [anon_sym_AT] = ACTIONS(51),
        [anon_sym_LBRACK] = ACTIONS(51),
        [anon_sym_BSLASH] = ACTIONS(51),
        [anon_sym_RBRACK] = ACTIONS(51),
        [anon_sym_CARET] = ACTIONS(51),
        [anon_sym__] = ACTIONS(51),
        [anon_sym_BQUOTE] = ACTIONS(51),
        [anon_sym_PIPE] = ACTIONS(51),
        [anon_sym_TILDE] = ACTIONS(51),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(51),
        [anon_sym_anchor] = ACTIONS(51),
        [sym_inline_email_rx] = ACTIONS(51),
        [anon_sym_link] = ACTIONS(51),
        [anon_sym_mailto] = ACTIONS(51),
        [anon_sym_stem] = ACTIONS(51),
        [anon_sym_latexmath] = ACTIONS(51),
        [anon_sym_asciimath] = ACTIONS(51),
    },
    [6] = {
        [ts_builtin_sym_end] = ACTIONS(55),
        [anon_sym_LBRACE] = ACTIONS(57),
        [anon_sym_RBRACE] = ACTIONS(57),
        [sym__word_no_digit] = ACTIONS(57),
        [sym__digits] = ACTIONS(57),
        [anon_sym_BANG] = ACTIONS(57),
        [anon_sym_DQUOTE] = ACTIONS(57),
        [anon_sym_POUND] = ACTIONS(57),
        [anon_sym_DOLLAR] = ACTIONS(57),
        [anon_sym_PERCENT] = ACTIONS(57),
        [anon_sym_AMP] = ACTIONS(57),
        [anon_sym_SQUOTE] = ACTIONS(57),
        [anon_sym_LPAREN] = ACTIONS(57),
        [anon_sym_RPAREN] = ACTIONS(57),
        [anon_sym_STAR] = ACTIONS(57),
        [anon_sym_PLUS] = ACTIONS(57),
        [anon_sym_COMMA] = ACTIONS(57),
        [anon_sym_DASH] = ACTIONS(57),
        [anon_sym_DOT] = ACTIONS(57),
        [anon_sym_SLASH] = ACTIONS(57),
        [anon_sym_COLON] = ACTIONS(57),
        [anon_sym_SEMI] = ACTIONS(57),
        [anon_sym_LT] = ACTIONS(57),
        [anon_sym_EQ] = ACTIONS(57),
        [anon_sym_GT] = ACTIONS(57),
        [anon_sym_QMARK] = ACTIONS(57),
        [anon_sym_AT] = ACTIONS(57),
        [anon_sym_LBRACK] = ACTIONS(57),
        [anon_sym_BSLASH] = ACTIONS(57),
        [anon_sym_RBRACK] = ACTIONS(57),
        [anon_sym_CARET] = ACTIONS(57),
        [anon_sym__] = ACTIONS(57),
        [anon_sym_BQUOTE] = ACTIONS(57),
        [anon_sym_PIPE] = ACTIONS(57),
        [anon_sym_TILDE] = ACTIONS(57),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(57),
        [anon_sym_anchor] = ACTIONS(57),
        [sym_inline_email_rx] = ACTIONS(57),
        [anon_sym_link] = ACTIONS(57),
        [anon_sym_mailto] = ACTIONS(57),
        [anon_sym_stem] = ACTIONS(57),
        [anon_sym_latexmath] = ACTIONS(57),
        [anon_sym_asciimath] = ACTIONS(57),
    },
    [7] = {
        [ts_builtin_sym_end] = ACTIONS(59),
        [anon_sym_LBRACE] = ACTIONS(61),
        [anon_sym_RBRACE] = ACTIONS(61),
        [sym__word_no_digit] = ACTIONS(61),
        [sym__digits] = ACTIONS(61),
        [anon_sym_BANG] = ACTIONS(61),
        [anon_sym_DQUOTE] = ACTIONS(61),
        [anon_sym_POUND] = ACTIONS(61),
        [anon_sym_DOLLAR] = ACTIONS(61),
        [anon_sym_PERCENT] = ACTIONS(61),
        [anon_sym_AMP] = ACTIONS(61),
        [anon_sym_SQUOTE] = ACTIONS(61),
        [anon_sym_LPAREN] = ACTIONS(61),
        [anon_sym_RPAREN] = ACTIONS(61),
        [anon_sym_STAR] = ACTIONS(61),
        [anon_sym_PLUS] = ACTIONS(61),
        [anon_sym_COMMA] = ACTIONS(61),
        [anon_sym_DASH] = ACTIONS(61),
        [anon_sym_DOT] = ACTIONS(61),
        [anon_sym_SLASH] = ACTIONS(61),
        [anon_sym_COLON] = ACTIONS(61),
        [anon_sym_SEMI] = ACTIONS(61),
        [anon_sym_LT] = ACTIONS(61),
        [anon_sym_EQ] = ACTIONS(61),
        [anon_sym_GT] = ACTIONS(61),
        [anon_sym_QMARK] = ACTIONS(61),
        [anon_sym_AT] = ACTIONS(61),
        [anon_sym_LBRACK] = ACTIONS(61),
        [anon_sym_BSLASH] = ACTIONS(61),
        [anon_sym_RBRACK] = ACTIONS(61),
        [anon_sym_CARET] = ACTIONS(61),
        [anon_sym__] = ACTIONS(61),
        [anon_sym_BQUOTE] = ACTIONS(61),
        [anon_sym_PIPE] = ACTIONS(61),
        [anon_sym_TILDE] = ACTIONS(61),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(61),
        [anon_sym_anchor] = ACTIONS(61),
        [sym_inline_email_rx] = ACTIONS(61),
        [anon_sym_link] = ACTIONS(61),
        [anon_sym_mailto] = ACTIONS(61),
        [anon_sym_stem] = ACTIONS(61),
        [anon_sym_latexmath] = ACTIONS(61),
        [anon_sym_asciimath] = ACTIONS(61),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(63),
        [anon_sym_LBRACE] = ACTIONS(65),
        [anon_sym_RBRACE] = ACTIONS(65),
        [sym__word_no_digit] = ACTIONS(65),
        [sym__digits] = ACTIONS(65),
        [anon_sym_BANG] = ACTIONS(65),
        [anon_sym_DQUOTE] = ACTIONS(65),
        [anon_sym_POUND] = ACTIONS(65),
        [anon_sym_DOLLAR] = ACTIONS(65),
        [anon_sym_PERCENT] = ACTIONS(65),
        [anon_sym_AMP] = ACTIONS(65),
        [anon_sym_SQUOTE] = ACTIONS(65),
        [anon_sym_LPAREN] = ACTIONS(65),
        [anon_sym_RPAREN] = ACTIONS(65),
        [anon_sym_STAR] = ACTIONS(65),
        [anon_sym_PLUS] = ACTIONS(65),
        [anon_sym_COMMA] = ACTIONS(65),
        [anon_sym_DASH] = ACTIONS(65),
        [anon_sym_DOT] = ACTIONS(65),
        [anon_sym_SLASH] = ACTIONS(65),
        [anon_sym_COLON] = ACTIONS(65),
        [anon_sym_SEMI] = ACTIONS(65),
        [anon_sym_LT] = ACTIONS(65),
        [anon_sym_EQ] = ACTIONS(65),
        [anon_sym_GT] = ACTIONS(65),
        [anon_sym_QMARK] = ACTIONS(65),
        [anon_sym_AT] = ACTIONS(65),
        [anon_sym_LBRACK] = ACTIONS(65),
        [anon_sym_BSLASH] = ACTIONS(65),
        [anon_sym_RBRACK] = ACTIONS(65),
        [anon_sym_CARET] = ACTIONS(65),
        [anon_sym__] = ACTIONS(65),
        [anon_sym_BQUOTE] = ACTIONS(65),
        [anon_sym_PIPE] = ACTIONS(65),
        [anon_sym_TILDE] = ACTIONS(65),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(65),
        [anon_sym_anchor] = ACTIONS(65),
        [sym_inline_email_rx] = ACTIONS(65),
        [anon_sym_link] = ACTIONS(65),
        [anon_sym_mailto] = ACTIONS(65),
        [anon_sym_stem] = ACTIONS(65),
        [anon_sym_latexmath] = ACTIONS(65),
        [anon_sym_asciimath] = ACTIONS(65),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(67),
        [anon_sym_LBRACE] = ACTIONS(69),
        [anon_sym_RBRACE] = ACTIONS(69),
        [sym__word_no_digit] = ACTIONS(69),
        [sym__digits] = ACTIONS(69),
        [anon_sym_BANG] = ACTIONS(69),
        [anon_sym_DQUOTE] = ACTIONS(69),
        [anon_sym_POUND] = ACTIONS(69),
        [anon_sym_DOLLAR] = ACTIONS(69),
        [anon_sym_PERCENT] = ACTIONS(69),
        [anon_sym_AMP] = ACTIONS(69),
        [anon_sym_SQUOTE] = ACTIONS(69),
        [anon_sym_LPAREN] = ACTIONS(69),
        [anon_sym_RPAREN] = ACTIONS(69),
        [anon_sym_STAR] = ACTIONS(69),
        [anon_sym_PLUS] = ACTIONS(69),
        [anon_sym_COMMA] = ACTIONS(69),
        [anon_sym_DASH] = ACTIONS(69),
        [anon_sym_DOT] = ACTIONS(69),
        [anon_sym_SLASH] = ACTIONS(69),
        [anon_sym_COLON] = ACTIONS(69),
        [anon_sym_SEMI] = ACTIONS(69),
        [anon_sym_LT] = ACTIONS(69),
        [anon_sym_EQ] = ACTIONS(69),
        [anon_sym_GT] = ACTIONS(69),
        [anon_sym_QMARK] = ACTIONS(69),
        [anon_sym_AT] = ACTIONS(69),
        [anon_sym_LBRACK] = ACTIONS(69),
        [anon_sym_BSLASH] = ACTIONS(69),
        [anon_sym_RBRACK] = ACTIONS(69),
        [anon_sym_CARET] = ACTIONS(69),
        [anon_sym__] = ACTIONS(69),
        [anon_sym_BQUOTE] = ACTIONS(69),
        [anon_sym_PIPE] = ACTIONS(69),
        [anon_sym_TILDE] = ACTIONS(69),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(69),
        [anon_sym_anchor] = ACTIONS(69),
        [sym_inline_email_rx] = ACTIONS(69),
        [anon_sym_link] = ACTIONS(69),
        [anon_sym_mailto] = ACTIONS(69),
        [anon_sym_stem] = ACTIONS(69),
        [anon_sym_latexmath] = ACTIONS(69),
        [anon_sym_asciimath] = ACTIONS(69),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(71),
        [anon_sym_LBRACE] = ACTIONS(73),
        [anon_sym_RBRACE] = ACTIONS(73),
        [sym__word_no_digit] = ACTIONS(73),
        [sym__digits] = ACTIONS(73),
        [anon_sym_BANG] = ACTIONS(73),
        [anon_sym_DQUOTE] = ACTIONS(73),
        [anon_sym_POUND] = ACTIONS(73),
        [anon_sym_DOLLAR] = ACTIONS(73),
        [anon_sym_PERCENT] = ACTIONS(73),
        [anon_sym_AMP] = ACTIONS(73),
        [anon_sym_SQUOTE] = ACTIONS(73),
        [anon_sym_LPAREN] = ACTIONS(73),
        [anon_sym_RPAREN] = ACTIONS(73),
        [anon_sym_STAR] = ACTIONS(73),
        [anon_sym_PLUS] = ACTIONS(73),
        [anon_sym_COMMA] = ACTIONS(73),
        [anon_sym_DASH] = ACTIONS(73),
        [anon_sym_DOT] = ACTIONS(73),
        [anon_sym_SLASH] = ACTIONS(73),
        [anon_sym_COLON] = ACTIONS(73),
        [anon_sym_SEMI] = ACTIONS(73),
        [anon_sym_LT] = ACTIONS(73),
        [anon_sym_EQ] = ACTIONS(73),
        [anon_sym_GT] = ACTIONS(73),
        [anon_sym_QMARK] = ACTIONS(73),
        [anon_sym_AT] = ACTIONS(73),
        [anon_sym_LBRACK] = ACTIONS(73),
        [anon_sym_BSLASH] = ACTIONS(73),
        [anon_sym_RBRACK] = ACTIONS(73),
        [anon_sym_CARET] = ACTIONS(73),
        [anon_sym__] = ACTIONS(73),
        [anon_sym_BQUOTE] = ACTIONS(73),
        [anon_sym_PIPE] = ACTIONS(73),
        [anon_sym_TILDE] = ACTIONS(73),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(73),
        [anon_sym_anchor] = ACTIONS(73),
        [sym_inline_email_rx] = ACTIONS(73),
        [anon_sym_link] = ACTIONS(73),
        [anon_sym_mailto] = ACTIONS(73),
        [anon_sym_stem] = ACTIONS(73),
        [anon_sym_latexmath] = ACTIONS(73),
        [anon_sym_asciimath] = ACTIONS(73),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(75),
        [anon_sym_LBRACE] = ACTIONS(77),
        [anon_sym_RBRACE] = ACTIONS(77),
        [sym__word_no_digit] = ACTIONS(77),
        [sym__digits] = ACTIONS(77),
        [anon_sym_BANG] = ACTIONS(77),
        [anon_sym_DQUOTE] = ACTIONS(77),
        [anon_sym_POUND] = ACTIONS(77),
        [anon_sym_DOLLAR] = ACTIONS(77),
        [anon_sym_PERCENT] = ACTIONS(77),
        [anon_sym_AMP] = ACTIONS(77),
        [anon_sym_SQUOTE] = ACTIONS(77),
        [anon_sym_LPAREN] = ACTIONS(77),
        [anon_sym_RPAREN] = ACTIONS(77),
        [anon_sym_STAR] = ACTIONS(77),
        [anon_sym_PLUS] = ACTIONS(77),
        [anon_sym_COMMA] = ACTIONS(77),
        [anon_sym_DASH] = ACTIONS(77),
        [anon_sym_DOT] = ACTIONS(77),
        [anon_sym_SLASH] = ACTIONS(77),
        [anon_sym_COLON] = ACTIONS(77),
        [anon_sym_SEMI] = ACTIONS(77),
        [anon_sym_LT] = ACTIONS(77),
        [anon_sym_EQ] = ACTIONS(77),
        [anon_sym_GT] = ACTIONS(77),
        [anon_sym_QMARK] = ACTIONS(77),
        [anon_sym_AT] = ACTIONS(77),
        [anon_sym_LBRACK] = ACTIONS(77),
        [anon_sym_BSLASH] = ACTIONS(77),
        [anon_sym_RBRACK] = ACTIONS(77),
        [anon_sym_CARET] = ACTIONS(77),
        [anon_sym__] = ACTIONS(77),
        [anon_sym_BQUOTE] = ACTIONS(77),
        [anon_sym_PIPE] = ACTIONS(77),
        [anon_sym_TILDE] = ACTIONS(77),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(77),
        [anon_sym_anchor] = ACTIONS(77),
        [sym_inline_email_rx] = ACTIONS(77),
        [anon_sym_link] = ACTIONS(77),
        [anon_sym_mailto] = ACTIONS(77),
        [anon_sym_stem] = ACTIONS(77),
        [anon_sym_latexmath] = ACTIONS(77),
        [anon_sym_asciimath] = ACTIONS(77),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(79),
        [anon_sym_LBRACE] = ACTIONS(81),
        [anon_sym_RBRACE] = ACTIONS(81),
        [sym__word_no_digit] = ACTIONS(81),
        [sym__digits] = ACTIONS(81),
        [anon_sym_BANG] = ACTIONS(81),
        [anon_sym_DQUOTE] = ACTIONS(81),
        [anon_sym_POUND] = ACTIONS(81),
        [anon_sym_DOLLAR] = ACTIONS(81),
        [anon_sym_PERCENT] = ACTIONS(81),
        [anon_sym_AMP] = ACTIONS(81),
        [anon_sym_SQUOTE] = ACTIONS(81),
        [anon_sym_LPAREN] = ACTIONS(81),
        [anon_sym_RPAREN] = ACTIONS(81),
        [anon_sym_STAR] = ACTIONS(81),
        [anon_sym_PLUS] = ACTIONS(81),
        [anon_sym_COMMA] = ACTIONS(81),
        [anon_sym_DASH] = ACTIONS(81),
        [anon_sym_DOT] = ACTIONS(81),
        [anon_sym_SLASH] = ACTIONS(81),
        [anon_sym_COLON] = ACTIONS(81),
        [anon_sym_SEMI] = ACTIONS(81),
        [anon_sym_LT] = ACTIONS(81),
        [anon_sym_EQ] = ACTIONS(81),
        [anon_sym_GT] = ACTIONS(81),
        [anon_sym_QMARK] = ACTIONS(81),
        [anon_sym_AT] = ACTIONS(81),
        [anon_sym_LBRACK] = ACTIONS(81),
        [anon_sym_BSLASH] = ACTIONS(81),
        [anon_sym_RBRACK] = ACTIONS(81),
        [anon_sym_CARET] = ACTIONS(81),
        [anon_sym__] = ACTIONS(81),
        [anon_sym_BQUOTE] = ACTIONS(81),
        [anon_sym_PIPE] = ACTIONS(81),
        [anon_sym_TILDE] = ACTIONS(81),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(81),
        [anon_sym_anchor] = ACTIONS(81),
        [sym_inline_email_rx] = ACTIONS(81),
        [anon_sym_link] = ACTIONS(81),
        [anon_sym_mailto] = ACTIONS(81),
        [anon_sym_stem] = ACTIONS(81),
        [anon_sym_latexmath] = ACTIONS(81),
        [anon_sym_asciimath] = ACTIONS(81),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 2,
    ACTIONS(83),
    1,
    anon_sym_COMMA,
    ACTIONS(85),
    1,
    anon_sym_RBRACK_RBRACK,
    [7] = 1,
    ACTIONS(87),
    1,
    anon_sym_COLON,
    [11] = 1,
    ACTIONS(89),
    1,
    aux_sym_replacement_token1,
    [15] = 1,
    ACTIONS(91),
    1,
    aux_sym_inline_link_macro_token1,
    [19] = 1,
    ACTIONS(93),
    1,
    anon_sym_LBRACK,
    [23] = 1,
    ACTIONS(95),
    1,
    aux_sym_inline_anchor_rx_token1,
    [27] = 1,
    ACTIONS(97),
    1,
    aux_sym_replacement_token1,
    [31] = 1,
    ACTIONS(99),
    1,
    anon_sym_LBRACK,
    [35] = 1,
    ACTIONS(101),
    1,
    anon_sym_LBRACK,
    [39] = 1,
    ACTIONS(103),
    1,
    aux_sym_inline_anchor_rx_token2,
    [43] = 1,
    ACTIONS(105),
    1,
    anon_sym_RBRACK_RBRACK,
    [47] = 1,
    ACTIONS(107),
    1,
    aux_sym_inline_anchor_rx_token2,
    [51] = 1,
    ACTIONS(109),
    1,
    aux_sym_inline_anchor_rx_token2,
    [55] = 1,
    ACTIONS(111),
    1,
    anon_sym_RBRACK,
    [59] = 1,
    ACTIONS(113),
    1,
    anon_sym_RBRACE,
    [63] = 1,
    ACTIONS(115),
    1,
    anon_sym_RBRACK,
    [67] = 1,
    ACTIONS(117),
    1,
    anon_sym_RBRACK,
    [71] = 1,
    ACTIONS(119),
    1,
    ts_builtin_sym_end,
    [75] = 1,
    ACTIONS(121),
    1,
    anon_sym_COLON,
    [79] = 1,
    ACTIONS(123),
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
    SHIFT(19),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(32),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(3),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(31),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(14),
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
    SHIFT_REPEAT(19),
    [33] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(32),
    [36] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(2),
    [39] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(31),
    [42] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(14),
    [45] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [47] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(2),
    [49] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [51] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [53] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(27),
    [55] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_word, 1, 0, 0),
    [57] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_word, 1, 0, 0),
    [59] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_link_macro, 6, 0, 0),
    [61] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_link_macro, 6, 0, 0),
    [63] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 6, 0, 0),
    [65] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 6, 0, 0),
    [67] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_math_macro, 5, 0, 0),
    [69] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_math_macro, 5, 0, 0),
    [71] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 5, 0, 0),
    [73] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 5, 0, 0),
    [75] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 3, 0, 0),
    [77] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 3, 0, 0),
    [79] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 0),
    [81] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 0),
    [83] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [85] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [87] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [89] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [91] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [93] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [95] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [97] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [99] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [101] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [103] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [105] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [107] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [109] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(29),
    [111] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [113] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [115] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [117] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [119] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [121] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [123] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
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
