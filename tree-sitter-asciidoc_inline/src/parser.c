#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
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
    anon_sym_kbd = 52,
    anon_sym_btn = 53,
    aux_sym_key_token1 = 54,
    anon_sym_link = 55,
    anon_sym_mailto = 56,
    aux_sym_inline_link_macro_token1 = 57,
    anon_sym_stem = 58,
    anon_sym_latexmath = 59,
    anon_sym_asciimath = 60,
    sym_inline = 61,
    sym_replacement = 62,
    sym_word = 63,
    sym_punctuation = 64,
    sym_inline_anchor_rx = 65,
    sym_inline_footnote_macro = 66,
    sym_inline_image_macro = 67,
    sym_inline_kbd_macro = 68,
    sym_key = 69,
    sym_inline_link_macro = 70,
    sym_inline_math_macro = 71,
    aux_sym_inline_repeat1 = 72,
    aux_sym_inline_image_macro_repeat1 = 73,
    aux_sym_inline_kbd_macro_repeat1 = 74,
    aux_sym_inline_kbd_macro_repeat2 = 75,
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
    [anon_sym_kbd] = "kbd",
    [anon_sym_btn] = "btn",
    [aux_sym_key_token1] = "key_token1",
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
    [sym_inline_kbd_macro] = "inline_kbd_macro",
    [sym_key] = "key",
    [sym_inline_link_macro] = "inline_link_macro",
    [sym_inline_math_macro] = "inline_math_macro",
    [aux_sym_inline_repeat1] = "inline_repeat1",
    [aux_sym_inline_image_macro_repeat1] = "inline_image_macro_repeat1",
    [aux_sym_inline_kbd_macro_repeat1] = "inline_kbd_macro_repeat1",
    [aux_sym_inline_kbd_macro_repeat2] = "inline_kbd_macro_repeat2",
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
    [anon_sym_kbd] = anon_sym_kbd,
    [anon_sym_btn] = anon_sym_btn,
    [aux_sym_key_token1] = aux_sym_key_token1,
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
    [sym_inline_kbd_macro] = sym_inline_kbd_macro,
    [sym_key] = sym_key,
    [sym_inline_link_macro] = sym_inline_link_macro,
    [sym_inline_math_macro] = sym_inline_math_macro,
    [aux_sym_inline_repeat1] = aux_sym_inline_repeat1,
    [aux_sym_inline_image_macro_repeat1] = aux_sym_inline_image_macro_repeat1,
    [aux_sym_inline_kbd_macro_repeat1] = aux_sym_inline_kbd_macro_repeat1,
    [aux_sym_inline_kbd_macro_repeat2] = aux_sym_inline_kbd_macro_repeat2,
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
    [anon_sym_kbd] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_btn] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_key_token1] = {
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
    [sym_inline_image_macro] = {
        .visible = true,
        .named = true,
    },
    [sym_inline_kbd_macro] = {
        .visible = true,
        .named = true,
    },
    [sym_key] = {
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
    [aux_sym_inline_kbd_macro_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_inline_kbd_macro_repeat2] = {
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
    [58] = 58,
    [59] = 59,
    [60] = 60,
    [61] = 61,
    [62] = 62,
    [63] = 63,
    [64] = 64,
    [65] = 65,
    [66] = 66,
    [67] = 67,
    [68] = 68,
    [69] = 69,
    [70] = 70,
    [71] = 71,
    [72] = 72,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(52);
            ADVANCE_MAP(
                '!', 164,
                '"', 165,
                '#', 166,
                '$', 167,
                '%', 168,
                '&', 169,
                '\'', 170,
                '(', 171,
                ')', 172,
                '*', 173,
                '+', 175,
                ',', 176,
                '-', 177,
                '.', 178,
                '/', 179,
                ':', 180,
                ';', 181,
                '<', 182,
                '=', 183,
                '>', 184,
                '?', 185,
                '@', 186,
                '[', 188,
                '\\', 189,
                ']', 190,
                '^', 191,
                '_', 194,
                '`', 196,
                'a', 82,
                'b', 94,
                'f', 89,
                'i', 62,
                'k', 59,
                'l', 56,
                'm', 54,
                's', 95,
                '{', 53,
                '|', 197,
                '}', 109,
                '~', 198,
                0x0b, 160,
                '\f', 160,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(104);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0)
                ADVANCE(161);
            END_STATE();
        case 1:
            if(lookahead == '"')
                ADVANCE(35);
            if(lookahead == '\\')
                ADVANCE(50);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 2:
            if(lookahead == '+')
                ADVANCE(174);
            if(lookahead == ',')
                ADVANCE(176);
            if(lookahead == ':')
                ADVANCE(180);
            if(lookahead == '[')
                ADVANCE(187);
            if(lookahead == '\\')
                ADVANCE(41);
            if(lookahead == ']')
                ADVANCE(190);
            if(lookahead == '}')
                ADVANCE(108);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(2);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(232);
            END_STATE();
        case 3:
            if(lookahead == ',')
                ADVANCE(176);
            if(lookahead == '[')
                ADVANCE(187);
            if(lookahead == ']')
                ADVANCE(42);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(3);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(107);
            END_STATE();
        case 4:
            if(lookahead == '-')
                ADVANCE(5);
            if(lookahead == '.')
                ADVANCE(48);
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
                ADVANCE(209);
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
                ADVANCE(208);
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
                ADVANCE(208);
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
                ADVANCE(208);
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
                ADVANCE(208);
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
                ADVANCE(208);
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
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 16:
            if(lookahead == '.')
                ADVANCE(49);
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
                ADVANCE(210);
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
                ADVANCE(210);
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
                ADVANCE(224);
            if(lookahead == ']')
                ADVANCE(190);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(225);
            if(lookahead != 0)
                ADVANCE(223);
            END_STATE();
        case 41:
            if(lookahead == ']')
                ADVANCE(227);
            END_STATE();
        case 42:
            if(lookahead == ']')
                ADVANCE(202);
            END_STATE();
        case 43:
            if(lookahead == '_')
                ADVANCE(43);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 44:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(215);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(216);
            END_STATE();
        case 45:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(200);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(201);
            END_STATE();
        case 46:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(46);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(237);
            END_STATE();
        case 47:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(221);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(222);
            END_STATE();
        case 48:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(209);
            END_STATE();
        case 49:
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
        case 50:
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 51:
            if(eof)
                ADVANCE(52);
            ADVANCE_MAP(
                '!', 164,
                '"', 165,
                '#', 166,
                '$', 167,
                '%', 168,
                '&', 169,
                '\'', 170,
                '(', 171,
                ')', 172,
                '*', 173,
                '+', 175,
                ',', 176,
                '-', 177,
                '.', 178,
                '/', 179,
                ':', 180,
                ';', 181,
                '<', 182,
                '=', 183,
                '>', 184,
                '?', 185,
                '@', 186,
                '[', 188,
                '\\', 189,
                ']', 190,
                '^', 191,
                '_', 195,
                '`', 196,
                'a', 138,
                'b', 150,
                'f', 145,
                'i', 118,
                'k', 115,
                'l', 112,
                'm', 110,
                's', 151,
                '{', 53,
                '|', 197,
                '}', 109,
                '~', 198,
                0x0b, 162,
                '\f', 162,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(51);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(163);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
            if(lookahead != 0)
                ADVANCE(161);
            END_STATE();
        case 52:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 53:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(49);
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
        case 54:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'a')
                ADVANCE(74);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 55:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'a')
                ADVANCE(70);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 56:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'a')
                ADVANCE(96);
            if(lookahead == 'i')
                ADVANCE(84);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 57:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'a')
                ADVANCE(97);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 58:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'a')
                ADVANCE(98);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 59:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'b')
                ADVANCE(63);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 60:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'c')
                ADVANCE(73);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 61:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'c')
                ADVANCE(76);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 62:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'c')
                ADVANCE(90);
            if(lookahead == 'm')
                ADVANCE(55);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 63:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'd')
                ADVANCE(228);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 64:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'e')
                ADVANCE(79);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 65:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'e')
                ADVANCE(102);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 66:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'e')
                ADVANCE(217);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 67:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'e')
                ADVANCE(211);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 68:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'e')
                ADVANCE(69);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 69:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'f')
                ADVANCE(213);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 70:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'g')
                ADVANCE(66);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 71:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'h')
                ADVANCE(242);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 72:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'h')
                ADVANCE(240);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 73:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'h')
                ADVANCE(87);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 74:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'i')
                ADVANCE(78);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 75:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'i')
                ADVANCE(80);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 76:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'i')
                ADVANCE(75);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 77:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'k')
                ADVANCE(233);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 78:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'l')
                ADVANCE(101);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 79:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'm')
                ADVANCE(238);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 80:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'm')
                ADVANCE(57);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 81:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'm')
                ADVANCE(58);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 82:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'n')
                ADVANCE(60);
            if(lookahead == 's')
                ADVANCE(61);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 83:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'n')
                ADVANCE(230);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 84:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'n')
                ADVANCE(77);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 85:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'n')
                ADVANCE(219);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 86:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'n')
                ADVANCE(91);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 87:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'o')
                ADVANCE(93);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 88:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'o')
                ADVANCE(235);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 89:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'o')
                ADVANCE(92);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 90:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'o')
                ADVANCE(85);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 91:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'o')
                ADVANCE(100);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 92:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'o')
                ADVANCE(99);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 93:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'r')
                ADVANCE(203);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 94:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 't')
                ADVANCE(83);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 95:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 't')
                ADVANCE(64);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 96:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 't')
                ADVANCE(65);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 97:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 't')
                ADVANCE(71);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 98:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 't')
                ADVANCE(72);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 99:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 't')
                ADVANCE(86);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 100:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 't')
                ADVANCE(67);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 101:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 't')
                ADVANCE(88);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 102:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'x')
                ADVANCE(81);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 103:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(106);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(103);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 104:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(104);
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
                ADVANCE(107);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(105);
            END_STATE();
        case 105:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(49);
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
                ADVANCE(107);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(105);
            END_STATE();
        case 106:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(106);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(107);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 107:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(107);
            END_STATE();
        case 108:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 109:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            if(lookahead == '.')
                ADVANCE(49);
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
        case 110:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(130);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 111:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(126);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 112:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(152);
            if(lookahead == 'i')
                ADVANCE(140);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 113:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(153);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 114:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(154);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 115:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'b')
                ADVANCE(119);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 116:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'c')
                ADVANCE(129);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 117:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'c')
                ADVANCE(132);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 118:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'c')
                ADVANCE(146);
            if(lookahead == 'm')
                ADVANCE(111);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 119:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'd')
                ADVANCE(229);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 120:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(135);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 121:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(158);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 122:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(218);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 123:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(212);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 124:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(125);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 125:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'f')
                ADVANCE(214);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 126:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'g')
                ADVANCE(122);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 127:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'h')
                ADVANCE(243);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 128:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'h')
                ADVANCE(241);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 129:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'h')
                ADVANCE(143);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 130:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'i')
                ADVANCE(134);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 131:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'i')
                ADVANCE(136);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 132:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'i')
                ADVANCE(131);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 133:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'k')
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 134:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'l')
                ADVANCE(157);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 135:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'm')
                ADVANCE(239);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 136:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'm')
                ADVANCE(113);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 137:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'm')
                ADVANCE(114);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 138:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'n')
                ADVANCE(116);
            if(lookahead == 's')
                ADVANCE(117);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 139:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'n')
                ADVANCE(231);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 140:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'n')
                ADVANCE(133);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 141:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'n')
                ADVANCE(220);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 142:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'n')
                ADVANCE(147);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 143:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(149);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 144:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(236);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 145:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(148);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 146:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(141);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 147:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(156);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 148:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(155);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 149:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'r')
                ADVANCE(204);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 150:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(139);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 151:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(120);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 152:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(121);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 153:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(127);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 154:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(128);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 155:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(142);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 156:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(123);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 157:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(144);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 158:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'x')
                ADVANCE(137);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 159:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 160:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                '_', 192,
                'a', 82,
                'b', 94,
                'f', 89,
                'i', 62,
                'k', 59,
                'l', 56,
                'm', 54,
                's', 95,
                0x0b, 160,
                '\f', 160,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 161:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(43);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 162:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                '_', 193,
                'a', 138,
                'b', 150,
                'f', 145,
                'i', 118,
                'k', 115,
                'l', 112,
                'm', 110,
                's', 151,
                0x0b, 162,
                '\f', 162,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 163:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(163);
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
        case 164:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(49);
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
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(35);
            if(lookahead == '\\')
                ADVANCE(50);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 166:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '.')
                ADVANCE(49);
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
        case 167:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '.')
                ADVANCE(49);
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
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(49);
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
        case 169:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(49);
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
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(49);
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
        case 171:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 172:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 173:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '.')
                ADVANCE(49);
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
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 175:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(49);
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
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 177:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(49);
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
        case 178:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 179:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(49);
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
        case 180:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 181:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 182:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 183:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(49);
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
        case 184:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 185:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(49);
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
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 187:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 188:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(199);
            END_STATE();
        case 189:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            END_STATE();
        case 190:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 191:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(49);
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
        case 192:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(106);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(103);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 193:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 194:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(49);
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
                ADVANCE(107);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(105);
            END_STATE();
        case 195:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(49);
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
        case 196:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(49);
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
        case 197:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(49);
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
        case 198:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(49);
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
        case 199:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            END_STATE();
        case 200:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(200);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(201);
            END_STATE();
        case 201:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ' ||
               ('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(201);
            END_STATE();
        case 202:
            ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
            END_STATE();
        case 203:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(106);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(103);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 204:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 205:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(205);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(206);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(207);
            END_STATE();
        case 206:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(206);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(207);
            END_STATE();
        case 207:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(207);
            END_STATE();
        case 208:
            ACCEPT_TOKEN(sym_inline_email_rx);
            END_STATE();
        case 209:
            ACCEPT_TOKEN(sym_inline_email_rx);
            if(lookahead == '-')
                ADVANCE(6);
            if(lookahead == '.')
                ADVANCE(48);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(209);
            END_STATE();
        case 210:
            ACCEPT_TOKEN(sym_inline_email_rx);
            if(lookahead == '\\')
                ADVANCE(38);
            if(lookahead == ']')
                ADVANCE(210);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(37);
            END_STATE();
        case 211:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(lookahead == 'r')
                ADVANCE(68);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(103);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 212:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'r')
                ADVANCE(124);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 213:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(106);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(103);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 214:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 215:
            ACCEPT_TOKEN(aux_sym_inline_footnote_macro_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(215);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(216);
            END_STATE();
        case 216:
            ACCEPT_TOKEN(aux_sym_inline_footnote_macro_token2);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(216);
            END_STATE();
        case 217:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(106);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(103);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 218:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 219:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(106);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(103);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 220:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 221:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(221);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(222);
            END_STATE();
        case 222:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token1);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(222);
            END_STATE();
        case 223:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token2);
            END_STATE();
        case 224:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token2);
            if(lookahead == '[')
                ADVANCE(226);
            if(lookahead == ']')
                ADVANCE(227);
            END_STATE();
        case 225:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token2);
            if(lookahead == '\\')
                ADVANCE(224);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(225);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(223);
            END_STATE();
        case 226:
            ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
            END_STATE();
        case 227:
            ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
            END_STATE();
        case 228:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(106);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(103);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 229:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 230:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(106);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(103);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 231:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 232:
            ACCEPT_TOKEN(aux_sym_key_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(232);
            END_STATE();
        case 233:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(106);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(103);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 234:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 235:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(106);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(103);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 236:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 237:
            ACCEPT_TOKEN(aux_sym_inline_link_macro_token1);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '[')
                ADVANCE(237);
            END_STATE();
        case 238:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(106);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(103);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 239:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 240:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(106);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(103);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 241:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        case 242:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(103);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
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
                ADVANCE(106);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(103);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(161);
            END_STATE();
        case 243:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(49);
            if(lookahead == '@')
                ADVANCE(36);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(159);
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
                ADVANCE(161);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 51 },
    [2] = { .lex_state = 51 },
    [3] = { .lex_state = 51 },
    [4] = { .lex_state = 0 },
    [5] = { .lex_state = 51 },
    [6] = { .lex_state = 51 },
    [7] = { .lex_state = 51 },
    [8] = { .lex_state = 51 },
    [9] = { .lex_state = 51 },
    [10] = { .lex_state = 51 },
    [11] = { .lex_state = 51 },
    [12] = { .lex_state = 51 },
    [13] = { .lex_state = 51 },
    [14] = { .lex_state = 51 },
    [15] = { .lex_state = 51 },
    [16] = { .lex_state = 51 },
    [17] = { .lex_state = 51 },
    [18] = { .lex_state = 51 },
    [19] = { .lex_state = 51 },
    [20] = { .lex_state = 51 },
    [21] = { .lex_state = 40 },
    [22] = { .lex_state = 40 },
    [23] = { .lex_state = 2 },
    [24] = { .lex_state = 40 },
    [25] = { .lex_state = 2 },
    [26] = { .lex_state = 2 },
    [27] = { .lex_state = 2 },
    [28] = { .lex_state = 2 },
    [29] = { .lex_state = 2 },
    [30] = { .lex_state = 2 },
    [31] = { .lex_state = 2 },
    [32] = { .lex_state = 2 },
    [33] = { .lex_state = 2 },
    [34] = { .lex_state = 205 },
    [35] = { .lex_state = 2 },
    [36] = { .lex_state = 2 },
    [37] = { .lex_state = 205 },
    [38] = { .lex_state = 3 },
    [39] = { .lex_state = 3 },
    [40] = { .lex_state = 2 },
    [41] = { .lex_state = 2 },
    [42] = { .lex_state = 2 },
    [43] = { .lex_state = 205 },
    [44] = { .lex_state = 2 },
    [45] = { .lex_state = 2 },
    [46] = { .lex_state = 2 },
    [47] = { .lex_state = 2 },
    [48] = { .lex_state = 44 },
    [49] = { .lex_state = 2 },
    [50] = { .lex_state = 2 },
    [51] = { .lex_state = 45 },
    [52] = { .lex_state = 205 },
    [53] = { .lex_state = 46 },
    [54] = { .lex_state = 2 },
    [55] = { .lex_state = 47 },
    [56] = { .lex_state = 2 },
    [57] = { .lex_state = 3 },
    [58] = { .lex_state = 3 },
    [59] = { .lex_state = 3 },
    [60] = { .lex_state = 44 },
    [61] = { .lex_state = 2 },
    [62] = { .lex_state = 2 },
    [63] = { .lex_state = 0 },
    [64] = { .lex_state = 2 },
    [65] = { .lex_state = 205 },
    [66] = { .lex_state = 2 },
    [67] = { .lex_state = 2 },
    [68] = { .lex_state = 2 },
    [69] = { .lex_state = 2 },
    [70] = { .lex_state = 2 },
    [71] = { .lex_state = 2 },
    [72] = { .lex_state = 2 },
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
        [anon_sym_kbd] = ACTIONS(1),
        [anon_sym_btn] = ACTIONS(1),
        [anon_sym_link] = ACTIONS(1),
        [anon_sym_mailto] = ACTIONS(1),
        [anon_sym_stem] = ACTIONS(1),
        [anon_sym_latexmath] = ACTIONS(1),
        [anon_sym_asciimath] = ACTIONS(1),
    },
    [1] = {
        [sym_inline] = STATE(63),
        [sym_replacement] = STATE(3),
        [sym_word] = STATE(3),
        [sym_punctuation] = STATE(3),
        [sym_inline_anchor_rx] = STATE(3),
        [sym_inline_footnote_macro] = STATE(3),
        [sym_inline_image_macro] = STATE(3),
        [sym_inline_kbd_macro] = STATE(3),
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
        [anon_sym_image] = ACTIONS(17),
        [anon_sym_icon] = ACTIONS(17),
        [anon_sym_kbd] = ACTIONS(19),
        [anon_sym_btn] = ACTIONS(19),
        [anon_sym_link] = ACTIONS(21),
        [anon_sym_mailto] = ACTIONS(21),
        [anon_sym_stem] = ACTIONS(23),
        [anon_sym_latexmath] = ACTIONS(23),
        [anon_sym_asciimath] = ACTIONS(23),
    },
    [2] = {
        [sym_replacement] = STATE(2),
        [sym_word] = STATE(2),
        [sym_punctuation] = STATE(2),
        [sym_inline_anchor_rx] = STATE(2),
        [sym_inline_footnote_macro] = STATE(2),
        [sym_inline_image_macro] = STATE(2),
        [sym_inline_kbd_macro] = STATE(2),
        [sym_inline_link_macro] = STATE(2),
        [sym_inline_math_macro] = STATE(2),
        [aux_sym_inline_repeat1] = STATE(2),
        [ts_builtin_sym_end] = ACTIONS(25),
        [anon_sym_LBRACE] = ACTIONS(27),
        [anon_sym_RBRACE] = ACTIONS(30),
        [sym__word_no_digit] = ACTIONS(33),
        [sym__digits] = ACTIONS(33),
        [anon_sym_BANG] = ACTIONS(30),
        [anon_sym_DQUOTE] = ACTIONS(30),
        [anon_sym_POUND] = ACTIONS(30),
        [anon_sym_DOLLAR] = ACTIONS(30),
        [anon_sym_PERCENT] = ACTIONS(30),
        [anon_sym_AMP] = ACTIONS(30),
        [anon_sym_SQUOTE] = ACTIONS(30),
        [anon_sym_LPAREN] = ACTIONS(30),
        [anon_sym_RPAREN] = ACTIONS(30),
        [anon_sym_STAR] = ACTIONS(30),
        [anon_sym_PLUS] = ACTIONS(30),
        [anon_sym_COMMA] = ACTIONS(30),
        [anon_sym_DASH] = ACTIONS(30),
        [anon_sym_DOT] = ACTIONS(30),
        [anon_sym_SLASH] = ACTIONS(30),
        [anon_sym_COLON] = ACTIONS(30),
        [anon_sym_SEMI] = ACTIONS(30),
        [anon_sym_LT] = ACTIONS(30),
        [anon_sym_EQ] = ACTIONS(30),
        [anon_sym_GT] = ACTIONS(30),
        [anon_sym_QMARK] = ACTIONS(30),
        [anon_sym_AT] = ACTIONS(30),
        [anon_sym_LBRACK] = ACTIONS(30),
        [anon_sym_BSLASH] = ACTIONS(30),
        [anon_sym_RBRACK] = ACTIONS(30),
        [anon_sym_CARET] = ACTIONS(30),
        [anon_sym__] = ACTIONS(30),
        [anon_sym_BQUOTE] = ACTIONS(30),
        [anon_sym_PIPE] = ACTIONS(30),
        [anon_sym_TILDE] = ACTIONS(30),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(36),
        [anon_sym_anchor] = ACTIONS(39),
        [sym_inline_email_rx] = ACTIONS(42),
        [anon_sym_footnote] = ACTIONS(45),
        [anon_sym_footnoteref] = ACTIONS(45),
        [anon_sym_image] = ACTIONS(48),
        [anon_sym_icon] = ACTIONS(48),
        [anon_sym_kbd] = ACTIONS(51),
        [anon_sym_btn] = ACTIONS(51),
        [anon_sym_link] = ACTIONS(54),
        [anon_sym_mailto] = ACTIONS(54),
        [anon_sym_stem] = ACTIONS(57),
        [anon_sym_latexmath] = ACTIONS(57),
        [anon_sym_asciimath] = ACTIONS(57),
    },
    [3] = {
        [sym_replacement] = STATE(2),
        [sym_word] = STATE(2),
        [sym_punctuation] = STATE(2),
        [sym_inline_anchor_rx] = STATE(2),
        [sym_inline_footnote_macro] = STATE(2),
        [sym_inline_image_macro] = STATE(2),
        [sym_inline_kbd_macro] = STATE(2),
        [sym_inline_link_macro] = STATE(2),
        [sym_inline_math_macro] = STATE(2),
        [aux_sym_inline_repeat1] = STATE(2),
        [ts_builtin_sym_end] = ACTIONS(60),
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
        [sym_inline_email_rx] = ACTIONS(62),
        [anon_sym_footnote] = ACTIONS(15),
        [anon_sym_footnoteref] = ACTIONS(15),
        [anon_sym_image] = ACTIONS(17),
        [anon_sym_icon] = ACTIONS(17),
        [anon_sym_kbd] = ACTIONS(19),
        [anon_sym_btn] = ACTIONS(19),
        [anon_sym_link] = ACTIONS(21),
        [anon_sym_mailto] = ACTIONS(21),
        [anon_sym_stem] = ACTIONS(23),
        [anon_sym_latexmath] = ACTIONS(23),
        [anon_sym_asciimath] = ACTIONS(23),
    },
    [4] = {
        [ts_builtin_sym_end] = ACTIONS(64),
        [anon_sym_LBRACE] = ACTIONS(66),
        [aux_sym_replacement_token1] = ACTIONS(68),
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
        [anon_sym_image] = ACTIONS(66),
        [anon_sym_icon] = ACTIONS(66),
        [anon_sym_kbd] = ACTIONS(66),
        [anon_sym_btn] = ACTIONS(66),
        [anon_sym_link] = ACTIONS(66),
        [anon_sym_mailto] = ACTIONS(66),
        [anon_sym_stem] = ACTIONS(66),
        [anon_sym_latexmath] = ACTIONS(66),
        [anon_sym_asciimath] = ACTIONS(66),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(70),
        [anon_sym_LBRACE] = ACTIONS(72),
        [anon_sym_RBRACE] = ACTIONS(72),
        [sym__word_no_digit] = ACTIONS(72),
        [sym__digits] = ACTIONS(72),
        [anon_sym_BANG] = ACTIONS(72),
        [anon_sym_DQUOTE] = ACTIONS(72),
        [anon_sym_POUND] = ACTIONS(72),
        [anon_sym_DOLLAR] = ACTIONS(72),
        [anon_sym_PERCENT] = ACTIONS(72),
        [anon_sym_AMP] = ACTIONS(72),
        [anon_sym_SQUOTE] = ACTIONS(72),
        [anon_sym_LPAREN] = ACTIONS(72),
        [anon_sym_RPAREN] = ACTIONS(72),
        [anon_sym_STAR] = ACTIONS(72),
        [anon_sym_PLUS] = ACTIONS(72),
        [anon_sym_COMMA] = ACTIONS(72),
        [anon_sym_DASH] = ACTIONS(72),
        [anon_sym_DOT] = ACTIONS(72),
        [anon_sym_SLASH] = ACTIONS(72),
        [anon_sym_COLON] = ACTIONS(72),
        [anon_sym_SEMI] = ACTIONS(72),
        [anon_sym_LT] = ACTIONS(72),
        [anon_sym_EQ] = ACTIONS(72),
        [anon_sym_GT] = ACTIONS(72),
        [anon_sym_QMARK] = ACTIONS(72),
        [anon_sym_AT] = ACTIONS(72),
        [anon_sym_LBRACK] = ACTIONS(72),
        [anon_sym_BSLASH] = ACTIONS(72),
        [anon_sym_RBRACK] = ACTIONS(72),
        [anon_sym_CARET] = ACTIONS(72),
        [anon_sym__] = ACTIONS(72),
        [anon_sym_BQUOTE] = ACTIONS(72),
        [anon_sym_PIPE] = ACTIONS(72),
        [anon_sym_TILDE] = ACTIONS(72),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(72),
        [anon_sym_anchor] = ACTIONS(72),
        [sym_inline_email_rx] = ACTIONS(72),
        [anon_sym_footnote] = ACTIONS(72),
        [anon_sym_footnoteref] = ACTIONS(72),
        [anon_sym_image] = ACTIONS(72),
        [anon_sym_icon] = ACTIONS(72),
        [anon_sym_kbd] = ACTIONS(72),
        [anon_sym_btn] = ACTIONS(72),
        [anon_sym_link] = ACTIONS(72),
        [anon_sym_mailto] = ACTIONS(72),
        [anon_sym_stem] = ACTIONS(72),
        [anon_sym_latexmath] = ACTIONS(72),
        [anon_sym_asciimath] = ACTIONS(72),
    },
    [6] = {
        [ts_builtin_sym_end] = ACTIONS(74),
        [anon_sym_LBRACE] = ACTIONS(76),
        [anon_sym_RBRACE] = ACTIONS(76),
        [sym__word_no_digit] = ACTIONS(76),
        [sym__digits] = ACTIONS(76),
        [anon_sym_BANG] = ACTIONS(76),
        [anon_sym_DQUOTE] = ACTIONS(76),
        [anon_sym_POUND] = ACTIONS(76),
        [anon_sym_DOLLAR] = ACTIONS(76),
        [anon_sym_PERCENT] = ACTIONS(76),
        [anon_sym_AMP] = ACTIONS(76),
        [anon_sym_SQUOTE] = ACTIONS(76),
        [anon_sym_LPAREN] = ACTIONS(76),
        [anon_sym_RPAREN] = ACTIONS(76),
        [anon_sym_STAR] = ACTIONS(76),
        [anon_sym_PLUS] = ACTIONS(76),
        [anon_sym_COMMA] = ACTIONS(76),
        [anon_sym_DASH] = ACTIONS(76),
        [anon_sym_DOT] = ACTIONS(76),
        [anon_sym_SLASH] = ACTIONS(76),
        [anon_sym_COLON] = ACTIONS(76),
        [anon_sym_SEMI] = ACTIONS(76),
        [anon_sym_LT] = ACTIONS(76),
        [anon_sym_EQ] = ACTIONS(76),
        [anon_sym_GT] = ACTIONS(76),
        [anon_sym_QMARK] = ACTIONS(76),
        [anon_sym_AT] = ACTIONS(76),
        [anon_sym_LBRACK] = ACTIONS(76),
        [anon_sym_BSLASH] = ACTIONS(76),
        [anon_sym_RBRACK] = ACTIONS(76),
        [anon_sym_CARET] = ACTIONS(76),
        [anon_sym__] = ACTIONS(76),
        [anon_sym_BQUOTE] = ACTIONS(76),
        [anon_sym_PIPE] = ACTIONS(76),
        [anon_sym_TILDE] = ACTIONS(76),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(76),
        [anon_sym_anchor] = ACTIONS(76),
        [sym_inline_email_rx] = ACTIONS(76),
        [anon_sym_footnote] = ACTIONS(76),
        [anon_sym_footnoteref] = ACTIONS(76),
        [anon_sym_image] = ACTIONS(76),
        [anon_sym_icon] = ACTIONS(76),
        [anon_sym_kbd] = ACTIONS(76),
        [anon_sym_btn] = ACTIONS(76),
        [anon_sym_link] = ACTIONS(76),
        [anon_sym_mailto] = ACTIONS(76),
        [anon_sym_stem] = ACTIONS(76),
        [anon_sym_latexmath] = ACTIONS(76),
        [anon_sym_asciimath] = ACTIONS(76),
    },
    [7] = {
        [ts_builtin_sym_end] = ACTIONS(78),
        [anon_sym_LBRACE] = ACTIONS(80),
        [anon_sym_RBRACE] = ACTIONS(80),
        [sym__word_no_digit] = ACTIONS(80),
        [sym__digits] = ACTIONS(80),
        [anon_sym_BANG] = ACTIONS(80),
        [anon_sym_DQUOTE] = ACTIONS(80),
        [anon_sym_POUND] = ACTIONS(80),
        [anon_sym_DOLLAR] = ACTIONS(80),
        [anon_sym_PERCENT] = ACTIONS(80),
        [anon_sym_AMP] = ACTIONS(80),
        [anon_sym_SQUOTE] = ACTIONS(80),
        [anon_sym_LPAREN] = ACTIONS(80),
        [anon_sym_RPAREN] = ACTIONS(80),
        [anon_sym_STAR] = ACTIONS(80),
        [anon_sym_PLUS] = ACTIONS(80),
        [anon_sym_COMMA] = ACTIONS(80),
        [anon_sym_DASH] = ACTIONS(80),
        [anon_sym_DOT] = ACTIONS(80),
        [anon_sym_SLASH] = ACTIONS(80),
        [anon_sym_COLON] = ACTIONS(80),
        [anon_sym_SEMI] = ACTIONS(80),
        [anon_sym_LT] = ACTIONS(80),
        [anon_sym_EQ] = ACTIONS(80),
        [anon_sym_GT] = ACTIONS(80),
        [anon_sym_QMARK] = ACTIONS(80),
        [anon_sym_AT] = ACTIONS(80),
        [anon_sym_LBRACK] = ACTIONS(80),
        [anon_sym_BSLASH] = ACTIONS(80),
        [anon_sym_RBRACK] = ACTIONS(80),
        [anon_sym_CARET] = ACTIONS(80),
        [anon_sym__] = ACTIONS(80),
        [anon_sym_BQUOTE] = ACTIONS(80),
        [anon_sym_PIPE] = ACTIONS(80),
        [anon_sym_TILDE] = ACTIONS(80),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(80),
        [anon_sym_anchor] = ACTIONS(80),
        [sym_inline_email_rx] = ACTIONS(80),
        [anon_sym_footnote] = ACTIONS(80),
        [anon_sym_footnoteref] = ACTIONS(80),
        [anon_sym_image] = ACTIONS(80),
        [anon_sym_icon] = ACTIONS(80),
        [anon_sym_kbd] = ACTIONS(80),
        [anon_sym_btn] = ACTIONS(80),
        [anon_sym_link] = ACTIONS(80),
        [anon_sym_mailto] = ACTIONS(80),
        [anon_sym_stem] = ACTIONS(80),
        [anon_sym_latexmath] = ACTIONS(80),
        [anon_sym_asciimath] = ACTIONS(80),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(82),
        [anon_sym_LBRACE] = ACTIONS(84),
        [anon_sym_RBRACE] = ACTIONS(84),
        [sym__word_no_digit] = ACTIONS(84),
        [sym__digits] = ACTIONS(84),
        [anon_sym_BANG] = ACTIONS(84),
        [anon_sym_DQUOTE] = ACTIONS(84),
        [anon_sym_POUND] = ACTIONS(84),
        [anon_sym_DOLLAR] = ACTIONS(84),
        [anon_sym_PERCENT] = ACTIONS(84),
        [anon_sym_AMP] = ACTIONS(84),
        [anon_sym_SQUOTE] = ACTIONS(84),
        [anon_sym_LPAREN] = ACTIONS(84),
        [anon_sym_RPAREN] = ACTIONS(84),
        [anon_sym_STAR] = ACTIONS(84),
        [anon_sym_PLUS] = ACTIONS(84),
        [anon_sym_COMMA] = ACTIONS(84),
        [anon_sym_DASH] = ACTIONS(84),
        [anon_sym_DOT] = ACTIONS(84),
        [anon_sym_SLASH] = ACTIONS(84),
        [anon_sym_COLON] = ACTIONS(84),
        [anon_sym_SEMI] = ACTIONS(84),
        [anon_sym_LT] = ACTIONS(84),
        [anon_sym_EQ] = ACTIONS(84),
        [anon_sym_GT] = ACTIONS(84),
        [anon_sym_QMARK] = ACTIONS(84),
        [anon_sym_AT] = ACTIONS(84),
        [anon_sym_LBRACK] = ACTIONS(84),
        [anon_sym_BSLASH] = ACTIONS(84),
        [anon_sym_RBRACK] = ACTIONS(84),
        [anon_sym_CARET] = ACTIONS(84),
        [anon_sym__] = ACTIONS(84),
        [anon_sym_BQUOTE] = ACTIONS(84),
        [anon_sym_PIPE] = ACTIONS(84),
        [anon_sym_TILDE] = ACTIONS(84),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(84),
        [anon_sym_anchor] = ACTIONS(84),
        [sym_inline_email_rx] = ACTIONS(84),
        [anon_sym_footnote] = ACTIONS(84),
        [anon_sym_footnoteref] = ACTIONS(84),
        [anon_sym_image] = ACTIONS(84),
        [anon_sym_icon] = ACTIONS(84),
        [anon_sym_kbd] = ACTIONS(84),
        [anon_sym_btn] = ACTIONS(84),
        [anon_sym_link] = ACTIONS(84),
        [anon_sym_mailto] = ACTIONS(84),
        [anon_sym_stem] = ACTIONS(84),
        [anon_sym_latexmath] = ACTIONS(84),
        [anon_sym_asciimath] = ACTIONS(84),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(86),
        [anon_sym_LBRACE] = ACTIONS(88),
        [anon_sym_RBRACE] = ACTIONS(88),
        [sym__word_no_digit] = ACTIONS(88),
        [sym__digits] = ACTIONS(88),
        [anon_sym_BANG] = ACTIONS(88),
        [anon_sym_DQUOTE] = ACTIONS(88),
        [anon_sym_POUND] = ACTIONS(88),
        [anon_sym_DOLLAR] = ACTIONS(88),
        [anon_sym_PERCENT] = ACTIONS(88),
        [anon_sym_AMP] = ACTIONS(88),
        [anon_sym_SQUOTE] = ACTIONS(88),
        [anon_sym_LPAREN] = ACTIONS(88),
        [anon_sym_RPAREN] = ACTIONS(88),
        [anon_sym_STAR] = ACTIONS(88),
        [anon_sym_PLUS] = ACTIONS(88),
        [anon_sym_COMMA] = ACTIONS(88),
        [anon_sym_DASH] = ACTIONS(88),
        [anon_sym_DOT] = ACTIONS(88),
        [anon_sym_SLASH] = ACTIONS(88),
        [anon_sym_COLON] = ACTIONS(88),
        [anon_sym_SEMI] = ACTIONS(88),
        [anon_sym_LT] = ACTIONS(88),
        [anon_sym_EQ] = ACTIONS(88),
        [anon_sym_GT] = ACTIONS(88),
        [anon_sym_QMARK] = ACTIONS(88),
        [anon_sym_AT] = ACTIONS(88),
        [anon_sym_LBRACK] = ACTIONS(88),
        [anon_sym_BSLASH] = ACTIONS(88),
        [anon_sym_RBRACK] = ACTIONS(88),
        [anon_sym_CARET] = ACTIONS(88),
        [anon_sym__] = ACTIONS(88),
        [anon_sym_BQUOTE] = ACTIONS(88),
        [anon_sym_PIPE] = ACTIONS(88),
        [anon_sym_TILDE] = ACTIONS(88),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(88),
        [anon_sym_anchor] = ACTIONS(88),
        [sym_inline_email_rx] = ACTIONS(88),
        [anon_sym_footnote] = ACTIONS(88),
        [anon_sym_footnoteref] = ACTIONS(88),
        [anon_sym_image] = ACTIONS(88),
        [anon_sym_icon] = ACTIONS(88),
        [anon_sym_kbd] = ACTIONS(88),
        [anon_sym_btn] = ACTIONS(88),
        [anon_sym_link] = ACTIONS(88),
        [anon_sym_mailto] = ACTIONS(88),
        [anon_sym_stem] = ACTIONS(88),
        [anon_sym_latexmath] = ACTIONS(88),
        [anon_sym_asciimath] = ACTIONS(88),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(90),
        [anon_sym_LBRACE] = ACTIONS(92),
        [anon_sym_RBRACE] = ACTIONS(92),
        [sym__word_no_digit] = ACTIONS(92),
        [sym__digits] = ACTIONS(92),
        [anon_sym_BANG] = ACTIONS(92),
        [anon_sym_DQUOTE] = ACTIONS(92),
        [anon_sym_POUND] = ACTIONS(92),
        [anon_sym_DOLLAR] = ACTIONS(92),
        [anon_sym_PERCENT] = ACTIONS(92),
        [anon_sym_AMP] = ACTIONS(92),
        [anon_sym_SQUOTE] = ACTIONS(92),
        [anon_sym_LPAREN] = ACTIONS(92),
        [anon_sym_RPAREN] = ACTIONS(92),
        [anon_sym_STAR] = ACTIONS(92),
        [anon_sym_PLUS] = ACTIONS(92),
        [anon_sym_COMMA] = ACTIONS(92),
        [anon_sym_DASH] = ACTIONS(92),
        [anon_sym_DOT] = ACTIONS(92),
        [anon_sym_SLASH] = ACTIONS(92),
        [anon_sym_COLON] = ACTIONS(92),
        [anon_sym_SEMI] = ACTIONS(92),
        [anon_sym_LT] = ACTIONS(92),
        [anon_sym_EQ] = ACTIONS(92),
        [anon_sym_GT] = ACTIONS(92),
        [anon_sym_QMARK] = ACTIONS(92),
        [anon_sym_AT] = ACTIONS(92),
        [anon_sym_LBRACK] = ACTIONS(92),
        [anon_sym_BSLASH] = ACTIONS(92),
        [anon_sym_RBRACK] = ACTIONS(92),
        [anon_sym_CARET] = ACTIONS(92),
        [anon_sym__] = ACTIONS(92),
        [anon_sym_BQUOTE] = ACTIONS(92),
        [anon_sym_PIPE] = ACTIONS(92),
        [anon_sym_TILDE] = ACTIONS(92),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(92),
        [anon_sym_anchor] = ACTIONS(92),
        [sym_inline_email_rx] = ACTIONS(92),
        [anon_sym_footnote] = ACTIONS(92),
        [anon_sym_footnoteref] = ACTIONS(92),
        [anon_sym_image] = ACTIONS(92),
        [anon_sym_icon] = ACTIONS(92),
        [anon_sym_kbd] = ACTIONS(92),
        [anon_sym_btn] = ACTIONS(92),
        [anon_sym_link] = ACTIONS(92),
        [anon_sym_mailto] = ACTIONS(92),
        [anon_sym_stem] = ACTIONS(92),
        [anon_sym_latexmath] = ACTIONS(92),
        [anon_sym_asciimath] = ACTIONS(92),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(94),
        [anon_sym_LBRACE] = ACTIONS(96),
        [anon_sym_RBRACE] = ACTIONS(96),
        [sym__word_no_digit] = ACTIONS(96),
        [sym__digits] = ACTIONS(96),
        [anon_sym_BANG] = ACTIONS(96),
        [anon_sym_DQUOTE] = ACTIONS(96),
        [anon_sym_POUND] = ACTIONS(96),
        [anon_sym_DOLLAR] = ACTIONS(96),
        [anon_sym_PERCENT] = ACTIONS(96),
        [anon_sym_AMP] = ACTIONS(96),
        [anon_sym_SQUOTE] = ACTIONS(96),
        [anon_sym_LPAREN] = ACTIONS(96),
        [anon_sym_RPAREN] = ACTIONS(96),
        [anon_sym_STAR] = ACTIONS(96),
        [anon_sym_PLUS] = ACTIONS(96),
        [anon_sym_COMMA] = ACTIONS(96),
        [anon_sym_DASH] = ACTIONS(96),
        [anon_sym_DOT] = ACTIONS(96),
        [anon_sym_SLASH] = ACTIONS(96),
        [anon_sym_COLON] = ACTIONS(96),
        [anon_sym_SEMI] = ACTIONS(96),
        [anon_sym_LT] = ACTIONS(96),
        [anon_sym_EQ] = ACTIONS(96),
        [anon_sym_GT] = ACTIONS(96),
        [anon_sym_QMARK] = ACTIONS(96),
        [anon_sym_AT] = ACTIONS(96),
        [anon_sym_LBRACK] = ACTIONS(96),
        [anon_sym_BSLASH] = ACTIONS(96),
        [anon_sym_RBRACK] = ACTIONS(96),
        [anon_sym_CARET] = ACTIONS(96),
        [anon_sym__] = ACTIONS(96),
        [anon_sym_BQUOTE] = ACTIONS(96),
        [anon_sym_PIPE] = ACTIONS(96),
        [anon_sym_TILDE] = ACTIONS(96),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(96),
        [anon_sym_anchor] = ACTIONS(96),
        [sym_inline_email_rx] = ACTIONS(96),
        [anon_sym_footnote] = ACTIONS(96),
        [anon_sym_footnoteref] = ACTIONS(96),
        [anon_sym_image] = ACTIONS(96),
        [anon_sym_icon] = ACTIONS(96),
        [anon_sym_kbd] = ACTIONS(96),
        [anon_sym_btn] = ACTIONS(96),
        [anon_sym_link] = ACTIONS(96),
        [anon_sym_mailto] = ACTIONS(96),
        [anon_sym_stem] = ACTIONS(96),
        [anon_sym_latexmath] = ACTIONS(96),
        [anon_sym_asciimath] = ACTIONS(96),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(98),
        [anon_sym_LBRACE] = ACTIONS(100),
        [anon_sym_RBRACE] = ACTIONS(100),
        [sym__word_no_digit] = ACTIONS(100),
        [sym__digits] = ACTIONS(100),
        [anon_sym_BANG] = ACTIONS(100),
        [anon_sym_DQUOTE] = ACTIONS(100),
        [anon_sym_POUND] = ACTIONS(100),
        [anon_sym_DOLLAR] = ACTIONS(100),
        [anon_sym_PERCENT] = ACTIONS(100),
        [anon_sym_AMP] = ACTIONS(100),
        [anon_sym_SQUOTE] = ACTIONS(100),
        [anon_sym_LPAREN] = ACTIONS(100),
        [anon_sym_RPAREN] = ACTIONS(100),
        [anon_sym_STAR] = ACTIONS(100),
        [anon_sym_PLUS] = ACTIONS(100),
        [anon_sym_COMMA] = ACTIONS(100),
        [anon_sym_DASH] = ACTIONS(100),
        [anon_sym_DOT] = ACTIONS(100),
        [anon_sym_SLASH] = ACTIONS(100),
        [anon_sym_COLON] = ACTIONS(100),
        [anon_sym_SEMI] = ACTIONS(100),
        [anon_sym_LT] = ACTIONS(100),
        [anon_sym_EQ] = ACTIONS(100),
        [anon_sym_GT] = ACTIONS(100),
        [anon_sym_QMARK] = ACTIONS(100),
        [anon_sym_AT] = ACTIONS(100),
        [anon_sym_LBRACK] = ACTIONS(100),
        [anon_sym_BSLASH] = ACTIONS(100),
        [anon_sym_RBRACK] = ACTIONS(100),
        [anon_sym_CARET] = ACTIONS(100),
        [anon_sym__] = ACTIONS(100),
        [anon_sym_BQUOTE] = ACTIONS(100),
        [anon_sym_PIPE] = ACTIONS(100),
        [anon_sym_TILDE] = ACTIONS(100),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(100),
        [anon_sym_anchor] = ACTIONS(100),
        [sym_inline_email_rx] = ACTIONS(100),
        [anon_sym_footnote] = ACTIONS(100),
        [anon_sym_footnoteref] = ACTIONS(100),
        [anon_sym_image] = ACTIONS(100),
        [anon_sym_icon] = ACTIONS(100),
        [anon_sym_kbd] = ACTIONS(100),
        [anon_sym_btn] = ACTIONS(100),
        [anon_sym_link] = ACTIONS(100),
        [anon_sym_mailto] = ACTIONS(100),
        [anon_sym_stem] = ACTIONS(100),
        [anon_sym_latexmath] = ACTIONS(100),
        [anon_sym_asciimath] = ACTIONS(100),
    },
    [13] = {
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
        [anon_sym_image] = ACTIONS(66),
        [anon_sym_icon] = ACTIONS(66),
        [anon_sym_kbd] = ACTIONS(66),
        [anon_sym_btn] = ACTIONS(66),
        [anon_sym_link] = ACTIONS(66),
        [anon_sym_mailto] = ACTIONS(66),
        [anon_sym_stem] = ACTIONS(66),
        [anon_sym_latexmath] = ACTIONS(66),
        [anon_sym_asciimath] = ACTIONS(66),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(102),
        [anon_sym_LBRACE] = ACTIONS(104),
        [anon_sym_RBRACE] = ACTIONS(104),
        [sym__word_no_digit] = ACTIONS(104),
        [sym__digits] = ACTIONS(104),
        [anon_sym_BANG] = ACTIONS(104),
        [anon_sym_DQUOTE] = ACTIONS(104),
        [anon_sym_POUND] = ACTIONS(104),
        [anon_sym_DOLLAR] = ACTIONS(104),
        [anon_sym_PERCENT] = ACTIONS(104),
        [anon_sym_AMP] = ACTIONS(104),
        [anon_sym_SQUOTE] = ACTIONS(104),
        [anon_sym_LPAREN] = ACTIONS(104),
        [anon_sym_RPAREN] = ACTIONS(104),
        [anon_sym_STAR] = ACTIONS(104),
        [anon_sym_PLUS] = ACTIONS(104),
        [anon_sym_COMMA] = ACTIONS(104),
        [anon_sym_DASH] = ACTIONS(104),
        [anon_sym_DOT] = ACTIONS(104),
        [anon_sym_SLASH] = ACTIONS(104),
        [anon_sym_COLON] = ACTIONS(104),
        [anon_sym_SEMI] = ACTIONS(104),
        [anon_sym_LT] = ACTIONS(104),
        [anon_sym_EQ] = ACTIONS(104),
        [anon_sym_GT] = ACTIONS(104),
        [anon_sym_QMARK] = ACTIONS(104),
        [anon_sym_AT] = ACTIONS(104),
        [anon_sym_LBRACK] = ACTIONS(104),
        [anon_sym_BSLASH] = ACTIONS(104),
        [anon_sym_RBRACK] = ACTIONS(104),
        [anon_sym_CARET] = ACTIONS(104),
        [anon_sym__] = ACTIONS(104),
        [anon_sym_BQUOTE] = ACTIONS(104),
        [anon_sym_PIPE] = ACTIONS(104),
        [anon_sym_TILDE] = ACTIONS(104),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(104),
        [anon_sym_anchor] = ACTIONS(104),
        [sym_inline_email_rx] = ACTIONS(104),
        [anon_sym_footnote] = ACTIONS(104),
        [anon_sym_footnoteref] = ACTIONS(104),
        [anon_sym_image] = ACTIONS(104),
        [anon_sym_icon] = ACTIONS(104),
        [anon_sym_kbd] = ACTIONS(104),
        [anon_sym_btn] = ACTIONS(104),
        [anon_sym_link] = ACTIONS(104),
        [anon_sym_mailto] = ACTIONS(104),
        [anon_sym_stem] = ACTIONS(104),
        [anon_sym_latexmath] = ACTIONS(104),
        [anon_sym_asciimath] = ACTIONS(104),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(106),
        [anon_sym_LBRACE] = ACTIONS(108),
        [anon_sym_RBRACE] = ACTIONS(108),
        [sym__word_no_digit] = ACTIONS(108),
        [sym__digits] = ACTIONS(108),
        [anon_sym_BANG] = ACTIONS(108),
        [anon_sym_DQUOTE] = ACTIONS(108),
        [anon_sym_POUND] = ACTIONS(108),
        [anon_sym_DOLLAR] = ACTIONS(108),
        [anon_sym_PERCENT] = ACTIONS(108),
        [anon_sym_AMP] = ACTIONS(108),
        [anon_sym_SQUOTE] = ACTIONS(108),
        [anon_sym_LPAREN] = ACTIONS(108),
        [anon_sym_RPAREN] = ACTIONS(108),
        [anon_sym_STAR] = ACTIONS(108),
        [anon_sym_PLUS] = ACTIONS(108),
        [anon_sym_COMMA] = ACTIONS(108),
        [anon_sym_DASH] = ACTIONS(108),
        [anon_sym_DOT] = ACTIONS(108),
        [anon_sym_SLASH] = ACTIONS(108),
        [anon_sym_COLON] = ACTIONS(108),
        [anon_sym_SEMI] = ACTIONS(108),
        [anon_sym_LT] = ACTIONS(108),
        [anon_sym_EQ] = ACTIONS(108),
        [anon_sym_GT] = ACTIONS(108),
        [anon_sym_QMARK] = ACTIONS(108),
        [anon_sym_AT] = ACTIONS(108),
        [anon_sym_LBRACK] = ACTIONS(108),
        [anon_sym_BSLASH] = ACTIONS(108),
        [anon_sym_RBRACK] = ACTIONS(108),
        [anon_sym_CARET] = ACTIONS(108),
        [anon_sym__] = ACTIONS(108),
        [anon_sym_BQUOTE] = ACTIONS(108),
        [anon_sym_PIPE] = ACTIONS(108),
        [anon_sym_TILDE] = ACTIONS(108),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(108),
        [anon_sym_anchor] = ACTIONS(108),
        [sym_inline_email_rx] = ACTIONS(108),
        [anon_sym_footnote] = ACTIONS(108),
        [anon_sym_footnoteref] = ACTIONS(108),
        [anon_sym_image] = ACTIONS(108),
        [anon_sym_icon] = ACTIONS(108),
        [anon_sym_kbd] = ACTIONS(108),
        [anon_sym_btn] = ACTIONS(108),
        [anon_sym_link] = ACTIONS(108),
        [anon_sym_mailto] = ACTIONS(108),
        [anon_sym_stem] = ACTIONS(108),
        [anon_sym_latexmath] = ACTIONS(108),
        [anon_sym_asciimath] = ACTIONS(108),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(110),
        [anon_sym_LBRACE] = ACTIONS(112),
        [anon_sym_RBRACE] = ACTIONS(112),
        [sym__word_no_digit] = ACTIONS(112),
        [sym__digits] = ACTIONS(112),
        [anon_sym_BANG] = ACTIONS(112),
        [anon_sym_DQUOTE] = ACTIONS(112),
        [anon_sym_POUND] = ACTIONS(112),
        [anon_sym_DOLLAR] = ACTIONS(112),
        [anon_sym_PERCENT] = ACTIONS(112),
        [anon_sym_AMP] = ACTIONS(112),
        [anon_sym_SQUOTE] = ACTIONS(112),
        [anon_sym_LPAREN] = ACTIONS(112),
        [anon_sym_RPAREN] = ACTIONS(112),
        [anon_sym_STAR] = ACTIONS(112),
        [anon_sym_PLUS] = ACTIONS(112),
        [anon_sym_COMMA] = ACTIONS(112),
        [anon_sym_DASH] = ACTIONS(112),
        [anon_sym_DOT] = ACTIONS(112),
        [anon_sym_SLASH] = ACTIONS(112),
        [anon_sym_COLON] = ACTIONS(112),
        [anon_sym_SEMI] = ACTIONS(112),
        [anon_sym_LT] = ACTIONS(112),
        [anon_sym_EQ] = ACTIONS(112),
        [anon_sym_GT] = ACTIONS(112),
        [anon_sym_QMARK] = ACTIONS(112),
        [anon_sym_AT] = ACTIONS(112),
        [anon_sym_LBRACK] = ACTIONS(112),
        [anon_sym_BSLASH] = ACTIONS(112),
        [anon_sym_RBRACK] = ACTIONS(112),
        [anon_sym_CARET] = ACTIONS(112),
        [anon_sym__] = ACTIONS(112),
        [anon_sym_BQUOTE] = ACTIONS(112),
        [anon_sym_PIPE] = ACTIONS(112),
        [anon_sym_TILDE] = ACTIONS(112),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(112),
        [anon_sym_anchor] = ACTIONS(112),
        [sym_inline_email_rx] = ACTIONS(112),
        [anon_sym_footnote] = ACTIONS(112),
        [anon_sym_footnoteref] = ACTIONS(112),
        [anon_sym_image] = ACTIONS(112),
        [anon_sym_icon] = ACTIONS(112),
        [anon_sym_kbd] = ACTIONS(112),
        [anon_sym_btn] = ACTIONS(112),
        [anon_sym_link] = ACTIONS(112),
        [anon_sym_mailto] = ACTIONS(112),
        [anon_sym_stem] = ACTIONS(112),
        [anon_sym_latexmath] = ACTIONS(112),
        [anon_sym_asciimath] = ACTIONS(112),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(114),
        [anon_sym_LBRACE] = ACTIONS(116),
        [anon_sym_RBRACE] = ACTIONS(116),
        [sym__word_no_digit] = ACTIONS(116),
        [sym__digits] = ACTIONS(116),
        [anon_sym_BANG] = ACTIONS(116),
        [anon_sym_DQUOTE] = ACTIONS(116),
        [anon_sym_POUND] = ACTIONS(116),
        [anon_sym_DOLLAR] = ACTIONS(116),
        [anon_sym_PERCENT] = ACTIONS(116),
        [anon_sym_AMP] = ACTIONS(116),
        [anon_sym_SQUOTE] = ACTIONS(116),
        [anon_sym_LPAREN] = ACTIONS(116),
        [anon_sym_RPAREN] = ACTIONS(116),
        [anon_sym_STAR] = ACTIONS(116),
        [anon_sym_PLUS] = ACTIONS(116),
        [anon_sym_COMMA] = ACTIONS(116),
        [anon_sym_DASH] = ACTIONS(116),
        [anon_sym_DOT] = ACTIONS(116),
        [anon_sym_SLASH] = ACTIONS(116),
        [anon_sym_COLON] = ACTIONS(116),
        [anon_sym_SEMI] = ACTIONS(116),
        [anon_sym_LT] = ACTIONS(116),
        [anon_sym_EQ] = ACTIONS(116),
        [anon_sym_GT] = ACTIONS(116),
        [anon_sym_QMARK] = ACTIONS(116),
        [anon_sym_AT] = ACTIONS(116),
        [anon_sym_LBRACK] = ACTIONS(116),
        [anon_sym_BSLASH] = ACTIONS(116),
        [anon_sym_RBRACK] = ACTIONS(116),
        [anon_sym_CARET] = ACTIONS(116),
        [anon_sym__] = ACTIONS(116),
        [anon_sym_BQUOTE] = ACTIONS(116),
        [anon_sym_PIPE] = ACTIONS(116),
        [anon_sym_TILDE] = ACTIONS(116),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(116),
        [anon_sym_anchor] = ACTIONS(116),
        [sym_inline_email_rx] = ACTIONS(116),
        [anon_sym_footnote] = ACTIONS(116),
        [anon_sym_footnoteref] = ACTIONS(116),
        [anon_sym_image] = ACTIONS(116),
        [anon_sym_icon] = ACTIONS(116),
        [anon_sym_kbd] = ACTIONS(116),
        [anon_sym_btn] = ACTIONS(116),
        [anon_sym_link] = ACTIONS(116),
        [anon_sym_mailto] = ACTIONS(116),
        [anon_sym_stem] = ACTIONS(116),
        [anon_sym_latexmath] = ACTIONS(116),
        [anon_sym_asciimath] = ACTIONS(116),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(118),
        [anon_sym_LBRACE] = ACTIONS(120),
        [anon_sym_RBRACE] = ACTIONS(120),
        [sym__word_no_digit] = ACTIONS(120),
        [sym__digits] = ACTIONS(120),
        [anon_sym_BANG] = ACTIONS(120),
        [anon_sym_DQUOTE] = ACTIONS(120),
        [anon_sym_POUND] = ACTIONS(120),
        [anon_sym_DOLLAR] = ACTIONS(120),
        [anon_sym_PERCENT] = ACTIONS(120),
        [anon_sym_AMP] = ACTIONS(120),
        [anon_sym_SQUOTE] = ACTIONS(120),
        [anon_sym_LPAREN] = ACTIONS(120),
        [anon_sym_RPAREN] = ACTIONS(120),
        [anon_sym_STAR] = ACTIONS(120),
        [anon_sym_PLUS] = ACTIONS(120),
        [anon_sym_COMMA] = ACTIONS(120),
        [anon_sym_DASH] = ACTIONS(120),
        [anon_sym_DOT] = ACTIONS(120),
        [anon_sym_SLASH] = ACTIONS(120),
        [anon_sym_COLON] = ACTIONS(120),
        [anon_sym_SEMI] = ACTIONS(120),
        [anon_sym_LT] = ACTIONS(120),
        [anon_sym_EQ] = ACTIONS(120),
        [anon_sym_GT] = ACTIONS(120),
        [anon_sym_QMARK] = ACTIONS(120),
        [anon_sym_AT] = ACTIONS(120),
        [anon_sym_LBRACK] = ACTIONS(120),
        [anon_sym_BSLASH] = ACTIONS(120),
        [anon_sym_RBRACK] = ACTIONS(120),
        [anon_sym_CARET] = ACTIONS(120),
        [anon_sym__] = ACTIONS(120),
        [anon_sym_BQUOTE] = ACTIONS(120),
        [anon_sym_PIPE] = ACTIONS(120),
        [anon_sym_TILDE] = ACTIONS(120),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(120),
        [anon_sym_anchor] = ACTIONS(120),
        [sym_inline_email_rx] = ACTIONS(120),
        [anon_sym_footnote] = ACTIONS(120),
        [anon_sym_footnoteref] = ACTIONS(120),
        [anon_sym_image] = ACTIONS(120),
        [anon_sym_icon] = ACTIONS(120),
        [anon_sym_kbd] = ACTIONS(120),
        [anon_sym_btn] = ACTIONS(120),
        [anon_sym_link] = ACTIONS(120),
        [anon_sym_mailto] = ACTIONS(120),
        [anon_sym_stem] = ACTIONS(120),
        [anon_sym_latexmath] = ACTIONS(120),
        [anon_sym_asciimath] = ACTIONS(120),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(122),
        [anon_sym_LBRACE] = ACTIONS(124),
        [anon_sym_RBRACE] = ACTIONS(124),
        [sym__word_no_digit] = ACTIONS(124),
        [sym__digits] = ACTIONS(124),
        [anon_sym_BANG] = ACTIONS(124),
        [anon_sym_DQUOTE] = ACTIONS(124),
        [anon_sym_POUND] = ACTIONS(124),
        [anon_sym_DOLLAR] = ACTIONS(124),
        [anon_sym_PERCENT] = ACTIONS(124),
        [anon_sym_AMP] = ACTIONS(124),
        [anon_sym_SQUOTE] = ACTIONS(124),
        [anon_sym_LPAREN] = ACTIONS(124),
        [anon_sym_RPAREN] = ACTIONS(124),
        [anon_sym_STAR] = ACTIONS(124),
        [anon_sym_PLUS] = ACTIONS(124),
        [anon_sym_COMMA] = ACTIONS(124),
        [anon_sym_DASH] = ACTIONS(124),
        [anon_sym_DOT] = ACTIONS(124),
        [anon_sym_SLASH] = ACTIONS(124),
        [anon_sym_COLON] = ACTIONS(124),
        [anon_sym_SEMI] = ACTIONS(124),
        [anon_sym_LT] = ACTIONS(124),
        [anon_sym_EQ] = ACTIONS(124),
        [anon_sym_GT] = ACTIONS(124),
        [anon_sym_QMARK] = ACTIONS(124),
        [anon_sym_AT] = ACTIONS(124),
        [anon_sym_LBRACK] = ACTIONS(124),
        [anon_sym_BSLASH] = ACTIONS(124),
        [anon_sym_RBRACK] = ACTIONS(124),
        [anon_sym_CARET] = ACTIONS(124),
        [anon_sym__] = ACTIONS(124),
        [anon_sym_BQUOTE] = ACTIONS(124),
        [anon_sym_PIPE] = ACTIONS(124),
        [anon_sym_TILDE] = ACTIONS(124),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(124),
        [anon_sym_anchor] = ACTIONS(124),
        [sym_inline_email_rx] = ACTIONS(124),
        [anon_sym_footnote] = ACTIONS(124),
        [anon_sym_footnoteref] = ACTIONS(124),
        [anon_sym_image] = ACTIONS(124),
        [anon_sym_icon] = ACTIONS(124),
        [anon_sym_kbd] = ACTIONS(124),
        [anon_sym_btn] = ACTIONS(124),
        [anon_sym_link] = ACTIONS(124),
        [anon_sym_mailto] = ACTIONS(124),
        [anon_sym_stem] = ACTIONS(124),
        [anon_sym_latexmath] = ACTIONS(124),
        [anon_sym_asciimath] = ACTIONS(124),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(126),
        [anon_sym_LBRACE] = ACTIONS(128),
        [anon_sym_RBRACE] = ACTIONS(128),
        [sym__word_no_digit] = ACTIONS(128),
        [sym__digits] = ACTIONS(128),
        [anon_sym_BANG] = ACTIONS(128),
        [anon_sym_DQUOTE] = ACTIONS(128),
        [anon_sym_POUND] = ACTIONS(128),
        [anon_sym_DOLLAR] = ACTIONS(128),
        [anon_sym_PERCENT] = ACTIONS(128),
        [anon_sym_AMP] = ACTIONS(128),
        [anon_sym_SQUOTE] = ACTIONS(128),
        [anon_sym_LPAREN] = ACTIONS(128),
        [anon_sym_RPAREN] = ACTIONS(128),
        [anon_sym_STAR] = ACTIONS(128),
        [anon_sym_PLUS] = ACTIONS(128),
        [anon_sym_COMMA] = ACTIONS(128),
        [anon_sym_DASH] = ACTIONS(128),
        [anon_sym_DOT] = ACTIONS(128),
        [anon_sym_SLASH] = ACTIONS(128),
        [anon_sym_COLON] = ACTIONS(128),
        [anon_sym_SEMI] = ACTIONS(128),
        [anon_sym_LT] = ACTIONS(128),
        [anon_sym_EQ] = ACTIONS(128),
        [anon_sym_GT] = ACTIONS(128),
        [anon_sym_QMARK] = ACTIONS(128),
        [anon_sym_AT] = ACTIONS(128),
        [anon_sym_LBRACK] = ACTIONS(128),
        [anon_sym_BSLASH] = ACTIONS(128),
        [anon_sym_RBRACK] = ACTIONS(128),
        [anon_sym_CARET] = ACTIONS(128),
        [anon_sym__] = ACTIONS(128),
        [anon_sym_BQUOTE] = ACTIONS(128),
        [anon_sym_PIPE] = ACTIONS(128),
        [anon_sym_TILDE] = ACTIONS(128),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(128),
        [anon_sym_anchor] = ACTIONS(128),
        [sym_inline_email_rx] = ACTIONS(128),
        [anon_sym_footnote] = ACTIONS(128),
        [anon_sym_footnoteref] = ACTIONS(128),
        [anon_sym_image] = ACTIONS(128),
        [anon_sym_icon] = ACTIONS(128),
        [anon_sym_kbd] = ACTIONS(128),
        [anon_sym_btn] = ACTIONS(128),
        [anon_sym_link] = ACTIONS(128),
        [anon_sym_mailto] = ACTIONS(128),
        [anon_sym_stem] = ACTIONS(128),
        [anon_sym_latexmath] = ACTIONS(128),
        [anon_sym_asciimath] = ACTIONS(128),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 3,
    ACTIONS(130),
    1,
    anon_sym_RBRACK,
    STATE(22),
    1,
    aux_sym_inline_image_macro_repeat1,
    ACTIONS(132),
    3,
    aux_sym_inline_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [12] = 3,
    ACTIONS(134),
    1,
    anon_sym_RBRACK,
    STATE(22),
    1,
    aux_sym_inline_image_macro_repeat1,
    ACTIONS(136),
    3,
    aux_sym_inline_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [24] = 5,
    ACTIONS(139),
    1,
    anon_sym_PLUS,
    ACTIONS(141),
    1,
    anon_sym_COMMA,
    ACTIONS(143),
    1,
    anon_sym_RBRACK,
    STATE(25),
    1,
    aux_sym_inline_kbd_macro_repeat1,
    STATE(29),
    1,
    aux_sym_inline_kbd_macro_repeat2,
    [40] = 3,
    ACTIONS(145),
    1,
    anon_sym_RBRACK,
    STATE(21),
    1,
    aux_sym_inline_image_macro_repeat1,
    ACTIONS(147),
    3,
    aux_sym_inline_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [52] = 3,
    ACTIONS(139),
    1,
    anon_sym_PLUS,
    ACTIONS(149),
    1,
    anon_sym_RBRACK,
    STATE(30),
    1,
    aux_sym_inline_kbd_macro_repeat1,
    [62] = 2,
    STATE(35),
    1,
    sym_key,
    ACTIONS(151),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [70] = 2,
    STATE(36),
    1,
    sym_key,
    ACTIONS(151),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [78] = 3,
    ACTIONS(153),
    1,
    anon_sym_COMMA,
    ACTIONS(156),
    1,
    anon_sym_RBRACK,
    STATE(28),
    1,
    aux_sym_inline_kbd_macro_repeat2,
    [88] = 3,
    ACTIONS(141),
    1,
    anon_sym_COMMA,
    ACTIONS(149),
    1,
    anon_sym_RBRACK,
    STATE(28),
    1,
    aux_sym_inline_kbd_macro_repeat2,
    [98] = 3,
    ACTIONS(158),
    1,
    anon_sym_PLUS,
    ACTIONS(161),
    1,
    anon_sym_RBRACK,
    STATE(30),
    1,
    aux_sym_inline_kbd_macro_repeat1,
    [108] = 2,
    STATE(23),
    1,
    sym_key,
    ACTIONS(151),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [116] = 1,
    ACTIONS(163),
    3,
    anon_sym_PLUS,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [122] = 2,
    ACTIONS(165),
    1,
    anon_sym_COMMA,
    ACTIONS(167),
    1,
    anon_sym_RBRACK,
    [129] = 2,
    ACTIONS(169),
    1,
    aux_sym_inline_anchor_rx_token2,
    ACTIONS(171),
    1,
    aux_sym_inline_footnote_macro_token1,
    [136] = 1,
    ACTIONS(156),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [141] = 1,
    ACTIONS(161),
    2,
    anon_sym_PLUS,
    anon_sym_RBRACK,
    [146] = 2,
    ACTIONS(173),
    1,
    aux_sym_inline_anchor_rx_token2,
    ACTIONS(175),
    1,
    aux_sym_inline_footnote_macro_token1,
    [153] = 2,
    ACTIONS(177),
    1,
    anon_sym_COMMA,
    ACTIONS(179),
    1,
    anon_sym_RBRACK_RBRACK,
    [160] = 2,
    ACTIONS(181),
    1,
    aux_sym_replacement_token1,
    ACTIONS(183),
    1,
    anon_sym_LBRACK,
    [167] = 2,
    ACTIONS(185),
    1,
    anon_sym_COMMA,
    ACTIONS(187),
    1,
    anon_sym_RBRACK,
    [174] = 1,
    ACTIONS(189),
    1,
    anon_sym_LBRACK,
    [178] = 1,
    ACTIONS(191),
    1,
    anon_sym_RBRACK,
    [182] = 1,
    ACTIONS(193),
    1,
    aux_sym_inline_anchor_rx_token2,
    [186] = 1,
    ACTIONS(195),
    1,
    anon_sym_RBRACK,
    [190] = 1,
    ACTIONS(197),
    1,
    anon_sym_LBRACK,
    [194] = 1,
    ACTIONS(199),
    1,
    anon_sym_RBRACK,
    [198] = 1,
    ACTIONS(187),
    1,
    anon_sym_RBRACK,
    [202] = 1,
    ACTIONS(201),
    1,
    aux_sym_inline_footnote_macro_token2,
    [206] = 1,
    ACTIONS(203),
    1,
    anon_sym_LBRACK,
    [210] = 1,
    ACTIONS(205),
    1,
    anon_sym_LBRACK,
    [214] = 1,
    ACTIONS(207),
    1,
    aux_sym_inline_anchor_rx_token1,
    [218] = 1,
    ACTIONS(209),
    1,
    aux_sym_inline_anchor_rx_token2,
    [222] = 1,
    ACTIONS(211),
    1,
    aux_sym_inline_link_macro_token1,
    [226] = 1,
    ACTIONS(213),
    1,
    anon_sym_LBRACK,
    [230] = 1,
    ACTIONS(215),
    1,
    aux_sym_inline_image_macro_token1,
    [234] = 1,
    ACTIONS(217),
    1,
    anon_sym_LBRACK,
    [238] = 1,
    ACTIONS(219),
    1,
    anon_sym_RBRACK_RBRACK,
    [242] = 1,
    ACTIONS(221),
    1,
    aux_sym_replacement_token1,
    [246] = 1,
    ACTIONS(223),
    1,
    aux_sym_replacement_token1,
    [250] = 1,
    ACTIONS(225),
    1,
    aux_sym_inline_footnote_macro_token2,
    [254] = 1,
    ACTIONS(227),
    1,
    anon_sym_RBRACK,
    [258] = 1,
    ACTIONS(229),
    1,
    anon_sym_RBRACE,
    [262] = 1,
    ACTIONS(231),
    1,
    ts_builtin_sym_end,
    [266] = 1,
    ACTIONS(167),
    1,
    anon_sym_RBRACK,
    [270] = 1,
    ACTIONS(233),
    1,
    aux_sym_inline_anchor_rx_token2,
    [274] = 1,
    ACTIONS(235),
    1,
    anon_sym_COLON,
    [278] = 1,
    ACTIONS(237),
    1,
    anon_sym_COLON,
    [282] = 1,
    ACTIONS(239),
    1,
    anon_sym_COLON,
    [286] = 1,
    ACTIONS(241),
    1,
    anon_sym_COLON,
    [290] = 1,
    ACTIONS(243),
    1,
    anon_sym_RBRACK,
    [294] = 1,
    ACTIONS(245),
    1,
    anon_sym_COLON,
    [298] = 1,
    ACTIONS(247),
    1,
    anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(21)] = 0,
    [SMALL_STATE(22)] = 12,
    [SMALL_STATE(23)] = 24,
    [SMALL_STATE(24)] = 40,
    [SMALL_STATE(25)] = 52,
    [SMALL_STATE(26)] = 62,
    [SMALL_STATE(27)] = 70,
    [SMALL_STATE(28)] = 78,
    [SMALL_STATE(29)] = 88,
    [SMALL_STATE(30)] = 98,
    [SMALL_STATE(31)] = 108,
    [SMALL_STATE(32)] = 116,
    [SMALL_STATE(33)] = 122,
    [SMALL_STATE(34)] = 129,
    [SMALL_STATE(35)] = 136,
    [SMALL_STATE(36)] = 141,
    [SMALL_STATE(37)] = 146,
    [SMALL_STATE(38)] = 153,
    [SMALL_STATE(39)] = 160,
    [SMALL_STATE(40)] = 167,
    [SMALL_STATE(41)] = 174,
    [SMALL_STATE(42)] = 178,
    [SMALL_STATE(43)] = 182,
    [SMALL_STATE(44)] = 186,
    [SMALL_STATE(45)] = 190,
    [SMALL_STATE(46)] = 194,
    [SMALL_STATE(47)] = 198,
    [SMALL_STATE(48)] = 202,
    [SMALL_STATE(49)] = 206,
    [SMALL_STATE(50)] = 210,
    [SMALL_STATE(51)] = 214,
    [SMALL_STATE(52)] = 218,
    [SMALL_STATE(53)] = 222,
    [SMALL_STATE(54)] = 226,
    [SMALL_STATE(55)] = 230,
    [SMALL_STATE(56)] = 234,
    [SMALL_STATE(57)] = 238,
    [SMALL_STATE(58)] = 242,
    [SMALL_STATE(59)] = 246,
    [SMALL_STATE(60)] = 250,
    [SMALL_STATE(61)] = 254,
    [SMALL_STATE(62)] = 258,
    [SMALL_STATE(63)] = 262,
    [SMALL_STATE(64)] = 266,
    [SMALL_STATE(65)] = 270,
    [SMALL_STATE(66)] = 274,
    [SMALL_STATE(67)] = 278,
    [SMALL_STATE(68)] = 282,
    [SMALL_STATE(69)] = 286,
    [SMALL_STATE(70)] = 290,
    [SMALL_STATE(71)] = 294,
    [SMALL_STATE(72)] = 298,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(4),
    [5] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(13),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(19),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(59),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(72),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(3),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(71),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(69),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(68),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(67),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(66),
    [25] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    [27] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(4),
    [30] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(13),
    [33] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(19),
    [36] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(59),
    [39] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(72),
    [42] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(2),
    [45] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(71),
    [48] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(69),
    [51] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(68),
    [54] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(67),
    [57] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(66),
    [60] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [62] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(2),
    [64] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [66] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [68] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [70] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_kbd_macro, 6, 0, 0),
    [72] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_kbd_macro, 6, 0, 0),
    [74] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 8, 0, 1),
    [76] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 8, 0, 1),
    [78] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 7, 0, 0),
    [80] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 7, 0, 0),
    [82] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_link_macro, 6, 0, 0),
    [84] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_link_macro, 6, 0, 0),
    [86] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 5, 0, 0),
    [88] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 5, 0, 0),
    [90] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 5, 0, 0),
    [92] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 5, 0, 0),
    [94] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_image_macro, 5, 0, 0),
    [96] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_image_macro, 5, 0, 0),
    [98] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_image_macro, 6, 0, 0),
    [100] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_image_macro, 6, 0, 0),
    [102] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 6, 0, 1),
    [104] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 6, 0, 1),
    [106] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 6, 0, 0),
    [108] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 6, 0, 0),
    [110] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_math_macro, 5, 0, 0),
    [112] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_math_macro, 5, 0, 0),
    [114] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 3, 0, 0),
    [116] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 3, 0, 0),
    [118] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_kbd_macro, 5, 0, 0),
    [120] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_kbd_macro, 5, 0, 0),
    [122] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_word, 1, 0, 0),
    [124] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_word, 1, 0, 0),
    [126] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 0),
    [128] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 0),
    [130] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(12),
    [132] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(22),
    [134] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_image_macro_repeat1, 2, 0, 0),
    [136] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_image_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(22),
    [139] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [141] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [143] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [145] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(11),
    [147] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(21),
    [149] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [151] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [153] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_inline_kbd_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(26),
    [156] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_kbd_macro_repeat2, 2, 0, 0),
    [158] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_inline_kbd_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(27),
    [161] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_kbd_macro_repeat1, 2, 0, 0),
    [163] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_key, 1, 0, 0),
    [165] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [167] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [169] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [171] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(33),
    [173] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [175] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(40),
    [177] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [179] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [181] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [183] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [185] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [187] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [189] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [191] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [193] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [195] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [197] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [199] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [201] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [203] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [205] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [207] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [209] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [211] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [213] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [215] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [217] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [219] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [221] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [223] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [225] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [227] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [229] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [231] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [233] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [235] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(41),
    [237] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [239] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [241] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [243] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [245] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [247] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
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
