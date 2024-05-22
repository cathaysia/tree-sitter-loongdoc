#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

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
    anon_sym_footnote = 42,
    anon_sym_footnoteref = 43,
    aux_sym_inline_footnote_macro_token1 = 44,
    aux_sym_inline_footnote_macro_token2 = 45,
    anon_sym_link = 46,
    anon_sym_mailto = 47,
    aux_sym_inline_link_macro_token1 = 48,
    anon_sym_stem = 49,
    anon_sym_latexmath = 50,
    anon_sym_asciimath = 51,
    sym_inline = 52,
    sym_replacement = 53,
    sym_word = 54,
    sym_punctuation = 55,
    sym_inline_anchor_rx = 56,
    sym_inline_footnote_macro = 57,
    sym_inline_link_macro = 58,
    sym_inline_math_macro = 59,
    aux_sym_inline_repeat1 = 60,
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
    [anon_sym_footnote] = "footnote",
    [anon_sym_footnoteref] = "footnoteref",
    [aux_sym_inline_footnote_macro_token1] = "inline_footnote_macro_token1",
    [aux_sym_inline_footnote_macro_token2] = "inline_footnote_macro_token2",
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
    [sym_inline_footnote_macro] = "inline_footnote_macro",
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
    [anon_sym_footnote] = anon_sym_footnote,
    [anon_sym_footnoteref] = anon_sym_footnoteref,
    [aux_sym_inline_footnote_macro_token1] = aux_sym_inline_footnote_macro_token1,
    [aux_sym_inline_footnote_macro_token2] = aux_sym_inline_footnote_macro_token2,
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
    [sym_inline_footnote_macro] = sym_inline_footnote_macro,
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
    [anon_sym_footnote] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_footnoteref] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_inline_footnote_macro_token1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_inline_footnote_macro_token2] = {
        .visible = false,
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
    [sym_inline_footnote_macro] = {
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

enum ts_field_identifiers {
    field_id = 1,
};

static const char *const ts_field_names[] = {
    [0] = NULL,
    [field_id] = "id",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
    [1] = { .index = 0, .length = 1 },
};

static const TSFieldMapEntry ts_field_map_entries[] = {
    [0] = { field_id, 2 },
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
    [33] = 33,
    [34] = 34,
    [35] = 35,
    [36] = 36,
    [37] = 37,
    [38] = 38,
    [39] = 39,
    [40] = 40,
    [41] = 41,
    [42] = 42,
    [43] = 43,
    [44] = 44,
    [45] = 45,
    [46] = 46,
    [47] = 47,
    [48] = 48,
    [49] = 49,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(49);
            ADVANCE_MAP(
                '!', 141,
                '"', 142,
                '#', 143,
                '$', 144,
                '%', 145,
                '&', 146,
                '\'', 147,
                '(', 148,
                ')', 149,
                '*', 150,
                '+', 151,
                ',', 152,
                '-', 153,
                '.', 154,
                '/', 155,
                ':', 156,
                ';', 157,
                '<', 158,
                '=', 159,
                '>', 160,
                '?', 161,
                '@', 162,
                '[', 164,
                '\\', 165,
                ']', 166,
                '^', 167,
                '_', 170,
                '`', 172,
                'a', 73,
                'f', 78,
                'l', 54,
                'm', 51,
                's', 82,
                '{', 50,
                '|', 173,
                '}', 96,
                '~', 174,
                0x0b, 137,
                '\f', 137,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(91);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0)
                ADVANCE(138);
            END_STATE();
        case 1:
            if(lookahead == '"')
                ADVANCE(35);
            if(lookahead == '\\')
                ADVANCE(47);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 2:
            if(lookahead == ',')
                ADVANCE(152);
            if(lookahead == ':')
                ADVANCE(156);
            if(lookahead == '[')
                ADVANCE(163);
            if(lookahead == ']')
                ADVANCE(40);
            if(lookahead == '}')
                ADVANCE(95);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(2);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(94);
            END_STATE();
        case 3:
            if(lookahead == ',')
                ADVANCE(152);
            if(lookahead == ']')
                ADVANCE(166);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(3);
            END_STATE();
        case 4:
            if(lookahead == '-')
                ADVANCE(5);
            if(lookahead == '.')
                ADVANCE(45);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(4);
            END_STATE();
        case 5:
            if(lookahead == '-')
                ADVANCE(5);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(4);
            END_STATE();
        case 6:
            if(lookahead == '-')
                ADVANCE(6);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(185);
            END_STATE();
        case 7:
            if(lookahead == '-')
                ADVANCE(14);
            if(lookahead == '0')
                ADVANCE(12);
            if(lookahead == '1')
                ADVANCE(11);
            if(lookahead == '2')
                ADVANCE(8);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            END_STATE();
        case 8:
            if(lookahead == '-')
                ADVANCE(14);
            if(lookahead == '5')
                ADVANCE(9);
            if(lookahead == ':')
                ADVANCE(39);
            if(lookahead == ']')
                ADVANCE(184);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(12);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(10);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            END_STATE();
        case 9:
            if(lookahead == '-')
                ADVANCE(14);
            if(lookahead == ':')
                ADVANCE(39);
            if(lookahead == ']')
                ADVANCE(184);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(12);
            if(('6' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            END_STATE();
        case 10:
            if(lookahead == '-')
                ADVANCE(14);
            if(lookahead == ':')
                ADVANCE(39);
            if(lookahead == ']')
                ADVANCE(184);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(12);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            END_STATE();
        case 11:
            if(lookahead == '-')
                ADVANCE(14);
            if(lookahead == ':')
                ADVANCE(39);
            if(lookahead == ']')
                ADVANCE(184);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            END_STATE();
        case 12:
            if(lookahead == '-')
                ADVANCE(14);
            if(lookahead == ':')
                ADVANCE(39);
            if(lookahead == ']')
                ADVANCE(184);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            END_STATE();
        case 13:
            if(lookahead == '-')
                ADVANCE(14);
            if(lookahead == ':')
                ADVANCE(39);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            END_STATE();
        case 14:
            if(lookahead == '-')
                ADVANCE(14);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            END_STATE();
        case 15:
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 16:
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 17:
            if(lookahead == '.')
                ADVANCE(7);
            END_STATE();
        case 18:
            if(lookahead == '.')
                ADVANCE(7);
            if(lookahead == '5')
                ADVANCE(19);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(17);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(20);
            END_STATE();
        case 19:
            if(lookahead == '.')
                ADVANCE(7);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(17);
            END_STATE();
        case 20:
            if(lookahead == '.')
                ADVANCE(7);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(17);
            END_STATE();
        case 21:
            if(lookahead == '.')
                ADVANCE(7);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(20);
            END_STATE();
        case 22:
            if(lookahead == '.')
                ADVANCE(33);
            END_STATE();
        case 23:
            if(lookahead == '.')
                ADVANCE(33);
            if(lookahead == '5')
                ADVANCE(24);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(22);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(25);
            END_STATE();
        case 24:
            if(lookahead == '.')
                ADVANCE(33);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(22);
            END_STATE();
        case 25:
            if(lookahead == '.')
                ADVANCE(33);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(22);
            END_STATE();
        case 26:
            if(lookahead == '.')
                ADVANCE(33);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(25);
            END_STATE();
        case 27:
            if(lookahead == '.')
                ADVANCE(34);
            END_STATE();
        case 28:
            if(lookahead == '.')
                ADVANCE(34);
            if(lookahead == '5')
                ADVANCE(29);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(27);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(30);
            END_STATE();
        case 29:
            if(lookahead == '.')
                ADVANCE(34);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(27);
            END_STATE();
        case 30:
            if(lookahead == '.')
                ADVANCE(34);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(27);
            END_STATE();
        case 31:
            if(lookahead == '.')
                ADVANCE(34);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(30);
            END_STATE();
        case 32:
            if(lookahead == '0')
                ADVANCE(27);
            if(lookahead == '1')
                ADVANCE(31);
            if(lookahead == '2')
                ADVANCE(28);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(30);
            END_STATE();
        case 33:
            if(lookahead == '0')
                ADVANCE(17);
            if(lookahead == '1')
                ADVANCE(21);
            if(lookahead == '2')
                ADVANCE(18);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(20);
            END_STATE();
        case 34:
            if(lookahead == '0')
                ADVANCE(22);
            if(lookahead == '1')
                ADVANCE(26);
            if(lookahead == '2')
                ADVANCE(23);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(25);
            END_STATE();
        case 35:
            if(lookahead == '@')
                ADVANCE(36);
            END_STATE();
        case 36:
            if(lookahead == '[')
                ADVANCE(32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(4);
            END_STATE();
        case 37:
            if(lookahead == '\\')
                ADVANCE(38);
            if(lookahead == ']')
                ADVANCE(186);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(37);
            END_STATE();
        case 38:
            if(lookahead == '\\')
                ADVANCE(38);
            if(lookahead == ']')
                ADVANCE(186);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(37);
            END_STATE();
        case 39:
            if(lookahead == '\\')
                ADVANCE(38);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(37);
            END_STATE();
        case 40:
            if(lookahead == ']')
                ADVANCE(178);
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
                ADVANCE(138);
            END_STATE();
        case 42:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(176);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(177);
            END_STATE();
        case 43:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(43);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(197);
            END_STATE();
        case 44:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(191);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(192);
            END_STATE();
        case 45:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(185);
            END_STATE();
        case 46:
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               lookahead == '-' ||
               ('/' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 47:
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 48:
            if(eof)
                ADVANCE(49);
            ADVANCE_MAP(
                '!', 141,
                '"', 142,
                '#', 143,
                '$', 144,
                '%', 145,
                '&', 146,
                '\'', 147,
                '(', 148,
                ')', 149,
                '*', 150,
                '+', 151,
                ',', 152,
                '-', 153,
                '.', 154,
                '/', 155,
                ':', 156,
                ';', 157,
                '<', 158,
                '=', 159,
                '>', 160,
                '?', 161,
                '@', 162,
                '[', 164,
                '\\', 165,
                ']', 166,
                '^', 167,
                '_', 171,
                '`', 172,
                'a', 119,
                'f', 124,
                'l', 100,
                'm', 97,
                's', 128,
                '{', 50,
                '|', 173,
                '}', 96,
                '~', 174,
                0x0b, 139,
                '\f', 139,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(48);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(140);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead != 0)
                ADVANCE(138);
            END_STATE();
        case 49:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 50:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 51:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'a')
                ADVANCE(65);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 52:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'a')
                ADVANCE(85);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 53:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'a')
                ADVANCE(87);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 54:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'a')
                ADVANCE(84);
            if(lookahead == 'i')
                ADVANCE(74);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 55:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'c')
                ADVANCE(64);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 56:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'c')
                ADVANCE(67);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 57:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'e')
                ADVANCE(70);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 58:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'e')
                ADVANCE(89);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 59:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'e')
                ADVANCE(187);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 60:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'e')
                ADVANCE(61);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 61:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'f')
                ADVANCE(189);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 62:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'h')
                ADVANCE(202);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 63:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'h')
                ADVANCE(200);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 64:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'h')
                ADVANCE(76);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 65:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'i')
                ADVANCE(69);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 66:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'i')
                ADVANCE(71);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 67:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'i')
                ADVANCE(66);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 68:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'k')
                ADVANCE(193);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 69:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'l')
                ADVANCE(88);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 70:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'm')
                ADVANCE(198);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 71:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'm')
                ADVANCE(52);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 72:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'm')
                ADVANCE(53);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 73:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'n')
                ADVANCE(55);
            if(lookahead == 's')
                ADVANCE(56);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 74:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'n')
                ADVANCE(68);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 75:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'n')
                ADVANCE(80);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 76:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'o')
                ADVANCE(81);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 77:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'o')
                ADVANCE(195);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 78:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'o')
                ADVANCE(79);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 79:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'o')
                ADVANCE(83);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 80:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'o')
                ADVANCE(86);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 81:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'r')
                ADVANCE(179);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 82:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 't')
                ADVANCE(57);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 83:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 't')
                ADVANCE(75);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 84:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 't')
                ADVANCE(58);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 85:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 't')
                ADVANCE(62);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 86:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 't')
                ADVANCE(59);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 87:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 't')
                ADVANCE(63);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 88:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 't')
                ADVANCE(77);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 89:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'x')
                ADVANCE(72);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 90:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 91:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(91);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(94);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(92);
            END_STATE();
        case 92:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
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
                ADVANCE(16);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(94);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(92);
            END_STATE();
        case 93:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(93);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(94);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 94:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(94);
            END_STATE();
        case 95:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 96:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 97:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(111);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 98:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(131);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 99:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(133);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 100:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(130);
            if(lookahead == 'i')
                ADVANCE(120);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 101:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'c')
                ADVANCE(110);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 102:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'c')
                ADVANCE(113);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 103:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(116);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 104:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(135);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 105:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(188);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 106:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(107);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 107:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'f')
                ADVANCE(190);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 108:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'h')
                ADVANCE(203);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 109:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'h')
                ADVANCE(201);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 110:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'h')
                ADVANCE(122);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 111:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'i')
                ADVANCE(115);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 112:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'i')
                ADVANCE(117);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 113:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'i')
                ADVANCE(112);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 114:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'k')
                ADVANCE(194);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 115:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'l')
                ADVANCE(134);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 116:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'm')
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 117:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'm')
                ADVANCE(98);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 118:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'm')
                ADVANCE(99);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 119:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'n')
                ADVANCE(101);
            if(lookahead == 's')
                ADVANCE(102);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 120:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'n')
                ADVANCE(114);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 121:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'n')
                ADVANCE(126);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 122:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(127);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 123:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(196);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 124:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(125);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 125:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(129);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 126:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(132);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 127:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'r')
                ADVANCE(180);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 128:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(103);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 129:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(121);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 130:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(104);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 131:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(108);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 132:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(105);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 133:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(109);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 134:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(123);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 135:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'x')
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 136:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 137:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'a')
                ADVANCE(73);
            if(lookahead == 'f')
                ADVANCE(78);
            if(lookahead == 'l')
                ADVANCE(54);
            if(lookahead == 'm')
                ADVANCE(51);
            if(lookahead == 's')
                ADVANCE(82);
            if(lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(137);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 138:
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
                ADVANCE(138);
            END_STATE();
        case 139:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(169);
            if(lookahead == 'a')
                ADVANCE(119);
            if(lookahead == 'f')
                ADVANCE(124);
            if(lookahead == 'l')
                ADVANCE(100);
            if(lookahead == 'm')
                ADVANCE(97);
            if(lookahead == 's')
                ADVANCE(128);
            if(lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(139);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 140:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(140);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 141:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 142:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(35);
            if(lookahead == '\\')
                ADVANCE(47);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 143:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 144:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 145:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 146:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 147:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 148:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 149:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 150:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 151:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 152:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 153:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 154:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 155:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 156:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 157:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 158:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 159:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 160:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 161:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 162:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 163:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 164:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(175);
            END_STATE();
        case 165:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            END_STATE();
        case 166:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 167:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 168:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 169:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 170:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
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
                ADVANCE(16);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(94);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(92);
            END_STATE();
        case 171:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 172:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 173:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 174:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            END_STATE();
        case 175:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            END_STATE();
        case 176:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(176);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(177);
            END_STATE();
        case 177:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ' ||
               ('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(177);
            END_STATE();
        case 178:
            ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
            END_STATE();
        case 179:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 180:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 181:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(181);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(182);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(183);
            END_STATE();
        case 182:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(182);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(183);
            END_STATE();
        case 183:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(183);
            END_STATE();
        case 184:
            ACCEPT_TOKEN(sym_inline_email_rx);
            END_STATE();
        case 185:
            ACCEPT_TOKEN(sym_inline_email_rx);
            if(lookahead == '-')
                ADVANCE(6);
            if(lookahead == '.')
                ADVANCE(45);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(185);
            END_STATE();
        case 186:
            ACCEPT_TOKEN(sym_inline_email_rx);
            if(lookahead == '\\')
                ADVANCE(38);
            if(lookahead == ']')
                ADVANCE(186);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(37);
            END_STATE();
        case 187:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(lookahead == 'r')
                ADVANCE(60);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 188:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'r')
                ADVANCE(106);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 189:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 190:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 191:
            ACCEPT_TOKEN(aux_sym_inline_footnote_macro_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(191);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(192);
            END_STATE();
        case 192:
            ACCEPT_TOKEN(aux_sym_inline_footnote_macro_token2);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(192);
            END_STATE();
        case 193:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 194:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 195:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 196:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 197:
            ACCEPT_TOKEN(aux_sym_inline_link_macro_token1);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '[')
                ADVANCE(197);
            END_STATE();
        case 198:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 199:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 200:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 201:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 202:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(90);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(93);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(90);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        case 203:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(46);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(16);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(138);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 48 },
    [2] = { .lex_state = 48 },
    [3] = { .lex_state = 48 },
    [4] = { .lex_state = 0 },
    [5] = { .lex_state = 48 },
    [6] = { .lex_state = 48 },
    [7] = { .lex_state = 48 },
    [8] = { .lex_state = 48 },
    [9] = { .lex_state = 48 },
    [10] = { .lex_state = 48 },
    [11] = { .lex_state = 48 },
    [12] = { .lex_state = 48 },
    [13] = { .lex_state = 48 },
    [14] = { .lex_state = 48 },
    [15] = { .lex_state = 48 },
    [16] = { .lex_state = 48 },
    [17] = { .lex_state = 2 },
    [18] = { .lex_state = 3 },
    [19] = { .lex_state = 2 },
    [20] = { .lex_state = 3 },
    [21] = { .lex_state = 181 },
    [22] = { .lex_state = 181 },
    [23] = { .lex_state = 2 },
    [24] = { .lex_state = 3 },
    [25] = { .lex_state = 2 },
    [26] = { .lex_state = 181 },
    [27] = { .lex_state = 2 },
    [28] = { .lex_state = 181 },
    [29] = { .lex_state = 2 },
    [30] = { .lex_state = 3 },
    [31] = { .lex_state = 42 },
    [32] = { .lex_state = 181 },
    [33] = { .lex_state = 3 },
    [34] = { .lex_state = 2 },
    [35] = { .lex_state = 3 },
    [36] = { .lex_state = 2 },
    [37] = { .lex_state = 43 },
    [38] = { .lex_state = 2 },
    [39] = { .lex_state = 44 },
    [40] = { .lex_state = 3 },
    [41] = { .lex_state = 2 },
    [42] = { .lex_state = 0 },
    [43] = { .lex_state = 2 },
    [44] = { .lex_state = 44 },
    [45] = { .lex_state = 3 },
    [46] = { .lex_state = 2 },
    [47] = { .lex_state = 3 },
    [48] = { .lex_state = 2 },
    [49] = { .lex_state = 2 },
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
        [anon_sym_footnote] = ACTIONS(1),
        [anon_sym_footnoteref] = ACTIONS(1),
        [anon_sym_link] = ACTIONS(1),
        [anon_sym_mailto] = ACTIONS(1),
        [anon_sym_stem] = ACTIONS(1),
        [anon_sym_latexmath] = ACTIONS(1),
        [anon_sym_asciimath] = ACTIONS(1),
    },
    [1] = {
        [sym_inline] = STATE(42),
        [sym_replacement] = STATE(3),
        [sym_word] = STATE(3),
        [sym_punctuation] = STATE(3),
        [sym_inline_anchor_rx] = STATE(3),
        [sym_inline_footnote_macro] = STATE(3),
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
        [anon_sym_footnote] = ACTIONS(15),
        [anon_sym_footnoteref] = ACTIONS(15),
        [anon_sym_link] = ACTIONS(17),
        [anon_sym_mailto] = ACTIONS(17),
        [anon_sym_stem] = ACTIONS(19),
        [anon_sym_latexmath] = ACTIONS(19),
        [anon_sym_asciimath] = ACTIONS(19),
    },
    [2] = {
        [sym_replacement] = STATE(2),
        [sym_word] = STATE(2),
        [sym_punctuation] = STATE(2),
        [sym_inline_anchor_rx] = STATE(2),
        [sym_inline_footnote_macro] = STATE(2),
        [sym_inline_link_macro] = STATE(2),
        [sym_inline_math_macro] = STATE(2),
        [aux_sym_inline_repeat1] = STATE(2),
        [ts_builtin_sym_end] = ACTIONS(21),
        [anon_sym_LBRACE] = ACTIONS(23),
        [anon_sym_RBRACE] = ACTIONS(26),
        [sym__word_no_digit] = ACTIONS(29),
        [sym__digits] = ACTIONS(29),
        [anon_sym_BANG] = ACTIONS(26),
        [anon_sym_DQUOTE] = ACTIONS(26),
        [anon_sym_POUND] = ACTIONS(26),
        [anon_sym_DOLLAR] = ACTIONS(26),
        [anon_sym_PERCENT] = ACTIONS(26),
        [anon_sym_AMP] = ACTIONS(26),
        [anon_sym_SQUOTE] = ACTIONS(26),
        [anon_sym_LPAREN] = ACTIONS(26),
        [anon_sym_RPAREN] = ACTIONS(26),
        [anon_sym_STAR] = ACTIONS(26),
        [anon_sym_PLUS] = ACTIONS(26),
        [anon_sym_COMMA] = ACTIONS(26),
        [anon_sym_DASH] = ACTIONS(26),
        [anon_sym_DOT] = ACTIONS(26),
        [anon_sym_SLASH] = ACTIONS(26),
        [anon_sym_COLON] = ACTIONS(26),
        [anon_sym_SEMI] = ACTIONS(26),
        [anon_sym_LT] = ACTIONS(26),
        [anon_sym_EQ] = ACTIONS(26),
        [anon_sym_GT] = ACTIONS(26),
        [anon_sym_QMARK] = ACTIONS(26),
        [anon_sym_AT] = ACTIONS(26),
        [anon_sym_LBRACK] = ACTIONS(26),
        [anon_sym_BSLASH] = ACTIONS(26),
        [anon_sym_RBRACK] = ACTIONS(26),
        [anon_sym_CARET] = ACTIONS(26),
        [anon_sym__] = ACTIONS(26),
        [anon_sym_BQUOTE] = ACTIONS(26),
        [anon_sym_PIPE] = ACTIONS(26),
        [anon_sym_TILDE] = ACTIONS(26),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(32),
        [anon_sym_anchor] = ACTIONS(35),
        [sym_inline_email_rx] = ACTIONS(38),
        [anon_sym_footnote] = ACTIONS(41),
        [anon_sym_footnoteref] = ACTIONS(41),
        [anon_sym_link] = ACTIONS(44),
        [anon_sym_mailto] = ACTIONS(44),
        [anon_sym_stem] = ACTIONS(47),
        [anon_sym_latexmath] = ACTIONS(47),
        [anon_sym_asciimath] = ACTIONS(47),
    },
    [3] = {
        [sym_replacement] = STATE(2),
        [sym_word] = STATE(2),
        [sym_punctuation] = STATE(2),
        [sym_inline_anchor_rx] = STATE(2),
        [sym_inline_footnote_macro] = STATE(2),
        [sym_inline_link_macro] = STATE(2),
        [sym_inline_math_macro] = STATE(2),
        [aux_sym_inline_repeat1] = STATE(2),
        [ts_builtin_sym_end] = ACTIONS(50),
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
        [sym_inline_email_rx] = ACTIONS(52),
        [anon_sym_footnote] = ACTIONS(15),
        [anon_sym_footnoteref] = ACTIONS(15),
        [anon_sym_link] = ACTIONS(17),
        [anon_sym_mailto] = ACTIONS(17),
        [anon_sym_stem] = ACTIONS(19),
        [anon_sym_latexmath] = ACTIONS(19),
        [anon_sym_asciimath] = ACTIONS(19),
    },
    [4] = {
        [ts_builtin_sym_end] = ACTIONS(54),
        [anon_sym_LBRACE] = ACTIONS(56),
        [aux_sym_replacement_token1] = ACTIONS(58),
        [anon_sym_RBRACE] = ACTIONS(56),
        [sym__word_no_digit] = ACTIONS(56),
        [sym__digits] = ACTIONS(56),
        [anon_sym_BANG] = ACTIONS(56),
        [anon_sym_DQUOTE] = ACTIONS(56),
        [anon_sym_POUND] = ACTIONS(56),
        [anon_sym_DOLLAR] = ACTIONS(56),
        [anon_sym_PERCENT] = ACTIONS(56),
        [anon_sym_AMP] = ACTIONS(56),
        [anon_sym_SQUOTE] = ACTIONS(56),
        [anon_sym_LPAREN] = ACTIONS(56),
        [anon_sym_RPAREN] = ACTIONS(56),
        [anon_sym_STAR] = ACTIONS(56),
        [anon_sym_PLUS] = ACTIONS(56),
        [anon_sym_COMMA] = ACTIONS(56),
        [anon_sym_DASH] = ACTIONS(56),
        [anon_sym_DOT] = ACTIONS(56),
        [anon_sym_SLASH] = ACTIONS(56),
        [anon_sym_COLON] = ACTIONS(56),
        [anon_sym_SEMI] = ACTIONS(56),
        [anon_sym_LT] = ACTIONS(56),
        [anon_sym_EQ] = ACTIONS(56),
        [anon_sym_GT] = ACTIONS(56),
        [anon_sym_QMARK] = ACTIONS(56),
        [anon_sym_AT] = ACTIONS(56),
        [anon_sym_LBRACK] = ACTIONS(56),
        [anon_sym_BSLASH] = ACTIONS(56),
        [anon_sym_RBRACK] = ACTIONS(56),
        [anon_sym_CARET] = ACTIONS(56),
        [anon_sym__] = ACTIONS(56),
        [anon_sym_BQUOTE] = ACTIONS(56),
        [anon_sym_PIPE] = ACTIONS(56),
        [anon_sym_TILDE] = ACTIONS(56),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(56),
        [anon_sym_anchor] = ACTIONS(56),
        [sym_inline_email_rx] = ACTIONS(56),
        [anon_sym_footnote] = ACTIONS(56),
        [anon_sym_footnoteref] = ACTIONS(56),
        [anon_sym_link] = ACTIONS(56),
        [anon_sym_mailto] = ACTIONS(56),
        [anon_sym_stem] = ACTIONS(56),
        [anon_sym_latexmath] = ACTIONS(56),
        [anon_sym_asciimath] = ACTIONS(56),
    },
    [5] = {
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
        [anon_sym_LBRACK_LBRACK] = ACTIONS(62),
        [anon_sym_anchor] = ACTIONS(62),
        [sym_inline_email_rx] = ACTIONS(62),
        [anon_sym_footnote] = ACTIONS(62),
        [anon_sym_footnoteref] = ACTIONS(62),
        [anon_sym_link] = ACTIONS(62),
        [anon_sym_mailto] = ACTIONS(62),
        [anon_sym_stem] = ACTIONS(62),
        [anon_sym_latexmath] = ACTIONS(62),
        [anon_sym_asciimath] = ACTIONS(62),
    },
    [6] = {
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
        [anon_sym_LBRACK_LBRACK] = ACTIONS(66),
        [anon_sym_anchor] = ACTIONS(66),
        [sym_inline_email_rx] = ACTIONS(66),
        [anon_sym_footnote] = ACTIONS(66),
        [anon_sym_footnoteref] = ACTIONS(66),
        [anon_sym_link] = ACTIONS(66),
        [anon_sym_mailto] = ACTIONS(66),
        [anon_sym_stem] = ACTIONS(66),
        [anon_sym_latexmath] = ACTIONS(66),
        [anon_sym_asciimath] = ACTIONS(66),
    },
    [7] = {
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
        [anon_sym_LBRACK_LBRACK] = ACTIONS(70),
        [anon_sym_anchor] = ACTIONS(70),
        [sym_inline_email_rx] = ACTIONS(70),
        [anon_sym_footnote] = ACTIONS(70),
        [anon_sym_footnoteref] = ACTIONS(70),
        [anon_sym_link] = ACTIONS(70),
        [anon_sym_mailto] = ACTIONS(70),
        [anon_sym_stem] = ACTIONS(70),
        [anon_sym_latexmath] = ACTIONS(70),
        [anon_sym_asciimath] = ACTIONS(70),
    },
    [8] = {
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
        [anon_sym_LBRACK_LBRACK] = ACTIONS(74),
        [anon_sym_anchor] = ACTIONS(74),
        [sym_inline_email_rx] = ACTIONS(74),
        [anon_sym_footnote] = ACTIONS(74),
        [anon_sym_footnoteref] = ACTIONS(74),
        [anon_sym_link] = ACTIONS(74),
        [anon_sym_mailto] = ACTIONS(74),
        [anon_sym_stem] = ACTIONS(74),
        [anon_sym_latexmath] = ACTIONS(74),
        [anon_sym_asciimath] = ACTIONS(74),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(76),
        [anon_sym_LBRACE] = ACTIONS(78),
        [anon_sym_RBRACE] = ACTIONS(78),
        [sym__word_no_digit] = ACTIONS(78),
        [sym__digits] = ACTIONS(78),
        [anon_sym_BANG] = ACTIONS(78),
        [anon_sym_DQUOTE] = ACTIONS(78),
        [anon_sym_POUND] = ACTIONS(78),
        [anon_sym_DOLLAR] = ACTIONS(78),
        [anon_sym_PERCENT] = ACTIONS(78),
        [anon_sym_AMP] = ACTIONS(78),
        [anon_sym_SQUOTE] = ACTIONS(78),
        [anon_sym_LPAREN] = ACTIONS(78),
        [anon_sym_RPAREN] = ACTIONS(78),
        [anon_sym_STAR] = ACTIONS(78),
        [anon_sym_PLUS] = ACTIONS(78),
        [anon_sym_COMMA] = ACTIONS(78),
        [anon_sym_DASH] = ACTIONS(78),
        [anon_sym_DOT] = ACTIONS(78),
        [anon_sym_SLASH] = ACTIONS(78),
        [anon_sym_COLON] = ACTIONS(78),
        [anon_sym_SEMI] = ACTIONS(78),
        [anon_sym_LT] = ACTIONS(78),
        [anon_sym_EQ] = ACTIONS(78),
        [anon_sym_GT] = ACTIONS(78),
        [anon_sym_QMARK] = ACTIONS(78),
        [anon_sym_AT] = ACTIONS(78),
        [anon_sym_LBRACK] = ACTIONS(78),
        [anon_sym_BSLASH] = ACTIONS(78),
        [anon_sym_RBRACK] = ACTIONS(78),
        [anon_sym_CARET] = ACTIONS(78),
        [anon_sym__] = ACTIONS(78),
        [anon_sym_BQUOTE] = ACTIONS(78),
        [anon_sym_PIPE] = ACTIONS(78),
        [anon_sym_TILDE] = ACTIONS(78),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(78),
        [anon_sym_anchor] = ACTIONS(78),
        [sym_inline_email_rx] = ACTIONS(78),
        [anon_sym_footnote] = ACTIONS(78),
        [anon_sym_footnoteref] = ACTIONS(78),
        [anon_sym_link] = ACTIONS(78),
        [anon_sym_mailto] = ACTIONS(78),
        [anon_sym_stem] = ACTIONS(78),
        [anon_sym_latexmath] = ACTIONS(78),
        [anon_sym_asciimath] = ACTIONS(78),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(80),
        [anon_sym_LBRACE] = ACTIONS(82),
        [anon_sym_RBRACE] = ACTIONS(82),
        [sym__word_no_digit] = ACTIONS(82),
        [sym__digits] = ACTIONS(82),
        [anon_sym_BANG] = ACTIONS(82),
        [anon_sym_DQUOTE] = ACTIONS(82),
        [anon_sym_POUND] = ACTIONS(82),
        [anon_sym_DOLLAR] = ACTIONS(82),
        [anon_sym_PERCENT] = ACTIONS(82),
        [anon_sym_AMP] = ACTIONS(82),
        [anon_sym_SQUOTE] = ACTIONS(82),
        [anon_sym_LPAREN] = ACTIONS(82),
        [anon_sym_RPAREN] = ACTIONS(82),
        [anon_sym_STAR] = ACTIONS(82),
        [anon_sym_PLUS] = ACTIONS(82),
        [anon_sym_COMMA] = ACTIONS(82),
        [anon_sym_DASH] = ACTIONS(82),
        [anon_sym_DOT] = ACTIONS(82),
        [anon_sym_SLASH] = ACTIONS(82),
        [anon_sym_COLON] = ACTIONS(82),
        [anon_sym_SEMI] = ACTIONS(82),
        [anon_sym_LT] = ACTIONS(82),
        [anon_sym_EQ] = ACTIONS(82),
        [anon_sym_GT] = ACTIONS(82),
        [anon_sym_QMARK] = ACTIONS(82),
        [anon_sym_AT] = ACTIONS(82),
        [anon_sym_LBRACK] = ACTIONS(82),
        [anon_sym_BSLASH] = ACTIONS(82),
        [anon_sym_RBRACK] = ACTIONS(82),
        [anon_sym_CARET] = ACTIONS(82),
        [anon_sym__] = ACTIONS(82),
        [anon_sym_BQUOTE] = ACTIONS(82),
        [anon_sym_PIPE] = ACTIONS(82),
        [anon_sym_TILDE] = ACTIONS(82),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(82),
        [anon_sym_anchor] = ACTIONS(82),
        [sym_inline_email_rx] = ACTIONS(82),
        [anon_sym_footnote] = ACTIONS(82),
        [anon_sym_footnoteref] = ACTIONS(82),
        [anon_sym_link] = ACTIONS(82),
        [anon_sym_mailto] = ACTIONS(82),
        [anon_sym_stem] = ACTIONS(82),
        [anon_sym_latexmath] = ACTIONS(82),
        [anon_sym_asciimath] = ACTIONS(82),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(54),
        [anon_sym_LBRACE] = ACTIONS(56),
        [anon_sym_RBRACE] = ACTIONS(56),
        [sym__word_no_digit] = ACTIONS(56),
        [sym__digits] = ACTIONS(56),
        [anon_sym_BANG] = ACTIONS(56),
        [anon_sym_DQUOTE] = ACTIONS(56),
        [anon_sym_POUND] = ACTIONS(56),
        [anon_sym_DOLLAR] = ACTIONS(56),
        [anon_sym_PERCENT] = ACTIONS(56),
        [anon_sym_AMP] = ACTIONS(56),
        [anon_sym_SQUOTE] = ACTIONS(56),
        [anon_sym_LPAREN] = ACTIONS(56),
        [anon_sym_RPAREN] = ACTIONS(56),
        [anon_sym_STAR] = ACTIONS(56),
        [anon_sym_PLUS] = ACTIONS(56),
        [anon_sym_COMMA] = ACTIONS(56),
        [anon_sym_DASH] = ACTIONS(56),
        [anon_sym_DOT] = ACTIONS(56),
        [anon_sym_SLASH] = ACTIONS(56),
        [anon_sym_COLON] = ACTIONS(56),
        [anon_sym_SEMI] = ACTIONS(56),
        [anon_sym_LT] = ACTIONS(56),
        [anon_sym_EQ] = ACTIONS(56),
        [anon_sym_GT] = ACTIONS(56),
        [anon_sym_QMARK] = ACTIONS(56),
        [anon_sym_AT] = ACTIONS(56),
        [anon_sym_LBRACK] = ACTIONS(56),
        [anon_sym_BSLASH] = ACTIONS(56),
        [anon_sym_RBRACK] = ACTIONS(56),
        [anon_sym_CARET] = ACTIONS(56),
        [anon_sym__] = ACTIONS(56),
        [anon_sym_BQUOTE] = ACTIONS(56),
        [anon_sym_PIPE] = ACTIONS(56),
        [anon_sym_TILDE] = ACTIONS(56),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(56),
        [anon_sym_anchor] = ACTIONS(56),
        [sym_inline_email_rx] = ACTIONS(56),
        [anon_sym_footnote] = ACTIONS(56),
        [anon_sym_footnoteref] = ACTIONS(56),
        [anon_sym_link] = ACTIONS(56),
        [anon_sym_mailto] = ACTIONS(56),
        [anon_sym_stem] = ACTIONS(56),
        [anon_sym_latexmath] = ACTIONS(56),
        [anon_sym_asciimath] = ACTIONS(56),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(84),
        [anon_sym_LBRACE] = ACTIONS(86),
        [anon_sym_RBRACE] = ACTIONS(86),
        [sym__word_no_digit] = ACTIONS(86),
        [sym__digits] = ACTIONS(86),
        [anon_sym_BANG] = ACTIONS(86),
        [anon_sym_DQUOTE] = ACTIONS(86),
        [anon_sym_POUND] = ACTIONS(86),
        [anon_sym_DOLLAR] = ACTIONS(86),
        [anon_sym_PERCENT] = ACTIONS(86),
        [anon_sym_AMP] = ACTIONS(86),
        [anon_sym_SQUOTE] = ACTIONS(86),
        [anon_sym_LPAREN] = ACTIONS(86),
        [anon_sym_RPAREN] = ACTIONS(86),
        [anon_sym_STAR] = ACTIONS(86),
        [anon_sym_PLUS] = ACTIONS(86),
        [anon_sym_COMMA] = ACTIONS(86),
        [anon_sym_DASH] = ACTIONS(86),
        [anon_sym_DOT] = ACTIONS(86),
        [anon_sym_SLASH] = ACTIONS(86),
        [anon_sym_COLON] = ACTIONS(86),
        [anon_sym_SEMI] = ACTIONS(86),
        [anon_sym_LT] = ACTIONS(86),
        [anon_sym_EQ] = ACTIONS(86),
        [anon_sym_GT] = ACTIONS(86),
        [anon_sym_QMARK] = ACTIONS(86),
        [anon_sym_AT] = ACTIONS(86),
        [anon_sym_LBRACK] = ACTIONS(86),
        [anon_sym_BSLASH] = ACTIONS(86),
        [anon_sym_RBRACK] = ACTIONS(86),
        [anon_sym_CARET] = ACTIONS(86),
        [anon_sym__] = ACTIONS(86),
        [anon_sym_BQUOTE] = ACTIONS(86),
        [anon_sym_PIPE] = ACTIONS(86),
        [anon_sym_TILDE] = ACTIONS(86),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(86),
        [anon_sym_anchor] = ACTIONS(86),
        [sym_inline_email_rx] = ACTIONS(86),
        [anon_sym_footnote] = ACTIONS(86),
        [anon_sym_footnoteref] = ACTIONS(86),
        [anon_sym_link] = ACTIONS(86),
        [anon_sym_mailto] = ACTIONS(86),
        [anon_sym_stem] = ACTIONS(86),
        [anon_sym_latexmath] = ACTIONS(86),
        [anon_sym_asciimath] = ACTIONS(86),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(88),
        [anon_sym_LBRACE] = ACTIONS(90),
        [anon_sym_RBRACE] = ACTIONS(90),
        [sym__word_no_digit] = ACTIONS(90),
        [sym__digits] = ACTIONS(90),
        [anon_sym_BANG] = ACTIONS(90),
        [anon_sym_DQUOTE] = ACTIONS(90),
        [anon_sym_POUND] = ACTIONS(90),
        [anon_sym_DOLLAR] = ACTIONS(90),
        [anon_sym_PERCENT] = ACTIONS(90),
        [anon_sym_AMP] = ACTIONS(90),
        [anon_sym_SQUOTE] = ACTIONS(90),
        [anon_sym_LPAREN] = ACTIONS(90),
        [anon_sym_RPAREN] = ACTIONS(90),
        [anon_sym_STAR] = ACTIONS(90),
        [anon_sym_PLUS] = ACTIONS(90),
        [anon_sym_COMMA] = ACTIONS(90),
        [anon_sym_DASH] = ACTIONS(90),
        [anon_sym_DOT] = ACTIONS(90),
        [anon_sym_SLASH] = ACTIONS(90),
        [anon_sym_COLON] = ACTIONS(90),
        [anon_sym_SEMI] = ACTIONS(90),
        [anon_sym_LT] = ACTIONS(90),
        [anon_sym_EQ] = ACTIONS(90),
        [anon_sym_GT] = ACTIONS(90),
        [anon_sym_QMARK] = ACTIONS(90),
        [anon_sym_AT] = ACTIONS(90),
        [anon_sym_LBRACK] = ACTIONS(90),
        [anon_sym_BSLASH] = ACTIONS(90),
        [anon_sym_RBRACK] = ACTIONS(90),
        [anon_sym_CARET] = ACTIONS(90),
        [anon_sym__] = ACTIONS(90),
        [anon_sym_BQUOTE] = ACTIONS(90),
        [anon_sym_PIPE] = ACTIONS(90),
        [anon_sym_TILDE] = ACTIONS(90),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(90),
        [anon_sym_anchor] = ACTIONS(90),
        [sym_inline_email_rx] = ACTIONS(90),
        [anon_sym_footnote] = ACTIONS(90),
        [anon_sym_footnoteref] = ACTIONS(90),
        [anon_sym_link] = ACTIONS(90),
        [anon_sym_mailto] = ACTIONS(90),
        [anon_sym_stem] = ACTIONS(90),
        [anon_sym_latexmath] = ACTIONS(90),
        [anon_sym_asciimath] = ACTIONS(90),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(92),
        [anon_sym_LBRACE] = ACTIONS(94),
        [anon_sym_RBRACE] = ACTIONS(94),
        [sym__word_no_digit] = ACTIONS(94),
        [sym__digits] = ACTIONS(94),
        [anon_sym_BANG] = ACTIONS(94),
        [anon_sym_DQUOTE] = ACTIONS(94),
        [anon_sym_POUND] = ACTIONS(94),
        [anon_sym_DOLLAR] = ACTIONS(94),
        [anon_sym_PERCENT] = ACTIONS(94),
        [anon_sym_AMP] = ACTIONS(94),
        [anon_sym_SQUOTE] = ACTIONS(94),
        [anon_sym_LPAREN] = ACTIONS(94),
        [anon_sym_RPAREN] = ACTIONS(94),
        [anon_sym_STAR] = ACTIONS(94),
        [anon_sym_PLUS] = ACTIONS(94),
        [anon_sym_COMMA] = ACTIONS(94),
        [anon_sym_DASH] = ACTIONS(94),
        [anon_sym_DOT] = ACTIONS(94),
        [anon_sym_SLASH] = ACTIONS(94),
        [anon_sym_COLON] = ACTIONS(94),
        [anon_sym_SEMI] = ACTIONS(94),
        [anon_sym_LT] = ACTIONS(94),
        [anon_sym_EQ] = ACTIONS(94),
        [anon_sym_GT] = ACTIONS(94),
        [anon_sym_QMARK] = ACTIONS(94),
        [anon_sym_AT] = ACTIONS(94),
        [anon_sym_LBRACK] = ACTIONS(94),
        [anon_sym_BSLASH] = ACTIONS(94),
        [anon_sym_RBRACK] = ACTIONS(94),
        [anon_sym_CARET] = ACTIONS(94),
        [anon_sym__] = ACTIONS(94),
        [anon_sym_BQUOTE] = ACTIONS(94),
        [anon_sym_PIPE] = ACTIONS(94),
        [anon_sym_TILDE] = ACTIONS(94),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(94),
        [anon_sym_anchor] = ACTIONS(94),
        [sym_inline_email_rx] = ACTIONS(94),
        [anon_sym_footnote] = ACTIONS(94),
        [anon_sym_footnoteref] = ACTIONS(94),
        [anon_sym_link] = ACTIONS(94),
        [anon_sym_mailto] = ACTIONS(94),
        [anon_sym_stem] = ACTIONS(94),
        [anon_sym_latexmath] = ACTIONS(94),
        [anon_sym_asciimath] = ACTIONS(94),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(96),
        [anon_sym_LBRACE] = ACTIONS(98),
        [anon_sym_RBRACE] = ACTIONS(98),
        [sym__word_no_digit] = ACTIONS(98),
        [sym__digits] = ACTIONS(98),
        [anon_sym_BANG] = ACTIONS(98),
        [anon_sym_DQUOTE] = ACTIONS(98),
        [anon_sym_POUND] = ACTIONS(98),
        [anon_sym_DOLLAR] = ACTIONS(98),
        [anon_sym_PERCENT] = ACTIONS(98),
        [anon_sym_AMP] = ACTIONS(98),
        [anon_sym_SQUOTE] = ACTIONS(98),
        [anon_sym_LPAREN] = ACTIONS(98),
        [anon_sym_RPAREN] = ACTIONS(98),
        [anon_sym_STAR] = ACTIONS(98),
        [anon_sym_PLUS] = ACTIONS(98),
        [anon_sym_COMMA] = ACTIONS(98),
        [anon_sym_DASH] = ACTIONS(98),
        [anon_sym_DOT] = ACTIONS(98),
        [anon_sym_SLASH] = ACTIONS(98),
        [anon_sym_COLON] = ACTIONS(98),
        [anon_sym_SEMI] = ACTIONS(98),
        [anon_sym_LT] = ACTIONS(98),
        [anon_sym_EQ] = ACTIONS(98),
        [anon_sym_GT] = ACTIONS(98),
        [anon_sym_QMARK] = ACTIONS(98),
        [anon_sym_AT] = ACTIONS(98),
        [anon_sym_LBRACK] = ACTIONS(98),
        [anon_sym_BSLASH] = ACTIONS(98),
        [anon_sym_RBRACK] = ACTIONS(98),
        [anon_sym_CARET] = ACTIONS(98),
        [anon_sym__] = ACTIONS(98),
        [anon_sym_BQUOTE] = ACTIONS(98),
        [anon_sym_PIPE] = ACTIONS(98),
        [anon_sym_TILDE] = ACTIONS(98),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(98),
        [anon_sym_anchor] = ACTIONS(98),
        [sym_inline_email_rx] = ACTIONS(98),
        [anon_sym_footnote] = ACTIONS(98),
        [anon_sym_footnoteref] = ACTIONS(98),
        [anon_sym_link] = ACTIONS(98),
        [anon_sym_mailto] = ACTIONS(98),
        [anon_sym_stem] = ACTIONS(98),
        [anon_sym_latexmath] = ACTIONS(98),
        [anon_sym_asciimath] = ACTIONS(98),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(100),
        [anon_sym_LBRACE] = ACTIONS(102),
        [anon_sym_RBRACE] = ACTIONS(102),
        [sym__word_no_digit] = ACTIONS(102),
        [sym__digits] = ACTIONS(102),
        [anon_sym_BANG] = ACTIONS(102),
        [anon_sym_DQUOTE] = ACTIONS(102),
        [anon_sym_POUND] = ACTIONS(102),
        [anon_sym_DOLLAR] = ACTIONS(102),
        [anon_sym_PERCENT] = ACTIONS(102),
        [anon_sym_AMP] = ACTIONS(102),
        [anon_sym_SQUOTE] = ACTIONS(102),
        [anon_sym_LPAREN] = ACTIONS(102),
        [anon_sym_RPAREN] = ACTIONS(102),
        [anon_sym_STAR] = ACTIONS(102),
        [anon_sym_PLUS] = ACTIONS(102),
        [anon_sym_COMMA] = ACTIONS(102),
        [anon_sym_DASH] = ACTIONS(102),
        [anon_sym_DOT] = ACTIONS(102),
        [anon_sym_SLASH] = ACTIONS(102),
        [anon_sym_COLON] = ACTIONS(102),
        [anon_sym_SEMI] = ACTIONS(102),
        [anon_sym_LT] = ACTIONS(102),
        [anon_sym_EQ] = ACTIONS(102),
        [anon_sym_GT] = ACTIONS(102),
        [anon_sym_QMARK] = ACTIONS(102),
        [anon_sym_AT] = ACTIONS(102),
        [anon_sym_LBRACK] = ACTIONS(102),
        [anon_sym_BSLASH] = ACTIONS(102),
        [anon_sym_RBRACK] = ACTIONS(102),
        [anon_sym_CARET] = ACTIONS(102),
        [anon_sym__] = ACTIONS(102),
        [anon_sym_BQUOTE] = ACTIONS(102),
        [anon_sym_PIPE] = ACTIONS(102),
        [anon_sym_TILDE] = ACTIONS(102),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(102),
        [anon_sym_anchor] = ACTIONS(102),
        [sym_inline_email_rx] = ACTIONS(102),
        [anon_sym_footnote] = ACTIONS(102),
        [anon_sym_footnoteref] = ACTIONS(102),
        [anon_sym_link] = ACTIONS(102),
        [anon_sym_mailto] = ACTIONS(102),
        [anon_sym_stem] = ACTIONS(102),
        [anon_sym_latexmath] = ACTIONS(102),
        [anon_sym_asciimath] = ACTIONS(102),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 2,
    ACTIONS(104),
    1,
    anon_sym_COMMA,
    ACTIONS(106),
    1,
    anon_sym_RBRACK_RBRACK,
    [7] = 2,
    ACTIONS(108),
    1,
    anon_sym_COMMA,
    ACTIONS(110),
    1,
    anon_sym_RBRACK,
    [14] = 2,
    ACTIONS(112),
    1,
    aux_sym_replacement_token1,
    ACTIONS(114),
    1,
    anon_sym_LBRACK,
    [21] = 2,
    ACTIONS(116),
    1,
    anon_sym_COMMA,
    ACTIONS(118),
    1,
    anon_sym_RBRACK,
    [28] = 2,
    ACTIONS(120),
    1,
    aux_sym_inline_anchor_rx_token2,
    ACTIONS(122),
    1,
    aux_sym_inline_footnote_macro_token1,
    [35] = 2,
    ACTIONS(124),
    1,
    aux_sym_inline_anchor_rx_token2,
    ACTIONS(126),
    1,
    aux_sym_inline_footnote_macro_token1,
    [42] = 1,
    ACTIONS(128),
    1,
    anon_sym_LBRACK,
    [46] = 1,
    ACTIONS(110),
    1,
    anon_sym_RBRACK,
    [50] = 1,
    ACTIONS(130),
    1,
    anon_sym_LBRACK,
    [54] = 1,
    ACTIONS(132),
    1,
    aux_sym_inline_anchor_rx_token2,
    [58] = 1,
    ACTIONS(134),
    1,
    anon_sym_RBRACK_RBRACK,
    [62] = 1,
    ACTIONS(136),
    1,
    aux_sym_inline_anchor_rx_token2,
    [66] = 1,
    ACTIONS(138),
    1,
    aux_sym_replacement_token1,
    [70] = 1,
    ACTIONS(118),
    1,
    anon_sym_RBRACK,
    [74] = 1,
    ACTIONS(140),
    1,
    aux_sym_inline_anchor_rx_token1,
    [78] = 1,
    ACTIONS(142),
    1,
    aux_sym_inline_anchor_rx_token2,
    [82] = 1,
    ACTIONS(144),
    1,
    anon_sym_RBRACK,
    [86] = 1,
    ACTIONS(146),
    1,
    anon_sym_LBRACK,
    [90] = 1,
    ACTIONS(148),
    1,
    anon_sym_RBRACK,
    [94] = 1,
    ACTIONS(150),
    1,
    anon_sym_LBRACK,
    [98] = 1,
    ACTIONS(152),
    1,
    aux_sym_inline_link_macro_token1,
    [102] = 1,
    ACTIONS(154),
    1,
    aux_sym_replacement_token1,
    [106] = 1,
    ACTIONS(156),
    1,
    aux_sym_inline_footnote_macro_token2,
    [110] = 1,
    ACTIONS(158),
    1,
    anon_sym_RBRACK,
    [114] = 1,
    ACTIONS(160),
    1,
    anon_sym_RBRACE,
    [118] = 1,
    ACTIONS(162),
    1,
    ts_builtin_sym_end,
    [122] = 1,
    ACTIONS(164),
    1,
    anon_sym_COLON,
    [126] = 1,
    ACTIONS(166),
    1,
    aux_sym_inline_footnote_macro_token2,
    [130] = 1,
    ACTIONS(168),
    1,
    anon_sym_RBRACK,
    [134] = 1,
    ACTIONS(170),
    1,
    anon_sym_COLON,
    [138] = 1,
    ACTIONS(172),
    1,
    anon_sym_RBRACK,
    [142] = 1,
    ACTIONS(174),
    1,
    anon_sym_COLON,
    [146] = 1,
    ACTIONS(176),
    1,
    anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(17)] = 0,
    [SMALL_STATE(18)] = 7,
    [SMALL_STATE(19)] = 14,
    [SMALL_STATE(20)] = 21,
    [SMALL_STATE(21)] = 28,
    [SMALL_STATE(22)] = 35,
    [SMALL_STATE(23)] = 42,
    [SMALL_STATE(24)] = 46,
    [SMALL_STATE(25)] = 50,
    [SMALL_STATE(26)] = 54,
    [SMALL_STATE(27)] = 58,
    [SMALL_STATE(28)] = 62,
    [SMALL_STATE(29)] = 66,
    [SMALL_STATE(30)] = 70,
    [SMALL_STATE(31)] = 74,
    [SMALL_STATE(32)] = 78,
    [SMALL_STATE(33)] = 82,
    [SMALL_STATE(34)] = 86,
    [SMALL_STATE(35)] = 90,
    [SMALL_STATE(36)] = 94,
    [SMALL_STATE(37)] = 98,
    [SMALL_STATE(38)] = 102,
    [SMALL_STATE(39)] = 106,
    [SMALL_STATE(40)] = 110,
    [SMALL_STATE(41)] = 114,
    [SMALL_STATE(42)] = 118,
    [SMALL_STATE(43)] = 122,
    [SMALL_STATE(44)] = 126,
    [SMALL_STATE(45)] = 130,
    [SMALL_STATE(46)] = 134,
    [SMALL_STATE(47)] = 138,
    [SMALL_STATE(48)] = 142,
    [SMALL_STATE(49)] = 146,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(4),
    [5] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(11),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(14),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(29),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(49),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(3),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(48),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(46),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(43),
    [21] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    [23] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(4),
    [26] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(11),
    [29] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(14),
    [32] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(29),
    [35] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(49),
    [38] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(2),
    [41] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(48),
    [44] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(46),
    [47] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(43),
    [50] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [52] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(2),
    [54] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [56] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [58] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(41),
    [60] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_math_macro, 5, 0, 0),
    [62] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_math_macro, 5, 0, 0),
    [64] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 8, 0, 1),
    [66] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 8, 0, 1),
    [68] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 7, 0, 0),
    [70] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 7, 0, 0),
    [72] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_link_macro, 6, 0, 0),
    [74] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_link_macro, 6, 0, 0),
    [76] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 6, 0, 1),
    [78] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 6, 0, 1),
    [80] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 6, 0, 0),
    [82] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 6, 0, 0),
    [84] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 5, 0, 0),
    [86] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 5, 0, 0),
    [88] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 5, 0, 0),
    [90] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 5, 0, 0),
    [92] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_word, 1, 0, 0),
    [94] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_word, 1, 0, 0),
    [96] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 0),
    [98] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 0),
    [100] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 3, 0, 0),
    [102] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 3, 0, 0),
    [104] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [106] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [108] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [110] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [112] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [114] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [116] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [118] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [120] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [122] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(18),
    [124] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [126] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(20),
    [128] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [130] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [132] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(33),
    [134] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [136] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [138] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [140] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [142] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [144] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [146] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [148] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [150] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [152] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [154] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [156] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [158] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [160] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [162] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [164] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [166] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [168] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [170] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [172] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [174] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [176] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
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
        .field_names = ts_field_names,
        .field_map_slices = ts_field_map_slices,
        .field_map_entries = ts_field_map_entries,
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
