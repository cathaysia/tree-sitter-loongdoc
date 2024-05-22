#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
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
    anon_sym_image = 46,
    anon_sym_icon = 47,
    aux_sym_inline_image_macro_token1 = 48,
    aux_sym_inline_image_macro_token2 = 49,
    anon_sym_BSLASH_LBRACK = 50,
    anon_sym_BSLASH_RBRACK = 51,
    anon_sym_link = 52,
    anon_sym_mailto = 53,
    aux_sym_inline_link_macro_token1 = 54,
    anon_sym_stem = 55,
    anon_sym_latexmath = 56,
    anon_sym_asciimath = 57,
    sym_inline = 58,
    sym_replacement = 59,
    sym_word = 60,
    sym_punctuation = 61,
    sym_inline_anchor_rx = 62,
    sym_inline_footnote_macro = 63,
    sym_inline_image_macro = 64,
    sym_inline_link_macro = 65,
    sym_inline_math_macro = 66,
    aux_sym_inline_repeat1 = 67,
    aux_sym_inline_image_macro_repeat1 = 68,
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
    [anon_sym_image] = "image",
    [anon_sym_icon] = "icon",
    [aux_sym_inline_image_macro_token1] = "inline_image_macro_token1",
    [aux_sym_inline_image_macro_token2] = "inline_image_macro_token2",
    [anon_sym_BSLASH_LBRACK] = "\\[",
    [anon_sym_BSLASH_RBRACK] = "\\]",
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
    [sym_inline_image_macro] = "inline_image_macro",
    [sym_inline_link_macro] = "inline_link_macro",
    [sym_inline_math_macro] = "inline_math_macro",
    [aux_sym_inline_repeat1] = "inline_repeat1",
    [aux_sym_inline_image_macro_repeat1] = "inline_image_macro_repeat1",
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
    [anon_sym_image] = anon_sym_image,
    [anon_sym_icon] = anon_sym_icon,
    [aux_sym_inline_image_macro_token1] = aux_sym_inline_image_macro_token1,
    [aux_sym_inline_image_macro_token2] = aux_sym_inline_image_macro_token2,
    [anon_sym_BSLASH_LBRACK] = anon_sym_BSLASH_LBRACK,
    [anon_sym_BSLASH_RBRACK] = anon_sym_BSLASH_RBRACK,
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
    [sym_inline_image_macro] = sym_inline_image_macro,
    [sym_inline_link_macro] = sym_inline_link_macro,
    [sym_inline_math_macro] = sym_inline_math_macro,
    [aux_sym_inline_repeat1] = aux_sym_inline_repeat1,
    [aux_sym_inline_image_macro_repeat1] = aux_sym_inline_image_macro_repeat1,
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
    [anon_sym_image] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_icon] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_inline_image_macro_token1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_inline_image_macro_token2] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_BSLASH_LBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASH_RBRACK] = {
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
    [sym_inline_image_macro] = {
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
    [aux_sym_inline_image_macro_repeat1] = {
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
    [50] = 50,
    [51] = 51,
    [52] = 52,
    [53] = 53,
    [54] = 54,
    [55] = 55,
    [56] = 56,
    [57] = 57,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(51);
            ADVANCE_MAP(
                '!', 155,
                '"', 156,
                '#', 157,
                '$', 158,
                '%', 159,
                '&', 160,
                '\'', 161,
                '(', 162,
                ')', 163,
                '*', 164,
                '+', 165,
                ',', 166,
                '-', 167,
                '.', 168,
                '/', 169,
                ':', 170,
                ';', 171,
                '<', 172,
                '=', 173,
                '>', 174,
                '?', 175,
                '@', 176,
                '[', 178,
                '\\', 179,
                ']', 180,
                '^', 181,
                '_', 184,
                '`', 186,
                'a', 79,
                'f', 85,
                'i', 60,
                'l', 57,
                'm', 53,
                's', 90,
                '{', 52,
                '|', 187,
                '}', 104,
                '~', 188,
                0x0b, 151,
                '\f', 151,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(99);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0)
                ADVANCE(152);
            END_STATE();
        case 1:
            if(lookahead == '"')
                ADVANCE(35);
            if(lookahead == '\\')
                ADVANCE(49);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 2:
            if(lookahead == ',')
                ADVANCE(166);
            if(lookahead == ':')
                ADVANCE(170);
            if(lookahead == '[')
                ADVANCE(177);
            if(lookahead == ']')
                ADVANCE(180);
            if(lookahead == '}')
                ADVANCE(103);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(2);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(102);
            END_STATE();
        case 3:
            if(lookahead == ',')
                ADVANCE(166);
            if(lookahead == ']')
                ADVANCE(41);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(3);
            END_STATE();
        case 4:
            if(lookahead == '-')
                ADVANCE(5);
            if(lookahead == '.')
                ADVANCE(47);
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
                ADVANCE(199);
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
                ADVANCE(198);
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
                ADVANCE(198);
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
                ADVANCE(198);
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
                ADVANCE(198);
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
                ADVANCE(198);
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
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 16:
            if(lookahead == '.')
                ADVANCE(48);
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
                ADVANCE(200);
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
                ADVANCE(200);
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
            if(lookahead == '\\')
                ADVANCE(214);
            if(lookahead == ']')
                ADVANCE(180);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(215);
            if(lookahead != 0)
                ADVANCE(213);
            END_STATE();
        case 41:
            if(lookahead == ']')
                ADVANCE(192);
            END_STATE();
        case 42:
            if(lookahead == '_')
                ADVANCE(42);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 43:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(206);
            END_STATE();
        case 44:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(190);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(191);
            END_STATE();
        case 45:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(45);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(222);
            END_STATE();
        case 46:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(211);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(212);
            END_STATE();
        case 47:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(199);
            END_STATE();
        case 48:
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
        case 49:
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 50:
            if(eof)
                ADVANCE(51);
            ADVANCE_MAP(
                '!', 155,
                '"', 156,
                '#', 157,
                '$', 158,
                '%', 159,
                '&', 160,
                '\'', 161,
                '(', 162,
                ')', 163,
                '*', 164,
                '+', 165,
                ',', 166,
                '-', 167,
                '.', 168,
                '/', 169,
                ':', 170,
                ';', 171,
                '<', 172,
                '=', 173,
                '>', 174,
                '?', 175,
                '@', 176,
                '[', 178,
                '\\', 179,
                ']', 180,
                '^', 181,
                '_', 185,
                '`', 186,
                'a', 131,
                'f', 137,
                'i', 112,
                'l', 109,
                'm', 105,
                's', 142,
                '{', 52,
                '|', 187,
                '}', 104,
                '~', 188,
                0x0b, 153,
                '\f', 153,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(50);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(154);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
            if(lookahead != 0)
                ADVANCE(152);
            END_STATE();
        case 51:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 52:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(48);
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
        case 53:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'a')
                ADVANCE(71);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 54:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'a')
                ADVANCE(67);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 55:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'a')
                ADVANCE(92);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 56:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'a')
                ADVANCE(94);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 57:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'a')
                ADVANCE(91);
            if(lookahead == 'i')
                ADVANCE(80);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 58:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'c')
                ADVANCE(70);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 59:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'c')
                ADVANCE(73);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 60:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'c')
                ADVANCE(87);
            if(lookahead == 'm')
                ADVANCE(54);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 61:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'e')
                ADVANCE(76);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 62:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'e')
                ADVANCE(97);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 63:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'e')
                ADVANCE(207);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 64:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'e')
                ADVANCE(201);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 65:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'e')
                ADVANCE(66);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 66:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'f')
                ADVANCE(203);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 67:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'g')
                ADVANCE(63);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 68:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'h')
                ADVANCE(227);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 69:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'h')
                ADVANCE(225);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 70:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'h')
                ADVANCE(83);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 71:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'i')
                ADVANCE(75);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 72:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'i')
                ADVANCE(77);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 73:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'i')
                ADVANCE(72);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 74:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'k')
                ADVANCE(218);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 75:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'l')
                ADVANCE(96);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 76:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'm')
                ADVANCE(223);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 77:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'm')
                ADVANCE(55);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 78:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'm')
                ADVANCE(56);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 79:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'n')
                ADVANCE(58);
            if(lookahead == 's')
                ADVANCE(59);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 80:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'n')
                ADVANCE(74);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 81:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'n')
                ADVANCE(209);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 82:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'n')
                ADVANCE(88);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 83:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'o')
                ADVANCE(89);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 84:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'o')
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 85:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'o')
                ADVANCE(86);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 86:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'o')
                ADVANCE(93);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 87:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'o')
                ADVANCE(81);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 88:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'o')
                ADVANCE(95);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 89:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'r')
                ADVANCE(193);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 90:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 't')
                ADVANCE(61);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 91:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 't')
                ADVANCE(62);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 92:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 't')
                ADVANCE(68);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 93:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 't')
                ADVANCE(82);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 94:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 't')
                ADVANCE(69);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 95:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 't')
                ADVANCE(64);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 96:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 't')
                ADVANCE(84);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 97:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'x')
                ADVANCE(78);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 98:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(101);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(98);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 99:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(99);
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
                ADVANCE(102);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(100);
            END_STATE();
        case 100:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(48);
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
                ADVANCE(102);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(100);
            END_STATE();
        case 101:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(101);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(102);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 102:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(102);
            END_STATE();
        case 103:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 104:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            if(lookahead == '.')
                ADVANCE(48);
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
        case 105:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(123);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 106:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(119);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 107:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(144);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 108:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(146);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 109:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(143);
            if(lookahead == 'i')
                ADVANCE(132);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 110:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'c')
                ADVANCE(122);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 111:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'c')
                ADVANCE(125);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 112:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'c')
                ADVANCE(139);
            if(lookahead == 'm')
                ADVANCE(106);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 113:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(128);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 114:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(149);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 115:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(208);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 116:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(202);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 117:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 118:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'f')
                ADVANCE(204);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 119:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'g')
                ADVANCE(115);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 120:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'h')
                ADVANCE(228);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 121:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'h')
                ADVANCE(226);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 122:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'h')
                ADVANCE(135);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 123:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'i')
                ADVANCE(127);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 124:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'i')
                ADVANCE(129);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 125:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'i')
                ADVANCE(124);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 126:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'k')
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 127:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'l')
                ADVANCE(148);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 128:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'm')
                ADVANCE(224);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 129:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'm')
                ADVANCE(107);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 130:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'm')
                ADVANCE(108);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 131:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'n')
                ADVANCE(110);
            if(lookahead == 's')
                ADVANCE(111);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 132:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'n')
                ADVANCE(126);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 133:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'n')
                ADVANCE(210);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 134:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'n')
                ADVANCE(140);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 135:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(141);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 136:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(221);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 137:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(138);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 138:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(145);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 139:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(133);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 140:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(147);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 141:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'r')
                ADVANCE(194);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 142:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(113);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 143:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(114);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 144:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(120);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 145:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(134);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 146:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(121);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 147:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(116);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 148:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(136);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 149:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'x')
                ADVANCE(130);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 150:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 151:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                '_', 182,
                'a', 79,
                'f', 85,
                'i', 60,
                'l', 57,
                'm', 53,
                's', 90,
                0x0b, 151,
                '\f', 151,
            );
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 152:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(42);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 153:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                '_', 183,
                'a', 131,
                'f', 137,
                'i', 112,
                'l', 109,
                'm', 105,
                's', 142,
                0x0b, 153,
                '\f', 153,
            );
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 154:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(154);
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
        case 155:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(48);
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
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(35);
            if(lookahead == '\\')
                ADVANCE(49);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 157:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '.')
                ADVANCE(48);
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
        case 158:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '.')
                ADVANCE(48);
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
        case 159:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(48);
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
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(48);
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
        case 161:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(48);
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
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 163:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 164:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '.')
                ADVANCE(48);
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
        case 165:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(48);
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
        case 166:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 167:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(48);
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
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 169:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(48);
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
        case 170:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 171:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 172:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 173:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(48);
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
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 175:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(48);
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
        case 176:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 177:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 178:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(189);
            END_STATE();
        case 179:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            END_STATE();
        case 180:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 181:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(48);
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
        case 182:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(101);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(98);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 183:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 184:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(48);
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
                ADVANCE(102);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(100);
            END_STATE();
        case 185:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(48);
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
        case 186:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(48);
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
        case 187:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(48);
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
        case 188:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(48);
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
        case 189:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            END_STATE();
        case 190:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(190);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(191);
            END_STATE();
        case 191:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ' ||
               ('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(191);
            END_STATE();
        case 192:
            ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
            END_STATE();
        case 193:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(101);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(98);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 194:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 195:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(195);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(197);
            END_STATE();
        case 196:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(197);
            END_STATE();
        case 197:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(197);
            END_STATE();
        case 198:
            ACCEPT_TOKEN(sym_inline_email_rx);
            END_STATE();
        case 199:
            ACCEPT_TOKEN(sym_inline_email_rx);
            if(lookahead == '-')
                ADVANCE(6);
            if(lookahead == '.')
                ADVANCE(47);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(199);
            END_STATE();
        case 200:
            ACCEPT_TOKEN(sym_inline_email_rx);
            if(lookahead == '\\')
                ADVANCE(38);
            if(lookahead == ']')
                ADVANCE(200);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(37);
            END_STATE();
        case 201:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(lookahead == 'r')
                ADVANCE(65);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(101);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 202:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'r')
                ADVANCE(117);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 203:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(101);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(98);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 204:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 205:
            ACCEPT_TOKEN(aux_sym_inline_footnote_macro_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(206);
            END_STATE();
        case 206:
            ACCEPT_TOKEN(aux_sym_inline_footnote_macro_token2);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(206);
            END_STATE();
        case 207:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(101);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(98);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 208:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 209:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(101);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(98);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 210:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 211:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(211);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(212);
            END_STATE();
        case 212:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token1);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(212);
            END_STATE();
        case 213:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token2);
            END_STATE();
        case 214:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token2);
            if(lookahead == '[')
                ADVANCE(216);
            if(lookahead == ']')
                ADVANCE(217);
            END_STATE();
        case 215:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token2);
            if(lookahead == '\\')
                ADVANCE(214);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(215);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(213);
            END_STATE();
        case 216:
            ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
            END_STATE();
        case 217:
            ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
            END_STATE();
        case 218:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(101);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(98);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 219:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 220:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(101);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(98);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 221:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 222:
            ACCEPT_TOKEN(aux_sym_inline_link_macro_token1);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '[')
                ADVANCE(222);
            END_STATE();
        case 223:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(101);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(98);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 224:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 225:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(101);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(98);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 226:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        case 227:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(98);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(100);
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
                ADVANCE(101);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(98);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(152);
            END_STATE();
        case 228:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(150);
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
                ADVANCE(152);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 50 },
    [2] = { .lex_state = 50 },
    [3] = { .lex_state = 50 },
    [4] = { .lex_state = 0 },
    [5] = { .lex_state = 50 },
    [6] = { .lex_state = 50 },
    [7] = { .lex_state = 50 },
    [8] = { .lex_state = 50 },
    [9] = { .lex_state = 50 },
    [10] = { .lex_state = 50 },
    [11] = { .lex_state = 50 },
    [12] = { .lex_state = 50 },
    [13] = { .lex_state = 50 },
    [14] = { .lex_state = 50 },
    [15] = { .lex_state = 50 },
    [16] = { .lex_state = 50 },
    [17] = { .lex_state = 50 },
    [18] = { .lex_state = 50 },
    [19] = { .lex_state = 40 },
    [20] = { .lex_state = 40 },
    [21] = { .lex_state = 40 },
    [22] = { .lex_state = 2 },
    [23] = { .lex_state = 195 },
    [24] = { .lex_state = 2 },
    [25] = { .lex_state = 3 },
    [26] = { .lex_state = 195 },
    [27] = { .lex_state = 2 },
    [28] = { .lex_state = 2 },
    [29] = { .lex_state = 43 },
    [30] = { .lex_state = 3 },
    [31] = { .lex_state = 195 },
    [32] = { .lex_state = 2 },
    [33] = { .lex_state = 2 },
    [34] = { .lex_state = 2 },
    [35] = { .lex_state = 2 },
    [36] = { .lex_state = 195 },
    [37] = { .lex_state = 2 },
    [38] = { .lex_state = 2 },
    [39] = { .lex_state = 2 },
    [40] = { .lex_state = 2 },
    [41] = { .lex_state = 2 },
    [42] = { .lex_state = 44 },
    [43] = { .lex_state = 195 },
    [44] = { .lex_state = 2 },
    [45] = { .lex_state = 45 },
    [46] = { .lex_state = 2 },
    [47] = { .lex_state = 46 },
    [48] = { .lex_state = 2 },
    [49] = { .lex_state = 0 },
    [50] = { .lex_state = 43 },
    [51] = { .lex_state = 2 },
    [52] = { .lex_state = 2 },
    [53] = { .lex_state = 2 },
    [54] = { .lex_state = 2 },
    [55] = { .lex_state = 2 },
    [56] = { .lex_state = 2 },
    [57] = { .lex_state = 2 },
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
        [anon_sym_image] = ACTIONS(1),
        [anon_sym_icon] = ACTIONS(1),
        [anon_sym_link] = ACTIONS(1),
        [anon_sym_mailto] = ACTIONS(1),
        [anon_sym_stem] = ACTIONS(1),
        [anon_sym_latexmath] = ACTIONS(1),
        [anon_sym_asciimath] = ACTIONS(1),
    },
    [1] = {
        [sym_inline] = STATE(49),
        [sym_replacement] = STATE(2),
        [sym_word] = STATE(2),
        [sym_punctuation] = STATE(2),
        [sym_inline_anchor_rx] = STATE(2),
        [sym_inline_footnote_macro] = STATE(2),
        [sym_inline_image_macro] = STATE(2),
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
        [anon_sym_LBRACK_LBRACK] = ACTIONS(9),
        [anon_sym_anchor] = ACTIONS(11),
        [sym_inline_email_rx] = ACTIONS(13),
        [anon_sym_footnote] = ACTIONS(15),
        [anon_sym_footnoteref] = ACTIONS(15),
        [anon_sym_image] = ACTIONS(17),
        [anon_sym_icon] = ACTIONS(17),
        [anon_sym_link] = ACTIONS(19),
        [anon_sym_mailto] = ACTIONS(19),
        [anon_sym_stem] = ACTIONS(21),
        [anon_sym_latexmath] = ACTIONS(21),
        [anon_sym_asciimath] = ACTIONS(21),
    },
    [2] = {
        [sym_replacement] = STATE(3),
        [sym_word] = STATE(3),
        [sym_punctuation] = STATE(3),
        [sym_inline_anchor_rx] = STATE(3),
        [sym_inline_footnote_macro] = STATE(3),
        [sym_inline_image_macro] = STATE(3),
        [sym_inline_link_macro] = STATE(3),
        [sym_inline_math_macro] = STATE(3),
        [aux_sym_inline_repeat1] = STATE(3),
        [ts_builtin_sym_end] = ACTIONS(23),
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
        [sym_inline_email_rx] = ACTIONS(25),
        [anon_sym_footnote] = ACTIONS(15),
        [anon_sym_footnoteref] = ACTIONS(15),
        [anon_sym_image] = ACTIONS(17),
        [anon_sym_icon] = ACTIONS(17),
        [anon_sym_link] = ACTIONS(19),
        [anon_sym_mailto] = ACTIONS(19),
        [anon_sym_stem] = ACTIONS(21),
        [anon_sym_latexmath] = ACTIONS(21),
        [anon_sym_asciimath] = ACTIONS(21),
    },
    [3] = {
        [sym_replacement] = STATE(3),
        [sym_word] = STATE(3),
        [sym_punctuation] = STATE(3),
        [sym_inline_anchor_rx] = STATE(3),
        [sym_inline_footnote_macro] = STATE(3),
        [sym_inline_image_macro] = STATE(3),
        [sym_inline_link_macro] = STATE(3),
        [sym_inline_math_macro] = STATE(3),
        [aux_sym_inline_repeat1] = STATE(3),
        [ts_builtin_sym_end] = ACTIONS(27),
        [anon_sym_LBRACE] = ACTIONS(29),
        [anon_sym_RBRACE] = ACTIONS(32),
        [sym__word_no_digit] = ACTIONS(35),
        [sym__digits] = ACTIONS(35),
        [anon_sym_BANG] = ACTIONS(32),
        [anon_sym_DQUOTE] = ACTIONS(32),
        [anon_sym_POUND] = ACTIONS(32),
        [anon_sym_DOLLAR] = ACTIONS(32),
        [anon_sym_PERCENT] = ACTIONS(32),
        [anon_sym_AMP] = ACTIONS(32),
        [anon_sym_SQUOTE] = ACTIONS(32),
        [anon_sym_LPAREN] = ACTIONS(32),
        [anon_sym_RPAREN] = ACTIONS(32),
        [anon_sym_STAR] = ACTIONS(32),
        [anon_sym_PLUS] = ACTIONS(32),
        [anon_sym_COMMA] = ACTIONS(32),
        [anon_sym_DASH] = ACTIONS(32),
        [anon_sym_DOT] = ACTIONS(32),
        [anon_sym_SLASH] = ACTIONS(32),
        [anon_sym_COLON] = ACTIONS(32),
        [anon_sym_SEMI] = ACTIONS(32),
        [anon_sym_LT] = ACTIONS(32),
        [anon_sym_EQ] = ACTIONS(32),
        [anon_sym_GT] = ACTIONS(32),
        [anon_sym_QMARK] = ACTIONS(32),
        [anon_sym_AT] = ACTIONS(32),
        [anon_sym_LBRACK] = ACTIONS(32),
        [anon_sym_BSLASH] = ACTIONS(32),
        [anon_sym_RBRACK] = ACTIONS(32),
        [anon_sym_CARET] = ACTIONS(32),
        [anon_sym__] = ACTIONS(32),
        [anon_sym_BQUOTE] = ACTIONS(32),
        [anon_sym_PIPE] = ACTIONS(32),
        [anon_sym_TILDE] = ACTIONS(32),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(38),
        [anon_sym_anchor] = ACTIONS(41),
        [sym_inline_email_rx] = ACTIONS(44),
        [anon_sym_footnote] = ACTIONS(47),
        [anon_sym_footnoteref] = ACTIONS(47),
        [anon_sym_image] = ACTIONS(50),
        [anon_sym_icon] = ACTIONS(50),
        [anon_sym_link] = ACTIONS(53),
        [anon_sym_mailto] = ACTIONS(53),
        [anon_sym_stem] = ACTIONS(56),
        [anon_sym_latexmath] = ACTIONS(56),
        [anon_sym_asciimath] = ACTIONS(56),
    },
    [4] = {
        [ts_builtin_sym_end] = ACTIONS(59),
        [anon_sym_LBRACE] = ACTIONS(61),
        [aux_sym_replacement_token1] = ACTIONS(63),
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
        [anon_sym_footnote] = ACTIONS(61),
        [anon_sym_footnoteref] = ACTIONS(61),
        [anon_sym_image] = ACTIONS(61),
        [anon_sym_icon] = ACTIONS(61),
        [anon_sym_link] = ACTIONS(61),
        [anon_sym_mailto] = ACTIONS(61),
        [anon_sym_stem] = ACTIONS(61),
        [anon_sym_latexmath] = ACTIONS(61),
        [anon_sym_asciimath] = ACTIONS(61),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(65),
        [anon_sym_LBRACE] = ACTIONS(67),
        [anon_sym_RBRACE] = ACTIONS(67),
        [sym__word_no_digit] = ACTIONS(67),
        [sym__digits] = ACTIONS(67),
        [anon_sym_BANG] = ACTIONS(67),
        [anon_sym_DQUOTE] = ACTIONS(67),
        [anon_sym_POUND] = ACTIONS(67),
        [anon_sym_DOLLAR] = ACTIONS(67),
        [anon_sym_PERCENT] = ACTIONS(67),
        [anon_sym_AMP] = ACTIONS(67),
        [anon_sym_SQUOTE] = ACTIONS(67),
        [anon_sym_LPAREN] = ACTIONS(67),
        [anon_sym_RPAREN] = ACTIONS(67),
        [anon_sym_STAR] = ACTIONS(67),
        [anon_sym_PLUS] = ACTIONS(67),
        [anon_sym_COMMA] = ACTIONS(67),
        [anon_sym_DASH] = ACTIONS(67),
        [anon_sym_DOT] = ACTIONS(67),
        [anon_sym_SLASH] = ACTIONS(67),
        [anon_sym_COLON] = ACTIONS(67),
        [anon_sym_SEMI] = ACTIONS(67),
        [anon_sym_LT] = ACTIONS(67),
        [anon_sym_EQ] = ACTIONS(67),
        [anon_sym_GT] = ACTIONS(67),
        [anon_sym_QMARK] = ACTIONS(67),
        [anon_sym_AT] = ACTIONS(67),
        [anon_sym_LBRACK] = ACTIONS(67),
        [anon_sym_BSLASH] = ACTIONS(67),
        [anon_sym_RBRACK] = ACTIONS(67),
        [anon_sym_CARET] = ACTIONS(67),
        [anon_sym__] = ACTIONS(67),
        [anon_sym_BQUOTE] = ACTIONS(67),
        [anon_sym_PIPE] = ACTIONS(67),
        [anon_sym_TILDE] = ACTIONS(67),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(67),
        [anon_sym_anchor] = ACTIONS(67),
        [sym_inline_email_rx] = ACTIONS(67),
        [anon_sym_footnote] = ACTIONS(67),
        [anon_sym_footnoteref] = ACTIONS(67),
        [anon_sym_image] = ACTIONS(67),
        [anon_sym_icon] = ACTIONS(67),
        [anon_sym_link] = ACTIONS(67),
        [anon_sym_mailto] = ACTIONS(67),
        [anon_sym_stem] = ACTIONS(67),
        [anon_sym_latexmath] = ACTIONS(67),
        [anon_sym_asciimath] = ACTIONS(67),
    },
    [6] = {
        [ts_builtin_sym_end] = ACTIONS(69),
        [anon_sym_LBRACE] = ACTIONS(71),
        [anon_sym_RBRACE] = ACTIONS(71),
        [sym__word_no_digit] = ACTIONS(71),
        [sym__digits] = ACTIONS(71),
        [anon_sym_BANG] = ACTIONS(71),
        [anon_sym_DQUOTE] = ACTIONS(71),
        [anon_sym_POUND] = ACTIONS(71),
        [anon_sym_DOLLAR] = ACTIONS(71),
        [anon_sym_PERCENT] = ACTIONS(71),
        [anon_sym_AMP] = ACTIONS(71),
        [anon_sym_SQUOTE] = ACTIONS(71),
        [anon_sym_LPAREN] = ACTIONS(71),
        [anon_sym_RPAREN] = ACTIONS(71),
        [anon_sym_STAR] = ACTIONS(71),
        [anon_sym_PLUS] = ACTIONS(71),
        [anon_sym_COMMA] = ACTIONS(71),
        [anon_sym_DASH] = ACTIONS(71),
        [anon_sym_DOT] = ACTIONS(71),
        [anon_sym_SLASH] = ACTIONS(71),
        [anon_sym_COLON] = ACTIONS(71),
        [anon_sym_SEMI] = ACTIONS(71),
        [anon_sym_LT] = ACTIONS(71),
        [anon_sym_EQ] = ACTIONS(71),
        [anon_sym_GT] = ACTIONS(71),
        [anon_sym_QMARK] = ACTIONS(71),
        [anon_sym_AT] = ACTIONS(71),
        [anon_sym_LBRACK] = ACTIONS(71),
        [anon_sym_BSLASH] = ACTIONS(71),
        [anon_sym_RBRACK] = ACTIONS(71),
        [anon_sym_CARET] = ACTIONS(71),
        [anon_sym__] = ACTIONS(71),
        [anon_sym_BQUOTE] = ACTIONS(71),
        [anon_sym_PIPE] = ACTIONS(71),
        [anon_sym_TILDE] = ACTIONS(71),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(71),
        [anon_sym_anchor] = ACTIONS(71),
        [sym_inline_email_rx] = ACTIONS(71),
        [anon_sym_footnote] = ACTIONS(71),
        [anon_sym_footnoteref] = ACTIONS(71),
        [anon_sym_image] = ACTIONS(71),
        [anon_sym_icon] = ACTIONS(71),
        [anon_sym_link] = ACTIONS(71),
        [anon_sym_mailto] = ACTIONS(71),
        [anon_sym_stem] = ACTIONS(71),
        [anon_sym_latexmath] = ACTIONS(71),
        [anon_sym_asciimath] = ACTIONS(71),
    },
    [7] = {
        [ts_builtin_sym_end] = ACTIONS(73),
        [anon_sym_LBRACE] = ACTIONS(75),
        [anon_sym_RBRACE] = ACTIONS(75),
        [sym__word_no_digit] = ACTIONS(75),
        [sym__digits] = ACTIONS(75),
        [anon_sym_BANG] = ACTIONS(75),
        [anon_sym_DQUOTE] = ACTIONS(75),
        [anon_sym_POUND] = ACTIONS(75),
        [anon_sym_DOLLAR] = ACTIONS(75),
        [anon_sym_PERCENT] = ACTIONS(75),
        [anon_sym_AMP] = ACTIONS(75),
        [anon_sym_SQUOTE] = ACTIONS(75),
        [anon_sym_LPAREN] = ACTIONS(75),
        [anon_sym_RPAREN] = ACTIONS(75),
        [anon_sym_STAR] = ACTIONS(75),
        [anon_sym_PLUS] = ACTIONS(75),
        [anon_sym_COMMA] = ACTIONS(75),
        [anon_sym_DASH] = ACTIONS(75),
        [anon_sym_DOT] = ACTIONS(75),
        [anon_sym_SLASH] = ACTIONS(75),
        [anon_sym_COLON] = ACTIONS(75),
        [anon_sym_SEMI] = ACTIONS(75),
        [anon_sym_LT] = ACTIONS(75),
        [anon_sym_EQ] = ACTIONS(75),
        [anon_sym_GT] = ACTIONS(75),
        [anon_sym_QMARK] = ACTIONS(75),
        [anon_sym_AT] = ACTIONS(75),
        [anon_sym_LBRACK] = ACTIONS(75),
        [anon_sym_BSLASH] = ACTIONS(75),
        [anon_sym_RBRACK] = ACTIONS(75),
        [anon_sym_CARET] = ACTIONS(75),
        [anon_sym__] = ACTIONS(75),
        [anon_sym_BQUOTE] = ACTIONS(75),
        [anon_sym_PIPE] = ACTIONS(75),
        [anon_sym_TILDE] = ACTIONS(75),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(75),
        [anon_sym_anchor] = ACTIONS(75),
        [sym_inline_email_rx] = ACTIONS(75),
        [anon_sym_footnote] = ACTIONS(75),
        [anon_sym_footnoteref] = ACTIONS(75),
        [anon_sym_image] = ACTIONS(75),
        [anon_sym_icon] = ACTIONS(75),
        [anon_sym_link] = ACTIONS(75),
        [anon_sym_mailto] = ACTIONS(75),
        [anon_sym_stem] = ACTIONS(75),
        [anon_sym_latexmath] = ACTIONS(75),
        [anon_sym_asciimath] = ACTIONS(75),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(77),
        [anon_sym_LBRACE] = ACTIONS(79),
        [anon_sym_RBRACE] = ACTIONS(79),
        [sym__word_no_digit] = ACTIONS(79),
        [sym__digits] = ACTIONS(79),
        [anon_sym_BANG] = ACTIONS(79),
        [anon_sym_DQUOTE] = ACTIONS(79),
        [anon_sym_POUND] = ACTIONS(79),
        [anon_sym_DOLLAR] = ACTIONS(79),
        [anon_sym_PERCENT] = ACTIONS(79),
        [anon_sym_AMP] = ACTIONS(79),
        [anon_sym_SQUOTE] = ACTIONS(79),
        [anon_sym_LPAREN] = ACTIONS(79),
        [anon_sym_RPAREN] = ACTIONS(79),
        [anon_sym_STAR] = ACTIONS(79),
        [anon_sym_PLUS] = ACTIONS(79),
        [anon_sym_COMMA] = ACTIONS(79),
        [anon_sym_DASH] = ACTIONS(79),
        [anon_sym_DOT] = ACTIONS(79),
        [anon_sym_SLASH] = ACTIONS(79),
        [anon_sym_COLON] = ACTIONS(79),
        [anon_sym_SEMI] = ACTIONS(79),
        [anon_sym_LT] = ACTIONS(79),
        [anon_sym_EQ] = ACTIONS(79),
        [anon_sym_GT] = ACTIONS(79),
        [anon_sym_QMARK] = ACTIONS(79),
        [anon_sym_AT] = ACTIONS(79),
        [anon_sym_LBRACK] = ACTIONS(79),
        [anon_sym_BSLASH] = ACTIONS(79),
        [anon_sym_RBRACK] = ACTIONS(79),
        [anon_sym_CARET] = ACTIONS(79),
        [anon_sym__] = ACTIONS(79),
        [anon_sym_BQUOTE] = ACTIONS(79),
        [anon_sym_PIPE] = ACTIONS(79),
        [anon_sym_TILDE] = ACTIONS(79),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(79),
        [anon_sym_anchor] = ACTIONS(79),
        [sym_inline_email_rx] = ACTIONS(79),
        [anon_sym_footnote] = ACTIONS(79),
        [anon_sym_footnoteref] = ACTIONS(79),
        [anon_sym_image] = ACTIONS(79),
        [anon_sym_icon] = ACTIONS(79),
        [anon_sym_link] = ACTIONS(79),
        [anon_sym_mailto] = ACTIONS(79),
        [anon_sym_stem] = ACTIONS(79),
        [anon_sym_latexmath] = ACTIONS(79),
        [anon_sym_asciimath] = ACTIONS(79),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(81),
        [anon_sym_LBRACE] = ACTIONS(83),
        [anon_sym_RBRACE] = ACTIONS(83),
        [sym__word_no_digit] = ACTIONS(83),
        [sym__digits] = ACTIONS(83),
        [anon_sym_BANG] = ACTIONS(83),
        [anon_sym_DQUOTE] = ACTIONS(83),
        [anon_sym_POUND] = ACTIONS(83),
        [anon_sym_DOLLAR] = ACTIONS(83),
        [anon_sym_PERCENT] = ACTIONS(83),
        [anon_sym_AMP] = ACTIONS(83),
        [anon_sym_SQUOTE] = ACTIONS(83),
        [anon_sym_LPAREN] = ACTIONS(83),
        [anon_sym_RPAREN] = ACTIONS(83),
        [anon_sym_STAR] = ACTIONS(83),
        [anon_sym_PLUS] = ACTIONS(83),
        [anon_sym_COMMA] = ACTIONS(83),
        [anon_sym_DASH] = ACTIONS(83),
        [anon_sym_DOT] = ACTIONS(83),
        [anon_sym_SLASH] = ACTIONS(83),
        [anon_sym_COLON] = ACTIONS(83),
        [anon_sym_SEMI] = ACTIONS(83),
        [anon_sym_LT] = ACTIONS(83),
        [anon_sym_EQ] = ACTIONS(83),
        [anon_sym_GT] = ACTIONS(83),
        [anon_sym_QMARK] = ACTIONS(83),
        [anon_sym_AT] = ACTIONS(83),
        [anon_sym_LBRACK] = ACTIONS(83),
        [anon_sym_BSLASH] = ACTIONS(83),
        [anon_sym_RBRACK] = ACTIONS(83),
        [anon_sym_CARET] = ACTIONS(83),
        [anon_sym__] = ACTIONS(83),
        [anon_sym_BQUOTE] = ACTIONS(83),
        [anon_sym_PIPE] = ACTIONS(83),
        [anon_sym_TILDE] = ACTIONS(83),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
        [anon_sym_anchor] = ACTIONS(83),
        [sym_inline_email_rx] = ACTIONS(83),
        [anon_sym_footnote] = ACTIONS(83),
        [anon_sym_footnoteref] = ACTIONS(83),
        [anon_sym_image] = ACTIONS(83),
        [anon_sym_icon] = ACTIONS(83),
        [anon_sym_link] = ACTIONS(83),
        [anon_sym_mailto] = ACTIONS(83),
        [anon_sym_stem] = ACTIONS(83),
        [anon_sym_latexmath] = ACTIONS(83),
        [anon_sym_asciimath] = ACTIONS(83),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_RBRACE] = ACTIONS(87),
        [sym__word_no_digit] = ACTIONS(87),
        [sym__digits] = ACTIONS(87),
        [anon_sym_BANG] = ACTIONS(87),
        [anon_sym_DQUOTE] = ACTIONS(87),
        [anon_sym_POUND] = ACTIONS(87),
        [anon_sym_DOLLAR] = ACTIONS(87),
        [anon_sym_PERCENT] = ACTIONS(87),
        [anon_sym_AMP] = ACTIONS(87),
        [anon_sym_SQUOTE] = ACTIONS(87),
        [anon_sym_LPAREN] = ACTIONS(87),
        [anon_sym_RPAREN] = ACTIONS(87),
        [anon_sym_STAR] = ACTIONS(87),
        [anon_sym_PLUS] = ACTIONS(87),
        [anon_sym_COMMA] = ACTIONS(87),
        [anon_sym_DASH] = ACTIONS(87),
        [anon_sym_DOT] = ACTIONS(87),
        [anon_sym_SLASH] = ACTIONS(87),
        [anon_sym_COLON] = ACTIONS(87),
        [anon_sym_SEMI] = ACTIONS(87),
        [anon_sym_LT] = ACTIONS(87),
        [anon_sym_EQ] = ACTIONS(87),
        [anon_sym_GT] = ACTIONS(87),
        [anon_sym_QMARK] = ACTIONS(87),
        [anon_sym_AT] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(87),
        [anon_sym_BSLASH] = ACTIONS(87),
        [anon_sym_RBRACK] = ACTIONS(87),
        [anon_sym_CARET] = ACTIONS(87),
        [anon_sym__] = ACTIONS(87),
        [anon_sym_BQUOTE] = ACTIONS(87),
        [anon_sym_PIPE] = ACTIONS(87),
        [anon_sym_TILDE] = ACTIONS(87),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
        [anon_sym_anchor] = ACTIONS(87),
        [sym_inline_email_rx] = ACTIONS(87),
        [anon_sym_footnote] = ACTIONS(87),
        [anon_sym_footnoteref] = ACTIONS(87),
        [anon_sym_image] = ACTIONS(87),
        [anon_sym_icon] = ACTIONS(87),
        [anon_sym_link] = ACTIONS(87),
        [anon_sym_mailto] = ACTIONS(87),
        [anon_sym_stem] = ACTIONS(87),
        [anon_sym_latexmath] = ACTIONS(87),
        [anon_sym_asciimath] = ACTIONS(87),
    },
    [11] = {
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
        [anon_sym_footnote] = ACTIONS(61),
        [anon_sym_footnoteref] = ACTIONS(61),
        [anon_sym_image] = ACTIONS(61),
        [anon_sym_icon] = ACTIONS(61),
        [anon_sym_link] = ACTIONS(61),
        [anon_sym_mailto] = ACTIONS(61),
        [anon_sym_stem] = ACTIONS(61),
        [anon_sym_latexmath] = ACTIONS(61),
        [anon_sym_asciimath] = ACTIONS(61),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(89),
        [anon_sym_LBRACE] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(91),
        [sym__word_no_digit] = ACTIONS(91),
        [sym__digits] = ACTIONS(91),
        [anon_sym_BANG] = ACTIONS(91),
        [anon_sym_DQUOTE] = ACTIONS(91),
        [anon_sym_POUND] = ACTIONS(91),
        [anon_sym_DOLLAR] = ACTIONS(91),
        [anon_sym_PERCENT] = ACTIONS(91),
        [anon_sym_AMP] = ACTIONS(91),
        [anon_sym_SQUOTE] = ACTIONS(91),
        [anon_sym_LPAREN] = ACTIONS(91),
        [anon_sym_RPAREN] = ACTIONS(91),
        [anon_sym_STAR] = ACTIONS(91),
        [anon_sym_PLUS] = ACTIONS(91),
        [anon_sym_COMMA] = ACTIONS(91),
        [anon_sym_DASH] = ACTIONS(91),
        [anon_sym_DOT] = ACTIONS(91),
        [anon_sym_SLASH] = ACTIONS(91),
        [anon_sym_COLON] = ACTIONS(91),
        [anon_sym_SEMI] = ACTIONS(91),
        [anon_sym_LT] = ACTIONS(91),
        [anon_sym_EQ] = ACTIONS(91),
        [anon_sym_GT] = ACTIONS(91),
        [anon_sym_QMARK] = ACTIONS(91),
        [anon_sym_AT] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(91),
        [anon_sym_BSLASH] = ACTIONS(91),
        [anon_sym_RBRACK] = ACTIONS(91),
        [anon_sym_CARET] = ACTIONS(91),
        [anon_sym__] = ACTIONS(91),
        [anon_sym_BQUOTE] = ACTIONS(91),
        [anon_sym_PIPE] = ACTIONS(91),
        [anon_sym_TILDE] = ACTIONS(91),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
        [anon_sym_anchor] = ACTIONS(91),
        [sym_inline_email_rx] = ACTIONS(91),
        [anon_sym_footnote] = ACTIONS(91),
        [anon_sym_footnoteref] = ACTIONS(91),
        [anon_sym_image] = ACTIONS(91),
        [anon_sym_icon] = ACTIONS(91),
        [anon_sym_link] = ACTIONS(91),
        [anon_sym_mailto] = ACTIONS(91),
        [anon_sym_stem] = ACTIONS(91),
        [anon_sym_latexmath] = ACTIONS(91),
        [anon_sym_asciimath] = ACTIONS(91),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(93),
        [anon_sym_LBRACE] = ACTIONS(95),
        [anon_sym_RBRACE] = ACTIONS(95),
        [sym__word_no_digit] = ACTIONS(95),
        [sym__digits] = ACTIONS(95),
        [anon_sym_BANG] = ACTIONS(95),
        [anon_sym_DQUOTE] = ACTIONS(95),
        [anon_sym_POUND] = ACTIONS(95),
        [anon_sym_DOLLAR] = ACTIONS(95),
        [anon_sym_PERCENT] = ACTIONS(95),
        [anon_sym_AMP] = ACTIONS(95),
        [anon_sym_SQUOTE] = ACTIONS(95),
        [anon_sym_LPAREN] = ACTIONS(95),
        [anon_sym_RPAREN] = ACTIONS(95),
        [anon_sym_STAR] = ACTIONS(95),
        [anon_sym_PLUS] = ACTIONS(95),
        [anon_sym_COMMA] = ACTIONS(95),
        [anon_sym_DASH] = ACTIONS(95),
        [anon_sym_DOT] = ACTIONS(95),
        [anon_sym_SLASH] = ACTIONS(95),
        [anon_sym_COLON] = ACTIONS(95),
        [anon_sym_SEMI] = ACTIONS(95),
        [anon_sym_LT] = ACTIONS(95),
        [anon_sym_EQ] = ACTIONS(95),
        [anon_sym_GT] = ACTIONS(95),
        [anon_sym_QMARK] = ACTIONS(95),
        [anon_sym_AT] = ACTIONS(95),
        [anon_sym_LBRACK] = ACTIONS(95),
        [anon_sym_BSLASH] = ACTIONS(95),
        [anon_sym_RBRACK] = ACTIONS(95),
        [anon_sym_CARET] = ACTIONS(95),
        [anon_sym__] = ACTIONS(95),
        [anon_sym_BQUOTE] = ACTIONS(95),
        [anon_sym_PIPE] = ACTIONS(95),
        [anon_sym_TILDE] = ACTIONS(95),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(95),
        [anon_sym_anchor] = ACTIONS(95),
        [sym_inline_email_rx] = ACTIONS(95),
        [anon_sym_footnote] = ACTIONS(95),
        [anon_sym_footnoteref] = ACTIONS(95),
        [anon_sym_image] = ACTIONS(95),
        [anon_sym_icon] = ACTIONS(95),
        [anon_sym_link] = ACTIONS(95),
        [anon_sym_mailto] = ACTIONS(95),
        [anon_sym_stem] = ACTIONS(95),
        [anon_sym_latexmath] = ACTIONS(95),
        [anon_sym_asciimath] = ACTIONS(95),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(97),
        [anon_sym_LBRACE] = ACTIONS(99),
        [anon_sym_RBRACE] = ACTIONS(99),
        [sym__word_no_digit] = ACTIONS(99),
        [sym__digits] = ACTIONS(99),
        [anon_sym_BANG] = ACTIONS(99),
        [anon_sym_DQUOTE] = ACTIONS(99),
        [anon_sym_POUND] = ACTIONS(99),
        [anon_sym_DOLLAR] = ACTIONS(99),
        [anon_sym_PERCENT] = ACTIONS(99),
        [anon_sym_AMP] = ACTIONS(99),
        [anon_sym_SQUOTE] = ACTIONS(99),
        [anon_sym_LPAREN] = ACTIONS(99),
        [anon_sym_RPAREN] = ACTIONS(99),
        [anon_sym_STAR] = ACTIONS(99),
        [anon_sym_PLUS] = ACTIONS(99),
        [anon_sym_COMMA] = ACTIONS(99),
        [anon_sym_DASH] = ACTIONS(99),
        [anon_sym_DOT] = ACTIONS(99),
        [anon_sym_SLASH] = ACTIONS(99),
        [anon_sym_COLON] = ACTIONS(99),
        [anon_sym_SEMI] = ACTIONS(99),
        [anon_sym_LT] = ACTIONS(99),
        [anon_sym_EQ] = ACTIONS(99),
        [anon_sym_GT] = ACTIONS(99),
        [anon_sym_QMARK] = ACTIONS(99),
        [anon_sym_AT] = ACTIONS(99),
        [anon_sym_LBRACK] = ACTIONS(99),
        [anon_sym_BSLASH] = ACTIONS(99),
        [anon_sym_RBRACK] = ACTIONS(99),
        [anon_sym_CARET] = ACTIONS(99),
        [anon_sym__] = ACTIONS(99),
        [anon_sym_BQUOTE] = ACTIONS(99),
        [anon_sym_PIPE] = ACTIONS(99),
        [anon_sym_TILDE] = ACTIONS(99),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(99),
        [anon_sym_anchor] = ACTIONS(99),
        [sym_inline_email_rx] = ACTIONS(99),
        [anon_sym_footnote] = ACTIONS(99),
        [anon_sym_footnoteref] = ACTIONS(99),
        [anon_sym_image] = ACTIONS(99),
        [anon_sym_icon] = ACTIONS(99),
        [anon_sym_link] = ACTIONS(99),
        [anon_sym_mailto] = ACTIONS(99),
        [anon_sym_stem] = ACTIONS(99),
        [anon_sym_latexmath] = ACTIONS(99),
        [anon_sym_asciimath] = ACTIONS(99),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(101),
        [anon_sym_LBRACE] = ACTIONS(103),
        [anon_sym_RBRACE] = ACTIONS(103),
        [sym__word_no_digit] = ACTIONS(103),
        [sym__digits] = ACTIONS(103),
        [anon_sym_BANG] = ACTIONS(103),
        [anon_sym_DQUOTE] = ACTIONS(103),
        [anon_sym_POUND] = ACTIONS(103),
        [anon_sym_DOLLAR] = ACTIONS(103),
        [anon_sym_PERCENT] = ACTIONS(103),
        [anon_sym_AMP] = ACTIONS(103),
        [anon_sym_SQUOTE] = ACTIONS(103),
        [anon_sym_LPAREN] = ACTIONS(103),
        [anon_sym_RPAREN] = ACTIONS(103),
        [anon_sym_STAR] = ACTIONS(103),
        [anon_sym_PLUS] = ACTIONS(103),
        [anon_sym_COMMA] = ACTIONS(103),
        [anon_sym_DASH] = ACTIONS(103),
        [anon_sym_DOT] = ACTIONS(103),
        [anon_sym_SLASH] = ACTIONS(103),
        [anon_sym_COLON] = ACTIONS(103),
        [anon_sym_SEMI] = ACTIONS(103),
        [anon_sym_LT] = ACTIONS(103),
        [anon_sym_EQ] = ACTIONS(103),
        [anon_sym_GT] = ACTIONS(103),
        [anon_sym_QMARK] = ACTIONS(103),
        [anon_sym_AT] = ACTIONS(103),
        [anon_sym_LBRACK] = ACTIONS(103),
        [anon_sym_BSLASH] = ACTIONS(103),
        [anon_sym_RBRACK] = ACTIONS(103),
        [anon_sym_CARET] = ACTIONS(103),
        [anon_sym__] = ACTIONS(103),
        [anon_sym_BQUOTE] = ACTIONS(103),
        [anon_sym_PIPE] = ACTIONS(103),
        [anon_sym_TILDE] = ACTIONS(103),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
        [anon_sym_anchor] = ACTIONS(103),
        [sym_inline_email_rx] = ACTIONS(103),
        [anon_sym_footnote] = ACTIONS(103),
        [anon_sym_footnoteref] = ACTIONS(103),
        [anon_sym_image] = ACTIONS(103),
        [anon_sym_icon] = ACTIONS(103),
        [anon_sym_link] = ACTIONS(103),
        [anon_sym_mailto] = ACTIONS(103),
        [anon_sym_stem] = ACTIONS(103),
        [anon_sym_latexmath] = ACTIONS(103),
        [anon_sym_asciimath] = ACTIONS(103),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_LBRACE] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(107),
        [sym__word_no_digit] = ACTIONS(107),
        [sym__digits] = ACTIONS(107),
        [anon_sym_BANG] = ACTIONS(107),
        [anon_sym_DQUOTE] = ACTIONS(107),
        [anon_sym_POUND] = ACTIONS(107),
        [anon_sym_DOLLAR] = ACTIONS(107),
        [anon_sym_PERCENT] = ACTIONS(107),
        [anon_sym_AMP] = ACTIONS(107),
        [anon_sym_SQUOTE] = ACTIONS(107),
        [anon_sym_LPAREN] = ACTIONS(107),
        [anon_sym_RPAREN] = ACTIONS(107),
        [anon_sym_STAR] = ACTIONS(107),
        [anon_sym_PLUS] = ACTIONS(107),
        [anon_sym_COMMA] = ACTIONS(107),
        [anon_sym_DASH] = ACTIONS(107),
        [anon_sym_DOT] = ACTIONS(107),
        [anon_sym_SLASH] = ACTIONS(107),
        [anon_sym_COLON] = ACTIONS(107),
        [anon_sym_SEMI] = ACTIONS(107),
        [anon_sym_LT] = ACTIONS(107),
        [anon_sym_EQ] = ACTIONS(107),
        [anon_sym_GT] = ACTIONS(107),
        [anon_sym_QMARK] = ACTIONS(107),
        [anon_sym_AT] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_BSLASH] = ACTIONS(107),
        [anon_sym_RBRACK] = ACTIONS(107),
        [anon_sym_CARET] = ACTIONS(107),
        [anon_sym__] = ACTIONS(107),
        [anon_sym_BQUOTE] = ACTIONS(107),
        [anon_sym_PIPE] = ACTIONS(107),
        [anon_sym_TILDE] = ACTIONS(107),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(107),
        [anon_sym_anchor] = ACTIONS(107),
        [sym_inline_email_rx] = ACTIONS(107),
        [anon_sym_footnote] = ACTIONS(107),
        [anon_sym_footnoteref] = ACTIONS(107),
        [anon_sym_image] = ACTIONS(107),
        [anon_sym_icon] = ACTIONS(107),
        [anon_sym_link] = ACTIONS(107),
        [anon_sym_mailto] = ACTIONS(107),
        [anon_sym_stem] = ACTIONS(107),
        [anon_sym_latexmath] = ACTIONS(107),
        [anon_sym_asciimath] = ACTIONS(107),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [anon_sym_RBRACE] = ACTIONS(111),
        [sym__word_no_digit] = ACTIONS(111),
        [sym__digits] = ACTIONS(111),
        [anon_sym_BANG] = ACTIONS(111),
        [anon_sym_DQUOTE] = ACTIONS(111),
        [anon_sym_POUND] = ACTIONS(111),
        [anon_sym_DOLLAR] = ACTIONS(111),
        [anon_sym_PERCENT] = ACTIONS(111),
        [anon_sym_AMP] = ACTIONS(111),
        [anon_sym_SQUOTE] = ACTIONS(111),
        [anon_sym_LPAREN] = ACTIONS(111),
        [anon_sym_RPAREN] = ACTIONS(111),
        [anon_sym_STAR] = ACTIONS(111),
        [anon_sym_PLUS] = ACTIONS(111),
        [anon_sym_COMMA] = ACTIONS(111),
        [anon_sym_DASH] = ACTIONS(111),
        [anon_sym_DOT] = ACTIONS(111),
        [anon_sym_SLASH] = ACTIONS(111),
        [anon_sym_COLON] = ACTIONS(111),
        [anon_sym_SEMI] = ACTIONS(111),
        [anon_sym_LT] = ACTIONS(111),
        [anon_sym_EQ] = ACTIONS(111),
        [anon_sym_GT] = ACTIONS(111),
        [anon_sym_QMARK] = ACTIONS(111),
        [anon_sym_AT] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_BSLASH] = ACTIONS(111),
        [anon_sym_RBRACK] = ACTIONS(111),
        [anon_sym_CARET] = ACTIONS(111),
        [anon_sym__] = ACTIONS(111),
        [anon_sym_BQUOTE] = ACTIONS(111),
        [anon_sym_PIPE] = ACTIONS(111),
        [anon_sym_TILDE] = ACTIONS(111),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(111),
        [anon_sym_anchor] = ACTIONS(111),
        [sym_inline_email_rx] = ACTIONS(111),
        [anon_sym_footnote] = ACTIONS(111),
        [anon_sym_footnoteref] = ACTIONS(111),
        [anon_sym_image] = ACTIONS(111),
        [anon_sym_icon] = ACTIONS(111),
        [anon_sym_link] = ACTIONS(111),
        [anon_sym_mailto] = ACTIONS(111),
        [anon_sym_stem] = ACTIONS(111),
        [anon_sym_latexmath] = ACTIONS(111),
        [anon_sym_asciimath] = ACTIONS(111),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [anon_sym_RBRACE] = ACTIONS(115),
        [sym__word_no_digit] = ACTIONS(115),
        [sym__digits] = ACTIONS(115),
        [anon_sym_BANG] = ACTIONS(115),
        [anon_sym_DQUOTE] = ACTIONS(115),
        [anon_sym_POUND] = ACTIONS(115),
        [anon_sym_DOLLAR] = ACTIONS(115),
        [anon_sym_PERCENT] = ACTIONS(115),
        [anon_sym_AMP] = ACTIONS(115),
        [anon_sym_SQUOTE] = ACTIONS(115),
        [anon_sym_LPAREN] = ACTIONS(115),
        [anon_sym_RPAREN] = ACTIONS(115),
        [anon_sym_STAR] = ACTIONS(115),
        [anon_sym_PLUS] = ACTIONS(115),
        [anon_sym_COMMA] = ACTIONS(115),
        [anon_sym_DASH] = ACTIONS(115),
        [anon_sym_DOT] = ACTIONS(115),
        [anon_sym_SLASH] = ACTIONS(115),
        [anon_sym_COLON] = ACTIONS(115),
        [anon_sym_SEMI] = ACTIONS(115),
        [anon_sym_LT] = ACTIONS(115),
        [anon_sym_EQ] = ACTIONS(115),
        [anon_sym_GT] = ACTIONS(115),
        [anon_sym_QMARK] = ACTIONS(115),
        [anon_sym_AT] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(115),
        [anon_sym_BSLASH] = ACTIONS(115),
        [anon_sym_RBRACK] = ACTIONS(115),
        [anon_sym_CARET] = ACTIONS(115),
        [anon_sym__] = ACTIONS(115),
        [anon_sym_BQUOTE] = ACTIONS(115),
        [anon_sym_PIPE] = ACTIONS(115),
        [anon_sym_TILDE] = ACTIONS(115),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(115),
        [anon_sym_anchor] = ACTIONS(115),
        [sym_inline_email_rx] = ACTIONS(115),
        [anon_sym_footnote] = ACTIONS(115),
        [anon_sym_footnoteref] = ACTIONS(115),
        [anon_sym_image] = ACTIONS(115),
        [anon_sym_icon] = ACTIONS(115),
        [anon_sym_link] = ACTIONS(115),
        [anon_sym_mailto] = ACTIONS(115),
        [anon_sym_stem] = ACTIONS(115),
        [anon_sym_latexmath] = ACTIONS(115),
        [anon_sym_asciimath] = ACTIONS(115),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 3,
    ACTIONS(117),
    1,
    anon_sym_RBRACK,
    STATE(19),
    1,
    aux_sym_inline_image_macro_repeat1,
    ACTIONS(119),
    3,
    aux_sym_inline_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [12] = 3,
    ACTIONS(122),
    1,
    anon_sym_RBRACK,
    STATE(21),
    1,
    aux_sym_inline_image_macro_repeat1,
    ACTIONS(124),
    3,
    aux_sym_inline_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [24] = 3,
    ACTIONS(126),
    1,
    anon_sym_RBRACK,
    STATE(19),
    1,
    aux_sym_inline_image_macro_repeat1,
    ACTIONS(128),
    3,
    aux_sym_inline_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [36] = 2,
    ACTIONS(130),
    1,
    aux_sym_replacement_token1,
    ACTIONS(132),
    1,
    anon_sym_LBRACK,
    [43] = 2,
    ACTIONS(134),
    1,
    aux_sym_inline_anchor_rx_token2,
    ACTIONS(136),
    1,
    aux_sym_inline_footnote_macro_token1,
    [50] = 2,
    ACTIONS(138),
    1,
    anon_sym_COMMA,
    ACTIONS(140),
    1,
    anon_sym_RBRACK,
    [57] = 2,
    ACTIONS(142),
    1,
    anon_sym_COMMA,
    ACTIONS(144),
    1,
    anon_sym_RBRACK_RBRACK,
    [64] = 2,
    ACTIONS(146),
    1,
    aux_sym_inline_anchor_rx_token2,
    ACTIONS(148),
    1,
    aux_sym_inline_footnote_macro_token1,
    [71] = 2,
    ACTIONS(150),
    1,
    anon_sym_COMMA,
    ACTIONS(152),
    1,
    anon_sym_RBRACK,
    [78] = 1,
    ACTIONS(154),
    1,
    anon_sym_RBRACE,
    [82] = 1,
    ACTIONS(156),
    1,
    aux_sym_inline_footnote_macro_token2,
    [86] = 1,
    ACTIONS(158),
    1,
    anon_sym_RBRACK_RBRACK,
    [90] = 1,
    ACTIONS(160),
    1,
    aux_sym_inline_anchor_rx_token2,
    [94] = 1,
    ACTIONS(162),
    1,
    aux_sym_replacement_token1,
    [98] = 1,
    ACTIONS(152),
    1,
    anon_sym_RBRACK,
    [102] = 1,
    ACTIONS(164),
    1,
    anon_sym_LBRACK,
    [106] = 1,
    ACTIONS(166),
    1,
    anon_sym_LBRACK,
    [110] = 1,
    ACTIONS(168),
    1,
    aux_sym_inline_anchor_rx_token2,
    [114] = 1,
    ACTIONS(170),
    1,
    anon_sym_RBRACK,
    [118] = 1,
    ACTIONS(172),
    1,
    anon_sym_LBRACK,
    [122] = 1,
    ACTIONS(174),
    1,
    anon_sym_RBRACK,
    [126] = 1,
    ACTIONS(140),
    1,
    anon_sym_RBRACK,
    [130] = 1,
    ACTIONS(176),
    1,
    anon_sym_LBRACK,
    [134] = 1,
    ACTIONS(178),
    1,
    aux_sym_inline_anchor_rx_token1,
    [138] = 1,
    ACTIONS(180),
    1,
    aux_sym_inline_anchor_rx_token2,
    [142] = 1,
    ACTIONS(182),
    1,
    anon_sym_LBRACK,
    [146] = 1,
    ACTIONS(184),
    1,
    aux_sym_inline_link_macro_token1,
    [150] = 1,
    ACTIONS(186),
    1,
    anon_sym_RBRACK,
    [154] = 1,
    ACTIONS(188),
    1,
    aux_sym_inline_image_macro_token1,
    [158] = 1,
    ACTIONS(190),
    1,
    aux_sym_replacement_token1,
    [162] = 1,
    ACTIONS(192),
    1,
    ts_builtin_sym_end,
    [166] = 1,
    ACTIONS(194),
    1,
    aux_sym_inline_footnote_macro_token2,
    [170] = 1,
    ACTIONS(196),
    1,
    anon_sym_RBRACK,
    [174] = 1,
    ACTIONS(198),
    1,
    anon_sym_COLON,
    [178] = 1,
    ACTIONS(200),
    1,
    anon_sym_COLON,
    [182] = 1,
    ACTIONS(202),
    1,
    anon_sym_COLON,
    [186] = 1,
    ACTIONS(204),
    1,
    anon_sym_RBRACK,
    [190] = 1,
    ACTIONS(206),
    1,
    anon_sym_COLON,
    [194] = 1,
    ACTIONS(208),
    1,
    anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(19)] = 0,
    [SMALL_STATE(20)] = 12,
    [SMALL_STATE(21)] = 24,
    [SMALL_STATE(22)] = 36,
    [SMALL_STATE(23)] = 43,
    [SMALL_STATE(24)] = 50,
    [SMALL_STATE(25)] = 57,
    [SMALL_STATE(26)] = 64,
    [SMALL_STATE(27)] = 71,
    [SMALL_STATE(28)] = 78,
    [SMALL_STATE(29)] = 82,
    [SMALL_STATE(30)] = 86,
    [SMALL_STATE(31)] = 90,
    [SMALL_STATE(32)] = 94,
    [SMALL_STATE(33)] = 98,
    [SMALL_STATE(34)] = 102,
    [SMALL_STATE(35)] = 106,
    [SMALL_STATE(36)] = 110,
    [SMALL_STATE(37)] = 114,
    [SMALL_STATE(38)] = 118,
    [SMALL_STATE(39)] = 122,
    [SMALL_STATE(40)] = 126,
    [SMALL_STATE(41)] = 130,
    [SMALL_STATE(42)] = 134,
    [SMALL_STATE(43)] = 138,
    [SMALL_STATE(44)] = 142,
    [SMALL_STATE(45)] = 146,
    [SMALL_STATE(46)] = 150,
    [SMALL_STATE(47)] = 154,
    [SMALL_STATE(48)] = 158,
    [SMALL_STATE(49)] = 162,
    [SMALL_STATE(50)] = 166,
    [SMALL_STATE(51)] = 170,
    [SMALL_STATE(52)] = 174,
    [SMALL_STATE(53)] = 178,
    [SMALL_STATE(54)] = 182,
    [SMALL_STATE(55)] = 186,
    [SMALL_STATE(56)] = 190,
    [SMALL_STATE(57)] = 194,
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
    SHIFT(17),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(32),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(57),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(2),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(56),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(54),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(53),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(52),
    [23] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(3),
    [27] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    [29] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(4),
    [32] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(11),
    [35] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(17),
    [38] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(32),
    [41] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(57),
    [44] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(3),
    [47] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(56),
    [50] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(54),
    [53] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(53),
    [56] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(52),
    [59] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [61] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [63] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(28),
    [65] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 0),
    [67] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 0),
    [69] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 5, 0, 0),
    [71] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 5, 0, 0),
    [73] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_link_macro, 6, 0, 0),
    [75] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_link_macro, 6, 0, 0),
    [77] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_image_macro, 6, 0, 0),
    [79] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_image_macro, 6, 0, 0),
    [81] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 6, 0, 1),
    [83] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 6, 0, 1),
    [85] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 6, 0, 0),
    [87] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 6, 0, 0),
    [89] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 8, 0, 1),
    [91] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 8, 0, 1),
    [93] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_math_macro, 5, 0, 0),
    [95] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_math_macro, 5, 0, 0),
    [97] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 7, 0, 0),
    [99] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 7, 0, 0),
    [101] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_image_macro, 5, 0, 0),
    [103] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_image_macro, 5, 0, 0),
    [105] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 5, 0, 0),
    [107] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 5, 0, 0),
    [109] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_word, 1, 0, 0),
    [111] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_word, 1, 0, 0),
    [113] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 3, 0, 0),
    [115] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 3, 0, 0),
    [117] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_image_macro_repeat1, 2, 0, 0),
    [119] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_image_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(19),
    [122] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(15),
    [124] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(21),
    [126] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(8),
    [128] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(19),
    [130] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [132] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [134] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [136] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(24),
    [138] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [140] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [142] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [144] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [146] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(33),
    [148] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(27),
    [150] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(29),
    [152] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [154] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [156] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [158] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [160] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [162] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [164] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [166] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [168] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [170] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [172] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [174] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [176] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [178] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [180] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [182] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [184] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [186] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [188] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [190] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(41),
    [192] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [194] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [196] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [198] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [200] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [202] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [204] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [206] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [208] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
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
