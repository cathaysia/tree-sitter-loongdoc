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
#define STATE_COUNT 128
#define LARGE_STATE_COUNT 37
#define SYMBOL_COUNT 99
#define ALIAS_COUNT 0
#define TOKEN_COUNT 78
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 4

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
    anon_sym_LT_LT = 74,
    aux_sym_inline_xref_token1 = 75,
    anon_sym_GT_GT = 76,
    anon_sym_xref = 77,
    sym_inline = 78,
    sym_replacement = 79,
    sym_word = 80,
    sym_punctuation = 81,
    sym_inline_anchor_rx = 82,
    sym_inline_footnote_macro = 83,
    sym_inline_image_macro = 84,
    sym_inline_kbd_macro = 85,
    sym_key = 86,
    sym_auto_link = 87,
    sym_link = 88,
    sym_inline_link_macro = 89,
    sym_inline_math_macro = 90,
    sym_inline_menu_macro = 91,
    sym_inline_passthrough = 92,
    sym_inline_xref = 93,
    aux_sym_inline_repeat1 = 94,
    aux_sym_inline_image_macro_repeat1 = 95,
    aux_sym_inline_kbd_macro_repeat1 = 96,
    aux_sym_inline_kbd_macro_repeat2 = 97,
    aux_sym_link_repeat1 = 98,
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
    [anon_sym_LT_LT] = "<<",
    [aux_sym_inline_xref_token1] = "inline_xref_token1",
    [anon_sym_GT_GT] = ">>",
    [anon_sym_xref] = "xref",
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
    [sym_inline_xref] = "inline_xref",
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
    [anon_sym_LT_LT] = anon_sym_LT_LT,
    [aux_sym_inline_xref_token1] = aux_sym_inline_xref_token1,
    [anon_sym_GT_GT] = anon_sym_GT_GT,
    [anon_sym_xref] = anon_sym_xref,
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
    [sym_inline_xref] = sym_inline_xref,
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
    [anon_sym_LT_LT] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_inline_xref_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_GT_GT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_xref] = {
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
    [sym_inline_xref] = {
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
    field_reftext = 2,
};

static const char *const ts_field_names[] = {
    [0] = NULL,
    [field_id] = "id",
    [field_reftext] = "reftext",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
    [1] = { .index = 0, .length = 2 },
    [2] = { .index = 2, .length = 1 },
    [3] = { .index = 3, .length = 2 },
};

static const TSFieldMapEntry ts_field_map_entries[] = {
    [0] = { field_id, 1 },
    { field_reftext, 2 },
    [2] = { field_id, 2 },
    [3] = { field_id, 2 },
    { field_reftext, 4 },
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
    [41] = 5,
    [42] = 6,
    [43] = 10,
    [44] = 44,
    [45] = 45,
    [46] = 46,
    [47] = 47,
    [48] = 36,
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
    [115] = 115,
    [116] = 116,
    [117] = 117,
    [118] = 118,
    [119] = 119,
    [120] = 120,
    [121] = 121,
    [122] = 122,
    [123] = 123,
    [124] = 124,
    [125] = 102,
    [126] = 72,
    [127] = 120,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(67);
            ADVANCE_MAP(
                '!', 278,
                '"', 280,
                '#', 281,
                '$', 282,
                '%', 283,
                '&', 284,
                '\'', 285,
                '(', 286,
                ')', 287,
                '*', 288,
                '+', 290,
                ',', 291,
                '-', 292,
                '.', 293,
                '/', 294,
                ':', 295,
                ';', 296,
                '<', 297,
                '=', 298,
                '>', 299,
                '?', 300,
                '@', 301,
                '[', 303,
                '\\', 304,
                ']', 305,
                '^', 306,
                '_', 309,
                '`', 312,
                'a', 170,
                'b', 189,
                'f', 160,
                'h', 194,
                'i', 143,
                'k', 140,
                'l', 137,
                'm', 134,
                'p', 135,
                'q', 201,
                's', 190,
                'x', 185,
                '{', 68,
                '|', 313,
                '}', 208,
                '~', 314,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(203);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(206);
            END_STATE();
        case 1:
            if(lookahead == '"')
                ADVANCE(42);
            if(lookahead == '\\')
                ADVANCE(64);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 2:
            ADVANCE_MAP(
                '"', 279,
                '$', 3,
                '+', 289,
                ',', 291,
                '.', 293,
                ':', 37,
                '>', 41,
                '[', 302,
                '\\', 48,
                ']', 305,
                '`', 311,
                '}', 207,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(2);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(355);
            END_STATE();
        case 3:
            if(lookahead == '$')
                ADVANCE(396);
            END_STATE();
        case 4:
            if(lookahead == '+')
                ADVANCE(395);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(291);
            if(lookahead == '[')
                ADVANCE(302);
            if(lookahead == ']')
                ADVANCE(49);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(5);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(206);
            END_STATE();
        case 6:
            if(lookahead == '+')
                ADVANCE(394);
            END_STATE();
        case 7:
            if(lookahead == '+')
                ADVANCE(6);
            END_STATE();
        case 8:
            if(lookahead == '-')
                ADVANCE(9);
            if(lookahead == '.')
                ADVANCE(62);
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
                ADVANCE(326);
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
                ADVANCE(46);
            if(lookahead == ']')
                ADVANCE(325);
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
                ADVANCE(46);
            if(lookahead == ']')
                ADVANCE(325);
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
                ADVANCE(46);
            if(lookahead == ']')
                ADVANCE(325);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(16);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(17);
            END_STATE();
        case 15:
            if(lookahead == '-')
                ADVANCE(18);
            if(lookahead == ':')
                ADVANCE(46);
            if(lookahead == ']')
                ADVANCE(325);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(14);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(17);
            END_STATE();
        case 16:
            if(lookahead == '-')
                ADVANCE(18);
            if(lookahead == ':')
                ADVANCE(46);
            if(lookahead == ']')
                ADVANCE(325);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(17);
            END_STATE();
        case 17:
            if(lookahead == '-')
                ADVANCE(18);
            if(lookahead == ':')
                ADVANCE(46);
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
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 20:
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(373);
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
            if(lookahead == '>')
                ADVANCE(406);
            END_STATE();
        case 42:
            if(lookahead == '@')
                ADVANCE(43);
            END_STATE();
        case 43:
            if(lookahead == '[')
                ADVANCE(38);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(8);
            END_STATE();
        case 44:
            if(lookahead == '\\')
                ADVANCE(45);
            if(lookahead == ']')
                ADVANCE(327);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(44);
            END_STATE();
        case 45:
            if(lookahead == '\\')
                ADVANCE(45);
            if(lookahead == ']')
                ADVANCE(327);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(44);
            END_STATE();
        case 46:
            if(lookahead == '\\')
                ADVANCE(45);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(44);
            END_STATE();
        case 47:
            if(lookahead == '\\')
                ADVANCE(345);
            if(lookahead == ']')
                ADVANCE(305);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(346);
            if(lookahead != 0)
                ADVANCE(344);
            END_STATE();
        case 48:
            if(lookahead == ']')
                ADVANCE(348);
            END_STATE();
        case 49:
            if(lookahead == ']')
                ADVANCE(318);
            END_STATE();
        case 50:
            if(lookahead == '_')
                ADVANCE(50);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 51:
            if(lookahead == 'e')
                ADVANCE(54);
            END_STATE();
        case 52:
            if(lookahead == 'o')
                ADVANCE(55);
            END_STATE();
        case 53:
            if(lookahead == 'q')
                ADVANCE(56);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(53);
            END_STATE();
        case 54:
            if(lookahead == 's')
                ADVANCE(401);
            END_STATE();
        case 55:
            if(lookahead == 't')
                ADVANCE(51);
            END_STATE();
        case 56:
            if(lookahead == 'u')
                ADVANCE(52);
            END_STATE();
        case 57:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(342);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(343);
            END_STATE();
        case 58:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(58);
            if(lookahead != 0 &&
               lookahead != '.' &&
               lookahead != '[')
                ADVANCE(374);
            END_STATE();
        case 59:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(335);
            END_STATE();
        case 60:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(316);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(317);
            END_STATE();
        case 61:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(61);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(381);
            END_STATE();
        case 62:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(326);
            END_STATE();
        case 63:
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
        case 64:
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 65:
            if(eof)
                ADVANCE(67);
            ADVANCE_MAP(
                '!', 278,
                '"', 280,
                '#', 281,
                '$', 282,
                '%', 283,
                '&', 284,
                '\'', 285,
                '(', 286,
                ')', 287,
                '*', 288,
                '+', 290,
                ',', 291,
                '-', 292,
                '.', 293,
                '/', 294,
                ':', 295,
                ';', 296,
                '<', 297,
                '=', 298,
                '>', 299,
                '?', 300,
                '@', 301,
                '[', 303,
                '\\', 304,
                ']', 305,
                '^', 306,
                '_', 309,
                '`', 312,
                'a', 104,
                'b', 121,
                'f', 94,
                'h', 126,
                'i', 78,
                'k', 75,
                'l', 72,
                'm', 69,
                'p', 70,
                's', 122,
                'x', 118,
                '{', 68,
                '|', 313,
                '}', 208,
                '~', 314,
                0x0b, 276,
                '\f', 276,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(65);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(203);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0)
                ADVANCE(275);
            END_STATE();
        case 66:
            if(eof)
                ADVANCE(67);
            ADVANCE_MAP(
                '!', 278,
                '"', 280,
                '#', 281,
                '$', 282,
                '%', 283,
                '&', 284,
                '\'', 285,
                '(', 286,
                ')', 287,
                '*', 288,
                '+', 290,
                ',', 291,
                '-', 292,
                '.', 293,
                '/', 294,
                ':', 295,
                ';', 296,
                '<', 297,
                '=', 298,
                '>', 299,
                '?', 300,
                '@', 301,
                '[', 303,
                '\\', 304,
                ']', 305,
                '^', 306,
                '_', 310,
                '`', 312,
                'a', 244,
                'b', 261,
                'f', 234,
                'h', 266,
                'i', 218,
                'k', 215,
                'l', 212,
                'm', 209,
                'p', 210,
                's', 262,
                'x', 258,
                '{', 68,
                '|', 313,
                '}', 208,
                '~', 314,
                0x0b, 274,
                '\f', 274,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(66);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(277);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
            if(lookahead != 0)
                ADVANCE(275);
            END_STATE();
        case 67:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 68:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
        case 69:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'a')
                ADVANCE(95);
            if(lookahead == 'e')
                ADVANCE(107);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 70:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'a')
                ADVANCE(120);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 71:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'a')
                ADVANCE(90);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 72:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'a')
                ADVANCE(127);
            if(lookahead == 'i')
                ADVANCE(106);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 73:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'a')
                ADVANCE(124);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 74:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'a')
                ADVANCE(125);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 75:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'b')
                ADVANCE(80);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 76:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'c')
                ADVANCE(93);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 77:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'c')
                ADVANCE(371);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 78:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'c')
                ADVANCE(112);
            if(lookahead == 'm')
                ADVANCE(71);
            if(lookahead == 'r')
                ADVANCE(77);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 79:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'c')
                ADVANCE(97);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 80:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'd')
                ADVANCE(350);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 81:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'e')
                ADVANCE(101);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 82:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'e')
                ADVANCE(88);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 83:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'e')
                ADVANCE(365);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 84:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'e')
                ADVANCE(132);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 85:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'e')
                ADVANCE(337);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 86:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'e')
                ADVANCE(329);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 87:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'e')
                ADVANCE(89);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 88:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'f')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 89:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'f')
                ADVANCE(332);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 90:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'g')
                ADVANCE(85);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 91:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'h')
                ADVANCE(389);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 92:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'h')
                ADVANCE(386);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 93:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'h')
                ADVANCE(111);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 94:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'i')
                ADVANCE(99);
            if(lookahead == 'o')
                ADVANCE(114);
            if(lookahead == 't')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 95:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'i')
                ADVANCE(100);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 96:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'i')
                ADVANCE(102);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 97:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'i')
                ADVANCE(96);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 98:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'k')
                ADVANCE(376);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 99:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'l')
                ADVANCE(83);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 100:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'l')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 101:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'm')
                ADVANCE(383);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 102:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'm')
                ADVANCE(73);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 103:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'm')
                ADVANCE(74);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 104:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'n')
                ADVANCE(76);
            if(lookahead == 's')
                ADVANCE(79);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 105:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'n')
                ADVANCE(353);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 106:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'n')
                ADVANCE(98);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 107:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'n')
                ADVANCE(131);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 108:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'n')
                ADVANCE(340);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 109:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'n')
                ADVANCE(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 110:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'o')
                ADVANCE(379);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 111:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'o')
                ADVANCE(117);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 112:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'o')
                ADVANCE(108);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 113:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'o')
                ADVANCE(130);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 114:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'o')
                ADVANCE(128);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 115:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'p')
                ADVANCE(368);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 116:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'p')
                ADVANCE(359);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 117:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'r')
                ADVANCE(320);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 118:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'r')
                ADVANCE(82);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 119:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 's')
                ADVANCE(399);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 120:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 's')
                ADVANCE(119);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 121:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 't')
                ADVANCE(105);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 122:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 't')
                ADVANCE(81);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 123:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 't')
                ADVANCE(116);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 124:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 't')
                ADVANCE(91);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 125:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 't')
                ADVANCE(92);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 126:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 't')
                ADVANCE(123);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 127:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 't')
                ADVANCE(84);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 128:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 't')
                ADVANCE(109);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 129:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 't')
                ADVANCE(110);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 130:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 't')
                ADVANCE(86);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 131:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'u')
                ADVANCE(392);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 132:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'x')
                ADVANCE(103);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 133:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(205);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 134:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'a')
                ADVANCE(161);
            if(lookahead == 'e')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 135:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'a')
                ADVANCE(188);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 136:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'a')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 137:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'a')
                ADVANCE(195);
            if(lookahead == 'i')
                ADVANCE(172);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 138:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'a')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 139:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'a')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 140:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'b')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 141:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'c')
                ADVANCE(159);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 142:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'c')
                ADVANCE(372);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 143:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'c')
                ADVANCE(178);
            if(lookahead == 'm')
                ADVANCE(136);
            if(lookahead == 'r')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 144:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'c')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 145:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'd')
                ADVANCE(351);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 146:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'e')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 147:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'e')
                ADVANCE(154);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 148:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'e')
                ADVANCE(366);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 149:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'e')
                ADVANCE(202);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 150:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'e')
                ADVANCE(338);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 151:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'e')
                ADVANCE(330);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 152:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'e')
                ADVANCE(155);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 153:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'e')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 154:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'f')
                ADVANCE(409);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 155:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'f')
                ADVANCE(333);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 156:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'g')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 157:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'h')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 158:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'h')
                ADVANCE(387);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 159:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'h')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 160:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'i')
                ADVANCE(165);
            if(lookahead == 'o')
                ADVANCE(180);
            if(lookahead == 't')
                ADVANCE(182);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 161:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 162:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'i')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 163:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 164:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'k')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 165:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'l')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 166:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'l')
                ADVANCE(197);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 167:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'm')
                ADVANCE(384);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 168:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'm')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 169:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'm')
                ADVANCE(139);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 170:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'n')
                ADVANCE(141);
            if(lookahead == 's')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 171:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'n')
                ADVANCE(354);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 172:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'n')
                ADVANCE(164);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 173:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'n')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 174:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'n')
                ADVANCE(200);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 175:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'n')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 176:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'o')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 177:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'o')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 178:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'o')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 179:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'o')
                ADVANCE(198);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 180:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'o')
                ADVANCE(196);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 181:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'o')
                ADVANCE(199);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 182:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'p')
                ADVANCE(369);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 183:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'p')
                ADVANCE(360);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 184:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'r')
                ADVANCE(321);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 185:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 186:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 's')
                ADVANCE(400);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 187:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 's')
                ADVANCE(402);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 188:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 's')
                ADVANCE(186);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 189:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 190:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 191:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 't')
                ADVANCE(183);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 192:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 't')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 193:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 't')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 194:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 't')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 195:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 't')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 196:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 't')
                ADVANCE(175);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 197:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 198:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 't')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 199:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 200:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'u')
                ADVANCE(393);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 201:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'u')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 202:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'x')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 203:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(203);
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
                ADVANCE(206);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 204:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 205:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(205);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(206);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 206:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(206);
            END_STATE();
        case 207:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 208:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
        case 209:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'a')
                ADVANCE(235);
            if(lookahead == 'e')
                ADVANCE(247);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 210:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'a')
                ADVANCE(260);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 211:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'a')
                ADVANCE(230);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 212:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'a')
                ADVANCE(267);
            if(lookahead == 'i')
                ADVANCE(246);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 213:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'a')
                ADVANCE(264);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 214:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'a')
                ADVANCE(265);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 215:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'b')
                ADVANCE(220);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 216:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'c')
                ADVANCE(233);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 217:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'c')
                ADVANCE(370);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 218:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'c')
                ADVANCE(252);
            if(lookahead == 'm')
                ADVANCE(211);
            if(lookahead == 'r')
                ADVANCE(217);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 219:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'c')
                ADVANCE(237);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 220:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'd')
                ADVANCE(349);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 221:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'e')
                ADVANCE(241);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 222:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'e')
                ADVANCE(228);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 223:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'e')
                ADVANCE(364);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 224:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'e')
                ADVANCE(272);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 225:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'e')
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 226:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'e')
                ADVANCE(328);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 227:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'e')
                ADVANCE(229);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 228:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'f')
                ADVANCE(407);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 229:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'f')
                ADVANCE(331);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 230:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'g')
                ADVANCE(225);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 231:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'h')
                ADVANCE(388);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 232:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'h')
                ADVANCE(385);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 233:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'h')
                ADVANCE(251);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 234:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'i')
                ADVANCE(239);
            if(lookahead == 'o')
                ADVANCE(254);
            if(lookahead == 't')
                ADVANCE(255);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 235:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'i')
                ADVANCE(240);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 236:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'i')
                ADVANCE(242);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 237:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'i')
                ADVANCE(236);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 238:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'k')
                ADVANCE(375);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 239:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'l')
                ADVANCE(223);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 240:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'l')
                ADVANCE(269);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 241:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'm')
                ADVANCE(382);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 242:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'm')
                ADVANCE(213);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 243:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'm')
                ADVANCE(214);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 244:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'n')
                ADVANCE(216);
            if(lookahead == 's')
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 245:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'n')
                ADVANCE(352);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 246:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'n')
                ADVANCE(238);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 247:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'n')
                ADVANCE(271);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 248:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'n')
                ADVANCE(339);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 249:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'n')
                ADVANCE(253);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 250:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'o')
                ADVANCE(378);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 251:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'o')
                ADVANCE(257);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 252:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'o')
                ADVANCE(248);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 253:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'o')
                ADVANCE(270);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 254:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'o')
                ADVANCE(268);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 255:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'p')
                ADVANCE(367);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 256:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'p')
                ADVANCE(358);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 257:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'r')
                ADVANCE(319);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 258:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'r')
                ADVANCE(222);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 259:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 's')
                ADVANCE(398);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 260:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 's')
                ADVANCE(259);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 261:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 't')
                ADVANCE(245);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 262:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 't')
                ADVANCE(221);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 263:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 't')
                ADVANCE(256);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 264:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 't')
                ADVANCE(231);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 265:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 't')
                ADVANCE(232);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 266:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 't')
                ADVANCE(263);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 267:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 't')
                ADVANCE(224);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 268:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 't')
                ADVANCE(249);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 269:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 't')
                ADVANCE(250);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 270:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 't')
                ADVANCE(226);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 271:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'u')
                ADVANCE(391);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 272:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'x')
                ADVANCE(243);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 273:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 274:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                '_', 307,
                'a', 244,
                'b', 261,
                'f', 234,
                'h', 266,
                'i', 218,
                'k', 215,
                'l', 212,
                'm', 209,
                'p', 210,
                's', 262,
                'x', 258,
                0x0b, 274,
                '\f', 274,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 275:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(50);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 276:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                '_', 308,
                'a', 104,
                'b', 121,
                'f', 94,
                'h', 126,
                'i', 78,
                'k', 75,
                'l', 72,
                'm', 69,
                'p', 70,
                's', 122,
                'x', 118,
                0x0b, 276,
                '\f', 276,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 277:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(277);
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
        case 278:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 280:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(42);
            if(lookahead == '\\')
                ADVANCE(64);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(1);
            END_STATE();
        case 281:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
        case 282:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(397);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
        case 284:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
        case 286:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 287:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 288:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 290:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '+')
                ADVANCE(4);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(20);
            END_STATE();
        case 291:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 292:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
        case 293:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 294:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
        case 295:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 296:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 297:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(403);
            END_STATE();
        case 298:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
        case 299:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 300:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 302:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 303:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(315);
            END_STATE();
        case 304:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            END_STATE();
        case 305:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 306:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
        case 307:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 308:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(205);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 309:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 310:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
        case 311:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            END_STATE();
        case 312:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
        case 313:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
        case 314:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
        case 315:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            END_STATE();
        case 316:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(316);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(317);
            END_STATE();
        case 317:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ' ||
               ('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(317);
            END_STATE();
        case 318:
            ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
            END_STATE();
        case 319:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 320:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(205);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 321:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 322:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(322);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(323);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(324);
            END_STATE();
        case 323:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(323);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(324);
            END_STATE();
        case 324:
            ACCEPT_TOKEN(aux_sym_inline_anchor_rx_token2);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(324);
            END_STATE();
        case 325:
            ACCEPT_TOKEN(sym_inline_email_rx);
            END_STATE();
        case 326:
            ACCEPT_TOKEN(sym_inline_email_rx);
            if(lookahead == '-')
                ADVANCE(10);
            if(lookahead == '.')
                ADVANCE(62);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(326);
            END_STATE();
        case 327:
            ACCEPT_TOKEN(sym_inline_email_rx);
            if(lookahead == '\\')
                ADVANCE(45);
            if(lookahead == ']')
                ADVANCE(327);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(44);
            END_STATE();
        case 328:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 'r')
                ADVANCE(227);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 329:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 'r')
                ADVANCE(87);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 330:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 'r')
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 331:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 332:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(205);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 333:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 334:
            ACCEPT_TOKEN(aux_sym_inline_footnote_macro_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(335);
            END_STATE();
        case 335:
            ACCEPT_TOKEN(aux_sym_inline_footnote_macro_token2);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(335);
            END_STATE();
        case 336:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 337:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(205);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 338:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 339:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 340:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(205);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 341:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 342:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(342);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(343);
            END_STATE();
        case 343:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token1);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(343);
            END_STATE();
        case 344:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token2);
            END_STATE();
        case 345:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token2);
            if(lookahead == '[')
                ADVANCE(347);
            if(lookahead == ']')
                ADVANCE(348);
            END_STATE();
        case 346:
            ACCEPT_TOKEN(aux_sym_inline_image_macro_token2);
            if(lookahead == '\\')
                ADVANCE(345);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(346);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(344);
            END_STATE();
        case 347:
            ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
            END_STATE();
        case 348:
            ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
            END_STATE();
        case 349:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 350:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(205);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 351:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 352:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 353:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(205);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 354:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 355:
            ACCEPT_TOKEN(aux_sym_key_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(355);
            END_STATE();
        case 356:
            ACCEPT_TOKEN(aux_sym_auto_link_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(356);
            if(lookahead != 0 &&
               lookahead != '"' &&
               lookahead != ']')
                ADVANCE(357);
            END_STATE();
        case 357:
            ACCEPT_TOKEN(aux_sym_auto_link_token1);
            if(lookahead != 0 &&
               lookahead != '"' &&
               lookahead != ']')
                ADVANCE(357);
            END_STATE();
        case 358:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(lookahead == 's')
                ADVANCE(361);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 359:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(lookahead == 's')
                ADVANCE(362);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(133);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 360:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == 's')
                ADVANCE(363);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 361:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 362:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(205);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 363:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 364:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 365:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(205);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 366:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 367:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 368:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(205);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 369:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 370:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 371:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(205);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 372:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 373:
            ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
            END_STATE();
        case 374:
            ACCEPT_TOKEN(sym__link_component);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '.' &&
               lookahead != '[')
                ADVANCE(374);
            END_STATE();
        case 375:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 376:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(205);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 377:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 378:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 379:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(205);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 380:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 381:
            ACCEPT_TOKEN(aux_sym_inline_link_macro_token1);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '[')
                ADVANCE(381);
            END_STATE();
        case 382:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 383:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(205);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 384:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 385:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 386:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(205);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 387:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 388:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 389:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(205);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 390:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 391:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 392:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(205);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 393:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 394:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            END_STATE();
        case 395:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
        case 396:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            END_STATE();
        case 397:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
        case 398:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 399:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(205);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 400:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 401:
            ACCEPT_TOKEN(anon_sym_quotes);
            END_STATE();
        case 402:
            ACCEPT_TOKEN(anon_sym_quotes);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        case 403:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 404:
            ACCEPT_TOKEN(aux_sym_inline_xref_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(404);
            if(lookahead != 0 &&
               lookahead != '>')
                ADVANCE(405);
            END_STATE();
        case 405:
            ACCEPT_TOKEN(aux_sym_inline_xref_token1);
            if(lookahead != 0 &&
               lookahead != '>')
                ADVANCE(405);
            END_STATE();
        case 406:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 407:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(19);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
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
                ADVANCE(275);
            END_STATE();
        case 408:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
            if(lookahead == '_')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
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
                ADVANCE(205);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(275);
            END_STATE();
        case 409:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(63);
            if(lookahead == '@')
                ADVANCE(43);
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
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(204);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 66 },
    [2] = { .lex_state = 66 },
    [3] = { .lex_state = 66 },
    [4] = { .lex_state = 65 },
    [5] = { .lex_state = 66 },
    [6] = { .lex_state = 66 },
    [7] = { .lex_state = 66 },
    [8] = { .lex_state = 65 },
    [9] = { .lex_state = 65 },
    [10] = { .lex_state = 66 },
    [11] = { .lex_state = 66 },
    [12] = { .lex_state = 66 },
    [13] = { .lex_state = 66 },
    [14] = { .lex_state = 66 },
    [15] = { .lex_state = 66 },
    [16] = { .lex_state = 66 },
    [17] = { .lex_state = 66 },
    [18] = { .lex_state = 66 },
    [19] = { .lex_state = 66 },
    [20] = { .lex_state = 66 },
    [21] = { .lex_state = 66 },
    [22] = { .lex_state = 66 },
    [23] = { .lex_state = 66 },
    [24] = { .lex_state = 66 },
    [25] = { .lex_state = 66 },
    [26] = { .lex_state = 66 },
    [27] = { .lex_state = 66 },
    [28] = { .lex_state = 66 },
    [29] = { .lex_state = 66 },
    [30] = { .lex_state = 66 },
    [31] = { .lex_state = 66 },
    [32] = { .lex_state = 66 },
    [33] = { .lex_state = 66 },
    [34] = { .lex_state = 66 },
    [35] = { .lex_state = 66 },
    [36] = { .lex_state = 66 },
    [37] = { .lex_state = 47 },
    [38] = { .lex_state = 47 },
    [39] = { .lex_state = 47 },
    [40] = { .lex_state = 2 },
    [41] = { .lex_state = 2 },
    [42] = { .lex_state = 2 },
    [43] = { .lex_state = 2 },
    [44] = { .lex_state = 2 },
    [45] = { .lex_state = 0 },
    [46] = { .lex_state = 2 },
    [47] = { .lex_state = 2 },
    [48] = { .lex_state = 2 },
    [49] = { .lex_state = 0 },
    [50] = { .lex_state = 2 },
    [51] = { .lex_state = 2 },
    [52] = { .lex_state = 2 },
    [53] = { .lex_state = 0 },
    [54] = { .lex_state = 2 },
    [55] = { .lex_state = 322 },
    [56] = { .lex_state = 0 },
    [57] = { .lex_state = 322 },
    [58] = { .lex_state = 2 },
    [59] = { .lex_state = 5 },
    [60] = { .lex_state = 5 },
    [61] = { .lex_state = 0 },
    [62] = { .lex_state = 57 },
    [63] = { .lex_state = 5 },
    [64] = { .lex_state = 5 },
    [65] = { .lex_state = 322 },
    [66] = { .lex_state = 5 },
    [67] = { .lex_state = 0 },
    [68] = { .lex_state = 0 },
    [69] = { .lex_state = 2 },
    [70] = { .lex_state = 2 },
    [71] = { .lex_state = 2 },
    [72] = { .lex_state = 58 },
    [73] = { .lex_state = 2 },
    [74] = { .lex_state = 322 },
    [75] = { .lex_state = 0 },
    [76] = { .lex_state = 322 },
    [77] = { .lex_state = 322 },
    [78] = { .lex_state = 322 },
    [79] = { .lex_state = 322 },
    [80] = { .lex_state = 2 },
    [81] = { .lex_state = 2 },
    [82] = { .lex_state = 2 },
    [83] = { .lex_state = 0 },
    [84] = { .lex_state = 0 },
    [85] = { .lex_state = 2 },
    [86] = { .lex_state = 2 },
    [87] = { .lex_state = 59 },
    [88] = { .lex_state = 60 },
    [89] = { .lex_state = 356 },
    [90] = { .lex_state = 5 },
    [91] = { .lex_state = 404 },
    [92] = { .lex_state = 53 },
    [93] = { .lex_state = 2 },
    [94] = { .lex_state = 5 },
    [95] = { .lex_state = 0 },
    [96] = { .lex_state = 2 },
    [97] = { .lex_state = 0 },
    [98] = { .lex_state = 61 },
    [99] = { .lex_state = 0 },
    [100] = { .lex_state = 0 },
    [101] = { .lex_state = 0 },
    [102] = { .lex_state = 58 },
    [103] = { .lex_state = 2 },
    [104] = { .lex_state = 5 },
    [105] = { .lex_state = 59 },
    [106] = { .lex_state = 0 },
    [107] = { .lex_state = 2 },
    [108] = { .lex_state = 2 },
    [109] = { .lex_state = 2 },
    [110] = { .lex_state = 0 },
    [111] = { .lex_state = 0 },
    [112] = { .lex_state = 5 },
    [113] = { .lex_state = 0 },
    [114] = { .lex_state = 5 },
    [115] = { .lex_state = 5 },
    [116] = { .lex_state = 0 },
    [117] = { .lex_state = 0 },
    [118] = { .lex_state = 0 },
    [119] = { .lex_state = 0 },
    [120] = { .lex_state = 2 },
    [121] = { .lex_state = 0 },
    [122] = { .lex_state = 0 },
    [123] = { .lex_state = 0 },
    [124] = { .lex_state = 0 },
    [125] = { .lex_state = 58 },
    [126] = { .lex_state = 58 },
    [127] = { .lex_state = 2 },
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
        [anon_sym_LT_LT] = ACTIONS(1),
        [anon_sym_xref] = ACTIONS(1),
    },
    [1] = {
        [sym_inline] = STATE(110),
        [sym_replacement] = STATE(2),
        [sym_word] = STATE(2),
        [sym_punctuation] = STATE(2),
        [sym_inline_anchor_rx] = STATE(2),
        [sym_inline_footnote_macro] = STATE(2),
        [sym_inline_image_macro] = STATE(2),
        [sym_inline_kbd_macro] = STATE(2),
        [sym_auto_link] = STATE(2),
        [sym_link] = STATE(12),
        [sym_inline_link_macro] = STATE(2),
        [sym_inline_math_macro] = STATE(2),
        [sym_inline_menu_macro] = STATE(2),
        [sym_inline_passthrough] = STATE(2),
        [sym_inline_xref] = STATE(2),
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
        [anon_sym_LT_LT] = ACTIONS(41),
        [anon_sym_xref] = ACTIONS(43),
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
        [sym_link] = STATE(12),
        [sym_inline_link_macro] = STATE(3),
        [sym_inline_math_macro] = STATE(3),
        [sym_inline_menu_macro] = STATE(3),
        [sym_inline_passthrough] = STATE(3),
        [sym_inline_xref] = STATE(3),
        [aux_sym_inline_repeat1] = STATE(3),
        [ts_builtin_sym_end] = ACTIONS(45),
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
        [sym_inline_email_rx] = ACTIONS(47),
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
        [anon_sym_LT_LT] = ACTIONS(41),
        [anon_sym_xref] = ACTIONS(43),
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
        [sym_link] = STATE(12),
        [sym_inline_link_macro] = STATE(3),
        [sym_inline_math_macro] = STATE(3),
        [sym_inline_menu_macro] = STATE(3),
        [sym_inline_passthrough] = STATE(3),
        [sym_inline_xref] = STATE(3),
        [aux_sym_inline_repeat1] = STATE(3),
        [ts_builtin_sym_end] = ACTIONS(49),
        [anon_sym_LBRACE] = ACTIONS(51),
        [anon_sym_RBRACE] = ACTIONS(54),
        [sym__word_no_digit] = ACTIONS(57),
        [sym__digits] = ACTIONS(57),
        [anon_sym_BANG] = ACTIONS(54),
        [anon_sym_DQUOTE] = ACTIONS(60),
        [anon_sym_POUND] = ACTIONS(54),
        [anon_sym_DOLLAR] = ACTIONS(54),
        [anon_sym_PERCENT] = ACTIONS(54),
        [anon_sym_AMP] = ACTIONS(54),
        [anon_sym_SQUOTE] = ACTIONS(54),
        [anon_sym_LPAREN] = ACTIONS(54),
        [anon_sym_RPAREN] = ACTIONS(54),
        [anon_sym_STAR] = ACTIONS(54),
        [anon_sym_PLUS] = ACTIONS(63),
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
        [anon_sym_BQUOTE] = ACTIONS(66),
        [anon_sym_PIPE] = ACTIONS(54),
        [anon_sym_TILDE] = ACTIONS(54),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(69),
        [anon_sym_anchor] = ACTIONS(72),
        [sym_inline_email_rx] = ACTIONS(75),
        [anon_sym_footnote] = ACTIONS(78),
        [anon_sym_footnoteref] = ACTIONS(78),
        [anon_sym_image] = ACTIONS(81),
        [anon_sym_icon] = ACTIONS(81),
        [anon_sym_kbd] = ACTIONS(84),
        [anon_sym_btn] = ACTIONS(84),
        [anon_sym_http] = ACTIONS(87),
        [anon_sym_https] = ACTIONS(87),
        [anon_sym_file] = ACTIONS(87),
        [anon_sym_ftp] = ACTIONS(87),
        [anon_sym_irc] = ACTIONS(87),
        [anon_sym_link] = ACTIONS(90),
        [anon_sym_mailto] = ACTIONS(90),
        [anon_sym_stem] = ACTIONS(93),
        [anon_sym_latexmath] = ACTIONS(93),
        [anon_sym_asciimath] = ACTIONS(93),
        [anon_sym_menu] = ACTIONS(96),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(99),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(102),
        [anon_sym_pass] = ACTIONS(105),
        [anon_sym_LT_LT] = ACTIONS(108),
        [anon_sym_xref] = ACTIONS(111),
    },
    [4] = {
        [ts_builtin_sym_end] = ACTIONS(114),
        [anon_sym_LBRACE] = ACTIONS(116),
        [aux_sym_replacement_token1] = ACTIONS(118),
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
        [anon_sym_http] = ACTIONS(116),
        [anon_sym_https] = ACTIONS(116),
        [anon_sym_file] = ACTIONS(116),
        [anon_sym_ftp] = ACTIONS(116),
        [anon_sym_irc] = ACTIONS(116),
        [anon_sym_link] = ACTIONS(116),
        [anon_sym_mailto] = ACTIONS(116),
        [anon_sym_stem] = ACTIONS(116),
        [anon_sym_latexmath] = ACTIONS(116),
        [anon_sym_asciimath] = ACTIONS(116),
        [anon_sym_menu] = ACTIONS(116),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(116),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(116),
        [anon_sym_pass] = ACTIONS(116),
        [anon_sym_LT_LT] = ACTIONS(116),
        [anon_sym_xref] = ACTIONS(116),
    },
    [5] = {
        [aux_sym_link_repeat1] = STATE(10),
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
        [anon_sym_DOT] = ACTIONS(124),
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
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(122),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(122),
        [anon_sym_pass] = ACTIONS(122),
        [anon_sym_LT_LT] = ACTIONS(122),
        [anon_sym_xref] = ACTIONS(122),
    },
    [6] = {
        [aux_sym_link_repeat1] = STATE(5),
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
        [anon_sym_DOT] = ACTIONS(124),
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
        [anon_sym_LT_LT] = ACTIONS(128),
        [anon_sym_xref] = ACTIONS(128),
    },
    [7] = {
        [sym_link] = STATE(58),
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
        [anon_sym_http] = ACTIONS(130),
        [anon_sym_https] = ACTIONS(130),
        [anon_sym_file] = ACTIONS(130),
        [anon_sym_ftp] = ACTIONS(130),
        [anon_sym_irc] = ACTIONS(130),
        [anon_sym_link] = ACTIONS(116),
        [anon_sym_mailto] = ACTIONS(116),
        [anon_sym_stem] = ACTIONS(116),
        [anon_sym_latexmath] = ACTIONS(116),
        [anon_sym_asciimath] = ACTIONS(116),
        [anon_sym_menu] = ACTIONS(116),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(116),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(116),
        [anon_sym_pass] = ACTIONS(116),
        [anon_sym_LT_LT] = ACTIONS(116),
        [anon_sym_xref] = ACTIONS(116),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(114),
        [anon_sym_LBRACE] = ACTIONS(116),
        [aux_sym_replacement_token1] = ACTIONS(132),
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
        [anon_sym_http] = ACTIONS(116),
        [anon_sym_https] = ACTIONS(116),
        [anon_sym_file] = ACTIONS(116),
        [anon_sym_ftp] = ACTIONS(116),
        [anon_sym_irc] = ACTIONS(116),
        [anon_sym_link] = ACTIONS(116),
        [anon_sym_mailto] = ACTIONS(116),
        [anon_sym_stem] = ACTIONS(116),
        [anon_sym_latexmath] = ACTIONS(116),
        [anon_sym_asciimath] = ACTIONS(116),
        [anon_sym_menu] = ACTIONS(116),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(116),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(116),
        [anon_sym_pass] = ACTIONS(116),
        [anon_sym_LT_LT] = ACTIONS(116),
        [anon_sym_xref] = ACTIONS(116),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(114),
        [anon_sym_LBRACE] = ACTIONS(116),
        [aux_sym_replacement_token1] = ACTIONS(134),
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
        [anon_sym_http] = ACTIONS(116),
        [anon_sym_https] = ACTIONS(116),
        [anon_sym_file] = ACTIONS(116),
        [anon_sym_ftp] = ACTIONS(116),
        [anon_sym_irc] = ACTIONS(116),
        [anon_sym_link] = ACTIONS(116),
        [anon_sym_mailto] = ACTIONS(116),
        [anon_sym_stem] = ACTIONS(116),
        [anon_sym_latexmath] = ACTIONS(116),
        [anon_sym_asciimath] = ACTIONS(116),
        [anon_sym_menu] = ACTIONS(116),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(116),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(116),
        [anon_sym_pass] = ACTIONS(116),
        [anon_sym_LT_LT] = ACTIONS(116),
        [anon_sym_xref] = ACTIONS(116),
    },
    [10] = {
        [aux_sym_link_repeat1] = STATE(10),
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
        [anon_sym_DOT] = ACTIONS(140),
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
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(138),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(138),
        [anon_sym_pass] = ACTIONS(138),
        [anon_sym_LT_LT] = ACTIONS(138),
        [anon_sym_xref] = ACTIONS(138),
    },
    [11] = {
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
        [anon_sym_menu] = ACTIONS(145),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(145),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(145),
        [anon_sym_pass] = ACTIONS(145),
        [anon_sym_LT_LT] = ACTIONS(145),
        [anon_sym_xref] = ACTIONS(145),
    },
    [12] = {
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
        [anon_sym_menu] = ACTIONS(149),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(149),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(149),
        [anon_sym_pass] = ACTIONS(149),
        [anon_sym_LT_LT] = ACTIONS(149),
        [anon_sym_xref] = ACTIONS(149),
    },
    [13] = {
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
        [anon_sym_menu] = ACTIONS(153),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(153),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(153),
        [anon_sym_pass] = ACTIONS(153),
        [anon_sym_LT_LT] = ACTIONS(153),
        [anon_sym_xref] = ACTIONS(153),
    },
    [14] = {
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
        [anon_sym_menu] = ACTIONS(157),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(157),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(157),
        [anon_sym_pass] = ACTIONS(157),
        [anon_sym_LT_LT] = ACTIONS(157),
        [anon_sym_xref] = ACTIONS(157),
    },
    [15] = {
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
        [anon_sym_menu] = ACTIONS(161),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(161),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(161),
        [anon_sym_pass] = ACTIONS(161),
        [anon_sym_LT_LT] = ACTIONS(161),
        [anon_sym_xref] = ACTIONS(161),
    },
    [16] = {
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
        [anon_sym_menu] = ACTIONS(165),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(165),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(165),
        [anon_sym_pass] = ACTIONS(165),
        [anon_sym_LT_LT] = ACTIONS(165),
        [anon_sym_xref] = ACTIONS(165),
    },
    [17] = {
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
        [anon_sym_menu] = ACTIONS(169),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(169),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(169),
        [anon_sym_pass] = ACTIONS(169),
        [anon_sym_LT_LT] = ACTIONS(169),
        [anon_sym_xref] = ACTIONS(169),
    },
    [18] = {
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
        [anon_sym_menu] = ACTIONS(173),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(173),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(173),
        [anon_sym_pass] = ACTIONS(173),
        [anon_sym_LT_LT] = ACTIONS(173),
        [anon_sym_xref] = ACTIONS(173),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_LBRACE] = ACTIONS(177),
        [anon_sym_RBRACE] = ACTIONS(177),
        [sym__word_no_digit] = ACTIONS(177),
        [sym__digits] = ACTIONS(177),
        [anon_sym_BANG] = ACTIONS(177),
        [anon_sym_DQUOTE] = ACTIONS(177),
        [anon_sym_POUND] = ACTIONS(177),
        [anon_sym_DOLLAR] = ACTIONS(177),
        [anon_sym_PERCENT] = ACTIONS(177),
        [anon_sym_AMP] = ACTIONS(177),
        [anon_sym_SQUOTE] = ACTIONS(177),
        [anon_sym_LPAREN] = ACTIONS(177),
        [anon_sym_RPAREN] = ACTIONS(177),
        [anon_sym_STAR] = ACTIONS(177),
        [anon_sym_PLUS] = ACTIONS(177),
        [anon_sym_COMMA] = ACTIONS(177),
        [anon_sym_DASH] = ACTIONS(177),
        [anon_sym_DOT] = ACTIONS(177),
        [anon_sym_SLASH] = ACTIONS(177),
        [anon_sym_COLON] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(177),
        [anon_sym_LT] = ACTIONS(177),
        [anon_sym_EQ] = ACTIONS(177),
        [anon_sym_GT] = ACTIONS(177),
        [anon_sym_QMARK] = ACTIONS(177),
        [anon_sym_AT] = ACTIONS(177),
        [anon_sym_LBRACK] = ACTIONS(177),
        [anon_sym_BSLASH] = ACTIONS(177),
        [anon_sym_RBRACK] = ACTIONS(177),
        [anon_sym_CARET] = ACTIONS(177),
        [anon_sym__] = ACTIONS(177),
        [anon_sym_BQUOTE] = ACTIONS(177),
        [anon_sym_PIPE] = ACTIONS(177),
        [anon_sym_TILDE] = ACTIONS(177),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(177),
        [anon_sym_anchor] = ACTIONS(177),
        [sym_inline_email_rx] = ACTIONS(177),
        [anon_sym_footnote] = ACTIONS(177),
        [anon_sym_footnoteref] = ACTIONS(177),
        [anon_sym_image] = ACTIONS(177),
        [anon_sym_icon] = ACTIONS(177),
        [anon_sym_kbd] = ACTIONS(177),
        [anon_sym_btn] = ACTIONS(177),
        [anon_sym_http] = ACTIONS(177),
        [anon_sym_https] = ACTIONS(177),
        [anon_sym_file] = ACTIONS(177),
        [anon_sym_ftp] = ACTIONS(177),
        [anon_sym_irc] = ACTIONS(177),
        [anon_sym_link] = ACTIONS(177),
        [anon_sym_mailto] = ACTIONS(177),
        [anon_sym_stem] = ACTIONS(177),
        [anon_sym_latexmath] = ACTIONS(177),
        [anon_sym_asciimath] = ACTIONS(177),
        [anon_sym_menu] = ACTIONS(177),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(177),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(177),
        [anon_sym_pass] = ACTIONS(177),
        [anon_sym_LT_LT] = ACTIONS(177),
        [anon_sym_xref] = ACTIONS(177),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(179),
        [anon_sym_LBRACE] = ACTIONS(181),
        [anon_sym_RBRACE] = ACTIONS(181),
        [sym__word_no_digit] = ACTIONS(181),
        [sym__digits] = ACTIONS(181),
        [anon_sym_BANG] = ACTIONS(181),
        [anon_sym_DQUOTE] = ACTIONS(181),
        [anon_sym_POUND] = ACTIONS(181),
        [anon_sym_DOLLAR] = ACTIONS(181),
        [anon_sym_PERCENT] = ACTIONS(181),
        [anon_sym_AMP] = ACTIONS(181),
        [anon_sym_SQUOTE] = ACTIONS(181),
        [anon_sym_LPAREN] = ACTIONS(181),
        [anon_sym_RPAREN] = ACTIONS(181),
        [anon_sym_STAR] = ACTIONS(181),
        [anon_sym_PLUS] = ACTIONS(181),
        [anon_sym_COMMA] = ACTIONS(181),
        [anon_sym_DASH] = ACTIONS(181),
        [anon_sym_DOT] = ACTIONS(181),
        [anon_sym_SLASH] = ACTIONS(181),
        [anon_sym_COLON] = ACTIONS(181),
        [anon_sym_SEMI] = ACTIONS(181),
        [anon_sym_LT] = ACTIONS(181),
        [anon_sym_EQ] = ACTIONS(181),
        [anon_sym_GT] = ACTIONS(181),
        [anon_sym_QMARK] = ACTIONS(181),
        [anon_sym_AT] = ACTIONS(181),
        [anon_sym_LBRACK] = ACTIONS(181),
        [anon_sym_BSLASH] = ACTIONS(181),
        [anon_sym_RBRACK] = ACTIONS(181),
        [anon_sym_CARET] = ACTIONS(181),
        [anon_sym__] = ACTIONS(181),
        [anon_sym_BQUOTE] = ACTIONS(181),
        [anon_sym_PIPE] = ACTIONS(181),
        [anon_sym_TILDE] = ACTIONS(181),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(181),
        [anon_sym_anchor] = ACTIONS(181),
        [sym_inline_email_rx] = ACTIONS(181),
        [anon_sym_footnote] = ACTIONS(181),
        [anon_sym_footnoteref] = ACTIONS(181),
        [anon_sym_image] = ACTIONS(181),
        [anon_sym_icon] = ACTIONS(181),
        [anon_sym_kbd] = ACTIONS(181),
        [anon_sym_btn] = ACTIONS(181),
        [anon_sym_http] = ACTIONS(181),
        [anon_sym_https] = ACTIONS(181),
        [anon_sym_file] = ACTIONS(181),
        [anon_sym_ftp] = ACTIONS(181),
        [anon_sym_irc] = ACTIONS(181),
        [anon_sym_link] = ACTIONS(181),
        [anon_sym_mailto] = ACTIONS(181),
        [anon_sym_stem] = ACTIONS(181),
        [anon_sym_latexmath] = ACTIONS(181),
        [anon_sym_asciimath] = ACTIONS(181),
        [anon_sym_menu] = ACTIONS(181),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(181),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(181),
        [anon_sym_pass] = ACTIONS(181),
        [anon_sym_LT_LT] = ACTIONS(181),
        [anon_sym_xref] = ACTIONS(181),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(183),
        [anon_sym_LBRACE] = ACTIONS(185),
        [anon_sym_RBRACE] = ACTIONS(185),
        [sym__word_no_digit] = ACTIONS(185),
        [sym__digits] = ACTIONS(185),
        [anon_sym_BANG] = ACTIONS(185),
        [anon_sym_DQUOTE] = ACTIONS(185),
        [anon_sym_POUND] = ACTIONS(185),
        [anon_sym_DOLLAR] = ACTIONS(185),
        [anon_sym_PERCENT] = ACTIONS(185),
        [anon_sym_AMP] = ACTIONS(185),
        [anon_sym_SQUOTE] = ACTIONS(185),
        [anon_sym_LPAREN] = ACTIONS(185),
        [anon_sym_RPAREN] = ACTIONS(185),
        [anon_sym_STAR] = ACTIONS(185),
        [anon_sym_PLUS] = ACTIONS(185),
        [anon_sym_COMMA] = ACTIONS(185),
        [anon_sym_DASH] = ACTIONS(185),
        [anon_sym_DOT] = ACTIONS(185),
        [anon_sym_SLASH] = ACTIONS(185),
        [anon_sym_COLON] = ACTIONS(185),
        [anon_sym_SEMI] = ACTIONS(185),
        [anon_sym_LT] = ACTIONS(185),
        [anon_sym_EQ] = ACTIONS(185),
        [anon_sym_GT] = ACTIONS(185),
        [anon_sym_QMARK] = ACTIONS(185),
        [anon_sym_AT] = ACTIONS(185),
        [anon_sym_LBRACK] = ACTIONS(185),
        [anon_sym_BSLASH] = ACTIONS(185),
        [anon_sym_RBRACK] = ACTIONS(185),
        [anon_sym_CARET] = ACTIONS(185),
        [anon_sym__] = ACTIONS(185),
        [anon_sym_BQUOTE] = ACTIONS(185),
        [anon_sym_PIPE] = ACTIONS(185),
        [anon_sym_TILDE] = ACTIONS(185),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(185),
        [anon_sym_anchor] = ACTIONS(185),
        [sym_inline_email_rx] = ACTIONS(185),
        [anon_sym_footnote] = ACTIONS(185),
        [anon_sym_footnoteref] = ACTIONS(185),
        [anon_sym_image] = ACTIONS(185),
        [anon_sym_icon] = ACTIONS(185),
        [anon_sym_kbd] = ACTIONS(185),
        [anon_sym_btn] = ACTIONS(185),
        [anon_sym_http] = ACTIONS(185),
        [anon_sym_https] = ACTIONS(185),
        [anon_sym_file] = ACTIONS(185),
        [anon_sym_ftp] = ACTIONS(185),
        [anon_sym_irc] = ACTIONS(185),
        [anon_sym_link] = ACTIONS(185),
        [anon_sym_mailto] = ACTIONS(185),
        [anon_sym_stem] = ACTIONS(185),
        [anon_sym_latexmath] = ACTIONS(185),
        [anon_sym_asciimath] = ACTIONS(185),
        [anon_sym_menu] = ACTIONS(185),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(185),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(185),
        [anon_sym_pass] = ACTIONS(185),
        [anon_sym_LT_LT] = ACTIONS(185),
        [anon_sym_xref] = ACTIONS(185),
    },
    [22] = {
        [ts_builtin_sym_end] = ACTIONS(187),
        [anon_sym_LBRACE] = ACTIONS(189),
        [anon_sym_RBRACE] = ACTIONS(189),
        [sym__word_no_digit] = ACTIONS(189),
        [sym__digits] = ACTIONS(189),
        [anon_sym_BANG] = ACTIONS(189),
        [anon_sym_DQUOTE] = ACTIONS(189),
        [anon_sym_POUND] = ACTIONS(189),
        [anon_sym_DOLLAR] = ACTIONS(189),
        [anon_sym_PERCENT] = ACTIONS(189),
        [anon_sym_AMP] = ACTIONS(189),
        [anon_sym_SQUOTE] = ACTIONS(189),
        [anon_sym_LPAREN] = ACTIONS(189),
        [anon_sym_RPAREN] = ACTIONS(189),
        [anon_sym_STAR] = ACTIONS(189),
        [anon_sym_PLUS] = ACTIONS(189),
        [anon_sym_COMMA] = ACTIONS(189),
        [anon_sym_DASH] = ACTIONS(189),
        [anon_sym_DOT] = ACTIONS(189),
        [anon_sym_SLASH] = ACTIONS(189),
        [anon_sym_COLON] = ACTIONS(189),
        [anon_sym_SEMI] = ACTIONS(189),
        [anon_sym_LT] = ACTIONS(189),
        [anon_sym_EQ] = ACTIONS(189),
        [anon_sym_GT] = ACTIONS(189),
        [anon_sym_QMARK] = ACTIONS(189),
        [anon_sym_AT] = ACTIONS(189),
        [anon_sym_LBRACK] = ACTIONS(189),
        [anon_sym_BSLASH] = ACTIONS(189),
        [anon_sym_RBRACK] = ACTIONS(189),
        [anon_sym_CARET] = ACTIONS(189),
        [anon_sym__] = ACTIONS(189),
        [anon_sym_BQUOTE] = ACTIONS(189),
        [anon_sym_PIPE] = ACTIONS(189),
        [anon_sym_TILDE] = ACTIONS(189),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(189),
        [anon_sym_anchor] = ACTIONS(189),
        [sym_inline_email_rx] = ACTIONS(189),
        [anon_sym_footnote] = ACTIONS(189),
        [anon_sym_footnoteref] = ACTIONS(189),
        [anon_sym_image] = ACTIONS(189),
        [anon_sym_icon] = ACTIONS(189),
        [anon_sym_kbd] = ACTIONS(189),
        [anon_sym_btn] = ACTIONS(189),
        [anon_sym_http] = ACTIONS(189),
        [anon_sym_https] = ACTIONS(189),
        [anon_sym_file] = ACTIONS(189),
        [anon_sym_ftp] = ACTIONS(189),
        [anon_sym_irc] = ACTIONS(189),
        [anon_sym_link] = ACTIONS(189),
        [anon_sym_mailto] = ACTIONS(189),
        [anon_sym_stem] = ACTIONS(189),
        [anon_sym_latexmath] = ACTIONS(189),
        [anon_sym_asciimath] = ACTIONS(189),
        [anon_sym_menu] = ACTIONS(189),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(189),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(189),
        [anon_sym_pass] = ACTIONS(189),
        [anon_sym_LT_LT] = ACTIONS(189),
        [anon_sym_xref] = ACTIONS(189),
    },
    [23] = {
        [ts_builtin_sym_end] = ACTIONS(191),
        [anon_sym_LBRACE] = ACTIONS(193),
        [anon_sym_RBRACE] = ACTIONS(193),
        [sym__word_no_digit] = ACTIONS(193),
        [sym__digits] = ACTIONS(193),
        [anon_sym_BANG] = ACTIONS(193),
        [anon_sym_DQUOTE] = ACTIONS(193),
        [anon_sym_POUND] = ACTIONS(193),
        [anon_sym_DOLLAR] = ACTIONS(193),
        [anon_sym_PERCENT] = ACTIONS(193),
        [anon_sym_AMP] = ACTIONS(193),
        [anon_sym_SQUOTE] = ACTIONS(193),
        [anon_sym_LPAREN] = ACTIONS(193),
        [anon_sym_RPAREN] = ACTIONS(193),
        [anon_sym_STAR] = ACTIONS(193),
        [anon_sym_PLUS] = ACTIONS(193),
        [anon_sym_COMMA] = ACTIONS(193),
        [anon_sym_DASH] = ACTIONS(193),
        [anon_sym_DOT] = ACTIONS(193),
        [anon_sym_SLASH] = ACTIONS(193),
        [anon_sym_COLON] = ACTIONS(193),
        [anon_sym_SEMI] = ACTIONS(193),
        [anon_sym_LT] = ACTIONS(193),
        [anon_sym_EQ] = ACTIONS(193),
        [anon_sym_GT] = ACTIONS(193),
        [anon_sym_QMARK] = ACTIONS(193),
        [anon_sym_AT] = ACTIONS(193),
        [anon_sym_LBRACK] = ACTIONS(193),
        [anon_sym_BSLASH] = ACTIONS(193),
        [anon_sym_RBRACK] = ACTIONS(193),
        [anon_sym_CARET] = ACTIONS(193),
        [anon_sym__] = ACTIONS(193),
        [anon_sym_BQUOTE] = ACTIONS(193),
        [anon_sym_PIPE] = ACTIONS(193),
        [anon_sym_TILDE] = ACTIONS(193),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(193),
        [anon_sym_anchor] = ACTIONS(193),
        [sym_inline_email_rx] = ACTIONS(193),
        [anon_sym_footnote] = ACTIONS(193),
        [anon_sym_footnoteref] = ACTIONS(193),
        [anon_sym_image] = ACTIONS(193),
        [anon_sym_icon] = ACTIONS(193),
        [anon_sym_kbd] = ACTIONS(193),
        [anon_sym_btn] = ACTIONS(193),
        [anon_sym_http] = ACTIONS(193),
        [anon_sym_https] = ACTIONS(193),
        [anon_sym_file] = ACTIONS(193),
        [anon_sym_ftp] = ACTIONS(193),
        [anon_sym_irc] = ACTIONS(193),
        [anon_sym_link] = ACTIONS(193),
        [anon_sym_mailto] = ACTIONS(193),
        [anon_sym_stem] = ACTIONS(193),
        [anon_sym_latexmath] = ACTIONS(193),
        [anon_sym_asciimath] = ACTIONS(193),
        [anon_sym_menu] = ACTIONS(193),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(193),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(193),
        [anon_sym_pass] = ACTIONS(193),
        [anon_sym_LT_LT] = ACTIONS(193),
        [anon_sym_xref] = ACTIONS(193),
    },
    [24] = {
        [ts_builtin_sym_end] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(197),
        [anon_sym_RBRACE] = ACTIONS(197),
        [sym__word_no_digit] = ACTIONS(197),
        [sym__digits] = ACTIONS(197),
        [anon_sym_BANG] = ACTIONS(197),
        [anon_sym_DQUOTE] = ACTIONS(197),
        [anon_sym_POUND] = ACTIONS(197),
        [anon_sym_DOLLAR] = ACTIONS(197),
        [anon_sym_PERCENT] = ACTIONS(197),
        [anon_sym_AMP] = ACTIONS(197),
        [anon_sym_SQUOTE] = ACTIONS(197),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(197),
        [anon_sym_STAR] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_COMMA] = ACTIONS(197),
        [anon_sym_DASH] = ACTIONS(197),
        [anon_sym_DOT] = ACTIONS(197),
        [anon_sym_SLASH] = ACTIONS(197),
        [anon_sym_COLON] = ACTIONS(197),
        [anon_sym_SEMI] = ACTIONS(197),
        [anon_sym_LT] = ACTIONS(197),
        [anon_sym_EQ] = ACTIONS(197),
        [anon_sym_GT] = ACTIONS(197),
        [anon_sym_QMARK] = ACTIONS(197),
        [anon_sym_AT] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_BSLASH] = ACTIONS(197),
        [anon_sym_RBRACK] = ACTIONS(197),
        [anon_sym_CARET] = ACTIONS(197),
        [anon_sym__] = ACTIONS(197),
        [anon_sym_BQUOTE] = ACTIONS(197),
        [anon_sym_PIPE] = ACTIONS(197),
        [anon_sym_TILDE] = ACTIONS(197),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(197),
        [anon_sym_anchor] = ACTIONS(197),
        [sym_inline_email_rx] = ACTIONS(197),
        [anon_sym_footnote] = ACTIONS(197),
        [anon_sym_footnoteref] = ACTIONS(197),
        [anon_sym_image] = ACTIONS(197),
        [anon_sym_icon] = ACTIONS(197),
        [anon_sym_kbd] = ACTIONS(197),
        [anon_sym_btn] = ACTIONS(197),
        [anon_sym_http] = ACTIONS(197),
        [anon_sym_https] = ACTIONS(197),
        [anon_sym_file] = ACTIONS(197),
        [anon_sym_ftp] = ACTIONS(197),
        [anon_sym_irc] = ACTIONS(197),
        [anon_sym_link] = ACTIONS(197),
        [anon_sym_mailto] = ACTIONS(197),
        [anon_sym_stem] = ACTIONS(197),
        [anon_sym_latexmath] = ACTIONS(197),
        [anon_sym_asciimath] = ACTIONS(197),
        [anon_sym_menu] = ACTIONS(197),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(197),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(197),
        [anon_sym_pass] = ACTIONS(197),
        [anon_sym_LT_LT] = ACTIONS(197),
        [anon_sym_xref] = ACTIONS(197),
    },
    [25] = {
        [ts_builtin_sym_end] = ACTIONS(199),
        [anon_sym_LBRACE] = ACTIONS(201),
        [anon_sym_RBRACE] = ACTIONS(201),
        [sym__word_no_digit] = ACTIONS(201),
        [sym__digits] = ACTIONS(201),
        [anon_sym_BANG] = ACTIONS(201),
        [anon_sym_DQUOTE] = ACTIONS(201),
        [anon_sym_POUND] = ACTIONS(201),
        [anon_sym_DOLLAR] = ACTIONS(201),
        [anon_sym_PERCENT] = ACTIONS(201),
        [anon_sym_AMP] = ACTIONS(201),
        [anon_sym_SQUOTE] = ACTIONS(201),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(201),
        [anon_sym_STAR] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(201),
        [anon_sym_COMMA] = ACTIONS(201),
        [anon_sym_DASH] = ACTIONS(201),
        [anon_sym_DOT] = ACTIONS(201),
        [anon_sym_SLASH] = ACTIONS(201),
        [anon_sym_COLON] = ACTIONS(201),
        [anon_sym_SEMI] = ACTIONS(201),
        [anon_sym_LT] = ACTIONS(201),
        [anon_sym_EQ] = ACTIONS(201),
        [anon_sym_GT] = ACTIONS(201),
        [anon_sym_QMARK] = ACTIONS(201),
        [anon_sym_AT] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_BSLASH] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(201),
        [anon_sym_CARET] = ACTIONS(201),
        [anon_sym__] = ACTIONS(201),
        [anon_sym_BQUOTE] = ACTIONS(201),
        [anon_sym_PIPE] = ACTIONS(201),
        [anon_sym_TILDE] = ACTIONS(201),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(201),
        [anon_sym_anchor] = ACTIONS(201),
        [sym_inline_email_rx] = ACTIONS(201),
        [anon_sym_footnote] = ACTIONS(201),
        [anon_sym_footnoteref] = ACTIONS(201),
        [anon_sym_image] = ACTIONS(201),
        [anon_sym_icon] = ACTIONS(201),
        [anon_sym_kbd] = ACTIONS(201),
        [anon_sym_btn] = ACTIONS(201),
        [anon_sym_http] = ACTIONS(201),
        [anon_sym_https] = ACTIONS(201),
        [anon_sym_file] = ACTIONS(201),
        [anon_sym_ftp] = ACTIONS(201),
        [anon_sym_irc] = ACTIONS(201),
        [anon_sym_link] = ACTIONS(201),
        [anon_sym_mailto] = ACTIONS(201),
        [anon_sym_stem] = ACTIONS(201),
        [anon_sym_latexmath] = ACTIONS(201),
        [anon_sym_asciimath] = ACTIONS(201),
        [anon_sym_menu] = ACTIONS(201),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(201),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(201),
        [anon_sym_pass] = ACTIONS(201),
        [anon_sym_LT_LT] = ACTIONS(201),
        [anon_sym_xref] = ACTIONS(201),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(203),
        [anon_sym_LBRACE] = ACTIONS(205),
        [anon_sym_RBRACE] = ACTIONS(205),
        [sym__word_no_digit] = ACTIONS(205),
        [sym__digits] = ACTIONS(205),
        [anon_sym_BANG] = ACTIONS(205),
        [anon_sym_DQUOTE] = ACTIONS(205),
        [anon_sym_POUND] = ACTIONS(205),
        [anon_sym_DOLLAR] = ACTIONS(205),
        [anon_sym_PERCENT] = ACTIONS(205),
        [anon_sym_AMP] = ACTIONS(205),
        [anon_sym_SQUOTE] = ACTIONS(205),
        [anon_sym_LPAREN] = ACTIONS(205),
        [anon_sym_RPAREN] = ACTIONS(205),
        [anon_sym_STAR] = ACTIONS(205),
        [anon_sym_PLUS] = ACTIONS(205),
        [anon_sym_COMMA] = ACTIONS(205),
        [anon_sym_DASH] = ACTIONS(205),
        [anon_sym_DOT] = ACTIONS(205),
        [anon_sym_SLASH] = ACTIONS(205),
        [anon_sym_COLON] = ACTIONS(205),
        [anon_sym_SEMI] = ACTIONS(205),
        [anon_sym_LT] = ACTIONS(205),
        [anon_sym_EQ] = ACTIONS(205),
        [anon_sym_GT] = ACTIONS(205),
        [anon_sym_QMARK] = ACTIONS(205),
        [anon_sym_AT] = ACTIONS(205),
        [anon_sym_LBRACK] = ACTIONS(205),
        [anon_sym_BSLASH] = ACTIONS(205),
        [anon_sym_RBRACK] = ACTIONS(205),
        [anon_sym_CARET] = ACTIONS(205),
        [anon_sym__] = ACTIONS(205),
        [anon_sym_BQUOTE] = ACTIONS(205),
        [anon_sym_PIPE] = ACTIONS(205),
        [anon_sym_TILDE] = ACTIONS(205),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(205),
        [anon_sym_anchor] = ACTIONS(205),
        [sym_inline_email_rx] = ACTIONS(205),
        [anon_sym_footnote] = ACTIONS(205),
        [anon_sym_footnoteref] = ACTIONS(205),
        [anon_sym_image] = ACTIONS(205),
        [anon_sym_icon] = ACTIONS(205),
        [anon_sym_kbd] = ACTIONS(205),
        [anon_sym_btn] = ACTIONS(205),
        [anon_sym_http] = ACTIONS(205),
        [anon_sym_https] = ACTIONS(205),
        [anon_sym_file] = ACTIONS(205),
        [anon_sym_ftp] = ACTIONS(205),
        [anon_sym_irc] = ACTIONS(205),
        [anon_sym_link] = ACTIONS(205),
        [anon_sym_mailto] = ACTIONS(205),
        [anon_sym_stem] = ACTIONS(205),
        [anon_sym_latexmath] = ACTIONS(205),
        [anon_sym_asciimath] = ACTIONS(205),
        [anon_sym_menu] = ACTIONS(205),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(205),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(205),
        [anon_sym_pass] = ACTIONS(205),
        [anon_sym_LT_LT] = ACTIONS(205),
        [anon_sym_xref] = ACTIONS(205),
    },
    [27] = {
        [ts_builtin_sym_end] = ACTIONS(207),
        [anon_sym_LBRACE] = ACTIONS(209),
        [anon_sym_RBRACE] = ACTIONS(209),
        [sym__word_no_digit] = ACTIONS(209),
        [sym__digits] = ACTIONS(209),
        [anon_sym_BANG] = ACTIONS(209),
        [anon_sym_DQUOTE] = ACTIONS(209),
        [anon_sym_POUND] = ACTIONS(209),
        [anon_sym_DOLLAR] = ACTIONS(209),
        [anon_sym_PERCENT] = ACTIONS(209),
        [anon_sym_AMP] = ACTIONS(209),
        [anon_sym_SQUOTE] = ACTIONS(209),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(209),
        [anon_sym_STAR] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(209),
        [anon_sym_COMMA] = ACTIONS(209),
        [anon_sym_DASH] = ACTIONS(209),
        [anon_sym_DOT] = ACTIONS(209),
        [anon_sym_SLASH] = ACTIONS(209),
        [anon_sym_COLON] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_LT] = ACTIONS(209),
        [anon_sym_EQ] = ACTIONS(209),
        [anon_sym_GT] = ACTIONS(209),
        [anon_sym_QMARK] = ACTIONS(209),
        [anon_sym_AT] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(209),
        [anon_sym_BSLASH] = ACTIONS(209),
        [anon_sym_RBRACK] = ACTIONS(209),
        [anon_sym_CARET] = ACTIONS(209),
        [anon_sym__] = ACTIONS(209),
        [anon_sym_BQUOTE] = ACTIONS(209),
        [anon_sym_PIPE] = ACTIONS(209),
        [anon_sym_TILDE] = ACTIONS(209),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(209),
        [anon_sym_anchor] = ACTIONS(209),
        [sym_inline_email_rx] = ACTIONS(209),
        [anon_sym_footnote] = ACTIONS(209),
        [anon_sym_footnoteref] = ACTIONS(209),
        [anon_sym_image] = ACTIONS(209),
        [anon_sym_icon] = ACTIONS(209),
        [anon_sym_kbd] = ACTIONS(209),
        [anon_sym_btn] = ACTIONS(209),
        [anon_sym_http] = ACTIONS(209),
        [anon_sym_https] = ACTIONS(209),
        [anon_sym_file] = ACTIONS(209),
        [anon_sym_ftp] = ACTIONS(209),
        [anon_sym_irc] = ACTIONS(209),
        [anon_sym_link] = ACTIONS(209),
        [anon_sym_mailto] = ACTIONS(209),
        [anon_sym_stem] = ACTIONS(209),
        [anon_sym_latexmath] = ACTIONS(209),
        [anon_sym_asciimath] = ACTIONS(209),
        [anon_sym_menu] = ACTIONS(209),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(209),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(209),
        [anon_sym_pass] = ACTIONS(209),
        [anon_sym_LT_LT] = ACTIONS(209),
        [anon_sym_xref] = ACTIONS(209),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(211),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_RBRACE] = ACTIONS(213),
        [sym__word_no_digit] = ACTIONS(213),
        [sym__digits] = ACTIONS(213),
        [anon_sym_BANG] = ACTIONS(213),
        [anon_sym_DQUOTE] = ACTIONS(213),
        [anon_sym_POUND] = ACTIONS(213),
        [anon_sym_DOLLAR] = ACTIONS(213),
        [anon_sym_PERCENT] = ACTIONS(213),
        [anon_sym_AMP] = ACTIONS(213),
        [anon_sym_SQUOTE] = ACTIONS(213),
        [anon_sym_LPAREN] = ACTIONS(213),
        [anon_sym_RPAREN] = ACTIONS(213),
        [anon_sym_STAR] = ACTIONS(213),
        [anon_sym_PLUS] = ACTIONS(213),
        [anon_sym_COMMA] = ACTIONS(213),
        [anon_sym_DASH] = ACTIONS(213),
        [anon_sym_DOT] = ACTIONS(213),
        [anon_sym_SLASH] = ACTIONS(213),
        [anon_sym_COLON] = ACTIONS(213),
        [anon_sym_SEMI] = ACTIONS(213),
        [anon_sym_LT] = ACTIONS(213),
        [anon_sym_EQ] = ACTIONS(213),
        [anon_sym_GT] = ACTIONS(213),
        [anon_sym_QMARK] = ACTIONS(213),
        [anon_sym_AT] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_BSLASH] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(213),
        [anon_sym_CARET] = ACTIONS(213),
        [anon_sym__] = ACTIONS(213),
        [anon_sym_BQUOTE] = ACTIONS(213),
        [anon_sym_PIPE] = ACTIONS(213),
        [anon_sym_TILDE] = ACTIONS(213),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(213),
        [anon_sym_anchor] = ACTIONS(213),
        [sym_inline_email_rx] = ACTIONS(213),
        [anon_sym_footnote] = ACTIONS(213),
        [anon_sym_footnoteref] = ACTIONS(213),
        [anon_sym_image] = ACTIONS(213),
        [anon_sym_icon] = ACTIONS(213),
        [anon_sym_kbd] = ACTIONS(213),
        [anon_sym_btn] = ACTIONS(213),
        [anon_sym_http] = ACTIONS(213),
        [anon_sym_https] = ACTIONS(213),
        [anon_sym_file] = ACTIONS(213),
        [anon_sym_ftp] = ACTIONS(213),
        [anon_sym_irc] = ACTIONS(213),
        [anon_sym_link] = ACTIONS(213),
        [anon_sym_mailto] = ACTIONS(213),
        [anon_sym_stem] = ACTIONS(213),
        [anon_sym_latexmath] = ACTIONS(213),
        [anon_sym_asciimath] = ACTIONS(213),
        [anon_sym_menu] = ACTIONS(213),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(213),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(213),
        [anon_sym_pass] = ACTIONS(213),
        [anon_sym_LT_LT] = ACTIONS(213),
        [anon_sym_xref] = ACTIONS(213),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(215),
        [anon_sym_LBRACE] = ACTIONS(217),
        [anon_sym_RBRACE] = ACTIONS(217),
        [sym__word_no_digit] = ACTIONS(217),
        [sym__digits] = ACTIONS(217),
        [anon_sym_BANG] = ACTIONS(217),
        [anon_sym_DQUOTE] = ACTIONS(217),
        [anon_sym_POUND] = ACTIONS(217),
        [anon_sym_DOLLAR] = ACTIONS(217),
        [anon_sym_PERCENT] = ACTIONS(217),
        [anon_sym_AMP] = ACTIONS(217),
        [anon_sym_SQUOTE] = ACTIONS(217),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_RPAREN] = ACTIONS(217),
        [anon_sym_STAR] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(217),
        [anon_sym_COMMA] = ACTIONS(217),
        [anon_sym_DASH] = ACTIONS(217),
        [anon_sym_DOT] = ACTIONS(217),
        [anon_sym_SLASH] = ACTIONS(217),
        [anon_sym_COLON] = ACTIONS(217),
        [anon_sym_SEMI] = ACTIONS(217),
        [anon_sym_LT] = ACTIONS(217),
        [anon_sym_EQ] = ACTIONS(217),
        [anon_sym_GT] = ACTIONS(217),
        [anon_sym_QMARK] = ACTIONS(217),
        [anon_sym_AT] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(217),
        [anon_sym_BSLASH] = ACTIONS(217),
        [anon_sym_RBRACK] = ACTIONS(217),
        [anon_sym_CARET] = ACTIONS(217),
        [anon_sym__] = ACTIONS(217),
        [anon_sym_BQUOTE] = ACTIONS(217),
        [anon_sym_PIPE] = ACTIONS(217),
        [anon_sym_TILDE] = ACTIONS(217),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(217),
        [anon_sym_anchor] = ACTIONS(217),
        [sym_inline_email_rx] = ACTIONS(217),
        [anon_sym_footnote] = ACTIONS(217),
        [anon_sym_footnoteref] = ACTIONS(217),
        [anon_sym_image] = ACTIONS(217),
        [anon_sym_icon] = ACTIONS(217),
        [anon_sym_kbd] = ACTIONS(217),
        [anon_sym_btn] = ACTIONS(217),
        [anon_sym_http] = ACTIONS(217),
        [anon_sym_https] = ACTIONS(217),
        [anon_sym_file] = ACTIONS(217),
        [anon_sym_ftp] = ACTIONS(217),
        [anon_sym_irc] = ACTIONS(217),
        [anon_sym_link] = ACTIONS(217),
        [anon_sym_mailto] = ACTIONS(217),
        [anon_sym_stem] = ACTIONS(217),
        [anon_sym_latexmath] = ACTIONS(217),
        [anon_sym_asciimath] = ACTIONS(217),
        [anon_sym_menu] = ACTIONS(217),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(217),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
        [anon_sym_pass] = ACTIONS(217),
        [anon_sym_LT_LT] = ACTIONS(217),
        [anon_sym_xref] = ACTIONS(217),
    },
    [30] = {
        [ts_builtin_sym_end] = ACTIONS(219),
        [anon_sym_LBRACE] = ACTIONS(221),
        [anon_sym_RBRACE] = ACTIONS(221),
        [sym__word_no_digit] = ACTIONS(221),
        [sym__digits] = ACTIONS(221),
        [anon_sym_BANG] = ACTIONS(221),
        [anon_sym_DQUOTE] = ACTIONS(221),
        [anon_sym_POUND] = ACTIONS(221),
        [anon_sym_DOLLAR] = ACTIONS(221),
        [anon_sym_PERCENT] = ACTIONS(221),
        [anon_sym_AMP] = ACTIONS(221),
        [anon_sym_SQUOTE] = ACTIONS(221),
        [anon_sym_LPAREN] = ACTIONS(221),
        [anon_sym_RPAREN] = ACTIONS(221),
        [anon_sym_STAR] = ACTIONS(221),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_COMMA] = ACTIONS(221),
        [anon_sym_DASH] = ACTIONS(221),
        [anon_sym_DOT] = ACTIONS(221),
        [anon_sym_SLASH] = ACTIONS(221),
        [anon_sym_COLON] = ACTIONS(221),
        [anon_sym_SEMI] = ACTIONS(221),
        [anon_sym_LT] = ACTIONS(221),
        [anon_sym_EQ] = ACTIONS(221),
        [anon_sym_GT] = ACTIONS(221),
        [anon_sym_QMARK] = ACTIONS(221),
        [anon_sym_AT] = ACTIONS(221),
        [anon_sym_LBRACK] = ACTIONS(221),
        [anon_sym_BSLASH] = ACTIONS(221),
        [anon_sym_RBRACK] = ACTIONS(221),
        [anon_sym_CARET] = ACTIONS(221),
        [anon_sym__] = ACTIONS(221),
        [anon_sym_BQUOTE] = ACTIONS(221),
        [anon_sym_PIPE] = ACTIONS(221),
        [anon_sym_TILDE] = ACTIONS(221),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(221),
        [anon_sym_anchor] = ACTIONS(221),
        [sym_inline_email_rx] = ACTIONS(221),
        [anon_sym_footnote] = ACTIONS(221),
        [anon_sym_footnoteref] = ACTIONS(221),
        [anon_sym_image] = ACTIONS(221),
        [anon_sym_icon] = ACTIONS(221),
        [anon_sym_kbd] = ACTIONS(221),
        [anon_sym_btn] = ACTIONS(221),
        [anon_sym_http] = ACTIONS(221),
        [anon_sym_https] = ACTIONS(221),
        [anon_sym_file] = ACTIONS(221),
        [anon_sym_ftp] = ACTIONS(221),
        [anon_sym_irc] = ACTIONS(221),
        [anon_sym_link] = ACTIONS(221),
        [anon_sym_mailto] = ACTIONS(221),
        [anon_sym_stem] = ACTIONS(221),
        [anon_sym_latexmath] = ACTIONS(221),
        [anon_sym_asciimath] = ACTIONS(221),
        [anon_sym_menu] = ACTIONS(221),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(221),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(221),
        [anon_sym_pass] = ACTIONS(221),
        [anon_sym_LT_LT] = ACTIONS(221),
        [anon_sym_xref] = ACTIONS(221),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(223),
        [anon_sym_LBRACE] = ACTIONS(225),
        [anon_sym_RBRACE] = ACTIONS(225),
        [sym__word_no_digit] = ACTIONS(225),
        [sym__digits] = ACTIONS(225),
        [anon_sym_BANG] = ACTIONS(225),
        [anon_sym_DQUOTE] = ACTIONS(225),
        [anon_sym_POUND] = ACTIONS(225),
        [anon_sym_DOLLAR] = ACTIONS(225),
        [anon_sym_PERCENT] = ACTIONS(225),
        [anon_sym_AMP] = ACTIONS(225),
        [anon_sym_SQUOTE] = ACTIONS(225),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_RPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(225),
        [anon_sym_COMMA] = ACTIONS(225),
        [anon_sym_DASH] = ACTIONS(225),
        [anon_sym_DOT] = ACTIONS(225),
        [anon_sym_SLASH] = ACTIONS(225),
        [anon_sym_COLON] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_LT] = ACTIONS(225),
        [anon_sym_EQ] = ACTIONS(225),
        [anon_sym_GT] = ACTIONS(225),
        [anon_sym_QMARK] = ACTIONS(225),
        [anon_sym_AT] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(225),
        [anon_sym_BSLASH] = ACTIONS(225),
        [anon_sym_RBRACK] = ACTIONS(225),
        [anon_sym_CARET] = ACTIONS(225),
        [anon_sym__] = ACTIONS(225),
        [anon_sym_BQUOTE] = ACTIONS(225),
        [anon_sym_PIPE] = ACTIONS(225),
        [anon_sym_TILDE] = ACTIONS(225),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(225),
        [anon_sym_anchor] = ACTIONS(225),
        [sym_inline_email_rx] = ACTIONS(225),
        [anon_sym_footnote] = ACTIONS(225),
        [anon_sym_footnoteref] = ACTIONS(225),
        [anon_sym_image] = ACTIONS(225),
        [anon_sym_icon] = ACTIONS(225),
        [anon_sym_kbd] = ACTIONS(225),
        [anon_sym_btn] = ACTIONS(225),
        [anon_sym_http] = ACTIONS(225),
        [anon_sym_https] = ACTIONS(225),
        [anon_sym_file] = ACTIONS(225),
        [anon_sym_ftp] = ACTIONS(225),
        [anon_sym_irc] = ACTIONS(225),
        [anon_sym_link] = ACTIONS(225),
        [anon_sym_mailto] = ACTIONS(225),
        [anon_sym_stem] = ACTIONS(225),
        [anon_sym_latexmath] = ACTIONS(225),
        [anon_sym_asciimath] = ACTIONS(225),
        [anon_sym_menu] = ACTIONS(225),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(225),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(225),
        [anon_sym_pass] = ACTIONS(225),
        [anon_sym_LT_LT] = ACTIONS(225),
        [anon_sym_xref] = ACTIONS(225),
    },
    [32] = {
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
        [anon_sym_http] = ACTIONS(116),
        [anon_sym_https] = ACTIONS(116),
        [anon_sym_file] = ACTIONS(116),
        [anon_sym_ftp] = ACTIONS(116),
        [anon_sym_irc] = ACTIONS(116),
        [anon_sym_link] = ACTIONS(116),
        [anon_sym_mailto] = ACTIONS(116),
        [anon_sym_stem] = ACTIONS(116),
        [anon_sym_latexmath] = ACTIONS(116),
        [anon_sym_asciimath] = ACTIONS(116),
        [anon_sym_menu] = ACTIONS(116),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(116),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(116),
        [anon_sym_pass] = ACTIONS(116),
        [anon_sym_LT_LT] = ACTIONS(116),
        [anon_sym_xref] = ACTIONS(116),
    },
    [33] = {
        [ts_builtin_sym_end] = ACTIONS(227),
        [anon_sym_LBRACE] = ACTIONS(229),
        [anon_sym_RBRACE] = ACTIONS(229),
        [sym__word_no_digit] = ACTIONS(229),
        [sym__digits] = ACTIONS(229),
        [anon_sym_BANG] = ACTIONS(229),
        [anon_sym_DQUOTE] = ACTIONS(229),
        [anon_sym_POUND] = ACTIONS(229),
        [anon_sym_DOLLAR] = ACTIONS(229),
        [anon_sym_PERCENT] = ACTIONS(229),
        [anon_sym_AMP] = ACTIONS(229),
        [anon_sym_SQUOTE] = ACTIONS(229),
        [anon_sym_LPAREN] = ACTIONS(229),
        [anon_sym_RPAREN] = ACTIONS(229),
        [anon_sym_STAR] = ACTIONS(229),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_DOT] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_COLON] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_LT] = ACTIONS(229),
        [anon_sym_EQ] = ACTIONS(229),
        [anon_sym_GT] = ACTIONS(229),
        [anon_sym_QMARK] = ACTIONS(229),
        [anon_sym_AT] = ACTIONS(229),
        [anon_sym_LBRACK] = ACTIONS(229),
        [anon_sym_BSLASH] = ACTIONS(229),
        [anon_sym_RBRACK] = ACTIONS(229),
        [anon_sym_CARET] = ACTIONS(229),
        [anon_sym__] = ACTIONS(229),
        [anon_sym_BQUOTE] = ACTIONS(229),
        [anon_sym_PIPE] = ACTIONS(229),
        [anon_sym_TILDE] = ACTIONS(229),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(229),
        [anon_sym_anchor] = ACTIONS(229),
        [sym_inline_email_rx] = ACTIONS(229),
        [anon_sym_footnote] = ACTIONS(229),
        [anon_sym_footnoteref] = ACTIONS(229),
        [anon_sym_image] = ACTIONS(229),
        [anon_sym_icon] = ACTIONS(229),
        [anon_sym_kbd] = ACTIONS(229),
        [anon_sym_btn] = ACTIONS(229),
        [anon_sym_http] = ACTIONS(229),
        [anon_sym_https] = ACTIONS(229),
        [anon_sym_file] = ACTIONS(229),
        [anon_sym_ftp] = ACTIONS(229),
        [anon_sym_irc] = ACTIONS(229),
        [anon_sym_link] = ACTIONS(229),
        [anon_sym_mailto] = ACTIONS(229),
        [anon_sym_stem] = ACTIONS(229),
        [anon_sym_latexmath] = ACTIONS(229),
        [anon_sym_asciimath] = ACTIONS(229),
        [anon_sym_menu] = ACTIONS(229),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(229),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(229),
        [anon_sym_pass] = ACTIONS(229),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_xref] = ACTIONS(229),
    },
    [34] = {
        [ts_builtin_sym_end] = ACTIONS(231),
        [anon_sym_LBRACE] = ACTIONS(233),
        [anon_sym_RBRACE] = ACTIONS(233),
        [sym__word_no_digit] = ACTIONS(233),
        [sym__digits] = ACTIONS(233),
        [anon_sym_BANG] = ACTIONS(233),
        [anon_sym_DQUOTE] = ACTIONS(233),
        [anon_sym_POUND] = ACTIONS(233),
        [anon_sym_DOLLAR] = ACTIONS(233),
        [anon_sym_PERCENT] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(233),
        [anon_sym_SQUOTE] = ACTIONS(233),
        [anon_sym_LPAREN] = ACTIONS(233),
        [anon_sym_RPAREN] = ACTIONS(233),
        [anon_sym_STAR] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(233),
        [anon_sym_COMMA] = ACTIONS(233),
        [anon_sym_DASH] = ACTIONS(233),
        [anon_sym_DOT] = ACTIONS(233),
        [anon_sym_SLASH] = ACTIONS(233),
        [anon_sym_COLON] = ACTIONS(233),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_LT] = ACTIONS(233),
        [anon_sym_EQ] = ACTIONS(233),
        [anon_sym_GT] = ACTIONS(233),
        [anon_sym_QMARK] = ACTIONS(233),
        [anon_sym_AT] = ACTIONS(233),
        [anon_sym_LBRACK] = ACTIONS(233),
        [anon_sym_BSLASH] = ACTIONS(233),
        [anon_sym_RBRACK] = ACTIONS(233),
        [anon_sym_CARET] = ACTIONS(233),
        [anon_sym__] = ACTIONS(233),
        [anon_sym_BQUOTE] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_TILDE] = ACTIONS(233),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(233),
        [anon_sym_anchor] = ACTIONS(233),
        [sym_inline_email_rx] = ACTIONS(233),
        [anon_sym_footnote] = ACTIONS(233),
        [anon_sym_footnoteref] = ACTIONS(233),
        [anon_sym_image] = ACTIONS(233),
        [anon_sym_icon] = ACTIONS(233),
        [anon_sym_kbd] = ACTIONS(233),
        [anon_sym_btn] = ACTIONS(233),
        [anon_sym_http] = ACTIONS(233),
        [anon_sym_https] = ACTIONS(233),
        [anon_sym_file] = ACTIONS(233),
        [anon_sym_ftp] = ACTIONS(233),
        [anon_sym_irc] = ACTIONS(233),
        [anon_sym_link] = ACTIONS(233),
        [anon_sym_mailto] = ACTIONS(233),
        [anon_sym_stem] = ACTIONS(233),
        [anon_sym_latexmath] = ACTIONS(233),
        [anon_sym_asciimath] = ACTIONS(233),
        [anon_sym_menu] = ACTIONS(233),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(233),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(233),
        [anon_sym_pass] = ACTIONS(233),
        [anon_sym_LT_LT] = ACTIONS(233),
        [anon_sym_xref] = ACTIONS(233),
    },
    [35] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_LBRACE] = ACTIONS(237),
        [anon_sym_RBRACE] = ACTIONS(237),
        [sym__word_no_digit] = ACTIONS(237),
        [sym__digits] = ACTIONS(237),
        [anon_sym_BANG] = ACTIONS(237),
        [anon_sym_DQUOTE] = ACTIONS(237),
        [anon_sym_POUND] = ACTIONS(237),
        [anon_sym_DOLLAR] = ACTIONS(237),
        [anon_sym_PERCENT] = ACTIONS(237),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_SQUOTE] = ACTIONS(237),
        [anon_sym_LPAREN] = ACTIONS(237),
        [anon_sym_RPAREN] = ACTIONS(237),
        [anon_sym_STAR] = ACTIONS(237),
        [anon_sym_PLUS] = ACTIONS(237),
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_DASH] = ACTIONS(237),
        [anon_sym_DOT] = ACTIONS(237),
        [anon_sym_SLASH] = ACTIONS(237),
        [anon_sym_COLON] = ACTIONS(237),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_LT] = ACTIONS(237),
        [anon_sym_EQ] = ACTIONS(237),
        [anon_sym_GT] = ACTIONS(237),
        [anon_sym_QMARK] = ACTIONS(237),
        [anon_sym_AT] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(237),
        [anon_sym_BSLASH] = ACTIONS(237),
        [anon_sym_RBRACK] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym__] = ACTIONS(237),
        [anon_sym_BQUOTE] = ACTIONS(237),
        [anon_sym_PIPE] = ACTIONS(237),
        [anon_sym_TILDE] = ACTIONS(237),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(237),
        [anon_sym_anchor] = ACTIONS(237),
        [sym_inline_email_rx] = ACTIONS(237),
        [anon_sym_footnote] = ACTIONS(237),
        [anon_sym_footnoteref] = ACTIONS(237),
        [anon_sym_image] = ACTIONS(237),
        [anon_sym_icon] = ACTIONS(237),
        [anon_sym_kbd] = ACTIONS(237),
        [anon_sym_btn] = ACTIONS(237),
        [anon_sym_http] = ACTIONS(237),
        [anon_sym_https] = ACTIONS(237),
        [anon_sym_file] = ACTIONS(237),
        [anon_sym_ftp] = ACTIONS(237),
        [anon_sym_irc] = ACTIONS(237),
        [anon_sym_link] = ACTIONS(237),
        [anon_sym_mailto] = ACTIONS(237),
        [anon_sym_stem] = ACTIONS(237),
        [anon_sym_latexmath] = ACTIONS(237),
        [anon_sym_asciimath] = ACTIONS(237),
        [anon_sym_menu] = ACTIONS(237),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(237),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(237),
        [anon_sym_pass] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(237),
        [anon_sym_xref] = ACTIONS(237),
    },
    [36] = {
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
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(138),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(138),
        [anon_sym_pass] = ACTIONS(138),
        [anon_sym_LT_LT] = ACTIONS(138),
        [anon_sym_xref] = ACTIONS(138),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 3,
    ACTIONS(239),
    1,
    anon_sym_RBRACK,
    STATE(37),
    1,
    aux_sym_inline_image_macro_repeat1,
    ACTIONS(241),
    3,
    aux_sym_inline_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [12] = 3,
    ACTIONS(244),
    1,
    anon_sym_RBRACK,
    STATE(37),
    1,
    aux_sym_inline_image_macro_repeat1,
    ACTIONS(246),
    3,
    aux_sym_inline_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [24] = 3,
    ACTIONS(248),
    1,
    anon_sym_RBRACK,
    STATE(38),
    1,
    aux_sym_inline_image_macro_repeat1,
    ACTIONS(250),
    3,
    aux_sym_inline_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [36] = 5,
    ACTIONS(252),
    1,
    anon_sym_PLUS,
    ACTIONS(254),
    1,
    anon_sym_COMMA,
    ACTIONS(256),
    1,
    anon_sym_RBRACK,
    STATE(49),
    1,
    aux_sym_inline_kbd_macro_repeat2,
    STATE(52),
    1,
    aux_sym_inline_kbd_macro_repeat1,
    [52] = 3,
    ACTIONS(258),
    1,
    anon_sym_DOT,
    STATE(43),
    1,
    aux_sym_link_repeat1,
    ACTIONS(120),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [63] = 3,
    ACTIONS(258),
    1,
    anon_sym_DOT,
    STATE(41),
    1,
    aux_sym_link_repeat1,
    ACTIONS(126),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [74] = 3,
    ACTIONS(260),
    1,
    anon_sym_DOT,
    STATE(43),
    1,
    aux_sym_link_repeat1,
    ACTIONS(136),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [85] = 2,
    STATE(40),
    1,
    sym_key,
    ACTIONS(263),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [93] = 3,
    ACTIONS(265),
    1,
    anon_sym_COMMA,
    ACTIONS(268),
    1,
    anon_sym_RBRACK,
    STATE(45),
    1,
    aux_sym_inline_kbd_macro_repeat2,
    [103] = 2,
    STATE(56),
    1,
    sym_key,
    ACTIONS(263),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [111] = 2,
    STATE(54),
    1,
    sym_key,
    ACTIONS(263),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [119] = 1,
    ACTIONS(136),
    3,
    anon_sym_DQUOTE,
    anon_sym_DOT,
    anon_sym_LBRACK,
    [125] = 3,
    ACTIONS(254),
    1,
    anon_sym_COMMA,
    ACTIONS(270),
    1,
    anon_sym_RBRACK,
    STATE(45),
    1,
    aux_sym_inline_kbd_macro_repeat2,
    [135] = 1,
    ACTIONS(272),
    3,
    anon_sym_PLUS,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [141] = 3,
    ACTIONS(274),
    1,
    anon_sym_PLUS,
    ACTIONS(277),
    1,
    anon_sym_RBRACK,
    STATE(51),
    1,
    aux_sym_inline_kbd_macro_repeat1,
    [151] = 3,
    ACTIONS(252),
    1,
    anon_sym_PLUS,
    ACTIONS(270),
    1,
    anon_sym_RBRACK,
    STATE(51),
    1,
    aux_sym_inline_kbd_macro_repeat1,
    [161] = 2,
    ACTIONS(279),
    1,
    anon_sym_COMMA,
    ACTIONS(281),
    1,
    anon_sym_RBRACK,
    [168] = 1,
    ACTIONS(277),
    2,
    anon_sym_PLUS,
    anon_sym_RBRACK,
    [173] = 2,
    ACTIONS(283),
    1,
    aux_sym_inline_anchor_rx_token2,
    ACTIONS(285),
    1,
    aux_sym_inline_footnote_macro_token1,
    [180] = 1,
    ACTIONS(268),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [185] = 2,
    ACTIONS(287),
    1,
    aux_sym_inline_anchor_rx_token2,
    ACTIONS(289),
    1,
    aux_sym_inline_footnote_macro_token1,
    [192] = 2,
    ACTIONS(291),
    1,
    anon_sym_DQUOTE,
    ACTIONS(293),
    1,
    anon_sym_LBRACK,
    [199] = 2,
    ACTIONS(295),
    1,
    anon_sym_COMMA,
    ACTIONS(297),
    1,
    anon_sym_RBRACK_RBRACK,
    [206] = 2,
    ACTIONS(299),
    1,
    aux_sym_replacement_token1,
    ACTIONS(301),
    1,
    anon_sym_LBRACK,
    [213] = 2,
    ACTIONS(303),
    1,
    anon_sym_COMMA,
    ACTIONS(305),
    1,
    anon_sym_RBRACK,
    [220] = 1,
    ACTIONS(307),
    1,
    aux_sym_inline_image_macro_token1,
    [224] = 1,
    ACTIONS(309),
    1,
    aux_sym_replacement_token1,
    [228] = 1,
    ACTIONS(311),
    1,
    anon_sym_RBRACK_RBRACK,
    [232] = 1,
    ACTIONS(313),
    1,
    aux_sym_inline_anchor_rx_token2,
    [236] = 1,
    ACTIONS(315),
    1,
    aux_sym_replacement_token1,
    [240] = 1,
    ACTIONS(305),
    1,
    anon_sym_RBRACK,
    [244] = 1,
    ACTIONS(317),
    1,
    anon_sym_RBRACK,
    [248] = 1,
    ACTIONS(319),
    1,
    anon_sym_LBRACK,
    [252] = 1,
    ACTIONS(321),
    1,
    anon_sym_GT_GT,
    [256] = 1,
    ACTIONS(323),
    1,
    anon_sym_LBRACK,
    [260] = 1,
    ACTIONS(325),
    1,
    sym__link_component,
    [264] = 1,
    ACTIONS(327),
    1,
    anon_sym_LBRACK,
    [268] = 1,
    ACTIONS(329),
    1,
    aux_sym_inline_anchor_rx_token2,
    [272] = 1,
    ACTIONS(331),
    1,
    anon_sym_RBRACK,
    [276] = 1,
    ACTIONS(333),
    1,
    aux_sym_inline_anchor_rx_token2,
    [280] = 1,
    ACTIONS(335),
    1,
    aux_sym_inline_anchor_rx_token2,
    [284] = 1,
    ACTIONS(337),
    1,
    aux_sym_inline_anchor_rx_token2,
    [288] = 1,
    ACTIONS(339),
    1,
    aux_sym_inline_anchor_rx_token2,
    [292] = 1,
    ACTIONS(341),
    1,
    anon_sym_LBRACK,
    [296] = 1,
    ACTIONS(343),
    1,
    anon_sym_DQUOTE,
    [300] = 1,
    ACTIONS(345),
    1,
    anon_sym_LBRACK,
    [304] = 1,
    ACTIONS(347),
    1,
    anon_sym_RBRACK,
    [308] = 1,
    ACTIONS(281),
    1,
    anon_sym_RBRACK,
    [312] = 1,
    ACTIONS(349),
    1,
    anon_sym_LBRACK,
    [316] = 1,
    ACTIONS(351),
    1,
    anon_sym_LBRACK,
    [320] = 1,
    ACTIONS(353),
    1,
    aux_sym_inline_footnote_macro_token2,
    [324] = 1,
    ACTIONS(355),
    1,
    aux_sym_inline_anchor_rx_token1,
    [328] = 1,
    ACTIONS(357),
    1,
    aux_sym_auto_link_token1,
    [332] = 1,
    ACTIONS(359),
    1,
    aux_sym_replacement_token1,
    [336] = 1,
    ACTIONS(361),
    1,
    aux_sym_inline_xref_token1,
    [340] = 1,
    ACTIONS(363),
    1,
    anon_sym_quotes,
    [344] = 1,
    ACTIONS(365),
    1,
    anon_sym_DOLLAR_DOLLAR,
    [348] = 1,
    ACTIONS(365),
    1,
    anon_sym_PLUS_PLUS_PLUS,
    [352] = 1,
    ACTIONS(367),
    1,
    anon_sym_RBRACK,
    [356] = 1,
    ACTIONS(369),
    1,
    anon_sym_LBRACK,
    [360] = 1,
    ACTIONS(371),
    1,
    anon_sym_RBRACK,
    [364] = 1,
    ACTIONS(373),
    1,
    aux_sym_inline_link_macro_token1,
    [368] = 1,
    ACTIONS(375),
    1,
    anon_sym_RBRACK,
    [372] = 1,
    ACTIONS(377),
    1,
    anon_sym_RBRACK,
    [376] = 1,
    ACTIONS(379),
    1,
    anon_sym_RBRACK,
    [380] = 1,
    ACTIONS(381),
    1,
    sym__link_component,
    [384] = 1,
    ACTIONS(383),
    1,
    anon_sym_LBRACK,
    [388] = 1,
    ACTIONS(385),
    1,
    aux_sym_replacement_token1,
    [392] = 1,
    ACTIONS(387),
    1,
    aux_sym_inline_footnote_macro_token2,
    [396] = 1,
    ACTIONS(389),
    1,
    anon_sym_RBRACK,
    [400] = 1,
    ACTIONS(365),
    1,
    anon_sym_BQUOTE,
    [404] = 1,
    ACTIONS(365),
    1,
    anon_sym_PLUS,
    [408] = 1,
    ACTIONS(391),
    1,
    anon_sym_RBRACE,
    [412] = 1,
    ACTIONS(393),
    1,
    ts_builtin_sym_end,
    [416] = 1,
    ACTIONS(395),
    1,
    anon_sym_COLON,
    [420] = 1,
    ACTIONS(397),
    1,
    aux_sym_replacement_token1,
    [424] = 1,
    ACTIONS(399),
    1,
    anon_sym_COLON,
    [428] = 1,
    ACTIONS(401),
    1,
    aux_sym_replacement_token1,
    [432] = 1,
    ACTIONS(403),
    1,
    aux_sym_replacement_token1,
    [436] = 1,
    ACTIONS(405),
    1,
    anon_sym_COLON,
    [440] = 1,
    ACTIONS(407),
    1,
    anon_sym_COLON,
    [444] = 1,
    ACTIONS(409),
    1,
    anon_sym_RBRACK,
    [448] = 1,
    ACTIONS(411),
    1,
    anon_sym_COLON,
    [452] = 1,
    ACTIONS(413),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [456] = 1,
    ACTIONS(415),
    1,
    anon_sym_COLON,
    [460] = 1,
    ACTIONS(417),
    1,
    anon_sym_COLON,
    [464] = 1,
    ACTIONS(419),
    1,
    anon_sym_COLON,
    [468] = 1,
    ACTIONS(421),
    1,
    anon_sym_COLON,
    [472] = 1,
    ACTIONS(423),
    1,
    sym__link_component,
    [476] = 1,
    ACTIONS(425),
    1,
    sym__link_component,
    [480] = 1,
    ACTIONS(427),
    1,
    anon_sym_COLON_SLASH_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(37)] = 0,
    [SMALL_STATE(38)] = 12,
    [SMALL_STATE(39)] = 24,
    [SMALL_STATE(40)] = 36,
    [SMALL_STATE(41)] = 52,
    [SMALL_STATE(42)] = 63,
    [SMALL_STATE(43)] = 74,
    [SMALL_STATE(44)] = 85,
    [SMALL_STATE(45)] = 93,
    [SMALL_STATE(46)] = 103,
    [SMALL_STATE(47)] = 111,
    [SMALL_STATE(48)] = 119,
    [SMALL_STATE(49)] = 125,
    [SMALL_STATE(50)] = 135,
    [SMALL_STATE(51)] = 141,
    [SMALL_STATE(52)] = 151,
    [SMALL_STATE(53)] = 161,
    [SMALL_STATE(54)] = 168,
    [SMALL_STATE(55)] = 173,
    [SMALL_STATE(56)] = 180,
    [SMALL_STATE(57)] = 185,
    [SMALL_STATE(58)] = 192,
    [SMALL_STATE(59)] = 199,
    [SMALL_STATE(60)] = 206,
    [SMALL_STATE(61)] = 213,
    [SMALL_STATE(62)] = 220,
    [SMALL_STATE(63)] = 224,
    [SMALL_STATE(64)] = 228,
    [SMALL_STATE(65)] = 232,
    [SMALL_STATE(66)] = 236,
    [SMALL_STATE(67)] = 240,
    [SMALL_STATE(68)] = 244,
    [SMALL_STATE(69)] = 248,
    [SMALL_STATE(70)] = 252,
    [SMALL_STATE(71)] = 256,
    [SMALL_STATE(72)] = 260,
    [SMALL_STATE(73)] = 264,
    [SMALL_STATE(74)] = 268,
    [SMALL_STATE(75)] = 272,
    [SMALL_STATE(76)] = 276,
    [SMALL_STATE(77)] = 280,
    [SMALL_STATE(78)] = 284,
    [SMALL_STATE(79)] = 288,
    [SMALL_STATE(80)] = 292,
    [SMALL_STATE(81)] = 296,
    [SMALL_STATE(82)] = 300,
    [SMALL_STATE(83)] = 304,
    [SMALL_STATE(84)] = 308,
    [SMALL_STATE(85)] = 312,
    [SMALL_STATE(86)] = 316,
    [SMALL_STATE(87)] = 320,
    [SMALL_STATE(88)] = 324,
    [SMALL_STATE(89)] = 328,
    [SMALL_STATE(90)] = 332,
    [SMALL_STATE(91)] = 336,
    [SMALL_STATE(92)] = 340,
    [SMALL_STATE(93)] = 344,
    [SMALL_STATE(94)] = 348,
    [SMALL_STATE(95)] = 352,
    [SMALL_STATE(96)] = 356,
    [SMALL_STATE(97)] = 360,
    [SMALL_STATE(98)] = 364,
    [SMALL_STATE(99)] = 368,
    [SMALL_STATE(100)] = 372,
    [SMALL_STATE(101)] = 376,
    [SMALL_STATE(102)] = 380,
    [SMALL_STATE(103)] = 384,
    [SMALL_STATE(104)] = 388,
    [SMALL_STATE(105)] = 392,
    [SMALL_STATE(106)] = 396,
    [SMALL_STATE(107)] = 400,
    [SMALL_STATE(108)] = 404,
    [SMALL_STATE(109)] = 408,
    [SMALL_STATE(110)] = 412,
    [SMALL_STATE(111)] = 416,
    [SMALL_STATE(112)] = 420,
    [SMALL_STATE(113)] = 424,
    [SMALL_STATE(114)] = 428,
    [SMALL_STATE(115)] = 432,
    [SMALL_STATE(116)] = 436,
    [SMALL_STATE(117)] = 440,
    [SMALL_STATE(118)] = 444,
    [SMALL_STATE(119)] = 448,
    [SMALL_STATE(120)] = 452,
    [SMALL_STATE(121)] = 456,
    [SMALL_STATE(122)] = 460,
    [SMALL_STATE(123)] = 464,
    [SMALL_STATE(124)] = 468,
    [SMALL_STATE(125)] = 472,
    [SMALL_STATE(126)] = 476,
    [SMALL_STATE(127)] = 480,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(4),
    [5] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(32),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(19),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(7),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(8),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(9),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(66),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(124),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(2),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(123),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(122),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(121),
    [27] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(120),
    [29] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(119),
    [31] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(117),
    [33] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(116),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(115),
    [37] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(114),
    [39] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(113),
    [41] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(112),
    [43] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(111),
    [45] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [47] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(3),
    [49] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    [51] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(4),
    [54] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(32),
    [57] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(19),
    [60] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(7),
    [63] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(8),
    [66] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(9),
    [69] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(66),
    [72] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(124),
    [75] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(3),
    [78] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(123),
    [81] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(122),
    [84] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(121),
    [87] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(120),
    [90] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(119),
    [93] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(117),
    [96] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(116),
    [99] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(115),
    [102] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(114),
    [105] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(113),
    [108] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(112),
    [111] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(111),
    [114] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [116] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [118] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(109),
    [120] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link, 4, 0, 0),
    [122] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link, 4, 0, 0),
    [124] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(72),
    [126] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link, 3, 0, 0),
    [128] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link, 3, 0, 0),
    [130] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(127),
    [132] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(108),
    [134] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(107),
    [136] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_link_repeat1, 2, 0, 0),
    [138] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_repeat1, 2, 0, 0),
    [140] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_repeat1, 2, 0, 0),
    SHIFT_REPEAT(72),
    [143] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [145] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [147] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [149] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [151] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 8, 0, 2),
    [153] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 8, 0, 2),
    [155] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 7, 0, 0),
    [157] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 7, 0, 0),
    [159] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_xref, 6, 0, 3),
    [161] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_xref, 6, 0, 3),
    [163] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_passthrough, 6, 0, 0),
    [165] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_passthrough, 6, 0, 0),
    [167] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_menu_macro, 6, 0, 0),
    [169] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_menu_macro, 6, 0, 0),
    [171] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_link_macro, 6, 0, 0),
    [173] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_link_macro, 6, 0, 0),
    [175] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_word, 1, 0, 0),
    [177] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_word, 1, 0, 0),
    [179] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_xref, 4, 0, 1),
    [181] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_xref, 4, 0, 1),
    [183] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_kbd_macro, 6, 0, 0),
    [185] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_kbd_macro, 6, 0, 0),
    [187] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [189] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [191] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 5, 0, 0),
    [193] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 5, 0, 0),
    [195] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_kbd_macro, 5, 0, 0),
    [197] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_kbd_macro, 5, 0, 0),
    [199] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 3, 0, 0),
    [201] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 3, 0, 0),
    [203] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 5, 0, 0),
    [205] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 5, 0, 0),
    [207] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_image_macro, 6, 0, 0),
    [209] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_image_macro, 6, 0, 0),
    [211] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_footnote_macro, 6, 0, 2),
    [213] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_footnote_macro, 6, 0, 2),
    [215] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_passthrough, 3, 0, 0),
    [217] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_passthrough, 3, 0, 0),
    [219] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_anchor_rx, 6, 0, 0),
    [221] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_anchor_rx, 6, 0, 0),
    [223] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_image_macro, 5, 0, 0),
    [225] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_image_macro, 5, 0, 0),
    [227] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [229] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [231] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_math_macro, 5, 0, 0),
    [233] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_math_macro, 5, 0, 0),
    [235] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 0),
    [237] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 0),
    [239] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_image_macro_repeat1, 2, 0, 0),
    [241] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_image_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(37),
    [244] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(27),
    [246] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(37),
    [248] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(31),
    [250] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(38),
    [252] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [254] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [256] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [258] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(126),
    [260] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_link_repeat1, 2, 0, 0),
    SHIFT_REPEAT(126),
    [263] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [265] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_inline_kbd_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(46),
    [268] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_kbd_macro_repeat2, 2, 0, 0),
    [270] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [272] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_key, 1, 0, 0),
    [274] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_inline_kbd_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(47),
    [277] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_kbd_macro_repeat1, 2, 0, 0),
    [279] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(105),
    [281] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [283] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [285] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(53),
    [287] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [289] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(61),
    [291] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [293] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(89),
    [295] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [297] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [299] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [301] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [303] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [305] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [307] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [309] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(73),
    [311] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [313] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(83),
    [315] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [317] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [319] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [321] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [323] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [325] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [327] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [329] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(97),
    [331] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [333] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(99),
    [335] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(100),
    [337] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [339] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(101),
    [341] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [343] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(33),
    [345] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [347] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [349] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [351] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [353] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(106),
    [355] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [357] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(95),
    [359] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(69),
    [361] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [363] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(71),
    [365] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(29),
    [367] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(81),
    [369] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [371] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [373] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [375] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [377] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [379] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [381] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [383] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [385] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(86),
    [387] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(118),
    [389] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [391] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [393] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [395] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(90),
    [397] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [399] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [401] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [403] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(94),
    [405] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [407] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
    [409] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [411] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(98),
    [413] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(102),
    [415] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(103),
    [417] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [419] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [421] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(104),
    [423] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [425] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [427] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(125),
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
