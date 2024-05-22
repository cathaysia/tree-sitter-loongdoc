#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 30
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
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
    aux_sym_auto_link_token1 = 55,
    anon_sym_http = 56,
    anon_sym_https = 57,
    anon_sym_file = 58,
    anon_sym_ftp = 59,
    anon_sym_irc = 60,
    anon_sym_COLON_SLASH_SLASH = 61,
    sym__link_component = 62,
    anon_sym_link = 63,
    anon_sym_mailto = 64,
    aux_sym_inline_link_macro_token1 = 65,
    anon_sym_stem = 66,
    anon_sym_latexmath = 67,
    anon_sym_asciimath = 68,
    sym_inline = 69,
    sym_replacement = 70,
    sym_word = 71,
    sym_punctuation = 72,
    sym_inline_anchor_rx = 73,
    sym_inline_footnote_macro = 74,
    sym_inline_image_macro = 75,
    sym_inline_kbd_macro = 76,
    sym_key = 77,
    sym_auto_link = 78,
    sym_link = 79,
    sym_inline_link_macro = 80,
    sym_inline_math_macro = 81,
    aux_sym_inline_repeat1 = 82,
    aux_sym_inline_image_macro_repeat1 = 83,
    aux_sym_inline_kbd_macro_repeat1 = 84,
    aux_sym_inline_kbd_macro_repeat2 = 85,
    aux_sym_link_repeat1 = 86,
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
    [aux_sym_auto_link_token1] = "auto_link_token1",
    [anon_sym_http] = "http",
    [anon_sym_https] = "https",
    [anon_sym_file] = "file",
    [anon_sym_ftp] = "ftp",
    [anon_sym_irc] = "irc",
    [anon_sym_COLON_SLASH_SLASH] = "://",
    [sym__link_component] = "_link_component",
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
    [sym_auto_link] = "auto_link",
    [sym_link] = "link",
    [sym_inline_link_macro] = "inline_link_macro",
    [sym_inline_math_macro] = "inline_math_macro",
    [aux_sym_inline_repeat1] = "inline_repeat1",
    [aux_sym_inline_image_macro_repeat1] = "inline_image_macro_repeat1",
    [aux_sym_inline_kbd_macro_repeat1] = "inline_kbd_macro_repeat1",
    [aux_sym_inline_kbd_macro_repeat2] = "inline_kbd_macro_repeat2",
    [aux_sym_link_repeat1] = "link_repeat1",
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
    [aux_sym_auto_link_token1] = aux_sym_auto_link_token1,
    [anon_sym_http] = anon_sym_http,
    [anon_sym_https] = anon_sym_https,
    [anon_sym_file] = anon_sym_file,
    [anon_sym_ftp] = anon_sym_ftp,
    [anon_sym_irc] = anon_sym_irc,
    [anon_sym_COLON_SLASH_SLASH] = anon_sym_COLON_SLASH_SLASH,
    [sym__link_component] = sym__link_component,
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
    [sym_auto_link] = sym_auto_link,
    [sym_link] = sym_link,
    [sym_inline_link_macro] = sym_inline_link_macro,
    [sym_inline_math_macro] = sym_inline_math_macro,
    [aux_sym_inline_repeat1] = aux_sym_inline_repeat1,
    [aux_sym_inline_image_macro_repeat1] = aux_sym_inline_image_macro_repeat1,
    [aux_sym_inline_kbd_macro_repeat1] = aux_sym_inline_kbd_macro_repeat1,
    [aux_sym_inline_kbd_macro_repeat2] = aux_sym_inline_kbd_macro_repeat2,
    [aux_sym_link_repeat1] = aux_sym_link_repeat1,
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
    [aux_sym_auto_link_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_http] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_https] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_file] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ftp] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_irc] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COLON_SLASH_SLASH] = {
        .visible = true,
        .named = false,
    },
    [sym__link_component] = {
        .visible = false,
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
    [sym_auto_link] = {
        .visible = true,
        .named = true,
    },
    [sym_link] = {
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
    [aux_sym_link_repeat1] = {
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
    [34] = 5,
    [35] = 7,
    [36] = 8,
    [37] = 37,
    [38] = 38,
    [39] = 10,
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
    [73] = 73,
    [74] = 74,
    [75] = 75,
    [76] = 76,
    [77] = 77,
    [78] = 78,
    [79] = 79,
    [80] = 80,
    [81] = 81,
    [82] = 82,
    [83] = 83,
    [84] = 84,
    [85] = 85,
    [86] = 86,
    [87] = 87,
    [88] = 88,
    [89] = 89,
    [90] = 90,
    [91] = 91,
    [92] = 92,
    [93] = 93,
    [94] = 67,
    [95] = 69,
    [96] = 88,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(55);
            ADVANCE_MAP(
                '!', 181,
                '"', 183,
                '#', 184,
                '$', 185,
                '%', 186,
                '&', 187,
                '\'', 188,
                '(', 189,
                ')', 190,
                '*', 191,
                '+', 193,
                ',', 194,
                '-', 195,
                '.', 196,
                '/', 197,
                ':', 198,
                ';', 199,
                '<', 200,
                '=', 201,
                '>', 202,
                '?', 203,
                '@', 204,
                '[', 206,
                '\\', 207,
                ']', 208,
                '^', 209,
                '_', 212,
                '`', 214,
                'a', 89,
                'b', 102,
                'f', 79,
                'h', 108,
                'i', 65,
                'k', 62,
                'l', 59,
                'm', 57,
                's', 103,
                '{', 56,
                '|', 215,
                '}', 119,
                '~', 216,
                0x0b, 177,
                '\f', 177,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(114);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0)
                ADVANCE(178);
            END_STATE();
        case 1:
            if(lookahead == '"')
                ADVANCE(37);
            if(lookahead == '\\')
                ADVANCE(53);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 2:
            ADVANCE_MAP(
                '"', 182,
                '+', 192,
                ',', 194,
                '.', 196,
                ':', 198,
                '[', 205,
                '\\', 43,
                ']', 208,
                '}', 118,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(2);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(250);
            END_STATE();
        case 3:
            if(lookahead == ',')
                ADVANCE(194);
            if(lookahead == ':')
                ADVANCE(33);
            if(lookahead == '[')
                ADVANCE(205);
            if(lookahead == ']')
                ADVANCE(44);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(3);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            END_STATE();
        case 4:
            if(lookahead == '-')
                ADVANCE(5);
            if(lookahead == '.')
                ADVANCE(51);
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
                ADVANCE(227);
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
                ADVANCE(41);
            if(lookahead == ']')
                ADVANCE(226);
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
                ADVANCE(41);
            if(lookahead == ']')
                ADVANCE(226);
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
                ADVANCE(41);
            if(lookahead == ']')
                ADVANCE(226);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(12);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            END_STATE();
        case 11:
            if(lookahead == '-')
                ADVANCE(14);
            if(lookahead == ':')
                ADVANCE(41);
            if(lookahead == ']')
                ADVANCE(226);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            END_STATE();
        case 12:
            if(lookahead == '-')
                ADVANCE(14);
            if(lookahead == ':')
                ADVANCE(41);
            if(lookahead == ']')
                ADVANCE(226);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(13);
            END_STATE();
        case 13:
            if(lookahead == '-')
                ADVANCE(14);
            if(lookahead == ':')
                ADVANCE(41);
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
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 16:
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
                ADVANCE(35);
            END_STATE();
        case 23:
            if(lookahead == '.')
                ADVANCE(35);
            if(lookahead == '5')
                ADVANCE(24);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(22);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(25);
            END_STATE();
        case 24:
            if(lookahead == '.')
                ADVANCE(35);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(22);
            END_STATE();
        case 25:
            if(lookahead == '.')
                ADVANCE(35);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(22);
            END_STATE();
        case 26:
            if(lookahead == '.')
                ADVANCE(35);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(25);
            END_STATE();
        case 27:
            if(lookahead == '.')
                ADVANCE(36);
            END_STATE();
        case 28:
            if(lookahead == '.')
                ADVANCE(36);
            if(lookahead == '5')
                ADVANCE(29);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(27);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(30);
            END_STATE();
        case 29:
            if(lookahead == '.')
                ADVANCE(36);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(27);
            END_STATE();
        case 30:
            if(lookahead == '.')
                ADVANCE(36);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(27);
            END_STATE();
        case 31:
            if(lookahead == '.')
                ADVANCE(36);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(30);
            END_STATE();
        case 32:
            if(lookahead == '/')
                ADVANCE(263);
            END_STATE();
        case 33:
            if(lookahead == '/')
                ADVANCE(32);
            END_STATE();
        case 34:
            if(lookahead == '0')
                ADVANCE(27);
            if(lookahead == '1')
                ADVANCE(31);
            if(lookahead == '2')
                ADVANCE(28);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(30);
            END_STATE();
        case 35:
            if(lookahead == '0')
                ADVANCE(17);
            if(lookahead == '1')
                ADVANCE(21);
            if(lookahead == '2')
                ADVANCE(18);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(20);
            END_STATE();
        case 36:
            if(lookahead == '0')
                ADVANCE(22);
            if(lookahead == '1')
                ADVANCE(26);
            if(lookahead == '2')
                ADVANCE(23);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(25);
            END_STATE();
        case 37:
            if(lookahead == '@')
                ADVANCE(38);
            END_STATE();
        case 38:
            if(lookahead == '[')
                ADVANCE(34);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(4);
            END_STATE();
        case 39:
            if(lookahead == '\\')
                ADVANCE(40);
            if(lookahead == ']')
                ADVANCE(228);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(39);
            END_STATE();
        case 40:
            if(lookahead == '\\')
                ADVANCE(40);
            if(lookahead == ']')
                ADVANCE(228);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(39);
            END_STATE();
        case 41:
            if(lookahead == '\\')
                ADVANCE(40);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(39);
            END_STATE();
        case 42:
            if(lookahead == '\\')
                ADVANCE(242);
            if(lookahead == ']')
                ADVANCE(208);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(243);
            if(lookahead != 0)
                ADVANCE(241);
            END_STATE();
        case 43:
            if(lookahead == ']')
                ADVANCE(245);
            END_STATE();
        case 44:
            if(lookahead == ']')
                ADVANCE(220);
            END_STATE();
        case 45:
            if(lookahead == '_')
                ADVANCE(45);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 46:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(218);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(219);
            END_STATE();
        case 47:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(233);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(234);
            END_STATE();
        case 48:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(48);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(269);
            END_STATE();
        case 49:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(49);
            if(lookahead != 0 &&
               lookahead != '.' &&
               lookahead != '[')
                ADVANCE(264);
            END_STATE();
        case 50:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(239);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(240);
            END_STATE();
        case 51:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(227);
            END_STATE();
        case 52:
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
        case 53:
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 54:
            if(eof)
                ADVANCE(55);
            ADVANCE_MAP(
                '!', 181,
                '"', 183,
                '#', 184,
                '$', 185,
                '%', 186,
                '&', 187,
                '\'', 188,
                '(', 189,
                ')', 190,
                '*', 191,
                '+', 193,
                ',', 194,
                '-', 195,
                '.', 196,
                '/', 197,
                ':', 198,
                ';', 199,
                '<', 200,
                '=', 201,
                '>', 202,
                '?', 203,
                '@', 204,
                '[', 206,
                '\\', 207,
                ']', 208,
                '^', 209,
                '_', 213,
                '`', 214,
                'a', 152,
                'b', 165,
                'f', 142,
                'h', 171,
                'i', 128,
                'k', 125,
                'l', 122,
                'm', 120,
                's', 166,
                '{', 56,
                '|', 215,
                '}', 119,
                '~', 216,
                0x0b, 179,
                '\f', 179,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(54);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(180);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
            if(lookahead != 0)
                ADVANCE(178);
            END_STATE();
        case 55:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 56:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
        case 57:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'a')
                ADVANCE(80);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 58:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'a')
                ADVANCE(75);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 59:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'a')
                ADVANCE(106);
            if(lookahead == 'i')
                ADVANCE(91);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 60:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'a')
                ADVANCE(105);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 61:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'a')
                ADVANCE(107);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 62:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'b')
                ADVANCE(67);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 63:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'c')
                ADVANCE(78);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 64:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'c')
                ADVANCE(261);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 65:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'c')
                ADVANCE(96);
            if(lookahead == 'm')
                ADVANCE(58);
            if(lookahead == 'r')
                ADVANCE(64);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 66:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'c')
                ADVANCE(82);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 67:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'd')
                ADVANCE(246);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 68:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'e')
                ADVANCE(86);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 69:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'e')
                ADVANCE(257);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 70:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'e')
                ADVANCE(112);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 71:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'e')
                ADVANCE(235);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 72:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'e')
                ADVANCE(229);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 73:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'e')
                ADVANCE(74);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 74:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'f')
                ADVANCE(231);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 75:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'g')
                ADVANCE(71);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 76:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'h')
                ADVANCE(274);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 77:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'h')
                ADVANCE(272);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 78:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'h')
                ADVANCE(94);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 79:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'i')
                ADVANCE(84);
            if(lookahead == 'o')
                ADVANCE(98);
            if(lookahead == 't')
                ADVANCE(99);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 80:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'i')
                ADVANCE(85);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 81:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'i')
                ADVANCE(87);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 82:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'i')
                ADVANCE(81);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 83:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'k')
                ADVANCE(265);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 84:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'l')
                ADVANCE(69);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 85:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'l')
                ADVANCE(110);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 86:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'm')
                ADVANCE(270);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 87:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'm')
                ADVANCE(60);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 88:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'm')
                ADVANCE(61);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 89:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'n')
                ADVANCE(63);
            if(lookahead == 's')
                ADVANCE(66);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 90:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'n')
                ADVANCE(248);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 91:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'n')
                ADVANCE(83);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 92:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'n')
                ADVANCE(237);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 93:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'n')
                ADVANCE(97);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 94:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'o')
                ADVANCE(101);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 95:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'o')
                ADVANCE(267);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 96:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'o')
                ADVANCE(92);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 97:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'o')
                ADVANCE(111);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 98:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'o')
                ADVANCE(109);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 99:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'p')
                ADVANCE(259);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 100:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'p')
                ADVANCE(253);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 101:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'r')
                ADVANCE(221);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 102:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 't')
                ADVANCE(90);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 103:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 't')
                ADVANCE(68);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 104:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 't')
                ADVANCE(100);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 105:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 't')
                ADVANCE(76);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 106:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 't')
                ADVANCE(70);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 107:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 't')
                ADVANCE(77);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 108:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 't')
                ADVANCE(104);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 109:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 't')
                ADVANCE(93);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 110:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 't')
                ADVANCE(95);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 111:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 't')
                ADVANCE(72);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 112:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'x')
                ADVANCE(88);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 113:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(116);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(113);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 114:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(114);
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
                ADVANCE(117);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            END_STATE();
        case 115:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
                ADVANCE(117);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            END_STATE();
        case 116:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(116);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 117:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            END_STATE();
        case 118:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 119:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
        case 120:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(143);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 121:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(138);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 122:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(169);
            if(lookahead == 'i')
                ADVANCE(154);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 123:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(168);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 124:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(170);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 125:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'b')
                ADVANCE(130);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 126:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'c')
                ADVANCE(141);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 127:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'c')
                ADVANCE(262);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 128:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'c')
                ADVANCE(159);
            if(lookahead == 'm')
                ADVANCE(121);
            if(lookahead == 'r')
                ADVANCE(127);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 129:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'c')
                ADVANCE(145);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 130:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'd')
                ADVANCE(247);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 131:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(149);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 132:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(258);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 133:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(175);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 134:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(236);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 135:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(230);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 136:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(137);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 137:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'f')
                ADVANCE(232);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 138:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'g')
                ADVANCE(134);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 139:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'h')
                ADVANCE(275);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 140:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'h')
                ADVANCE(273);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 141:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'h')
                ADVANCE(157);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 142:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'i')
                ADVANCE(147);
            if(lookahead == 'o')
                ADVANCE(161);
            if(lookahead == 't')
                ADVANCE(162);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 143:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'i')
                ADVANCE(148);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 144:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'i')
                ADVANCE(150);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 145:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'i')
                ADVANCE(144);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 146:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'k')
                ADVANCE(266);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 147:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'l')
                ADVANCE(132);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 148:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'l')
                ADVANCE(173);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 149:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'm')
                ADVANCE(271);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 150:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'm')
                ADVANCE(123);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 151:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'm')
                ADVANCE(124);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 152:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'n')
                ADVANCE(126);
            if(lookahead == 's')
                ADVANCE(129);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 153:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'n')
                ADVANCE(249);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 154:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'n')
                ADVANCE(146);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 155:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'n')
                ADVANCE(238);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 156:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'n')
                ADVANCE(160);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 157:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(164);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 158:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(268);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 159:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(155);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 160:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(174);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 161:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(172);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 162:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'p')
                ADVANCE(260);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 163:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'p')
                ADVANCE(254);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 164:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'r')
                ADVANCE(222);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 165:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(153);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 166:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(131);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 167:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(163);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 168:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(139);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 169:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(133);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 170:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(140);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 171:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(167);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 172:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(156);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 173:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(158);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 174:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(135);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 175:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'x')
                ADVANCE(151);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 176:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 177:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                '_', 210,
                'a', 89,
                'b', 102,
                'f', 79,
                'h', 108,
                'i', 65,
                'k', 62,
                'l', 59,
                'm', 57,
                's', 103,
                0x0b, 177,
                '\f', 177,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 178:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(45);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 179:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                '_', 211,
                'a', 152,
                'b', 165,
                'f', 142,
                'h', 171,
                'i', 128,
                'k', 125,
                'l', 122,
                'm', 120,
                's', 166,
                0x0b, 179,
                '\f', 179,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 180:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(180);
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
        case 181:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 183:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(37);
            if(lookahead == '\\')
                ADVANCE(53);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 184:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
        case 185:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 190:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 191:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 193:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
        case 194:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 195:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 197:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 199:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 200:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 201:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
        case 202:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 203:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
        case 204:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 205:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 206:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(217);
            END_STATE();
        case 207:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            END_STATE();
        case 208:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 209:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
        case 210:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(116);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(113);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 211:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 212:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
                ADVANCE(117);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            END_STATE();
        case 213:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
        case 214:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
        case 215:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
        case 216:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
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
        case 217:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            END_STATE();
        case 218:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(218);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(219);
            END_STATE();
        case 219:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ' ||
               ('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(219);
            END_STATE();
        case 220:
            ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
            END_STATE();
        case 221:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(116);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(113);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 222:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 223:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(223);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(224);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(225);
            END_STATE();
        case 224:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(224);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(225);
            END_STATE();
        case 225:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(225);
            END_STATE();
        case 226:
            ACCEPT_TOKEN(sym_inline_email_rx);
            END_STATE();
        case 227:
            ACCEPT_TOKEN(sym_inline_email_rx);
            if(lookahead == '-')
                ADVANCE(6);
            if(lookahead == '.')
                ADVANCE(51);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(227);
            END_STATE();
        case 228:
            ACCEPT_TOKEN(sym_inline_email_rx);
            if(lookahead == '\\')
                ADVANCE(40);
            if(lookahead == ']')
                ADVANCE(228);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(39);
            END_STATE();
        case 229:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 'r')
                ADVANCE(73);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 230:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'r')
                ADVANCE(136);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 231:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(116);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(113);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 232:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 233:
            ACCEPT_TOKEN(aux_sym_inline_footnote_macro_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(233);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(234);
            END_STATE();
        case 234:
            ACCEPT_TOKEN(aux_sym_inline_footnote_macro_token2);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(234);
            END_STATE();
        case 235:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(116);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(113);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 236:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 237:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(116);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(113);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 238:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 239:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(239);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(240);
            END_STATE();
        case 240:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token1);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(240);
            END_STATE();
        case 241:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token2);
            END_STATE();
        case 242:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token2);
            if(lookahead == '[')
                ADVANCE(244);
            if(lookahead == ']')
                ADVANCE(245);
            END_STATE();
        case 243:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token2);
            if(lookahead == '\\')
                ADVANCE(242);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(243);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(241);
            END_STATE();
        case 244:
            ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
            END_STATE();
        case 245:
            ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
            END_STATE();
        case 246:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(116);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(113);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 247:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 248:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(116);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(113);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 249:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 250:
            ACCEPT_TOKEN(aux_sym_key_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(250);
            END_STATE();
        case 251:
            ACCEPT_TOKEN(aux_sym_auto_link_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(251);
            if(lookahead != 0 &&
               lookahead != '"' &&
               lookahead != ']')
                ADVANCE(252);
            END_STATE();
        case 252:
            ACCEPT_TOKEN(aux_sym_auto_link_token1);
            if(lookahead != 0 &&
               lookahead != '"' &&
               lookahead != ']')
                ADVANCE(252);
            END_STATE();
        case 253:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(lookahead == 's')
                ADVANCE(255);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(113);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(116);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 254:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 's')
                ADVANCE(256);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 255:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(116);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(113);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 256:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 257:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(116);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(113);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 258:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 259:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(116);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(113);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 260:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 261:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(116);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(113);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 262:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 263:
            ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
            END_STATE();
        case 264:
            ACCEPT_TOKEN(sym__link_component);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '.' &&
               lookahead != '[')
                ADVANCE(264);
            END_STATE();
        case 265:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(116);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(113);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 266:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 267:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(116);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(113);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 268:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 269:
            ACCEPT_TOKEN(aux_sym_inline_link_macro_token1);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '[')
                ADVANCE(269);
            END_STATE();
        case 270:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(116);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(113);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 271:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 272:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(116);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(113);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 273:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        case 274:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(115);
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
                ADVANCE(116);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(113);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(178);
            END_STATE();
        case 275:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(176);
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
                ADVANCE(178);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 54 },
    [2] = { .lex_state = 54 },
    [3] = { .lex_state = 54 },
    [4] = { .lex_state = 0 },
    [5] = { .lex_state = 54 },
    [6] = { .lex_state = 54 },
    [7] = { .lex_state = 54 },
    [8] = { .lex_state = 54 },
    [9] = { .lex_state = 54 },
    [10] = { .lex_state = 54 },
    [11] = { .lex_state = 54 },
    [12] = { .lex_state = 54 },
    [13] = { .lex_state = 54 },
    [14] = { .lex_state = 54 },
    [15] = { .lex_state = 54 },
    [16] = { .lex_state = 54 },
    [17] = { .lex_state = 54 },
    [18] = { .lex_state = 54 },
    [19] = { .lex_state = 54 },
    [20] = { .lex_state = 54 },
    [21] = { .lex_state = 54 },
    [22] = { .lex_state = 54 },
    [23] = { .lex_state = 54 },
    [24] = { .lex_state = 54 },
    [25] = { .lex_state = 54 },
    [26] = { .lex_state = 54 },
    [27] = { .lex_state = 54 },
    [28] = { .lex_state = 54 },
    [29] = { .lex_state = 54 },
    [30] = { .lex_state = 42 },
    [31] = { .lex_state = 42 },
    [32] = { .lex_state = 2 },
    [33] = { .lex_state = 42 },
    [34] = { .lex_state = 2 },
    [35] = { .lex_state = 2 },
    [36] = { .lex_state = 2 },
    [37] = { .lex_state = 2 },
    [38] = { .lex_state = 2 },
    [39] = { .lex_state = 2 },
    [40] = { .lex_state = 2 },
    [41] = { .lex_state = 2 },
    [42] = { .lex_state = 2 },
    [43] = { .lex_state = 2 },
    [44] = { .lex_state = 2 },
    [45] = { .lex_state = 2 },
    [46] = { .lex_state = 2 },
    [47] = { .lex_state = 2 },
    [48] = { .lex_state = 2 },
    [49] = { .lex_state = 3 },
    [50] = { .lex_state = 223 },
    [51] = { .lex_state = 3 },
    [52] = { .lex_state = 2 },
    [53] = { .lex_state = 223 },
    [54] = { .lex_state = 2 },
    [55] = { .lex_state = 2 },
    [56] = { .lex_state = 223 },
    [57] = { .lex_state = 2 },
    [58] = { .lex_state = 2 },
    [59] = { .lex_state = 46 },
    [60] = { .lex_state = 2 },
    [61] = { .lex_state = 2 },
    [62] = { .lex_state = 251 },
    [63] = { .lex_state = 47 },
    [64] = { .lex_state = 2 },
    [65] = { .lex_state = 48 },
    [66] = { .lex_state = 2 },
    [67] = { .lex_state = 49 },
    [68] = { .lex_state = 223 },
    [69] = { .lex_state = 49 },
    [70] = { .lex_state = 2 },
    [71] = { .lex_state = 50 },
    [72] = { .lex_state = 2 },
    [73] = { .lex_state = 3 },
    [74] = { .lex_state = 3 },
    [75] = { .lex_state = 2 },
    [76] = { .lex_state = 2 },
    [77] = { .lex_state = 47 },
    [78] = { .lex_state = 2 },
    [79] = { .lex_state = 2 },
    [80] = { .lex_state = 0 },
    [81] = { .lex_state = 3 },
    [82] = { .lex_state = 2 },
    [83] = { .lex_state = 2 },
    [84] = { .lex_state = 2 },
    [85] = { .lex_state = 223 },
    [86] = { .lex_state = 2 },
    [87] = { .lex_state = 2 },
    [88] = { .lex_state = 3 },
    [89] = { .lex_state = 2 },
    [90] = { .lex_state = 2 },
    [91] = { .lex_state = 2 },
    [92] = { .lex_state = 2 },
    [93] = { .lex_state = 2 },
    [94] = { .lex_state = 49 },
    [95] = { .lex_state = 49 },
    [96] = { .lex_state = 3 },
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
        [anon_sym_http] = ACTIONS(1),
        [anon_sym_https] = ACTIONS(1),
        [anon_sym_file] = ACTIONS(1),
        [anon_sym_ftp] = ACTIONS(1),
        [anon_sym_irc] = ACTIONS(1),
        [anon_sym_link] = ACTIONS(1),
        [anon_sym_mailto] = ACTIONS(1),
        [anon_sym_stem] = ACTIONS(1),
        [anon_sym_latexmath] = ACTIONS(1),
        [anon_sym_asciimath] = ACTIONS(1),
    },
    [1] = {
        [sym_inline] = STATE(80),
        [sym_replacement] = STATE(2),
        [sym_word] = STATE(2),
        [sym_punctuation] = STATE(2),
        [sym_inline_anchor_rx] = STATE(2),
        [sym_inline_footnote_macro] = STATE(2),
        [sym_inline_image_macro] = STATE(2),
        [sym_inline_kbd_macro] = STATE(2),
        [sym_auto_link] = STATE(2),
        [sym_link] = STATE(16),
        [sym_inline_link_macro] = STATE(2),
        [sym_inline_math_macro] = STATE(2),
        [aux_sym_inline_repeat1] = STATE(2),
        [anon_sym_LBRACE] = ACTIONS(3),
        [anon_sym_RBRACE] = ACTIONS(5),
        [sym__word_no_digit] = ACTIONS(7),
        [sym__digits] = ACTIONS(7),
        [anon_sym_BANG] = ACTIONS(5),
        [anon_sym_DQUOTE] = ACTIONS(9),
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
        [anon_sym_LBRACK_LBRACK] = ACTIONS(11),
        [anon_sym_anchor] = ACTIONS(13),
        [sym_inline_email_rx] = ACTIONS(15),
        [anon_sym_footnote] = ACTIONS(17),
        [anon_sym_footnoteref] = ACTIONS(17),
        [anon_sym_image] = ACTIONS(19),
        [anon_sym_icon] = ACTIONS(19),
        [anon_sym_kbd] = ACTIONS(21),
        [anon_sym_btn] = ACTIONS(21),
        [anon_sym_http] = ACTIONS(23),
        [anon_sym_https] = ACTIONS(23),
        [anon_sym_file] = ACTIONS(23),
        [anon_sym_ftp] = ACTIONS(23),
        [anon_sym_irc] = ACTIONS(23),
        [anon_sym_link] = ACTIONS(25),
        [anon_sym_mailto] = ACTIONS(25),
        [anon_sym_stem] = ACTIONS(27),
        [anon_sym_latexmath] = ACTIONS(27),
        [anon_sym_asciimath] = ACTIONS(27),
    },
    [2] = {
        [sym_replacement] = STATE(3),
        [sym_word] = STATE(3),
        [sym_punctuation] = STATE(3),
        [sym_inline_anchor_rx] = STATE(3),
        [sym_inline_footnote_macro] = STATE(3),
        [sym_inline_image_macro] = STATE(3),
        [sym_inline_kbd_macro] = STATE(3),
        [sym_auto_link] = STATE(3),
        [sym_link] = STATE(16),
        [sym_inline_link_macro] = STATE(3),
        [sym_inline_math_macro] = STATE(3),
        [aux_sym_inline_repeat1] = STATE(3),
        [ts_builtin_sym_end] = ACTIONS(29),
        [anon_sym_LBRACE] = ACTIONS(3),
        [anon_sym_RBRACE] = ACTIONS(5),
        [sym__word_no_digit] = ACTIONS(7),
        [sym__digits] = ACTIONS(7),
        [anon_sym_BANG] = ACTIONS(5),
        [anon_sym_DQUOTE] = ACTIONS(9),
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
        [anon_sym_LBRACK_LBRACK] = ACTIONS(11),
        [anon_sym_anchor] = ACTIONS(13),
        [sym_inline_email_rx] = ACTIONS(31),
        [anon_sym_footnote] = ACTIONS(17),
        [anon_sym_footnoteref] = ACTIONS(17),
        [anon_sym_image] = ACTIONS(19),
        [anon_sym_icon] = ACTIONS(19),
        [anon_sym_kbd] = ACTIONS(21),
        [anon_sym_btn] = ACTIONS(21),
        [anon_sym_http] = ACTIONS(23),
        [anon_sym_https] = ACTIONS(23),
        [anon_sym_file] = ACTIONS(23),
        [anon_sym_ftp] = ACTIONS(23),
        [anon_sym_irc] = ACTIONS(23),
        [anon_sym_link] = ACTIONS(25),
        [anon_sym_mailto] = ACTIONS(25),
        [anon_sym_stem] = ACTIONS(27),
        [anon_sym_latexmath] = ACTIONS(27),
        [anon_sym_asciimath] = ACTIONS(27),
    },
    [3] = {
        [sym_replacement] = STATE(3),
        [sym_word] = STATE(3),
        [sym_punctuation] = STATE(3),
        [sym_inline_anchor_rx] = STATE(3),
        [sym_inline_footnote_macro] = STATE(3),
        [sym_inline_image_macro] = STATE(3),
        [sym_inline_kbd_macro] = STATE(3),
        [sym_auto_link] = STATE(3),
        [sym_link] = STATE(16),
        [sym_inline_link_macro] = STATE(3),
        [sym_inline_math_macro] = STATE(3),
        [aux_sym_inline_repeat1] = STATE(3),
        [ts_builtin_sym_end] = ACTIONS(33),
        [anon_sym_LBRACE] = ACTIONS(35),
        [anon_sym_RBRACE] = ACTIONS(38),
        [sym__word_no_digit] = ACTIONS(41),
        [sym__digits] = ACTIONS(41),
        [anon_sym_BANG] = ACTIONS(38),
        [anon_sym_DQUOTE] = ACTIONS(44),
        [anon_sym_POUND] = ACTIONS(38),
        [anon_sym_DOLLAR] = ACTIONS(38),
        [anon_sym_PERCENT] = ACTIONS(38),
        [anon_sym_AMP] = ACTIONS(38),
        [anon_sym_SQUOTE] = ACTIONS(38),
        [anon_sym_LPAREN] = ACTIONS(38),
        [anon_sym_RPAREN] = ACTIONS(38),
        [anon_sym_STAR] = ACTIONS(38),
        [anon_sym_PLUS] = ACTIONS(38),
        [anon_sym_COMMA] = ACTIONS(38),
        [anon_sym_DASH] = ACTIONS(38),
        [anon_sym_DOT] = ACTIONS(38),
        [anon_sym_SLASH] = ACTIONS(38),
        [anon_sym_COLON] = ACTIONS(38),
        [anon_sym_SEMI] = ACTIONS(38),
        [anon_sym_LT] = ACTIONS(38),
        [anon_sym_EQ] = ACTIONS(38),
        [anon_sym_GT] = ACTIONS(38),
        [anon_sym_QMARK] = ACTIONS(38),
        [anon_sym_AT] = ACTIONS(38),
        [anon_sym_LBRACK] = ACTIONS(38),
        [anon_sym_BSLASH] = ACTIONS(38),
        [anon_sym_RBRACK] = ACTIONS(38),
        [anon_sym_CARET] = ACTIONS(38),
        [anon_sym__] = ACTIONS(38),
        [anon_sym_BQUOTE] = ACTIONS(38),
        [anon_sym_PIPE] = ACTIONS(38),
        [anon_sym_TILDE] = ACTIONS(38),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(47),
        [anon_sym_anchor] = ACTIONS(50),
        [sym_inline_email_rx] = ACTIONS(53),
        [anon_sym_footnote] = ACTIONS(56),
        [anon_sym_footnoteref] = ACTIONS(56),
        [anon_sym_image] = ACTIONS(59),
        [anon_sym_icon] = ACTIONS(59),
        [anon_sym_kbd] = ACTIONS(62),
        [anon_sym_btn] = ACTIONS(62),
        [anon_sym_http] = ACTIONS(65),
        [anon_sym_https] = ACTIONS(65),
        [anon_sym_file] = ACTIONS(65),
        [anon_sym_ftp] = ACTIONS(65),
        [anon_sym_irc] = ACTIONS(65),
        [anon_sym_link] = ACTIONS(68),
        [anon_sym_mailto] = ACTIONS(68),
        [anon_sym_stem] = ACTIONS(71),
        [anon_sym_latexmath] = ACTIONS(71),
        [anon_sym_asciimath] = ACTIONS(71),
    },
    [4] = {
        [ts_builtin_sym_end] = ACTIONS(74),
        [anon_sym_LBRACE] = ACTIONS(76),
        [aux_sym_replacement_token1] = ACTIONS(78),
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
        [anon_sym_http] = ACTIONS(76),
        [anon_sym_https] = ACTIONS(76),
        [anon_sym_file] = ACTIONS(76),
        [anon_sym_ftp] = ACTIONS(76),
        [anon_sym_irc] = ACTIONS(76),
        [anon_sym_link] = ACTIONS(76),
        [anon_sym_mailto] = ACTIONS(76),
        [anon_sym_stem] = ACTIONS(76),
        [anon_sym_latexmath] = ACTIONS(76),
        [anon_sym_asciimath] = ACTIONS(76),
    },
    [5] = {
        [aux_sym_link_repeat1] = STATE(7),
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
        [anon_sym_DOT] = ACTIONS(84),
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
        [anon_sym_image] = ACTIONS(82),
        [anon_sym_icon] = ACTIONS(82),
        [anon_sym_kbd] = ACTIONS(82),
        [anon_sym_btn] = ACTIONS(82),
        [anon_sym_http] = ACTIONS(82),
        [anon_sym_https] = ACTIONS(82),
        [anon_sym_file] = ACTIONS(82),
        [anon_sym_ftp] = ACTIONS(82),
        [anon_sym_irc] = ACTIONS(82),
        [anon_sym_link] = ACTIONS(82),
        [anon_sym_mailto] = ACTIONS(82),
        [anon_sym_stem] = ACTIONS(82),
        [anon_sym_latexmath] = ACTIONS(82),
        [anon_sym_asciimath] = ACTIONS(82),
    },
    [6] = {
        [sym_link] = STATE(48),
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
        [anon_sym_http] = ACTIONS(86),
        [anon_sym_https] = ACTIONS(86),
        [anon_sym_file] = ACTIONS(86),
        [anon_sym_ftp] = ACTIONS(86),
        [anon_sym_irc] = ACTIONS(86),
        [anon_sym_link] = ACTIONS(76),
        [anon_sym_mailto] = ACTIONS(76),
        [anon_sym_stem] = ACTIONS(76),
        [anon_sym_latexmath] = ACTIONS(76),
        [anon_sym_asciimath] = ACTIONS(76),
    },
    [7] = {
        [aux_sym_link_repeat1] = STATE(8),
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
        [anon_sym_DOT] = ACTIONS(84),
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
        [anon_sym_image] = ACTIONS(90),
        [anon_sym_icon] = ACTIONS(90),
        [anon_sym_kbd] = ACTIONS(90),
        [anon_sym_btn] = ACTIONS(90),
        [anon_sym_http] = ACTIONS(90),
        [anon_sym_https] = ACTIONS(90),
        [anon_sym_file] = ACTIONS(90),
        [anon_sym_ftp] = ACTIONS(90),
        [anon_sym_irc] = ACTIONS(90),
        [anon_sym_link] = ACTIONS(90),
        [anon_sym_mailto] = ACTIONS(90),
        [anon_sym_stem] = ACTIONS(90),
        [anon_sym_latexmath] = ACTIONS(90),
        [anon_sym_asciimath] = ACTIONS(90),
    },
    [8] = {
        [aux_sym_link_repeat1] = STATE(8),
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
        [anon_sym_DOT] = ACTIONS(96),
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
        [anon_sym_image] = ACTIONS(94),
        [anon_sym_icon] = ACTIONS(94),
        [anon_sym_kbd] = ACTIONS(94),
        [anon_sym_btn] = ACTIONS(94),
        [anon_sym_http] = ACTIONS(94),
        [anon_sym_https] = ACTIONS(94),
        [anon_sym_file] = ACTIONS(94),
        [anon_sym_ftp] = ACTIONS(94),
        [anon_sym_irc] = ACTIONS(94),
        [anon_sym_link] = ACTIONS(94),
        [anon_sym_mailto] = ACTIONS(94),
        [anon_sym_stem] = ACTIONS(94),
        [anon_sym_latexmath] = ACTIONS(94),
        [anon_sym_asciimath] = ACTIONS(94),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_LBRACE] = ACTIONS(101),
        [anon_sym_RBRACE] = ACTIONS(101),
        [sym__word_no_digit] = ACTIONS(101),
        [sym__digits] = ACTIONS(101),
        [anon_sym_BANG] = ACTIONS(101),
        [anon_sym_DQUOTE] = ACTIONS(101),
        [anon_sym_POUND] = ACTIONS(101),
        [anon_sym_DOLLAR] = ACTIONS(101),
        [anon_sym_PERCENT] = ACTIONS(101),
        [anon_sym_AMP] = ACTIONS(101),
        [anon_sym_SQUOTE] = ACTIONS(101),
        [anon_sym_LPAREN] = ACTIONS(101),
        [anon_sym_RPAREN] = ACTIONS(101),
        [anon_sym_STAR] = ACTIONS(101),
        [anon_sym_PLUS] = ACTIONS(101),
        [anon_sym_COMMA] = ACTIONS(101),
        [anon_sym_DASH] = ACTIONS(101),
        [anon_sym_DOT] = ACTIONS(101),
        [anon_sym_SLASH] = ACTIONS(101),
        [anon_sym_COLON] = ACTIONS(101),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_LT] = ACTIONS(101),
        [anon_sym_EQ] = ACTIONS(101),
        [anon_sym_GT] = ACTIONS(101),
        [anon_sym_QMARK] = ACTIONS(101),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(101),
        [anon_sym_BSLASH] = ACTIONS(101),
        [anon_sym_RBRACK] = ACTIONS(101),
        [anon_sym_CARET] = ACTIONS(101),
        [anon_sym__] = ACTIONS(101),
        [anon_sym_BQUOTE] = ACTIONS(101),
        [anon_sym_PIPE] = ACTIONS(101),
        [anon_sym_TILDE] = ACTIONS(101),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(101),
        [anon_sym_anchor] = ACTIONS(101),
        [sym_inline_email_rx] = ACTIONS(101),
        [anon_sym_footnote] = ACTIONS(101),
        [anon_sym_footnoteref] = ACTIONS(101),
        [anon_sym_image] = ACTIONS(101),
        [anon_sym_icon] = ACTIONS(101),
        [anon_sym_kbd] = ACTIONS(101),
        [anon_sym_btn] = ACTIONS(101),
        [anon_sym_http] = ACTIONS(101),
        [anon_sym_https] = ACTIONS(101),
        [anon_sym_file] = ACTIONS(101),
        [anon_sym_ftp] = ACTIONS(101),
        [anon_sym_irc] = ACTIONS(101),
        [anon_sym_link] = ACTIONS(101),
        [anon_sym_mailto] = ACTIONS(101),
        [anon_sym_stem] = ACTIONS(101),
        [anon_sym_latexmath] = ACTIONS(101),
        [anon_sym_asciimath] = ACTIONS(101),
    },
    [10] = {
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
        [anon_sym_image] = ACTIONS(94),
        [anon_sym_icon] = ACTIONS(94),
        [anon_sym_kbd] = ACTIONS(94),
        [anon_sym_btn] = ACTIONS(94),
        [anon_sym_http] = ACTIONS(94),
        [anon_sym_https] = ACTIONS(94),
        [anon_sym_file] = ACTIONS(94),
        [anon_sym_ftp] = ACTIONS(94),
        [anon_sym_irc] = ACTIONS(94),
        [anon_sym_link] = ACTIONS(94),
        [anon_sym_mailto] = ACTIONS(94),
        [anon_sym_stem] = ACTIONS(94),
        [anon_sym_latexmath] = ACTIONS(94),
        [anon_sym_asciimath] = ACTIONS(94),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(103),
        [anon_sym_LBRACE] = ACTIONS(105),
        [anon_sym_RBRACE] = ACTIONS(105),
        [sym__word_no_digit] = ACTIONS(105),
        [sym__digits] = ACTIONS(105),
        [anon_sym_BANG] = ACTIONS(105),
        [anon_sym_DQUOTE] = ACTIONS(105),
        [anon_sym_POUND] = ACTIONS(105),
        [anon_sym_DOLLAR] = ACTIONS(105),
        [anon_sym_PERCENT] = ACTIONS(105),
        [anon_sym_AMP] = ACTIONS(105),
        [anon_sym_SQUOTE] = ACTIONS(105),
        [anon_sym_LPAREN] = ACTIONS(105),
        [anon_sym_RPAREN] = ACTIONS(105),
        [anon_sym_STAR] = ACTIONS(105),
        [anon_sym_PLUS] = ACTIONS(105),
        [anon_sym_COMMA] = ACTIONS(105),
        [anon_sym_DASH] = ACTIONS(105),
        [anon_sym_DOT] = ACTIONS(105),
        [anon_sym_SLASH] = ACTIONS(105),
        [anon_sym_COLON] = ACTIONS(105),
        [anon_sym_SEMI] = ACTIONS(105),
        [anon_sym_LT] = ACTIONS(105),
        [anon_sym_EQ] = ACTIONS(105),
        [anon_sym_GT] = ACTIONS(105),
        [anon_sym_QMARK] = ACTIONS(105),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(105),
        [anon_sym_BSLASH] = ACTIONS(105),
        [anon_sym_RBRACK] = ACTIONS(105),
        [anon_sym_CARET] = ACTIONS(105),
        [anon_sym__] = ACTIONS(105),
        [anon_sym_BQUOTE] = ACTIONS(105),
        [anon_sym_PIPE] = ACTIONS(105),
        [anon_sym_TILDE] = ACTIONS(105),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(105),
        [anon_sym_anchor] = ACTIONS(105),
        [sym_inline_email_rx] = ACTIONS(105),
        [anon_sym_footnote] = ACTIONS(105),
        [anon_sym_footnoteref] = ACTIONS(105),
        [anon_sym_image] = ACTIONS(105),
        [anon_sym_icon] = ACTIONS(105),
        [anon_sym_kbd] = ACTIONS(105),
        [anon_sym_btn] = ACTIONS(105),
        [anon_sym_http] = ACTIONS(105),
        [anon_sym_https] = ACTIONS(105),
        [anon_sym_file] = ACTIONS(105),
        [anon_sym_ftp] = ACTIONS(105),
        [anon_sym_irc] = ACTIONS(105),
        [anon_sym_link] = ACTIONS(105),
        [anon_sym_mailto] = ACTIONS(105),
        [anon_sym_stem] = ACTIONS(105),
        [anon_sym_latexmath] = ACTIONS(105),
        [anon_sym_asciimath] = ACTIONS(105),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [anon_sym_RBRACE] = ACTIONS(109),
        [sym__word_no_digit] = ACTIONS(109),
        [sym__digits] = ACTIONS(109),
        [anon_sym_BANG] = ACTIONS(109),
        [anon_sym_DQUOTE] = ACTIONS(109),
        [anon_sym_POUND] = ACTIONS(109),
        [anon_sym_DOLLAR] = ACTIONS(109),
        [anon_sym_PERCENT] = ACTIONS(109),
        [anon_sym_AMP] = ACTIONS(109),
        [anon_sym_SQUOTE] = ACTIONS(109),
        [anon_sym_LPAREN] = ACTIONS(109),
        [anon_sym_RPAREN] = ACTIONS(109),
        [anon_sym_STAR] = ACTIONS(109),
        [anon_sym_PLUS] = ACTIONS(109),
        [anon_sym_COMMA] = ACTIONS(109),
        [anon_sym_DASH] = ACTIONS(109),
        [anon_sym_DOT] = ACTIONS(109),
        [anon_sym_SLASH] = ACTIONS(109),
        [anon_sym_COLON] = ACTIONS(109),
        [anon_sym_SEMI] = ACTIONS(109),
        [anon_sym_LT] = ACTIONS(109),
        [anon_sym_EQ] = ACTIONS(109),
        [anon_sym_GT] = ACTIONS(109),
        [anon_sym_QMARK] = ACTIONS(109),
        [anon_sym_AT] = ACTIONS(109),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_BSLASH] = ACTIONS(109),
        [anon_sym_RBRACK] = ACTIONS(109),
        [anon_sym_CARET] = ACTIONS(109),
        [anon_sym__] = ACTIONS(109),
        [anon_sym_BQUOTE] = ACTIONS(109),
        [anon_sym_PIPE] = ACTIONS(109),
        [anon_sym_TILDE] = ACTIONS(109),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(109),
        [anon_sym_anchor] = ACTIONS(109),
        [sym_inline_email_rx] = ACTIONS(109),
        [anon_sym_footnote] = ACTIONS(109),
        [anon_sym_footnoteref] = ACTIONS(109),
        [anon_sym_image] = ACTIONS(109),
        [anon_sym_icon] = ACTIONS(109),
        [anon_sym_kbd] = ACTIONS(109),
        [anon_sym_btn] = ACTIONS(109),
        [anon_sym_http] = ACTIONS(109),
        [anon_sym_https] = ACTIONS(109),
        [anon_sym_file] = ACTIONS(109),
        [anon_sym_ftp] = ACTIONS(109),
        [anon_sym_irc] = ACTIONS(109),
        [anon_sym_link] = ACTIONS(109),
        [anon_sym_mailto] = ACTIONS(109),
        [anon_sym_stem] = ACTIONS(109),
        [anon_sym_latexmath] = ACTIONS(109),
        [anon_sym_asciimath] = ACTIONS(109),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(111),
        [anon_sym_LBRACE] = ACTIONS(113),
        [anon_sym_RBRACE] = ACTIONS(113),
        [sym__word_no_digit] = ACTIONS(113),
        [sym__digits] = ACTIONS(113),
        [anon_sym_BANG] = ACTIONS(113),
        [anon_sym_DQUOTE] = ACTIONS(113),
        [anon_sym_POUND] = ACTIONS(113),
        [anon_sym_DOLLAR] = ACTIONS(113),
        [anon_sym_PERCENT] = ACTIONS(113),
        [anon_sym_AMP] = ACTIONS(113),
        [anon_sym_SQUOTE] = ACTIONS(113),
        [anon_sym_LPAREN] = ACTIONS(113),
        [anon_sym_RPAREN] = ACTIONS(113),
        [anon_sym_STAR] = ACTIONS(113),
        [anon_sym_PLUS] = ACTIONS(113),
        [anon_sym_COMMA] = ACTIONS(113),
        [anon_sym_DASH] = ACTIONS(113),
        [anon_sym_DOT] = ACTIONS(113),
        [anon_sym_SLASH] = ACTIONS(113),
        [anon_sym_COLON] = ACTIONS(113),
        [anon_sym_SEMI] = ACTIONS(113),
        [anon_sym_LT] = ACTIONS(113),
        [anon_sym_EQ] = ACTIONS(113),
        [anon_sym_GT] = ACTIONS(113),
        [anon_sym_QMARK] = ACTIONS(113),
        [anon_sym_AT] = ACTIONS(113),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_BSLASH] = ACTIONS(113),
        [anon_sym_RBRACK] = ACTIONS(113),
        [anon_sym_CARET] = ACTIONS(113),
        [anon_sym__] = ACTIONS(113),
        [anon_sym_BQUOTE] = ACTIONS(113),
        [anon_sym_PIPE] = ACTIONS(113),
        [anon_sym_TILDE] = ACTIONS(113),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(113),
        [anon_sym_anchor] = ACTIONS(113),
        [sym_inline_email_rx] = ACTIONS(113),
        [anon_sym_footnote] = ACTIONS(113),
        [anon_sym_footnoteref] = ACTIONS(113),
        [anon_sym_image] = ACTIONS(113),
        [anon_sym_icon] = ACTIONS(113),
        [anon_sym_kbd] = ACTIONS(113),
        [anon_sym_btn] = ACTIONS(113),
        [anon_sym_http] = ACTIONS(113),
        [anon_sym_https] = ACTIONS(113),
        [anon_sym_file] = ACTIONS(113),
        [anon_sym_ftp] = ACTIONS(113),
        [anon_sym_irc] = ACTIONS(113),
        [anon_sym_link] = ACTIONS(113),
        [anon_sym_mailto] = ACTIONS(113),
        [anon_sym_stem] = ACTIONS(113),
        [anon_sym_latexmath] = ACTIONS(113),
        [anon_sym_asciimath] = ACTIONS(113),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(115),
        [anon_sym_LBRACE] = ACTIONS(117),
        [anon_sym_RBRACE] = ACTIONS(117),
        [sym__word_no_digit] = ACTIONS(117),
        [sym__digits] = ACTIONS(117),
        [anon_sym_BANG] = ACTIONS(117),
        [anon_sym_DQUOTE] = ACTIONS(117),
        [anon_sym_POUND] = ACTIONS(117),
        [anon_sym_DOLLAR] = ACTIONS(117),
        [anon_sym_PERCENT] = ACTIONS(117),
        [anon_sym_AMP] = ACTIONS(117),
        [anon_sym_SQUOTE] = ACTIONS(117),
        [anon_sym_LPAREN] = ACTIONS(117),
        [anon_sym_RPAREN] = ACTIONS(117),
        [anon_sym_STAR] = ACTIONS(117),
        [anon_sym_PLUS] = ACTIONS(117),
        [anon_sym_COMMA] = ACTIONS(117),
        [anon_sym_DASH] = ACTIONS(117),
        [anon_sym_DOT] = ACTIONS(117),
        [anon_sym_SLASH] = ACTIONS(117),
        [anon_sym_COLON] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_LT] = ACTIONS(117),
        [anon_sym_EQ] = ACTIONS(117),
        [anon_sym_GT] = ACTIONS(117),
        [anon_sym_QMARK] = ACTIONS(117),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_BSLASH] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(117),
        [anon_sym_CARET] = ACTIONS(117),
        [anon_sym__] = ACTIONS(117),
        [anon_sym_BQUOTE] = ACTIONS(117),
        [anon_sym_PIPE] = ACTIONS(117),
        [anon_sym_TILDE] = ACTIONS(117),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(117),
        [anon_sym_anchor] = ACTIONS(117),
        [sym_inline_email_rx] = ACTIONS(117),
        [anon_sym_footnote] = ACTIONS(117),
        [anon_sym_footnoteref] = ACTIONS(117),
        [anon_sym_image] = ACTIONS(117),
        [anon_sym_icon] = ACTIONS(117),
        [anon_sym_kbd] = ACTIONS(117),
        [anon_sym_btn] = ACTIONS(117),
        [anon_sym_http] = ACTIONS(117),
        [anon_sym_https] = ACTIONS(117),
        [anon_sym_file] = ACTIONS(117),
        [anon_sym_ftp] = ACTIONS(117),
        [anon_sym_irc] = ACTIONS(117),
        [anon_sym_link] = ACTIONS(117),
        [anon_sym_mailto] = ACTIONS(117),
        [anon_sym_stem] = ACTIONS(117),
        [anon_sym_latexmath] = ACTIONS(117),
        [anon_sym_asciimath] = ACTIONS(117),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [anon_sym_RBRACE] = ACTIONS(121),
        [sym__word_no_digit] = ACTIONS(121),
        [sym__digits] = ACTIONS(121),
        [anon_sym_BANG] = ACTIONS(121),
        [anon_sym_DQUOTE] = ACTIONS(121),
        [anon_sym_POUND] = ACTIONS(121),
        [anon_sym_DOLLAR] = ACTIONS(121),
        [anon_sym_PERCENT] = ACTIONS(121),
        [anon_sym_AMP] = ACTIONS(121),
        [anon_sym_SQUOTE] = ACTIONS(121),
        [anon_sym_LPAREN] = ACTIONS(121),
        [anon_sym_RPAREN] = ACTIONS(121),
        [anon_sym_STAR] = ACTIONS(121),
        [anon_sym_PLUS] = ACTIONS(121),
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_DASH] = ACTIONS(121),
        [anon_sym_DOT] = ACTIONS(121),
        [anon_sym_SLASH] = ACTIONS(121),
        [anon_sym_COLON] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_LT] = ACTIONS(121),
        [anon_sym_EQ] = ACTIONS(121),
        [anon_sym_GT] = ACTIONS(121),
        [anon_sym_QMARK] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_BSLASH] = ACTIONS(121),
        [anon_sym_RBRACK] = ACTIONS(121),
        [anon_sym_CARET] = ACTIONS(121),
        [anon_sym__] = ACTIONS(121),
        [anon_sym_BQUOTE] = ACTIONS(121),
        [anon_sym_PIPE] = ACTIONS(121),
        [anon_sym_TILDE] = ACTIONS(121),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(121),
        [anon_sym_anchor] = ACTIONS(121),
        [sym_inline_email_rx] = ACTIONS(121),
        [anon_sym_footnote] = ACTIONS(121),
        [anon_sym_footnoteref] = ACTIONS(121),
        [anon_sym_image] = ACTIONS(121),
        [anon_sym_icon] = ACTIONS(121),
        [anon_sym_kbd] = ACTIONS(121),
        [anon_sym_btn] = ACTIONS(121),
        [anon_sym_http] = ACTIONS(121),
        [anon_sym_https] = ACTIONS(121),
        [anon_sym_file] = ACTIONS(121),
        [anon_sym_ftp] = ACTIONS(121),
        [anon_sym_irc] = ACTIONS(121),
        [anon_sym_link] = ACTIONS(121),
        [anon_sym_mailto] = ACTIONS(121),
        [anon_sym_stem] = ACTIONS(121),
        [anon_sym_latexmath] = ACTIONS(121),
        [anon_sym_asciimath] = ACTIONS(121),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [anon_sym_RBRACE] = ACTIONS(125),
        [sym__word_no_digit] = ACTIONS(125),
        [sym__digits] = ACTIONS(125),
        [anon_sym_BANG] = ACTIONS(125),
        [anon_sym_DQUOTE] = ACTIONS(125),
        [anon_sym_POUND] = ACTIONS(125),
        [anon_sym_DOLLAR] = ACTIONS(125),
        [anon_sym_PERCENT] = ACTIONS(125),
        [anon_sym_AMP] = ACTIONS(125),
        [anon_sym_SQUOTE] = ACTIONS(125),
        [anon_sym_LPAREN] = ACTIONS(125),
        [anon_sym_RPAREN] = ACTIONS(125),
        [anon_sym_STAR] = ACTIONS(125),
        [anon_sym_PLUS] = ACTIONS(125),
        [anon_sym_COMMA] = ACTIONS(125),
        [anon_sym_DASH] = ACTIONS(125),
        [anon_sym_DOT] = ACTIONS(125),
        [anon_sym_SLASH] = ACTIONS(125),
        [anon_sym_COLON] = ACTIONS(125),
        [anon_sym_SEMI] = ACTIONS(125),
        [anon_sym_LT] = ACTIONS(125),
        [anon_sym_EQ] = ACTIONS(125),
        [anon_sym_GT] = ACTIONS(125),
        [anon_sym_QMARK] = ACTIONS(125),
        [anon_sym_AT] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(125),
        [anon_sym_BSLASH] = ACTIONS(125),
        [anon_sym_RBRACK] = ACTIONS(125),
        [anon_sym_CARET] = ACTIONS(125),
        [anon_sym__] = ACTIONS(125),
        [anon_sym_BQUOTE] = ACTIONS(125),
        [anon_sym_PIPE] = ACTIONS(125),
        [anon_sym_TILDE] = ACTIONS(125),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(125),
        [anon_sym_anchor] = ACTIONS(125),
        [sym_inline_email_rx] = ACTIONS(125),
        [anon_sym_footnote] = ACTIONS(125),
        [anon_sym_footnoteref] = ACTIONS(125),
        [anon_sym_image] = ACTIONS(125),
        [anon_sym_icon] = ACTIONS(125),
        [anon_sym_kbd] = ACTIONS(125),
        [anon_sym_btn] = ACTIONS(125),
        [anon_sym_http] = ACTIONS(125),
        [anon_sym_https] = ACTIONS(125),
        [anon_sym_file] = ACTIONS(125),
        [anon_sym_ftp] = ACTIONS(125),
        [anon_sym_irc] = ACTIONS(125),
        [anon_sym_link] = ACTIONS(125),
        [anon_sym_mailto] = ACTIONS(125),
        [anon_sym_stem] = ACTIONS(125),
        [anon_sym_latexmath] = ACTIONS(125),
        [anon_sym_asciimath] = ACTIONS(125),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [anon_sym_RBRACE] = ACTIONS(129),
        [sym__word_no_digit] = ACTIONS(129),
        [sym__digits] = ACTIONS(129),
        [anon_sym_BANG] = ACTIONS(129),
        [anon_sym_DQUOTE] = ACTIONS(129),
        [anon_sym_POUND] = ACTIONS(129),
        [anon_sym_DOLLAR] = ACTIONS(129),
        [anon_sym_PERCENT] = ACTIONS(129),
        [anon_sym_AMP] = ACTIONS(129),
        [anon_sym_SQUOTE] = ACTIONS(129),
        [anon_sym_LPAREN] = ACTIONS(129),
        [anon_sym_RPAREN] = ACTIONS(129),
        [anon_sym_STAR] = ACTIONS(129),
        [anon_sym_PLUS] = ACTIONS(129),
        [anon_sym_COMMA] = ACTIONS(129),
        [anon_sym_DASH] = ACTIONS(129),
        [anon_sym_DOT] = ACTIONS(129),
        [anon_sym_SLASH] = ACTIONS(129),
        [anon_sym_COLON] = ACTIONS(129),
        [anon_sym_SEMI] = ACTIONS(129),
        [anon_sym_LT] = ACTIONS(129),
        [anon_sym_EQ] = ACTIONS(129),
        [anon_sym_GT] = ACTIONS(129),
        [anon_sym_QMARK] = ACTIONS(129),
        [anon_sym_AT] = ACTIONS(129),
        [anon_sym_LBRACK] = ACTIONS(129),
        [anon_sym_BSLASH] = ACTIONS(129),
        [anon_sym_RBRACK] = ACTIONS(129),
        [anon_sym_CARET] = ACTIONS(129),
        [anon_sym__] = ACTIONS(129),
        [anon_sym_BQUOTE] = ACTIONS(129),
        [anon_sym_PIPE] = ACTIONS(129),
        [anon_sym_TILDE] = ACTIONS(129),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(129),
        [anon_sym_anchor] = ACTIONS(129),
        [sym_inline_email_rx] = ACTIONS(129),
        [anon_sym_footnote] = ACTIONS(129),
        [anon_sym_footnoteref] = ACTIONS(129),
        [anon_sym_image] = ACTIONS(129),
        [anon_sym_icon] = ACTIONS(129),
        [anon_sym_kbd] = ACTIONS(129),
        [anon_sym_btn] = ACTIONS(129),
        [anon_sym_http] = ACTIONS(129),
        [anon_sym_https] = ACTIONS(129),
        [anon_sym_file] = ACTIONS(129),
        [anon_sym_ftp] = ACTIONS(129),
        [anon_sym_irc] = ACTIONS(129),
        [anon_sym_link] = ACTIONS(129),
        [anon_sym_mailto] = ACTIONS(129),
        [anon_sym_stem] = ACTIONS(129),
        [anon_sym_latexmath] = ACTIONS(129),
        [anon_sym_asciimath] = ACTIONS(129),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(131),
        [anon_sym_LBRACE] = ACTIONS(133),
        [anon_sym_RBRACE] = ACTIONS(133),
        [sym__word_no_digit] = ACTIONS(133),
        [sym__digits] = ACTIONS(133),
        [anon_sym_BANG] = ACTIONS(133),
        [anon_sym_DQUOTE] = ACTIONS(133),
        [anon_sym_POUND] = ACTIONS(133),
        [anon_sym_DOLLAR] = ACTIONS(133),
        [anon_sym_PERCENT] = ACTIONS(133),
        [anon_sym_AMP] = ACTIONS(133),
        [anon_sym_SQUOTE] = ACTIONS(133),
        [anon_sym_LPAREN] = ACTIONS(133),
        [anon_sym_RPAREN] = ACTIONS(133),
        [anon_sym_STAR] = ACTIONS(133),
        [anon_sym_PLUS] = ACTIONS(133),
        [anon_sym_COMMA] = ACTIONS(133),
        [anon_sym_DASH] = ACTIONS(133),
        [anon_sym_DOT] = ACTIONS(133),
        [anon_sym_SLASH] = ACTIONS(133),
        [anon_sym_COLON] = ACTIONS(133),
        [anon_sym_SEMI] = ACTIONS(133),
        [anon_sym_LT] = ACTIONS(133),
        [anon_sym_EQ] = ACTIONS(133),
        [anon_sym_GT] = ACTIONS(133),
        [anon_sym_QMARK] = ACTIONS(133),
        [anon_sym_AT] = ACTIONS(133),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_BSLASH] = ACTIONS(133),
        [anon_sym_RBRACK] = ACTIONS(133),
        [anon_sym_CARET] = ACTIONS(133),
        [anon_sym__] = ACTIONS(133),
        [anon_sym_BQUOTE] = ACTIONS(133),
        [anon_sym_PIPE] = ACTIONS(133),
        [anon_sym_TILDE] = ACTIONS(133),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(133),
        [anon_sym_anchor] = ACTIONS(133),
        [sym_inline_email_rx] = ACTIONS(133),
        [anon_sym_footnote] = ACTIONS(133),
        [anon_sym_footnoteref] = ACTIONS(133),
        [anon_sym_image] = ACTIONS(133),
        [anon_sym_icon] = ACTIONS(133),
        [anon_sym_kbd] = ACTIONS(133),
        [anon_sym_btn] = ACTIONS(133),
        [anon_sym_http] = ACTIONS(133),
        [anon_sym_https] = ACTIONS(133),
        [anon_sym_file] = ACTIONS(133),
        [anon_sym_ftp] = ACTIONS(133),
        [anon_sym_irc] = ACTIONS(133),
        [anon_sym_link] = ACTIONS(133),
        [anon_sym_mailto] = ACTIONS(133),
        [anon_sym_stem] = ACTIONS(133),
        [anon_sym_latexmath] = ACTIONS(133),
        [anon_sym_asciimath] = ACTIONS(133),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_LBRACE] = ACTIONS(137),
        [anon_sym_RBRACE] = ACTIONS(137),
        [sym__word_no_digit] = ACTIONS(137),
        [sym__digits] = ACTIONS(137),
        [anon_sym_BANG] = ACTIONS(137),
        [anon_sym_DQUOTE] = ACTIONS(137),
        [anon_sym_POUND] = ACTIONS(137),
        [anon_sym_DOLLAR] = ACTIONS(137),
        [anon_sym_PERCENT] = ACTIONS(137),
        [anon_sym_AMP] = ACTIONS(137),
        [anon_sym_SQUOTE] = ACTIONS(137),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_RPAREN] = ACTIONS(137),
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(137),
        [anon_sym_COMMA] = ACTIONS(137),
        [anon_sym_DASH] = ACTIONS(137),
        [anon_sym_DOT] = ACTIONS(137),
        [anon_sym_SLASH] = ACTIONS(137),
        [anon_sym_COLON] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_LT] = ACTIONS(137),
        [anon_sym_EQ] = ACTIONS(137),
        [anon_sym_GT] = ACTIONS(137),
        [anon_sym_QMARK] = ACTIONS(137),
        [anon_sym_AT] = ACTIONS(137),
        [anon_sym_LBRACK] = ACTIONS(137),
        [anon_sym_BSLASH] = ACTIONS(137),
        [anon_sym_RBRACK] = ACTIONS(137),
        [anon_sym_CARET] = ACTIONS(137),
        [anon_sym__] = ACTIONS(137),
        [anon_sym_BQUOTE] = ACTIONS(137),
        [anon_sym_PIPE] = ACTIONS(137),
        [anon_sym_TILDE] = ACTIONS(137),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(137),
        [anon_sym_anchor] = ACTIONS(137),
        [sym_inline_email_rx] = ACTIONS(137),
        [anon_sym_footnote] = ACTIONS(137),
        [anon_sym_footnoteref] = ACTIONS(137),
        [anon_sym_image] = ACTIONS(137),
        [anon_sym_icon] = ACTIONS(137),
        [anon_sym_kbd] = ACTIONS(137),
        [anon_sym_btn] = ACTIONS(137),
        [anon_sym_http] = ACTIONS(137),
        [anon_sym_https] = ACTIONS(137),
        [anon_sym_file] = ACTIONS(137),
        [anon_sym_ftp] = ACTIONS(137),
        [anon_sym_irc] = ACTIONS(137),
        [anon_sym_link] = ACTIONS(137),
        [anon_sym_mailto] = ACTIONS(137),
        [anon_sym_stem] = ACTIONS(137),
        [anon_sym_latexmath] = ACTIONS(137),
        [anon_sym_asciimath] = ACTIONS(137),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(139),
        [anon_sym_LBRACE] = ACTIONS(141),
        [anon_sym_RBRACE] = ACTIONS(141),
        [sym__word_no_digit] = ACTIONS(141),
        [sym__digits] = ACTIONS(141),
        [anon_sym_BANG] = ACTIONS(141),
        [anon_sym_DQUOTE] = ACTIONS(141),
        [anon_sym_POUND] = ACTIONS(141),
        [anon_sym_DOLLAR] = ACTIONS(141),
        [anon_sym_PERCENT] = ACTIONS(141),
        [anon_sym_AMP] = ACTIONS(141),
        [anon_sym_SQUOTE] = ACTIONS(141),
        [anon_sym_LPAREN] = ACTIONS(141),
        [anon_sym_RPAREN] = ACTIONS(141),
        [anon_sym_STAR] = ACTIONS(141),
        [anon_sym_PLUS] = ACTIONS(141),
        [anon_sym_COMMA] = ACTIONS(141),
        [anon_sym_DASH] = ACTIONS(141),
        [anon_sym_DOT] = ACTIONS(141),
        [anon_sym_SLASH] = ACTIONS(141),
        [anon_sym_COLON] = ACTIONS(141),
        [anon_sym_SEMI] = ACTIONS(141),
        [anon_sym_LT] = ACTIONS(141),
        [anon_sym_EQ] = ACTIONS(141),
        [anon_sym_GT] = ACTIONS(141),
        [anon_sym_QMARK] = ACTIONS(141),
        [anon_sym_AT] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_BSLASH] = ACTIONS(141),
        [anon_sym_RBRACK] = ACTIONS(141),
        [anon_sym_CARET] = ACTIONS(141),
        [anon_sym__] = ACTIONS(141),
        [anon_sym_BQUOTE] = ACTIONS(141),
        [anon_sym_PIPE] = ACTIONS(141),
        [anon_sym_TILDE] = ACTIONS(141),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(141),
        [anon_sym_anchor] = ACTIONS(141),
        [sym_inline_email_rx] = ACTIONS(141),
        [anon_sym_footnote] = ACTIONS(141),
        [anon_sym_footnoteref] = ACTIONS(141),
        [anon_sym_image] = ACTIONS(141),
        [anon_sym_icon] = ACTIONS(141),
        [anon_sym_kbd] = ACTIONS(141),
        [anon_sym_btn] = ACTIONS(141),
        [anon_sym_http] = ACTIONS(141),
        [anon_sym_https] = ACTIONS(141),
        [anon_sym_file] = ACTIONS(141),
        [anon_sym_ftp] = ACTIONS(141),
        [anon_sym_irc] = ACTIONS(141),
        [anon_sym_link] = ACTIONS(141),
        [anon_sym_mailto] = ACTIONS(141),
        [anon_sym_stem] = ACTIONS(141),
        [anon_sym_latexmath] = ACTIONS(141),
        [anon_sym_asciimath] = ACTIONS(141),
    },
    [21] = {
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
        [anon_sym_http] = ACTIONS(76),
        [anon_sym_https] = ACTIONS(76),
        [anon_sym_file] = ACTIONS(76),
        [anon_sym_ftp] = ACTIONS(76),
        [anon_sym_irc] = ACTIONS(76),
        [anon_sym_link] = ACTIONS(76),
        [anon_sym_mailto] = ACTIONS(76),
        [anon_sym_stem] = ACTIONS(76),
        [anon_sym_latexmath] = ACTIONS(76),
        [anon_sym_asciimath] = ACTIONS(76),
    },
    [22] = {
        [ts_builtin_sym_end] = ACTIONS(143),
        [anon_sym_LBRACE] = ACTIONS(145),
        [anon_sym_RBRACE] = ACTIONS(145),
        [sym__word_no_digit] = ACTIONS(145),
        [sym__digits] = ACTIONS(145),
        [anon_sym_BANG] = ACTIONS(145),
        [anon_sym_DQUOTE] = ACTIONS(145),
        [anon_sym_POUND] = ACTIONS(145),
        [anon_sym_DOLLAR] = ACTIONS(145),
        [anon_sym_PERCENT] = ACTIONS(145),
        [anon_sym_AMP] = ACTIONS(145),
        [anon_sym_SQUOTE] = ACTIONS(145),
        [anon_sym_LPAREN] = ACTIONS(145),
        [anon_sym_RPAREN] = ACTIONS(145),
        [anon_sym_STAR] = ACTIONS(145),
        [anon_sym_PLUS] = ACTIONS(145),
        [anon_sym_COMMA] = ACTIONS(145),
        [anon_sym_DASH] = ACTIONS(145),
        [anon_sym_DOT] = ACTIONS(145),
        [anon_sym_SLASH] = ACTIONS(145),
        [anon_sym_COLON] = ACTIONS(145),
        [anon_sym_SEMI] = ACTIONS(145),
        [anon_sym_LT] = ACTIONS(145),
        [anon_sym_EQ] = ACTIONS(145),
        [anon_sym_GT] = ACTIONS(145),
        [anon_sym_QMARK] = ACTIONS(145),
        [anon_sym_AT] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_BSLASH] = ACTIONS(145),
        [anon_sym_RBRACK] = ACTIONS(145),
        [anon_sym_CARET] = ACTIONS(145),
        [anon_sym__] = ACTIONS(145),
        [anon_sym_BQUOTE] = ACTIONS(145),
        [anon_sym_PIPE] = ACTIONS(145),
        [anon_sym_TILDE] = ACTIONS(145),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(145),
        [anon_sym_anchor] = ACTIONS(145),
        [sym_inline_email_rx] = ACTIONS(145),
        [anon_sym_footnote] = ACTIONS(145),
        [anon_sym_footnoteref] = ACTIONS(145),
        [anon_sym_image] = ACTIONS(145),
        [anon_sym_icon] = ACTIONS(145),
        [anon_sym_kbd] = ACTIONS(145),
        [anon_sym_btn] = ACTIONS(145),
        [anon_sym_http] = ACTIONS(145),
        [anon_sym_https] = ACTIONS(145),
        [anon_sym_file] = ACTIONS(145),
        [anon_sym_ftp] = ACTIONS(145),
        [anon_sym_irc] = ACTIONS(145),
        [anon_sym_link] = ACTIONS(145),
        [anon_sym_mailto] = ACTIONS(145),
        [anon_sym_stem] = ACTIONS(145),
        [anon_sym_latexmath] = ACTIONS(145),
        [anon_sym_asciimath] = ACTIONS(145),
    },
    [23] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_LBRACE] = ACTIONS(149),
        [anon_sym_RBRACE] = ACTIONS(149),
        [sym__word_no_digit] = ACTIONS(149),
        [sym__digits] = ACTIONS(149),
        [anon_sym_BANG] = ACTIONS(149),
        [anon_sym_DQUOTE] = ACTIONS(149),
        [anon_sym_POUND] = ACTIONS(149),
        [anon_sym_DOLLAR] = ACTIONS(149),
        [anon_sym_PERCENT] = ACTIONS(149),
        [anon_sym_AMP] = ACTIONS(149),
        [anon_sym_SQUOTE] = ACTIONS(149),
        [anon_sym_LPAREN] = ACTIONS(149),
        [anon_sym_RPAREN] = ACTIONS(149),
        [anon_sym_STAR] = ACTIONS(149),
        [anon_sym_PLUS] = ACTIONS(149),
        [anon_sym_COMMA] = ACTIONS(149),
        [anon_sym_DASH] = ACTIONS(149),
        [anon_sym_DOT] = ACTIONS(149),
        [anon_sym_SLASH] = ACTIONS(149),
        [anon_sym_COLON] = ACTIONS(149),
        [anon_sym_SEMI] = ACTIONS(149),
        [anon_sym_LT] = ACTIONS(149),
        [anon_sym_EQ] = ACTIONS(149),
        [anon_sym_GT] = ACTIONS(149),
        [anon_sym_QMARK] = ACTIONS(149),
        [anon_sym_AT] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(149),
        [anon_sym_BSLASH] = ACTIONS(149),
        [anon_sym_RBRACK] = ACTIONS(149),
        [anon_sym_CARET] = ACTIONS(149),
        [anon_sym__] = ACTIONS(149),
        [anon_sym_BQUOTE] = ACTIONS(149),
        [anon_sym_PIPE] = ACTIONS(149),
        [anon_sym_TILDE] = ACTIONS(149),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(149),
        [anon_sym_anchor] = ACTIONS(149),
        [sym_inline_email_rx] = ACTIONS(149),
        [anon_sym_footnote] = ACTIONS(149),
        [anon_sym_footnoteref] = ACTIONS(149),
        [anon_sym_image] = ACTIONS(149),
        [anon_sym_icon] = ACTIONS(149),
        [anon_sym_kbd] = ACTIONS(149),
        [anon_sym_btn] = ACTIONS(149),
        [anon_sym_http] = ACTIONS(149),
        [anon_sym_https] = ACTIONS(149),
        [anon_sym_file] = ACTIONS(149),
        [anon_sym_ftp] = ACTIONS(149),
        [anon_sym_irc] = ACTIONS(149),
        [anon_sym_link] = ACTIONS(149),
        [anon_sym_mailto] = ACTIONS(149),
        [anon_sym_stem] = ACTIONS(149),
        [anon_sym_latexmath] = ACTIONS(149),
        [anon_sym_asciimath] = ACTIONS(149),
    },
    [24] = {
        [ts_builtin_sym_end] = ACTIONS(151),
        [anon_sym_LBRACE] = ACTIONS(153),
        [anon_sym_RBRACE] = ACTIONS(153),
        [sym__word_no_digit] = ACTIONS(153),
        [sym__digits] = ACTIONS(153),
        [anon_sym_BANG] = ACTIONS(153),
        [anon_sym_DQUOTE] = ACTIONS(153),
        [anon_sym_POUND] = ACTIONS(153),
        [anon_sym_DOLLAR] = ACTIONS(153),
        [anon_sym_PERCENT] = ACTIONS(153),
        [anon_sym_AMP] = ACTIONS(153),
        [anon_sym_SQUOTE] = ACTIONS(153),
        [anon_sym_LPAREN] = ACTIONS(153),
        [anon_sym_RPAREN] = ACTIONS(153),
        [anon_sym_STAR] = ACTIONS(153),
        [anon_sym_PLUS] = ACTIONS(153),
        [anon_sym_COMMA] = ACTIONS(153),
        [anon_sym_DASH] = ACTIONS(153),
        [anon_sym_DOT] = ACTIONS(153),
        [anon_sym_SLASH] = ACTIONS(153),
        [anon_sym_COLON] = ACTIONS(153),
        [anon_sym_SEMI] = ACTIONS(153),
        [anon_sym_LT] = ACTIONS(153),
        [anon_sym_EQ] = ACTIONS(153),
        [anon_sym_GT] = ACTIONS(153),
        [anon_sym_QMARK] = ACTIONS(153),
        [anon_sym_AT] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(153),
        [anon_sym_BSLASH] = ACTIONS(153),
        [anon_sym_RBRACK] = ACTIONS(153),
        [anon_sym_CARET] = ACTIONS(153),
        [anon_sym__] = ACTIONS(153),
        [anon_sym_BQUOTE] = ACTIONS(153),
        [anon_sym_PIPE] = ACTIONS(153),
        [anon_sym_TILDE] = ACTIONS(153),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(153),
        [anon_sym_anchor] = ACTIONS(153),
        [sym_inline_email_rx] = ACTIONS(153),
        [anon_sym_footnote] = ACTIONS(153),
        [anon_sym_footnoteref] = ACTIONS(153),
        [anon_sym_image] = ACTIONS(153),
        [anon_sym_icon] = ACTIONS(153),
        [anon_sym_kbd] = ACTIONS(153),
        [anon_sym_btn] = ACTIONS(153),
        [anon_sym_http] = ACTIONS(153),
        [anon_sym_https] = ACTIONS(153),
        [anon_sym_file] = ACTIONS(153),
        [anon_sym_ftp] = ACTIONS(153),
        [anon_sym_irc] = ACTIONS(153),
        [anon_sym_link] = ACTIONS(153),
        [anon_sym_mailto] = ACTIONS(153),
        [anon_sym_stem] = ACTIONS(153),
        [anon_sym_latexmath] = ACTIONS(153),
        [anon_sym_asciimath] = ACTIONS(153),
    },
    [25] = {
        [ts_builtin_sym_end] = ACTIONS(155),
        [anon_sym_LBRACE] = ACTIONS(157),
        [anon_sym_RBRACE] = ACTIONS(157),
        [sym__word_no_digit] = ACTIONS(157),
        [sym__digits] = ACTIONS(157),
        [anon_sym_BANG] = ACTIONS(157),
        [anon_sym_DQUOTE] = ACTIONS(157),
        [anon_sym_POUND] = ACTIONS(157),
        [anon_sym_DOLLAR] = ACTIONS(157),
        [anon_sym_PERCENT] = ACTIONS(157),
        [anon_sym_AMP] = ACTIONS(157),
        [anon_sym_SQUOTE] = ACTIONS(157),
        [anon_sym_LPAREN] = ACTIONS(157),
        [anon_sym_RPAREN] = ACTIONS(157),
        [anon_sym_STAR] = ACTIONS(157),
        [anon_sym_PLUS] = ACTIONS(157),
        [anon_sym_COMMA] = ACTIONS(157),
        [anon_sym_DASH] = ACTIONS(157),
        [anon_sym_DOT] = ACTIONS(157),
        [anon_sym_SLASH] = ACTIONS(157),
        [anon_sym_COLON] = ACTIONS(157),
        [anon_sym_SEMI] = ACTIONS(157),
        [anon_sym_LT] = ACTIONS(157),
        [anon_sym_EQ] = ACTIONS(157),
        [anon_sym_GT] = ACTIONS(157),
        [anon_sym_QMARK] = ACTIONS(157),
        [anon_sym_AT] = ACTIONS(157),
        [anon_sym_LBRACK] = ACTIONS(157),
        [anon_sym_BSLASH] = ACTIONS(157),
        [anon_sym_RBRACK] = ACTIONS(157),
        [anon_sym_CARET] = ACTIONS(157),
        [anon_sym__] = ACTIONS(157),
        [anon_sym_BQUOTE] = ACTIONS(157),
        [anon_sym_PIPE] = ACTIONS(157),
        [anon_sym_TILDE] = ACTIONS(157),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(157),
        [anon_sym_anchor] = ACTIONS(157),
        [sym_inline_email_rx] = ACTIONS(157),
        [anon_sym_footnote] = ACTIONS(157),
        [anon_sym_footnoteref] = ACTIONS(157),
        [anon_sym_image] = ACTIONS(157),
        [anon_sym_icon] = ACTIONS(157),
        [anon_sym_kbd] = ACTIONS(157),
        [anon_sym_btn] = ACTIONS(157),
        [anon_sym_http] = ACTIONS(157),
        [anon_sym_https] = ACTIONS(157),
        [anon_sym_file] = ACTIONS(157),
        [anon_sym_ftp] = ACTIONS(157),
        [anon_sym_irc] = ACTIONS(157),
        [anon_sym_link] = ACTIONS(157),
        [anon_sym_mailto] = ACTIONS(157),
        [anon_sym_stem] = ACTIONS(157),
        [anon_sym_latexmath] = ACTIONS(157),
        [anon_sym_asciimath] = ACTIONS(157),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(159),
        [anon_sym_LBRACE] = ACTIONS(161),
        [anon_sym_RBRACE] = ACTIONS(161),
        [sym__word_no_digit] = ACTIONS(161),
        [sym__digits] = ACTIONS(161),
        [anon_sym_BANG] = ACTIONS(161),
        [anon_sym_DQUOTE] = ACTIONS(161),
        [anon_sym_POUND] = ACTIONS(161),
        [anon_sym_DOLLAR] = ACTIONS(161),
        [anon_sym_PERCENT] = ACTIONS(161),
        [anon_sym_AMP] = ACTIONS(161),
        [anon_sym_SQUOTE] = ACTIONS(161),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_RPAREN] = ACTIONS(161),
        [anon_sym_STAR] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(161),
        [anon_sym_COMMA] = ACTIONS(161),
        [anon_sym_DASH] = ACTIONS(161),
        [anon_sym_DOT] = ACTIONS(161),
        [anon_sym_SLASH] = ACTIONS(161),
        [anon_sym_COLON] = ACTIONS(161),
        [anon_sym_SEMI] = ACTIONS(161),
        [anon_sym_LT] = ACTIONS(161),
        [anon_sym_EQ] = ACTIONS(161),
        [anon_sym_GT] = ACTIONS(161),
        [anon_sym_QMARK] = ACTIONS(161),
        [anon_sym_AT] = ACTIONS(161),
        [anon_sym_LBRACK] = ACTIONS(161),
        [anon_sym_BSLASH] = ACTIONS(161),
        [anon_sym_RBRACK] = ACTIONS(161),
        [anon_sym_CARET] = ACTIONS(161),
        [anon_sym__] = ACTIONS(161),
        [anon_sym_BQUOTE] = ACTIONS(161),
        [anon_sym_PIPE] = ACTIONS(161),
        [anon_sym_TILDE] = ACTIONS(161),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(161),
        [anon_sym_anchor] = ACTIONS(161),
        [sym_inline_email_rx] = ACTIONS(161),
        [anon_sym_footnote] = ACTIONS(161),
        [anon_sym_footnoteref] = ACTIONS(161),
        [anon_sym_image] = ACTIONS(161),
        [anon_sym_icon] = ACTIONS(161),
        [anon_sym_kbd] = ACTIONS(161),
        [anon_sym_btn] = ACTIONS(161),
        [anon_sym_http] = ACTIONS(161),
        [anon_sym_https] = ACTIONS(161),
        [anon_sym_file] = ACTIONS(161),
        [anon_sym_ftp] = ACTIONS(161),
        [anon_sym_irc] = ACTIONS(161),
        [anon_sym_link] = ACTIONS(161),
        [anon_sym_mailto] = ACTIONS(161),
        [anon_sym_stem] = ACTIONS(161),
        [anon_sym_latexmath] = ACTIONS(161),
        [anon_sym_asciimath] = ACTIONS(161),
    },
    [27] = {
        [ts_builtin_sym_end] = ACTIONS(163),
        [anon_sym_LBRACE] = ACTIONS(165),
        [anon_sym_RBRACE] = ACTIONS(165),
        [sym__word_no_digit] = ACTIONS(165),
        [sym__digits] = ACTIONS(165),
        [anon_sym_BANG] = ACTIONS(165),
        [anon_sym_DQUOTE] = ACTIONS(165),
        [anon_sym_POUND] = ACTIONS(165),
        [anon_sym_DOLLAR] = ACTIONS(165),
        [anon_sym_PERCENT] = ACTIONS(165),
        [anon_sym_AMP] = ACTIONS(165),
        [anon_sym_SQUOTE] = ACTIONS(165),
        [anon_sym_LPAREN] = ACTIONS(165),
        [anon_sym_RPAREN] = ACTIONS(165),
        [anon_sym_STAR] = ACTIONS(165),
        [anon_sym_PLUS] = ACTIONS(165),
        [anon_sym_COMMA] = ACTIONS(165),
        [anon_sym_DASH] = ACTIONS(165),
        [anon_sym_DOT] = ACTIONS(165),
        [anon_sym_SLASH] = ACTIONS(165),
        [anon_sym_COLON] = ACTIONS(165),
        [anon_sym_SEMI] = ACTIONS(165),
        [anon_sym_LT] = ACTIONS(165),
        [anon_sym_EQ] = ACTIONS(165),
        [anon_sym_GT] = ACTIONS(165),
        [anon_sym_QMARK] = ACTIONS(165),
        [anon_sym_AT] = ACTIONS(165),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_BSLASH] = ACTIONS(165),
        [anon_sym_RBRACK] = ACTIONS(165),
        [anon_sym_CARET] = ACTIONS(165),
        [anon_sym__] = ACTIONS(165),
        [anon_sym_BQUOTE] = ACTIONS(165),
        [anon_sym_PIPE] = ACTIONS(165),
        [anon_sym_TILDE] = ACTIONS(165),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(165),
        [anon_sym_anchor] = ACTIONS(165),
        [sym_inline_email_rx] = ACTIONS(165),
        [anon_sym_footnote] = ACTIONS(165),
        [anon_sym_footnoteref] = ACTIONS(165),
        [anon_sym_image] = ACTIONS(165),
        [anon_sym_icon] = ACTIONS(165),
        [anon_sym_kbd] = ACTIONS(165),
        [anon_sym_btn] = ACTIONS(165),
        [anon_sym_http] = ACTIONS(165),
        [anon_sym_https] = ACTIONS(165),
        [anon_sym_file] = ACTIONS(165),
        [anon_sym_ftp] = ACTIONS(165),
        [anon_sym_irc] = ACTIONS(165),
        [anon_sym_link] = ACTIONS(165),
        [anon_sym_mailto] = ACTIONS(165),
        [anon_sym_stem] = ACTIONS(165),
        [anon_sym_latexmath] = ACTIONS(165),
        [anon_sym_asciimath] = ACTIONS(165),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(167),
        [anon_sym_LBRACE] = ACTIONS(169),
        [anon_sym_RBRACE] = ACTIONS(169),
        [sym__word_no_digit] = ACTIONS(169),
        [sym__digits] = ACTIONS(169),
        [anon_sym_BANG] = ACTIONS(169),
        [anon_sym_DQUOTE] = ACTIONS(169),
        [anon_sym_POUND] = ACTIONS(169),
        [anon_sym_DOLLAR] = ACTIONS(169),
        [anon_sym_PERCENT] = ACTIONS(169),
        [anon_sym_AMP] = ACTIONS(169),
        [anon_sym_SQUOTE] = ACTIONS(169),
        [anon_sym_LPAREN] = ACTIONS(169),
        [anon_sym_RPAREN] = ACTIONS(169),
        [anon_sym_STAR] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(169),
        [anon_sym_COMMA] = ACTIONS(169),
        [anon_sym_DASH] = ACTIONS(169),
        [anon_sym_DOT] = ACTIONS(169),
        [anon_sym_SLASH] = ACTIONS(169),
        [anon_sym_COLON] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_LT] = ACTIONS(169),
        [anon_sym_EQ] = ACTIONS(169),
        [anon_sym_GT] = ACTIONS(169),
        [anon_sym_QMARK] = ACTIONS(169),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_LBRACK] = ACTIONS(169),
        [anon_sym_BSLASH] = ACTIONS(169),
        [anon_sym_RBRACK] = ACTIONS(169),
        [anon_sym_CARET] = ACTIONS(169),
        [anon_sym__] = ACTIONS(169),
        [anon_sym_BQUOTE] = ACTIONS(169),
        [anon_sym_PIPE] = ACTIONS(169),
        [anon_sym_TILDE] = ACTIONS(169),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(169),
        [anon_sym_anchor] = ACTIONS(169),
        [sym_inline_email_rx] = ACTIONS(169),
        [anon_sym_footnote] = ACTIONS(169),
        [anon_sym_footnoteref] = ACTIONS(169),
        [anon_sym_image] = ACTIONS(169),
        [anon_sym_icon] = ACTIONS(169),
        [anon_sym_kbd] = ACTIONS(169),
        [anon_sym_btn] = ACTIONS(169),
        [anon_sym_http] = ACTIONS(169),
        [anon_sym_https] = ACTIONS(169),
        [anon_sym_file] = ACTIONS(169),
        [anon_sym_ftp] = ACTIONS(169),
        [anon_sym_irc] = ACTIONS(169),
        [anon_sym_link] = ACTIONS(169),
        [anon_sym_mailto] = ACTIONS(169),
        [anon_sym_stem] = ACTIONS(169),
        [anon_sym_latexmath] = ACTIONS(169),
        [anon_sym_asciimath] = ACTIONS(169),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(171),
        [anon_sym_LBRACE] = ACTIONS(173),
        [anon_sym_RBRACE] = ACTIONS(173),
        [sym__word_no_digit] = ACTIONS(173),
        [sym__digits] = ACTIONS(173),
        [anon_sym_BANG] = ACTIONS(173),
        [anon_sym_DQUOTE] = ACTIONS(173),
        [anon_sym_POUND] = ACTIONS(173),
        [anon_sym_DOLLAR] = ACTIONS(173),
        [anon_sym_PERCENT] = ACTIONS(173),
        [anon_sym_AMP] = ACTIONS(173),
        [anon_sym_SQUOTE] = ACTIONS(173),
        [anon_sym_LPAREN] = ACTIONS(173),
        [anon_sym_RPAREN] = ACTIONS(173),
        [anon_sym_STAR] = ACTIONS(173),
        [anon_sym_PLUS] = ACTIONS(173),
        [anon_sym_COMMA] = ACTIONS(173),
        [anon_sym_DASH] = ACTIONS(173),
        [anon_sym_DOT] = ACTIONS(173),
        [anon_sym_SLASH] = ACTIONS(173),
        [anon_sym_COLON] = ACTIONS(173),
        [anon_sym_SEMI] = ACTIONS(173),
        [anon_sym_LT] = ACTIONS(173),
        [anon_sym_EQ] = ACTIONS(173),
        [anon_sym_GT] = ACTIONS(173),
        [anon_sym_QMARK] = ACTIONS(173),
        [anon_sym_AT] = ACTIONS(173),
        [anon_sym_LBRACK] = ACTIONS(173),
        [anon_sym_BSLASH] = ACTIONS(173),
        [anon_sym_RBRACK] = ACTIONS(173),
        [anon_sym_CARET] = ACTIONS(173),
        [anon_sym__] = ACTIONS(173),
        [anon_sym_BQUOTE] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(173),
        [anon_sym_TILDE] = ACTIONS(173),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(173),
        [anon_sym_anchor] = ACTIONS(173),
        [sym_inline_email_rx] = ACTIONS(173),
        [anon_sym_footnote] = ACTIONS(173),
        [anon_sym_footnoteref] = ACTIONS(173),
        [anon_sym_image] = ACTIONS(173),
        [anon_sym_icon] = ACTIONS(173),
        [anon_sym_kbd] = ACTIONS(173),
        [anon_sym_btn] = ACTIONS(173),
        [anon_sym_http] = ACTIONS(173),
        [anon_sym_https] = ACTIONS(173),
        [anon_sym_file] = ACTIONS(173),
        [anon_sym_ftp] = ACTIONS(173),
        [anon_sym_irc] = ACTIONS(173),
        [anon_sym_link] = ACTIONS(173),
        [anon_sym_mailto] = ACTIONS(173),
        [anon_sym_stem] = ACTIONS(173),
        [anon_sym_latexmath] = ACTIONS(173),
        [anon_sym_asciimath] = ACTIONS(173),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 3,
    ACTIONS(175),
    1,
    anon_sym_RBRACK,
    STATE(33),
    1,
    aux_sym_inline_image_macro_repeat1,
    ACTIONS(177),
    3,
    aux_sym_inline_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [12] = 3,
    ACTIONS(179),
    1,
    anon_sym_RBRACK,
    STATE(30),
    1,
    aux_sym_inline_image_macro_repeat1,
    ACTIONS(181),
    3,
    aux_sym_inline_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [24] = 5,
    ACTIONS(183),
    1,
    anon_sym_PLUS,
    ACTIONS(185),
    1,
    anon_sym_COMMA,
    ACTIONS(187),
    1,
    anon_sym_RBRACK,
    STATE(43),
    1,
    aux_sym_inline_kbd_macro_repeat2,
    STATE(44),
    1,
    aux_sym_inline_kbd_macro_repeat1,
    [40] = 3,
    ACTIONS(189),
    1,
    anon_sym_RBRACK,
    STATE(33),
    1,
    aux_sym_inline_image_macro_repeat1,
    ACTIONS(191),
    3,
    aux_sym_inline_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [52] = 3,
    ACTIONS(194),
    1,
    anon_sym_DOT,
    STATE(35),
    1,
    aux_sym_link_repeat1,
    ACTIONS(80),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [63] = 3,
    ACTIONS(194),
    1,
    anon_sym_DOT,
    STATE(36),
    1,
    aux_sym_link_repeat1,
    ACTIONS(88),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [74] = 3,
    ACTIONS(196),
    1,
    anon_sym_DOT,
    STATE(36),
    1,
    aux_sym_link_repeat1,
    ACTIONS(92),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [85] = 1,
    ACTIONS(199),
    3,
    anon_sym_PLUS,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [91] = 2,
    STATE(47),
    1,
    sym_key,
    ACTIONS(201),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [99] = 1,
    ACTIONS(92),
    3,
    anon_sym_DQUOTE,
    anon_sym_DOT,
    anon_sym_LBRACK,
    [105] = 2,
    STATE(32),
    1,
    sym_key,
    ACTIONS(201),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [113] = 3,
    ACTIONS(203),
    1,
    anon_sym_COMMA,
    ACTIONS(206),
    1,
    anon_sym_RBRACK,
    STATE(41),
    1,
    aux_sym_inline_kbd_macro_repeat2,
    [123] = 3,
    ACTIONS(208),
    1,
    anon_sym_PLUS,
    ACTIONS(211),
    1,
    anon_sym_RBRACK,
    STATE(42),
    1,
    aux_sym_inline_kbd_macro_repeat1,
    [133] = 3,
    ACTIONS(185),
    1,
    anon_sym_COMMA,
    ACTIONS(213),
    1,
    anon_sym_RBRACK,
    STATE(41),
    1,
    aux_sym_inline_kbd_macro_repeat2,
    [143] = 3,
    ACTIONS(183),
    1,
    anon_sym_PLUS,
    ACTIONS(213),
    1,
    anon_sym_RBRACK,
    STATE(42),
    1,
    aux_sym_inline_kbd_macro_repeat1,
    [153] = 2,
    STATE(46),
    1,
    sym_key,
    ACTIONS(201),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [161] = 1,
    ACTIONS(206),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [166] = 1,
    ACTIONS(211),
    2,
    anon_sym_PLUS,
    anon_sym_RBRACK,
    [171] = 2,
    ACTIONS(215),
    1,
    anon_sym_DQUOTE,
    ACTIONS(217),
    1,
    anon_sym_LBRACK,
    [178] = 2,
    ACTIONS(219),
    1,
    anon_sym_COMMA,
    ACTIONS(221),
    1,
    anon_sym_RBRACK_RBRACK,
    [185] = 2,
    ACTIONS(223),
    1,
    aux_sym_inline_anchor_rx_token2,
    ACTIONS(225),
    1,
    aux_sym_inline_footnote_macro_token1,
    [192] = 2,
    ACTIONS(227),
    1,
    aux_sym_replacement_token1,
    ACTIONS(229),
    1,
    anon_sym_LBRACK,
    [199] = 2,
    ACTIONS(231),
    1,
    anon_sym_COMMA,
    ACTIONS(233),
    1,
    anon_sym_RBRACK,
    [206] = 2,
    ACTIONS(235),
    1,
    aux_sym_inline_anchor_rx_token2,
    ACTIONS(237),
    1,
    aux_sym_inline_footnote_macro_token1,
    [213] = 2,
    ACTIONS(239),
    1,
    anon_sym_COMMA,
    ACTIONS(241),
    1,
    anon_sym_RBRACK,
    [220] = 1,
    ACTIONS(243),
    1,
    anon_sym_LBRACK,
    [224] = 1,
    ACTIONS(245),
    1,
    aux_sym_inline_anchor_rx_token2,
    [228] = 1,
    ACTIONS(247),
    1,
    anon_sym_LBRACK,
    [232] = 1,
    ACTIONS(249),
    1,
    anon_sym_DQUOTE,
    [236] = 1,
    ACTIONS(251),
    1,
    aux_sym_inline_anchor_rx_token1,
    [240] = 1,
    ACTIONS(253),
    1,
    anon_sym_RBRACK,
    [244] = 1,
    ACTIONS(241),
    1,
    anon_sym_RBRACK,
    [248] = 1,
    ACTIONS(255),
    1,
    aux_sym_auto_link_token1,
    [252] = 1,
    ACTIONS(257),
    1,
    aux_sym_inline_footnote_macro_token2,
    [256] = 1,
    ACTIONS(259),
    1,
    anon_sym_LBRACK,
    [260] = 1,
    ACTIONS(261),
    1,
    aux_sym_inline_link_macro_token1,
    [264] = 1,
    ACTIONS(263),
    1,
    anon_sym_LBRACK,
    [268] = 1,
    ACTIONS(265),
    1,
    sym__link_component,
    [272] = 1,
    ACTIONS(267),
    1,
    aux_sym_inline_anchor_rx_token2,
    [276] = 1,
    ACTIONS(269),
    1,
    sym__link_component,
    [280] = 1,
    ACTIONS(271),
    1,
    anon_sym_LBRACK,
    [284] = 1,
    ACTIONS(273),
    1,
    aux_sym_inline_image_macro_token1,
    [288] = 1,
    ACTIONS(275),
    1,
    anon_sym_RBRACK,
    [292] = 1,
    ACTIONS(277),
    1,
    aux_sym_replacement_token1,
    [296] = 1,
    ACTIONS(279),
    1,
    aux_sym_replacement_token1,
    [300] = 1,
    ACTIONS(233),
    1,
    anon_sym_RBRACK,
    [304] = 1,
    ACTIONS(281),
    1,
    anon_sym_RBRACK,
    [308] = 1,
    ACTIONS(283),
    1,
    aux_sym_inline_footnote_macro_token2,
    [312] = 1,
    ACTIONS(285),
    1,
    anon_sym_RBRACK,
    [316] = 1,
    ACTIONS(287),
    1,
    anon_sym_RBRACE,
    [320] = 1,
    ACTIONS(289),
    1,
    ts_builtin_sym_end,
    [324] = 1,
    ACTIONS(291),
    1,
    anon_sym_RBRACK_RBRACK,
    [328] = 1,
    ACTIONS(293),
    1,
    anon_sym_RBRACK,
    [332] = 1,
    ACTIONS(295),
    1,
    anon_sym_COLON,
    [336] = 1,
    ACTIONS(297),
    1,
    anon_sym_RBRACK,
    [340] = 1,
    ACTIONS(299),
    1,
    aux_sym_inline_anchor_rx_token2,
    [344] = 1,
    ACTIONS(301),
    1,
    anon_sym_COLON,
    [348] = 1,
    ACTIONS(303),
    1,
    anon_sym_RBRACK,
    [352] = 1,
    ACTIONS(305),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [356] = 1,
    ACTIONS(307),
    1,
    anon_sym_COLON,
    [360] = 1,
    ACTIONS(309),
    1,
    anon_sym_COLON,
    [364] = 1,
    ACTIONS(311),
    1,
    anon_sym_COLON,
    [368] = 1,
    ACTIONS(313),
    1,
    anon_sym_LBRACK,
    [372] = 1,
    ACTIONS(315),
    1,
    anon_sym_COLON,
    [376] = 1,
    ACTIONS(317),
    1,
    sym__link_component,
    [380] = 1,
    ACTIONS(319),
    1,
    sym__link_component,
    [384] = 1,
    ACTIONS(321),
    1,
    anon_sym_COLON_SLASH_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(30)] = 0,
    [SMALL_STATE(31)] = 12,
    [SMALL_STATE(32)] = 24,
    [SMALL_STATE(33)] = 40,
    [SMALL_STATE(34)] = 52,
    [SMALL_STATE(35)] = 63,
    [SMALL_STATE(36)] = 74,
    [SMALL_STATE(37)] = 85,
    [SMALL_STATE(38)] = 91,
    [SMALL_STATE(39)] = 99,
    [SMALL_STATE(40)] = 105,
    [SMALL_STATE(41)] = 113,
    [SMALL_STATE(42)] = 123,
    [SMALL_STATE(43)] = 133,
    [SMALL_STATE(44)] = 143,
    [SMALL_STATE(45)] = 153,
    [SMALL_STATE(46)] = 161,
    [SMALL_STATE(47)] = 166,
    [SMALL_STATE(48)] = 171,
    [SMALL_STATE(49)] = 178,
    [SMALL_STATE(50)] = 185,
    [SMALL_STATE(51)] = 192,
    [SMALL_STATE(52)] = 199,
    [SMALL_STATE(53)] = 206,
    [SMALL_STATE(54)] = 213,
    [SMALL_STATE(55)] = 220,
    [SMALL_STATE(56)] = 224,
    [SMALL_STATE(57)] = 228,
    [SMALL_STATE(58)] = 232,
    [SMALL_STATE(59)] = 236,
    [SMALL_STATE(60)] = 240,
    [SMALL_STATE(61)] = 244,
    [SMALL_STATE(62)] = 248,
    [SMALL_STATE(63)] = 252,
    [SMALL_STATE(64)] = 256,
    [SMALL_STATE(65)] = 260,
    [SMALL_STATE(66)] = 264,
    [SMALL_STATE(67)] = 268,
    [SMALL_STATE(68)] = 272,
    [SMALL_STATE(69)] = 276,
    [SMALL_STATE(70)] = 280,
    [SMALL_STATE(71)] = 284,
    [SMALL_STATE(72)] = 288,
    [SMALL_STATE(73)] = 292,
    [SMALL_STATE(74)] = 296,
    [SMALL_STATE(75)] = 300,
    [SMALL_STATE(76)] = 304,
    [SMALL_STATE(77)] = 308,
    [SMALL_STATE(78)] = 312,
    [SMALL_STATE(79)] = 316,
    [SMALL_STATE(80)] = 320,
    [SMALL_STATE(81)] = 324,
    [SMALL_STATE(82)] = 328,
    [SMALL_STATE(83)] = 332,
    [SMALL_STATE(84)] = 336,
    [SMALL_STATE(85)] = 340,
    [SMALL_STATE(86)] = 344,
    [SMALL_STATE(87)] = 348,
    [SMALL_STATE(88)] = 352,
    [SMALL_STATE(89)] = 356,
    [SMALL_STATE(90)] = 360,
    [SMALL_STATE(91)] = 364,
    [SMALL_STATE(92)] = 368,
    [SMALL_STATE(93)] = 372,
    [SMALL_STATE(94)] = 376,
    [SMALL_STATE(95)] = 380,
    [SMALL_STATE(96)] = 384,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(4),
    [5] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(21),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(14),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(6),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(73),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(93),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(2),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(91),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(90),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(89),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(88),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(86),
    [27] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(83),
    [29] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [31] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(3),
    [33] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    [35] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(4),
    [38] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(21),
    [41] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(14),
    [44] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(6),
    [47] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(73),
    [50] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(93),
    [53] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(3),
    [56] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(91),
    [59] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(90),
    [62] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(89),
    [65] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(88),
    [68] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(86),
    [71] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(83),
    [74] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [76] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [78] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(79),
    [80] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link, 3, 0, 0),
    [82] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link, 3, 0, 0),
    [84] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(69),
    [86] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(96),
    [88] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link, 4, 0, 0),
    [90] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link, 4, 0, 0),
    [92] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_link_repeat1, 2, 0, 0),
    [94] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_repeat1, 2, 0, 0),
    [96] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_repeat1, 2, 0, 0),
    SHIFT_REPEAT(69),
    [99] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 8, 0, 1),
    [101] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 8, 0, 1),
    [103] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 7, 0, 0),
    [105] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 7, 0, 0),
    [107] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_link_macro, 6, 0, 0),
    [109] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_link_macro, 6, 0, 0),
    [111] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_kbd_macro, 6, 0, 0),
    [113] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_kbd_macro, 6, 0, 0),
    [115] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_word, 1, 0, 0),
    [117] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_word, 1, 0, 0),
    [119] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_image_macro, 6, 0, 0),
    [121] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_image_macro, 6, 0, 0),
    [123] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [125] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [127] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 6, 0, 1),
    [129] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 6, 0, 1),
    [131] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 6, 0, 0),
    [133] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 6, 0, 0),
    [135] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [137] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [139] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_math_macro, 5, 0, 0),
    [141] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_math_macro, 5, 0, 0),
    [143] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 3, 0, 0),
    [145] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 3, 0, 0),
    [147] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_kbd_macro, 5, 0, 0),
    [149] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_kbd_macro, 5, 0, 0),
    [151] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [153] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [155] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_image_macro, 5, 0, 0),
    [157] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_image_macro, 5, 0, 0),
    [159] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 5, 0, 0),
    [161] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 5, 0, 0),
    [163] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 5, 0, 0),
    [165] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 5, 0, 0),
    [167] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 0),
    [169] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 0),
    [171] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [173] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [175] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(15),
    [177] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(33),
    [179] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(25),
    [181] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(30),
    [183] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [185] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [187] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [189] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_image_macro_repeat1, 2, 0, 0),
    [191] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_image_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(33),
    [194] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(95),
    [196] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_link_repeat1, 2, 0, 0),
    SHIFT_REPEAT(95),
    [199] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_key, 1, 0, 0),
    [201] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [203] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_inline_kbd_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(45),
    [206] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_kbd_macro_repeat2, 2, 0, 0),
    [208] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_inline_kbd_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(38),
    [211] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_kbd_macro_repeat1, 2, 0, 0),
    [213] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [215] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(29),
    [217] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [219] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [221] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [223] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [225] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(54),
    [227] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [229] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [231] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [233] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [235] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [237] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(52),
    [239] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [241] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [243] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [245] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [247] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [249] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [251] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(81),
    [253] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [255] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [257] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [259] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [261] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [263] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [265] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [267] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [269] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [271] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [273] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(66),
    [275] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [277] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [279] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [281] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [283] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [285] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [287] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [289] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [291] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [293] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [295] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [297] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [299] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [301] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [303] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [305] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [307] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [309] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(71),
    [311] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [313] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(68),
    [315] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [317] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [319] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [321] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(94),
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
