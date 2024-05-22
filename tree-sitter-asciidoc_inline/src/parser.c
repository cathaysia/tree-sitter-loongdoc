#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 103
#define LARGE_STATE_COUNT 31
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
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
    anon_sym_menu = 69,
    sym_inline = 70,
    sym_replacement = 71,
    sym_word = 72,
    sym_punctuation = 73,
    sym_inline_anchor_rx = 74,
    sym_inline_footnote_macro = 75,
    sym_inline_image_macro = 76,
    sym_inline_kbd_macro = 77,
    sym_key = 78,
    sym_auto_link = 79,
    sym_link = 80,
    sym_inline_link_macro = 81,
    sym_inline_math_macro = 82,
    sym_inline_menu_macro = 83,
    aux_sym_inline_repeat1 = 84,
    aux_sym_inline_image_macro_repeat1 = 85,
    aux_sym_inline_kbd_macro_repeat1 = 86,
    aux_sym_inline_kbd_macro_repeat2 = 87,
    aux_sym_link_repeat1 = 88,
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
    [anon_sym_menu] = "menu",
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
    [sym_inline_menu_macro] = "inline_menu_macro",
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
    [anon_sym_menu] = anon_sym_menu,
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
    [sym_inline_menu_macro] = sym_inline_menu_macro,
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
    [anon_sym_menu] = {
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
    [sym_inline_menu_macro] = {
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
    [34] = 34,
    [35] = 5,
    [36] = 8,
    [37] = 6,
    [38] = 26,
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
    [94] = 94,
    [95] = 95,
    [96] = 96,
    [97] = 97,
    [98] = 98,
    [99] = 99,
    [100] = 77,
    [101] = 85,
    [102] = 95,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(55);
            ADVANCE_MAP(
                '!', 185,
                '"', 187,
                '#', 188,
                '$', 189,
                '%', 190,
                '&', 191,
                '\'', 192,
                '(', 193,
                ')', 194,
                '*', 195,
                '+', 197,
                ',', 198,
                '-', 199,
                '.', 200,
                '/', 201,
                ':', 202,
                ';', 203,
                '<', 204,
                '=', 205,
                '>', 206,
                '?', 207,
                '@', 208,
                '[', 210,
                '\\', 211,
                ']', 212,
                '^', 213,
                '_', 216,
                '`', 218,
                'a', 89,
                'b', 103,
                'f', 79,
                'h', 109,
                'i', 65,
                'k', 62,
                'l', 59,
                'm', 57,
                's', 104,
                '{', 56,
                '|', 219,
                '}', 121,
                '~', 220,
                0x0b, 181,
                '\f', 181,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(116);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0)
                ADVANCE(182);
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
                '"', 186,
                '+', 196,
                ',', 198,
                '.', 200,
                ':', 202,
                '[', 209,
                '\\', 43,
                ']', 212,
                '}', 120,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(2);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(254);
            END_STATE();
        case 3:
            if(lookahead == ',')
                ADVANCE(198);
            if(lookahead == ':')
                ADVANCE(33);
            if(lookahead == '[')
                ADVANCE(209);
            if(lookahead == ']')
                ADVANCE(44);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(3);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(119);
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
                ADVANCE(231);
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
                ADVANCE(230);
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
                ADVANCE(230);
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
                ADVANCE(230);
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
                ADVANCE(230);
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
                ADVANCE(230);
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
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(267);
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
                ADVANCE(232);
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
                ADVANCE(232);
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
                ADVANCE(246);
            if(lookahead == ']')
                ADVANCE(212);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(247);
            if(lookahead != 0)
                ADVANCE(245);
            END_STATE();
        case 43:
            if(lookahead == ']')
                ADVANCE(249);
            END_STATE();
        case 44:
            if(lookahead == ']')
                ADVANCE(224);
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
                ADVANCE(182);
            END_STATE();
        case 46:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(237);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(238);
            END_STATE();
        case 47:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(222);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(223);
            END_STATE();
        case 48:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(48);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(273);
            END_STATE();
        case 49:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(49);
            if(lookahead != 0 &&
               lookahead != '.' &&
               lookahead != '[')
                ADVANCE(268);
            END_STATE();
        case 50:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(243);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(244);
            END_STATE();
        case 51:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(231);
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
                '!', 185,
                '"', 187,
                '#', 188,
                '$', 189,
                '%', 190,
                '&', 191,
                '\'', 192,
                '(', 193,
                ')', 194,
                '*', 195,
                '+', 197,
                ',', 198,
                '-', 199,
                '.', 200,
                '/', 201,
                ':', 202,
                ';', 203,
                '<', 204,
                '=', 205,
                '>', 206,
                '?', 207,
                '@', 208,
                '[', 210,
                '\\', 211,
                ']', 212,
                '^', 213,
                '_', 217,
                '`', 218,
                'a', 154,
                'b', 168,
                'f', 144,
                'h', 174,
                'i', 130,
                'k', 127,
                'l', 124,
                'm', 122,
                's', 169,
                '{', 56,
                '|', 219,
                '}', 121,
                '~', 220,
                0x0b, 183,
                '\f', 183,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(54);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(184);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
            if(lookahead != 0)
                ADVANCE(182);
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
                ADVANCE(115);
            if(lookahead == 'a')
                ADVANCE(80);
            if(lookahead == 'e')
                ADVANCE(92);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 58:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'a')
                ADVANCE(75);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 59:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'a')
                ADVANCE(107);
            if(lookahead == 'i')
                ADVANCE(91);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 60:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'a')
                ADVANCE(106);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 61:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'a')
                ADVANCE(108);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 62:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'b')
                ADVANCE(67);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 63:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'c')
                ADVANCE(78);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 64:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'c')
                ADVANCE(265);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 65:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'c')
                ADVANCE(97);
            if(lookahead == 'm')
                ADVANCE(58);
            if(lookahead == 'r')
                ADVANCE(64);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 66:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'c')
                ADVANCE(82);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 67:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'd')
                ADVANCE(250);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 68:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'e')
                ADVANCE(86);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 69:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'e')
                ADVANCE(261);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 70:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'e')
                ADVANCE(114);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 71:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'e')
                ADVANCE(239);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 72:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'e')
                ADVANCE(233);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 73:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'e')
                ADVANCE(74);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 74:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'f')
                ADVANCE(235);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 75:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'g')
                ADVANCE(71);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 76:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'h')
                ADVANCE(278);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 77:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'h')
                ADVANCE(276);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 78:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'h')
                ADVANCE(95);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 79:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'i')
                ADVANCE(84);
            if(lookahead == 'o')
                ADVANCE(99);
            if(lookahead == 't')
                ADVANCE(100);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 80:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'i')
                ADVANCE(85);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 81:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'i')
                ADVANCE(87);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 82:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'i')
                ADVANCE(81);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 83:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'k')
                ADVANCE(269);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 84:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'l')
                ADVANCE(69);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 85:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'l')
                ADVANCE(111);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 86:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'm')
                ADVANCE(274);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 87:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'm')
                ADVANCE(60);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 88:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'm')
                ADVANCE(61);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 89:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'n')
                ADVANCE(63);
            if(lookahead == 's')
                ADVANCE(66);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 90:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'n')
                ADVANCE(252);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 91:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'n')
                ADVANCE(83);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 92:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'n')
                ADVANCE(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 93:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'n')
                ADVANCE(241);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 94:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'n')
                ADVANCE(98);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 95:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'o')
                ADVANCE(102);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 96:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'o')
                ADVANCE(271);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 97:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'o')
                ADVANCE(93);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 98:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'o')
                ADVANCE(112);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 99:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'o')
                ADVANCE(110);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 100:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'p')
                ADVANCE(263);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 101:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'p')
                ADVANCE(257);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 102:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'r')
                ADVANCE(225);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 103:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 't')
                ADVANCE(90);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 104:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 't')
                ADVANCE(68);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 105:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 't')
                ADVANCE(101);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 106:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 't')
                ADVANCE(76);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 107:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 't')
                ADVANCE(70);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 108:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 't')
                ADVANCE(77);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 109:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 't')
                ADVANCE(105);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 110:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 't')
                ADVANCE(94);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 111:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 't')
                ADVANCE(96);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 112:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 't')
                ADVANCE(72);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 113:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'u')
                ADVANCE(280);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 114:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'x')
                ADVANCE(88);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 115:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 116:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(116);
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
                ADVANCE(119);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            END_STATE();
        case 117:
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
                ADVANCE(119);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            END_STATE();
        case 118:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(118);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(119);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 119:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(119);
            END_STATE();
        case 120:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 121:
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
        case 122:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(145);
            if(lookahead == 'e')
                ADVANCE(157);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(140);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(172);
            if(lookahead == 'i')
                ADVANCE(156);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 125:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(171);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 126:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'a')
                ADVANCE(173);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 127:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'b')
                ADVANCE(132);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(143);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(266);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 130:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'c')
                ADVANCE(162);
            if(lookahead == 'm')
                ADVANCE(123);
            if(lookahead == 'r')
                ADVANCE(129);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 131:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'c')
                ADVANCE(147);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 132:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'd')
                ADVANCE(251);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(151);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(262);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(179);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(240);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 137:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 138:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'e')
                ADVANCE(139);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 139:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'f')
                ADVANCE(236);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 140:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'g')
                ADVANCE(136);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(279);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 142:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'h')
                ADVANCE(277);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 143:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'h')
                ADVANCE(160);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(149);
            if(lookahead == 'o')
                ADVANCE(164);
            if(lookahead == 't')
                ADVANCE(165);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(150);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 146:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'i')
                ADVANCE(152);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 147:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'i')
                ADVANCE(146);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 148:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'k')
                ADVANCE(270);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 149:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'l')
                ADVANCE(134);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 150:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'l')
                ADVANCE(176);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(275);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 152:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'm')
                ADVANCE(125);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 153:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'm')
                ADVANCE(126);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(128);
            if(lookahead == 's')
                ADVANCE(131);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(253);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(148);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 157:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'n')
                ADVANCE(178);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 158:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'n')
                ADVANCE(242);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 159:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'n')
                ADVANCE(163);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(167);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(272);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 162:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(158);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 163:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(177);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 164:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'o')
                ADVANCE(175);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 165:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'p')
                ADVANCE(264);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 166:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'p')
                ADVANCE(258);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 167:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'r')
                ADVANCE(226);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(155);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(166);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(141);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(135);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(142);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
                ADVANCE(170);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 175:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(159);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 176:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(161);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 177:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 't')
                ADVANCE(137);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 178:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'u')
                ADVANCE(281);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 179:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'x')
                ADVANCE(153);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 180:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 181:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                '_', 214,
                'a', 89,
                'b', 103,
                'f', 79,
                'h', 109,
                'i', 65,
                'k', 62,
                'l', 59,
                'm', 57,
                's', 104,
                0x0b, 181,
                '\f', 181,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 182:
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
                ADVANCE(182);
            END_STATE();
        case 183:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                '_', 215,
                'a', 154,
                'b', 168,
                'f', 144,
                'h', 174,
                'i', 130,
                'k', 127,
                'l', 124,
                'm', 122,
                's', 169,
                0x0b, 183,
                '\f', 183,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 184:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(184);
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
        case 185:
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
        case 186:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 187:
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
        case 188:
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
        case 189:
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
        case 190:
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
        case 191:
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
        case 192:
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
        case 193:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 194:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 195:
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
        case 196:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 197:
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
        case 198:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 199:
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
        case 200:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 201:
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
        case 202:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 203:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 204:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 205:
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
        case 206:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 207:
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
        case 208:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 209:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 210:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(221);
            END_STATE();
        case 211:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            END_STATE();
        case 212:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 213:
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
        case 214:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 215:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 216:
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
                ADVANCE(119);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(117);
            END_STATE();
        case 217:
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
        case 218:
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
        case 219:
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
        case 220:
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
        case 221:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            END_STATE();
        case 222:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(222);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(223);
            END_STATE();
        case 223:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ' ||
               ('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(223);
            END_STATE();
        case 224:
            ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
            END_STATE();
        case 225:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 226:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 227:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(227);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(228);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(229);
            END_STATE();
        case 228:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(228);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(229);
            END_STATE();
        case 229:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(229);
            END_STATE();
        case 230:
            ACCEPT_TOKEN(sym_inline_email_rx);
            END_STATE();
        case 231:
            ACCEPT_TOKEN(sym_inline_email_rx);
            if(lookahead == '-')
                ADVANCE(6);
            if(lookahead == '.')
                ADVANCE(51);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(231);
            END_STATE();
        case 232:
            ACCEPT_TOKEN(sym_inline_email_rx);
            if(lookahead == '\\')
                ADVANCE(40);
            if(lookahead == ']')
                ADVANCE(232);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(39);
            END_STATE();
        case 233:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 'r')
                ADVANCE(73);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 234:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 'r')
                ADVANCE(138);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 235:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 236:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 237:
            ACCEPT_TOKEN(aux_sym_inline_footnote_macro_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(237);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(238);
            END_STATE();
        case 238:
            ACCEPT_TOKEN(aux_sym_inline_footnote_macro_token2);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(238);
            END_STATE();
        case 239:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 240:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 241:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 242:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 243:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(243);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(244);
            END_STATE();
        case 244:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token1);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(244);
            END_STATE();
        case 245:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token2);
            END_STATE();
        case 246:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token2);
            if(lookahead == '[')
                ADVANCE(248);
            if(lookahead == ']')
                ADVANCE(249);
            END_STATE();
        case 247:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token2);
            if(lookahead == '\\')
                ADVANCE(246);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(247);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(245);
            END_STATE();
        case 248:
            ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
            END_STATE();
        case 249:
            ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
            END_STATE();
        case 250:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 251:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 252:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 253:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 254:
            ACCEPT_TOKEN(aux_sym_key_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(254);
            END_STATE();
        case 255:
            ACCEPT_TOKEN(aux_sym_auto_link_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(255);
            if(lookahead != 0 &&
               lookahead != '"' &&
               lookahead != ']')
                ADVANCE(256);
            END_STATE();
        case 256:
            ACCEPT_TOKEN(aux_sym_auto_link_token1);
            if(lookahead != 0 &&
               lookahead != '"' &&
               lookahead != ']')
                ADVANCE(256);
            END_STATE();
        case 257:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(lookahead == 's')
                ADVANCE(259);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 258:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(lookahead == 's')
                ADVANCE(260);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 259:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 260:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 261:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 262:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 263:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 264:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 265:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 266:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 267:
            ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
            END_STATE();
        case 268:
            ACCEPT_TOKEN(sym__link_component);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '.' &&
               lookahead != '[')
                ADVANCE(268);
            END_STATE();
        case 269:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 270:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 271:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 272:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 273:
            ACCEPT_TOKEN(aux_sym_inline_link_macro_token1);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '[')
                ADVANCE(273);
            END_STATE();
        case 274:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 275:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 276:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 277:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 278:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 279:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
            END_STATE();
        case 280:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(117);
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
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(115);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(182);
            END_STATE();
        case 281:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '@')
                ADVANCE(38);
            if(lookahead == '_')
                ADVANCE(15);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(180);
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
                ADVANCE(182);
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
    [30] = { .lex_state = 54 },
    [31] = { .lex_state = 42 },
    [32] = { .lex_state = 42 },
    [33] = { .lex_state = 2 },
    [34] = { .lex_state = 42 },
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
    [49] = { .lex_state = 2 },
    [50] = { .lex_state = 2 },
    [51] = { .lex_state = 227 },
    [52] = { .lex_state = 2 },
    [53] = { .lex_state = 3 },
    [54] = { .lex_state = 3 },
    [55] = { .lex_state = 227 },
    [56] = { .lex_state = 227 },
    [57] = { .lex_state = 2 },
    [58] = { .lex_state = 227 },
    [59] = { .lex_state = 2 },
    [60] = { .lex_state = 227 },
    [61] = { .lex_state = 2 },
    [62] = { .lex_state = 2 },
    [63] = { .lex_state = 2 },
    [64] = { .lex_state = 2 },
    [65] = { .lex_state = 2 },
    [66] = { .lex_state = 2 },
    [67] = { .lex_state = 46 },
    [68] = { .lex_state = 2 },
    [69] = { .lex_state = 2 },
    [70] = { .lex_state = 2 },
    [71] = { .lex_state = 47 },
    [72] = { .lex_state = 255 },
    [73] = { .lex_state = 3 },
    [74] = { .lex_state = 2 },
    [75] = { .lex_state = 48 },
    [76] = { .lex_state = 2 },
    [77] = { .lex_state = 49 },
    [78] = { .lex_state = 2 },
    [79] = { .lex_state = 2 },
    [80] = { .lex_state = 50 },
    [81] = { .lex_state = 3 },
    [82] = { .lex_state = 46 },
    [83] = { .lex_state = 2 },
    [84] = { .lex_state = 3 },
    [85] = { .lex_state = 49 },
    [86] = { .lex_state = 3 },
    [87] = { .lex_state = 2 },
    [88] = { .lex_state = 227 },
    [89] = { .lex_state = 2 },
    [90] = { .lex_state = 0 },
    [91] = { .lex_state = 2 },
    [92] = { .lex_state = 2 },
    [93] = { .lex_state = 2 },
    [94] = { .lex_state = 2 },
    [95] = { .lex_state = 3 },
    [96] = { .lex_state = 2 },
    [97] = { .lex_state = 2 },
    [98] = { .lex_state = 2 },
    [99] = { .lex_state = 2 },
    [100] = { .lex_state = 49 },
    [101] = { .lex_state = 49 },
    [102] = { .lex_state = 3 },
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
        [anon_sym_menu] = ACTIONS(1),
    },
    [1] = {
        [sym_inline] = STATE(90),
        [sym_replacement] = STATE(2),
        [sym_word] = STATE(2),
        [sym_punctuation] = STATE(2),
        [sym_inline_anchor_rx] = STATE(2),
        [sym_inline_footnote_macro] = STATE(2),
        [sym_inline_image_macro] = STATE(2),
        [sym_inline_kbd_macro] = STATE(2),
        [sym_auto_link] = STATE(2),
        [sym_link] = STATE(18),
        [sym_inline_link_macro] = STATE(2),
        [sym_inline_math_macro] = STATE(2),
        [sym_inline_menu_macro] = STATE(2),
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
        [anon_sym_menu] = ACTIONS(29),
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
        [sym_link] = STATE(18),
        [sym_inline_link_macro] = STATE(3),
        [sym_inline_math_macro] = STATE(3),
        [sym_inline_menu_macro] = STATE(3),
        [aux_sym_inline_repeat1] = STATE(3),
        [ts_builtin_sym_end] = ACTIONS(31),
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
        [sym_inline_email_rx] = ACTIONS(33),
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
        [anon_sym_menu] = ACTIONS(29),
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
        [sym_link] = STATE(18),
        [sym_inline_link_macro] = STATE(3),
        [sym_inline_math_macro] = STATE(3),
        [sym_inline_menu_macro] = STATE(3),
        [aux_sym_inline_repeat1] = STATE(3),
        [ts_builtin_sym_end] = ACTIONS(35),
        [anon_sym_LBRACE] = ACTIONS(37),
        [anon_sym_RBRACE] = ACTIONS(40),
        [sym__word_no_digit] = ACTIONS(43),
        [sym__digits] = ACTIONS(43),
        [anon_sym_BANG] = ACTIONS(40),
        [anon_sym_DQUOTE] = ACTIONS(46),
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
        [anon_sym_LBRACK_LBRACK] = ACTIONS(49),
        [anon_sym_anchor] = ACTIONS(52),
        [sym_inline_email_rx] = ACTIONS(55),
        [anon_sym_footnote] = ACTIONS(58),
        [anon_sym_footnoteref] = ACTIONS(58),
        [anon_sym_image] = ACTIONS(61),
        [anon_sym_icon] = ACTIONS(61),
        [anon_sym_kbd] = ACTIONS(64),
        [anon_sym_btn] = ACTIONS(64),
        [anon_sym_http] = ACTIONS(67),
        [anon_sym_https] = ACTIONS(67),
        [anon_sym_file] = ACTIONS(67),
        [anon_sym_ftp] = ACTIONS(67),
        [anon_sym_irc] = ACTIONS(67),
        [anon_sym_link] = ACTIONS(70),
        [anon_sym_mailto] = ACTIONS(70),
        [anon_sym_stem] = ACTIONS(73),
        [anon_sym_latexmath] = ACTIONS(73),
        [anon_sym_asciimath] = ACTIONS(73),
        [anon_sym_menu] = ACTIONS(76),
    },
    [4] = {
        [ts_builtin_sym_end] = ACTIONS(79),
        [anon_sym_LBRACE] = ACTIONS(81),
        [aux_sym_replacement_token1] = ACTIONS(83),
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
        [anon_sym_footnote] = ACTIONS(81),
        [anon_sym_footnoteref] = ACTIONS(81),
        [anon_sym_image] = ACTIONS(81),
        [anon_sym_icon] = ACTIONS(81),
        [anon_sym_kbd] = ACTIONS(81),
        [anon_sym_btn] = ACTIONS(81),
        [anon_sym_http] = ACTIONS(81),
        [anon_sym_https] = ACTIONS(81),
        [anon_sym_file] = ACTIONS(81),
        [anon_sym_ftp] = ACTIONS(81),
        [anon_sym_irc] = ACTIONS(81),
        [anon_sym_link] = ACTIONS(81),
        [anon_sym_mailto] = ACTIONS(81),
        [anon_sym_stem] = ACTIONS(81),
        [anon_sym_latexmath] = ACTIONS(81),
        [anon_sym_asciimath] = ACTIONS(81),
        [anon_sym_menu] = ACTIONS(81),
    },
    [5] = {
        [aux_sym_link_repeat1] = STATE(8),
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
        [anon_sym_DOT] = ACTIONS(89),
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
        [anon_sym_kbd] = ACTIONS(87),
        [anon_sym_btn] = ACTIONS(87),
        [anon_sym_http] = ACTIONS(87),
        [anon_sym_https] = ACTIONS(87),
        [anon_sym_file] = ACTIONS(87),
        [anon_sym_ftp] = ACTIONS(87),
        [anon_sym_irc] = ACTIONS(87),
        [anon_sym_link] = ACTIONS(87),
        [anon_sym_mailto] = ACTIONS(87),
        [anon_sym_stem] = ACTIONS(87),
        [anon_sym_latexmath] = ACTIONS(87),
        [anon_sym_asciimath] = ACTIONS(87),
        [anon_sym_menu] = ACTIONS(87),
    },
    [6] = {
        [aux_sym_link_repeat1] = STATE(5),
        [ts_builtin_sym_end] = ACTIONS(91),
        [anon_sym_LBRACE] = ACTIONS(93),
        [anon_sym_RBRACE] = ACTIONS(93),
        [sym__word_no_digit] = ACTIONS(93),
        [sym__digits] = ACTIONS(93),
        [anon_sym_BANG] = ACTIONS(93),
        [anon_sym_DQUOTE] = ACTIONS(93),
        [anon_sym_POUND] = ACTIONS(93),
        [anon_sym_DOLLAR] = ACTIONS(93),
        [anon_sym_PERCENT] = ACTIONS(93),
        [anon_sym_AMP] = ACTIONS(93),
        [anon_sym_SQUOTE] = ACTIONS(93),
        [anon_sym_LPAREN] = ACTIONS(93),
        [anon_sym_RPAREN] = ACTIONS(93),
        [anon_sym_STAR] = ACTIONS(93),
        [anon_sym_PLUS] = ACTIONS(93),
        [anon_sym_COMMA] = ACTIONS(93),
        [anon_sym_DASH] = ACTIONS(93),
        [anon_sym_DOT] = ACTIONS(89),
        [anon_sym_SLASH] = ACTIONS(93),
        [anon_sym_COLON] = ACTIONS(93),
        [anon_sym_SEMI] = ACTIONS(93),
        [anon_sym_LT] = ACTIONS(93),
        [anon_sym_EQ] = ACTIONS(93),
        [anon_sym_GT] = ACTIONS(93),
        [anon_sym_QMARK] = ACTIONS(93),
        [anon_sym_AT] = ACTIONS(93),
        [anon_sym_LBRACK] = ACTIONS(93),
        [anon_sym_BSLASH] = ACTIONS(93),
        [anon_sym_RBRACK] = ACTIONS(93),
        [anon_sym_CARET] = ACTIONS(93),
        [anon_sym__] = ACTIONS(93),
        [anon_sym_BQUOTE] = ACTIONS(93),
        [anon_sym_PIPE] = ACTIONS(93),
        [anon_sym_TILDE] = ACTIONS(93),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
        [anon_sym_anchor] = ACTIONS(93),
        [sym_inline_email_rx] = ACTIONS(93),
        [anon_sym_footnote] = ACTIONS(93),
        [anon_sym_footnoteref] = ACTIONS(93),
        [anon_sym_image] = ACTIONS(93),
        [anon_sym_icon] = ACTIONS(93),
        [anon_sym_kbd] = ACTIONS(93),
        [anon_sym_btn] = ACTIONS(93),
        [anon_sym_http] = ACTIONS(93),
        [anon_sym_https] = ACTIONS(93),
        [anon_sym_file] = ACTIONS(93),
        [anon_sym_ftp] = ACTIONS(93),
        [anon_sym_irc] = ACTIONS(93),
        [anon_sym_link] = ACTIONS(93),
        [anon_sym_mailto] = ACTIONS(93),
        [anon_sym_stem] = ACTIONS(93),
        [anon_sym_latexmath] = ACTIONS(93),
        [anon_sym_asciimath] = ACTIONS(93),
        [anon_sym_menu] = ACTIONS(93),
    },
    [7] = {
        [sym_link] = STATE(49),
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
        [anon_sym_footnote] = ACTIONS(81),
        [anon_sym_footnoteref] = ACTIONS(81),
        [anon_sym_image] = ACTIONS(81),
        [anon_sym_icon] = ACTIONS(81),
        [anon_sym_kbd] = ACTIONS(81),
        [anon_sym_btn] = ACTIONS(81),
        [anon_sym_http] = ACTIONS(95),
        [anon_sym_https] = ACTIONS(95),
        [anon_sym_file] = ACTIONS(95),
        [anon_sym_ftp] = ACTIONS(95),
        [anon_sym_irc] = ACTIONS(95),
        [anon_sym_link] = ACTIONS(81),
        [anon_sym_mailto] = ACTIONS(81),
        [anon_sym_stem] = ACTIONS(81),
        [anon_sym_latexmath] = ACTIONS(81),
        [anon_sym_asciimath] = ACTIONS(81),
        [anon_sym_menu] = ACTIONS(81),
    },
    [8] = {
        [aux_sym_link_repeat1] = STATE(8),
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
        [anon_sym_DOT] = ACTIONS(101),
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
        [anon_sym_kbd] = ACTIONS(99),
        [anon_sym_btn] = ACTIONS(99),
        [anon_sym_http] = ACTIONS(99),
        [anon_sym_https] = ACTIONS(99),
        [anon_sym_file] = ACTIONS(99),
        [anon_sym_ftp] = ACTIONS(99),
        [anon_sym_irc] = ACTIONS(99),
        [anon_sym_link] = ACTIONS(99),
        [anon_sym_mailto] = ACTIONS(99),
        [anon_sym_stem] = ACTIONS(99),
        [anon_sym_latexmath] = ACTIONS(99),
        [anon_sym_asciimath] = ACTIONS(99),
        [anon_sym_menu] = ACTIONS(99),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(104),
        [anon_sym_LBRACE] = ACTIONS(106),
        [anon_sym_RBRACE] = ACTIONS(106),
        [sym__word_no_digit] = ACTIONS(106),
        [sym__digits] = ACTIONS(106),
        [anon_sym_BANG] = ACTIONS(106),
        [anon_sym_DQUOTE] = ACTIONS(106),
        [anon_sym_POUND] = ACTIONS(106),
        [anon_sym_DOLLAR] = ACTIONS(106),
        [anon_sym_PERCENT] = ACTIONS(106),
        [anon_sym_AMP] = ACTIONS(106),
        [anon_sym_SQUOTE] = ACTIONS(106),
        [anon_sym_LPAREN] = ACTIONS(106),
        [anon_sym_RPAREN] = ACTIONS(106),
        [anon_sym_STAR] = ACTIONS(106),
        [anon_sym_PLUS] = ACTIONS(106),
        [anon_sym_COMMA] = ACTIONS(106),
        [anon_sym_DASH] = ACTIONS(106),
        [anon_sym_DOT] = ACTIONS(106),
        [anon_sym_SLASH] = ACTIONS(106),
        [anon_sym_COLON] = ACTIONS(106),
        [anon_sym_SEMI] = ACTIONS(106),
        [anon_sym_LT] = ACTIONS(106),
        [anon_sym_EQ] = ACTIONS(106),
        [anon_sym_GT] = ACTIONS(106),
        [anon_sym_QMARK] = ACTIONS(106),
        [anon_sym_AT] = ACTIONS(106),
        [anon_sym_LBRACK] = ACTIONS(106),
        [anon_sym_BSLASH] = ACTIONS(106),
        [anon_sym_RBRACK] = ACTIONS(106),
        [anon_sym_CARET] = ACTIONS(106),
        [anon_sym__] = ACTIONS(106),
        [anon_sym_BQUOTE] = ACTIONS(106),
        [anon_sym_PIPE] = ACTIONS(106),
        [anon_sym_TILDE] = ACTIONS(106),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(106),
        [anon_sym_anchor] = ACTIONS(106),
        [sym_inline_email_rx] = ACTIONS(106),
        [anon_sym_footnote] = ACTIONS(106),
        [anon_sym_footnoteref] = ACTIONS(106),
        [anon_sym_image] = ACTIONS(106),
        [anon_sym_icon] = ACTIONS(106),
        [anon_sym_kbd] = ACTIONS(106),
        [anon_sym_btn] = ACTIONS(106),
        [anon_sym_http] = ACTIONS(106),
        [anon_sym_https] = ACTIONS(106),
        [anon_sym_file] = ACTIONS(106),
        [anon_sym_ftp] = ACTIONS(106),
        [anon_sym_irc] = ACTIONS(106),
        [anon_sym_link] = ACTIONS(106),
        [anon_sym_mailto] = ACTIONS(106),
        [anon_sym_stem] = ACTIONS(106),
        [anon_sym_latexmath] = ACTIONS(106),
        [anon_sym_asciimath] = ACTIONS(106),
        [anon_sym_menu] = ACTIONS(106),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(108),
        [anon_sym_LBRACE] = ACTIONS(110),
        [anon_sym_RBRACE] = ACTIONS(110),
        [sym__word_no_digit] = ACTIONS(110),
        [sym__digits] = ACTIONS(110),
        [anon_sym_BANG] = ACTIONS(110),
        [anon_sym_DQUOTE] = ACTIONS(110),
        [anon_sym_POUND] = ACTIONS(110),
        [anon_sym_DOLLAR] = ACTIONS(110),
        [anon_sym_PERCENT] = ACTIONS(110),
        [anon_sym_AMP] = ACTIONS(110),
        [anon_sym_SQUOTE] = ACTIONS(110),
        [anon_sym_LPAREN] = ACTIONS(110),
        [anon_sym_RPAREN] = ACTIONS(110),
        [anon_sym_STAR] = ACTIONS(110),
        [anon_sym_PLUS] = ACTIONS(110),
        [anon_sym_COMMA] = ACTIONS(110),
        [anon_sym_DASH] = ACTIONS(110),
        [anon_sym_DOT] = ACTIONS(110),
        [anon_sym_SLASH] = ACTIONS(110),
        [anon_sym_COLON] = ACTIONS(110),
        [anon_sym_SEMI] = ACTIONS(110),
        [anon_sym_LT] = ACTIONS(110),
        [anon_sym_EQ] = ACTIONS(110),
        [anon_sym_GT] = ACTIONS(110),
        [anon_sym_QMARK] = ACTIONS(110),
        [anon_sym_AT] = ACTIONS(110),
        [anon_sym_LBRACK] = ACTIONS(110),
        [anon_sym_BSLASH] = ACTIONS(110),
        [anon_sym_RBRACK] = ACTIONS(110),
        [anon_sym_CARET] = ACTIONS(110),
        [anon_sym__] = ACTIONS(110),
        [anon_sym_BQUOTE] = ACTIONS(110),
        [anon_sym_PIPE] = ACTIONS(110),
        [anon_sym_TILDE] = ACTIONS(110),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(110),
        [anon_sym_anchor] = ACTIONS(110),
        [sym_inline_email_rx] = ACTIONS(110),
        [anon_sym_footnote] = ACTIONS(110),
        [anon_sym_footnoteref] = ACTIONS(110),
        [anon_sym_image] = ACTIONS(110),
        [anon_sym_icon] = ACTIONS(110),
        [anon_sym_kbd] = ACTIONS(110),
        [anon_sym_btn] = ACTIONS(110),
        [anon_sym_http] = ACTIONS(110),
        [anon_sym_https] = ACTIONS(110),
        [anon_sym_file] = ACTIONS(110),
        [anon_sym_ftp] = ACTIONS(110),
        [anon_sym_irc] = ACTIONS(110),
        [anon_sym_link] = ACTIONS(110),
        [anon_sym_mailto] = ACTIONS(110),
        [anon_sym_stem] = ACTIONS(110),
        [anon_sym_latexmath] = ACTIONS(110),
        [anon_sym_asciimath] = ACTIONS(110),
        [anon_sym_menu] = ACTIONS(110),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(112),
        [anon_sym_LBRACE] = ACTIONS(114),
        [anon_sym_RBRACE] = ACTIONS(114),
        [sym__word_no_digit] = ACTIONS(114),
        [sym__digits] = ACTIONS(114),
        [anon_sym_BANG] = ACTIONS(114),
        [anon_sym_DQUOTE] = ACTIONS(114),
        [anon_sym_POUND] = ACTIONS(114),
        [anon_sym_DOLLAR] = ACTIONS(114),
        [anon_sym_PERCENT] = ACTIONS(114),
        [anon_sym_AMP] = ACTIONS(114),
        [anon_sym_SQUOTE] = ACTIONS(114),
        [anon_sym_LPAREN] = ACTIONS(114),
        [anon_sym_RPAREN] = ACTIONS(114),
        [anon_sym_STAR] = ACTIONS(114),
        [anon_sym_PLUS] = ACTIONS(114),
        [anon_sym_COMMA] = ACTIONS(114),
        [anon_sym_DASH] = ACTIONS(114),
        [anon_sym_DOT] = ACTIONS(114),
        [anon_sym_SLASH] = ACTIONS(114),
        [anon_sym_COLON] = ACTIONS(114),
        [anon_sym_SEMI] = ACTIONS(114),
        [anon_sym_LT] = ACTIONS(114),
        [anon_sym_EQ] = ACTIONS(114),
        [anon_sym_GT] = ACTIONS(114),
        [anon_sym_QMARK] = ACTIONS(114),
        [anon_sym_AT] = ACTIONS(114),
        [anon_sym_LBRACK] = ACTIONS(114),
        [anon_sym_BSLASH] = ACTIONS(114),
        [anon_sym_RBRACK] = ACTIONS(114),
        [anon_sym_CARET] = ACTIONS(114),
        [anon_sym__] = ACTIONS(114),
        [anon_sym_BQUOTE] = ACTIONS(114),
        [anon_sym_PIPE] = ACTIONS(114),
        [anon_sym_TILDE] = ACTIONS(114),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(114),
        [anon_sym_anchor] = ACTIONS(114),
        [sym_inline_email_rx] = ACTIONS(114),
        [anon_sym_footnote] = ACTIONS(114),
        [anon_sym_footnoteref] = ACTIONS(114),
        [anon_sym_image] = ACTIONS(114),
        [anon_sym_icon] = ACTIONS(114),
        [anon_sym_kbd] = ACTIONS(114),
        [anon_sym_btn] = ACTIONS(114),
        [anon_sym_http] = ACTIONS(114),
        [anon_sym_https] = ACTIONS(114),
        [anon_sym_file] = ACTIONS(114),
        [anon_sym_ftp] = ACTIONS(114),
        [anon_sym_irc] = ACTIONS(114),
        [anon_sym_link] = ACTIONS(114),
        [anon_sym_mailto] = ACTIONS(114),
        [anon_sym_stem] = ACTIONS(114),
        [anon_sym_latexmath] = ACTIONS(114),
        [anon_sym_asciimath] = ACTIONS(114),
        [anon_sym_menu] = ACTIONS(114),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(116),
        [anon_sym_LBRACE] = ACTIONS(118),
        [anon_sym_RBRACE] = ACTIONS(118),
        [sym__word_no_digit] = ACTIONS(118),
        [sym__digits] = ACTIONS(118),
        [anon_sym_BANG] = ACTIONS(118),
        [anon_sym_DQUOTE] = ACTIONS(118),
        [anon_sym_POUND] = ACTIONS(118),
        [anon_sym_DOLLAR] = ACTIONS(118),
        [anon_sym_PERCENT] = ACTIONS(118),
        [anon_sym_AMP] = ACTIONS(118),
        [anon_sym_SQUOTE] = ACTIONS(118),
        [anon_sym_LPAREN] = ACTIONS(118),
        [anon_sym_RPAREN] = ACTIONS(118),
        [anon_sym_STAR] = ACTIONS(118),
        [anon_sym_PLUS] = ACTIONS(118),
        [anon_sym_COMMA] = ACTIONS(118),
        [anon_sym_DASH] = ACTIONS(118),
        [anon_sym_DOT] = ACTIONS(118),
        [anon_sym_SLASH] = ACTIONS(118),
        [anon_sym_COLON] = ACTIONS(118),
        [anon_sym_SEMI] = ACTIONS(118),
        [anon_sym_LT] = ACTIONS(118),
        [anon_sym_EQ] = ACTIONS(118),
        [anon_sym_GT] = ACTIONS(118),
        [anon_sym_QMARK] = ACTIONS(118),
        [anon_sym_AT] = ACTIONS(118),
        [anon_sym_LBRACK] = ACTIONS(118),
        [anon_sym_BSLASH] = ACTIONS(118),
        [anon_sym_RBRACK] = ACTIONS(118),
        [anon_sym_CARET] = ACTIONS(118),
        [anon_sym__] = ACTIONS(118),
        [anon_sym_BQUOTE] = ACTIONS(118),
        [anon_sym_PIPE] = ACTIONS(118),
        [anon_sym_TILDE] = ACTIONS(118),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(118),
        [anon_sym_anchor] = ACTIONS(118),
        [sym_inline_email_rx] = ACTIONS(118),
        [anon_sym_footnote] = ACTIONS(118),
        [anon_sym_footnoteref] = ACTIONS(118),
        [anon_sym_image] = ACTIONS(118),
        [anon_sym_icon] = ACTIONS(118),
        [anon_sym_kbd] = ACTIONS(118),
        [anon_sym_btn] = ACTIONS(118),
        [anon_sym_http] = ACTIONS(118),
        [anon_sym_https] = ACTIONS(118),
        [anon_sym_file] = ACTIONS(118),
        [anon_sym_ftp] = ACTIONS(118),
        [anon_sym_irc] = ACTIONS(118),
        [anon_sym_link] = ACTIONS(118),
        [anon_sym_mailto] = ACTIONS(118),
        [anon_sym_stem] = ACTIONS(118),
        [anon_sym_latexmath] = ACTIONS(118),
        [anon_sym_asciimath] = ACTIONS(118),
        [anon_sym_menu] = ACTIONS(118),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(120),
        [anon_sym_LBRACE] = ACTIONS(122),
        [anon_sym_RBRACE] = ACTIONS(122),
        [sym__word_no_digit] = ACTIONS(122),
        [sym__digits] = ACTIONS(122),
        [anon_sym_BANG] = ACTIONS(122),
        [anon_sym_DQUOTE] = ACTIONS(122),
        [anon_sym_POUND] = ACTIONS(122),
        [anon_sym_DOLLAR] = ACTIONS(122),
        [anon_sym_PERCENT] = ACTIONS(122),
        [anon_sym_AMP] = ACTIONS(122),
        [anon_sym_SQUOTE] = ACTIONS(122),
        [anon_sym_LPAREN] = ACTIONS(122),
        [anon_sym_RPAREN] = ACTIONS(122),
        [anon_sym_STAR] = ACTIONS(122),
        [anon_sym_PLUS] = ACTIONS(122),
        [anon_sym_COMMA] = ACTIONS(122),
        [anon_sym_DASH] = ACTIONS(122),
        [anon_sym_DOT] = ACTIONS(122),
        [anon_sym_SLASH] = ACTIONS(122),
        [anon_sym_COLON] = ACTIONS(122),
        [anon_sym_SEMI] = ACTIONS(122),
        [anon_sym_LT] = ACTIONS(122),
        [anon_sym_EQ] = ACTIONS(122),
        [anon_sym_GT] = ACTIONS(122),
        [anon_sym_QMARK] = ACTIONS(122),
        [anon_sym_AT] = ACTIONS(122),
        [anon_sym_LBRACK] = ACTIONS(122),
        [anon_sym_BSLASH] = ACTIONS(122),
        [anon_sym_RBRACK] = ACTIONS(122),
        [anon_sym_CARET] = ACTIONS(122),
        [anon_sym__] = ACTIONS(122),
        [anon_sym_BQUOTE] = ACTIONS(122),
        [anon_sym_PIPE] = ACTIONS(122),
        [anon_sym_TILDE] = ACTIONS(122),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(122),
        [anon_sym_anchor] = ACTIONS(122),
        [sym_inline_email_rx] = ACTIONS(122),
        [anon_sym_footnote] = ACTIONS(122),
        [anon_sym_footnoteref] = ACTIONS(122),
        [anon_sym_image] = ACTIONS(122),
        [anon_sym_icon] = ACTIONS(122),
        [anon_sym_kbd] = ACTIONS(122),
        [anon_sym_btn] = ACTIONS(122),
        [anon_sym_http] = ACTIONS(122),
        [anon_sym_https] = ACTIONS(122),
        [anon_sym_file] = ACTIONS(122),
        [anon_sym_ftp] = ACTIONS(122),
        [anon_sym_irc] = ACTIONS(122),
        [anon_sym_link] = ACTIONS(122),
        [anon_sym_mailto] = ACTIONS(122),
        [anon_sym_stem] = ACTIONS(122),
        [anon_sym_latexmath] = ACTIONS(122),
        [anon_sym_asciimath] = ACTIONS(122),
        [anon_sym_menu] = ACTIONS(122),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(124),
        [anon_sym_LBRACE] = ACTIONS(126),
        [anon_sym_RBRACE] = ACTIONS(126),
        [sym__word_no_digit] = ACTIONS(126),
        [sym__digits] = ACTIONS(126),
        [anon_sym_BANG] = ACTIONS(126),
        [anon_sym_DQUOTE] = ACTIONS(126),
        [anon_sym_POUND] = ACTIONS(126),
        [anon_sym_DOLLAR] = ACTIONS(126),
        [anon_sym_PERCENT] = ACTIONS(126),
        [anon_sym_AMP] = ACTIONS(126),
        [anon_sym_SQUOTE] = ACTIONS(126),
        [anon_sym_LPAREN] = ACTIONS(126),
        [anon_sym_RPAREN] = ACTIONS(126),
        [anon_sym_STAR] = ACTIONS(126),
        [anon_sym_PLUS] = ACTIONS(126),
        [anon_sym_COMMA] = ACTIONS(126),
        [anon_sym_DASH] = ACTIONS(126),
        [anon_sym_DOT] = ACTIONS(126),
        [anon_sym_SLASH] = ACTIONS(126),
        [anon_sym_COLON] = ACTIONS(126),
        [anon_sym_SEMI] = ACTIONS(126),
        [anon_sym_LT] = ACTIONS(126),
        [anon_sym_EQ] = ACTIONS(126),
        [anon_sym_GT] = ACTIONS(126),
        [anon_sym_QMARK] = ACTIONS(126),
        [anon_sym_AT] = ACTIONS(126),
        [anon_sym_LBRACK] = ACTIONS(126),
        [anon_sym_BSLASH] = ACTIONS(126),
        [anon_sym_RBRACK] = ACTIONS(126),
        [anon_sym_CARET] = ACTIONS(126),
        [anon_sym__] = ACTIONS(126),
        [anon_sym_BQUOTE] = ACTIONS(126),
        [anon_sym_PIPE] = ACTIONS(126),
        [anon_sym_TILDE] = ACTIONS(126),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(126),
        [anon_sym_anchor] = ACTIONS(126),
        [sym_inline_email_rx] = ACTIONS(126),
        [anon_sym_footnote] = ACTIONS(126),
        [anon_sym_footnoteref] = ACTIONS(126),
        [anon_sym_image] = ACTIONS(126),
        [anon_sym_icon] = ACTIONS(126),
        [anon_sym_kbd] = ACTIONS(126),
        [anon_sym_btn] = ACTIONS(126),
        [anon_sym_http] = ACTIONS(126),
        [anon_sym_https] = ACTIONS(126),
        [anon_sym_file] = ACTIONS(126),
        [anon_sym_ftp] = ACTIONS(126),
        [anon_sym_irc] = ACTIONS(126),
        [anon_sym_link] = ACTIONS(126),
        [anon_sym_mailto] = ACTIONS(126),
        [anon_sym_stem] = ACTIONS(126),
        [anon_sym_latexmath] = ACTIONS(126),
        [anon_sym_asciimath] = ACTIONS(126),
        [anon_sym_menu] = ACTIONS(126),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(128),
        [anon_sym_LBRACE] = ACTIONS(130),
        [anon_sym_RBRACE] = ACTIONS(130),
        [sym__word_no_digit] = ACTIONS(130),
        [sym__digits] = ACTIONS(130),
        [anon_sym_BANG] = ACTIONS(130),
        [anon_sym_DQUOTE] = ACTIONS(130),
        [anon_sym_POUND] = ACTIONS(130),
        [anon_sym_DOLLAR] = ACTIONS(130),
        [anon_sym_PERCENT] = ACTIONS(130),
        [anon_sym_AMP] = ACTIONS(130),
        [anon_sym_SQUOTE] = ACTIONS(130),
        [anon_sym_LPAREN] = ACTIONS(130),
        [anon_sym_RPAREN] = ACTIONS(130),
        [anon_sym_STAR] = ACTIONS(130),
        [anon_sym_PLUS] = ACTIONS(130),
        [anon_sym_COMMA] = ACTIONS(130),
        [anon_sym_DASH] = ACTIONS(130),
        [anon_sym_DOT] = ACTIONS(130),
        [anon_sym_SLASH] = ACTIONS(130),
        [anon_sym_COLON] = ACTIONS(130),
        [anon_sym_SEMI] = ACTIONS(130),
        [anon_sym_LT] = ACTIONS(130),
        [anon_sym_EQ] = ACTIONS(130),
        [anon_sym_GT] = ACTIONS(130),
        [anon_sym_QMARK] = ACTIONS(130),
        [anon_sym_AT] = ACTIONS(130),
        [anon_sym_LBRACK] = ACTIONS(130),
        [anon_sym_BSLASH] = ACTIONS(130),
        [anon_sym_RBRACK] = ACTIONS(130),
        [anon_sym_CARET] = ACTIONS(130),
        [anon_sym__] = ACTIONS(130),
        [anon_sym_BQUOTE] = ACTIONS(130),
        [anon_sym_PIPE] = ACTIONS(130),
        [anon_sym_TILDE] = ACTIONS(130),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(130),
        [anon_sym_anchor] = ACTIONS(130),
        [sym_inline_email_rx] = ACTIONS(130),
        [anon_sym_footnote] = ACTIONS(130),
        [anon_sym_footnoteref] = ACTIONS(130),
        [anon_sym_image] = ACTIONS(130),
        [anon_sym_icon] = ACTIONS(130),
        [anon_sym_kbd] = ACTIONS(130),
        [anon_sym_btn] = ACTIONS(130),
        [anon_sym_http] = ACTIONS(130),
        [anon_sym_https] = ACTIONS(130),
        [anon_sym_file] = ACTIONS(130),
        [anon_sym_ftp] = ACTIONS(130),
        [anon_sym_irc] = ACTIONS(130),
        [anon_sym_link] = ACTIONS(130),
        [anon_sym_mailto] = ACTIONS(130),
        [anon_sym_stem] = ACTIONS(130),
        [anon_sym_latexmath] = ACTIONS(130),
        [anon_sym_asciimath] = ACTIONS(130),
        [anon_sym_menu] = ACTIONS(130),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(132),
        [anon_sym_LBRACE] = ACTIONS(134),
        [anon_sym_RBRACE] = ACTIONS(134),
        [sym__word_no_digit] = ACTIONS(134),
        [sym__digits] = ACTIONS(134),
        [anon_sym_BANG] = ACTIONS(134),
        [anon_sym_DQUOTE] = ACTIONS(134),
        [anon_sym_POUND] = ACTIONS(134),
        [anon_sym_DOLLAR] = ACTIONS(134),
        [anon_sym_PERCENT] = ACTIONS(134),
        [anon_sym_AMP] = ACTIONS(134),
        [anon_sym_SQUOTE] = ACTIONS(134),
        [anon_sym_LPAREN] = ACTIONS(134),
        [anon_sym_RPAREN] = ACTIONS(134),
        [anon_sym_STAR] = ACTIONS(134),
        [anon_sym_PLUS] = ACTIONS(134),
        [anon_sym_COMMA] = ACTIONS(134),
        [anon_sym_DASH] = ACTIONS(134),
        [anon_sym_DOT] = ACTIONS(134),
        [anon_sym_SLASH] = ACTIONS(134),
        [anon_sym_COLON] = ACTIONS(134),
        [anon_sym_SEMI] = ACTIONS(134),
        [anon_sym_LT] = ACTIONS(134),
        [anon_sym_EQ] = ACTIONS(134),
        [anon_sym_GT] = ACTIONS(134),
        [anon_sym_QMARK] = ACTIONS(134),
        [anon_sym_AT] = ACTIONS(134),
        [anon_sym_LBRACK] = ACTIONS(134),
        [anon_sym_BSLASH] = ACTIONS(134),
        [anon_sym_RBRACK] = ACTIONS(134),
        [anon_sym_CARET] = ACTIONS(134),
        [anon_sym__] = ACTIONS(134),
        [anon_sym_BQUOTE] = ACTIONS(134),
        [anon_sym_PIPE] = ACTIONS(134),
        [anon_sym_TILDE] = ACTIONS(134),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(134),
        [anon_sym_anchor] = ACTIONS(134),
        [sym_inline_email_rx] = ACTIONS(134),
        [anon_sym_footnote] = ACTIONS(134),
        [anon_sym_footnoteref] = ACTIONS(134),
        [anon_sym_image] = ACTIONS(134),
        [anon_sym_icon] = ACTIONS(134),
        [anon_sym_kbd] = ACTIONS(134),
        [anon_sym_btn] = ACTIONS(134),
        [anon_sym_http] = ACTIONS(134),
        [anon_sym_https] = ACTIONS(134),
        [anon_sym_file] = ACTIONS(134),
        [anon_sym_ftp] = ACTIONS(134),
        [anon_sym_irc] = ACTIONS(134),
        [anon_sym_link] = ACTIONS(134),
        [anon_sym_mailto] = ACTIONS(134),
        [anon_sym_stem] = ACTIONS(134),
        [anon_sym_latexmath] = ACTIONS(134),
        [anon_sym_asciimath] = ACTIONS(134),
        [anon_sym_menu] = ACTIONS(134),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(136),
        [anon_sym_LBRACE] = ACTIONS(138),
        [anon_sym_RBRACE] = ACTIONS(138),
        [sym__word_no_digit] = ACTIONS(138),
        [sym__digits] = ACTIONS(138),
        [anon_sym_BANG] = ACTIONS(138),
        [anon_sym_DQUOTE] = ACTIONS(138),
        [anon_sym_POUND] = ACTIONS(138),
        [anon_sym_DOLLAR] = ACTIONS(138),
        [anon_sym_PERCENT] = ACTIONS(138),
        [anon_sym_AMP] = ACTIONS(138),
        [anon_sym_SQUOTE] = ACTIONS(138),
        [anon_sym_LPAREN] = ACTIONS(138),
        [anon_sym_RPAREN] = ACTIONS(138),
        [anon_sym_STAR] = ACTIONS(138),
        [anon_sym_PLUS] = ACTIONS(138),
        [anon_sym_COMMA] = ACTIONS(138),
        [anon_sym_DASH] = ACTIONS(138),
        [anon_sym_DOT] = ACTIONS(138),
        [anon_sym_SLASH] = ACTIONS(138),
        [anon_sym_COLON] = ACTIONS(138),
        [anon_sym_SEMI] = ACTIONS(138),
        [anon_sym_LT] = ACTIONS(138),
        [anon_sym_EQ] = ACTIONS(138),
        [anon_sym_GT] = ACTIONS(138),
        [anon_sym_QMARK] = ACTIONS(138),
        [anon_sym_AT] = ACTIONS(138),
        [anon_sym_LBRACK] = ACTIONS(138),
        [anon_sym_BSLASH] = ACTIONS(138),
        [anon_sym_RBRACK] = ACTIONS(138),
        [anon_sym_CARET] = ACTIONS(138),
        [anon_sym__] = ACTIONS(138),
        [anon_sym_BQUOTE] = ACTIONS(138),
        [anon_sym_PIPE] = ACTIONS(138),
        [anon_sym_TILDE] = ACTIONS(138),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(138),
        [anon_sym_anchor] = ACTIONS(138),
        [sym_inline_email_rx] = ACTIONS(138),
        [anon_sym_footnote] = ACTIONS(138),
        [anon_sym_footnoteref] = ACTIONS(138),
        [anon_sym_image] = ACTIONS(138),
        [anon_sym_icon] = ACTIONS(138),
        [anon_sym_kbd] = ACTIONS(138),
        [anon_sym_btn] = ACTIONS(138),
        [anon_sym_http] = ACTIONS(138),
        [anon_sym_https] = ACTIONS(138),
        [anon_sym_file] = ACTIONS(138),
        [anon_sym_ftp] = ACTIONS(138),
        [anon_sym_irc] = ACTIONS(138),
        [anon_sym_link] = ACTIONS(138),
        [anon_sym_mailto] = ACTIONS(138),
        [anon_sym_stem] = ACTIONS(138),
        [anon_sym_latexmath] = ACTIONS(138),
        [anon_sym_asciimath] = ACTIONS(138),
        [anon_sym_menu] = ACTIONS(138),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(140),
        [anon_sym_LBRACE] = ACTIONS(142),
        [anon_sym_RBRACE] = ACTIONS(142),
        [sym__word_no_digit] = ACTIONS(142),
        [sym__digits] = ACTIONS(142),
        [anon_sym_BANG] = ACTIONS(142),
        [anon_sym_DQUOTE] = ACTIONS(142),
        [anon_sym_POUND] = ACTIONS(142),
        [anon_sym_DOLLAR] = ACTIONS(142),
        [anon_sym_PERCENT] = ACTIONS(142),
        [anon_sym_AMP] = ACTIONS(142),
        [anon_sym_SQUOTE] = ACTIONS(142),
        [anon_sym_LPAREN] = ACTIONS(142),
        [anon_sym_RPAREN] = ACTIONS(142),
        [anon_sym_STAR] = ACTIONS(142),
        [anon_sym_PLUS] = ACTIONS(142),
        [anon_sym_COMMA] = ACTIONS(142),
        [anon_sym_DASH] = ACTIONS(142),
        [anon_sym_DOT] = ACTIONS(142),
        [anon_sym_SLASH] = ACTIONS(142),
        [anon_sym_COLON] = ACTIONS(142),
        [anon_sym_SEMI] = ACTIONS(142),
        [anon_sym_LT] = ACTIONS(142),
        [anon_sym_EQ] = ACTIONS(142),
        [anon_sym_GT] = ACTIONS(142),
        [anon_sym_QMARK] = ACTIONS(142),
        [anon_sym_AT] = ACTIONS(142),
        [anon_sym_LBRACK] = ACTIONS(142),
        [anon_sym_BSLASH] = ACTIONS(142),
        [anon_sym_RBRACK] = ACTIONS(142),
        [anon_sym_CARET] = ACTIONS(142),
        [anon_sym__] = ACTIONS(142),
        [anon_sym_BQUOTE] = ACTIONS(142),
        [anon_sym_PIPE] = ACTIONS(142),
        [anon_sym_TILDE] = ACTIONS(142),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(142),
        [anon_sym_anchor] = ACTIONS(142),
        [sym_inline_email_rx] = ACTIONS(142),
        [anon_sym_footnote] = ACTIONS(142),
        [anon_sym_footnoteref] = ACTIONS(142),
        [anon_sym_image] = ACTIONS(142),
        [anon_sym_icon] = ACTIONS(142),
        [anon_sym_kbd] = ACTIONS(142),
        [anon_sym_btn] = ACTIONS(142),
        [anon_sym_http] = ACTIONS(142),
        [anon_sym_https] = ACTIONS(142),
        [anon_sym_file] = ACTIONS(142),
        [anon_sym_ftp] = ACTIONS(142),
        [anon_sym_irc] = ACTIONS(142),
        [anon_sym_link] = ACTIONS(142),
        [anon_sym_mailto] = ACTIONS(142),
        [anon_sym_stem] = ACTIONS(142),
        [anon_sym_latexmath] = ACTIONS(142),
        [anon_sym_asciimath] = ACTIONS(142),
        [anon_sym_menu] = ACTIONS(142),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(144),
        [anon_sym_LBRACE] = ACTIONS(146),
        [anon_sym_RBRACE] = ACTIONS(146),
        [sym__word_no_digit] = ACTIONS(146),
        [sym__digits] = ACTIONS(146),
        [anon_sym_BANG] = ACTIONS(146),
        [anon_sym_DQUOTE] = ACTIONS(146),
        [anon_sym_POUND] = ACTIONS(146),
        [anon_sym_DOLLAR] = ACTIONS(146),
        [anon_sym_PERCENT] = ACTIONS(146),
        [anon_sym_AMP] = ACTIONS(146),
        [anon_sym_SQUOTE] = ACTIONS(146),
        [anon_sym_LPAREN] = ACTIONS(146),
        [anon_sym_RPAREN] = ACTIONS(146),
        [anon_sym_STAR] = ACTIONS(146),
        [anon_sym_PLUS] = ACTIONS(146),
        [anon_sym_COMMA] = ACTIONS(146),
        [anon_sym_DASH] = ACTIONS(146),
        [anon_sym_DOT] = ACTIONS(146),
        [anon_sym_SLASH] = ACTIONS(146),
        [anon_sym_COLON] = ACTIONS(146),
        [anon_sym_SEMI] = ACTIONS(146),
        [anon_sym_LT] = ACTIONS(146),
        [anon_sym_EQ] = ACTIONS(146),
        [anon_sym_GT] = ACTIONS(146),
        [anon_sym_QMARK] = ACTIONS(146),
        [anon_sym_AT] = ACTIONS(146),
        [anon_sym_LBRACK] = ACTIONS(146),
        [anon_sym_BSLASH] = ACTIONS(146),
        [anon_sym_RBRACK] = ACTIONS(146),
        [anon_sym_CARET] = ACTIONS(146),
        [anon_sym__] = ACTIONS(146),
        [anon_sym_BQUOTE] = ACTIONS(146),
        [anon_sym_PIPE] = ACTIONS(146),
        [anon_sym_TILDE] = ACTIONS(146),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(146),
        [anon_sym_anchor] = ACTIONS(146),
        [sym_inline_email_rx] = ACTIONS(146),
        [anon_sym_footnote] = ACTIONS(146),
        [anon_sym_footnoteref] = ACTIONS(146),
        [anon_sym_image] = ACTIONS(146),
        [anon_sym_icon] = ACTIONS(146),
        [anon_sym_kbd] = ACTIONS(146),
        [anon_sym_btn] = ACTIONS(146),
        [anon_sym_http] = ACTIONS(146),
        [anon_sym_https] = ACTIONS(146),
        [anon_sym_file] = ACTIONS(146),
        [anon_sym_ftp] = ACTIONS(146),
        [anon_sym_irc] = ACTIONS(146),
        [anon_sym_link] = ACTIONS(146),
        [anon_sym_mailto] = ACTIONS(146),
        [anon_sym_stem] = ACTIONS(146),
        [anon_sym_latexmath] = ACTIONS(146),
        [anon_sym_asciimath] = ACTIONS(146),
        [anon_sym_menu] = ACTIONS(146),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(148),
        [anon_sym_LBRACE] = ACTIONS(150),
        [anon_sym_RBRACE] = ACTIONS(150),
        [sym__word_no_digit] = ACTIONS(150),
        [sym__digits] = ACTIONS(150),
        [anon_sym_BANG] = ACTIONS(150),
        [anon_sym_DQUOTE] = ACTIONS(150),
        [anon_sym_POUND] = ACTIONS(150),
        [anon_sym_DOLLAR] = ACTIONS(150),
        [anon_sym_PERCENT] = ACTIONS(150),
        [anon_sym_AMP] = ACTIONS(150),
        [anon_sym_SQUOTE] = ACTIONS(150),
        [anon_sym_LPAREN] = ACTIONS(150),
        [anon_sym_RPAREN] = ACTIONS(150),
        [anon_sym_STAR] = ACTIONS(150),
        [anon_sym_PLUS] = ACTIONS(150),
        [anon_sym_COMMA] = ACTIONS(150),
        [anon_sym_DASH] = ACTIONS(150),
        [anon_sym_DOT] = ACTIONS(150),
        [anon_sym_SLASH] = ACTIONS(150),
        [anon_sym_COLON] = ACTIONS(150),
        [anon_sym_SEMI] = ACTIONS(150),
        [anon_sym_LT] = ACTIONS(150),
        [anon_sym_EQ] = ACTIONS(150),
        [anon_sym_GT] = ACTIONS(150),
        [anon_sym_QMARK] = ACTIONS(150),
        [anon_sym_AT] = ACTIONS(150),
        [anon_sym_LBRACK] = ACTIONS(150),
        [anon_sym_BSLASH] = ACTIONS(150),
        [anon_sym_RBRACK] = ACTIONS(150),
        [anon_sym_CARET] = ACTIONS(150),
        [anon_sym__] = ACTIONS(150),
        [anon_sym_BQUOTE] = ACTIONS(150),
        [anon_sym_PIPE] = ACTIONS(150),
        [anon_sym_TILDE] = ACTIONS(150),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(150),
        [anon_sym_anchor] = ACTIONS(150),
        [sym_inline_email_rx] = ACTIONS(150),
        [anon_sym_footnote] = ACTIONS(150),
        [anon_sym_footnoteref] = ACTIONS(150),
        [anon_sym_image] = ACTIONS(150),
        [anon_sym_icon] = ACTIONS(150),
        [anon_sym_kbd] = ACTIONS(150),
        [anon_sym_btn] = ACTIONS(150),
        [anon_sym_http] = ACTIONS(150),
        [anon_sym_https] = ACTIONS(150),
        [anon_sym_file] = ACTIONS(150),
        [anon_sym_ftp] = ACTIONS(150),
        [anon_sym_irc] = ACTIONS(150),
        [anon_sym_link] = ACTIONS(150),
        [anon_sym_mailto] = ACTIONS(150),
        [anon_sym_stem] = ACTIONS(150),
        [anon_sym_latexmath] = ACTIONS(150),
        [anon_sym_asciimath] = ACTIONS(150),
        [anon_sym_menu] = ACTIONS(150),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(152),
        [anon_sym_LBRACE] = ACTIONS(154),
        [anon_sym_RBRACE] = ACTIONS(154),
        [sym__word_no_digit] = ACTIONS(154),
        [sym__digits] = ACTIONS(154),
        [anon_sym_BANG] = ACTIONS(154),
        [anon_sym_DQUOTE] = ACTIONS(154),
        [anon_sym_POUND] = ACTIONS(154),
        [anon_sym_DOLLAR] = ACTIONS(154),
        [anon_sym_PERCENT] = ACTIONS(154),
        [anon_sym_AMP] = ACTIONS(154),
        [anon_sym_SQUOTE] = ACTIONS(154),
        [anon_sym_LPAREN] = ACTIONS(154),
        [anon_sym_RPAREN] = ACTIONS(154),
        [anon_sym_STAR] = ACTIONS(154),
        [anon_sym_PLUS] = ACTIONS(154),
        [anon_sym_COMMA] = ACTIONS(154),
        [anon_sym_DASH] = ACTIONS(154),
        [anon_sym_DOT] = ACTIONS(154),
        [anon_sym_SLASH] = ACTIONS(154),
        [anon_sym_COLON] = ACTIONS(154),
        [anon_sym_SEMI] = ACTIONS(154),
        [anon_sym_LT] = ACTIONS(154),
        [anon_sym_EQ] = ACTIONS(154),
        [anon_sym_GT] = ACTIONS(154),
        [anon_sym_QMARK] = ACTIONS(154),
        [anon_sym_AT] = ACTIONS(154),
        [anon_sym_LBRACK] = ACTIONS(154),
        [anon_sym_BSLASH] = ACTIONS(154),
        [anon_sym_RBRACK] = ACTIONS(154),
        [anon_sym_CARET] = ACTIONS(154),
        [anon_sym__] = ACTIONS(154),
        [anon_sym_BQUOTE] = ACTIONS(154),
        [anon_sym_PIPE] = ACTIONS(154),
        [anon_sym_TILDE] = ACTIONS(154),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(154),
        [anon_sym_anchor] = ACTIONS(154),
        [sym_inline_email_rx] = ACTIONS(154),
        [anon_sym_footnote] = ACTIONS(154),
        [anon_sym_footnoteref] = ACTIONS(154),
        [anon_sym_image] = ACTIONS(154),
        [anon_sym_icon] = ACTIONS(154),
        [anon_sym_kbd] = ACTIONS(154),
        [anon_sym_btn] = ACTIONS(154),
        [anon_sym_http] = ACTIONS(154),
        [anon_sym_https] = ACTIONS(154),
        [anon_sym_file] = ACTIONS(154),
        [anon_sym_ftp] = ACTIONS(154),
        [anon_sym_irc] = ACTIONS(154),
        [anon_sym_link] = ACTIONS(154),
        [anon_sym_mailto] = ACTIONS(154),
        [anon_sym_stem] = ACTIONS(154),
        [anon_sym_latexmath] = ACTIONS(154),
        [anon_sym_asciimath] = ACTIONS(154),
        [anon_sym_menu] = ACTIONS(154),
    },
    [22] = {
        [ts_builtin_sym_end] = ACTIONS(156),
        [anon_sym_LBRACE] = ACTIONS(158),
        [anon_sym_RBRACE] = ACTIONS(158),
        [sym__word_no_digit] = ACTIONS(158),
        [sym__digits] = ACTIONS(158),
        [anon_sym_BANG] = ACTIONS(158),
        [anon_sym_DQUOTE] = ACTIONS(158),
        [anon_sym_POUND] = ACTIONS(158),
        [anon_sym_DOLLAR] = ACTIONS(158),
        [anon_sym_PERCENT] = ACTIONS(158),
        [anon_sym_AMP] = ACTIONS(158),
        [anon_sym_SQUOTE] = ACTIONS(158),
        [anon_sym_LPAREN] = ACTIONS(158),
        [anon_sym_RPAREN] = ACTIONS(158),
        [anon_sym_STAR] = ACTIONS(158),
        [anon_sym_PLUS] = ACTIONS(158),
        [anon_sym_COMMA] = ACTIONS(158),
        [anon_sym_DASH] = ACTIONS(158),
        [anon_sym_DOT] = ACTIONS(158),
        [anon_sym_SLASH] = ACTIONS(158),
        [anon_sym_COLON] = ACTIONS(158),
        [anon_sym_SEMI] = ACTIONS(158),
        [anon_sym_LT] = ACTIONS(158),
        [anon_sym_EQ] = ACTIONS(158),
        [anon_sym_GT] = ACTIONS(158),
        [anon_sym_QMARK] = ACTIONS(158),
        [anon_sym_AT] = ACTIONS(158),
        [anon_sym_LBRACK] = ACTIONS(158),
        [anon_sym_BSLASH] = ACTIONS(158),
        [anon_sym_RBRACK] = ACTIONS(158),
        [anon_sym_CARET] = ACTIONS(158),
        [anon_sym__] = ACTIONS(158),
        [anon_sym_BQUOTE] = ACTIONS(158),
        [anon_sym_PIPE] = ACTIONS(158),
        [anon_sym_TILDE] = ACTIONS(158),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(158),
        [anon_sym_anchor] = ACTIONS(158),
        [sym_inline_email_rx] = ACTIONS(158),
        [anon_sym_footnote] = ACTIONS(158),
        [anon_sym_footnoteref] = ACTIONS(158),
        [anon_sym_image] = ACTIONS(158),
        [anon_sym_icon] = ACTIONS(158),
        [anon_sym_kbd] = ACTIONS(158),
        [anon_sym_btn] = ACTIONS(158),
        [anon_sym_http] = ACTIONS(158),
        [anon_sym_https] = ACTIONS(158),
        [anon_sym_file] = ACTIONS(158),
        [anon_sym_ftp] = ACTIONS(158),
        [anon_sym_irc] = ACTIONS(158),
        [anon_sym_link] = ACTIONS(158),
        [anon_sym_mailto] = ACTIONS(158),
        [anon_sym_stem] = ACTIONS(158),
        [anon_sym_latexmath] = ACTIONS(158),
        [anon_sym_asciimath] = ACTIONS(158),
        [anon_sym_menu] = ACTIONS(158),
    },
    [23] = {
        [ts_builtin_sym_end] = ACTIONS(160),
        [anon_sym_LBRACE] = ACTIONS(162),
        [anon_sym_RBRACE] = ACTIONS(162),
        [sym__word_no_digit] = ACTIONS(162),
        [sym__digits] = ACTIONS(162),
        [anon_sym_BANG] = ACTIONS(162),
        [anon_sym_DQUOTE] = ACTIONS(162),
        [anon_sym_POUND] = ACTIONS(162),
        [anon_sym_DOLLAR] = ACTIONS(162),
        [anon_sym_PERCENT] = ACTIONS(162),
        [anon_sym_AMP] = ACTIONS(162),
        [anon_sym_SQUOTE] = ACTIONS(162),
        [anon_sym_LPAREN] = ACTIONS(162),
        [anon_sym_RPAREN] = ACTIONS(162),
        [anon_sym_STAR] = ACTIONS(162),
        [anon_sym_PLUS] = ACTIONS(162),
        [anon_sym_COMMA] = ACTIONS(162),
        [anon_sym_DASH] = ACTIONS(162),
        [anon_sym_DOT] = ACTIONS(162),
        [anon_sym_SLASH] = ACTIONS(162),
        [anon_sym_COLON] = ACTIONS(162),
        [anon_sym_SEMI] = ACTIONS(162),
        [anon_sym_LT] = ACTIONS(162),
        [anon_sym_EQ] = ACTIONS(162),
        [anon_sym_GT] = ACTIONS(162),
        [anon_sym_QMARK] = ACTIONS(162),
        [anon_sym_AT] = ACTIONS(162),
        [anon_sym_LBRACK] = ACTIONS(162),
        [anon_sym_BSLASH] = ACTIONS(162),
        [anon_sym_RBRACK] = ACTIONS(162),
        [anon_sym_CARET] = ACTIONS(162),
        [anon_sym__] = ACTIONS(162),
        [anon_sym_BQUOTE] = ACTIONS(162),
        [anon_sym_PIPE] = ACTIONS(162),
        [anon_sym_TILDE] = ACTIONS(162),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(162),
        [anon_sym_anchor] = ACTIONS(162),
        [sym_inline_email_rx] = ACTIONS(162),
        [anon_sym_footnote] = ACTIONS(162),
        [anon_sym_footnoteref] = ACTIONS(162),
        [anon_sym_image] = ACTIONS(162),
        [anon_sym_icon] = ACTIONS(162),
        [anon_sym_kbd] = ACTIONS(162),
        [anon_sym_btn] = ACTIONS(162),
        [anon_sym_http] = ACTIONS(162),
        [anon_sym_https] = ACTIONS(162),
        [anon_sym_file] = ACTIONS(162),
        [anon_sym_ftp] = ACTIONS(162),
        [anon_sym_irc] = ACTIONS(162),
        [anon_sym_link] = ACTIONS(162),
        [anon_sym_mailto] = ACTIONS(162),
        [anon_sym_stem] = ACTIONS(162),
        [anon_sym_latexmath] = ACTIONS(162),
        [anon_sym_asciimath] = ACTIONS(162),
        [anon_sym_menu] = ACTIONS(162),
    },
    [24] = {
        [ts_builtin_sym_end] = ACTIONS(164),
        [anon_sym_LBRACE] = ACTIONS(166),
        [anon_sym_RBRACE] = ACTIONS(166),
        [sym__word_no_digit] = ACTIONS(166),
        [sym__digits] = ACTIONS(166),
        [anon_sym_BANG] = ACTIONS(166),
        [anon_sym_DQUOTE] = ACTIONS(166),
        [anon_sym_POUND] = ACTIONS(166),
        [anon_sym_DOLLAR] = ACTIONS(166),
        [anon_sym_PERCENT] = ACTIONS(166),
        [anon_sym_AMP] = ACTIONS(166),
        [anon_sym_SQUOTE] = ACTIONS(166),
        [anon_sym_LPAREN] = ACTIONS(166),
        [anon_sym_RPAREN] = ACTIONS(166),
        [anon_sym_STAR] = ACTIONS(166),
        [anon_sym_PLUS] = ACTIONS(166),
        [anon_sym_COMMA] = ACTIONS(166),
        [anon_sym_DASH] = ACTIONS(166),
        [anon_sym_DOT] = ACTIONS(166),
        [anon_sym_SLASH] = ACTIONS(166),
        [anon_sym_COLON] = ACTIONS(166),
        [anon_sym_SEMI] = ACTIONS(166),
        [anon_sym_LT] = ACTIONS(166),
        [anon_sym_EQ] = ACTIONS(166),
        [anon_sym_GT] = ACTIONS(166),
        [anon_sym_QMARK] = ACTIONS(166),
        [anon_sym_AT] = ACTIONS(166),
        [anon_sym_LBRACK] = ACTIONS(166),
        [anon_sym_BSLASH] = ACTIONS(166),
        [anon_sym_RBRACK] = ACTIONS(166),
        [anon_sym_CARET] = ACTIONS(166),
        [anon_sym__] = ACTIONS(166),
        [anon_sym_BQUOTE] = ACTIONS(166),
        [anon_sym_PIPE] = ACTIONS(166),
        [anon_sym_TILDE] = ACTIONS(166),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(166),
        [anon_sym_anchor] = ACTIONS(166),
        [sym_inline_email_rx] = ACTIONS(166),
        [anon_sym_footnote] = ACTIONS(166),
        [anon_sym_footnoteref] = ACTIONS(166),
        [anon_sym_image] = ACTIONS(166),
        [anon_sym_icon] = ACTIONS(166),
        [anon_sym_kbd] = ACTIONS(166),
        [anon_sym_btn] = ACTIONS(166),
        [anon_sym_http] = ACTIONS(166),
        [anon_sym_https] = ACTIONS(166),
        [anon_sym_file] = ACTIONS(166),
        [anon_sym_ftp] = ACTIONS(166),
        [anon_sym_irc] = ACTIONS(166),
        [anon_sym_link] = ACTIONS(166),
        [anon_sym_mailto] = ACTIONS(166),
        [anon_sym_stem] = ACTIONS(166),
        [anon_sym_latexmath] = ACTIONS(166),
        [anon_sym_asciimath] = ACTIONS(166),
        [anon_sym_menu] = ACTIONS(166),
    },
    [25] = {
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
        [anon_sym_footnote] = ACTIONS(81),
        [anon_sym_footnoteref] = ACTIONS(81),
        [anon_sym_image] = ACTIONS(81),
        [anon_sym_icon] = ACTIONS(81),
        [anon_sym_kbd] = ACTIONS(81),
        [anon_sym_btn] = ACTIONS(81),
        [anon_sym_http] = ACTIONS(81),
        [anon_sym_https] = ACTIONS(81),
        [anon_sym_file] = ACTIONS(81),
        [anon_sym_ftp] = ACTIONS(81),
        [anon_sym_irc] = ACTIONS(81),
        [anon_sym_link] = ACTIONS(81),
        [anon_sym_mailto] = ACTIONS(81),
        [anon_sym_stem] = ACTIONS(81),
        [anon_sym_latexmath] = ACTIONS(81),
        [anon_sym_asciimath] = ACTIONS(81),
        [anon_sym_menu] = ACTIONS(81),
    },
    [26] = {
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
        [anon_sym_kbd] = ACTIONS(99),
        [anon_sym_btn] = ACTIONS(99),
        [anon_sym_http] = ACTIONS(99),
        [anon_sym_https] = ACTIONS(99),
        [anon_sym_file] = ACTIONS(99),
        [anon_sym_ftp] = ACTIONS(99),
        [anon_sym_irc] = ACTIONS(99),
        [anon_sym_link] = ACTIONS(99),
        [anon_sym_mailto] = ACTIONS(99),
        [anon_sym_stem] = ACTIONS(99),
        [anon_sym_latexmath] = ACTIONS(99),
        [anon_sym_asciimath] = ACTIONS(99),
        [anon_sym_menu] = ACTIONS(99),
    },
    [27] = {
        [ts_builtin_sym_end] = ACTIONS(168),
        [anon_sym_LBRACE] = ACTIONS(170),
        [anon_sym_RBRACE] = ACTIONS(170),
        [sym__word_no_digit] = ACTIONS(170),
        [sym__digits] = ACTIONS(170),
        [anon_sym_BANG] = ACTIONS(170),
        [anon_sym_DQUOTE] = ACTIONS(170),
        [anon_sym_POUND] = ACTIONS(170),
        [anon_sym_DOLLAR] = ACTIONS(170),
        [anon_sym_PERCENT] = ACTIONS(170),
        [anon_sym_AMP] = ACTIONS(170),
        [anon_sym_SQUOTE] = ACTIONS(170),
        [anon_sym_LPAREN] = ACTIONS(170),
        [anon_sym_RPAREN] = ACTIONS(170),
        [anon_sym_STAR] = ACTIONS(170),
        [anon_sym_PLUS] = ACTIONS(170),
        [anon_sym_COMMA] = ACTIONS(170),
        [anon_sym_DASH] = ACTIONS(170),
        [anon_sym_DOT] = ACTIONS(170),
        [anon_sym_SLASH] = ACTIONS(170),
        [anon_sym_COLON] = ACTIONS(170),
        [anon_sym_SEMI] = ACTIONS(170),
        [anon_sym_LT] = ACTIONS(170),
        [anon_sym_EQ] = ACTIONS(170),
        [anon_sym_GT] = ACTIONS(170),
        [anon_sym_QMARK] = ACTIONS(170),
        [anon_sym_AT] = ACTIONS(170),
        [anon_sym_LBRACK] = ACTIONS(170),
        [anon_sym_BSLASH] = ACTIONS(170),
        [anon_sym_RBRACK] = ACTIONS(170),
        [anon_sym_CARET] = ACTIONS(170),
        [anon_sym__] = ACTIONS(170),
        [anon_sym_BQUOTE] = ACTIONS(170),
        [anon_sym_PIPE] = ACTIONS(170),
        [anon_sym_TILDE] = ACTIONS(170),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(170),
        [anon_sym_anchor] = ACTIONS(170),
        [sym_inline_email_rx] = ACTIONS(170),
        [anon_sym_footnote] = ACTIONS(170),
        [anon_sym_footnoteref] = ACTIONS(170),
        [anon_sym_image] = ACTIONS(170),
        [anon_sym_icon] = ACTIONS(170),
        [anon_sym_kbd] = ACTIONS(170),
        [anon_sym_btn] = ACTIONS(170),
        [anon_sym_http] = ACTIONS(170),
        [anon_sym_https] = ACTIONS(170),
        [anon_sym_file] = ACTIONS(170),
        [anon_sym_ftp] = ACTIONS(170),
        [anon_sym_irc] = ACTIONS(170),
        [anon_sym_link] = ACTIONS(170),
        [anon_sym_mailto] = ACTIONS(170),
        [anon_sym_stem] = ACTIONS(170),
        [anon_sym_latexmath] = ACTIONS(170),
        [anon_sym_asciimath] = ACTIONS(170),
        [anon_sym_menu] = ACTIONS(170),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(172),
        [anon_sym_LBRACE] = ACTIONS(174),
        [anon_sym_RBRACE] = ACTIONS(174),
        [sym__word_no_digit] = ACTIONS(174),
        [sym__digits] = ACTIONS(174),
        [anon_sym_BANG] = ACTIONS(174),
        [anon_sym_DQUOTE] = ACTIONS(174),
        [anon_sym_POUND] = ACTIONS(174),
        [anon_sym_DOLLAR] = ACTIONS(174),
        [anon_sym_PERCENT] = ACTIONS(174),
        [anon_sym_AMP] = ACTIONS(174),
        [anon_sym_SQUOTE] = ACTIONS(174),
        [anon_sym_LPAREN] = ACTIONS(174),
        [anon_sym_RPAREN] = ACTIONS(174),
        [anon_sym_STAR] = ACTIONS(174),
        [anon_sym_PLUS] = ACTIONS(174),
        [anon_sym_COMMA] = ACTIONS(174),
        [anon_sym_DASH] = ACTIONS(174),
        [anon_sym_DOT] = ACTIONS(174),
        [anon_sym_SLASH] = ACTIONS(174),
        [anon_sym_COLON] = ACTIONS(174),
        [anon_sym_SEMI] = ACTIONS(174),
        [anon_sym_LT] = ACTIONS(174),
        [anon_sym_EQ] = ACTIONS(174),
        [anon_sym_GT] = ACTIONS(174),
        [anon_sym_QMARK] = ACTIONS(174),
        [anon_sym_AT] = ACTIONS(174),
        [anon_sym_LBRACK] = ACTIONS(174),
        [anon_sym_BSLASH] = ACTIONS(174),
        [anon_sym_RBRACK] = ACTIONS(174),
        [anon_sym_CARET] = ACTIONS(174),
        [anon_sym__] = ACTIONS(174),
        [anon_sym_BQUOTE] = ACTIONS(174),
        [anon_sym_PIPE] = ACTIONS(174),
        [anon_sym_TILDE] = ACTIONS(174),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(174),
        [anon_sym_anchor] = ACTIONS(174),
        [sym_inline_email_rx] = ACTIONS(174),
        [anon_sym_footnote] = ACTIONS(174),
        [anon_sym_footnoteref] = ACTIONS(174),
        [anon_sym_image] = ACTIONS(174),
        [anon_sym_icon] = ACTIONS(174),
        [anon_sym_kbd] = ACTIONS(174),
        [anon_sym_btn] = ACTIONS(174),
        [anon_sym_http] = ACTIONS(174),
        [anon_sym_https] = ACTIONS(174),
        [anon_sym_file] = ACTIONS(174),
        [anon_sym_ftp] = ACTIONS(174),
        [anon_sym_irc] = ACTIONS(174),
        [anon_sym_link] = ACTIONS(174),
        [anon_sym_mailto] = ACTIONS(174),
        [anon_sym_stem] = ACTIONS(174),
        [anon_sym_latexmath] = ACTIONS(174),
        [anon_sym_asciimath] = ACTIONS(174),
        [anon_sym_menu] = ACTIONS(174),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(176),
        [anon_sym_LBRACE] = ACTIONS(178),
        [anon_sym_RBRACE] = ACTIONS(178),
        [sym__word_no_digit] = ACTIONS(178),
        [sym__digits] = ACTIONS(178),
        [anon_sym_BANG] = ACTIONS(178),
        [anon_sym_DQUOTE] = ACTIONS(178),
        [anon_sym_POUND] = ACTIONS(178),
        [anon_sym_DOLLAR] = ACTIONS(178),
        [anon_sym_PERCENT] = ACTIONS(178),
        [anon_sym_AMP] = ACTIONS(178),
        [anon_sym_SQUOTE] = ACTIONS(178),
        [anon_sym_LPAREN] = ACTIONS(178),
        [anon_sym_RPAREN] = ACTIONS(178),
        [anon_sym_STAR] = ACTIONS(178),
        [anon_sym_PLUS] = ACTIONS(178),
        [anon_sym_COMMA] = ACTIONS(178),
        [anon_sym_DASH] = ACTIONS(178),
        [anon_sym_DOT] = ACTIONS(178),
        [anon_sym_SLASH] = ACTIONS(178),
        [anon_sym_COLON] = ACTIONS(178),
        [anon_sym_SEMI] = ACTIONS(178),
        [anon_sym_LT] = ACTIONS(178),
        [anon_sym_EQ] = ACTIONS(178),
        [anon_sym_GT] = ACTIONS(178),
        [anon_sym_QMARK] = ACTIONS(178),
        [anon_sym_AT] = ACTIONS(178),
        [anon_sym_LBRACK] = ACTIONS(178),
        [anon_sym_BSLASH] = ACTIONS(178),
        [anon_sym_RBRACK] = ACTIONS(178),
        [anon_sym_CARET] = ACTIONS(178),
        [anon_sym__] = ACTIONS(178),
        [anon_sym_BQUOTE] = ACTIONS(178),
        [anon_sym_PIPE] = ACTIONS(178),
        [anon_sym_TILDE] = ACTIONS(178),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(178),
        [anon_sym_anchor] = ACTIONS(178),
        [sym_inline_email_rx] = ACTIONS(178),
        [anon_sym_footnote] = ACTIONS(178),
        [anon_sym_footnoteref] = ACTIONS(178),
        [anon_sym_image] = ACTIONS(178),
        [anon_sym_icon] = ACTIONS(178),
        [anon_sym_kbd] = ACTIONS(178),
        [anon_sym_btn] = ACTIONS(178),
        [anon_sym_http] = ACTIONS(178),
        [anon_sym_https] = ACTIONS(178),
        [anon_sym_file] = ACTIONS(178),
        [anon_sym_ftp] = ACTIONS(178),
        [anon_sym_irc] = ACTIONS(178),
        [anon_sym_link] = ACTIONS(178),
        [anon_sym_mailto] = ACTIONS(178),
        [anon_sym_stem] = ACTIONS(178),
        [anon_sym_latexmath] = ACTIONS(178),
        [anon_sym_asciimath] = ACTIONS(178),
        [anon_sym_menu] = ACTIONS(178),
    },
    [30] = {
        [ts_builtin_sym_end] = ACTIONS(180),
        [anon_sym_LBRACE] = ACTIONS(182),
        [anon_sym_RBRACE] = ACTIONS(182),
        [sym__word_no_digit] = ACTIONS(182),
        [sym__digits] = ACTIONS(182),
        [anon_sym_BANG] = ACTIONS(182),
        [anon_sym_DQUOTE] = ACTIONS(182),
        [anon_sym_POUND] = ACTIONS(182),
        [anon_sym_DOLLAR] = ACTIONS(182),
        [anon_sym_PERCENT] = ACTIONS(182),
        [anon_sym_AMP] = ACTIONS(182),
        [anon_sym_SQUOTE] = ACTIONS(182),
        [anon_sym_LPAREN] = ACTIONS(182),
        [anon_sym_RPAREN] = ACTIONS(182),
        [anon_sym_STAR] = ACTIONS(182),
        [anon_sym_PLUS] = ACTIONS(182),
        [anon_sym_COMMA] = ACTIONS(182),
        [anon_sym_DASH] = ACTIONS(182),
        [anon_sym_DOT] = ACTIONS(182),
        [anon_sym_SLASH] = ACTIONS(182),
        [anon_sym_COLON] = ACTIONS(182),
        [anon_sym_SEMI] = ACTIONS(182),
        [anon_sym_LT] = ACTIONS(182),
        [anon_sym_EQ] = ACTIONS(182),
        [anon_sym_GT] = ACTIONS(182),
        [anon_sym_QMARK] = ACTIONS(182),
        [anon_sym_AT] = ACTIONS(182),
        [anon_sym_LBRACK] = ACTIONS(182),
        [anon_sym_BSLASH] = ACTIONS(182),
        [anon_sym_RBRACK] = ACTIONS(182),
        [anon_sym_CARET] = ACTIONS(182),
        [anon_sym__] = ACTIONS(182),
        [anon_sym_BQUOTE] = ACTIONS(182),
        [anon_sym_PIPE] = ACTIONS(182),
        [anon_sym_TILDE] = ACTIONS(182),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(182),
        [anon_sym_anchor] = ACTIONS(182),
        [sym_inline_email_rx] = ACTIONS(182),
        [anon_sym_footnote] = ACTIONS(182),
        [anon_sym_footnoteref] = ACTIONS(182),
        [anon_sym_image] = ACTIONS(182),
        [anon_sym_icon] = ACTIONS(182),
        [anon_sym_kbd] = ACTIONS(182),
        [anon_sym_btn] = ACTIONS(182),
        [anon_sym_http] = ACTIONS(182),
        [anon_sym_https] = ACTIONS(182),
        [anon_sym_file] = ACTIONS(182),
        [anon_sym_ftp] = ACTIONS(182),
        [anon_sym_irc] = ACTIONS(182),
        [anon_sym_link] = ACTIONS(182),
        [anon_sym_mailto] = ACTIONS(182),
        [anon_sym_stem] = ACTIONS(182),
        [anon_sym_latexmath] = ACTIONS(182),
        [anon_sym_asciimath] = ACTIONS(182),
        [anon_sym_menu] = ACTIONS(182),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 3,
    ACTIONS(184),
    1,
    anon_sym_RBRACK,
    STATE(32),
    1,
    aux_sym_inline_image_macro_repeat1,
    ACTIONS(186),
    3,
    aux_sym_inline_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [12] = 3,
    ACTIONS(188),
    1,
    anon_sym_RBRACK,
    STATE(32),
    1,
    aux_sym_inline_image_macro_repeat1,
    ACTIONS(190),
    3,
    aux_sym_inline_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [24] = 5,
    ACTIONS(193),
    1,
    anon_sym_PLUS,
    ACTIONS(195),
    1,
    anon_sym_COMMA,
    ACTIONS(197),
    1,
    anon_sym_RBRACK,
    STATE(39),
    1,
    aux_sym_inline_kbd_macro_repeat1,
    STATE(41),
    1,
    aux_sym_inline_kbd_macro_repeat2,
    [40] = 3,
    ACTIONS(199),
    1,
    anon_sym_RBRACK,
    STATE(31),
    1,
    aux_sym_inline_image_macro_repeat1,
    ACTIONS(201),
    3,
    aux_sym_inline_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [52] = 3,
    ACTIONS(203),
    1,
    anon_sym_DOT,
    STATE(36),
    1,
    aux_sym_link_repeat1,
    ACTIONS(85),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [63] = 3,
    ACTIONS(205),
    1,
    anon_sym_DOT,
    STATE(36),
    1,
    aux_sym_link_repeat1,
    ACTIONS(97),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [74] = 3,
    ACTIONS(203),
    1,
    anon_sym_DOT,
    STATE(35),
    1,
    aux_sym_link_repeat1,
    ACTIONS(91),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [85] = 1,
    ACTIONS(97),
    3,
    anon_sym_DQUOTE,
    anon_sym_DOT,
    anon_sym_LBRACK,
    [91] = 3,
    ACTIONS(193),
    1,
    anon_sym_PLUS,
    ACTIONS(208),
    1,
    anon_sym_RBRACK,
    STATE(44),
    1,
    aux_sym_inline_kbd_macro_repeat1,
    [101] = 2,
    STATE(50),
    1,
    sym_key,
    ACTIONS(210),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [109] = 3,
    ACTIONS(195),
    1,
    anon_sym_COMMA,
    ACTIONS(208),
    1,
    anon_sym_RBRACK,
    STATE(45),
    1,
    aux_sym_inline_kbd_macro_repeat2,
    [119] = 2,
    STATE(52),
    1,
    sym_key,
    ACTIONS(210),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [127] = 2,
    STATE(33),
    1,
    sym_key,
    ACTIONS(210),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [135] = 3,
    ACTIONS(212),
    1,
    anon_sym_PLUS,
    ACTIONS(215),
    1,
    anon_sym_RBRACK,
    STATE(44),
    1,
    aux_sym_inline_kbd_macro_repeat1,
    [145] = 3,
    ACTIONS(217),
    1,
    anon_sym_COMMA,
    ACTIONS(220),
    1,
    anon_sym_RBRACK,
    STATE(45),
    1,
    aux_sym_inline_kbd_macro_repeat2,
    [155] = 1,
    ACTIONS(222),
    3,
    anon_sym_PLUS,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [161] = 2,
    ACTIONS(224),
    1,
    anon_sym_COMMA,
    ACTIONS(226),
    1,
    anon_sym_RBRACK,
    [168] = 2,
    ACTIONS(228),
    1,
    anon_sym_COMMA,
    ACTIONS(230),
    1,
    anon_sym_RBRACK,
    [175] = 2,
    ACTIONS(232),
    1,
    anon_sym_DQUOTE,
    ACTIONS(234),
    1,
    anon_sym_LBRACK,
    [182] = 1,
    ACTIONS(220),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [187] = 2,
    ACTIONS(236),
    1,
    aux_sym_inline_anchor_rx_token2,
    ACTIONS(238),
    1,
    aux_sym_inline_footnote_macro_token1,
    [194] = 1,
    ACTIONS(215),
    2,
    anon_sym_PLUS,
    anon_sym_RBRACK,
    [199] = 2,
    ACTIONS(240),
    1,
    anon_sym_COMMA,
    ACTIONS(242),
    1,
    anon_sym_RBRACK_RBRACK,
    [206] = 2,
    ACTIONS(244),
    1,
    aux_sym_replacement_token1,
    ACTIONS(246),
    1,
    anon_sym_LBRACK,
    [213] = 2,
    ACTIONS(248),
    1,
    aux_sym_inline_anchor_rx_token2,
    ACTIONS(250),
    1,
    aux_sym_inline_footnote_macro_token1,
    [220] = 1,
    ACTIONS(252),
    1,
    aux_sym_inline_anchor_rx_token2,
    [224] = 1,
    ACTIONS(254),
    1,
    anon_sym_LBRACK,
    [228] = 1,
    ACTIONS(256),
    1,
    aux_sym_inline_anchor_rx_token2,
    [232] = 1,
    ACTIONS(258),
    1,
    anon_sym_RBRACK,
    [236] = 1,
    ACTIONS(260),
    1,
    aux_sym_inline_anchor_rx_token2,
    [240] = 1,
    ACTIONS(262),
    1,
    anon_sym_LBRACK,
    [244] = 1,
    ACTIONS(264),
    1,
    anon_sym_DQUOTE,
    [248] = 1,
    ACTIONS(266),
    1,
    anon_sym_RBRACK,
    [252] = 1,
    ACTIONS(268),
    1,
    anon_sym_RBRACK,
    [256] = 1,
    ACTIONS(230),
    1,
    anon_sym_RBRACK,
    [260] = 1,
    ACTIONS(270),
    1,
    anon_sym_LBRACK,
    [264] = 1,
    ACTIONS(272),
    1,
    aux_sym_inline_footnote_macro_token2,
    [268] = 1,
    ACTIONS(274),
    1,
    anon_sym_LBRACK,
    [272] = 1,
    ACTIONS(276),
    1,
    anon_sym_LBRACK,
    [276] = 1,
    ACTIONS(278),
    1,
    anon_sym_LBRACK,
    [280] = 1,
    ACTIONS(280),
    1,
    aux_sym_inline_anchor_rx_token1,
    [284] = 1,
    ACTIONS(282),
    1,
    aux_sym_auto_link_token1,
    [288] = 1,
    ACTIONS(284),
    1,
    aux_sym_replacement_token1,
    [292] = 1,
    ACTIONS(286),
    1,
    anon_sym_LBRACK,
    [296] = 1,
    ACTIONS(288),
    1,
    aux_sym_inline_link_macro_token1,
    [300] = 1,
    ACTIONS(290),
    1,
    anon_sym_RBRACK,
    [304] = 1,
    ACTIONS(292),
    1,
    sym__link_component,
    [308] = 1,
    ACTIONS(294),
    1,
    anon_sym_RBRACK,
    [312] = 1,
    ACTIONS(296),
    1,
    anon_sym_RBRACK,
    [316] = 1,
    ACTIONS(298),
    1,
    aux_sym_inline_image_macro_token1,
    [320] = 1,
    ACTIONS(300),
    1,
    anon_sym_RBRACK_RBRACK,
    [324] = 1,
    ACTIONS(302),
    1,
    aux_sym_inline_footnote_macro_token2,
    [328] = 1,
    ACTIONS(304),
    1,
    anon_sym_RBRACK,
    [332] = 1,
    ACTIONS(306),
    1,
    aux_sym_replacement_token1,
    [336] = 1,
    ACTIONS(308),
    1,
    sym__link_component,
    [340] = 1,
    ACTIONS(310),
    1,
    aux_sym_replacement_token1,
    [344] = 1,
    ACTIONS(226),
    1,
    anon_sym_RBRACK,
    [348] = 1,
    ACTIONS(312),
    1,
    aux_sym_inline_anchor_rx_token2,
    [352] = 1,
    ACTIONS(314),
    1,
    anon_sym_RBRACE,
    [356] = 1,
    ACTIONS(316),
    1,
    ts_builtin_sym_end,
    [360] = 1,
    ACTIONS(318),
    1,
    anon_sym_COLON,
    [364] = 1,
    ACTIONS(320),
    1,
    anon_sym_COLON,
    [368] = 1,
    ACTIONS(322),
    1,
    anon_sym_RBRACK,
    [372] = 1,
    ACTIONS(324),
    1,
    anon_sym_COLON,
    [376] = 1,
    ACTIONS(326),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [380] = 1,
    ACTIONS(328),
    1,
    anon_sym_COLON,
    [384] = 1,
    ACTIONS(330),
    1,
    anon_sym_COLON,
    [388] = 1,
    ACTIONS(332),
    1,
    anon_sym_COLON,
    [392] = 1,
    ACTIONS(334),
    1,
    anon_sym_COLON,
    [396] = 1,
    ACTIONS(336),
    1,
    sym__link_component,
    [400] = 1,
    ACTIONS(338),
    1,
    sym__link_component,
    [404] = 1,
    ACTIONS(340),
    1,
    anon_sym_COLON_SLASH_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(31)] = 0,
    [SMALL_STATE(32)] = 12,
    [SMALL_STATE(33)] = 24,
    [SMALL_STATE(34)] = 40,
    [SMALL_STATE(35)] = 52,
    [SMALL_STATE(36)] = 63,
    [SMALL_STATE(37)] = 74,
    [SMALL_STATE(38)] = 85,
    [SMALL_STATE(39)] = 91,
    [SMALL_STATE(40)] = 101,
    [SMALL_STATE(41)] = 109,
    [SMALL_STATE(42)] = 119,
    [SMALL_STATE(43)] = 127,
    [SMALL_STATE(44)] = 135,
    [SMALL_STATE(45)] = 145,
    [SMALL_STATE(46)] = 155,
    [SMALL_STATE(47)] = 161,
    [SMALL_STATE(48)] = 168,
    [SMALL_STATE(49)] = 175,
    [SMALL_STATE(50)] = 182,
    [SMALL_STATE(51)] = 187,
    [SMALL_STATE(52)] = 194,
    [SMALL_STATE(53)] = 199,
    [SMALL_STATE(54)] = 206,
    [SMALL_STATE(55)] = 213,
    [SMALL_STATE(56)] = 220,
    [SMALL_STATE(57)] = 224,
    [SMALL_STATE(58)] = 228,
    [SMALL_STATE(59)] = 232,
    [SMALL_STATE(60)] = 236,
    [SMALL_STATE(61)] = 240,
    [SMALL_STATE(62)] = 244,
    [SMALL_STATE(63)] = 248,
    [SMALL_STATE(64)] = 252,
    [SMALL_STATE(65)] = 256,
    [SMALL_STATE(66)] = 260,
    [SMALL_STATE(67)] = 264,
    [SMALL_STATE(68)] = 268,
    [SMALL_STATE(69)] = 272,
    [SMALL_STATE(70)] = 276,
    [SMALL_STATE(71)] = 280,
    [SMALL_STATE(72)] = 284,
    [SMALL_STATE(73)] = 288,
    [SMALL_STATE(74)] = 292,
    [SMALL_STATE(75)] = 296,
    [SMALL_STATE(76)] = 300,
    [SMALL_STATE(77)] = 304,
    [SMALL_STATE(78)] = 308,
    [SMALL_STATE(79)] = 312,
    [SMALL_STATE(80)] = 316,
    [SMALL_STATE(81)] = 320,
    [SMALL_STATE(82)] = 324,
    [SMALL_STATE(83)] = 328,
    [SMALL_STATE(84)] = 332,
    [SMALL_STATE(85)] = 336,
    [SMALL_STATE(86)] = 340,
    [SMALL_STATE(87)] = 344,
    [SMALL_STATE(88)] = 348,
    [SMALL_STATE(89)] = 352,
    [SMALL_STATE(90)] = 356,
    [SMALL_STATE(91)] = 360,
    [SMALL_STATE(92)] = 364,
    [SMALL_STATE(93)] = 368,
    [SMALL_STATE(94)] = 372,
    [SMALL_STATE(95)] = 376,
    [SMALL_STATE(96)] = 380,
    [SMALL_STATE(97)] = 384,
    [SMALL_STATE(98)] = 388,
    [SMALL_STATE(99)] = 392,
    [SMALL_STATE(100)] = 396,
    [SMALL_STATE(101)] = 400,
    [SMALL_STATE(102)] = 404,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(4),
    [5] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(25),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(11),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(7),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(86),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(99),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(2),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(98),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(97),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(96),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(95),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(94),
    [27] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(92),
    [29] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(91),
    [31] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [33] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(3),
    [35] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    [37] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(4),
    [40] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(25),
    [43] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(11),
    [46] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(7),
    [49] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(86),
    [52] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(99),
    [55] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(3),
    [58] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(98),
    [61] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(97),
    [64] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(96),
    [67] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(95),
    [70] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(94),
    [73] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(92),
    [76] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(91),
    [79] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [81] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [83] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(89),
    [85] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link, 4, 0, 0),
    [87] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link, 4, 0, 0),
    [89] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(85),
    [91] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link, 3, 0, 0),
    [93] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link, 3, 0, 0),
    [95] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(102),
    [97] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_link_repeat1, 2, 0, 0),
    [99] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_repeat1, 2, 0, 0),
    [101] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_repeat1, 2, 0, 0),
    SHIFT_REPEAT(85),
    [104] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 6, 0, 0),
    [106] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 6, 0, 0),
    [108] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_image_macro, 5, 0, 0),
    [110] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_image_macro, 5, 0, 0),
    [112] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_word, 1, 0, 0),
    [114] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_word, 1, 0, 0),
    [116] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 8, 0, 1),
    [118] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 8, 0, 1),
    [120] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 7, 0, 0),
    [122] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 7, 0, 0),
    [124] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_menu_macro, 6, 0, 0),
    [126] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_menu_macro, 6, 0, 0),
    [128] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_link_macro, 6, 0, 0),
    [130] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_link_macro, 6, 0, 0),
    [132] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [134] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [136] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 5, 0, 0),
    [138] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 5, 0, 0),
    [140] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [142] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [144] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_kbd_macro, 6, 0, 0),
    [146] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_kbd_macro, 6, 0, 0),
    [148] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 5, 0, 0),
    [150] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 5, 0, 0),
    [152] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_image_macro, 6, 0, 0),
    [154] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_image_macro, 6, 0, 0),
    [156] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 6, 0, 1),
    [158] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 6, 0, 1),
    [160] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [162] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [164] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_math_macro, 5, 0, 0),
    [166] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_math_macro, 5, 0, 0),
    [168] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 3, 0, 0),
    [170] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 3, 0, 0),
    [172] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_kbd_macro, 5, 0, 0),
    [174] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_kbd_macro, 5, 0, 0),
    [176] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [178] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [180] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 0),
    [182] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 0),
    [184] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(21),
    [186] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(32),
    [188] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_image_macro_repeat1, 2, 0, 0),
    [190] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_image_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(32),
    [193] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [195] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [197] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [199] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(10),
    [201] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(31),
    [203] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(101),
    [205] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_link_repeat1, 2, 0, 0),
    SHIFT_REPEAT(101),
    [208] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [210] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [212] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_inline_kbd_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(42),
    [215] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_kbd_macro_repeat1, 2, 0, 0),
    [217] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_inline_kbd_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(40),
    [220] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_kbd_macro_repeat2, 2, 0, 0),
    [222] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_key, 1, 0, 0),
    [224] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [226] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [228] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [230] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [232] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(29),
    [234] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [236] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [238] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(48),
    [240] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(71),
    [242] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [244] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(69),
    [246] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [248] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [250] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(47),
    [252] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [254] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [256] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [258] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [260] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [262] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [264] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [266] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [268] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [270] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [272] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(83),
    [274] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [276] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [278] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [280] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(81),
    [282] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [284] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [286] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [288] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(66),
    [290] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [292] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [294] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [296] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [298] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(68),
    [300] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [302] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [304] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [306] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [308] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [310] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [312] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [314] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [316] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [318] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(73),
    [320] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [322] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [324] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [326] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [328] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [330] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [332] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [334] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [336] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [338] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [340] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(100),
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
