#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
    anon_sym_stem = 39,
    anon_sym_latexmath = 40,
    anon_sym_asciimath = 41,
    aux_sym_inline_math_macro_token1 = 42,
    sym_inline = 43,
    sym_replacement = 44,
    sym_word = 45,
    sym_punctuation = 46,
    sym_inline_link_macro = 47,
    sym_inline_math_macro = 48,
    aux_sym_inline_repeat1 = 49,
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
    [anon_sym_stem] = "stem",
    [anon_sym_latexmath] = "latexmath",
    [anon_sym_asciimath] = "asciimath",
    [aux_sym_inline_math_macro_token1] = "inline_math_macro_token1",
    [sym_inline] = "inline",
    [sym_replacement] = "replacement",
    [sym_word] = "word",
    [sym_punctuation] = "punctuation",
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
    [anon_sym_link] = anon_sym_link,
    [anon_sym_mailto] = anon_sym_mailto,
    [aux_sym_inline_link_macro_token1] = aux_sym_inline_link_macro_token1,
    [anon_sym_stem] = anon_sym_stem,
    [anon_sym_latexmath] = anon_sym_latexmath,
    [anon_sym_asciimath] = anon_sym_asciimath,
    [aux_sym_inline_math_macro_token1] = aux_sym_inline_math_macro_token1,
    [sym_inline] = sym_inline,
    [sym_replacement] = sym_replacement,
    [sym_word] = sym_word,
    [sym_punctuation] = sym_punctuation,
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
    [aux_sym_inline_math_macro_token1] = {
        .visible = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(7);
            ADVANCE_MAP(
                '!', 69,
                '"', 70,
                '#', 71,
                '$', 72,
                '%', 73,
                '&', 74,
                '\'', 75,
                '(', 76,
                ')', 77,
                '*', 78,
                '+', 79,
                ',', 80,
                '-', 81,
                '.', 82,
                '/', 83,
                ':', 84,
                ';', 85,
                '<', 86,
                '=', 87,
                '>', 88,
                '?', 89,
                '@', 90,
                '[', 91,
                '\\', 92,
                ']', 93,
                '^', 94,
                '_', 98,
                '`', 99,
                'a', 28,
                'l', 12,
                'm', 9,
                's', 29,
                '{', 8,
                '|', 100,
                '}', 38,
                '~', 101,
                0x0b, 39,
                '\f', 39,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(36);
            if(('A' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0)
                ADVANCE(66);
            END_STATE();
        case 1:
            if(lookahead == ':')
                ADVANCE(84);
            if(lookahead == '[')
                ADVANCE(91);
            if(lookahead == ']')
                ADVANCE(93);
            if(lookahead == '}')
                ADVANCE(38);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(1);
            END_STATE();
        case 2:
            if(lookahead == '[')
                ADVANCE(3);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ')
                ADVANCE(2);
            END_STATE();
        case 3:
            if(lookahead == ']')
                ADVANCE(106);
            if(lookahead != 0)
                ADVANCE(3);
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
                ADVANCE(66);
            END_STATE();
        case 5:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(5);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(2);
            END_STATE();
        case 6:
            if(eof)
                ADVANCE(7);
            ADVANCE_MAP(
                '!', 69,
                '"', 70,
                '#', 71,
                '$', 72,
                '%', 73,
                '&', 74,
                '\'', 75,
                '(', 76,
                ')', 77,
                '*', 78,
                '+', 79,
                ',', 80,
                '-', 81,
                '.', 82,
                '/', 83,
                ':', 84,
                ';', 85,
                '<', 86,
                '=', 87,
                '>', 88,
                '?', 89,
                '@', 90,
                '[', 91,
                '\\', 92,
                ']', 93,
                '^', 94,
                '_', 95,
                '`', 99,
                'a', 59,
                'l', 43,
                'm', 40,
                's', 60,
                '{', 8,
                '|', 100,
                '}', 38,
                '~', 101,
                0x0b, 67,
                '\f', 67,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(6);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(68);
            if(lookahead != 0)
                ADVANCE(66);
            END_STATE();
        case 7:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 8:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 9:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 'a')
                ADVANCE(18);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 10:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 'a')
                ADVANCE(31);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 11:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 'a')
                ADVANCE(33);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 12:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 'a')
                ADVANCE(32);
            if(lookahead == 'i')
                ADVANCE(26);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 13:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 'c')
                ADVANCE(20);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 14:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 'e')
                ADVANCE(23);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 15:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 'e')
                ADVANCE(34);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 16:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 'h')
                ADVANCE(111);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 17:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 'h')
                ADVANCE(109);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 18:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 'i')
                ADVANCE(22);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 19:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 'i')
                ADVANCE(24);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 20:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 'i')
                ADVANCE(19);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 21:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 'k')
                ADVANCE(102);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 22:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 'l')
                ADVANCE(30);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 23:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 'm')
                ADVANCE(107);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 24:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 'm')
                ADVANCE(10);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 25:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 'm')
                ADVANCE(11);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 26:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 'n')
                ADVANCE(21);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 27:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 'o')
                ADVANCE(104);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 28:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 's')
                ADVANCE(13);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 29:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 't')
                ADVANCE(14);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 30:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 't')
                ADVANCE(27);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 31:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 't')
                ADVANCE(16);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 32:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 't')
                ADVANCE(15);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 33:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 't')
                ADVANCE(17);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 34:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(lookahead == 'x')
                ADVANCE(25);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 35:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(35);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 36:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(36);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            END_STATE();
        case 37:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            END_STATE();
        case 38:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 39:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(96);
            if(lookahead == 'a')
                ADVANCE(28);
            if(lookahead == 'l')
                ADVANCE(12);
            if(lookahead == 'm')
                ADVANCE(9);
            if(lookahead == 's')
                ADVANCE(29);
            if(lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(39);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 40:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'a')
                ADVANCE(49);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || 'a' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 41:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'a')
                ADVANCE(62);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || 'a' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 42:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'a')
                ADVANCE(64);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || 'a' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 43:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'a')
                ADVANCE(63);
            if(lookahead == 'i')
                ADVANCE(57);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || 'a' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 44:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'c')
                ADVANCE(51);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 45:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'e')
                ADVANCE(54);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 46:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'e')
                ADVANCE(65);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 47:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'h')
                ADVANCE(112);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 48:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'h')
                ADVANCE(110);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 49:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'i')
                ADVANCE(53);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 50:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'i')
                ADVANCE(55);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 51:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'i')
                ADVANCE(50);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 52:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'k')
                ADVANCE(103);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 53:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'l')
                ADVANCE(61);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 54:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'm')
                ADVANCE(108);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 55:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'm')
                ADVANCE(41);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 56:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'm')
                ADVANCE(42);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 57:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'n')
                ADVANCE(52);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 58:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'o')
                ADVANCE(105);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 59:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 's')
                ADVANCE(44);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 60:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 't')
                ADVANCE(45);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 61:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 't')
                ADVANCE(58);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 62:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 't')
                ADVANCE(47);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 63:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 't')
                ADVANCE(46);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 64:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 't')
                ADVANCE(48);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 65:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == 'x')
                ADVANCE(56);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 66:
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
                ADVANCE(66);
            END_STATE();
        case 67:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(97);
            if(lookahead == 'a')
                ADVANCE(59);
            if(lookahead == 'l')
                ADVANCE(43);
            if(lookahead == 'm')
                ADVANCE(40);
            if(lookahead == 's')
                ADVANCE(60);
            if(lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(67);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || 'a' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 68:
            ACCEPT_TOKEN(sym__digits);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(68);
            END_STATE();
        case 69:
            ACCEPT_TOKEN(anon_sym_BANG);
            END_STATE();
        case 70:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 71:
            ACCEPT_TOKEN(anon_sym_POUND);
            END_STATE();
        case 72:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 73:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 74:
            ACCEPT_TOKEN(anon_sym_AMP);
            END_STATE();
        case 75:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 76:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 77:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 78:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 79:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 80:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 81:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 82:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 83:
            ACCEPT_TOKEN(anon_sym_SLASH);
            END_STATE();
        case 84:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 85:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 86:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 87:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 88:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 89:
            ACCEPT_TOKEN(anon_sym_QMARK);
            END_STATE();
        case 90:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 91:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 92:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            END_STATE();
        case 93:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 94:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 95:
            ACCEPT_TOKEN(anon_sym__);
            END_STATE();
        case 96:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '_')
                ADVANCE(35);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 97:
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
                ADVANCE(66);
            END_STATE();
        case 98:
            ACCEPT_TOKEN(anon_sym__);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            END_STATE();
        case 99:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            END_STATE();
        case 100:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 101:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 102:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '_')
                ADVANCE(35);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 103:
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
                ADVANCE(66);
            END_STATE();
        case 104:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '_')
                ADVANCE(35);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 105:
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
                ADVANCE(66);
            END_STATE();
        case 106:
            ACCEPT_TOKEN(aux_sym_inline_link_macro_token1);
            END_STATE();
        case 107:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '_')
                ADVANCE(35);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 108:
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
                ADVANCE(66);
            END_STATE();
        case 109:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '_')
                ADVANCE(35);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 110:
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
                ADVANCE(66);
            END_STATE();
        case 111:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '_')
                ADVANCE(35);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(66);
            END_STATE();
        case 112:
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
                ADVANCE(66);
            END_STATE();
        case 113:
            ACCEPT_TOKEN(aux_sym_inline_math_macro_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(113);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(114);
            END_STATE();
        case 114:
            ACCEPT_TOKEN(aux_sym_inline_math_macro_token1);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(114);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 6 },
    [2] = { .lex_state = 6 },
    [3] = { .lex_state = 6 },
    [4] = { .lex_state = 0 },
    [5] = { .lex_state = 6 },
    [6] = { .lex_state = 6 },
    [7] = { .lex_state = 6 },
    [8] = { .lex_state = 6 },
    [9] = { .lex_state = 6 },
    [10] = { .lex_state = 1 },
    [11] = { .lex_state = 1 },
    [12] = { .lex_state = 0 },
    [13] = { .lex_state = 1 },
    [14] = { .lex_state = 5 },
    [15] = { .lex_state = 1 },
    [16] = { .lex_state = 113 },
    [17] = { .lex_state = 1 },
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
    },
    [1] = {
        [sym_inline] = STATE(12),
        [sym_replacement] = STATE(2),
        [sym_word] = STATE(2),
        [sym_punctuation] = STATE(2),
        [sym_inline_link_macro] = STATE(2),
        [sym_inline_math_macro] = STATE(2),
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
    },
    [2] = {
        [sym_replacement] = STATE(3),
        [sym_word] = STATE(3),
        [sym_punctuation] = STATE(3),
        [sym_inline_link_macro] = STATE(3),
        [sym_inline_math_macro] = STATE(3),
        [aux_sym_inline_repeat1] = STATE(3),
        [ts_builtin_sym_end] = ACTIONS(13),
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
    },
    [3] = {
        [sym_replacement] = STATE(3),
        [sym_word] = STATE(3),
        [sym_punctuation] = STATE(3),
        [sym_inline_link_macro] = STATE(3),
        [sym_inline_math_macro] = STATE(3),
        [aux_sym_inline_repeat1] = STATE(3),
        [ts_builtin_sym_end] = ACTIONS(15),
        [anon_sym_LBRACE] = ACTIONS(17),
        [anon_sym_RBRACE] = ACTIONS(20),
        [sym__word_no_digit] = ACTIONS(23),
        [sym__digits] = ACTIONS(23),
        [anon_sym_BANG] = ACTIONS(20),
        [anon_sym_DQUOTE] = ACTIONS(20),
        [anon_sym_POUND] = ACTIONS(20),
        [anon_sym_DOLLAR] = ACTIONS(20),
        [anon_sym_PERCENT] = ACTIONS(20),
        [anon_sym_AMP] = ACTIONS(20),
        [anon_sym_SQUOTE] = ACTIONS(20),
        [anon_sym_LPAREN] = ACTIONS(20),
        [anon_sym_RPAREN] = ACTIONS(20),
        [anon_sym_STAR] = ACTIONS(20),
        [anon_sym_PLUS] = ACTIONS(20),
        [anon_sym_COMMA] = ACTIONS(20),
        [anon_sym_DASH] = ACTIONS(20),
        [anon_sym_DOT] = ACTIONS(20),
        [anon_sym_SLASH] = ACTIONS(20),
        [anon_sym_COLON] = ACTIONS(20),
        [anon_sym_SEMI] = ACTIONS(20),
        [anon_sym_LT] = ACTIONS(20),
        [anon_sym_EQ] = ACTIONS(20),
        [anon_sym_GT] = ACTIONS(20),
        [anon_sym_QMARK] = ACTIONS(20),
        [anon_sym_AT] = ACTIONS(20),
        [anon_sym_LBRACK] = ACTIONS(20),
        [anon_sym_BSLASH] = ACTIONS(20),
        [anon_sym_RBRACK] = ACTIONS(20),
        [anon_sym_CARET] = ACTIONS(20),
        [anon_sym__] = ACTIONS(20),
        [anon_sym_BQUOTE] = ACTIONS(20),
        [anon_sym_PIPE] = ACTIONS(20),
        [anon_sym_TILDE] = ACTIONS(20),
        [anon_sym_link] = ACTIONS(26),
        [anon_sym_mailto] = ACTIONS(26),
        [anon_sym_stem] = ACTIONS(29),
        [anon_sym_latexmath] = ACTIONS(29),
        [anon_sym_asciimath] = ACTIONS(29),
    },
    [4] = {
        [ts_builtin_sym_end] = ACTIONS(32),
        [anon_sym_LBRACE] = ACTIONS(34),
        [aux_sym_replacement_token1] = ACTIONS(36),
        [anon_sym_RBRACE] = ACTIONS(34),
        [sym__word_no_digit] = ACTIONS(34),
        [sym__digits] = ACTIONS(34),
        [anon_sym_BANG] = ACTIONS(34),
        [anon_sym_DQUOTE] = ACTIONS(34),
        [anon_sym_POUND] = ACTIONS(34),
        [anon_sym_DOLLAR] = ACTIONS(34),
        [anon_sym_PERCENT] = ACTIONS(34),
        [anon_sym_AMP] = ACTIONS(34),
        [anon_sym_SQUOTE] = ACTIONS(34),
        [anon_sym_LPAREN] = ACTIONS(34),
        [anon_sym_RPAREN] = ACTIONS(34),
        [anon_sym_STAR] = ACTIONS(34),
        [anon_sym_PLUS] = ACTIONS(34),
        [anon_sym_COMMA] = ACTIONS(34),
        [anon_sym_DASH] = ACTIONS(34),
        [anon_sym_DOT] = ACTIONS(34),
        [anon_sym_SLASH] = ACTIONS(34),
        [anon_sym_COLON] = ACTIONS(34),
        [anon_sym_SEMI] = ACTIONS(34),
        [anon_sym_LT] = ACTIONS(34),
        [anon_sym_EQ] = ACTIONS(34),
        [anon_sym_GT] = ACTIONS(34),
        [anon_sym_QMARK] = ACTIONS(34),
        [anon_sym_AT] = ACTIONS(34),
        [anon_sym_LBRACK] = ACTIONS(34),
        [anon_sym_BSLASH] = ACTIONS(34),
        [anon_sym_RBRACK] = ACTIONS(34),
        [anon_sym_CARET] = ACTIONS(34),
        [anon_sym__] = ACTIONS(34),
        [anon_sym_BQUOTE] = ACTIONS(34),
        [anon_sym_PIPE] = ACTIONS(34),
        [anon_sym_TILDE] = ACTIONS(34),
        [anon_sym_link] = ACTIONS(34),
        [anon_sym_mailto] = ACTIONS(34),
        [anon_sym_stem] = ACTIONS(34),
        [anon_sym_latexmath] = ACTIONS(34),
        [anon_sym_asciimath] = ACTIONS(34),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(32),
        [anon_sym_LBRACE] = ACTIONS(34),
        [anon_sym_RBRACE] = ACTIONS(34),
        [sym__word_no_digit] = ACTIONS(34),
        [sym__digits] = ACTIONS(34),
        [anon_sym_BANG] = ACTIONS(34),
        [anon_sym_DQUOTE] = ACTIONS(34),
        [anon_sym_POUND] = ACTIONS(34),
        [anon_sym_DOLLAR] = ACTIONS(34),
        [anon_sym_PERCENT] = ACTIONS(34),
        [anon_sym_AMP] = ACTIONS(34),
        [anon_sym_SQUOTE] = ACTIONS(34),
        [anon_sym_LPAREN] = ACTIONS(34),
        [anon_sym_RPAREN] = ACTIONS(34),
        [anon_sym_STAR] = ACTIONS(34),
        [anon_sym_PLUS] = ACTIONS(34),
        [anon_sym_COMMA] = ACTIONS(34),
        [anon_sym_DASH] = ACTIONS(34),
        [anon_sym_DOT] = ACTIONS(34),
        [anon_sym_SLASH] = ACTIONS(34),
        [anon_sym_COLON] = ACTIONS(34),
        [anon_sym_SEMI] = ACTIONS(34),
        [anon_sym_LT] = ACTIONS(34),
        [anon_sym_EQ] = ACTIONS(34),
        [anon_sym_GT] = ACTIONS(34),
        [anon_sym_QMARK] = ACTIONS(34),
        [anon_sym_AT] = ACTIONS(34),
        [anon_sym_LBRACK] = ACTIONS(34),
        [anon_sym_BSLASH] = ACTIONS(34),
        [anon_sym_RBRACK] = ACTIONS(34),
        [anon_sym_CARET] = ACTIONS(34),
        [anon_sym__] = ACTIONS(34),
        [anon_sym_BQUOTE] = ACTIONS(34),
        [anon_sym_PIPE] = ACTIONS(34),
        [anon_sym_TILDE] = ACTIONS(34),
        [anon_sym_link] = ACTIONS(34),
        [anon_sym_mailto] = ACTIONS(34),
        [anon_sym_stem] = ACTIONS(34),
        [anon_sym_latexmath] = ACTIONS(34),
        [anon_sym_asciimath] = ACTIONS(34),
    },
    [6] = {
        [ts_builtin_sym_end] = ACTIONS(38),
        [anon_sym_LBRACE] = ACTIONS(40),
        [anon_sym_RBRACE] = ACTIONS(40),
        [sym__word_no_digit] = ACTIONS(40),
        [sym__digits] = ACTIONS(40),
        [anon_sym_BANG] = ACTIONS(40),
        [anon_sym_DQUOTE] = ACTIONS(40),
        [anon_sym_POUND] = ACTIONS(40),
        [anon_sym_DOLLAR] = ACTIONS(40),
        [anon_sym_PERCENT] = ACTIONS(40),
        [anon_sym_AMP] = ACTIONS(40),
        [anon_sym_SQUOTE] = ACTIONS(40),
        [anon_sym_LPAREN] = ACTIONS(40),
        [anon_sym_RPAREN] = ACTIONS(40),
        [anon_sym_STAR] = ACTIONS(40),
        [anon_sym_PLUS] = ACTIONS(40),
        [anon_sym_COMMA] = ACTIONS(40),
        [anon_sym_DASH] = ACTIONS(40),
        [anon_sym_DOT] = ACTIONS(40),
        [anon_sym_SLASH] = ACTIONS(40),
        [anon_sym_COLON] = ACTIONS(40),
        [anon_sym_SEMI] = ACTIONS(40),
        [anon_sym_LT] = ACTIONS(40),
        [anon_sym_EQ] = ACTIONS(40),
        [anon_sym_GT] = ACTIONS(40),
        [anon_sym_QMARK] = ACTIONS(40),
        [anon_sym_AT] = ACTIONS(40),
        [anon_sym_LBRACK] = ACTIONS(40),
        [anon_sym_BSLASH] = ACTIONS(40),
        [anon_sym_RBRACK] = ACTIONS(40),
        [anon_sym_CARET] = ACTIONS(40),
        [anon_sym__] = ACTIONS(40),
        [anon_sym_BQUOTE] = ACTIONS(40),
        [anon_sym_PIPE] = ACTIONS(40),
        [anon_sym_TILDE] = ACTIONS(40),
        [anon_sym_link] = ACTIONS(40),
        [anon_sym_mailto] = ACTIONS(40),
        [anon_sym_stem] = ACTIONS(40),
        [anon_sym_latexmath] = ACTIONS(40),
        [anon_sym_asciimath] = ACTIONS(40),
    },
    [7] = {
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
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(46),
        [anon_sym_LBRACE] = ACTIONS(48),
        [anon_sym_RBRACE] = ACTIONS(48),
        [sym__word_no_digit] = ACTIONS(48),
        [sym__digits] = ACTIONS(48),
        [anon_sym_BANG] = ACTIONS(48),
        [anon_sym_DQUOTE] = ACTIONS(48),
        [anon_sym_POUND] = ACTIONS(48),
        [anon_sym_DOLLAR] = ACTIONS(48),
        [anon_sym_PERCENT] = ACTIONS(48),
        [anon_sym_AMP] = ACTIONS(48),
        [anon_sym_SQUOTE] = ACTIONS(48),
        [anon_sym_LPAREN] = ACTIONS(48),
        [anon_sym_RPAREN] = ACTIONS(48),
        [anon_sym_STAR] = ACTIONS(48),
        [anon_sym_PLUS] = ACTIONS(48),
        [anon_sym_COMMA] = ACTIONS(48),
        [anon_sym_DASH] = ACTIONS(48),
        [anon_sym_DOT] = ACTIONS(48),
        [anon_sym_SLASH] = ACTIONS(48),
        [anon_sym_COLON] = ACTIONS(48),
        [anon_sym_SEMI] = ACTIONS(48),
        [anon_sym_LT] = ACTIONS(48),
        [anon_sym_EQ] = ACTIONS(48),
        [anon_sym_GT] = ACTIONS(48),
        [anon_sym_QMARK] = ACTIONS(48),
        [anon_sym_AT] = ACTIONS(48),
        [anon_sym_LBRACK] = ACTIONS(48),
        [anon_sym_BSLASH] = ACTIONS(48),
        [anon_sym_RBRACK] = ACTIONS(48),
        [anon_sym_CARET] = ACTIONS(48),
        [anon_sym__] = ACTIONS(48),
        [anon_sym_BQUOTE] = ACTIONS(48),
        [anon_sym_PIPE] = ACTIONS(48),
        [anon_sym_TILDE] = ACTIONS(48),
        [anon_sym_link] = ACTIONS(48),
        [anon_sym_mailto] = ACTIONS(48),
        [anon_sym_stem] = ACTIONS(48),
        [anon_sym_latexmath] = ACTIONS(48),
        [anon_sym_asciimath] = ACTIONS(48),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(50),
        [anon_sym_LBRACE] = ACTIONS(52),
        [anon_sym_RBRACE] = ACTIONS(52),
        [sym__word_no_digit] = ACTIONS(52),
        [sym__digits] = ACTIONS(52),
        [anon_sym_BANG] = ACTIONS(52),
        [anon_sym_DQUOTE] = ACTIONS(52),
        [anon_sym_POUND] = ACTIONS(52),
        [anon_sym_DOLLAR] = ACTIONS(52),
        [anon_sym_PERCENT] = ACTIONS(52),
        [anon_sym_AMP] = ACTIONS(52),
        [anon_sym_SQUOTE] = ACTIONS(52),
        [anon_sym_LPAREN] = ACTIONS(52),
        [anon_sym_RPAREN] = ACTIONS(52),
        [anon_sym_STAR] = ACTIONS(52),
        [anon_sym_PLUS] = ACTIONS(52),
        [anon_sym_COMMA] = ACTIONS(52),
        [anon_sym_DASH] = ACTIONS(52),
        [anon_sym_DOT] = ACTIONS(52),
        [anon_sym_SLASH] = ACTIONS(52),
        [anon_sym_COLON] = ACTIONS(52),
        [anon_sym_SEMI] = ACTIONS(52),
        [anon_sym_LT] = ACTIONS(52),
        [anon_sym_EQ] = ACTIONS(52),
        [anon_sym_GT] = ACTIONS(52),
        [anon_sym_QMARK] = ACTIONS(52),
        [anon_sym_AT] = ACTIONS(52),
        [anon_sym_LBRACK] = ACTIONS(52),
        [anon_sym_BSLASH] = ACTIONS(52),
        [anon_sym_RBRACK] = ACTIONS(52),
        [anon_sym_CARET] = ACTIONS(52),
        [anon_sym__] = ACTIONS(52),
        [anon_sym_BQUOTE] = ACTIONS(52),
        [anon_sym_PIPE] = ACTIONS(52),
        [anon_sym_TILDE] = ACTIONS(52),
        [anon_sym_link] = ACTIONS(52),
        [anon_sym_mailto] = ACTIONS(52),
        [anon_sym_stem] = ACTIONS(52),
        [anon_sym_latexmath] = ACTIONS(52),
        [anon_sym_asciimath] = ACTIONS(52),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 1,
    ACTIONS(54),
    1,
    anon_sym_COLON,
    [4] = 1,
    ACTIONS(56),
    1,
    anon_sym_COLON,
    [8] = 1,
    ACTIONS(58),
    1,
    ts_builtin_sym_end,
    [12] = 1,
    ACTIONS(60),
    1,
    anon_sym_RBRACE,
    [16] = 1,
    ACTIONS(62),
    1,
    aux_sym_inline_link_macro_token1,
    [20] = 1,
    ACTIONS(64),
    1,
    anon_sym_LBRACK,
    [24] = 1,
    ACTIONS(66),
    1,
    aux_sym_inline_math_macro_token1,
    [28] = 1,
    ACTIONS(68),
    1,
    anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(10)] = 0,
    [SMALL_STATE(11)] = 4,
    [SMALL_STATE(12)] = 8,
    [SMALL_STATE(13)] = 12,
    [SMALL_STATE(14)] = 16,
    [SMALL_STATE(15)] = 20,
    [SMALL_STATE(16)] = 24,
    [SMALL_STATE(17)] = 28,
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
    SHIFT(10),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(11),
    [13] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [15] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    [17] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(4),
    [20] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(5),
    [23] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(6),
    [26] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(10),
    [29] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(11),
    [32] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [34] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [36] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(13),
    [38] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_word, 1, 0, 0),
    [40] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_word, 1, 0, 0),
    [42] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 0),
    [44] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 0),
    [46] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_link_macro, 3, 0, 0),
    [48] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_link_macro, 3, 0, 0),
    [50] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_math_macro, 5, 0, 0),
    [52] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_math_macro, 5, 0, 0),
    [54] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [56] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [58] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [60] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [62] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [64] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [66] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [68] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
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
