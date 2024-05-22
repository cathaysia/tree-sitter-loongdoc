#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 118
#define LARGE_STATE_COUNT 35
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
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
    anon_sym_PLUS_PLUS_PLUS = 70,
    anon_sym_DOLLAR_DOLLAR = 71,
    anon_sym_pass = 72,
    anon_sym_quotes = 73,
    sym_inline = 74,
    sym_replacement = 75,
    sym_word = 76,
    sym_punctuation = 77,
    sym_inline_anchor_rx = 78,
    sym_inline_footnote_macro = 79,
    sym_inline_image_macro = 80,
    sym_inline_kbd_macro = 81,
    sym_key = 82,
    sym_auto_link = 83,
    sym_link = 84,
    sym_inline_link_macro = 85,
    sym_inline_math_macro = 86,
    sym_inline_menu_macro = 87,
    sym_inline_passthrough = 88,
    aux_sym_inline_repeat1 = 89,
    aux_sym_inline_image_macro_repeat1 = 90,
    aux_sym_inline_kbd_macro_repeat1 = 91,
    aux_sym_inline_kbd_macro_repeat2 = 92,
    aux_sym_link_repeat1 = 93,
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
    [anon_sym_PLUS_PLUS_PLUS] = "+++",
    [anon_sym_DOLLAR_DOLLAR] = "$$",
    [anon_sym_pass] = "pass",
    [anon_sym_quotes] = "quotes",
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
    [sym_inline_passthrough] = "inline_passthrough",
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
    [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
    [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
    [anon_sym_pass] = anon_sym_pass,
    [anon_sym_quotes] = anon_sym_quotes,
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
    [sym_inline_passthrough] = sym_inline_passthrough,
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
    [anon_sym_PLUS_PLUS_PLUS] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_DOLLAR_DOLLAR] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_pass] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_quotes] = {
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
    [sym_inline_passthrough] = {
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
    [35] = 35,
    [36] = 36,
    [37] = 37,
    [38] = 38,
    [39] = 5,
    [40] = 6,
    [41] = 10,
    [42] = 42,
    [43] = 43,
    [44] = 28,
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
    [100] = 100,
    [101] = 101,
    [102] = 102,
    [103] = 103,
    [104] = 104,
    [105] = 105,
    [106] = 106,
    [107] = 107,
    [108] = 108,
    [109] = 109,
    [110] = 110,
    [111] = 111,
    [112] = 112,
    [113] = 113,
    [114] = 114,
    [115] = 94,
    [116] = 66,
    [117] = 110,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(66);
            ADVANCE_MAP(
                '!', 268,
                '"', 270,
                '#', 271,
                '$', 272,
                '%', 273,
                '&', 274,
                '\'', 275,
                '(', 276,
                ')', 277,
                '*', 278,
                '+', 280,
                ',', 281,
                '-', 282,
                '.', 283,
                '/', 284,
                ':', 285,
                ';', 286,
                '<', 287,
                '=', 288,
                '>', 289,
                '?', 290,
                '@', 291,
                '[', 293,
                '\\', 294,
                ']', 295,
                '^', 296,
                '_', 299,
                '`', 302,
                'a', 164,
                'b', 182,
                'f', 154,
                'h', 188,
                'i', 139,
                'k', 136,
                'l', 133,
                'm', 130,
                'p', 131,
                'q', 194,
                's', 183,
                '{', 67,
                '|', 303,
                '}', 201,
                '~', 304,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(196);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            END_STATE();
        case 1:
            if(lookahead == '"')
                ADVANCE(41);
            if(lookahead == '\\')
                ADVANCE(63);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 2:
            ADVANCE_MAP(
                '"', 269,
                '$', 3,
                '+', 279,
                ',', 281,
                '.', 283,
                ':', 37,
                '[', 292,
                '\\', 47,
                ']', 295,
                '`', 301,
                '}', 200,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(2);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(345);
            END_STATE();
        case 3:
            if(lookahead == '$')
                ADVANCE(386);
            END_STATE();
        case 4:
            if(lookahead == '+')
                ADVANCE(385);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 5:
            if(lookahead == '+')
                ADVANCE(7);
            if(lookahead == ',')
                ADVANCE(281);
            if(lookahead == '[')
                ADVANCE(292);
            if(lookahead == ']')
                ADVANCE(48);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(5);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(199);
            END_STATE();
        case 6:
            if(lookahead == '+')
                ADVANCE(384);
            END_STATE();
        case 7:
            if(lookahead == '+')
                ADVANCE(6);
            END_STATE();
        case 8:
            if(lookahead == '-')
                ADVANCE(9);
            if(lookahead == '.')
                ADVANCE(61);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            END_STATE();
        case 9:
            if(lookahead == '-')
                ADVANCE(9);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            END_STATE();
        case 10:
            if(lookahead == '-')
                ADVANCE(10);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(316);
            END_STATE();
        case 11:
            if(lookahead == '-')
                ADVANCE(18);
            if(lookahead == '0')
                ADVANCE(16);
            if(lookahead == '1')
                ADVANCE(15);
            if(lookahead == '2')
                ADVANCE(12);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(14);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(17);
            END_STATE();
        case 12:
            if(lookahead == '-')
                ADVANCE(18);
            if(lookahead == '5')
                ADVANCE(13);
            if(lookahead == ':')
                ADVANCE(45);
            if(lookahead == ']')
                ADVANCE(315);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(16);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(14);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(17);
            END_STATE();
        case 13:
            if(lookahead == '-')
                ADVANCE(18);
            if(lookahead == ':')
                ADVANCE(45);
            if(lookahead == ']')
                ADVANCE(315);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(16);
            if(('6' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(17);
            END_STATE();
        case 14:
            if(lookahead == '-')
                ADVANCE(18);
            if(lookahead == ':')
                ADVANCE(45);
            if(lookahead == ']')
                ADVANCE(315);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(17);
            END_STATE();
        case 15:
            if(lookahead == '-')
                ADVANCE(18);
            if(lookahead == ':')
                ADVANCE(45);
            if(lookahead == ']')
                ADVANCE(315);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(14);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(17);
            END_STATE();
        case 16:
            if(lookahead == '-')
                ADVANCE(18);
            if(lookahead == ':')
                ADVANCE(45);
            if(lookahead == ']')
                ADVANCE(315);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(17);
            END_STATE();
        case 17:
            if(lookahead == '-')
                ADVANCE(18);
            if(lookahead == ':')
                ADVANCE(45);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(17);
            END_STATE();
        case 18:
            if(lookahead == '-')
                ADVANCE(18);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(17);
            END_STATE();
        case 19:
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 20:
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 21:
            if(lookahead == '.')
                ADVANCE(11);
            END_STATE();
        case 22:
            if(lookahead == '.')
                ADVANCE(11);
            if(lookahead == '5')
                ADVANCE(23);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(21);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(24);
            END_STATE();
        case 23:
            if(lookahead == '.')
                ADVANCE(11);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(21);
            END_STATE();
        case 24:
            if(lookahead == '.')
                ADVANCE(11);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(21);
            END_STATE();
        case 25:
            if(lookahead == '.')
                ADVANCE(11);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(24);
            END_STATE();
        case 26:
            if(lookahead == '.')
                ADVANCE(39);
            END_STATE();
        case 27:
            if(lookahead == '.')
                ADVANCE(39);
            if(lookahead == '5')
                ADVANCE(28);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(26);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(29);
            END_STATE();
        case 28:
            if(lookahead == '.')
                ADVANCE(39);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(26);
            END_STATE();
        case 29:
            if(lookahead == '.')
                ADVANCE(39);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(26);
            END_STATE();
        case 30:
            if(lookahead == '.')
                ADVANCE(39);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(29);
            END_STATE();
        case 31:
            if(lookahead == '.')
                ADVANCE(40);
            END_STATE();
        case 32:
            if(lookahead == '.')
                ADVANCE(40);
            if(lookahead == '5')
                ADVANCE(33);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(31);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(34);
            END_STATE();
        case 33:
            if(lookahead == '.')
                ADVANCE(40);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(31);
            END_STATE();
        case 34:
            if(lookahead == '.')
                ADVANCE(40);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(31);
            END_STATE();
        case 35:
            if(lookahead == '.')
                ADVANCE(40);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(34);
            END_STATE();
        case 36:
            if(lookahead == '/')
                ADVANCE(363);
            END_STATE();
        case 37:
            if(lookahead == '/')
                ADVANCE(36);
            END_STATE();
        case 38:
            if(lookahead == '0')
                ADVANCE(31);
            if(lookahead == '1')
                ADVANCE(35);
            if(lookahead == '2')
                ADVANCE(32);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(34);
            END_STATE();
        case 39:
            if(lookahead == '0')
                ADVANCE(21);
            if(lookahead == '1')
                ADVANCE(25);
            if(lookahead == '2')
                ADVANCE(22);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(24);
            END_STATE();
        case 40:
            if(lookahead == '0')
                ADVANCE(26);
            if(lookahead == '1')
                ADVANCE(30);
            if(lookahead == '2')
                ADVANCE(27);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(29);
            END_STATE();
        case 41:
            if(lookahead == '@')
                ADVANCE(42);
            END_STATE();
        case 42:
            if(lookahead == '[')
                ADVANCE(38);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            END_STATE();
        case 43:
            if(lookahead == '\\')
                ADVANCE(44);
            if(lookahead == ']')
                ADVANCE(317);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(43);
            END_STATE();
        case 44:
            if(lookahead == '\\')
                ADVANCE(44);
            if(lookahead == ']')
                ADVANCE(317);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(43);
            END_STATE();
        case 45:
            if(lookahead == '\\')
                ADVANCE(44);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(43);
            END_STATE();
        case 46:
            if(lookahead == '\\')
                ADVANCE(335);
            if(lookahead == ']')
                ADVANCE(295);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(336);
            if(lookahead != 0)
                ADVANCE(334);
            END_STATE();
        case 47:
            if(lookahead == ']')
                ADVANCE(338);
            END_STATE();
        case 48:
            if(lookahead == ']')
                ADVANCE(308);
            END_STATE();
        case 49:
            if(lookahead == '_')
                ADVANCE(49);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 50:
            if(lookahead == 'e')
                ADVANCE(53);
            END_STATE();
        case 51:
            if(lookahead == 'o')
                ADVANCE(54);
            END_STATE();
        case 52:
            if(lookahead == 'q')
                ADVANCE(55);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(52);
            END_STATE();
        case 53:
            if(lookahead == 's')
                ADVANCE(391);
            END_STATE();
        case 54:
            if(lookahead == 't')
                ADVANCE(50);
            END_STATE();
        case 55:
            if(lookahead == 'u')
                ADVANCE(51);
            END_STATE();
        case 56:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(56);
            if(lookahead != 0 &&
               lookahead != '.' &&
               lookahead != '[')
                ADVANCE(364);
            END_STATE();
        case 57:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(324);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(325);
            END_STATE();
        case 58:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(306);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(307);
            END_STATE();
        case 59:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(59);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(371);
            END_STATE();
        case 60:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(332);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(333);
            END_STATE();
        case 61:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(316);
            END_STATE();
        case 62:
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               lookahead == '-' ||
               ('/' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 63:
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 64:
            if(eof)
                ADVANCE(66);
            ADVANCE_MAP(
                '!', 268,
                '"', 270,
                '#', 271,
                '$', 272,
                '%', 273,
                '&', 274,
                '\'', 275,
                '(', 276,
                ')', 277,
                '*', 278,
                '+', 280,
                ',', 281,
                '-', 282,
                '.', 283,
                '/', 284,
                ':', 285,
                ';', 286,
                '<', 287,
                '=', 288,
                '>', 289,
                '?', 290,
                '@', 291,
                '[', 293,
                '\\', 294,
                ']', 295,
                '^', 296,
                '_', 299,
                '`', 302,
                'a', 101,
                'b', 117,
                'f', 91,
                'h', 123,
                'i', 77,
                'k', 74,
                'l', 71,
                'm', 68,
                'p', 69,
                's', 118,
                '{', 67,
                '|', 303,
                '}', 201,
                '~', 304,
                0x0b, 266,
                '\f', 266,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(64);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(196);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0)
                ADVANCE(265);
            END_STATE();
        case 65:
            if(eof)
                ADVANCE(66);
            ADVANCE_MAP(
                '!', 268,
                '"', 270,
                '#', 271,
                '$', 272,
                '%', 273,
                '&', 274,
                '\'', 275,
                '(', 276,
                ')', 277,
                '*', 278,
                '+', 280,
                ',', 281,
                '-', 282,
                '.', 283,
                '/', 284,
                ':', 285,
                ';', 286,
                '<', 287,
                '=', 288,
                '>', 289,
                '?', 290,
                '@', 291,
                '[', 293,
                '\\', 294,
                ']', 295,
                '^', 296,
                '_', 300,
                '`', 302,
                'a', 235,
                'b', 251,
                'f', 225,
                'h', 257,
                'i', 211,
                'k', 208,
                'l', 205,
                'm', 202,
                'p', 203,
                's', 252,
                '{', 67,
                '|', 303,
                '}', 201,
                '~', 304,
                0x0b, 264,
                '\f', 264,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(65);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(267);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead != 0)
                ADVANCE(265);
            END_STATE();
        case 66:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 67:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 68:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'a')
                ADVANCE(92);
            if(lookahead == 'e')
                ADVANCE(104);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 69:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'a')
                ADVANCE(116);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 70:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'a')
                ADVANCE(87);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 71:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'a')
                ADVANCE(121);
            if(lookahead == 'i')
                ADVANCE(103);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 72:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'a')
                ADVANCE(120);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 73:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'a')
                ADVANCE(122);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 74:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'b')
                ADVANCE(79);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 75:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'c')
                ADVANCE(90);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 76:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'c')
                ADVANCE(361);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 77:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'c')
                ADVANCE(109);
            if(lookahead == 'm')
                ADVANCE(70);
            if(lookahead == 'r')
                ADVANCE(76);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 78:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'c')
                ADVANCE(94);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 79:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'd')
                ADVANCE(340);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 80:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'e')
                ADVANCE(98);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 81:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'e')
                ADVANCE(355);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 82:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'e')
                ADVANCE(128);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 83:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'e')
                ADVANCE(327);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 84:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'e')
                ADVANCE(319);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 85:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'e')
                ADVANCE(86);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 86:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'f')
                ADVANCE(322);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 87:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'g')
                ADVANCE(83);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 88:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'h')
                ADVANCE(379);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 89:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'h')
                ADVANCE(376);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 90:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'h')
                ADVANCE(107);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 91:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'i')
                ADVANCE(96);
            if(lookahead == 'o')
                ADVANCE(111);
            if(lookahead == 't')
                ADVANCE(112);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 92:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'i')
                ADVANCE(97);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 93:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'i')
                ADVANCE(99);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 94:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'i')
                ADVANCE(93);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 95:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'k')
                ADVANCE(366);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 96:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'l')
                ADVANCE(81);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 97:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'l')
                ADVANCE(125);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 98:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'm')
                ADVANCE(373);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 99:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'm')
                ADVANCE(72);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 100:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'm')
                ADVANCE(73);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 101:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'n')
                ADVANCE(75);
            if(lookahead == 's')
                ADVANCE(78);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 102:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'n')
                ADVANCE(343);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 103:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'n')
                ADVANCE(95);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 104:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'n')
                ADVANCE(127);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 105:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'n')
                ADVANCE(330);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 106:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'n')
                ADVANCE(110);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 107:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'o')
                ADVANCE(114);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 108:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'o')
                ADVANCE(369);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 109:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'o')
                ADVANCE(105);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 110:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'o')
                ADVANCE(126);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 111:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'o')
                ADVANCE(124);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 112:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'p')
                ADVANCE(358);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 113:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'p')
                ADVANCE(349);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 114:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'r')
                ADVANCE(310);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 115:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 's')
                ADVANCE(389);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 116:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 's')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 117:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 't')
                ADVANCE(102);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 118:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 't')
                ADVANCE(80);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 119:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 't')
                ADVANCE(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 120:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 't')
                ADVANCE(88);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 121:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 't')
                ADVANCE(82);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 122:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 't')
                ADVANCE(89);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 123:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 't')
                ADVANCE(119);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 124:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 't')
                ADVANCE(106);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 125:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 't')
                ADVANCE(108);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 126:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 't')
                ADVANCE(84);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 127:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'u')
                ADVANCE(382);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 128:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'x')
                ADVANCE(100);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 129:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 130:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'a')
                ADVANCE(155);
            if(lookahead == 'e')
                ADVANCE(168);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 131:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'a')
                ADVANCE(181);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 132:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'a')
                ADVANCE(150);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 133:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'a')
                ADVANCE(186);
            if(lookahead == 'i')
                ADVANCE(166);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 134:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'a')
                ADVANCE(185);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 135:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'a')
                ADVANCE(187);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 136:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'b')
                ADVANCE(141);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 137:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'c')
                ADVANCE(153);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 138:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'c')
                ADVANCE(362);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 139:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'c')
                ADVANCE(172);
            if(lookahead == 'm')
                ADVANCE(132);
            if(lookahead == 'r')
                ADVANCE(138);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 140:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'c')
                ADVANCE(157);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 141:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'd')
                ADVANCE(341);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 142:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'e')
                ADVANCE(161);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 143:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'e')
                ADVANCE(356);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 144:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'e')
                ADVANCE(195);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 145:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'e')
                ADVANCE(328);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 146:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'e')
                ADVANCE(320);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 147:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'e')
                ADVANCE(149);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 148:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'e')
                ADVANCE(180);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 149:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'f')
                ADVANCE(323);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 150:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'g')
                ADVANCE(145);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 151:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'h')
                ADVANCE(380);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 152:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'h')
                ADVANCE(377);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 153:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'h')
                ADVANCE(170);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 154:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'i')
                ADVANCE(159);
            if(lookahead == 'o')
                ADVANCE(175);
            if(lookahead == 't')
                ADVANCE(176);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 155:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'i')
                ADVANCE(160);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 156:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'i')
                ADVANCE(162);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 157:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'i')
                ADVANCE(156);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 158:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'k')
                ADVANCE(367);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 159:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'l')
                ADVANCE(143);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 160:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'l')
                ADVANCE(190);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 161:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'm')
                ADVANCE(374);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 162:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'm')
                ADVANCE(134);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 163:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'm')
                ADVANCE(135);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 164:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'n')
                ADVANCE(137);
            if(lookahead == 's')
                ADVANCE(140);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 165:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'n')
                ADVANCE(344);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 166:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'n')
                ADVANCE(158);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 167:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'n')
                ADVANCE(331);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 168:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'n')
                ADVANCE(193);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 169:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'n')
                ADVANCE(174);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 170:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'o')
                ADVANCE(178);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 171:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'o')
                ADVANCE(370);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 172:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'o')
                ADVANCE(167);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 173:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'o')
                ADVANCE(191);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 174:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'o')
                ADVANCE(192);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 175:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'o')
                ADVANCE(189);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 176:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'p')
                ADVANCE(359);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 177:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'p')
                ADVANCE(350);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 178:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'r')
                ADVANCE(311);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 179:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 's')
                ADVANCE(390);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 180:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 's')
                ADVANCE(392);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 181:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 's')
                ADVANCE(179);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 182:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 't')
                ADVANCE(165);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 183:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 't')
                ADVANCE(142);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 184:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 't')
                ADVANCE(177);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 185:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 't')
                ADVANCE(151);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 186:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 't')
                ADVANCE(144);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 187:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 't')
                ADVANCE(152);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 188:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 't')
                ADVANCE(184);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 189:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 't')
                ADVANCE(169);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 190:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 't')
                ADVANCE(171);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 191:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 't')
                ADVANCE(148);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 192:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 't')
                ADVANCE(146);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 193:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'u')
                ADVANCE(383);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 194:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'u')
                ADVANCE(173);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 195:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'x')
                ADVANCE(163);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 196:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(196);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 197:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 198:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(198);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(199);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 199:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(199);
            END_STATE();
        case 200:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 201:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 202:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'a')
                ADVANCE(226);
            if(lookahead == 'e')
                ADVANCE(238);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 203:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'a')
                ADVANCE(250);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 204:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'a')
                ADVANCE(221);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 205:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'a')
                ADVANCE(255);
            if(lookahead == 'i')
                ADVANCE(237);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 206:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'a')
                ADVANCE(254);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 207:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'a')
                ADVANCE(256);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 208:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'b')
                ADVANCE(213);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 209:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'c')
                ADVANCE(224);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 210:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'c')
                ADVANCE(360);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 211:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'c')
                ADVANCE(243);
            if(lookahead == 'm')
                ADVANCE(204);
            if(lookahead == 'r')
                ADVANCE(210);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 212:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'c')
                ADVANCE(228);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 213:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'd')
                ADVANCE(339);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 214:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'e')
                ADVANCE(232);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 215:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'e')
                ADVANCE(354);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 216:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'e')
                ADVANCE(262);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 217:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'e')
                ADVANCE(326);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 218:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'e')
                ADVANCE(318);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 219:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'e')
                ADVANCE(220);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 220:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'f')
                ADVANCE(321);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 221:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'g')
                ADVANCE(217);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 222:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'h')
                ADVANCE(378);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 223:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'h')
                ADVANCE(375);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 224:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'h')
                ADVANCE(241);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 225:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'i')
                ADVANCE(230);
            if(lookahead == 'o')
                ADVANCE(245);
            if(lookahead == 't')
                ADVANCE(246);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 226:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'i')
                ADVANCE(231);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 227:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'i')
                ADVANCE(233);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 228:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'i')
                ADVANCE(227);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 229:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'k')
                ADVANCE(365);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 230:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'l')
                ADVANCE(215);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 231:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'l')
                ADVANCE(259);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 232:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'm')
                ADVANCE(372);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 233:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'm')
                ADVANCE(206);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 234:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'm')
                ADVANCE(207);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 235:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'n')
                ADVANCE(209);
            if(lookahead == 's')
                ADVANCE(212);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 236:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'n')
                ADVANCE(342);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 237:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'n')
                ADVANCE(229);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 238:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'n')
                ADVANCE(261);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 239:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'n')
                ADVANCE(329);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 240:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'n')
                ADVANCE(244);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 241:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'o')
                ADVANCE(248);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 242:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'o')
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 243:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'o')
                ADVANCE(239);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 244:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'o')
                ADVANCE(260);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 245:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'o')
                ADVANCE(258);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 246:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'p')
                ADVANCE(357);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 247:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'p')
                ADVANCE(348);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 248:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'r')
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 249:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 's')
                ADVANCE(388);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 250:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 's')
                ADVANCE(249);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 251:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 't')
                ADVANCE(236);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 252:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 't')
                ADVANCE(214);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 253:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 't')
                ADVANCE(247);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 254:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 't')
                ADVANCE(222);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 255:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 't')
                ADVANCE(216);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 256:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 't')
                ADVANCE(223);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 257:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 't')
                ADVANCE(253);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 258:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 't')
                ADVANCE(240);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 259:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 't')
                ADVANCE(242);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 260:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 't')
                ADVANCE(218);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 261:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'u')
                ADVANCE(381);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 262:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'x')
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 263:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 264:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                '_', 297,
                'a', 235,
                'b', 251,
                'f', 225,
                'h', 257,
                'i', 211,
                'k', 208,
                'l', 205,
                'm', 202,
                'p', 203,
                's', 252,
                0x0b, 264,
                '\f', 264,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 265:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(49);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 266:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                '_', 298,
                'a', 101,
                'b', 117,
                'f', 91,
                'h', 123,
                'i', 77,
                'k', 74,
                'l', 71,
                'm', 68,
                'p', 69,
                's', 118,
                0x0b, 266,
                '\f', 266,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 267:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(267);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 268:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 269:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 270:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(41);
            if(lookahead == '\\')
                ADVANCE(63);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 271:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 272:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(387);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 273:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 274:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 275:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 276:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 277:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 278:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 279:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 280:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '+')
                ADVANCE(4);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 281:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 282:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 283:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 284:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 285:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 286:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 287:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 288:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 289:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 290:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 291:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 292:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 293:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(305);
            END_STATE();
        case 294:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            END_STATE();
        case 295:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 296:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 297:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 298:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 299:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 300:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 301:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            END_STATE();
        case 302:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 303:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 304:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 305:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            END_STATE();
        case 306:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(306);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(307);
            END_STATE();
        case 307:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ' ||
               ('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(307);
            END_STATE();
        case 308:
            ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
            END_STATE();
        case 309:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 310:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 311:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 312:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(312);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(313);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(314);
            END_STATE();
        case 313:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(313);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(314);
            END_STATE();
        case 314:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(314);
            END_STATE();
        case 315:
            ACCEPT_TOKEN(sym_inline_email_rx);
            END_STATE();
        case 316:
            ACCEPT_TOKEN(sym_inline_email_rx);
            if(lookahead == '-')
                ADVANCE(10);
            if(lookahead == '.')
                ADVANCE(61);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(316);
            END_STATE();
        case 317:
            ACCEPT_TOKEN(sym_inline_email_rx);
            if(lookahead == '\\')
                ADVANCE(44);
            if(lookahead == ']')
                ADVANCE(317);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(43);
            END_STATE();
        case 318:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'r')
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 319:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 'r')
                ADVANCE(85);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 320:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 'r')
                ADVANCE(147);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 321:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 322:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 323:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 324:
            ACCEPT_TOKEN(aux_sym_inline_footnote_macro_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(324);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(325);
            END_STATE();
        case 325:
            ACCEPT_TOKEN(aux_sym_inline_footnote_macro_token2);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(325);
            END_STATE();
        case 326:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 327:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 328:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 329:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 330:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 331:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 332:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(332);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(333);
            END_STATE();
        case 333:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token1);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(333);
            END_STATE();
        case 334:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token2);
            END_STATE();
        case 335:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token2);
            if(lookahead == '[')
                ADVANCE(337);
            if(lookahead == ']')
                ADVANCE(338);
            END_STATE();
        case 336:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token2);
            if(lookahead == '\\')
                ADVANCE(335);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(334);
            END_STATE();
        case 337:
            ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
            END_STATE();
        case 338:
            ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
            END_STATE();
        case 339:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 340:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 341:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 342:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 343:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 344:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 345:
            ACCEPT_TOKEN(aux_sym_key_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(345);
            END_STATE();
        case 346:
            ACCEPT_TOKEN(aux_sym_auto_link_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(346);
            if(lookahead != 0 &&
               lookahead != '"' &&
               lookahead != ']')
                ADVANCE(347);
            END_STATE();
        case 347:
            ACCEPT_TOKEN(aux_sym_auto_link_token1);
            if(lookahead != 0 &&
               lookahead != '"' &&
               lookahead != ']')
                ADVANCE(347);
            END_STATE();
        case 348:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 's')
                ADVANCE(351);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 349:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(lookahead == 's')
                ADVANCE(352);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 350:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == 's')
                ADVANCE(353);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 351:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 352:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 353:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 354:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 355:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 356:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 357:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 358:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 359:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 360:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 361:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 362:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 363:
            ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
            END_STATE();
        case 364:
            ACCEPT_TOKEN(sym__link_component);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '.' &&
               lookahead != '[')
                ADVANCE(364);
            END_STATE();
        case 365:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 366:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 367:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 368:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 369:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 370:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 371:
            ACCEPT_TOKEN(aux_sym_inline_link_macro_token1);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '[')
                ADVANCE(371);
            END_STATE();
        case 372:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 373:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 374:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 375:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 376:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 377:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 378:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 379:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 380:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 381:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 382:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 383:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 384:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            END_STATE();
        case 385:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 386:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            END_STATE();
        case 387:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 388:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(263);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 389:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
            if(lookahead == '_')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(197);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(198);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(129);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(265);
            END_STATE();
        case 390:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        case 391:
            ACCEPT_TOKEN(anon_sym_quotes);
            END_STATE();
        case 392:
            ACCEPT_TOKEN(anon_sym_quotes);
            if(lookahead == '.')
                ADVANCE(62);
            if(lookahead == '@')
                ADVANCE(42);
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
                ADVANCE(20);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 65 },
    [2] = { .lex_state = 65 },
    [3] = { .lex_state = 65 },
    [4] = { .lex_state = 64 },
    [5] = { .lex_state = 65 },
    [6] = { .lex_state = 65 },
    [7] = { .lex_state = 65 },
    [8] = { .lex_state = 64 },
    [9] = { .lex_state = 64 },
    [10] = { .lex_state = 65 },
    [11] = { .lex_state = 65 },
    [12] = { .lex_state = 65 },
    [13] = { .lex_state = 65 },
    [14] = { .lex_state = 65 },
    [15] = { .lex_state = 65 },
    [16] = { .lex_state = 65 },
    [17] = { .lex_state = 65 },
    [18] = { .lex_state = 65 },
    [19] = { .lex_state = 65 },
    [20] = { .lex_state = 65 },
    [21] = { .lex_state = 65 },
    [22] = { .lex_state = 65 },
    [23] = { .lex_state = 65 },
    [24] = { .lex_state = 65 },
    [25] = { .lex_state = 65 },
    [26] = { .lex_state = 65 },
    [27] = { .lex_state = 65 },
    [28] = { .lex_state = 65 },
    [29] = { .lex_state = 65 },
    [30] = { .lex_state = 65 },
    [31] = { .lex_state = 65 },
    [32] = { .lex_state = 65 },
    [33] = { .lex_state = 65 },
    [34] = { .lex_state = 65 },
    [35] = { .lex_state = 2 },
    [36] = { .lex_state = 46 },
    [37] = { .lex_state = 46 },
    [38] = { .lex_state = 46 },
    [39] = { .lex_state = 2 },
    [40] = { .lex_state = 2 },
    [41] = { .lex_state = 2 },
    [42] = { .lex_state = 0 },
    [43] = { .lex_state = 2 },
    [44] = { .lex_state = 2 },
    [45] = { .lex_state = 2 },
    [46] = { .lex_state = 2 },
    [47] = { .lex_state = 2 },
    [48] = { .lex_state = 2 },
    [49] = { .lex_state = 0 },
    [50] = { .lex_state = 2 },
    [51] = { .lex_state = 2 },
    [52] = { .lex_state = 0 },
    [53] = { .lex_state = 312 },
    [54] = { .lex_state = 0 },
    [55] = { .lex_state = 312 },
    [56] = { .lex_state = 5 },
    [57] = { .lex_state = 5 },
    [58] = { .lex_state = 2 },
    [59] = { .lex_state = 0 },
    [60] = { .lex_state = 5 },
    [61] = { .lex_state = 0 },
    [62] = { .lex_state = 5 },
    [63] = { .lex_state = 312 },
    [64] = { .lex_state = 5 },
    [65] = { .lex_state = 0 },
    [66] = { .lex_state = 56 },
    [67] = { .lex_state = 0 },
    [68] = { .lex_state = 312 },
    [69] = { .lex_state = 0 },
    [70] = { .lex_state = 312 },
    [71] = { .lex_state = 312 },
    [72] = { .lex_state = 2 },
    [73] = { .lex_state = 2 },
    [74] = { .lex_state = 2 },
    [75] = { .lex_state = 0 },
    [76] = { .lex_state = 0 },
    [77] = { .lex_state = 312 },
    [78] = { .lex_state = 2 },
    [79] = { .lex_state = 57 },
    [80] = { .lex_state = 2 },
    [81] = { .lex_state = 2 },
    [82] = { .lex_state = 2 },
    [83] = { .lex_state = 58 },
    [84] = { .lex_state = 346 },
    [85] = { .lex_state = 52 },
    [86] = { .lex_state = 2 },
    [87] = { .lex_state = 5 },
    [88] = { .lex_state = 5 },
    [89] = { .lex_state = 0 },
    [90] = { .lex_state = 2 },
    [91] = { .lex_state = 0 },
    [92] = { .lex_state = 0 },
    [93] = { .lex_state = 59 },
    [94] = { .lex_state = 56 },
    [95] = { .lex_state = 2 },
    [96] = { .lex_state = 57 },
    [97] = { .lex_state = 0 },
    [98] = { .lex_state = 60 },
    [99] = { .lex_state = 2 },
    [100] = { .lex_state = 2 },
    [101] = { .lex_state = 2 },
    [102] = { .lex_state = 0 },
    [103] = { .lex_state = 0 },
    [104] = { .lex_state = 5 },
    [105] = { .lex_state = 5 },
    [106] = { .lex_state = 0 },
    [107] = { .lex_state = 0 },
    [108] = { .lex_state = 0 },
    [109] = { .lex_state = 0 },
    [110] = { .lex_state = 2 },
    [111] = { .lex_state = 0 },
    [112] = { .lex_state = 0 },
    [113] = { .lex_state = 0 },
    [114] = { .lex_state = 0 },
    [115] = { .lex_state = 56 },
    [116] = { .lex_state = 56 },
    [117] = { .lex_state = 2 },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_LBRACE] = ACTIONS(1),
        [aux_sym_replacement_token1] = ACTIONS(1),
        [anon_sym_RBRACE] = ACTIONS(1),
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
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
        [anon_sym_pass] = ACTIONS(1),
        [anon_sym_quotes] = ACTIONS(1),
    },
    [1] = {
        [sym_inline] = STATE(102),
        [sym_replacement] = STATE(3),
        [sym_word] = STATE(3),
        [sym_punctuation] = STATE(3),
        [sym_inline_anchor_rx] = STATE(3),
        [sym_inline_footnote_macro] = STATE(3),
        [sym_inline_image_macro] = STATE(3),
        [sym_inline_kbd_macro] = STATE(3),
        [sym_auto_link] = STATE(3),
        [sym_link] = STATE(23),
        [sym_inline_link_macro] = STATE(3),
        [sym_inline_math_macro] = STATE(3),
        [sym_inline_menu_macro] = STATE(3),
        [sym_inline_passthrough] = STATE(3),
        [aux_sym_inline_repeat1] = STATE(3),
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
        [anon_sym_PLUS] = ACTIONS(11),
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
        [anon_sym_BQUOTE] = ACTIONS(13),
        [anon_sym_PIPE] = ACTIONS(5),
        [anon_sym_TILDE] = ACTIONS(5),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(15),
        [anon_sym_anchor] = ACTIONS(17),
        [sym_inline_email_rx] = ACTIONS(19),
        [anon_sym_footnote] = ACTIONS(21),
        [anon_sym_footnoteref] = ACTIONS(21),
        [anon_sym_image] = ACTIONS(23),
        [anon_sym_icon] = ACTIONS(23),
        [anon_sym_kbd] = ACTIONS(25),
        [anon_sym_btn] = ACTIONS(25),
        [anon_sym_http] = ACTIONS(27),
        [anon_sym_https] = ACTIONS(27),
        [anon_sym_file] = ACTIONS(27),
        [anon_sym_ftp] = ACTIONS(27),
        [anon_sym_irc] = ACTIONS(27),
        [anon_sym_link] = ACTIONS(29),
        [anon_sym_mailto] = ACTIONS(29),
        [anon_sym_stem] = ACTIONS(31),
        [anon_sym_latexmath] = ACTIONS(31),
        [anon_sym_asciimath] = ACTIONS(31),
        [anon_sym_menu] = ACTIONS(33),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(35),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
        [anon_sym_pass] = ACTIONS(39),
    },
    [2] = {
        [sym_replacement] = STATE(2),
        [sym_word] = STATE(2),
        [sym_punctuation] = STATE(2),
        [sym_inline_anchor_rx] = STATE(2),
        [sym_inline_footnote_macro] = STATE(2),
        [sym_inline_image_macro] = STATE(2),
        [sym_inline_kbd_macro] = STATE(2),
        [sym_auto_link] = STATE(2),
        [sym_link] = STATE(23),
        [sym_inline_link_macro] = STATE(2),
        [sym_inline_math_macro] = STATE(2),
        [sym_inline_menu_macro] = STATE(2),
        [sym_inline_passthrough] = STATE(2),
        [aux_sym_inline_repeat1] = STATE(2),
        [ts_builtin_sym_end] = ACTIONS(41),
        [anon_sym_LBRACE] = ACTIONS(43),
        [anon_sym_RBRACE] = ACTIONS(46),
        [sym__word_no_digit] = ACTIONS(49),
        [sym__digits] = ACTIONS(49),
        [anon_sym_BANG] = ACTIONS(46),
        [anon_sym_DQUOTE] = ACTIONS(52),
        [anon_sym_POUND] = ACTIONS(46),
        [anon_sym_DOLLAR] = ACTIONS(46),
        [anon_sym_PERCENT] = ACTIONS(46),
        [anon_sym_AMP] = ACTIONS(46),
        [anon_sym_SQUOTE] = ACTIONS(46),
        [anon_sym_LPAREN] = ACTIONS(46),
        [anon_sym_RPAREN] = ACTIONS(46),
        [anon_sym_STAR] = ACTIONS(46),
        [anon_sym_PLUS] = ACTIONS(55),
        [anon_sym_COMMA] = ACTIONS(46),
        [anon_sym_DASH] = ACTIONS(46),
        [anon_sym_DOT] = ACTIONS(46),
        [anon_sym_SLASH] = ACTIONS(46),
        [anon_sym_COLON] = ACTIONS(46),
        [anon_sym_SEMI] = ACTIONS(46),
        [anon_sym_LT] = ACTIONS(46),
        [anon_sym_EQ] = ACTIONS(46),
        [anon_sym_GT] = ACTIONS(46),
        [anon_sym_QMARK] = ACTIONS(46),
        [anon_sym_AT] = ACTIONS(46),
        [anon_sym_LBRACK] = ACTIONS(46),
        [anon_sym_BSLASH] = ACTIONS(46),
        [anon_sym_RBRACK] = ACTIONS(46),
        [anon_sym_CARET] = ACTIONS(46),
        [anon_sym__] = ACTIONS(46),
        [anon_sym_BQUOTE] = ACTIONS(58),
        [anon_sym_PIPE] = ACTIONS(46),
        [anon_sym_TILDE] = ACTIONS(46),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(61),
        [anon_sym_anchor] = ACTIONS(64),
        [sym_inline_email_rx] = ACTIONS(67),
        [anon_sym_footnote] = ACTIONS(70),
        [anon_sym_footnoteref] = ACTIONS(70),
        [anon_sym_image] = ACTIONS(73),
        [anon_sym_icon] = ACTIONS(73),
        [anon_sym_kbd] = ACTIONS(76),
        [anon_sym_btn] = ACTIONS(76),
        [anon_sym_http] = ACTIONS(79),
        [anon_sym_https] = ACTIONS(79),
        [anon_sym_file] = ACTIONS(79),
        [anon_sym_ftp] = ACTIONS(79),
        [anon_sym_irc] = ACTIONS(79),
        [anon_sym_link] = ACTIONS(82),
        [anon_sym_mailto] = ACTIONS(82),
        [anon_sym_stem] = ACTIONS(85),
        [anon_sym_latexmath] = ACTIONS(85),
        [anon_sym_asciimath] = ACTIONS(85),
        [anon_sym_menu] = ACTIONS(88),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(91),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(94),
        [anon_sym_pass] = ACTIONS(97),
    },
    [3] = {
        [sym_replacement] = STATE(2),
        [sym_word] = STATE(2),
        [sym_punctuation] = STATE(2),
        [sym_inline_anchor_rx] = STATE(2),
        [sym_inline_footnote_macro] = STATE(2),
        [sym_inline_image_macro] = STATE(2),
        [sym_inline_kbd_macro] = STATE(2),
        [sym_auto_link] = STATE(2),
        [sym_link] = STATE(23),
        [sym_inline_link_macro] = STATE(2),
        [sym_inline_math_macro] = STATE(2),
        [sym_inline_menu_macro] = STATE(2),
        [sym_inline_passthrough] = STATE(2),
        [aux_sym_inline_repeat1] = STATE(2),
        [ts_builtin_sym_end] = ACTIONS(100),
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
        [anon_sym_PLUS] = ACTIONS(11),
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
        [anon_sym_BQUOTE] = ACTIONS(13),
        [anon_sym_PIPE] = ACTIONS(5),
        [anon_sym_TILDE] = ACTIONS(5),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(15),
        [anon_sym_anchor] = ACTIONS(17),
        [sym_inline_email_rx] = ACTIONS(102),
        [anon_sym_footnote] = ACTIONS(21),
        [anon_sym_footnoteref] = ACTIONS(21),
        [anon_sym_image] = ACTIONS(23),
        [anon_sym_icon] = ACTIONS(23),
        [anon_sym_kbd] = ACTIONS(25),
        [anon_sym_btn] = ACTIONS(25),
        [anon_sym_http] = ACTIONS(27),
        [anon_sym_https] = ACTIONS(27),
        [anon_sym_file] = ACTIONS(27),
        [anon_sym_ftp] = ACTIONS(27),
        [anon_sym_irc] = ACTIONS(27),
        [anon_sym_link] = ACTIONS(29),
        [anon_sym_mailto] = ACTIONS(29),
        [anon_sym_stem] = ACTIONS(31),
        [anon_sym_latexmath] = ACTIONS(31),
        [anon_sym_asciimath] = ACTIONS(31),
        [anon_sym_menu] = ACTIONS(33),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(35),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
        [anon_sym_pass] = ACTIONS(39),
    },
    [4] = {
        [ts_builtin_sym_end] = ACTIONS(104),
        [anon_sym_LBRACE] = ACTIONS(106),
        [aux_sym_replacement_token1] = ACTIONS(108),
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
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(106),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(106),
        [anon_sym_pass] = ACTIONS(106),
    },
    [5] = {
        [aux_sym_link_repeat1] = STATE(10),
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
        [anon_sym_DOT] = ACTIONS(114),
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
        [anon_sym_http] = ACTIONS(112),
        [anon_sym_https] = ACTIONS(112),
        [anon_sym_file] = ACTIONS(112),
        [anon_sym_ftp] = ACTIONS(112),
        [anon_sym_irc] = ACTIONS(112),
        [anon_sym_link] = ACTIONS(112),
        [anon_sym_mailto] = ACTIONS(112),
        [anon_sym_stem] = ACTIONS(112),
        [anon_sym_latexmath] = ACTIONS(112),
        [anon_sym_asciimath] = ACTIONS(112),
        [anon_sym_menu] = ACTIONS(112),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(112),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(112),
        [anon_sym_pass] = ACTIONS(112),
    },
    [6] = {
        [aux_sym_link_repeat1] = STATE(5),
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
        [anon_sym_DOT] = ACTIONS(114),
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
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(118),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(118),
        [anon_sym_pass] = ACTIONS(118),
    },
    [7] = {
        [sym_link] = STATE(58),
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
        [anon_sym_http] = ACTIONS(120),
        [anon_sym_https] = ACTIONS(120),
        [anon_sym_file] = ACTIONS(120),
        [anon_sym_ftp] = ACTIONS(120),
        [anon_sym_irc] = ACTIONS(120),
        [anon_sym_link] = ACTIONS(106),
        [anon_sym_mailto] = ACTIONS(106),
        [anon_sym_stem] = ACTIONS(106),
        [anon_sym_latexmath] = ACTIONS(106),
        [anon_sym_asciimath] = ACTIONS(106),
        [anon_sym_menu] = ACTIONS(106),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(106),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(106),
        [anon_sym_pass] = ACTIONS(106),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(104),
        [anon_sym_LBRACE] = ACTIONS(106),
        [aux_sym_replacement_token1] = ACTIONS(122),
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
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(106),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(106),
        [anon_sym_pass] = ACTIONS(106),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(104),
        [anon_sym_LBRACE] = ACTIONS(106),
        [aux_sym_replacement_token1] = ACTIONS(124),
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
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(106),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(106),
        [anon_sym_pass] = ACTIONS(106),
    },
    [10] = {
        [aux_sym_link_repeat1] = STATE(10),
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
        [anon_sym_DOT] = ACTIONS(130),
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
        [anon_sym_http] = ACTIONS(128),
        [anon_sym_https] = ACTIONS(128),
        [anon_sym_file] = ACTIONS(128),
        [anon_sym_ftp] = ACTIONS(128),
        [anon_sym_irc] = ACTIONS(128),
        [anon_sym_link] = ACTIONS(128),
        [anon_sym_mailto] = ACTIONS(128),
        [anon_sym_stem] = ACTIONS(128),
        [anon_sym_latexmath] = ACTIONS(128),
        [anon_sym_asciimath] = ACTIONS(128),
        [anon_sym_menu] = ACTIONS(128),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(128),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(128),
        [anon_sym_pass] = ACTIONS(128),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym__word_no_digit] = ACTIONS(135),
        [sym__digits] = ACTIONS(135),
        [anon_sym_BANG] = ACTIONS(135),
        [anon_sym_DQUOTE] = ACTIONS(135),
        [anon_sym_POUND] = ACTIONS(135),
        [anon_sym_DOLLAR] = ACTIONS(135),
        [anon_sym_PERCENT] = ACTIONS(135),
        [anon_sym_AMP] = ACTIONS(135),
        [anon_sym_SQUOTE] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(135),
        [anon_sym_STAR] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_DASH] = ACTIONS(135),
        [anon_sym_DOT] = ACTIONS(135),
        [anon_sym_SLASH] = ACTIONS(135),
        [anon_sym_COLON] = ACTIONS(135),
        [anon_sym_SEMI] = ACTIONS(135),
        [anon_sym_LT] = ACTIONS(135),
        [anon_sym_EQ] = ACTIONS(135),
        [anon_sym_GT] = ACTIONS(135),
        [anon_sym_QMARK] = ACTIONS(135),
        [anon_sym_AT] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_BSLASH] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [anon_sym_CARET] = ACTIONS(135),
        [anon_sym__] = ACTIONS(135),
        [anon_sym_BQUOTE] = ACTIONS(135),
        [anon_sym_PIPE] = ACTIONS(135),
        [anon_sym_TILDE] = ACTIONS(135),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(135),
        [anon_sym_anchor] = ACTIONS(135),
        [sym_inline_email_rx] = ACTIONS(135),
        [anon_sym_footnote] = ACTIONS(135),
        [anon_sym_footnoteref] = ACTIONS(135),
        [anon_sym_image] = ACTIONS(135),
        [anon_sym_icon] = ACTIONS(135),
        [anon_sym_kbd] = ACTIONS(135),
        [anon_sym_btn] = ACTIONS(135),
        [anon_sym_http] = ACTIONS(135),
        [anon_sym_https] = ACTIONS(135),
        [anon_sym_file] = ACTIONS(135),
        [anon_sym_ftp] = ACTIONS(135),
        [anon_sym_irc] = ACTIONS(135),
        [anon_sym_link] = ACTIONS(135),
        [anon_sym_mailto] = ACTIONS(135),
        [anon_sym_stem] = ACTIONS(135),
        [anon_sym_latexmath] = ACTIONS(135),
        [anon_sym_asciimath] = ACTIONS(135),
        [anon_sym_menu] = ACTIONS(135),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(135),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(135),
        [anon_sym_pass] = ACTIONS(135),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_LBRACE] = ACTIONS(139),
        [anon_sym_RBRACE] = ACTIONS(139),
        [sym__word_no_digit] = ACTIONS(139),
        [sym__digits] = ACTIONS(139),
        [anon_sym_BANG] = ACTIONS(139),
        [anon_sym_DQUOTE] = ACTIONS(139),
        [anon_sym_POUND] = ACTIONS(139),
        [anon_sym_DOLLAR] = ACTIONS(139),
        [anon_sym_PERCENT] = ACTIONS(139),
        [anon_sym_AMP] = ACTIONS(139),
        [anon_sym_SQUOTE] = ACTIONS(139),
        [anon_sym_LPAREN] = ACTIONS(139),
        [anon_sym_RPAREN] = ACTIONS(139),
        [anon_sym_STAR] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(139),
        [anon_sym_COMMA] = ACTIONS(139),
        [anon_sym_DASH] = ACTIONS(139),
        [anon_sym_DOT] = ACTIONS(139),
        [anon_sym_SLASH] = ACTIONS(139),
        [anon_sym_COLON] = ACTIONS(139),
        [anon_sym_SEMI] = ACTIONS(139),
        [anon_sym_LT] = ACTIONS(139),
        [anon_sym_EQ] = ACTIONS(139),
        [anon_sym_GT] = ACTIONS(139),
        [anon_sym_QMARK] = ACTIONS(139),
        [anon_sym_AT] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(139),
        [anon_sym_BSLASH] = ACTIONS(139),
        [anon_sym_RBRACK] = ACTIONS(139),
        [anon_sym_CARET] = ACTIONS(139),
        [anon_sym__] = ACTIONS(139),
        [anon_sym_BQUOTE] = ACTIONS(139),
        [anon_sym_PIPE] = ACTIONS(139),
        [anon_sym_TILDE] = ACTIONS(139),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(139),
        [anon_sym_anchor] = ACTIONS(139),
        [sym_inline_email_rx] = ACTIONS(139),
        [anon_sym_footnote] = ACTIONS(139),
        [anon_sym_footnoteref] = ACTIONS(139),
        [anon_sym_image] = ACTIONS(139),
        [anon_sym_icon] = ACTIONS(139),
        [anon_sym_kbd] = ACTIONS(139),
        [anon_sym_btn] = ACTIONS(139),
        [anon_sym_http] = ACTIONS(139),
        [anon_sym_https] = ACTIONS(139),
        [anon_sym_file] = ACTIONS(139),
        [anon_sym_ftp] = ACTIONS(139),
        [anon_sym_irc] = ACTIONS(139),
        [anon_sym_link] = ACTIONS(139),
        [anon_sym_mailto] = ACTIONS(139),
        [anon_sym_stem] = ACTIONS(139),
        [anon_sym_latexmath] = ACTIONS(139),
        [anon_sym_asciimath] = ACTIONS(139),
        [anon_sym_menu] = ACTIONS(139),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(139),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(139),
        [anon_sym_pass] = ACTIONS(139),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [anon_sym_RBRACE] = ACTIONS(143),
        [sym__word_no_digit] = ACTIONS(143),
        [sym__digits] = ACTIONS(143),
        [anon_sym_BANG] = ACTIONS(143),
        [anon_sym_DQUOTE] = ACTIONS(143),
        [anon_sym_POUND] = ACTIONS(143),
        [anon_sym_DOLLAR] = ACTIONS(143),
        [anon_sym_PERCENT] = ACTIONS(143),
        [anon_sym_AMP] = ACTIONS(143),
        [anon_sym_SQUOTE] = ACTIONS(143),
        [anon_sym_LPAREN] = ACTIONS(143),
        [anon_sym_RPAREN] = ACTIONS(143),
        [anon_sym_STAR] = ACTIONS(143),
        [anon_sym_PLUS] = ACTIONS(143),
        [anon_sym_COMMA] = ACTIONS(143),
        [anon_sym_DASH] = ACTIONS(143),
        [anon_sym_DOT] = ACTIONS(143),
        [anon_sym_SLASH] = ACTIONS(143),
        [anon_sym_COLON] = ACTIONS(143),
        [anon_sym_SEMI] = ACTIONS(143),
        [anon_sym_LT] = ACTIONS(143),
        [anon_sym_EQ] = ACTIONS(143),
        [anon_sym_GT] = ACTIONS(143),
        [anon_sym_QMARK] = ACTIONS(143),
        [anon_sym_AT] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_BSLASH] = ACTIONS(143),
        [anon_sym_RBRACK] = ACTIONS(143),
        [anon_sym_CARET] = ACTIONS(143),
        [anon_sym__] = ACTIONS(143),
        [anon_sym_BQUOTE] = ACTIONS(143),
        [anon_sym_PIPE] = ACTIONS(143),
        [anon_sym_TILDE] = ACTIONS(143),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(143),
        [anon_sym_anchor] = ACTIONS(143),
        [sym_inline_email_rx] = ACTIONS(143),
        [anon_sym_footnote] = ACTIONS(143),
        [anon_sym_footnoteref] = ACTIONS(143),
        [anon_sym_image] = ACTIONS(143),
        [anon_sym_icon] = ACTIONS(143),
        [anon_sym_kbd] = ACTIONS(143),
        [anon_sym_btn] = ACTIONS(143),
        [anon_sym_http] = ACTIONS(143),
        [anon_sym_https] = ACTIONS(143),
        [anon_sym_file] = ACTIONS(143),
        [anon_sym_ftp] = ACTIONS(143),
        [anon_sym_irc] = ACTIONS(143),
        [anon_sym_link] = ACTIONS(143),
        [anon_sym_mailto] = ACTIONS(143),
        [anon_sym_stem] = ACTIONS(143),
        [anon_sym_latexmath] = ACTIONS(143),
        [anon_sym_asciimath] = ACTIONS(143),
        [anon_sym_menu] = ACTIONS(143),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(143),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
        [anon_sym_pass] = ACTIONS(143),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [anon_sym_RBRACE] = ACTIONS(147),
        [sym__word_no_digit] = ACTIONS(147),
        [sym__digits] = ACTIONS(147),
        [anon_sym_BANG] = ACTIONS(147),
        [anon_sym_DQUOTE] = ACTIONS(147),
        [anon_sym_POUND] = ACTIONS(147),
        [anon_sym_DOLLAR] = ACTIONS(147),
        [anon_sym_PERCENT] = ACTIONS(147),
        [anon_sym_AMP] = ACTIONS(147),
        [anon_sym_SQUOTE] = ACTIONS(147),
        [anon_sym_LPAREN] = ACTIONS(147),
        [anon_sym_RPAREN] = ACTIONS(147),
        [anon_sym_STAR] = ACTIONS(147),
        [anon_sym_PLUS] = ACTIONS(147),
        [anon_sym_COMMA] = ACTIONS(147),
        [anon_sym_DASH] = ACTIONS(147),
        [anon_sym_DOT] = ACTIONS(147),
        [anon_sym_SLASH] = ACTIONS(147),
        [anon_sym_COLON] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_LT] = ACTIONS(147),
        [anon_sym_EQ] = ACTIONS(147),
        [anon_sym_GT] = ACTIONS(147),
        [anon_sym_QMARK] = ACTIONS(147),
        [anon_sym_AT] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(147),
        [anon_sym_BSLASH] = ACTIONS(147),
        [anon_sym_RBRACK] = ACTIONS(147),
        [anon_sym_CARET] = ACTIONS(147),
        [anon_sym__] = ACTIONS(147),
        [anon_sym_BQUOTE] = ACTIONS(147),
        [anon_sym_PIPE] = ACTIONS(147),
        [anon_sym_TILDE] = ACTIONS(147),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(147),
        [anon_sym_anchor] = ACTIONS(147),
        [sym_inline_email_rx] = ACTIONS(147),
        [anon_sym_footnote] = ACTIONS(147),
        [anon_sym_footnoteref] = ACTIONS(147),
        [anon_sym_image] = ACTIONS(147),
        [anon_sym_icon] = ACTIONS(147),
        [anon_sym_kbd] = ACTIONS(147),
        [anon_sym_btn] = ACTIONS(147),
        [anon_sym_http] = ACTIONS(147),
        [anon_sym_https] = ACTIONS(147),
        [anon_sym_file] = ACTIONS(147),
        [anon_sym_ftp] = ACTIONS(147),
        [anon_sym_irc] = ACTIONS(147),
        [anon_sym_link] = ACTIONS(147),
        [anon_sym_mailto] = ACTIONS(147),
        [anon_sym_stem] = ACTIONS(147),
        [anon_sym_latexmath] = ACTIONS(147),
        [anon_sym_asciimath] = ACTIONS(147),
        [anon_sym_menu] = ACTIONS(147),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(147),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(147),
        [anon_sym_pass] = ACTIONS(147),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(149),
        [anon_sym_LBRACE] = ACTIONS(151),
        [anon_sym_RBRACE] = ACTIONS(151),
        [sym__word_no_digit] = ACTIONS(151),
        [sym__digits] = ACTIONS(151),
        [anon_sym_BANG] = ACTIONS(151),
        [anon_sym_DQUOTE] = ACTIONS(151),
        [anon_sym_POUND] = ACTIONS(151),
        [anon_sym_DOLLAR] = ACTIONS(151),
        [anon_sym_PERCENT] = ACTIONS(151),
        [anon_sym_AMP] = ACTIONS(151),
        [anon_sym_SQUOTE] = ACTIONS(151),
        [anon_sym_LPAREN] = ACTIONS(151),
        [anon_sym_RPAREN] = ACTIONS(151),
        [anon_sym_STAR] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(151),
        [anon_sym_COMMA] = ACTIONS(151),
        [anon_sym_DASH] = ACTIONS(151),
        [anon_sym_DOT] = ACTIONS(151),
        [anon_sym_SLASH] = ACTIONS(151),
        [anon_sym_COLON] = ACTIONS(151),
        [anon_sym_SEMI] = ACTIONS(151),
        [anon_sym_LT] = ACTIONS(151),
        [anon_sym_EQ] = ACTIONS(151),
        [anon_sym_GT] = ACTIONS(151),
        [anon_sym_QMARK] = ACTIONS(151),
        [anon_sym_AT] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(151),
        [anon_sym_BSLASH] = ACTIONS(151),
        [anon_sym_RBRACK] = ACTIONS(151),
        [anon_sym_CARET] = ACTIONS(151),
        [anon_sym__] = ACTIONS(151),
        [anon_sym_BQUOTE] = ACTIONS(151),
        [anon_sym_PIPE] = ACTIONS(151),
        [anon_sym_TILDE] = ACTIONS(151),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(151),
        [anon_sym_anchor] = ACTIONS(151),
        [sym_inline_email_rx] = ACTIONS(151),
        [anon_sym_footnote] = ACTIONS(151),
        [anon_sym_footnoteref] = ACTIONS(151),
        [anon_sym_image] = ACTIONS(151),
        [anon_sym_icon] = ACTIONS(151),
        [anon_sym_kbd] = ACTIONS(151),
        [anon_sym_btn] = ACTIONS(151),
        [anon_sym_http] = ACTIONS(151),
        [anon_sym_https] = ACTIONS(151),
        [anon_sym_file] = ACTIONS(151),
        [anon_sym_ftp] = ACTIONS(151),
        [anon_sym_irc] = ACTIONS(151),
        [anon_sym_link] = ACTIONS(151),
        [anon_sym_mailto] = ACTIONS(151),
        [anon_sym_stem] = ACTIONS(151),
        [anon_sym_latexmath] = ACTIONS(151),
        [anon_sym_asciimath] = ACTIONS(151),
        [anon_sym_menu] = ACTIONS(151),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(151),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(151),
        [anon_sym_pass] = ACTIONS(151),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(153),
        [anon_sym_LBRACE] = ACTIONS(155),
        [anon_sym_RBRACE] = ACTIONS(155),
        [sym__word_no_digit] = ACTIONS(155),
        [sym__digits] = ACTIONS(155),
        [anon_sym_BANG] = ACTIONS(155),
        [anon_sym_DQUOTE] = ACTIONS(155),
        [anon_sym_POUND] = ACTIONS(155),
        [anon_sym_DOLLAR] = ACTIONS(155),
        [anon_sym_PERCENT] = ACTIONS(155),
        [anon_sym_AMP] = ACTIONS(155),
        [anon_sym_SQUOTE] = ACTIONS(155),
        [anon_sym_LPAREN] = ACTIONS(155),
        [anon_sym_RPAREN] = ACTIONS(155),
        [anon_sym_STAR] = ACTIONS(155),
        [anon_sym_PLUS] = ACTIONS(155),
        [anon_sym_COMMA] = ACTIONS(155),
        [anon_sym_DASH] = ACTIONS(155),
        [anon_sym_DOT] = ACTIONS(155),
        [anon_sym_SLASH] = ACTIONS(155),
        [anon_sym_COLON] = ACTIONS(155),
        [anon_sym_SEMI] = ACTIONS(155),
        [anon_sym_LT] = ACTIONS(155),
        [anon_sym_EQ] = ACTIONS(155),
        [anon_sym_GT] = ACTIONS(155),
        [anon_sym_QMARK] = ACTIONS(155),
        [anon_sym_AT] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(155),
        [anon_sym_BSLASH] = ACTIONS(155),
        [anon_sym_RBRACK] = ACTIONS(155),
        [anon_sym_CARET] = ACTIONS(155),
        [anon_sym__] = ACTIONS(155),
        [anon_sym_BQUOTE] = ACTIONS(155),
        [anon_sym_PIPE] = ACTIONS(155),
        [anon_sym_TILDE] = ACTIONS(155),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(155),
        [anon_sym_anchor] = ACTIONS(155),
        [sym_inline_email_rx] = ACTIONS(155),
        [anon_sym_footnote] = ACTIONS(155),
        [anon_sym_footnoteref] = ACTIONS(155),
        [anon_sym_image] = ACTIONS(155),
        [anon_sym_icon] = ACTIONS(155),
        [anon_sym_kbd] = ACTIONS(155),
        [anon_sym_btn] = ACTIONS(155),
        [anon_sym_http] = ACTIONS(155),
        [anon_sym_https] = ACTIONS(155),
        [anon_sym_file] = ACTIONS(155),
        [anon_sym_ftp] = ACTIONS(155),
        [anon_sym_irc] = ACTIONS(155),
        [anon_sym_link] = ACTIONS(155),
        [anon_sym_mailto] = ACTIONS(155),
        [anon_sym_stem] = ACTIONS(155),
        [anon_sym_latexmath] = ACTIONS(155),
        [anon_sym_asciimath] = ACTIONS(155),
        [anon_sym_menu] = ACTIONS(155),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(155),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(155),
        [anon_sym_pass] = ACTIONS(155),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(157),
        [anon_sym_LBRACE] = ACTIONS(159),
        [anon_sym_RBRACE] = ACTIONS(159),
        [sym__word_no_digit] = ACTIONS(159),
        [sym__digits] = ACTIONS(159),
        [anon_sym_BANG] = ACTIONS(159),
        [anon_sym_DQUOTE] = ACTIONS(159),
        [anon_sym_POUND] = ACTIONS(159),
        [anon_sym_DOLLAR] = ACTIONS(159),
        [anon_sym_PERCENT] = ACTIONS(159),
        [anon_sym_AMP] = ACTIONS(159),
        [anon_sym_SQUOTE] = ACTIONS(159),
        [anon_sym_LPAREN] = ACTIONS(159),
        [anon_sym_RPAREN] = ACTIONS(159),
        [anon_sym_STAR] = ACTIONS(159),
        [anon_sym_PLUS] = ACTIONS(159),
        [anon_sym_COMMA] = ACTIONS(159),
        [anon_sym_DASH] = ACTIONS(159),
        [anon_sym_DOT] = ACTIONS(159),
        [anon_sym_SLASH] = ACTIONS(159),
        [anon_sym_COLON] = ACTIONS(159),
        [anon_sym_SEMI] = ACTIONS(159),
        [anon_sym_LT] = ACTIONS(159),
        [anon_sym_EQ] = ACTIONS(159),
        [anon_sym_GT] = ACTIONS(159),
        [anon_sym_QMARK] = ACTIONS(159),
        [anon_sym_AT] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_BSLASH] = ACTIONS(159),
        [anon_sym_RBRACK] = ACTIONS(159),
        [anon_sym_CARET] = ACTIONS(159),
        [anon_sym__] = ACTIONS(159),
        [anon_sym_BQUOTE] = ACTIONS(159),
        [anon_sym_PIPE] = ACTIONS(159),
        [anon_sym_TILDE] = ACTIONS(159),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(159),
        [anon_sym_anchor] = ACTIONS(159),
        [sym_inline_email_rx] = ACTIONS(159),
        [anon_sym_footnote] = ACTIONS(159),
        [anon_sym_footnoteref] = ACTIONS(159),
        [anon_sym_image] = ACTIONS(159),
        [anon_sym_icon] = ACTIONS(159),
        [anon_sym_kbd] = ACTIONS(159),
        [anon_sym_btn] = ACTIONS(159),
        [anon_sym_http] = ACTIONS(159),
        [anon_sym_https] = ACTIONS(159),
        [anon_sym_file] = ACTIONS(159),
        [anon_sym_ftp] = ACTIONS(159),
        [anon_sym_irc] = ACTIONS(159),
        [anon_sym_link] = ACTIONS(159),
        [anon_sym_mailto] = ACTIONS(159),
        [anon_sym_stem] = ACTIONS(159),
        [anon_sym_latexmath] = ACTIONS(159),
        [anon_sym_asciimath] = ACTIONS(159),
        [anon_sym_menu] = ACTIONS(159),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(159),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(159),
        [anon_sym_pass] = ACTIONS(159),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(161),
        [anon_sym_LBRACE] = ACTIONS(163),
        [anon_sym_RBRACE] = ACTIONS(163),
        [sym__word_no_digit] = ACTIONS(163),
        [sym__digits] = ACTIONS(163),
        [anon_sym_BANG] = ACTIONS(163),
        [anon_sym_DQUOTE] = ACTIONS(163),
        [anon_sym_POUND] = ACTIONS(163),
        [anon_sym_DOLLAR] = ACTIONS(163),
        [anon_sym_PERCENT] = ACTIONS(163),
        [anon_sym_AMP] = ACTIONS(163),
        [anon_sym_SQUOTE] = ACTIONS(163),
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_RPAREN] = ACTIONS(163),
        [anon_sym_STAR] = ACTIONS(163),
        [anon_sym_PLUS] = ACTIONS(163),
        [anon_sym_COMMA] = ACTIONS(163),
        [anon_sym_DASH] = ACTIONS(163),
        [anon_sym_DOT] = ACTIONS(163),
        [anon_sym_SLASH] = ACTIONS(163),
        [anon_sym_COLON] = ACTIONS(163),
        [anon_sym_SEMI] = ACTIONS(163),
        [anon_sym_LT] = ACTIONS(163),
        [anon_sym_EQ] = ACTIONS(163),
        [anon_sym_GT] = ACTIONS(163),
        [anon_sym_QMARK] = ACTIONS(163),
        [anon_sym_AT] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(163),
        [anon_sym_BSLASH] = ACTIONS(163),
        [anon_sym_RBRACK] = ACTIONS(163),
        [anon_sym_CARET] = ACTIONS(163),
        [anon_sym__] = ACTIONS(163),
        [anon_sym_BQUOTE] = ACTIONS(163),
        [anon_sym_PIPE] = ACTIONS(163),
        [anon_sym_TILDE] = ACTIONS(163),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(163),
        [anon_sym_anchor] = ACTIONS(163),
        [sym_inline_email_rx] = ACTIONS(163),
        [anon_sym_footnote] = ACTIONS(163),
        [anon_sym_footnoteref] = ACTIONS(163),
        [anon_sym_image] = ACTIONS(163),
        [anon_sym_icon] = ACTIONS(163),
        [anon_sym_kbd] = ACTIONS(163),
        [anon_sym_btn] = ACTIONS(163),
        [anon_sym_http] = ACTIONS(163),
        [anon_sym_https] = ACTIONS(163),
        [anon_sym_file] = ACTIONS(163),
        [anon_sym_ftp] = ACTIONS(163),
        [anon_sym_irc] = ACTIONS(163),
        [anon_sym_link] = ACTIONS(163),
        [anon_sym_mailto] = ACTIONS(163),
        [anon_sym_stem] = ACTIONS(163),
        [anon_sym_latexmath] = ACTIONS(163),
        [anon_sym_asciimath] = ACTIONS(163),
        [anon_sym_menu] = ACTIONS(163),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(163),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(163),
        [anon_sym_pass] = ACTIONS(163),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(165),
        [anon_sym_LBRACE] = ACTIONS(167),
        [anon_sym_RBRACE] = ACTIONS(167),
        [sym__word_no_digit] = ACTIONS(167),
        [sym__digits] = ACTIONS(167),
        [anon_sym_BANG] = ACTIONS(167),
        [anon_sym_DQUOTE] = ACTIONS(167),
        [anon_sym_POUND] = ACTIONS(167),
        [anon_sym_DOLLAR] = ACTIONS(167),
        [anon_sym_PERCENT] = ACTIONS(167),
        [anon_sym_AMP] = ACTIONS(167),
        [anon_sym_SQUOTE] = ACTIONS(167),
        [anon_sym_LPAREN] = ACTIONS(167),
        [anon_sym_RPAREN] = ACTIONS(167),
        [anon_sym_STAR] = ACTIONS(167),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_COMMA] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_DOT] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(167),
        [anon_sym_COLON] = ACTIONS(167),
        [anon_sym_SEMI] = ACTIONS(167),
        [anon_sym_LT] = ACTIONS(167),
        [anon_sym_EQ] = ACTIONS(167),
        [anon_sym_GT] = ACTIONS(167),
        [anon_sym_QMARK] = ACTIONS(167),
        [anon_sym_AT] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(167),
        [anon_sym_BSLASH] = ACTIONS(167),
        [anon_sym_RBRACK] = ACTIONS(167),
        [anon_sym_CARET] = ACTIONS(167),
        [anon_sym__] = ACTIONS(167),
        [anon_sym_BQUOTE] = ACTIONS(167),
        [anon_sym_PIPE] = ACTIONS(167),
        [anon_sym_TILDE] = ACTIONS(167),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(167),
        [anon_sym_anchor] = ACTIONS(167),
        [sym_inline_email_rx] = ACTIONS(167),
        [anon_sym_footnote] = ACTIONS(167),
        [anon_sym_footnoteref] = ACTIONS(167),
        [anon_sym_image] = ACTIONS(167),
        [anon_sym_icon] = ACTIONS(167),
        [anon_sym_kbd] = ACTIONS(167),
        [anon_sym_btn] = ACTIONS(167),
        [anon_sym_http] = ACTIONS(167),
        [anon_sym_https] = ACTIONS(167),
        [anon_sym_file] = ACTIONS(167),
        [anon_sym_ftp] = ACTIONS(167),
        [anon_sym_irc] = ACTIONS(167),
        [anon_sym_link] = ACTIONS(167),
        [anon_sym_mailto] = ACTIONS(167),
        [anon_sym_stem] = ACTIONS(167),
        [anon_sym_latexmath] = ACTIONS(167),
        [anon_sym_asciimath] = ACTIONS(167),
        [anon_sym_menu] = ACTIONS(167),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(167),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(167),
        [anon_sym_pass] = ACTIONS(167),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_LBRACE] = ACTIONS(171),
        [anon_sym_RBRACE] = ACTIONS(171),
        [sym__word_no_digit] = ACTIONS(171),
        [sym__digits] = ACTIONS(171),
        [anon_sym_BANG] = ACTIONS(171),
        [anon_sym_DQUOTE] = ACTIONS(171),
        [anon_sym_POUND] = ACTIONS(171),
        [anon_sym_DOLLAR] = ACTIONS(171),
        [anon_sym_PERCENT] = ACTIONS(171),
        [anon_sym_AMP] = ACTIONS(171),
        [anon_sym_SQUOTE] = ACTIONS(171),
        [anon_sym_LPAREN] = ACTIONS(171),
        [anon_sym_RPAREN] = ACTIONS(171),
        [anon_sym_STAR] = ACTIONS(171),
        [anon_sym_PLUS] = ACTIONS(171),
        [anon_sym_COMMA] = ACTIONS(171),
        [anon_sym_DASH] = ACTIONS(171),
        [anon_sym_DOT] = ACTIONS(171),
        [anon_sym_SLASH] = ACTIONS(171),
        [anon_sym_COLON] = ACTIONS(171),
        [anon_sym_SEMI] = ACTIONS(171),
        [anon_sym_LT] = ACTIONS(171),
        [anon_sym_EQ] = ACTIONS(171),
        [anon_sym_GT] = ACTIONS(171),
        [anon_sym_QMARK] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(171),
        [anon_sym_LBRACK] = ACTIONS(171),
        [anon_sym_BSLASH] = ACTIONS(171),
        [anon_sym_RBRACK] = ACTIONS(171),
        [anon_sym_CARET] = ACTIONS(171),
        [anon_sym__] = ACTIONS(171),
        [anon_sym_BQUOTE] = ACTIONS(171),
        [anon_sym_PIPE] = ACTIONS(171),
        [anon_sym_TILDE] = ACTIONS(171),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(171),
        [anon_sym_anchor] = ACTIONS(171),
        [sym_inline_email_rx] = ACTIONS(171),
        [anon_sym_footnote] = ACTIONS(171),
        [anon_sym_footnoteref] = ACTIONS(171),
        [anon_sym_image] = ACTIONS(171),
        [anon_sym_icon] = ACTIONS(171),
        [anon_sym_kbd] = ACTIONS(171),
        [anon_sym_btn] = ACTIONS(171),
        [anon_sym_http] = ACTIONS(171),
        [anon_sym_https] = ACTIONS(171),
        [anon_sym_file] = ACTIONS(171),
        [anon_sym_ftp] = ACTIONS(171),
        [anon_sym_irc] = ACTIONS(171),
        [anon_sym_link] = ACTIONS(171),
        [anon_sym_mailto] = ACTIONS(171),
        [anon_sym_stem] = ACTIONS(171),
        [anon_sym_latexmath] = ACTIONS(171),
        [anon_sym_asciimath] = ACTIONS(171),
        [anon_sym_menu] = ACTIONS(171),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(171),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(171),
        [anon_sym_pass] = ACTIONS(171),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(173),
        [anon_sym_LBRACE] = ACTIONS(175),
        [anon_sym_RBRACE] = ACTIONS(175),
        [sym__word_no_digit] = ACTIONS(175),
        [sym__digits] = ACTIONS(175),
        [anon_sym_BANG] = ACTIONS(175),
        [anon_sym_DQUOTE] = ACTIONS(175),
        [anon_sym_POUND] = ACTIONS(175),
        [anon_sym_DOLLAR] = ACTIONS(175),
        [anon_sym_PERCENT] = ACTIONS(175),
        [anon_sym_AMP] = ACTIONS(175),
        [anon_sym_SQUOTE] = ACTIONS(175),
        [anon_sym_LPAREN] = ACTIONS(175),
        [anon_sym_RPAREN] = ACTIONS(175),
        [anon_sym_STAR] = ACTIONS(175),
        [anon_sym_PLUS] = ACTIONS(175),
        [anon_sym_COMMA] = ACTIONS(175),
        [anon_sym_DASH] = ACTIONS(175),
        [anon_sym_DOT] = ACTIONS(175),
        [anon_sym_SLASH] = ACTIONS(175),
        [anon_sym_COLON] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_LT] = ACTIONS(175),
        [anon_sym_EQ] = ACTIONS(175),
        [anon_sym_GT] = ACTIONS(175),
        [anon_sym_QMARK] = ACTIONS(175),
        [anon_sym_AT] = ACTIONS(175),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_BSLASH] = ACTIONS(175),
        [anon_sym_RBRACK] = ACTIONS(175),
        [anon_sym_CARET] = ACTIONS(175),
        [anon_sym__] = ACTIONS(175),
        [anon_sym_BQUOTE] = ACTIONS(175),
        [anon_sym_PIPE] = ACTIONS(175),
        [anon_sym_TILDE] = ACTIONS(175),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(175),
        [anon_sym_anchor] = ACTIONS(175),
        [sym_inline_email_rx] = ACTIONS(175),
        [anon_sym_footnote] = ACTIONS(175),
        [anon_sym_footnoteref] = ACTIONS(175),
        [anon_sym_image] = ACTIONS(175),
        [anon_sym_icon] = ACTIONS(175),
        [anon_sym_kbd] = ACTIONS(175),
        [anon_sym_btn] = ACTIONS(175),
        [anon_sym_http] = ACTIONS(175),
        [anon_sym_https] = ACTIONS(175),
        [anon_sym_file] = ACTIONS(175),
        [anon_sym_ftp] = ACTIONS(175),
        [anon_sym_irc] = ACTIONS(175),
        [anon_sym_link] = ACTIONS(175),
        [anon_sym_mailto] = ACTIONS(175),
        [anon_sym_stem] = ACTIONS(175),
        [anon_sym_latexmath] = ACTIONS(175),
        [anon_sym_asciimath] = ACTIONS(175),
        [anon_sym_menu] = ACTIONS(175),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(175),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(175),
        [anon_sym_pass] = ACTIONS(175),
    },
    [22] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_LBRACE] = ACTIONS(179),
        [anon_sym_RBRACE] = ACTIONS(179),
        [sym__word_no_digit] = ACTIONS(179),
        [sym__digits] = ACTIONS(179),
        [anon_sym_BANG] = ACTIONS(179),
        [anon_sym_DQUOTE] = ACTIONS(179),
        [anon_sym_POUND] = ACTIONS(179),
        [anon_sym_DOLLAR] = ACTIONS(179),
        [anon_sym_PERCENT] = ACTIONS(179),
        [anon_sym_AMP] = ACTIONS(179),
        [anon_sym_SQUOTE] = ACTIONS(179),
        [anon_sym_LPAREN] = ACTIONS(179),
        [anon_sym_RPAREN] = ACTIONS(179),
        [anon_sym_STAR] = ACTIONS(179),
        [anon_sym_PLUS] = ACTIONS(179),
        [anon_sym_COMMA] = ACTIONS(179),
        [anon_sym_DASH] = ACTIONS(179),
        [anon_sym_DOT] = ACTIONS(179),
        [anon_sym_SLASH] = ACTIONS(179),
        [anon_sym_COLON] = ACTIONS(179),
        [anon_sym_SEMI] = ACTIONS(179),
        [anon_sym_LT] = ACTIONS(179),
        [anon_sym_EQ] = ACTIONS(179),
        [anon_sym_GT] = ACTIONS(179),
        [anon_sym_QMARK] = ACTIONS(179),
        [anon_sym_AT] = ACTIONS(179),
        [anon_sym_LBRACK] = ACTIONS(179),
        [anon_sym_BSLASH] = ACTIONS(179),
        [anon_sym_RBRACK] = ACTIONS(179),
        [anon_sym_CARET] = ACTIONS(179),
        [anon_sym__] = ACTIONS(179),
        [anon_sym_BQUOTE] = ACTIONS(179),
        [anon_sym_PIPE] = ACTIONS(179),
        [anon_sym_TILDE] = ACTIONS(179),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(179),
        [anon_sym_anchor] = ACTIONS(179),
        [sym_inline_email_rx] = ACTIONS(179),
        [anon_sym_footnote] = ACTIONS(179),
        [anon_sym_footnoteref] = ACTIONS(179),
        [anon_sym_image] = ACTIONS(179),
        [anon_sym_icon] = ACTIONS(179),
        [anon_sym_kbd] = ACTIONS(179),
        [anon_sym_btn] = ACTIONS(179),
        [anon_sym_http] = ACTIONS(179),
        [anon_sym_https] = ACTIONS(179),
        [anon_sym_file] = ACTIONS(179),
        [anon_sym_ftp] = ACTIONS(179),
        [anon_sym_irc] = ACTIONS(179),
        [anon_sym_link] = ACTIONS(179),
        [anon_sym_mailto] = ACTIONS(179),
        [anon_sym_stem] = ACTIONS(179),
        [anon_sym_latexmath] = ACTIONS(179),
        [anon_sym_asciimath] = ACTIONS(179),
        [anon_sym_menu] = ACTIONS(179),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(179),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(179),
        [anon_sym_pass] = ACTIONS(179),
    },
    [23] = {
        [ts_builtin_sym_end] = ACTIONS(181),
        [anon_sym_LBRACE] = ACTIONS(183),
        [anon_sym_RBRACE] = ACTIONS(183),
        [sym__word_no_digit] = ACTIONS(183),
        [sym__digits] = ACTIONS(183),
        [anon_sym_BANG] = ACTIONS(183),
        [anon_sym_DQUOTE] = ACTIONS(183),
        [anon_sym_POUND] = ACTIONS(183),
        [anon_sym_DOLLAR] = ACTIONS(183),
        [anon_sym_PERCENT] = ACTIONS(183),
        [anon_sym_AMP] = ACTIONS(183),
        [anon_sym_SQUOTE] = ACTIONS(183),
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_RPAREN] = ACTIONS(183),
        [anon_sym_STAR] = ACTIONS(183),
        [anon_sym_PLUS] = ACTIONS(183),
        [anon_sym_COMMA] = ACTIONS(183),
        [anon_sym_DASH] = ACTIONS(183),
        [anon_sym_DOT] = ACTIONS(183),
        [anon_sym_SLASH] = ACTIONS(183),
        [anon_sym_COLON] = ACTIONS(183),
        [anon_sym_SEMI] = ACTIONS(183),
        [anon_sym_LT] = ACTIONS(183),
        [anon_sym_EQ] = ACTIONS(183),
        [anon_sym_GT] = ACTIONS(183),
        [anon_sym_QMARK] = ACTIONS(183),
        [anon_sym_AT] = ACTIONS(183),
        [anon_sym_LBRACK] = ACTIONS(183),
        [anon_sym_BSLASH] = ACTIONS(183),
        [anon_sym_RBRACK] = ACTIONS(183),
        [anon_sym_CARET] = ACTIONS(183),
        [anon_sym__] = ACTIONS(183),
        [anon_sym_BQUOTE] = ACTIONS(183),
        [anon_sym_PIPE] = ACTIONS(183),
        [anon_sym_TILDE] = ACTIONS(183),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(183),
        [anon_sym_anchor] = ACTIONS(183),
        [sym_inline_email_rx] = ACTIONS(183),
        [anon_sym_footnote] = ACTIONS(183),
        [anon_sym_footnoteref] = ACTIONS(183),
        [anon_sym_image] = ACTIONS(183),
        [anon_sym_icon] = ACTIONS(183),
        [anon_sym_kbd] = ACTIONS(183),
        [anon_sym_btn] = ACTIONS(183),
        [anon_sym_http] = ACTIONS(183),
        [anon_sym_https] = ACTIONS(183),
        [anon_sym_file] = ACTIONS(183),
        [anon_sym_ftp] = ACTIONS(183),
        [anon_sym_irc] = ACTIONS(183),
        [anon_sym_link] = ACTIONS(183),
        [anon_sym_mailto] = ACTIONS(183),
        [anon_sym_stem] = ACTIONS(183),
        [anon_sym_latexmath] = ACTIONS(183),
        [anon_sym_asciimath] = ACTIONS(183),
        [anon_sym_menu] = ACTIONS(183),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(183),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(183),
        [anon_sym_pass] = ACTIONS(183),
    },
    [24] = {
        [ts_builtin_sym_end] = ACTIONS(185),
        [anon_sym_LBRACE] = ACTIONS(187),
        [anon_sym_RBRACE] = ACTIONS(187),
        [sym__word_no_digit] = ACTIONS(187),
        [sym__digits] = ACTIONS(187),
        [anon_sym_BANG] = ACTIONS(187),
        [anon_sym_DQUOTE] = ACTIONS(187),
        [anon_sym_POUND] = ACTIONS(187),
        [anon_sym_DOLLAR] = ACTIONS(187),
        [anon_sym_PERCENT] = ACTIONS(187),
        [anon_sym_AMP] = ACTIONS(187),
        [anon_sym_SQUOTE] = ACTIONS(187),
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_RPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(187),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_COMMA] = ACTIONS(187),
        [anon_sym_DASH] = ACTIONS(187),
        [anon_sym_DOT] = ACTIONS(187),
        [anon_sym_SLASH] = ACTIONS(187),
        [anon_sym_COLON] = ACTIONS(187),
        [anon_sym_SEMI] = ACTIONS(187),
        [anon_sym_LT] = ACTIONS(187),
        [anon_sym_EQ] = ACTIONS(187),
        [anon_sym_GT] = ACTIONS(187),
        [anon_sym_QMARK] = ACTIONS(187),
        [anon_sym_AT] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(187),
        [anon_sym_BSLASH] = ACTIONS(187),
        [anon_sym_RBRACK] = ACTIONS(187),
        [anon_sym_CARET] = ACTIONS(187),
        [anon_sym__] = ACTIONS(187),
        [anon_sym_BQUOTE] = ACTIONS(187),
        [anon_sym_PIPE] = ACTIONS(187),
        [anon_sym_TILDE] = ACTIONS(187),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(187),
        [anon_sym_anchor] = ACTIONS(187),
        [sym_inline_email_rx] = ACTIONS(187),
        [anon_sym_footnote] = ACTIONS(187),
        [anon_sym_footnoteref] = ACTIONS(187),
        [anon_sym_image] = ACTIONS(187),
        [anon_sym_icon] = ACTIONS(187),
        [anon_sym_kbd] = ACTIONS(187),
        [anon_sym_btn] = ACTIONS(187),
        [anon_sym_http] = ACTIONS(187),
        [anon_sym_https] = ACTIONS(187),
        [anon_sym_file] = ACTIONS(187),
        [anon_sym_ftp] = ACTIONS(187),
        [anon_sym_irc] = ACTIONS(187),
        [anon_sym_link] = ACTIONS(187),
        [anon_sym_mailto] = ACTIONS(187),
        [anon_sym_stem] = ACTIONS(187),
        [anon_sym_latexmath] = ACTIONS(187),
        [anon_sym_asciimath] = ACTIONS(187),
        [anon_sym_menu] = ACTIONS(187),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(187),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(187),
        [anon_sym_pass] = ACTIONS(187),
    },
    [25] = {
        [ts_builtin_sym_end] = ACTIONS(189),
        [anon_sym_LBRACE] = ACTIONS(191),
        [anon_sym_RBRACE] = ACTIONS(191),
        [sym__word_no_digit] = ACTIONS(191),
        [sym__digits] = ACTIONS(191),
        [anon_sym_BANG] = ACTIONS(191),
        [anon_sym_DQUOTE] = ACTIONS(191),
        [anon_sym_POUND] = ACTIONS(191),
        [anon_sym_DOLLAR] = ACTIONS(191),
        [anon_sym_PERCENT] = ACTIONS(191),
        [anon_sym_AMP] = ACTIONS(191),
        [anon_sym_SQUOTE] = ACTIONS(191),
        [anon_sym_LPAREN] = ACTIONS(191),
        [anon_sym_RPAREN] = ACTIONS(191),
        [anon_sym_STAR] = ACTIONS(191),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_COMMA] = ACTIONS(191),
        [anon_sym_DASH] = ACTIONS(191),
        [anon_sym_DOT] = ACTIONS(191),
        [anon_sym_SLASH] = ACTIONS(191),
        [anon_sym_COLON] = ACTIONS(191),
        [anon_sym_SEMI] = ACTIONS(191),
        [anon_sym_LT] = ACTIONS(191),
        [anon_sym_EQ] = ACTIONS(191),
        [anon_sym_GT] = ACTIONS(191),
        [anon_sym_QMARK] = ACTIONS(191),
        [anon_sym_AT] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(191),
        [anon_sym_BSLASH] = ACTIONS(191),
        [anon_sym_RBRACK] = ACTIONS(191),
        [anon_sym_CARET] = ACTIONS(191),
        [anon_sym__] = ACTIONS(191),
        [anon_sym_BQUOTE] = ACTIONS(191),
        [anon_sym_PIPE] = ACTIONS(191),
        [anon_sym_TILDE] = ACTIONS(191),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(191),
        [anon_sym_anchor] = ACTIONS(191),
        [sym_inline_email_rx] = ACTIONS(191),
        [anon_sym_footnote] = ACTIONS(191),
        [anon_sym_footnoteref] = ACTIONS(191),
        [anon_sym_image] = ACTIONS(191),
        [anon_sym_icon] = ACTIONS(191),
        [anon_sym_kbd] = ACTIONS(191),
        [anon_sym_btn] = ACTIONS(191),
        [anon_sym_http] = ACTIONS(191),
        [anon_sym_https] = ACTIONS(191),
        [anon_sym_file] = ACTIONS(191),
        [anon_sym_ftp] = ACTIONS(191),
        [anon_sym_irc] = ACTIONS(191),
        [anon_sym_link] = ACTIONS(191),
        [anon_sym_mailto] = ACTIONS(191),
        [anon_sym_stem] = ACTIONS(191),
        [anon_sym_latexmath] = ACTIONS(191),
        [anon_sym_asciimath] = ACTIONS(191),
        [anon_sym_menu] = ACTIONS(191),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(191),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(191),
        [anon_sym_pass] = ACTIONS(191),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(193),
        [anon_sym_LBRACE] = ACTIONS(195),
        [anon_sym_RBRACE] = ACTIONS(195),
        [sym__word_no_digit] = ACTIONS(195),
        [sym__digits] = ACTIONS(195),
        [anon_sym_BANG] = ACTIONS(195),
        [anon_sym_DQUOTE] = ACTIONS(195),
        [anon_sym_POUND] = ACTIONS(195),
        [anon_sym_DOLLAR] = ACTIONS(195),
        [anon_sym_PERCENT] = ACTIONS(195),
        [anon_sym_AMP] = ACTIONS(195),
        [anon_sym_SQUOTE] = ACTIONS(195),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(195),
        [anon_sym_STAR] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(195),
        [anon_sym_DASH] = ACTIONS(195),
        [anon_sym_DOT] = ACTIONS(195),
        [anon_sym_SLASH] = ACTIONS(195),
        [anon_sym_COLON] = ACTIONS(195),
        [anon_sym_SEMI] = ACTIONS(195),
        [anon_sym_LT] = ACTIONS(195),
        [anon_sym_EQ] = ACTIONS(195),
        [anon_sym_GT] = ACTIONS(195),
        [anon_sym_QMARK] = ACTIONS(195),
        [anon_sym_AT] = ACTIONS(195),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_BSLASH] = ACTIONS(195),
        [anon_sym_RBRACK] = ACTIONS(195),
        [anon_sym_CARET] = ACTIONS(195),
        [anon_sym__] = ACTIONS(195),
        [anon_sym_BQUOTE] = ACTIONS(195),
        [anon_sym_PIPE] = ACTIONS(195),
        [anon_sym_TILDE] = ACTIONS(195),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(195),
        [anon_sym_anchor] = ACTIONS(195),
        [sym_inline_email_rx] = ACTIONS(195),
        [anon_sym_footnote] = ACTIONS(195),
        [anon_sym_footnoteref] = ACTIONS(195),
        [anon_sym_image] = ACTIONS(195),
        [anon_sym_icon] = ACTIONS(195),
        [anon_sym_kbd] = ACTIONS(195),
        [anon_sym_btn] = ACTIONS(195),
        [anon_sym_http] = ACTIONS(195),
        [anon_sym_https] = ACTIONS(195),
        [anon_sym_file] = ACTIONS(195),
        [anon_sym_ftp] = ACTIONS(195),
        [anon_sym_irc] = ACTIONS(195),
        [anon_sym_link] = ACTIONS(195),
        [anon_sym_mailto] = ACTIONS(195),
        [anon_sym_stem] = ACTIONS(195),
        [anon_sym_latexmath] = ACTIONS(195),
        [anon_sym_asciimath] = ACTIONS(195),
        [anon_sym_menu] = ACTIONS(195),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(195),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(195),
        [anon_sym_pass] = ACTIONS(195),
    },
    [27] = {
        [ts_builtin_sym_end] = ACTIONS(197),
        [anon_sym_LBRACE] = ACTIONS(199),
        [anon_sym_RBRACE] = ACTIONS(199),
        [sym__word_no_digit] = ACTIONS(199),
        [sym__digits] = ACTIONS(199),
        [anon_sym_BANG] = ACTIONS(199),
        [anon_sym_DQUOTE] = ACTIONS(199),
        [anon_sym_POUND] = ACTIONS(199),
        [anon_sym_DOLLAR] = ACTIONS(199),
        [anon_sym_PERCENT] = ACTIONS(199),
        [anon_sym_AMP] = ACTIONS(199),
        [anon_sym_SQUOTE] = ACTIONS(199),
        [anon_sym_LPAREN] = ACTIONS(199),
        [anon_sym_RPAREN] = ACTIONS(199),
        [anon_sym_STAR] = ACTIONS(199),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_COMMA] = ACTIONS(199),
        [anon_sym_DASH] = ACTIONS(199),
        [anon_sym_DOT] = ACTIONS(199),
        [anon_sym_SLASH] = ACTIONS(199),
        [anon_sym_COLON] = ACTIONS(199),
        [anon_sym_SEMI] = ACTIONS(199),
        [anon_sym_LT] = ACTIONS(199),
        [anon_sym_EQ] = ACTIONS(199),
        [anon_sym_GT] = ACTIONS(199),
        [anon_sym_QMARK] = ACTIONS(199),
        [anon_sym_AT] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(199),
        [anon_sym_BSLASH] = ACTIONS(199),
        [anon_sym_RBRACK] = ACTIONS(199),
        [anon_sym_CARET] = ACTIONS(199),
        [anon_sym__] = ACTIONS(199),
        [anon_sym_BQUOTE] = ACTIONS(199),
        [anon_sym_PIPE] = ACTIONS(199),
        [anon_sym_TILDE] = ACTIONS(199),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(199),
        [anon_sym_anchor] = ACTIONS(199),
        [sym_inline_email_rx] = ACTIONS(199),
        [anon_sym_footnote] = ACTIONS(199),
        [anon_sym_footnoteref] = ACTIONS(199),
        [anon_sym_image] = ACTIONS(199),
        [anon_sym_icon] = ACTIONS(199),
        [anon_sym_kbd] = ACTIONS(199),
        [anon_sym_btn] = ACTIONS(199),
        [anon_sym_http] = ACTIONS(199),
        [anon_sym_https] = ACTIONS(199),
        [anon_sym_file] = ACTIONS(199),
        [anon_sym_ftp] = ACTIONS(199),
        [anon_sym_irc] = ACTIONS(199),
        [anon_sym_link] = ACTIONS(199),
        [anon_sym_mailto] = ACTIONS(199),
        [anon_sym_stem] = ACTIONS(199),
        [anon_sym_latexmath] = ACTIONS(199),
        [anon_sym_asciimath] = ACTIONS(199),
        [anon_sym_menu] = ACTIONS(199),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(199),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(199),
        [anon_sym_pass] = ACTIONS(199),
    },
    [28] = {
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
        [anon_sym_http] = ACTIONS(128),
        [anon_sym_https] = ACTIONS(128),
        [anon_sym_file] = ACTIONS(128),
        [anon_sym_ftp] = ACTIONS(128),
        [anon_sym_irc] = ACTIONS(128),
        [anon_sym_link] = ACTIONS(128),
        [anon_sym_mailto] = ACTIONS(128),
        [anon_sym_stem] = ACTIONS(128),
        [anon_sym_latexmath] = ACTIONS(128),
        [anon_sym_asciimath] = ACTIONS(128),
        [anon_sym_menu] = ACTIONS(128),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(128),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(128),
        [anon_sym_pass] = ACTIONS(128),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(201),
        [anon_sym_LBRACE] = ACTIONS(203),
        [anon_sym_RBRACE] = ACTIONS(203),
        [sym__word_no_digit] = ACTIONS(203),
        [sym__digits] = ACTIONS(203),
        [anon_sym_BANG] = ACTIONS(203),
        [anon_sym_DQUOTE] = ACTIONS(203),
        [anon_sym_POUND] = ACTIONS(203),
        [anon_sym_DOLLAR] = ACTIONS(203),
        [anon_sym_PERCENT] = ACTIONS(203),
        [anon_sym_AMP] = ACTIONS(203),
        [anon_sym_SQUOTE] = ACTIONS(203),
        [anon_sym_LPAREN] = ACTIONS(203),
        [anon_sym_RPAREN] = ACTIONS(203),
        [anon_sym_STAR] = ACTIONS(203),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(203),
        [anon_sym_DASH] = ACTIONS(203),
        [anon_sym_DOT] = ACTIONS(203),
        [anon_sym_SLASH] = ACTIONS(203),
        [anon_sym_COLON] = ACTIONS(203),
        [anon_sym_SEMI] = ACTIONS(203),
        [anon_sym_LT] = ACTIONS(203),
        [anon_sym_EQ] = ACTIONS(203),
        [anon_sym_GT] = ACTIONS(203),
        [anon_sym_QMARK] = ACTIONS(203),
        [anon_sym_AT] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(203),
        [anon_sym_BSLASH] = ACTIONS(203),
        [anon_sym_RBRACK] = ACTIONS(203),
        [anon_sym_CARET] = ACTIONS(203),
        [anon_sym__] = ACTIONS(203),
        [anon_sym_BQUOTE] = ACTIONS(203),
        [anon_sym_PIPE] = ACTIONS(203),
        [anon_sym_TILDE] = ACTIONS(203),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(203),
        [anon_sym_anchor] = ACTIONS(203),
        [sym_inline_email_rx] = ACTIONS(203),
        [anon_sym_footnote] = ACTIONS(203),
        [anon_sym_footnoteref] = ACTIONS(203),
        [anon_sym_image] = ACTIONS(203),
        [anon_sym_icon] = ACTIONS(203),
        [anon_sym_kbd] = ACTIONS(203),
        [anon_sym_btn] = ACTIONS(203),
        [anon_sym_http] = ACTIONS(203),
        [anon_sym_https] = ACTIONS(203),
        [anon_sym_file] = ACTIONS(203),
        [anon_sym_ftp] = ACTIONS(203),
        [anon_sym_irc] = ACTIONS(203),
        [anon_sym_link] = ACTIONS(203),
        [anon_sym_mailto] = ACTIONS(203),
        [anon_sym_stem] = ACTIONS(203),
        [anon_sym_latexmath] = ACTIONS(203),
        [anon_sym_asciimath] = ACTIONS(203),
        [anon_sym_menu] = ACTIONS(203),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(203),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(203),
        [anon_sym_pass] = ACTIONS(203),
    },
    [30] = {
        [ts_builtin_sym_end] = ACTIONS(205),
        [anon_sym_LBRACE] = ACTIONS(207),
        [anon_sym_RBRACE] = ACTIONS(207),
        [sym__word_no_digit] = ACTIONS(207),
        [sym__digits] = ACTIONS(207),
        [anon_sym_BANG] = ACTIONS(207),
        [anon_sym_DQUOTE] = ACTIONS(207),
        [anon_sym_POUND] = ACTIONS(207),
        [anon_sym_DOLLAR] = ACTIONS(207),
        [anon_sym_PERCENT] = ACTIONS(207),
        [anon_sym_AMP] = ACTIONS(207),
        [anon_sym_SQUOTE] = ACTIONS(207),
        [anon_sym_LPAREN] = ACTIONS(207),
        [anon_sym_RPAREN] = ACTIONS(207),
        [anon_sym_STAR] = ACTIONS(207),
        [anon_sym_PLUS] = ACTIONS(207),
        [anon_sym_COMMA] = ACTIONS(207),
        [anon_sym_DASH] = ACTIONS(207),
        [anon_sym_DOT] = ACTIONS(207),
        [anon_sym_SLASH] = ACTIONS(207),
        [anon_sym_COLON] = ACTIONS(207),
        [anon_sym_SEMI] = ACTIONS(207),
        [anon_sym_LT] = ACTIONS(207),
        [anon_sym_EQ] = ACTIONS(207),
        [anon_sym_GT] = ACTIONS(207),
        [anon_sym_QMARK] = ACTIONS(207),
        [anon_sym_AT] = ACTIONS(207),
        [anon_sym_LBRACK] = ACTIONS(207),
        [anon_sym_BSLASH] = ACTIONS(207),
        [anon_sym_RBRACK] = ACTIONS(207),
        [anon_sym_CARET] = ACTIONS(207),
        [anon_sym__] = ACTIONS(207),
        [anon_sym_BQUOTE] = ACTIONS(207),
        [anon_sym_PIPE] = ACTIONS(207),
        [anon_sym_TILDE] = ACTIONS(207),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(207),
        [anon_sym_anchor] = ACTIONS(207),
        [sym_inline_email_rx] = ACTIONS(207),
        [anon_sym_footnote] = ACTIONS(207),
        [anon_sym_footnoteref] = ACTIONS(207),
        [anon_sym_image] = ACTIONS(207),
        [anon_sym_icon] = ACTIONS(207),
        [anon_sym_kbd] = ACTIONS(207),
        [anon_sym_btn] = ACTIONS(207),
        [anon_sym_http] = ACTIONS(207),
        [anon_sym_https] = ACTIONS(207),
        [anon_sym_file] = ACTIONS(207),
        [anon_sym_ftp] = ACTIONS(207),
        [anon_sym_irc] = ACTIONS(207),
        [anon_sym_link] = ACTIONS(207),
        [anon_sym_mailto] = ACTIONS(207),
        [anon_sym_stem] = ACTIONS(207),
        [anon_sym_latexmath] = ACTIONS(207),
        [anon_sym_asciimath] = ACTIONS(207),
        [anon_sym_menu] = ACTIONS(207),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(207),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(207),
        [anon_sym_pass] = ACTIONS(207),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_LBRACE] = ACTIONS(211),
        [anon_sym_RBRACE] = ACTIONS(211),
        [sym__word_no_digit] = ACTIONS(211),
        [sym__digits] = ACTIONS(211),
        [anon_sym_BANG] = ACTIONS(211),
        [anon_sym_DQUOTE] = ACTIONS(211),
        [anon_sym_POUND] = ACTIONS(211),
        [anon_sym_DOLLAR] = ACTIONS(211),
        [anon_sym_PERCENT] = ACTIONS(211),
        [anon_sym_AMP] = ACTIONS(211),
        [anon_sym_SQUOTE] = ACTIONS(211),
        [anon_sym_LPAREN] = ACTIONS(211),
        [anon_sym_RPAREN] = ACTIONS(211),
        [anon_sym_STAR] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_DASH] = ACTIONS(211),
        [anon_sym_DOT] = ACTIONS(211),
        [anon_sym_SLASH] = ACTIONS(211),
        [anon_sym_COLON] = ACTIONS(211),
        [anon_sym_SEMI] = ACTIONS(211),
        [anon_sym_LT] = ACTIONS(211),
        [anon_sym_EQ] = ACTIONS(211),
        [anon_sym_GT] = ACTIONS(211),
        [anon_sym_QMARK] = ACTIONS(211),
        [anon_sym_AT] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(211),
        [anon_sym_BSLASH] = ACTIONS(211),
        [anon_sym_RBRACK] = ACTIONS(211),
        [anon_sym_CARET] = ACTIONS(211),
        [anon_sym__] = ACTIONS(211),
        [anon_sym_BQUOTE] = ACTIONS(211),
        [anon_sym_PIPE] = ACTIONS(211),
        [anon_sym_TILDE] = ACTIONS(211),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(211),
        [anon_sym_anchor] = ACTIONS(211),
        [sym_inline_email_rx] = ACTIONS(211),
        [anon_sym_footnote] = ACTIONS(211),
        [anon_sym_footnoteref] = ACTIONS(211),
        [anon_sym_image] = ACTIONS(211),
        [anon_sym_icon] = ACTIONS(211),
        [anon_sym_kbd] = ACTIONS(211),
        [anon_sym_btn] = ACTIONS(211),
        [anon_sym_http] = ACTIONS(211),
        [anon_sym_https] = ACTIONS(211),
        [anon_sym_file] = ACTIONS(211),
        [anon_sym_ftp] = ACTIONS(211),
        [anon_sym_irc] = ACTIONS(211),
        [anon_sym_link] = ACTIONS(211),
        [anon_sym_mailto] = ACTIONS(211),
        [anon_sym_stem] = ACTIONS(211),
        [anon_sym_latexmath] = ACTIONS(211),
        [anon_sym_asciimath] = ACTIONS(211),
        [anon_sym_menu] = ACTIONS(211),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(211),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(211),
        [anon_sym_pass] = ACTIONS(211),
    },
    [32] = {
        [ts_builtin_sym_end] = ACTIONS(213),
        [anon_sym_LBRACE] = ACTIONS(215),
        [anon_sym_RBRACE] = ACTIONS(215),
        [sym__word_no_digit] = ACTIONS(215),
        [sym__digits] = ACTIONS(215),
        [anon_sym_BANG] = ACTIONS(215),
        [anon_sym_DQUOTE] = ACTIONS(215),
        [anon_sym_POUND] = ACTIONS(215),
        [anon_sym_DOLLAR] = ACTIONS(215),
        [anon_sym_PERCENT] = ACTIONS(215),
        [anon_sym_AMP] = ACTIONS(215),
        [anon_sym_SQUOTE] = ACTIONS(215),
        [anon_sym_LPAREN] = ACTIONS(215),
        [anon_sym_RPAREN] = ACTIONS(215),
        [anon_sym_STAR] = ACTIONS(215),
        [anon_sym_PLUS] = ACTIONS(215),
        [anon_sym_COMMA] = ACTIONS(215),
        [anon_sym_DASH] = ACTIONS(215),
        [anon_sym_DOT] = ACTIONS(215),
        [anon_sym_SLASH] = ACTIONS(215),
        [anon_sym_COLON] = ACTIONS(215),
        [anon_sym_SEMI] = ACTIONS(215),
        [anon_sym_LT] = ACTIONS(215),
        [anon_sym_EQ] = ACTIONS(215),
        [anon_sym_GT] = ACTIONS(215),
        [anon_sym_QMARK] = ACTIONS(215),
        [anon_sym_AT] = ACTIONS(215),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_BSLASH] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(215),
        [anon_sym_CARET] = ACTIONS(215),
        [anon_sym__] = ACTIONS(215),
        [anon_sym_BQUOTE] = ACTIONS(215),
        [anon_sym_PIPE] = ACTIONS(215),
        [anon_sym_TILDE] = ACTIONS(215),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(215),
        [anon_sym_anchor] = ACTIONS(215),
        [sym_inline_email_rx] = ACTIONS(215),
        [anon_sym_footnote] = ACTIONS(215),
        [anon_sym_footnoteref] = ACTIONS(215),
        [anon_sym_image] = ACTIONS(215),
        [anon_sym_icon] = ACTIONS(215),
        [anon_sym_kbd] = ACTIONS(215),
        [anon_sym_btn] = ACTIONS(215),
        [anon_sym_http] = ACTIONS(215),
        [anon_sym_https] = ACTIONS(215),
        [anon_sym_file] = ACTIONS(215),
        [anon_sym_ftp] = ACTIONS(215),
        [anon_sym_irc] = ACTIONS(215),
        [anon_sym_link] = ACTIONS(215),
        [anon_sym_mailto] = ACTIONS(215),
        [anon_sym_stem] = ACTIONS(215),
        [anon_sym_latexmath] = ACTIONS(215),
        [anon_sym_asciimath] = ACTIONS(215),
        [anon_sym_menu] = ACTIONS(215),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(215),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(215),
        [anon_sym_pass] = ACTIONS(215),
    },
    [33] = {
        [ts_builtin_sym_end] = ACTIONS(217),
        [anon_sym_LBRACE] = ACTIONS(219),
        [anon_sym_RBRACE] = ACTIONS(219),
        [sym__word_no_digit] = ACTIONS(219),
        [sym__digits] = ACTIONS(219),
        [anon_sym_BANG] = ACTIONS(219),
        [anon_sym_DQUOTE] = ACTIONS(219),
        [anon_sym_POUND] = ACTIONS(219),
        [anon_sym_DOLLAR] = ACTIONS(219),
        [anon_sym_PERCENT] = ACTIONS(219),
        [anon_sym_AMP] = ACTIONS(219),
        [anon_sym_SQUOTE] = ACTIONS(219),
        [anon_sym_LPAREN] = ACTIONS(219),
        [anon_sym_RPAREN] = ACTIONS(219),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_DASH] = ACTIONS(219),
        [anon_sym_DOT] = ACTIONS(219),
        [anon_sym_SLASH] = ACTIONS(219),
        [anon_sym_COLON] = ACTIONS(219),
        [anon_sym_SEMI] = ACTIONS(219),
        [anon_sym_LT] = ACTIONS(219),
        [anon_sym_EQ] = ACTIONS(219),
        [anon_sym_GT] = ACTIONS(219),
        [anon_sym_QMARK] = ACTIONS(219),
        [anon_sym_AT] = ACTIONS(219),
        [anon_sym_LBRACK] = ACTIONS(219),
        [anon_sym_BSLASH] = ACTIONS(219),
        [anon_sym_RBRACK] = ACTIONS(219),
        [anon_sym_CARET] = ACTIONS(219),
        [anon_sym__] = ACTIONS(219),
        [anon_sym_BQUOTE] = ACTIONS(219),
        [anon_sym_PIPE] = ACTIONS(219),
        [anon_sym_TILDE] = ACTIONS(219),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(219),
        [anon_sym_anchor] = ACTIONS(219),
        [sym_inline_email_rx] = ACTIONS(219),
        [anon_sym_footnote] = ACTIONS(219),
        [anon_sym_footnoteref] = ACTIONS(219),
        [anon_sym_image] = ACTIONS(219),
        [anon_sym_icon] = ACTIONS(219),
        [anon_sym_kbd] = ACTIONS(219),
        [anon_sym_btn] = ACTIONS(219),
        [anon_sym_http] = ACTIONS(219),
        [anon_sym_https] = ACTIONS(219),
        [anon_sym_file] = ACTIONS(219),
        [anon_sym_ftp] = ACTIONS(219),
        [anon_sym_irc] = ACTIONS(219),
        [anon_sym_link] = ACTIONS(219),
        [anon_sym_mailto] = ACTIONS(219),
        [anon_sym_stem] = ACTIONS(219),
        [anon_sym_latexmath] = ACTIONS(219),
        [anon_sym_asciimath] = ACTIONS(219),
        [anon_sym_menu] = ACTIONS(219),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(219),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(219),
        [anon_sym_pass] = ACTIONS(219),
    },
    [34] = {
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
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(106),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(106),
        [anon_sym_pass] = ACTIONS(106),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 5,
    ACTIONS(221),
    1,
    anon_sym_PLUS,
    ACTIONS(223),
    1,
    anon_sym_COMMA,
    ACTIONS(225),
    1,
    anon_sym_RBRACK,
    STATE(42),
    1,
    aux_sym_inline_kbd_macro_repeat2,
    STATE(43),
    1,
    aux_sym_inline_kbd_macro_repeat1,
    [16] = 3,
    ACTIONS(227),
    1,
    anon_sym_RBRACK,
    STATE(36),
    1,
    aux_sym_inline_image_macro_repeat1,
    ACTIONS(229),
    3,
    aux_sym_inline_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [28] = 3,
    ACTIONS(232),
    1,
    anon_sym_RBRACK,
    STATE(38),
    1,
    aux_sym_inline_image_macro_repeat1,
    ACTIONS(234),
    3,
    aux_sym_inline_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [40] = 3,
    ACTIONS(236),
    1,
    anon_sym_RBRACK,
    STATE(36),
    1,
    aux_sym_inline_image_macro_repeat1,
    ACTIONS(238),
    3,
    aux_sym_inline_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [52] = 3,
    ACTIONS(240),
    1,
    anon_sym_DOT,
    STATE(41),
    1,
    aux_sym_link_repeat1,
    ACTIONS(110),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [63] = 3,
    ACTIONS(240),
    1,
    anon_sym_DOT,
    STATE(39),
    1,
    aux_sym_link_repeat1,
    ACTIONS(116),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [74] = 3,
    ACTIONS(242),
    1,
    anon_sym_DOT,
    STATE(41),
    1,
    aux_sym_link_repeat1,
    ACTIONS(126),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [85] = 3,
    ACTIONS(223),
    1,
    anon_sym_COMMA,
    ACTIONS(245),
    1,
    anon_sym_RBRACK,
    STATE(49),
    1,
    aux_sym_inline_kbd_macro_repeat2,
    [95] = 3,
    ACTIONS(221),
    1,
    anon_sym_PLUS,
    ACTIONS(245),
    1,
    anon_sym_RBRACK,
    STATE(48),
    1,
    aux_sym_inline_kbd_macro_repeat1,
    [105] = 1,
    ACTIONS(126),
    3,
    anon_sym_DQUOTE,
    anon_sym_DOT,
    anon_sym_LBRACK,
    [111] = 1,
    ACTIONS(247),
    3,
    anon_sym_PLUS,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [117] = 2,
    STATE(54),
    1,
    sym_key,
    ACTIONS(249),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [125] = 2,
    STATE(51),
    1,
    sym_key,
    ACTIONS(249),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [133] = 3,
    ACTIONS(251),
    1,
    anon_sym_PLUS,
    ACTIONS(254),
    1,
    anon_sym_RBRACK,
    STATE(48),
    1,
    aux_sym_inline_kbd_macro_repeat1,
    [143] = 3,
    ACTIONS(256),
    1,
    anon_sym_COMMA,
    ACTIONS(259),
    1,
    anon_sym_RBRACK,
    STATE(49),
    1,
    aux_sym_inline_kbd_macro_repeat2,
    [153] = 2,
    STATE(35),
    1,
    sym_key,
    ACTIONS(249),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [161] = 1,
    ACTIONS(254),
    2,
    anon_sym_PLUS,
    anon_sym_RBRACK,
    [166] = 2,
    ACTIONS(261),
    1,
    anon_sym_COMMA,
    ACTIONS(263),
    1,
    anon_sym_RBRACK,
    [173] = 2,
    ACTIONS(265),
    1,
    aux_sym_inline_anchor_rx_token2,
    ACTIONS(267),
    1,
    aux_sym_inline_footnote_macro_token1,
    [180] = 1,
    ACTIONS(259),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [185] = 2,
    ACTIONS(269),
    1,
    aux_sym_inline_anchor_rx_token2,
    ACTIONS(271),
    1,
    aux_sym_inline_footnote_macro_token1,
    [192] = 2,
    ACTIONS(273),
    1,
    aux_sym_replacement_token1,
    ACTIONS(275),
    1,
    anon_sym_LBRACK,
    [199] = 2,
    ACTIONS(277),
    1,
    anon_sym_COMMA,
    ACTIONS(279),
    1,
    anon_sym_RBRACK_RBRACK,
    [206] = 2,
    ACTIONS(281),
    1,
    anon_sym_DQUOTE,
    ACTIONS(283),
    1,
    anon_sym_LBRACK,
    [213] = 2,
    ACTIONS(285),
    1,
    anon_sym_COMMA,
    ACTIONS(287),
    1,
    anon_sym_RBRACK,
    [220] = 1,
    ACTIONS(289),
    1,
    aux_sym_replacement_token1,
    [224] = 1,
    ACTIONS(287),
    1,
    anon_sym_RBRACK,
    [228] = 1,
    ACTIONS(291),
    1,
    aux_sym_replacement_token1,
    [232] = 1,
    ACTIONS(293),
    1,
    aux_sym_inline_anchor_rx_token2,
    [236] = 1,
    ACTIONS(295),
    1,
    anon_sym_RBRACK_RBRACK,
    [240] = 1,
    ACTIONS(297),
    1,
    anon_sym_RBRACK,
    [244] = 1,
    ACTIONS(299),
    1,
    sym__link_component,
    [248] = 1,
    ACTIONS(301),
    1,
    anon_sym_RBRACK,
    [252] = 1,
    ACTIONS(303),
    1,
    aux_sym_inline_anchor_rx_token2,
    [256] = 1,
    ACTIONS(305),
    1,
    anon_sym_RBRACK,
    [260] = 1,
    ACTIONS(307),
    1,
    aux_sym_inline_anchor_rx_token2,
    [264] = 1,
    ACTIONS(309),
    1,
    aux_sym_inline_anchor_rx_token2,
    [268] = 1,
    ACTIONS(311),
    1,
    anon_sym_LBRACK,
    [272] = 1,
    ACTIONS(313),
    1,
    anon_sym_DQUOTE,
    [276] = 1,
    ACTIONS(315),
    1,
    anon_sym_LBRACK,
    [280] = 1,
    ACTIONS(317),
    1,
    anon_sym_RBRACK,
    [284] = 1,
    ACTIONS(263),
    1,
    anon_sym_RBRACK,
    [288] = 1,
    ACTIONS(319),
    1,
    aux_sym_inline_anchor_rx_token2,
    [292] = 1,
    ACTIONS(321),
    1,
    anon_sym_LBRACK,
    [296] = 1,
    ACTIONS(323),
    1,
    aux_sym_inline_footnote_macro_token2,
    [300] = 1,
    ACTIONS(325),
    1,
    anon_sym_LBRACK,
    [304] = 1,
    ACTIONS(327),
    1,
    anon_sym_LBRACK,
    [308] = 1,
    ACTIONS(329),
    1,
    anon_sym_LBRACK,
    [312] = 1,
    ACTIONS(331),
    1,
    aux_sym_inline_anchor_rx_token1,
    [316] = 1,
    ACTIONS(333),
    1,
    aux_sym_auto_link_token1,
    [320] = 1,
    ACTIONS(335),
    1,
    anon_sym_quotes,
    [324] = 1,
    ACTIONS(337),
    1,
    anon_sym_DOLLAR_DOLLAR,
    [328] = 1,
    ACTIONS(337),
    1,
    anon_sym_PLUS_PLUS_PLUS,
    [332] = 1,
    ACTIONS(339),
    1,
    aux_sym_replacement_token1,
    [336] = 1,
    ACTIONS(341),
    1,
    anon_sym_RBRACK,
    [340] = 1,
    ACTIONS(343),
    1,
    anon_sym_LBRACK,
    [344] = 1,
    ACTIONS(345),
    1,
    anon_sym_RBRACK,
    [348] = 1,
    ACTIONS(347),
    1,
    anon_sym_RBRACK,
    [352] = 1,
    ACTIONS(349),
    1,
    aux_sym_inline_link_macro_token1,
    [356] = 1,
    ACTIONS(351),
    1,
    sym__link_component,
    [360] = 1,
    ACTIONS(353),
    1,
    anon_sym_LBRACK,
    [364] = 1,
    ACTIONS(355),
    1,
    aux_sym_inline_footnote_macro_token2,
    [368] = 1,
    ACTIONS(357),
    1,
    anon_sym_RBRACK,
    [372] = 1,
    ACTIONS(359),
    1,
    aux_sym_inline_image_macro_token1,
    [376] = 1,
    ACTIONS(337),
    1,
    anon_sym_BQUOTE,
    [380] = 1,
    ACTIONS(337),
    1,
    anon_sym_PLUS,
    [384] = 1,
    ACTIONS(361),
    1,
    anon_sym_RBRACE,
    [388] = 1,
    ACTIONS(363),
    1,
    ts_builtin_sym_end,
    [392] = 1,
    ACTIONS(365),
    1,
    anon_sym_COLON,
    [396] = 1,
    ACTIONS(367),
    1,
    aux_sym_replacement_token1,
    [400] = 1,
    ACTIONS(369),
    1,
    aux_sym_replacement_token1,
    [404] = 1,
    ACTIONS(371),
    1,
    anon_sym_COLON,
    [408] = 1,
    ACTIONS(373),
    1,
    anon_sym_COLON,
    [412] = 1,
    ACTIONS(375),
    1,
    anon_sym_RBRACK,
    [416] = 1,
    ACTIONS(377),
    1,
    anon_sym_COLON,
    [420] = 1,
    ACTIONS(379),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [424] = 1,
    ACTIONS(381),
    1,
    anon_sym_COLON,
    [428] = 1,
    ACTIONS(383),
    1,
    anon_sym_COLON,
    [432] = 1,
    ACTIONS(385),
    1,
    anon_sym_COLON,
    [436] = 1,
    ACTIONS(387),
    1,
    anon_sym_COLON,
    [440] = 1,
    ACTIONS(389),
    1,
    sym__link_component,
    [444] = 1,
    ACTIONS(391),
    1,
    sym__link_component,
    [448] = 1,
    ACTIONS(393),
    1,
    anon_sym_COLON_SLASH_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(35)] = 0,
    [SMALL_STATE(36)] = 16,
    [SMALL_STATE(37)] = 28,
    [SMALL_STATE(38)] = 40,
    [SMALL_STATE(39)] = 52,
    [SMALL_STATE(40)] = 63,
    [SMALL_STATE(41)] = 74,
    [SMALL_STATE(42)] = 85,
    [SMALL_STATE(43)] = 95,
    [SMALL_STATE(44)] = 105,
    [SMALL_STATE(45)] = 111,
    [SMALL_STATE(46)] = 117,
    [SMALL_STATE(47)] = 125,
    [SMALL_STATE(48)] = 133,
    [SMALL_STATE(49)] = 143,
    [SMALL_STATE(50)] = 153,
    [SMALL_STATE(51)] = 161,
    [SMALL_STATE(52)] = 166,
    [SMALL_STATE(53)] = 173,
    [SMALL_STATE(54)] = 180,
    [SMALL_STATE(55)] = 185,
    [SMALL_STATE(56)] = 192,
    [SMALL_STATE(57)] = 199,
    [SMALL_STATE(58)] = 206,
    [SMALL_STATE(59)] = 213,
    [SMALL_STATE(60)] = 220,
    [SMALL_STATE(61)] = 224,
    [SMALL_STATE(62)] = 228,
    [SMALL_STATE(63)] = 232,
    [SMALL_STATE(64)] = 236,
    [SMALL_STATE(65)] = 240,
    [SMALL_STATE(66)] = 244,
    [SMALL_STATE(67)] = 248,
    [SMALL_STATE(68)] = 252,
    [SMALL_STATE(69)] = 256,
    [SMALL_STATE(70)] = 260,
    [SMALL_STATE(71)] = 264,
    [SMALL_STATE(72)] = 268,
    [SMALL_STATE(73)] = 272,
    [SMALL_STATE(74)] = 276,
    [SMALL_STATE(75)] = 280,
    [SMALL_STATE(76)] = 284,
    [SMALL_STATE(77)] = 288,
    [SMALL_STATE(78)] = 292,
    [SMALL_STATE(79)] = 296,
    [SMALL_STATE(80)] = 300,
    [SMALL_STATE(81)] = 304,
    [SMALL_STATE(82)] = 308,
    [SMALL_STATE(83)] = 312,
    [SMALL_STATE(84)] = 316,
    [SMALL_STATE(85)] = 320,
    [SMALL_STATE(86)] = 324,
    [SMALL_STATE(87)] = 328,
    [SMALL_STATE(88)] = 332,
    [SMALL_STATE(89)] = 336,
    [SMALL_STATE(90)] = 340,
    [SMALL_STATE(91)] = 344,
    [SMALL_STATE(92)] = 348,
    [SMALL_STATE(93)] = 352,
    [SMALL_STATE(94)] = 356,
    [SMALL_STATE(95)] = 360,
    [SMALL_STATE(96)] = 364,
    [SMALL_STATE(97)] = 368,
    [SMALL_STATE(98)] = 372,
    [SMALL_STATE(99)] = 376,
    [SMALL_STATE(100)] = 380,
    [SMALL_STATE(101)] = 384,
    [SMALL_STATE(102)] = 388,
    [SMALL_STATE(103)] = 392,
    [SMALL_STATE(104)] = 396,
    [SMALL_STATE(105)] = 400,
    [SMALL_STATE(106)] = 404,
    [SMALL_STATE(107)] = 408,
    [SMALL_STATE(108)] = 412,
    [SMALL_STATE(109)] = 416,
    [SMALL_STATE(110)] = 420,
    [SMALL_STATE(111)] = 424,
    [SMALL_STATE(112)] = 428,
    [SMALL_STATE(113)] = 432,
    [SMALL_STATE(114)] = 436,
    [SMALL_STATE(115)] = 440,
    [SMALL_STATE(116)] = 444,
    [SMALL_STATE(117)] = 448,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(4),
    [5] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(34),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(29),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(7),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(8),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(9),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(114),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(3),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(113),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(112),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(111),
    [27] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(110),
    [29] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(109),
    [31] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(107),
    [33] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(106),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(105),
    [37] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(104),
    [39] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(103),
    [41] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    [43] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(4),
    [46] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(34),
    [49] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(29),
    [52] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(7),
    [55] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(8),
    [58] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(9),
    [61] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(62),
    [64] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(114),
    [67] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(2),
    [70] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(113),
    [73] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(112),
    [76] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(111),
    [79] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(110),
    [82] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(109),
    [85] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(107),
    [88] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(106),
    [91] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(105),
    [94] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(104),
    [97] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(103),
    [100] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [102] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(2),
    [104] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [106] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [108] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(101),
    [110] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link, 4, 0, 0),
    [112] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link, 4, 0, 0),
    [114] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(66),
    [116] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link, 3, 0, 0),
    [118] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link, 3, 0, 0),
    [120] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(117),
    [122] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(100),
    [124] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(99),
    [126] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_link_repeat1, 2, 0, 0),
    [128] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_repeat1, 2, 0, 0),
    [130] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_repeat1, 2, 0, 0),
    SHIFT_REPEAT(66),
    [133] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 6, 0, 0),
    [135] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 6, 0, 0),
    [137] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 6, 0, 1),
    [139] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 6, 0, 1),
    [141] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 5, 0, 0),
    [143] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 5, 0, 0),
    [145] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 8, 0, 1),
    [147] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 8, 0, 1),
    [149] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 7, 0, 0),
    [151] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 7, 0, 0),
    [153] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_passthrough, 6, 0, 0),
    [155] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_passthrough, 6, 0, 0),
    [157] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_menu_macro, 6, 0, 0),
    [159] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_menu_macro, 6, 0, 0),
    [161] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_link_macro, 6, 0, 0),
    [163] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_link_macro, 6, 0, 0),
    [165] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_image_macro, 5, 0, 0),
    [167] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_image_macro, 5, 0, 0),
    [169] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 3, 0, 0),
    [171] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 3, 0, 0),
    [173] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_kbd_macro, 6, 0, 0),
    [175] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_kbd_macro, 6, 0, 0),
    [177] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_passthrough, 3, 0, 0),
    [179] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_passthrough, 3, 0, 0),
    [181] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [183] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [185] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [187] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [189] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 0),
    [191] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 0),
    [193] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_kbd_macro, 5, 0, 0),
    [195] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_kbd_macro, 5, 0, 0),
    [197] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_image_macro, 6, 0, 0),
    [199] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_image_macro, 6, 0, 0),
    [201] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_word, 1, 0, 0),
    [203] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_word, 1, 0, 0),
    [205] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 5, 0, 0),
    [207] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 5, 0, 0),
    [209] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [211] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [213] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [215] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [217] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_math_macro, 5, 0, 0),
    [219] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_math_macro, 5, 0, 0),
    [221] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [223] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [225] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [227] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_image_macro_repeat1, 2, 0, 0),
    [229] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_image_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(36),
    [232] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(19),
    [234] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(38),
    [236] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(27),
    [238] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(36),
    [240] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(116),
    [242] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_link_repeat1, 2, 0, 0),
    SHIFT_REPEAT(116),
    [245] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [247] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_key, 1, 0, 0),
    [249] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [251] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_inline_kbd_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(47),
    [254] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_kbd_macro_repeat1, 2, 0, 0),
    [256] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_inline_kbd_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(46),
    [259] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_kbd_macro_repeat2, 2, 0, 0),
    [261] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
    [263] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [265] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [267] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(59),
    [269] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [271] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(52),
    [273] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(81),
    [275] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [277] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(83),
    [279] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [281] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [283] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [285] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [287] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [289] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [291] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [293] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [295] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [297] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(73),
    [299] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [301] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [303] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(89),
    [305] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(33),
    [307] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [309] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [311] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(71),
    [313] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [315] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [317] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [319] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(69),
    [321] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(68),
    [323] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(97),
    [325] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [327] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [329] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [331] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [333] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [335] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [337] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [339] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [341] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [343] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [345] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [347] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [349] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [351] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [353] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [355] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(108),
    [357] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [359] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [361] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [363] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [365] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [367] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(86),
    [369] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [371] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [373] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(90),
    [375] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [377] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [379] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(94),
    [381] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(95),
    [383] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(98),
    [385] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [387] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [389] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [391] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [393] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(115),
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
