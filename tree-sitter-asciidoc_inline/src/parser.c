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
#define STATE_COUNT 193
#define LARGE_STATE_COUNT 45
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 3
#define TOKEN_COUNT 99
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 12

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
    aux_sym_anchor_token1 = 37,
    anon_sym_RBRACK_RBRACK = 38,
    anon_sym_anchor = 39,
    aux_sym_anchor_token2 = 40,
    sym_email = 41,
    anon_sym_footnote = 42,
    anon_sym_footnoteref = 43,
    aux_sym_footnote_macro_token1 = 44,
    aux_sym_footnote_macro_token2 = 45,
    anon_sym_image = 46,
    anon_sym_icon = 47,
    aux_sym_image_macro_token1 = 48,
    aux_sym_image_macro_token2 = 49,
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
    aux_sym_link_macro_token1 = 65,
    anon_sym_stem = 66,
    anon_sym_latexmath = 67,
    anon_sym_asciimath = 68,
    anon_sym_menu = 69,
    anon_sym_PLUS_PLUS_PLUS = 70,
    anon_sym_DOLLAR_DOLLAR = 71,
    anon_sym_pass = 72,
    anon_sym_quotes = 73,
    anon_sym_LT_LT = 74,
    aux_sym_xref_token1 = 75,
    anon_sym_GT_GT = 76,
    anon_sym_xref = 77,
    aux_sym_xref_token2 = 78,
    anon_sym_STAR2 = 79,
    aux_sym_emphasis_token1 = 80,
    anon_sym_BSLASH_STAR = 81,
    anon_sym_STAR3 = 82,
    anon_sym_STAR_STAR = 83,
    anon_sym__2 = 84,
    aux_sym_ltalic_token1 = 85,
    anon_sym_BSLASH_ = 86,
    anon_sym__3 = 87,
    anon_sym___ = 88,
    anon_sym_BQUOTE2 = 89,
    aux_sym_monospace_token1 = 90,
    anon_sym_BSLASH_BQUOTE = 91,
    anon_sym_BQUOTE3 = 92,
    anon_sym_BQUOTE_BQUOTE = 93,
    anon_sym_POUND2 = 94,
    aux_sym_highlight_token1 = 95,
    anon_sym_BSLASH_POUND = 96,
    anon_sym_POUND3 = 97,
    anon_sym_POUND_POUND = 98,
    sym_inline = 99,
    sym_replacement = 100,
    sym__word = 101,
    sym_punctuation = 102,
    sym_anchor = 103,
    sym_footnote_macro = 104,
    sym_image_macro = 105,
    sym_kbd_macro = 106,
    sym_key = 107,
    sym_auto_link = 108,
    sym_link_url = 109,
    sym_link_macro = 110,
    sym_math_macro = 111,
    sym_menu_macro = 112,
    sym_passthrough = 113,
    sym_xref = 114,
    sym_emphasis = 115,
    sym_ltalic = 116,
    sym_monospace = 117,
    sym_highlight = 118,
    aux_sym_inline_repeat1 = 119,
    aux_sym_image_macro_repeat1 = 120,
    aux_sym_kbd_macro_repeat1 = 121,
    aux_sym_kbd_macro_repeat2 = 122,
    aux_sym_link_url_repeat1 = 123,
    aux_sym_emphasis_repeat1 = 124,
    aux_sym_ltalic_repeat1 = 125,
    aux_sym_monospace_repeat1 = 126,
    aux_sym_highlight_repeat1 = 127,
    alias_sym_intrinsic_attributes = 128,
    alias_sym_keys = 129,
    alias_sym_math = 130,
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
    [aux_sym_anchor_token1] = "reftext",
    [anon_sym_RBRACK_RBRACK] = "]]",
    [anon_sym_anchor] = "anchor",
    [aux_sym_anchor_token2] = "anchor_token2",
    [sym_email] = "email",
    [anon_sym_footnote] = "footnote",
    [anon_sym_footnoteref] = "footnoteref",
    [aux_sym_footnote_macro_token1] = "id",
    [aux_sym_footnote_macro_token2] = "reftext",
    [anon_sym_image] = "image",
    [anon_sym_icon] = "icon",
    [aux_sym_image_macro_token1] = "link_url",
    [aux_sym_image_macro_token2] = "id",
    [anon_sym_BSLASH_LBRACK] = "id",
    [anon_sym_BSLASH_RBRACK] = "\\]",
    [anon_sym_kbd] = "kbd",
    [anon_sym_btn] = "btn",
    [aux_sym_key_token1] = "key_token1",
    [aux_sym_auto_link_token1] = "link_label",
    [anon_sym_http] = "http",
    [anon_sym_https] = "https",
    [anon_sym_file] = "file",
    [anon_sym_ftp] = "ftp",
    [anon_sym_irc] = "irc",
    [anon_sym_COLON_SLASH_SLASH] = "://",
    [sym__link_component] = "_link_component",
    [anon_sym_link] = "link",
    [anon_sym_mailto] = "mailto",
    [aux_sym_link_macro_token1] = "link",
    [anon_sym_stem] = "stem",
    [anon_sym_latexmath] = "latexmath",
    [anon_sym_asciimath] = "asciimath",
    [anon_sym_menu] = "menu",
    [anon_sym_PLUS_PLUS_PLUS] = "+++",
    [anon_sym_DOLLAR_DOLLAR] = "$$",
    [anon_sym_pass] = "pass",
    [anon_sym_quotes] = "quotes",
    [anon_sym_LT_LT] = "<<",
    [aux_sym_xref_token1] = "reftext",
    [anon_sym_GT_GT] = ">>",
    [anon_sym_xref] = "xref",
    [aux_sym_xref_token2] = "id",
    [anon_sym_STAR2] = " *",
    [aux_sym_emphasis_token1] = "emphasis_token1",
    [anon_sym_BSLASH_STAR] = "\\*",
    [anon_sym_STAR3] = "* ",
    [anon_sym_STAR_STAR] = "**",
    [anon_sym__2] = " _",
    [aux_sym_ltalic_token1] = "ltalic_token1",
    [anon_sym_BSLASH_] = "\\_",
    [anon_sym__3] = "_ ",
    [anon_sym___] = "__",
    [anon_sym_BQUOTE2] = " `",
    [aux_sym_monospace_token1] = "monospace_token1",
    [anon_sym_BSLASH_BQUOTE] = "\\`",
    [anon_sym_BQUOTE3] = "` ",
    [anon_sym_BQUOTE_BQUOTE] = "``",
    [anon_sym_POUND2] = " #",
    [aux_sym_highlight_token1] = "highlight_token1",
    [anon_sym_BSLASH_POUND] = "\\#",
    [anon_sym_POUND3] = "# ",
    [anon_sym_POUND_POUND] = "##",
    [sym_inline] = "inline",
    [sym_replacement] = "replacement",
    [sym__word] = "_word",
    [sym_punctuation] = "punctuation",
    [sym_anchor] = "anchor",
    [sym_footnote_macro] = "footnote_macro",
    [sym_image_macro] = "image_macro",
    [sym_kbd_macro] = "kbd_macro",
    [sym_key] = "key",
    [sym_auto_link] = "auto_link",
    [sym_link_url] = "link_url",
    [sym_link_macro] = "link_macro",
    [sym_math_macro] = "math_macro",
    [sym_menu_macro] = "menu_macro",
    [sym_passthrough] = "passthrough",
    [sym_xref] = "xref",
    [sym_emphasis] = "emphasis",
    [sym_ltalic] = "ltalic",
    [sym_monospace] = "monospace",
    [sym_highlight] = "highlight",
    [aux_sym_inline_repeat1] = "inline_repeat1",
    [aux_sym_image_macro_repeat1] = "image_macro_repeat1",
    [aux_sym_kbd_macro_repeat1] = "kbd_macro_repeat1",
    [aux_sym_kbd_macro_repeat2] = "kbd_macro_repeat2",
    [aux_sym_link_url_repeat1] = "link_url_repeat1",
    [aux_sym_emphasis_repeat1] = "emphasis_repeat1",
    [aux_sym_ltalic_repeat1] = "ltalic_repeat1",
    [aux_sym_monospace_repeat1] = "monospace_repeat1",
    [aux_sym_highlight_repeat1] = "highlight_repeat1",
    [alias_sym_intrinsic_attributes] = "intrinsic_attributes",
    [alias_sym_keys] = "keys",
    [alias_sym_math] = "math",
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
    [aux_sym_anchor_token1] = aux_sym_anchor_token1,
    [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
    [anon_sym_anchor] = anon_sym_anchor,
    [aux_sym_anchor_token2] = aux_sym_anchor_token2,
    [sym_email] = sym_email,
    [anon_sym_footnote] = anon_sym_footnote,
    [anon_sym_footnoteref] = anon_sym_footnoteref,
    [aux_sym_footnote_macro_token1] = aux_sym_footnote_macro_token1,
    [aux_sym_footnote_macro_token2] = aux_sym_anchor_token1,
    [anon_sym_image] = anon_sym_image,
    [anon_sym_icon] = anon_sym_icon,
    [aux_sym_image_macro_token1] = sym_link_url,
    [aux_sym_image_macro_token2] = aux_sym_footnote_macro_token1,
    [anon_sym_BSLASH_LBRACK] = aux_sym_footnote_macro_token1,
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
    [aux_sym_link_macro_token1] = aux_sym_link_macro_token1,
    [anon_sym_stem] = anon_sym_stem,
    [anon_sym_latexmath] = anon_sym_latexmath,
    [anon_sym_asciimath] = anon_sym_asciimath,
    [anon_sym_menu] = anon_sym_menu,
    [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
    [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
    [anon_sym_pass] = anon_sym_pass,
    [anon_sym_quotes] = anon_sym_quotes,
    [anon_sym_LT_LT] = anon_sym_LT_LT,
    [aux_sym_xref_token1] = aux_sym_anchor_token1,
    [anon_sym_GT_GT] = anon_sym_GT_GT,
    [anon_sym_xref] = anon_sym_xref,
    [aux_sym_xref_token2] = aux_sym_footnote_macro_token1,
    [anon_sym_STAR2] = anon_sym_STAR2,
    [aux_sym_emphasis_token1] = aux_sym_emphasis_token1,
    [anon_sym_BSLASH_STAR] = anon_sym_BSLASH_STAR,
    [anon_sym_STAR3] = anon_sym_STAR3,
    [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
    [anon_sym__2] = anon_sym__2,
    [aux_sym_ltalic_token1] = aux_sym_ltalic_token1,
    [anon_sym_BSLASH_] = anon_sym_BSLASH_,
    [anon_sym__3] = anon_sym__3,
    [anon_sym___] = anon_sym___,
    [anon_sym_BQUOTE2] = anon_sym_BQUOTE2,
    [aux_sym_monospace_token1] = aux_sym_monospace_token1,
    [anon_sym_BSLASH_BQUOTE] = anon_sym_BSLASH_BQUOTE,
    [anon_sym_BQUOTE3] = anon_sym_BQUOTE3,
    [anon_sym_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE,
    [anon_sym_POUND2] = anon_sym_POUND2,
    [aux_sym_highlight_token1] = aux_sym_highlight_token1,
    [anon_sym_BSLASH_POUND] = anon_sym_BSLASH_POUND,
    [anon_sym_POUND3] = anon_sym_POUND3,
    [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
    [sym_inline] = sym_inline,
    [sym_replacement] = sym_replacement,
    [sym__word] = sym__word,
    [sym_punctuation] = sym_punctuation,
    [sym_anchor] = sym_anchor,
    [sym_footnote_macro] = sym_footnote_macro,
    [sym_image_macro] = sym_image_macro,
    [sym_kbd_macro] = sym_kbd_macro,
    [sym_key] = sym_key,
    [sym_auto_link] = sym_auto_link,
    [sym_link_url] = sym_link_url,
    [sym_link_macro] = sym_link_macro,
    [sym_math_macro] = sym_math_macro,
    [sym_menu_macro] = sym_menu_macro,
    [sym_passthrough] = sym_passthrough,
    [sym_xref] = sym_xref,
    [sym_emphasis] = sym_emphasis,
    [sym_ltalic] = sym_ltalic,
    [sym_monospace] = sym_monospace,
    [sym_highlight] = sym_highlight,
    [aux_sym_inline_repeat1] = aux_sym_inline_repeat1,
    [aux_sym_image_macro_repeat1] = aux_sym_image_macro_repeat1,
    [aux_sym_kbd_macro_repeat1] = aux_sym_kbd_macro_repeat1,
    [aux_sym_kbd_macro_repeat2] = aux_sym_kbd_macro_repeat2,
    [aux_sym_link_url_repeat1] = aux_sym_link_url_repeat1,
    [aux_sym_emphasis_repeat1] = aux_sym_emphasis_repeat1,
    [aux_sym_ltalic_repeat1] = aux_sym_ltalic_repeat1,
    [aux_sym_monospace_repeat1] = aux_sym_monospace_repeat1,
    [aux_sym_highlight_repeat1] = aux_sym_highlight_repeat1,
    [alias_sym_intrinsic_attributes] = alias_sym_intrinsic_attributes,
    [alias_sym_keys] = alias_sym_keys,
    [alias_sym_math] = alias_sym_math,
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
    [aux_sym_anchor_token1] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_RBRACK_RBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_anchor] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_anchor_token2] = {
        .visible = false,
        .named = false,
    },
    [sym_email] = {
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
    [aux_sym_footnote_macro_token1] = {
        .visible = true,
        .named = true,
    },
    [aux_sym_footnote_macro_token2] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_image] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_icon] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_image_macro_token1] = {
        .visible = true,
        .named = true,
    },
    [aux_sym_image_macro_token2] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_BSLASH_LBRACK] = {
        .visible = true,
        .named = true,
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
        .visible = true,
        .named = true,
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
    [aux_sym_link_macro_token1] = {
        .visible = true,
        .named = true,
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
    [aux_sym_xref_token1] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_GT_GT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_xref] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_xref_token2] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_STAR2] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_emphasis_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_BSLASH_STAR] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_STAR3] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_STAR_STAR] = {
        .visible = true,
        .named = false,
    },
    [anon_sym__2] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_ltalic_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_BSLASH_] = {
        .visible = true,
        .named = false,
    },
    [anon_sym__3] = {
        .visible = true,
        .named = false,
    },
    [anon_sym___] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BQUOTE2] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_monospace_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_BSLASH_BQUOTE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BQUOTE3] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BQUOTE_BQUOTE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_POUND2] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_highlight_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_BSLASH_POUND] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_POUND3] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_POUND_POUND] = {
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
    [sym__word] = {
        .visible = false,
        .named = true,
    },
    [sym_punctuation] = {
        .visible = true,
        .named = true,
    },
    [sym_anchor] = {
        .visible = true,
        .named = true,
    },
    [sym_footnote_macro] = {
        .visible = true,
        .named = true,
    },
    [sym_image_macro] = {
        .visible = true,
        .named = true,
    },
    [sym_kbd_macro] = {
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
    [sym_link_url] = {
        .visible = true,
        .named = true,
    },
    [sym_link_macro] = {
        .visible = true,
        .named = true,
    },
    [sym_math_macro] = {
        .visible = true,
        .named = true,
    },
    [sym_menu_macro] = {
        .visible = true,
        .named = true,
    },
    [sym_passthrough] = {
        .visible = true,
        .named = true,
    },
    [sym_xref] = {
        .visible = true,
        .named = true,
    },
    [sym_emphasis] = {
        .visible = true,
        .named = true,
    },
    [sym_ltalic] = {
        .visible = true,
        .named = true,
    },
    [sym_monospace] = {
        .visible = true,
        .named = true,
    },
    [sym_highlight] = {
        .visible = true,
        .named = true,
    },
    [aux_sym_inline_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_image_macro_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_kbd_macro_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_kbd_macro_repeat2] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_link_url_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_emphasis_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_ltalic_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_monospace_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_highlight_repeat1] = {
        .visible = false,
        .named = false,
    },
    [alias_sym_intrinsic_attributes] = {
        .visible = true,
        .named = true,
    },
    [alias_sym_keys] = {
        .visible = true,
        .named = true,
    },
    [alias_sym_math] = {
        .visible = true,
        .named = true,
    },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
    [0] = { 0 },
    [1] = {
        [1] = alias_sym_intrinsic_attributes,
    },
    [2] = {
        [1] = aux_sym_footnote_macro_token1,
    },
    [3] = {
        [2] = aux_sym_auto_link_token1,
    },
    [4] = {
        [3] = aux_sym_anchor_token1,
    },
    [5] = {
        [0] = aux_sym_footnote_macro_token1,
    },
    [6] = {
        [3] = alias_sym_math,
    },
    [7] = {
        [2] = aux_sym_footnote_macro_token1,
        [4] = aux_sym_anchor_token1,
    },
    [8] = {
        [2] = aux_sym_footnote_macro_token1,
    },
    [9] = {
        [4] = aux_sym_auto_link_token1,
    },
    [10] = {
        [2] = aux_sym_footnote_macro_token1,
        [4] = alias_sym_keys,
    },
    [11] = {
        [4] = aux_sym_anchor_token1,
    },
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
    [48] = 47,
    [49] = 49,
    [50] = 50,
    [51] = 51,
    [52] = 52,
    [53] = 52,
    [54] = 51,
    [55] = 50,
    [56] = 49,
    [57] = 57,
    [58] = 58,
    [59] = 59,
    [60] = 58,
    [61] = 57,
    [62] = 59,
    [63] = 43,
    [64] = 32,
    [65] = 37,
    [66] = 40,
    [67] = 33,
    [68] = 36,
    [69] = 34,
    [70] = 32,
    [71] = 31,
    [72] = 33,
    [73] = 43,
    [74] = 31,
    [75] = 75,
    [76] = 76,
    [77] = 77,
    [78] = 78,
    [79] = 79,
    [80] = 80,
    [81] = 81,
    [82] = 81,
    [83] = 83,
    [84] = 84,
    [85] = 4,
    [86] = 9,
    [87] = 87,
    [88] = 88,
    [89] = 88,
    [90] = 83,
    [91] = 84,
    [92] = 8,
    [93] = 93,
    [94] = 81,
    [95] = 95,
    [96] = 96,
    [97] = 88,
    [98] = 87,
    [99] = 96,
    [100] = 93,
    [101] = 95,
    [102] = 96,
    [103] = 87,
    [104] = 104,
    [105] = 83,
    [106] = 93,
    [107] = 95,
    [108] = 84,
    [109] = 109,
    [110] = 110,
    [111] = 20,
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
    [125] = 125,
    [126] = 126,
    [127] = 127,
    [128] = 128,
    [129] = 129,
    [130] = 130,
    [131] = 131,
    [132] = 132,
    [133] = 133,
    [134] = 134,
    [135] = 135,
    [136] = 136,
    [137] = 137,
    [138] = 138,
    [139] = 139,
    [140] = 140,
    [141] = 141,
    [142] = 142,
    [143] = 143,
    [144] = 144,
    [145] = 145,
    [146] = 146,
    [147] = 147,
    [148] = 148,
    [149] = 149,
    [150] = 150,
    [151] = 151,
    [152] = 152,
    [153] = 153,
    [154] = 154,
    [155] = 155,
    [156] = 156,
    [157] = 157,
    [158] = 158,
    [159] = 159,
    [160] = 160,
    [161] = 161,
    [162] = 162,
    [163] = 163,
    [164] = 164,
    [165] = 165,
    [166] = 166,
    [167] = 167,
    [168] = 168,
    [169] = 169,
    [170] = 170,
    [171] = 171,
    [172] = 172,
    [173] = 173,
    [174] = 174,
    [175] = 175,
    [176] = 176,
    [177] = 177,
    [178] = 178,
    [179] = 179,
    [180] = 180,
    [181] = 181,
    [182] = 182,
    [183] = 151,
    [184] = 184,
    [185] = 185,
    [186] = 186,
    [187] = 187,
    [188] = 188,
    [189] = 189,
    [190] = 190,
    [191] = 174,
    [192] = 144,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(81);
            ADVANCE_MAP(
                ' ', 2,
                '!', 292,
                '"', 294,
                '#', 295,
                '$', 296,
                '%', 297,
                '&', 298,
                '\'', 299,
                '(', 300,
                ')', 301,
                '*', 302,
                '+', 304,
                ',', 305,
                '-', 306,
                '.', 307,
                '/', 308,
                ':', 309,
                ';', 310,
                '<', 311,
                '=', 312,
                '>', 313,
                '?', 314,
                '@', 315,
                '[', 317,
                '\\', 318,
                ']', 319,
                '^', 320,
                '_', 321,
                '`', 325,
                'a', 184,
                'b', 203,
                'f', 174,
                'h', 208,
                'i', 157,
                'k', 154,
                'l', 151,
                'm', 148,
                'p', 149,
                'q', 215,
                's', 204,
                'x', 199,
                '{', 82,
                '|', 326,
                '}', 222,
                '~', 327,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(217);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            END_STATE();
        case 1:
            ADVANCE_MAP(
                ' ', 2,
                '!', 292,
                '"', 294,
                '#', 295,
                '$', 296,
                '%', 297,
                '&', 298,
                '\'', 299,
                '(', 300,
                ')', 301,
                '*', 302,
                '+', 304,
                ',', 305,
                '-', 306,
                '.', 307,
                '/', 308,
                ':', 309,
                ';', 310,
                '<', 311,
                '=', 312,
                '>', 313,
                '?', 314,
                '@', 315,
                '[', 317,
                '\\', 318,
                ']', 319,
                '^', 320,
                '_', 321,
                '`', 325,
                'a', 184,
                'b', 203,
                'f', 174,
                'h', 208,
                'i', 157,
                'k', 154,
                'l', 151,
                'm', 148,
                'p', 149,
                'q', 215,
                's', 204,
                'x', 199,
                '{', 82,
                '|', 326,
                '}', 222,
                '~', 327,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(1);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(217);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            END_STATE();
        case 2:
            ADVANCE_MAP(
                ' ', 2,
                '!', 292,
                '"', 294,
                '#', 460,
                '$', 296,
                '%', 297,
                '&', 298,
                '\'', 299,
                '(', 300,
                ')', 301,
                '*', 425,
                '+', 304,
                ',', 305,
                '-', 306,
                '.', 307,
                '/', 308,
                ':', 309,
                ';', 310,
                '<', 311,
                '=', 312,
                '>', 313,
                '?', 314,
                '@', 315,
                '[', 317,
                '\\', 318,
                ']', 319,
                '^', 320,
                '_', 437,
                '`', 452,
                'a', 184,
                'b', 203,
                'f', 174,
                'h', 208,
                'i', 157,
                'k', 154,
                'l', 151,
                'm', 148,
                'p', 149,
                'q', 215,
                's', 204,
                'x', 199,
                '{', 82,
                '|', 326,
                '}', 222,
                '~', 327,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(1);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(217);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            END_STATE();
        case 3:
            ADVANCE_MAP(
                ' ', 4,
                '!', 292,
                '"', 294,
                '#', 295,
                '$', 296,
                '%', 297,
                '&', 298,
                '\'', 299,
                '(', 300,
                ')', 301,
                '*', 302,
                '+', 304,
                ',', 305,
                '-', 306,
                '.', 307,
                '/', 308,
                ':', 309,
                ';', 310,
                '<', 311,
                '=', 312,
                '>', 313,
                '?', 314,
                '@', 315,
                '[', 317,
                '\\', 318,
                ']', 319,
                '^', 320,
                '_', 322,
                '`', 325,
                'a', 260,
                'b', 277,
                'f', 250,
                'h', 282,
                'i', 234,
                'k', 231,
                'l', 228,
                'm', 225,
                'p', 226,
                's', 278,
                'x', 274,
                '{', 82,
                '|', 326,
                '}', 222,
                '~', 327,
                0x0b, 223,
                '\f', 223,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(3);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(291);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead != 0)
                ADVANCE(290);
            END_STATE();
        case 4:
            ADVANCE_MAP(
                ' ', 4,
                '!', 292,
                '"', 294,
                '#', 460,
                '$', 296,
                '%', 297,
                '&', 298,
                '\'', 299,
                '(', 300,
                ')', 301,
                '*', 425,
                '+', 304,
                ',', 305,
                '-', 306,
                '.', 307,
                '/', 308,
                ':', 309,
                ';', 310,
                '<', 311,
                '=', 312,
                '>', 313,
                '?', 314,
                '@', 315,
                '[', 317,
                '\\', 318,
                ']', 319,
                '^', 320,
                '_', 437,
                '`', 452,
                'a', 260,
                'b', 277,
                'f', 250,
                'h', 282,
                'i', 234,
                'k', 231,
                'l', 228,
                'm', 225,
                'p', 226,
                's', 278,
                'x', 274,
                '{', 82,
                '|', 326,
                '}', 222,
                '~', 327,
                0x0b, 223,
                '\f', 223,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(3);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(291);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead != 0)
                ADVANCE(290);
            END_STATE();
        case 5:
            ADVANCE_MAP(
                ' ', 6,
                '!', 292,
                '"', 294,
                '#', 295,
                '$', 296,
                '%', 297,
                '&', 298,
                '\'', 299,
                '(', 300,
                ')', 301,
                '*', 302,
                '+', 304,
                ',', 305,
                '-', 306,
                '.', 307,
                '/', 308,
                ':', 309,
                ';', 310,
                '<', 311,
                '=', 312,
                '>', 313,
                '?', 314,
                '@', 315,
                '[', 317,
                '\\', 318,
                ']', 319,
                '^', 320,
                '_', 321,
                '`', 325,
                'a', 118,
                'b', 135,
                'f', 108,
                'h', 140,
                'i', 92,
                'k', 89,
                'l', 86,
                'm', 83,
                'p', 84,
                's', 136,
                'x', 132,
                '{', 82,
                '|', 326,
                '}', 222,
                '~', 327,
                0x0b, 224,
                '\f', 224,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(5);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(217);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0)
                ADVANCE(290);
            END_STATE();
        case 6:
            ADVANCE_MAP(
                ' ', 6,
                '!', 292,
                '"', 294,
                '#', 460,
                '$', 296,
                '%', 297,
                '&', 298,
                '\'', 299,
                '(', 300,
                ')', 301,
                '*', 425,
                '+', 304,
                ',', 305,
                '-', 306,
                '.', 307,
                '/', 308,
                ':', 309,
                ';', 310,
                '<', 311,
                '=', 312,
                '>', 313,
                '?', 314,
                '@', 315,
                '[', 317,
                '\\', 318,
                ']', 319,
                '^', 320,
                '_', 437,
                '`', 452,
                'a', 118,
                'b', 135,
                'f', 108,
                'h', 140,
                'i', 92,
                'k', 89,
                'l', 86,
                'm', 83,
                'p', 84,
                's', 136,
                'x', 132,
                '{', 82,
                '|', 326,
                '}', 222,
                '~', 327,
                0x0b, 224,
                '\f', 224,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(5);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(217);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0)
                ADVANCE(290);
            END_STATE();
        case 7:
            if(lookahead == ' ')
                ADVANCE(427);
            if(lookahead == '#')
                ADVANCE(429);
            if(lookahead == '*')
                ADVANCE(8);
            if(lookahead == '\\')
                ADVANCE(430);
            if(lookahead == '_')
                ADVANCE(431);
            if(lookahead == '`')
                ADVANCE(432);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(7);
            if(('\t' <= lookahead && lookahead <= '\f'))
                ADVANCE(428);
            if(lookahead != 0)
                ADVANCE(426);
            END_STATE();
        case 8:
            if(lookahead == ' ')
                ADVANCE(434);
            if(lookahead == '*')
                ADVANCE(435);
            END_STATE();
        case 9:
            if(lookahead == ' ')
                ADVANCE(439);
            if(lookahead == '#')
                ADVANCE(441);
            if(lookahead == '*')
                ADVANCE(442);
            if(lookahead == '\\')
                ADVANCE(443);
            if(lookahead == '_')
                ADVANCE(10);
            if(lookahead == '`')
                ADVANCE(444);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(9);
            if(('\t' <= lookahead && lookahead <= '\f'))
                ADVANCE(440);
            if(lookahead != 0)
                ADVANCE(438);
            END_STATE();
        case 10:
            if(lookahead == ' ')
                ADVANCE(446);
            if(lookahead == '_')
                ADVANCE(447);
            END_STATE();
        case 11:
            if(lookahead == ' ')
                ADVANCE(465);
            if(lookahead == '#')
                ADVANCE(466);
            END_STATE();
        case 12:
            if(lookahead == ' ')
                ADVANCE(457);
            if(lookahead == '`')
                ADVANCE(458);
            END_STATE();
        case 13:
            if(lookahead == '"')
                ADVANCE(55);
            if(lookahead == '\\')
                ADVANCE(78);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(13);
            END_STATE();
        case 14:
            ADVANCE_MAP(
                '"', 293,
                '$', 16,
                '+', 303,
                ',', 305,
                '.', 307,
                ':', 50,
                '>', 54,
                '[', 316,
                '\\', 62,
                ']', 319,
                '}', 221,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(14);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            END_STATE();
        case 15:
            if(lookahead == '#')
                ADVANCE(11);
            if(lookahead == '\\')
                ADVANCE(462);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(15);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(463);
            if(lookahead != 0)
                ADVANCE(461);
            END_STATE();
        case 16:
            if(lookahead == '$')
                ADVANCE(409);
            END_STATE();
        case 17:
            if(lookahead == '+')
                ADVANCE(408);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 18:
            if(lookahead == '+')
                ADVANCE(20);
            if(lookahead == ',')
                ADVANCE(305);
            if(lookahead == '[')
                ADVANCE(316);
            if(lookahead == ']')
                ADVANCE(63);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(18);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(220);
            END_STATE();
        case 19:
            if(lookahead == '+')
                ADVANCE(407);
            END_STATE();
        case 20:
            if(lookahead == '+')
                ADVANCE(19);
            END_STATE();
        case 21:
            if(lookahead == '-')
                ADVANCE(22);
            if(lookahead == '.')
                ADVANCE(76);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            END_STATE();
        case 22:
            if(lookahead == '-')
                ADVANCE(22);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            END_STATE();
        case 23:
            if(lookahead == '-')
                ADVANCE(23);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(339);
            END_STATE();
        case 24:
            if(lookahead == '-')
                ADVANCE(31);
            if(lookahead == '0')
                ADVANCE(29);
            if(lookahead == '1')
                ADVANCE(28);
            if(lookahead == '2')
                ADVANCE(25);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(27);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            END_STATE();
        case 25:
            if(lookahead == '-')
                ADVANCE(31);
            if(lookahead == '5')
                ADVANCE(26);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == ']')
                ADVANCE(338);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(29);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(27);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            END_STATE();
        case 26:
            if(lookahead == '-')
                ADVANCE(31);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == ']')
                ADVANCE(338);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(29);
            if(('6' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            END_STATE();
        case 27:
            if(lookahead == '-')
                ADVANCE(31);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == ']')
                ADVANCE(338);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(29);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            END_STATE();
        case 28:
            if(lookahead == '-')
                ADVANCE(31);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == ']')
                ADVANCE(338);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(27);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            END_STATE();
        case 29:
            if(lookahead == '-')
                ADVANCE(31);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == ']')
                ADVANCE(338);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            END_STATE();
        case 30:
            if(lookahead == '-')
                ADVANCE(31);
            if(lookahead == ':')
                ADVANCE(59);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            END_STATE();
        case 31:
            if(lookahead == '-')
                ADVANCE(31);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            END_STATE();
        case 32:
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 33:
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 34:
            if(lookahead == '.')
                ADVANCE(24);
            END_STATE();
        case 35:
            if(lookahead == '.')
                ADVANCE(24);
            if(lookahead == '5')
                ADVANCE(36);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(34);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(37);
            END_STATE();
        case 36:
            if(lookahead == '.')
                ADVANCE(24);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(34);
            END_STATE();
        case 37:
            if(lookahead == '.')
                ADVANCE(24);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(34);
            END_STATE();
        case 38:
            if(lookahead == '.')
                ADVANCE(24);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            END_STATE();
        case 39:
            if(lookahead == '.')
                ADVANCE(52);
            END_STATE();
        case 40:
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '5')
                ADVANCE(41);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(39);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(42);
            END_STATE();
        case 41:
            if(lookahead == '.')
                ADVANCE(52);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(39);
            END_STATE();
        case 42:
            if(lookahead == '.')
                ADVANCE(52);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(39);
            END_STATE();
        case 43:
            if(lookahead == '.')
                ADVANCE(52);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            END_STATE();
        case 44:
            if(lookahead == '.')
                ADVANCE(53);
            END_STATE();
        case 45:
            if(lookahead == '.')
                ADVANCE(53);
            if(lookahead == '5')
                ADVANCE(46);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(44);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(47);
            END_STATE();
        case 46:
            if(lookahead == '.')
                ADVANCE(53);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(44);
            END_STATE();
        case 47:
            if(lookahead == '.')
                ADVANCE(53);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(44);
            END_STATE();
        case 48:
            if(lookahead == '.')
                ADVANCE(53);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(47);
            END_STATE();
        case 49:
            if(lookahead == '/')
                ADVANCE(386);
            END_STATE();
        case 50:
            if(lookahead == '/')
                ADVANCE(49);
            END_STATE();
        case 51:
            if(lookahead == '0')
                ADVANCE(44);
            if(lookahead == '1')
                ADVANCE(48);
            if(lookahead == '2')
                ADVANCE(45);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(47);
            END_STATE();
        case 52:
            if(lookahead == '0')
                ADVANCE(34);
            if(lookahead == '1')
                ADVANCE(38);
            if(lookahead == '2')
                ADVANCE(35);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(37);
            END_STATE();
        case 53:
            if(lookahead == '0')
                ADVANCE(39);
            if(lookahead == '1')
                ADVANCE(43);
            if(lookahead == '2')
                ADVANCE(40);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(42);
            END_STATE();
        case 54:
            if(lookahead == '>')
                ADVANCE(419);
            END_STATE();
        case 55:
            if(lookahead == '@')
                ADVANCE(56);
            END_STATE();
        case 56:
            if(lookahead == '[')
                ADVANCE(51);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            END_STATE();
        case 57:
            if(lookahead == '\\')
                ADVANCE(58);
            if(lookahead == ']')
                ADVANCE(340);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(57);
            END_STATE();
        case 58:
            if(lookahead == '\\')
                ADVANCE(58);
            if(lookahead == ']')
                ADVANCE(340);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(57);
            END_STATE();
        case 59:
            if(lookahead == '\\')
                ADVANCE(58);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(57);
            END_STATE();
        case 60:
            if(lookahead == '\\')
                ADVANCE(358);
            if(lookahead == ']')
                ADVANCE(319);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(359);
            if(lookahead != 0)
                ADVANCE(357);
            END_STATE();
        case 61:
            if(lookahead == '\\')
                ADVANCE(455);
            if(lookahead == '`')
                ADVANCE(12);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(61);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(454);
            if(lookahead != 0)
                ADVANCE(453);
            END_STATE();
        case 62:
            if(lookahead == ']')
                ADVANCE(361);
            END_STATE();
        case 63:
            if(lookahead == ']')
                ADVANCE(331);
            END_STATE();
        case 64:
            if(lookahead == '_')
                ADVANCE(64);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 65:
            if(lookahead == 'e')
                ADVANCE(68);
            END_STATE();
        case 66:
            if(lookahead == 'o')
                ADVANCE(69);
            END_STATE();
        case 67:
            if(lookahead == 'q')
                ADVANCE(70);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(67);
            END_STATE();
        case 68:
            if(lookahead == 's')
                ADVANCE(414);
            END_STATE();
        case 69:
            if(lookahead == 't')
                ADVANCE(65);
            END_STATE();
        case 70:
            if(lookahead == 'u')
                ADVANCE(66);
            END_STATE();
        case 71:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(355);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(356);
            END_STATE();
        case 72:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(347);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(348);
            END_STATE();
        case 73:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(73);
            if(lookahead != 0 &&
               lookahead != '.' &&
               lookahead != '>' &&
               lookahead != '[')
                ADVANCE(387);
            END_STATE();
        case 74:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(329);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(330);
            END_STATE();
        case 75:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(75);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(394);
            END_STATE();
        case 76:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(339);
            END_STATE();
        case 77:
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               lookahead == '-' ||
               ('/' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 78:
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(13);
            END_STATE();
        case 79:
            if(eof)
                ADVANCE(81);
            ADVANCE_MAP(
                ' ', 4,
                '!', 292,
                '"', 294,
                '#', 295,
                '$', 296,
                '%', 297,
                '&', 298,
                '\'', 299,
                '(', 300,
                ')', 301,
                '*', 302,
                '+', 304,
                ',', 305,
                '-', 306,
                '.', 307,
                '/', 308,
                ':', 309,
                ';', 310,
                '<', 311,
                '=', 312,
                '>', 313,
                '?', 314,
                '@', 315,
                '[', 317,
                '\\', 318,
                ']', 319,
                '^', 320,
                '_', 322,
                '`', 325,
                'a', 260,
                'b', 277,
                'f', 250,
                'h', 282,
                'i', 234,
                'k', 231,
                'l', 228,
                'm', 225,
                'p', 226,
                's', 278,
                'x', 274,
                '{', 82,
                '|', 326,
                '}', 222,
                '~', 327,
                0x0b, 223,
                '\f', 223,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(79);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(291);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead != 0)
                ADVANCE(290);
            END_STATE();
        case 80:
            if(eof)
                ADVANCE(81);
            ADVANCE_MAP(
                ' ', 6,
                '!', 292,
                '"', 294,
                '#', 295,
                '$', 296,
                '%', 297,
                '&', 298,
                '\'', 299,
                '(', 300,
                ')', 301,
                '*', 302,
                '+', 304,
                ',', 305,
                '-', 306,
                '.', 307,
                '/', 308,
                ':', 309,
                ';', 310,
                '<', 311,
                '=', 312,
                '>', 313,
                '?', 314,
                '@', 315,
                '[', 317,
                '\\', 318,
                ']', 319,
                '^', 320,
                '_', 321,
                '`', 325,
                'a', 118,
                'b', 135,
                'f', 108,
                'h', 140,
                'i', 92,
                'k', 89,
                'l', 86,
                'm', 83,
                'p', 84,
                's', 136,
                'x', 132,
                '{', 82,
                '|', 326,
                '}', 222,
                '~', 327,
                0x0b, 224,
                '\f', 224,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(80);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(217);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0)
                ADVANCE(290);
            END_STATE();
        case 81:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 82:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 83:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'a')
                ADVANCE(109);
            if(lookahead == 'e')
                ADVANCE(121);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 84:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'a')
                ADVANCE(134);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 85:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'a')
                ADVANCE(104);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 86:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'a')
                ADVANCE(141);
            if(lookahead == 'i')
                ADVANCE(120);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 87:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'a')
                ADVANCE(138);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 88:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'a')
                ADVANCE(139);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 89:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'b')
                ADVANCE(94);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 90:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'c')
                ADVANCE(107);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 91:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'c')
                ADVANCE(384);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 92:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'c')
                ADVANCE(126);
            if(lookahead == 'm')
                ADVANCE(85);
            if(lookahead == 'r')
                ADVANCE(91);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 93:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'c')
                ADVANCE(111);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 94:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'd')
                ADVANCE(363);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 95:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'e')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 96:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'e')
                ADVANCE(102);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 97:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'e')
                ADVANCE(378);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 98:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'e')
                ADVANCE(146);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 99:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'e')
                ADVANCE(350);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 100:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'e')
                ADVANCE(342);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 101:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'e')
                ADVANCE(103);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 102:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'f')
                ADVANCE(421);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 103:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'f')
                ADVANCE(345);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 104:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'g')
                ADVANCE(99);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 105:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'h')
                ADVANCE(402);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 106:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'h')
                ADVANCE(399);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 107:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'h')
                ADVANCE(125);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 108:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'i')
                ADVANCE(113);
            if(lookahead == 'o')
                ADVANCE(128);
            if(lookahead == 't')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 109:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'i')
                ADVANCE(114);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 110:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'i')
                ADVANCE(116);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 111:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'i')
                ADVANCE(110);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 112:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'k')
                ADVANCE(389);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 113:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'l')
                ADVANCE(97);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 114:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'l')
                ADVANCE(143);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 115:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'm')
                ADVANCE(396);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 116:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'm')
                ADVANCE(87);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 117:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'm')
                ADVANCE(88);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 118:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'n')
                ADVANCE(90);
            if(lookahead == 's')
                ADVANCE(93);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 119:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'n')
                ADVANCE(366);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 120:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'n')
                ADVANCE(112);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 121:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'n')
                ADVANCE(145);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 122:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'n')
                ADVANCE(353);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 123:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'n')
                ADVANCE(127);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 124:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'o')
                ADVANCE(392);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 125:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'o')
                ADVANCE(131);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 126:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'o')
                ADVANCE(122);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 127:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'o')
                ADVANCE(144);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 128:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'o')
                ADVANCE(142);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 129:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'p')
                ADVANCE(381);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 130:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'p')
                ADVANCE(372);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 131:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'r')
                ADVANCE(333);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 132:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'r')
                ADVANCE(96);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 133:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 's')
                ADVANCE(412);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 134:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 's')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 135:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 't')
                ADVANCE(119);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 136:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 't')
                ADVANCE(95);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 137:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 't')
                ADVANCE(130);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 138:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 't')
                ADVANCE(105);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 139:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 't')
                ADVANCE(106);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 140:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 't')
                ADVANCE(137);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 141:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 't')
                ADVANCE(98);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 142:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 't')
                ADVANCE(123);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 143:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 't')
                ADVANCE(124);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 144:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 't')
                ADVANCE(100);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 145:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'u')
                ADVANCE(405);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 146:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'x')
                ADVANCE(117);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 147:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 148:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'a')
                ADVANCE(175);
            if(lookahead == 'e')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 149:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'a')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 150:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'a')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 151:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'a')
                ADVANCE(209);
            if(lookahead == 'i')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 152:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'a')
                ADVANCE(206);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 153:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'a')
                ADVANCE(207);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 154:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'b')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 155:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'c')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 156:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'c')
                ADVANCE(385);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 157:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'c')
                ADVANCE(192);
            if(lookahead == 'm')
                ADVANCE(150);
            if(lookahead == 'r')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 158:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'c')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 159:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'd')
                ADVANCE(364);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 160:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'e')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 161:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 162:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'e')
                ADVANCE(379);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 163:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'e')
                ADVANCE(216);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 164:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'e')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 165:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'e')
                ADVANCE(343);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 166:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'e')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 167:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'e')
                ADVANCE(201);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 168:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'f')
                ADVANCE(422);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 169:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'f')
                ADVANCE(346);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 170:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'g')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 171:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'h')
                ADVANCE(403);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 172:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'h')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 173:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'h')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 174:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'i')
                ADVANCE(179);
            if(lookahead == 'o')
                ADVANCE(194);
            if(lookahead == 't')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 175:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'i')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 176:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'i')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 177:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'i')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 178:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'k')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 179:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'l')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 180:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'l')
                ADVANCE(211);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 181:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'm')
                ADVANCE(397);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 182:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'm')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 183:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'm')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 184:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'n')
                ADVANCE(155);
            if(lookahead == 's')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 185:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'n')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 186:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'n')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 187:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 188:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'n')
                ADVANCE(214);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 189:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'n')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 190:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'o')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 191:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 192:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'o')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 193:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'o')
                ADVANCE(212);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 194:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'o')
                ADVANCE(210);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 195:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'o')
                ADVANCE(213);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 196:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'p')
                ADVANCE(382);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 197:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'p')
                ADVANCE(373);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 198:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'r')
                ADVANCE(334);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 199:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'r')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 200:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 's')
                ADVANCE(413);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 201:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 's')
                ADVANCE(415);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 202:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 's')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 203:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 't')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 204:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 't')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 205:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 't')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 206:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 207:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 't')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 208:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 't')
                ADVANCE(205);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 209:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 't')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 210:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 't')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 211:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 't')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 212:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 't')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 213:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 214:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'u')
                ADVANCE(406);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 215:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'u')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 216:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'x')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 217:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(217);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 218:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 219:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '_')
                ADVANCE(219);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(220);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 220:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(220);
            END_STATE();
        case 221:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 222:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 223:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                ' ', 4,
                '_', 323,
                'a', 260,
                'b', 277,
                'f', 250,
                'h', 282,
                'i', 234,
                'k', 231,
                'l', 228,
                'm', 225,
                'p', 226,
                's', 278,
                'x', 274,
                0x0b, 223,
                '\f', 223,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 224:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                ' ', 6,
                '_', 324,
                'a', 118,
                'b', 135,
                'f', 108,
                'h', 140,
                'i', 92,
                'k', 89,
                'l', 86,
                'm', 83,
                'p', 84,
                's', 136,
                'x', 132,
                0x0b, 224,
                '\f', 224,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 225:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'a')
                ADVANCE(251);
            if(lookahead == 'e')
                ADVANCE(263);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 226:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'a')
                ADVANCE(276);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 227:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'a')
                ADVANCE(246);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 228:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'a')
                ADVANCE(283);
            if(lookahead == 'i')
                ADVANCE(262);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 229:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'a')
                ADVANCE(280);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 230:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'a')
                ADVANCE(281);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 231:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'b')
                ADVANCE(236);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 232:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'c')
                ADVANCE(249);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 233:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'c')
                ADVANCE(383);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 234:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'c')
                ADVANCE(268);
            if(lookahead == 'm')
                ADVANCE(227);
            if(lookahead == 'r')
                ADVANCE(233);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 235:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'c')
                ADVANCE(253);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 236:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'd')
                ADVANCE(362);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 237:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'e')
                ADVANCE(257);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 238:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'e')
                ADVANCE(244);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 239:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'e')
                ADVANCE(377);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 240:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'e')
                ADVANCE(288);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 241:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'e')
                ADVANCE(349);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 242:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'e')
                ADVANCE(341);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 243:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'e')
                ADVANCE(245);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 244:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'f')
                ADVANCE(420);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 245:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'f')
                ADVANCE(344);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 246:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'g')
                ADVANCE(241);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 247:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'h')
                ADVANCE(401);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 248:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'h')
                ADVANCE(398);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 249:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'h')
                ADVANCE(267);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 250:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'i')
                ADVANCE(255);
            if(lookahead == 'o')
                ADVANCE(270);
            if(lookahead == 't')
                ADVANCE(271);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 251:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'i')
                ADVANCE(256);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 252:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'i')
                ADVANCE(258);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 253:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'i')
                ADVANCE(252);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 254:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'k')
                ADVANCE(388);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 255:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'l')
                ADVANCE(239);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 256:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'l')
                ADVANCE(285);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 257:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'm')
                ADVANCE(395);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 258:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'm')
                ADVANCE(229);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 259:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'm')
                ADVANCE(230);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 260:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'n')
                ADVANCE(232);
            if(lookahead == 's')
                ADVANCE(235);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 261:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'n')
                ADVANCE(365);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 262:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'n')
                ADVANCE(254);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 263:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'n')
                ADVANCE(287);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 264:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'n')
                ADVANCE(352);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 265:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'n')
                ADVANCE(269);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 266:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'o')
                ADVANCE(391);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 267:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'o')
                ADVANCE(273);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 268:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'o')
                ADVANCE(264);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 269:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'o')
                ADVANCE(286);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 270:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'o')
                ADVANCE(284);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 271:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'p')
                ADVANCE(380);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 272:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'p')
                ADVANCE(371);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 273:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'r')
                ADVANCE(332);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 274:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'r')
                ADVANCE(238);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 275:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 's')
                ADVANCE(411);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 276:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 's')
                ADVANCE(275);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 277:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(261);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 278:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(237);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 279:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(272);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 280:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(247);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 281:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(248);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 282:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(279);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 283:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(240);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 284:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(265);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 285:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(266);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 286:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(242);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 287:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'u')
                ADVANCE(404);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 288:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'x')
                ADVANCE(259);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 289:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 290:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(64);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 291:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(291);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 292:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 293:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 294:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(55);
            if(lookahead == '\\')
                ADVANCE(78);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(13);
            END_STATE();
        case 295:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(467);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('$' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 296:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(410);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 297:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 298:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 299:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 300:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 301:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 302:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '*')
                ADVANCE(436);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 303:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 304:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '+')
                ADVANCE(17);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 305:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 306:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 307:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 308:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 309:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 310:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 311:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(416);
            END_STATE();
        case 312:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 313:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 314:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 315:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 316:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 317:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(328);
            END_STATE();
        case 318:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            END_STATE();
        case 319:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 320:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 321:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(450);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 322:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(451);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 323:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(448);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 324:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(449);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 325:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '`')
                ADVANCE(459);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 326:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 327:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 328:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            END_STATE();
        case 329:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(329);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(330);
            END_STATE();
        case 330:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ' ||
               ('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(330);
            END_STATE();
        case 331:
            ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
            END_STATE();
        case 332:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 333:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 334:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 335:
            ACCEPT_TOKEN(aux_sym_anchor_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(335);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(337);
            END_STATE();
        case 336:
            ACCEPT_TOKEN(aux_sym_anchor_token2);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(337);
            END_STATE();
        case 337:
            ACCEPT_TOKEN(aux_sym_anchor_token2);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(337);
            END_STATE();
        case 338:
            ACCEPT_TOKEN(sym_email);
            END_STATE();
        case 339:
            ACCEPT_TOKEN(sym_email);
            if(lookahead == '-')
                ADVANCE(23);
            if(lookahead == '.')
                ADVANCE(76);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(339);
            END_STATE();
        case 340:
            ACCEPT_TOKEN(sym_email);
            if(lookahead == '\\')
                ADVANCE(58);
            if(lookahead == ']')
                ADVANCE(340);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(57);
            END_STATE();
        case 341:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'r')
                ADVANCE(243);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 342:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 'r')
                ADVANCE(101);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 343:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'r')
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 344:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 345:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 346:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 347:
            ACCEPT_TOKEN(aux_sym_footnote_macro_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(347);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(348);
            END_STATE();
        case 348:
            ACCEPT_TOKEN(aux_sym_footnote_macro_token2);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(348);
            END_STATE();
        case 349:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 350:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 351:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 352:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 353:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 354:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 355:
            ACCEPT_TOKEN(aux_sym_image_macro_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(355);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(356);
            END_STATE();
        case 356:
            ACCEPT_TOKEN(aux_sym_image_macro_token1);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(356);
            END_STATE();
        case 357:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            END_STATE();
        case 358:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == '[')
                ADVANCE(360);
            if(lookahead == ']')
                ADVANCE(361);
            END_STATE();
        case 359:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == '\\')
                ADVANCE(358);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(359);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(357);
            END_STATE();
        case 360:
            ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
            END_STATE();
        case 361:
            ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
            END_STATE();
        case 362:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 363:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 364:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 365:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 366:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 367:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 368:
            ACCEPT_TOKEN(aux_sym_key_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            END_STATE();
        case 369:
            ACCEPT_TOKEN(aux_sym_auto_link_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(369);
            if(lookahead != 0 &&
               lookahead != '"' &&
               lookahead != ']')
                ADVANCE(370);
            END_STATE();
        case 370:
            ACCEPT_TOKEN(aux_sym_auto_link_token1);
            if(lookahead != 0 &&
               lookahead != '"' &&
               lookahead != ']')
                ADVANCE(370);
            END_STATE();
        case 371:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 's')
                ADVANCE(374);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 372:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(lookahead == 's')
                ADVANCE(375);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 373:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 's')
                ADVANCE(376);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 374:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 375:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 376:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 377:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 378:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 379:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 380:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 381:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 382:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 383:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 384:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 385:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 386:
            ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
            END_STATE();
        case 387:
            ACCEPT_TOKEN(sym__link_component);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '.' &&
               lookahead != '>' &&
               lookahead != '[')
                ADVANCE(387);
            END_STATE();
        case 388:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 389:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 390:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 391:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 392:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 393:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 394:
            ACCEPT_TOKEN(aux_sym_link_macro_token1);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '[')
                ADVANCE(394);
            END_STATE();
        case 395:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 396:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 397:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 398:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 399:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 400:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 401:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 402:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 403:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 404:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 405:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 406:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 407:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            END_STATE();
        case 408:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 409:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            END_STATE();
        case 410:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 411:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 412:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 413:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 414:
            ACCEPT_TOKEN(anon_sym_quotes);
            END_STATE();
        case 415:
            ACCEPT_TOKEN(anon_sym_quotes);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 416:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 417:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(417);
            if(lookahead != 0 &&
               lookahead != '>')
                ADVANCE(418);
            END_STATE();
        case 418:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            if(lookahead != 0 &&
               lookahead != '>')
                ADVANCE(418);
            END_STATE();
        case 419:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 420:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 421:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 422:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 423:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(423);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(424);
            END_STATE();
        case 424:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(424);
            END_STATE();
        case 425:
            ACCEPT_TOKEN(anon_sym_STAR2);
            END_STATE();
        case 426:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            END_STATE();
        case 427:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == ' ')
                ADVANCE(427);
            if(lookahead == '#')
                ADVANCE(460);
            if(lookahead == '\\')
                ADVANCE(430);
            if(lookahead == '_')
                ADVANCE(437);
            if(lookahead == '`')
                ADVANCE(452);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(428);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(426);
            END_STATE();
        case 428:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == ' ')
                ADVANCE(427);
            if(lookahead == '#')
                ADVANCE(429);
            if(lookahead == '\\')
                ADVANCE(430);
            if(lookahead == '_')
                ADVANCE(431);
            if(lookahead == '`')
                ADVANCE(432);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(428);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(426);
            END_STATE();
        case 429:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '#')
                ADVANCE(466);
            END_STATE();
        case 430:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '*')
                ADVANCE(433);
            END_STATE();
        case 431:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '_')
                ADVANCE(447);
            END_STATE();
        case 432:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '`')
                ADVANCE(458);
            END_STATE();
        case 433:
            ACCEPT_TOKEN(anon_sym_BSLASH_STAR);
            END_STATE();
        case 434:
            ACCEPT_TOKEN(anon_sym_STAR3);
            END_STATE();
        case 435:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            END_STATE();
        case 436:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 437:
            ACCEPT_TOKEN(anon_sym__2);
            END_STATE();
        case 438:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            END_STATE();
        case 439:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == ' ')
                ADVANCE(439);
            if(lookahead == '#')
                ADVANCE(460);
            if(lookahead == '*')
                ADVANCE(425);
            if(lookahead == '\\')
                ADVANCE(443);
            if(lookahead == '`')
                ADVANCE(452);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(440);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_' &&
               lookahead != '`')
                ADVANCE(438);
            END_STATE();
        case 440:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == ' ')
                ADVANCE(439);
            if(lookahead == '#')
                ADVANCE(441);
            if(lookahead == '*')
                ADVANCE(442);
            if(lookahead == '\\')
                ADVANCE(443);
            if(lookahead == '`')
                ADVANCE(444);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(440);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_' &&
               lookahead != '`')
                ADVANCE(438);
            END_STATE();
        case 441:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '#')
                ADVANCE(466);
            END_STATE();
        case 442:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '*')
                ADVANCE(435);
            END_STATE();
        case 443:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '_')
                ADVANCE(445);
            END_STATE();
        case 444:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '`')
                ADVANCE(458);
            END_STATE();
        case 445:
            ACCEPT_TOKEN(anon_sym_BSLASH_);
            END_STATE();
        case 446:
            ACCEPT_TOKEN(anon_sym__3);
            END_STATE();
        case 447:
            ACCEPT_TOKEN(anon_sym___);
            END_STATE();
        case 448:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(289);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 449:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(147);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 450:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
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
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 451:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 452:
            ACCEPT_TOKEN(anon_sym_BQUOTE2);
            END_STATE();
        case 453:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '\\')
                ADVANCE(455);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(454);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '`')
                ADVANCE(453);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '`')
                ADVANCE(456);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(anon_sym_BSLASH_BQUOTE);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(anon_sym_BQUOTE3);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(anon_sym_POUND2);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '#')
                ADVANCE(464);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '\\')
                ADVANCE(462);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(463);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '#')
                ADVANCE(461);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(anon_sym_BSLASH_POUND);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(anon_sym_POUND3);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 79 },
    [2] = { .lex_state = 79 },
    [3] = { .lex_state = 79 },
    [4] = { .lex_state = 79 },
    [5] = { .lex_state = 80 },
    [6] = { .lex_state = 79 },
    [7] = { .lex_state = 80 },
    [8] = { .lex_state = 79 },
    [9] = { .lex_state = 79 },
    [10] = { .lex_state = 79 },
    [11] = { .lex_state = 79 },
    [12] = { .lex_state = 79 },
    [13] = { .lex_state = 79 },
    [14] = { .lex_state = 79 },
    [15] = { .lex_state = 79 },
    [16] = { .lex_state = 79 },
    [17] = { .lex_state = 79 },
    [18] = { .lex_state = 79 },
    [19] = { .lex_state = 79 },
    [20] = { .lex_state = 79 },
    [21] = { .lex_state = 79 },
    [22] = { .lex_state = 79 },
    [23] = { .lex_state = 79 },
    [24] = { .lex_state = 79 },
    [25] = { .lex_state = 79 },
    [26] = { .lex_state = 79 },
    [27] = { .lex_state = 79 },
    [28] = { .lex_state = 79 },
    [29] = { .lex_state = 79 },
    [30] = { .lex_state = 79 },
    [31] = { .lex_state = 79 },
    [32] = { .lex_state = 79 },
    [33] = { .lex_state = 79 },
    [34] = { .lex_state = 79 },
    [35] = { .lex_state = 79 },
    [36] = { .lex_state = 79 },
    [37] = { .lex_state = 79 },
    [38] = { .lex_state = 79 },
    [39] = { .lex_state = 79 },
    [40] = { .lex_state = 79 },
    [41] = { .lex_state = 79 },
    [42] = { .lex_state = 79 },
    [43] = { .lex_state = 79 },
    [44] = { .lex_state = 79 },
    [45] = { .lex_state = 7 },
    [46] = { .lex_state = 9 },
    [47] = { .lex_state = 7 },
    [48] = { .lex_state = 7 },
    [49] = { .lex_state = 9 },
    [50] = { .lex_state = 9 },
    [51] = { .lex_state = 7 },
    [52] = { .lex_state = 7 },
    [53] = { .lex_state = 7 },
    [54] = { .lex_state = 7 },
    [55] = { .lex_state = 9 },
    [56] = { .lex_state = 9 },
    [57] = { .lex_state = 9 },
    [58] = { .lex_state = 9 },
    [59] = { .lex_state = 7 },
    [60] = { .lex_state = 9 },
    [61] = { .lex_state = 9 },
    [62] = { .lex_state = 7 },
    [63] = { .lex_state = 7 },
    [64] = { .lex_state = 9 },
    [65] = { .lex_state = 9 },
    [66] = { .lex_state = 7 },
    [67] = { .lex_state = 7 },
    [68] = { .lex_state = 9 },
    [69] = { .lex_state = 7 },
    [70] = { .lex_state = 7 },
    [71] = { .lex_state = 7 },
    [72] = { .lex_state = 9 },
    [73] = { .lex_state = 9 },
    [74] = { .lex_state = 9 },
    [75] = { .lex_state = 60 },
    [76] = { .lex_state = 60 },
    [77] = { .lex_state = 14 },
    [78] = { .lex_state = 60 },
    [79] = { .lex_state = 15 },
    [80] = { .lex_state = 61 },
    [81] = { .lex_state = 61 },
    [82] = { .lex_state = 61 },
    [83] = { .lex_state = 61 },
    [84] = { .lex_state = 15 },
    [85] = { .lex_state = 14 },
    [86] = { .lex_state = 14 },
    [87] = { .lex_state = 15 },
    [88] = { .lex_state = 15 },
    [89] = { .lex_state = 15 },
    [90] = { .lex_state = 61 },
    [91] = { .lex_state = 15 },
    [92] = { .lex_state = 14 },
    [93] = { .lex_state = 15 },
    [94] = { .lex_state = 61 },
    [95] = { .lex_state = 61 },
    [96] = { .lex_state = 61 },
    [97] = { .lex_state = 15 },
    [98] = { .lex_state = 15 },
    [99] = { .lex_state = 61 },
    [100] = { .lex_state = 15 },
    [101] = { .lex_state = 61 },
    [102] = { .lex_state = 61 },
    [103] = { .lex_state = 15 },
    [104] = { .lex_state = 60 },
    [105] = { .lex_state = 61 },
    [106] = { .lex_state = 15 },
    [107] = { .lex_state = 61 },
    [108] = { .lex_state = 15 },
    [109] = { .lex_state = 14 },
    [110] = { .lex_state = 14 },
    [111] = { .lex_state = 14 },
    [112] = { .lex_state = 14 },
    [113] = { .lex_state = 14 },
    [114] = { .lex_state = 0 },
    [115] = { .lex_state = 14 },
    [116] = { .lex_state = 0 },
    [117] = { .lex_state = 14 },
    [118] = { .lex_state = 0 },
    [119] = { .lex_state = 335 },
    [120] = { .lex_state = 18 },
    [121] = { .lex_state = 18 },
    [122] = { .lex_state = 14 },
    [123] = { .lex_state = 0 },
    [124] = { .lex_state = 335 },
    [125] = { .lex_state = 0 },
    [126] = { .lex_state = 14 },
    [127] = { .lex_state = 14 },
    [128] = { .lex_state = 71 },
    [129] = { .lex_state = 0 },
    [130] = { .lex_state = 0 },
    [131] = { .lex_state = 0 },
    [132] = { .lex_state = 0 },
    [133] = { .lex_state = 0 },
    [134] = { .lex_state = 18 },
    [135] = { .lex_state = 0 },
    [136] = { .lex_state = 18 },
    [137] = { .lex_state = 72 },
    [138] = { .lex_state = 18 },
    [139] = { .lex_state = 0 },
    [140] = { .lex_state = 0 },
    [141] = { .lex_state = 335 },
    [142] = { .lex_state = 0 },
    [143] = { .lex_state = 0 },
    [144] = { .lex_state = 14 },
    [145] = { .lex_state = 0 },
    [146] = { .lex_state = 0 },
    [147] = { .lex_state = 0 },
    [148] = { .lex_state = 0 },
    [149] = { .lex_state = 0 },
    [150] = { .lex_state = 335 },
    [151] = { .lex_state = 73 },
    [152] = { .lex_state = 0 },
    [153] = { .lex_state = 335 },
    [154] = { .lex_state = 0 },
    [155] = { .lex_state = 14 },
    [156] = { .lex_state = 335 },
    [157] = { .lex_state = 18 },
    [158] = { .lex_state = 0 },
    [159] = { .lex_state = 0 },
    [160] = { .lex_state = 0 },
    [161] = { .lex_state = 72 },
    [162] = { .lex_state = 14 },
    [163] = { .lex_state = 0 },
    [164] = { .lex_state = 18 },
    [165] = { .lex_state = 0 },
    [166] = { .lex_state = 18 },
    [167] = { .lex_state = 14 },
    [168] = { .lex_state = 14 },
    [169] = { .lex_state = 14 },
    [170] = { .lex_state = 14 },
    [171] = { .lex_state = 335 },
    [172] = { .lex_state = 14 },
    [173] = { .lex_state = 14 },
    [174] = { .lex_state = 73 },
    [175] = { .lex_state = 14 },
    [176] = { .lex_state = 335 },
    [177] = { .lex_state = 14 },
    [178] = { .lex_state = 14 },
    [179] = { .lex_state = 74 },
    [180] = { .lex_state = 369 },
    [181] = { .lex_state = 335 },
    [182] = { .lex_state = 423 },
    [183] = { .lex_state = 73 },
    [184] = { .lex_state = 417 },
    [185] = { .lex_state = 67 },
    [186] = { .lex_state = 14 },
    [187] = { .lex_state = 18 },
    [188] = { .lex_state = 18 },
    [189] = { .lex_state = 14 },
    [190] = { .lex_state = 75 },
    [191] = { .lex_state = 73 },
    [192] = { .lex_state = 14 },
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
        [sym_email] = ACTIONS(1),
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
        [anon_sym_STAR2] = ACTIONS(1),
        [anon_sym_STAR_STAR] = ACTIONS(1),
        [anon_sym__2] = ACTIONS(1),
        [anon_sym___] = ACTIONS(1),
        [anon_sym_BQUOTE2] = ACTIONS(1),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(1),
        [anon_sym_POUND2] = ACTIONS(1),
        [anon_sym_POUND_POUND] = ACTIONS(1),
    },
    [1] = {
        [sym_inline] = STATE(152),
        [sym_replacement] = STATE(3),
        [sym__word] = STATE(3),
        [sym_punctuation] = STATE(3),
        [sym_anchor] = STATE(3),
        [sym_footnote_macro] = STATE(3),
        [sym_image_macro] = STATE(3),
        [sym_kbd_macro] = STATE(3),
        [sym_auto_link] = STATE(3),
        [sym_link_url] = STATE(11),
        [sym_link_macro] = STATE(3),
        [sym_math_macro] = STATE(3),
        [sym_menu_macro] = STATE(3),
        [sym_passthrough] = STATE(3),
        [sym_xref] = STATE(3),
        [sym_emphasis] = STATE(3),
        [sym_ltalic] = STATE(3),
        [sym_monospace] = STATE(3),
        [sym_highlight] = STATE(3),
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
        [anon_sym_BQUOTE] = ACTIONS(5),
        [anon_sym_PIPE] = ACTIONS(5),
        [anon_sym_TILDE] = ACTIONS(5),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(13),
        [anon_sym_anchor] = ACTIONS(15),
        [sym_email] = ACTIONS(7),
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
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(31),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(33),
        [anon_sym_pass] = ACTIONS(35),
        [anon_sym_LT_LT] = ACTIONS(37),
        [anon_sym_xref] = ACTIONS(39),
        [anon_sym_STAR2] = ACTIONS(41),
        [anon_sym_STAR_STAR] = ACTIONS(43),
        [anon_sym__2] = ACTIONS(45),
        [anon_sym___] = ACTIONS(47),
        [anon_sym_BQUOTE2] = ACTIONS(49),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(51),
        [anon_sym_POUND2] = ACTIONS(53),
        [anon_sym_POUND_POUND] = ACTIONS(55),
    },
    [2] = {
        [sym_replacement] = STATE(2),
        [sym__word] = STATE(2),
        [sym_punctuation] = STATE(2),
        [sym_anchor] = STATE(2),
        [sym_footnote_macro] = STATE(2),
        [sym_image_macro] = STATE(2),
        [sym_kbd_macro] = STATE(2),
        [sym_auto_link] = STATE(2),
        [sym_link_url] = STATE(11),
        [sym_link_macro] = STATE(2),
        [sym_math_macro] = STATE(2),
        [sym_menu_macro] = STATE(2),
        [sym_passthrough] = STATE(2),
        [sym_xref] = STATE(2),
        [sym_emphasis] = STATE(2),
        [sym_ltalic] = STATE(2),
        [sym_monospace] = STATE(2),
        [sym_highlight] = STATE(2),
        [aux_sym_inline_repeat1] = STATE(2),
        [ts_builtin_sym_end] = ACTIONS(57),
        [anon_sym_LBRACE] = ACTIONS(59),
        [anon_sym_RBRACE] = ACTIONS(62),
        [sym__word_no_digit] = ACTIONS(65),
        [sym__digits] = ACTIONS(65),
        [anon_sym_BANG] = ACTIONS(62),
        [anon_sym_DQUOTE] = ACTIONS(68),
        [anon_sym_POUND] = ACTIONS(62),
        [anon_sym_DOLLAR] = ACTIONS(62),
        [anon_sym_PERCENT] = ACTIONS(62),
        [anon_sym_AMP] = ACTIONS(62),
        [anon_sym_SQUOTE] = ACTIONS(62),
        [anon_sym_LPAREN] = ACTIONS(62),
        [anon_sym_RPAREN] = ACTIONS(62),
        [anon_sym_STAR] = ACTIONS(62),
        [anon_sym_PLUS] = ACTIONS(71),
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
        [anon_sym_LBRACK_LBRACK] = ACTIONS(74),
        [anon_sym_anchor] = ACTIONS(77),
        [sym_email] = ACTIONS(65),
        [anon_sym_footnote] = ACTIONS(80),
        [anon_sym_footnoteref] = ACTIONS(80),
        [anon_sym_image] = ACTIONS(83),
        [anon_sym_icon] = ACTIONS(83),
        [anon_sym_kbd] = ACTIONS(86),
        [anon_sym_btn] = ACTIONS(86),
        [anon_sym_http] = ACTIONS(89),
        [anon_sym_https] = ACTIONS(89),
        [anon_sym_file] = ACTIONS(89),
        [anon_sym_ftp] = ACTIONS(89),
        [anon_sym_irc] = ACTIONS(89),
        [anon_sym_link] = ACTIONS(92),
        [anon_sym_mailto] = ACTIONS(92),
        [anon_sym_stem] = ACTIONS(95),
        [anon_sym_latexmath] = ACTIONS(95),
        [anon_sym_asciimath] = ACTIONS(95),
        [anon_sym_menu] = ACTIONS(98),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(101),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(104),
        [anon_sym_pass] = ACTIONS(107),
        [anon_sym_LT_LT] = ACTIONS(110),
        [anon_sym_xref] = ACTIONS(113),
        [anon_sym_STAR2] = ACTIONS(116),
        [anon_sym_STAR_STAR] = ACTIONS(119),
        [anon_sym__2] = ACTIONS(122),
        [anon_sym___] = ACTIONS(125),
        [anon_sym_BQUOTE2] = ACTIONS(128),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(131),
        [anon_sym_POUND2] = ACTIONS(134),
        [anon_sym_POUND_POUND] = ACTIONS(137),
    },
    [3] = {
        [sym_replacement] = STATE(2),
        [sym__word] = STATE(2),
        [sym_punctuation] = STATE(2),
        [sym_anchor] = STATE(2),
        [sym_footnote_macro] = STATE(2),
        [sym_image_macro] = STATE(2),
        [sym_kbd_macro] = STATE(2),
        [sym_auto_link] = STATE(2),
        [sym_link_url] = STATE(11),
        [sym_link_macro] = STATE(2),
        [sym_math_macro] = STATE(2),
        [sym_menu_macro] = STATE(2),
        [sym_passthrough] = STATE(2),
        [sym_xref] = STATE(2),
        [sym_emphasis] = STATE(2),
        [sym_ltalic] = STATE(2),
        [sym_monospace] = STATE(2),
        [sym_highlight] = STATE(2),
        [aux_sym_inline_repeat1] = STATE(2),
        [ts_builtin_sym_end] = ACTIONS(140),
        [anon_sym_LBRACE] = ACTIONS(3),
        [anon_sym_RBRACE] = ACTIONS(5),
        [sym__word_no_digit] = ACTIONS(142),
        [sym__digits] = ACTIONS(142),
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
        [anon_sym_BQUOTE] = ACTIONS(5),
        [anon_sym_PIPE] = ACTIONS(5),
        [anon_sym_TILDE] = ACTIONS(5),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(13),
        [anon_sym_anchor] = ACTIONS(15),
        [sym_email] = ACTIONS(142),
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
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(31),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(33),
        [anon_sym_pass] = ACTIONS(35),
        [anon_sym_LT_LT] = ACTIONS(37),
        [anon_sym_xref] = ACTIONS(39),
        [anon_sym_STAR2] = ACTIONS(41),
        [anon_sym_STAR_STAR] = ACTIONS(43),
        [anon_sym__2] = ACTIONS(45),
        [anon_sym___] = ACTIONS(47),
        [anon_sym_BQUOTE2] = ACTIONS(49),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(51),
        [anon_sym_POUND2] = ACTIONS(53),
        [anon_sym_POUND_POUND] = ACTIONS(55),
    },
    [4] = {
        [aux_sym_link_url_repeat1] = STATE(4),
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
        [anon_sym_DOT] = ACTIONS(148),
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
        [sym_email] = ACTIONS(146),
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
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(146),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(146),
        [anon_sym_pass] = ACTIONS(146),
        [anon_sym_LT_LT] = ACTIONS(146),
        [anon_sym_xref] = ACTIONS(146),
        [anon_sym_STAR2] = ACTIONS(146),
        [anon_sym_STAR_STAR] = ACTIONS(146),
        [anon_sym__2] = ACTIONS(146),
        [anon_sym___] = ACTIONS(146),
        [anon_sym_BQUOTE2] = ACTIONS(146),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(146),
        [anon_sym_POUND2] = ACTIONS(146),
        [anon_sym_POUND_POUND] = ACTIONS(146),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(151),
        [anon_sym_LBRACE] = ACTIONS(153),
        [aux_sym_replacement_token1] = ACTIONS(155),
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
        [sym_email] = ACTIONS(153),
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
        [anon_sym_STAR2] = ACTIONS(153),
        [anon_sym_STAR_STAR] = ACTIONS(153),
        [anon_sym__2] = ACTIONS(153),
        [anon_sym___] = ACTIONS(153),
        [anon_sym_BQUOTE2] = ACTIONS(153),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(153),
        [anon_sym_POUND2] = ACTIONS(153),
        [anon_sym_POUND_POUND] = ACTIONS(153),
    },
    [6] = {
        [sym_link_url] = STATE(122),
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
        [sym_email] = ACTIONS(153),
        [anon_sym_footnote] = ACTIONS(153),
        [anon_sym_footnoteref] = ACTIONS(153),
        [anon_sym_image] = ACTIONS(153),
        [anon_sym_icon] = ACTIONS(153),
        [anon_sym_kbd] = ACTIONS(153),
        [anon_sym_btn] = ACTIONS(153),
        [anon_sym_http] = ACTIONS(157),
        [anon_sym_https] = ACTIONS(157),
        [anon_sym_file] = ACTIONS(157),
        [anon_sym_ftp] = ACTIONS(157),
        [anon_sym_irc] = ACTIONS(157),
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
        [anon_sym_STAR2] = ACTIONS(153),
        [anon_sym_STAR_STAR] = ACTIONS(153),
        [anon_sym__2] = ACTIONS(153),
        [anon_sym___] = ACTIONS(153),
        [anon_sym_BQUOTE2] = ACTIONS(153),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(153),
        [anon_sym_POUND2] = ACTIONS(153),
        [anon_sym_POUND_POUND] = ACTIONS(153),
    },
    [7] = {
        [ts_builtin_sym_end] = ACTIONS(151),
        [anon_sym_LBRACE] = ACTIONS(153),
        [aux_sym_replacement_token1] = ACTIONS(159),
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
        [sym_email] = ACTIONS(153),
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
        [anon_sym_STAR2] = ACTIONS(153),
        [anon_sym_STAR_STAR] = ACTIONS(153),
        [anon_sym__2] = ACTIONS(153),
        [anon_sym___] = ACTIONS(153),
        [anon_sym_BQUOTE2] = ACTIONS(153),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(153),
        [anon_sym_POUND2] = ACTIONS(153),
        [anon_sym_POUND_POUND] = ACTIONS(153),
    },
    [8] = {
        [aux_sym_link_url_repeat1] = STATE(9),
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
        [anon_sym_DOT] = ACTIONS(165),
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
        [sym_email] = ACTIONS(163),
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
        [anon_sym_LT_LT] = ACTIONS(163),
        [anon_sym_xref] = ACTIONS(163),
        [anon_sym_STAR2] = ACTIONS(163),
        [anon_sym_STAR_STAR] = ACTIONS(163),
        [anon_sym__2] = ACTIONS(163),
        [anon_sym___] = ACTIONS(163),
        [anon_sym_BQUOTE2] = ACTIONS(163),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(163),
        [anon_sym_POUND2] = ACTIONS(163),
        [anon_sym_POUND_POUND] = ACTIONS(163),
    },
    [9] = {
        [aux_sym_link_url_repeat1] = STATE(4),
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
        [anon_sym_DOT] = ACTIONS(165),
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
        [sym_email] = ACTIONS(169),
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
        [anon_sym_STAR2] = ACTIONS(169),
        [anon_sym_STAR_STAR] = ACTIONS(169),
        [anon_sym__2] = ACTIONS(169),
        [anon_sym___] = ACTIONS(169),
        [anon_sym_BQUOTE2] = ACTIONS(169),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(169),
        [anon_sym_POUND2] = ACTIONS(169),
        [anon_sym_POUND_POUND] = ACTIONS(169),
    },
    [10] = {
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
        [sym_email] = ACTIONS(173),
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
        [anon_sym_STAR2] = ACTIONS(173),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym__2] = ACTIONS(173),
        [anon_sym___] = ACTIONS(173),
        [anon_sym_BQUOTE2] = ACTIONS(173),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(173),
        [anon_sym_POUND2] = ACTIONS(173),
        [anon_sym_POUND_POUND] = ACTIONS(173),
    },
    [11] = {
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
        [anon_sym_LBRACK] = ACTIONS(179),
        [anon_sym_BSLASH] = ACTIONS(177),
        [anon_sym_RBRACK] = ACTIONS(177),
        [anon_sym_CARET] = ACTIONS(177),
        [anon_sym__] = ACTIONS(177),
        [anon_sym_BQUOTE] = ACTIONS(177),
        [anon_sym_PIPE] = ACTIONS(177),
        [anon_sym_TILDE] = ACTIONS(177),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(177),
        [anon_sym_anchor] = ACTIONS(177),
        [sym_email] = ACTIONS(177),
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
        [anon_sym_STAR2] = ACTIONS(177),
        [anon_sym_STAR_STAR] = ACTIONS(177),
        [anon_sym__2] = ACTIONS(177),
        [anon_sym___] = ACTIONS(177),
        [anon_sym_BQUOTE2] = ACTIONS(177),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(177),
        [anon_sym_POUND2] = ACTIONS(177),
        [anon_sym_POUND_POUND] = ACTIONS(177),
    },
    [12] = {
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
        [sym_email] = ACTIONS(183),
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
        [anon_sym_LT_LT] = ACTIONS(183),
        [anon_sym_xref] = ACTIONS(183),
        [anon_sym_STAR2] = ACTIONS(183),
        [anon_sym_STAR_STAR] = ACTIONS(183),
        [anon_sym__2] = ACTIONS(183),
        [anon_sym___] = ACTIONS(183),
        [anon_sym_BQUOTE2] = ACTIONS(183),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(183),
        [anon_sym_POUND2] = ACTIONS(183),
        [anon_sym_POUND_POUND] = ACTIONS(183),
    },
    [13] = {
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
        [sym_email] = ACTIONS(187),
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
        [anon_sym_LT_LT] = ACTIONS(187),
        [anon_sym_xref] = ACTIONS(187),
        [anon_sym_STAR2] = ACTIONS(187),
        [anon_sym_STAR_STAR] = ACTIONS(187),
        [anon_sym__2] = ACTIONS(187),
        [anon_sym___] = ACTIONS(187),
        [anon_sym_BQUOTE2] = ACTIONS(187),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(187),
        [anon_sym_POUND2] = ACTIONS(187),
        [anon_sym_POUND_POUND] = ACTIONS(187),
    },
    [14] = {
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
        [sym_email] = ACTIONS(191),
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
        [anon_sym_LT_LT] = ACTIONS(191),
        [anon_sym_xref] = ACTIONS(191),
        [anon_sym_STAR2] = ACTIONS(191),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [anon_sym__2] = ACTIONS(191),
        [anon_sym___] = ACTIONS(191),
        [anon_sym_BQUOTE2] = ACTIONS(191),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(191),
        [anon_sym_POUND2] = ACTIONS(191),
        [anon_sym_POUND_POUND] = ACTIONS(191),
    },
    [15] = {
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
        [sym_email] = ACTIONS(195),
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
        [anon_sym_LT_LT] = ACTIONS(195),
        [anon_sym_xref] = ACTIONS(195),
        [anon_sym_STAR2] = ACTIONS(195),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym__2] = ACTIONS(195),
        [anon_sym___] = ACTIONS(195),
        [anon_sym_BQUOTE2] = ACTIONS(195),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(195),
        [anon_sym_POUND2] = ACTIONS(195),
        [anon_sym_POUND_POUND] = ACTIONS(195),
    },
    [16] = {
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
        [sym_email] = ACTIONS(199),
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
        [anon_sym_LT_LT] = ACTIONS(199),
        [anon_sym_xref] = ACTIONS(199),
        [anon_sym_STAR2] = ACTIONS(199),
        [anon_sym_STAR_STAR] = ACTIONS(199),
        [anon_sym__2] = ACTIONS(199),
        [anon_sym___] = ACTIONS(199),
        [anon_sym_BQUOTE2] = ACTIONS(199),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(199),
        [anon_sym_POUND2] = ACTIONS(199),
        [anon_sym_POUND_POUND] = ACTIONS(199),
    },
    [17] = {
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
        [sym_email] = ACTIONS(203),
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
        [anon_sym_LT_LT] = ACTIONS(203),
        [anon_sym_xref] = ACTIONS(203),
        [anon_sym_STAR2] = ACTIONS(203),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym__2] = ACTIONS(203),
        [anon_sym___] = ACTIONS(203),
        [anon_sym_BQUOTE2] = ACTIONS(203),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(203),
        [anon_sym_POUND2] = ACTIONS(203),
        [anon_sym_POUND_POUND] = ACTIONS(203),
    },
    [18] = {
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
        [sym_email] = ACTIONS(207),
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
        [anon_sym_LT_LT] = ACTIONS(207),
        [anon_sym_xref] = ACTIONS(207),
        [anon_sym_STAR2] = ACTIONS(207),
        [anon_sym_STAR_STAR] = ACTIONS(207),
        [anon_sym__2] = ACTIONS(207),
        [anon_sym___] = ACTIONS(207),
        [anon_sym_BQUOTE2] = ACTIONS(207),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(207),
        [anon_sym_POUND2] = ACTIONS(207),
        [anon_sym_POUND_POUND] = ACTIONS(207),
    },
    [19] = {
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
        [sym_email] = ACTIONS(211),
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
        [anon_sym_LT_LT] = ACTIONS(211),
        [anon_sym_xref] = ACTIONS(211),
        [anon_sym_STAR2] = ACTIONS(211),
        [anon_sym_STAR_STAR] = ACTIONS(211),
        [anon_sym__2] = ACTIONS(211),
        [anon_sym___] = ACTIONS(211),
        [anon_sym_BQUOTE2] = ACTIONS(211),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(211),
        [anon_sym_POUND2] = ACTIONS(211),
        [anon_sym_POUND_POUND] = ACTIONS(211),
    },
    [20] = {
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
        [sym_email] = ACTIONS(146),
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
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(146),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(146),
        [anon_sym_pass] = ACTIONS(146),
        [anon_sym_LT_LT] = ACTIONS(146),
        [anon_sym_xref] = ACTIONS(146),
        [anon_sym_STAR2] = ACTIONS(146),
        [anon_sym_STAR_STAR] = ACTIONS(146),
        [anon_sym__2] = ACTIONS(146),
        [anon_sym___] = ACTIONS(146),
        [anon_sym_BQUOTE2] = ACTIONS(146),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(146),
        [anon_sym_POUND2] = ACTIONS(146),
        [anon_sym_POUND_POUND] = ACTIONS(146),
    },
    [21] = {
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
        [sym_email] = ACTIONS(215),
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
        [anon_sym_LT_LT] = ACTIONS(215),
        [anon_sym_xref] = ACTIONS(215),
        [anon_sym_STAR2] = ACTIONS(215),
        [anon_sym_STAR_STAR] = ACTIONS(215),
        [anon_sym__2] = ACTIONS(215),
        [anon_sym___] = ACTIONS(215),
        [anon_sym_BQUOTE2] = ACTIONS(215),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(215),
        [anon_sym_POUND2] = ACTIONS(215),
        [anon_sym_POUND_POUND] = ACTIONS(215),
    },
    [22] = {
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
        [sym_email] = ACTIONS(219),
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
        [anon_sym_LT_LT] = ACTIONS(219),
        [anon_sym_xref] = ACTIONS(219),
        [anon_sym_STAR2] = ACTIONS(219),
        [anon_sym_STAR_STAR] = ACTIONS(219),
        [anon_sym__2] = ACTIONS(219),
        [anon_sym___] = ACTIONS(219),
        [anon_sym_BQUOTE2] = ACTIONS(219),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(219),
        [anon_sym_POUND2] = ACTIONS(219),
        [anon_sym_POUND_POUND] = ACTIONS(219),
    },
    [23] = {
        [ts_builtin_sym_end] = ACTIONS(221),
        [anon_sym_LBRACE] = ACTIONS(223),
        [anon_sym_RBRACE] = ACTIONS(223),
        [sym__word_no_digit] = ACTIONS(223),
        [sym__digits] = ACTIONS(223),
        [anon_sym_BANG] = ACTIONS(223),
        [anon_sym_DQUOTE] = ACTIONS(223),
        [anon_sym_POUND] = ACTIONS(223),
        [anon_sym_DOLLAR] = ACTIONS(223),
        [anon_sym_PERCENT] = ACTIONS(223),
        [anon_sym_AMP] = ACTIONS(223),
        [anon_sym_SQUOTE] = ACTIONS(223),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_RPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(223),
        [anon_sym_PLUS] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(223),
        [anon_sym_DASH] = ACTIONS(223),
        [anon_sym_DOT] = ACTIONS(223),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_COLON] = ACTIONS(223),
        [anon_sym_SEMI] = ACTIONS(223),
        [anon_sym_LT] = ACTIONS(223),
        [anon_sym_EQ] = ACTIONS(223),
        [anon_sym_GT] = ACTIONS(223),
        [anon_sym_QMARK] = ACTIONS(223),
        [anon_sym_AT] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(223),
        [anon_sym_BSLASH] = ACTIONS(223),
        [anon_sym_RBRACK] = ACTIONS(223),
        [anon_sym_CARET] = ACTIONS(223),
        [anon_sym__] = ACTIONS(223),
        [anon_sym_BQUOTE] = ACTIONS(223),
        [anon_sym_PIPE] = ACTIONS(223),
        [anon_sym_TILDE] = ACTIONS(223),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(223),
        [anon_sym_anchor] = ACTIONS(223),
        [sym_email] = ACTIONS(223),
        [anon_sym_footnote] = ACTIONS(223),
        [anon_sym_footnoteref] = ACTIONS(223),
        [anon_sym_image] = ACTIONS(223),
        [anon_sym_icon] = ACTIONS(223),
        [anon_sym_kbd] = ACTIONS(223),
        [anon_sym_btn] = ACTIONS(223),
        [anon_sym_http] = ACTIONS(223),
        [anon_sym_https] = ACTIONS(223),
        [anon_sym_file] = ACTIONS(223),
        [anon_sym_ftp] = ACTIONS(223),
        [anon_sym_irc] = ACTIONS(223),
        [anon_sym_link] = ACTIONS(223),
        [anon_sym_mailto] = ACTIONS(223),
        [anon_sym_stem] = ACTIONS(223),
        [anon_sym_latexmath] = ACTIONS(223),
        [anon_sym_asciimath] = ACTIONS(223),
        [anon_sym_menu] = ACTIONS(223),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(223),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(223),
        [anon_sym_pass] = ACTIONS(223),
        [anon_sym_LT_LT] = ACTIONS(223),
        [anon_sym_xref] = ACTIONS(223),
        [anon_sym_STAR2] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(223),
        [anon_sym__2] = ACTIONS(223),
        [anon_sym___] = ACTIONS(223),
        [anon_sym_BQUOTE2] = ACTIONS(223),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(223),
        [anon_sym_POUND2] = ACTIONS(223),
        [anon_sym_POUND_POUND] = ACTIONS(223),
    },
    [24] = {
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_LBRACE] = ACTIONS(227),
        [anon_sym_RBRACE] = ACTIONS(227),
        [sym__word_no_digit] = ACTIONS(227),
        [sym__digits] = ACTIONS(227),
        [anon_sym_BANG] = ACTIONS(227),
        [anon_sym_DQUOTE] = ACTIONS(227),
        [anon_sym_POUND] = ACTIONS(227),
        [anon_sym_DOLLAR] = ACTIONS(227),
        [anon_sym_PERCENT] = ACTIONS(227),
        [anon_sym_AMP] = ACTIONS(227),
        [anon_sym_SQUOTE] = ACTIONS(227),
        [anon_sym_LPAREN] = ACTIONS(227),
        [anon_sym_RPAREN] = ACTIONS(227),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_DOT] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(227),
        [anon_sym_COLON] = ACTIONS(227),
        [anon_sym_SEMI] = ACTIONS(227),
        [anon_sym_LT] = ACTIONS(227),
        [anon_sym_EQ] = ACTIONS(227),
        [anon_sym_GT] = ACTIONS(227),
        [anon_sym_QMARK] = ACTIONS(227),
        [anon_sym_AT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_BSLASH] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(227),
        [anon_sym_CARET] = ACTIONS(227),
        [anon_sym__] = ACTIONS(227),
        [anon_sym_BQUOTE] = ACTIONS(227),
        [anon_sym_PIPE] = ACTIONS(227),
        [anon_sym_TILDE] = ACTIONS(227),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(227),
        [anon_sym_anchor] = ACTIONS(227),
        [sym_email] = ACTIONS(227),
        [anon_sym_footnote] = ACTIONS(227),
        [anon_sym_footnoteref] = ACTIONS(227),
        [anon_sym_image] = ACTIONS(227),
        [anon_sym_icon] = ACTIONS(227),
        [anon_sym_kbd] = ACTIONS(227),
        [anon_sym_btn] = ACTIONS(227),
        [anon_sym_http] = ACTIONS(227),
        [anon_sym_https] = ACTIONS(227),
        [anon_sym_file] = ACTIONS(227),
        [anon_sym_ftp] = ACTIONS(227),
        [anon_sym_irc] = ACTIONS(227),
        [anon_sym_link] = ACTIONS(227),
        [anon_sym_mailto] = ACTIONS(227),
        [anon_sym_stem] = ACTIONS(227),
        [anon_sym_latexmath] = ACTIONS(227),
        [anon_sym_asciimath] = ACTIONS(227),
        [anon_sym_menu] = ACTIONS(227),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(227),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(227),
        [anon_sym_pass] = ACTIONS(227),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_xref] = ACTIONS(227),
        [anon_sym_STAR2] = ACTIONS(227),
        [anon_sym_STAR_STAR] = ACTIONS(227),
        [anon_sym__2] = ACTIONS(227),
        [anon_sym___] = ACTIONS(227),
        [anon_sym_BQUOTE2] = ACTIONS(227),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(227),
        [anon_sym_POUND2] = ACTIONS(227),
        [anon_sym_POUND_POUND] = ACTIONS(227),
    },
    [25] = {
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_LBRACE] = ACTIONS(231),
        [anon_sym_RBRACE] = ACTIONS(231),
        [sym__word_no_digit] = ACTIONS(231),
        [sym__digits] = ACTIONS(231),
        [anon_sym_BANG] = ACTIONS(231),
        [anon_sym_DQUOTE] = ACTIONS(231),
        [anon_sym_POUND] = ACTIONS(231),
        [anon_sym_DOLLAR] = ACTIONS(231),
        [anon_sym_PERCENT] = ACTIONS(231),
        [anon_sym_AMP] = ACTIONS(231),
        [anon_sym_SQUOTE] = ACTIONS(231),
        [anon_sym_LPAREN] = ACTIONS(231),
        [anon_sym_RPAREN] = ACTIONS(231),
        [anon_sym_STAR] = ACTIONS(231),
        [anon_sym_PLUS] = ACTIONS(231),
        [anon_sym_COMMA] = ACTIONS(231),
        [anon_sym_DASH] = ACTIONS(231),
        [anon_sym_DOT] = ACTIONS(231),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_COLON] = ACTIONS(231),
        [anon_sym_SEMI] = ACTIONS(231),
        [anon_sym_LT] = ACTIONS(231),
        [anon_sym_EQ] = ACTIONS(231),
        [anon_sym_GT] = ACTIONS(231),
        [anon_sym_QMARK] = ACTIONS(231),
        [anon_sym_AT] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(231),
        [anon_sym_BSLASH] = ACTIONS(231),
        [anon_sym_RBRACK] = ACTIONS(231),
        [anon_sym_CARET] = ACTIONS(231),
        [anon_sym__] = ACTIONS(231),
        [anon_sym_BQUOTE] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(231),
        [anon_sym_TILDE] = ACTIONS(231),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(231),
        [anon_sym_anchor] = ACTIONS(231),
        [sym_email] = ACTIONS(231),
        [anon_sym_footnote] = ACTIONS(231),
        [anon_sym_footnoteref] = ACTIONS(231),
        [anon_sym_image] = ACTIONS(231),
        [anon_sym_icon] = ACTIONS(231),
        [anon_sym_kbd] = ACTIONS(231),
        [anon_sym_btn] = ACTIONS(231),
        [anon_sym_http] = ACTIONS(231),
        [anon_sym_https] = ACTIONS(231),
        [anon_sym_file] = ACTIONS(231),
        [anon_sym_ftp] = ACTIONS(231),
        [anon_sym_irc] = ACTIONS(231),
        [anon_sym_link] = ACTIONS(231),
        [anon_sym_mailto] = ACTIONS(231),
        [anon_sym_stem] = ACTIONS(231),
        [anon_sym_latexmath] = ACTIONS(231),
        [anon_sym_asciimath] = ACTIONS(231),
        [anon_sym_menu] = ACTIONS(231),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(231),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(231),
        [anon_sym_pass] = ACTIONS(231),
        [anon_sym_LT_LT] = ACTIONS(231),
        [anon_sym_xref] = ACTIONS(231),
        [anon_sym_STAR2] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym__2] = ACTIONS(231),
        [anon_sym___] = ACTIONS(231),
        [anon_sym_BQUOTE2] = ACTIONS(231),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(231),
        [anon_sym_POUND2] = ACTIONS(231),
        [anon_sym_POUND_POUND] = ACTIONS(231),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_LBRACE] = ACTIONS(235),
        [anon_sym_RBRACE] = ACTIONS(235),
        [sym__word_no_digit] = ACTIONS(235),
        [sym__digits] = ACTIONS(235),
        [anon_sym_BANG] = ACTIONS(235),
        [anon_sym_DQUOTE] = ACTIONS(235),
        [anon_sym_POUND] = ACTIONS(235),
        [anon_sym_DOLLAR] = ACTIONS(235),
        [anon_sym_PERCENT] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_SQUOTE] = ACTIONS(235),
        [anon_sym_LPAREN] = ACTIONS(235),
        [anon_sym_RPAREN] = ACTIONS(235),
        [anon_sym_STAR] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(235),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_DASH] = ACTIONS(235),
        [anon_sym_DOT] = ACTIONS(235),
        [anon_sym_SLASH] = ACTIONS(235),
        [anon_sym_COLON] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_LT] = ACTIONS(235),
        [anon_sym_EQ] = ACTIONS(235),
        [anon_sym_GT] = ACTIONS(235),
        [anon_sym_QMARK] = ACTIONS(235),
        [anon_sym_AT] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(235),
        [anon_sym_BSLASH] = ACTIONS(235),
        [anon_sym_RBRACK] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(235),
        [anon_sym__] = ACTIONS(235),
        [anon_sym_BQUOTE] = ACTIONS(235),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_TILDE] = ACTIONS(235),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(235),
        [anon_sym_anchor] = ACTIONS(235),
        [sym_email] = ACTIONS(235),
        [anon_sym_footnote] = ACTIONS(235),
        [anon_sym_footnoteref] = ACTIONS(235),
        [anon_sym_image] = ACTIONS(235),
        [anon_sym_icon] = ACTIONS(235),
        [anon_sym_kbd] = ACTIONS(235),
        [anon_sym_btn] = ACTIONS(235),
        [anon_sym_http] = ACTIONS(235),
        [anon_sym_https] = ACTIONS(235),
        [anon_sym_file] = ACTIONS(235),
        [anon_sym_ftp] = ACTIONS(235),
        [anon_sym_irc] = ACTIONS(235),
        [anon_sym_link] = ACTIONS(235),
        [anon_sym_mailto] = ACTIONS(235),
        [anon_sym_stem] = ACTIONS(235),
        [anon_sym_latexmath] = ACTIONS(235),
        [anon_sym_asciimath] = ACTIONS(235),
        [anon_sym_menu] = ACTIONS(235),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(235),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(235),
        [anon_sym_pass] = ACTIONS(235),
        [anon_sym_LT_LT] = ACTIONS(235),
        [anon_sym_xref] = ACTIONS(235),
        [anon_sym_STAR2] = ACTIONS(235),
        [anon_sym_STAR_STAR] = ACTIONS(235),
        [anon_sym__2] = ACTIONS(235),
        [anon_sym___] = ACTIONS(235),
        [anon_sym_BQUOTE2] = ACTIONS(235),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(235),
        [anon_sym_POUND2] = ACTIONS(235),
        [anon_sym_POUND_POUND] = ACTIONS(235),
    },
    [27] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [anon_sym_LBRACE] = ACTIONS(239),
        [anon_sym_RBRACE] = ACTIONS(239),
        [sym__word_no_digit] = ACTIONS(239),
        [sym__digits] = ACTIONS(239),
        [anon_sym_BANG] = ACTIONS(239),
        [anon_sym_DQUOTE] = ACTIONS(239),
        [anon_sym_POUND] = ACTIONS(239),
        [anon_sym_DOLLAR] = ACTIONS(239),
        [anon_sym_PERCENT] = ACTIONS(239),
        [anon_sym_AMP] = ACTIONS(239),
        [anon_sym_SQUOTE] = ACTIONS(239),
        [anon_sym_LPAREN] = ACTIONS(239),
        [anon_sym_RPAREN] = ACTIONS(239),
        [anon_sym_STAR] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(239),
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_DASH] = ACTIONS(239),
        [anon_sym_DOT] = ACTIONS(239),
        [anon_sym_SLASH] = ACTIONS(239),
        [anon_sym_COLON] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_LT] = ACTIONS(239),
        [anon_sym_EQ] = ACTIONS(239),
        [anon_sym_GT] = ACTIONS(239),
        [anon_sym_QMARK] = ACTIONS(239),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_BSLASH] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(239),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym__] = ACTIONS(239),
        [anon_sym_BQUOTE] = ACTIONS(239),
        [anon_sym_PIPE] = ACTIONS(239),
        [anon_sym_TILDE] = ACTIONS(239),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(239),
        [anon_sym_anchor] = ACTIONS(239),
        [sym_email] = ACTIONS(239),
        [anon_sym_footnote] = ACTIONS(239),
        [anon_sym_footnoteref] = ACTIONS(239),
        [anon_sym_image] = ACTIONS(239),
        [anon_sym_icon] = ACTIONS(239),
        [anon_sym_kbd] = ACTIONS(239),
        [anon_sym_btn] = ACTIONS(239),
        [anon_sym_http] = ACTIONS(239),
        [anon_sym_https] = ACTIONS(239),
        [anon_sym_file] = ACTIONS(239),
        [anon_sym_ftp] = ACTIONS(239),
        [anon_sym_irc] = ACTIONS(239),
        [anon_sym_link] = ACTIONS(239),
        [anon_sym_mailto] = ACTIONS(239),
        [anon_sym_stem] = ACTIONS(239),
        [anon_sym_latexmath] = ACTIONS(239),
        [anon_sym_asciimath] = ACTIONS(239),
        [anon_sym_menu] = ACTIONS(239),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(239),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(239),
        [anon_sym_pass] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(239),
        [anon_sym_xref] = ACTIONS(239),
        [anon_sym_STAR2] = ACTIONS(239),
        [anon_sym_STAR_STAR] = ACTIONS(239),
        [anon_sym__2] = ACTIONS(239),
        [anon_sym___] = ACTIONS(239),
        [anon_sym_BQUOTE2] = ACTIONS(239),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(239),
        [anon_sym_POUND2] = ACTIONS(239),
        [anon_sym_POUND_POUND] = ACTIONS(239),
    },
    [28] = {
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
        [sym_email] = ACTIONS(153),
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
        [anon_sym_STAR2] = ACTIONS(153),
        [anon_sym_STAR_STAR] = ACTIONS(153),
        [anon_sym__2] = ACTIONS(153),
        [anon_sym___] = ACTIONS(153),
        [anon_sym_BQUOTE2] = ACTIONS(153),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(153),
        [anon_sym_POUND2] = ACTIONS(153),
        [anon_sym_POUND_POUND] = ACTIONS(153),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(241),
        [anon_sym_LBRACE] = ACTIONS(243),
        [anon_sym_RBRACE] = ACTIONS(243),
        [sym__word_no_digit] = ACTIONS(243),
        [sym__digits] = ACTIONS(243),
        [anon_sym_BANG] = ACTIONS(243),
        [anon_sym_DQUOTE] = ACTIONS(243),
        [anon_sym_POUND] = ACTIONS(243),
        [anon_sym_DOLLAR] = ACTIONS(243),
        [anon_sym_PERCENT] = ACTIONS(243),
        [anon_sym_AMP] = ACTIONS(243),
        [anon_sym_SQUOTE] = ACTIONS(243),
        [anon_sym_LPAREN] = ACTIONS(243),
        [anon_sym_RPAREN] = ACTIONS(243),
        [anon_sym_STAR] = ACTIONS(243),
        [anon_sym_PLUS] = ACTIONS(243),
        [anon_sym_COMMA] = ACTIONS(243),
        [anon_sym_DASH] = ACTIONS(243),
        [anon_sym_DOT] = ACTIONS(243),
        [anon_sym_SLASH] = ACTIONS(243),
        [anon_sym_COLON] = ACTIONS(243),
        [anon_sym_SEMI] = ACTIONS(243),
        [anon_sym_LT] = ACTIONS(243),
        [anon_sym_EQ] = ACTIONS(243),
        [anon_sym_GT] = ACTIONS(243),
        [anon_sym_QMARK] = ACTIONS(243),
        [anon_sym_AT] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(243),
        [anon_sym_BSLASH] = ACTIONS(243),
        [anon_sym_RBRACK] = ACTIONS(243),
        [anon_sym_CARET] = ACTIONS(243),
        [anon_sym__] = ACTIONS(243),
        [anon_sym_BQUOTE] = ACTIONS(243),
        [anon_sym_PIPE] = ACTIONS(243),
        [anon_sym_TILDE] = ACTIONS(243),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(243),
        [anon_sym_anchor] = ACTIONS(243),
        [sym_email] = ACTIONS(243),
        [anon_sym_footnote] = ACTIONS(243),
        [anon_sym_footnoteref] = ACTIONS(243),
        [anon_sym_image] = ACTIONS(243),
        [anon_sym_icon] = ACTIONS(243),
        [anon_sym_kbd] = ACTIONS(243),
        [anon_sym_btn] = ACTIONS(243),
        [anon_sym_http] = ACTIONS(243),
        [anon_sym_https] = ACTIONS(243),
        [anon_sym_file] = ACTIONS(243),
        [anon_sym_ftp] = ACTIONS(243),
        [anon_sym_irc] = ACTIONS(243),
        [anon_sym_link] = ACTIONS(243),
        [anon_sym_mailto] = ACTIONS(243),
        [anon_sym_stem] = ACTIONS(243),
        [anon_sym_latexmath] = ACTIONS(243),
        [anon_sym_asciimath] = ACTIONS(243),
        [anon_sym_menu] = ACTIONS(243),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(243),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(243),
        [anon_sym_pass] = ACTIONS(243),
        [anon_sym_LT_LT] = ACTIONS(243),
        [anon_sym_xref] = ACTIONS(243),
        [anon_sym_STAR2] = ACTIONS(243),
        [anon_sym_STAR_STAR] = ACTIONS(243),
        [anon_sym__2] = ACTIONS(243),
        [anon_sym___] = ACTIONS(243),
        [anon_sym_BQUOTE2] = ACTIONS(243),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(243),
        [anon_sym_POUND2] = ACTIONS(243),
        [anon_sym_POUND_POUND] = ACTIONS(243),
    },
    [30] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_LBRACE] = ACTIONS(247),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym__word_no_digit] = ACTIONS(247),
        [sym__digits] = ACTIONS(247),
        [anon_sym_BANG] = ACTIONS(247),
        [anon_sym_DQUOTE] = ACTIONS(247),
        [anon_sym_POUND] = ACTIONS(247),
        [anon_sym_DOLLAR] = ACTIONS(247),
        [anon_sym_PERCENT] = ACTIONS(247),
        [anon_sym_AMP] = ACTIONS(247),
        [anon_sym_SQUOTE] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(247),
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_DASH] = ACTIONS(247),
        [anon_sym_DOT] = ACTIONS(247),
        [anon_sym_SLASH] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_SEMI] = ACTIONS(247),
        [anon_sym_LT] = ACTIONS(247),
        [anon_sym_EQ] = ACTIONS(247),
        [anon_sym_GT] = ACTIONS(247),
        [anon_sym_QMARK] = ACTIONS(247),
        [anon_sym_AT] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(247),
        [anon_sym_BSLASH] = ACTIONS(247),
        [anon_sym_RBRACK] = ACTIONS(247),
        [anon_sym_CARET] = ACTIONS(247),
        [anon_sym__] = ACTIONS(247),
        [anon_sym_BQUOTE] = ACTIONS(247),
        [anon_sym_PIPE] = ACTIONS(247),
        [anon_sym_TILDE] = ACTIONS(247),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(247),
        [anon_sym_anchor] = ACTIONS(247),
        [sym_email] = ACTIONS(247),
        [anon_sym_footnote] = ACTIONS(247),
        [anon_sym_footnoteref] = ACTIONS(247),
        [anon_sym_image] = ACTIONS(247),
        [anon_sym_icon] = ACTIONS(247),
        [anon_sym_kbd] = ACTIONS(247),
        [anon_sym_btn] = ACTIONS(247),
        [anon_sym_http] = ACTIONS(247),
        [anon_sym_https] = ACTIONS(247),
        [anon_sym_file] = ACTIONS(247),
        [anon_sym_ftp] = ACTIONS(247),
        [anon_sym_irc] = ACTIONS(247),
        [anon_sym_link] = ACTIONS(247),
        [anon_sym_mailto] = ACTIONS(247),
        [anon_sym_stem] = ACTIONS(247),
        [anon_sym_latexmath] = ACTIONS(247),
        [anon_sym_asciimath] = ACTIONS(247),
        [anon_sym_menu] = ACTIONS(247),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(247),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(247),
        [anon_sym_pass] = ACTIONS(247),
        [anon_sym_LT_LT] = ACTIONS(247),
        [anon_sym_xref] = ACTIONS(247),
        [anon_sym_STAR2] = ACTIONS(247),
        [anon_sym_STAR_STAR] = ACTIONS(247),
        [anon_sym__2] = ACTIONS(247),
        [anon_sym___] = ACTIONS(247),
        [anon_sym_BQUOTE2] = ACTIONS(247),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(247),
        [anon_sym_POUND2] = ACTIONS(247),
        [anon_sym_POUND_POUND] = ACTIONS(247),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(249),
        [anon_sym_LBRACE] = ACTIONS(251),
        [anon_sym_RBRACE] = ACTIONS(251),
        [sym__word_no_digit] = ACTIONS(251),
        [sym__digits] = ACTIONS(251),
        [anon_sym_BANG] = ACTIONS(251),
        [anon_sym_DQUOTE] = ACTIONS(251),
        [anon_sym_POUND] = ACTIONS(251),
        [anon_sym_DOLLAR] = ACTIONS(251),
        [anon_sym_PERCENT] = ACTIONS(251),
        [anon_sym_AMP] = ACTIONS(251),
        [anon_sym_SQUOTE] = ACTIONS(251),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(251),
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_DASH] = ACTIONS(251),
        [anon_sym_DOT] = ACTIONS(251),
        [anon_sym_SLASH] = ACTIONS(251),
        [anon_sym_COLON] = ACTIONS(251),
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_LT] = ACTIONS(251),
        [anon_sym_EQ] = ACTIONS(251),
        [anon_sym_GT] = ACTIONS(251),
        [anon_sym_QMARK] = ACTIONS(251),
        [anon_sym_AT] = ACTIONS(251),
        [anon_sym_LBRACK] = ACTIONS(251),
        [anon_sym_BSLASH] = ACTIONS(251),
        [anon_sym_RBRACK] = ACTIONS(251),
        [anon_sym_CARET] = ACTIONS(251),
        [anon_sym__] = ACTIONS(251),
        [anon_sym_BQUOTE] = ACTIONS(251),
        [anon_sym_PIPE] = ACTIONS(251),
        [anon_sym_TILDE] = ACTIONS(251),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(251),
        [anon_sym_anchor] = ACTIONS(251),
        [sym_email] = ACTIONS(251),
        [anon_sym_footnote] = ACTIONS(251),
        [anon_sym_footnoteref] = ACTIONS(251),
        [anon_sym_image] = ACTIONS(251),
        [anon_sym_icon] = ACTIONS(251),
        [anon_sym_kbd] = ACTIONS(251),
        [anon_sym_btn] = ACTIONS(251),
        [anon_sym_http] = ACTIONS(251),
        [anon_sym_https] = ACTIONS(251),
        [anon_sym_file] = ACTIONS(251),
        [anon_sym_ftp] = ACTIONS(251),
        [anon_sym_irc] = ACTIONS(251),
        [anon_sym_link] = ACTIONS(251),
        [anon_sym_mailto] = ACTIONS(251),
        [anon_sym_stem] = ACTIONS(251),
        [anon_sym_latexmath] = ACTIONS(251),
        [anon_sym_asciimath] = ACTIONS(251),
        [anon_sym_menu] = ACTIONS(251),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(251),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(251),
        [anon_sym_pass] = ACTIONS(251),
        [anon_sym_LT_LT] = ACTIONS(251),
        [anon_sym_xref] = ACTIONS(251),
        [anon_sym_STAR2] = ACTIONS(251),
        [anon_sym_STAR_STAR] = ACTIONS(251),
        [anon_sym__2] = ACTIONS(251),
        [anon_sym___] = ACTIONS(251),
        [anon_sym_BQUOTE2] = ACTIONS(251),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(251),
        [anon_sym_POUND2] = ACTIONS(251),
        [anon_sym_POUND_POUND] = ACTIONS(251),
    },
    [32] = {
        [ts_builtin_sym_end] = ACTIONS(253),
        [anon_sym_LBRACE] = ACTIONS(255),
        [anon_sym_RBRACE] = ACTIONS(255),
        [sym__word_no_digit] = ACTIONS(255),
        [sym__digits] = ACTIONS(255),
        [anon_sym_BANG] = ACTIONS(255),
        [anon_sym_DQUOTE] = ACTIONS(255),
        [anon_sym_POUND] = ACTIONS(255),
        [anon_sym_DOLLAR] = ACTIONS(255),
        [anon_sym_PERCENT] = ACTIONS(255),
        [anon_sym_AMP] = ACTIONS(255),
        [anon_sym_SQUOTE] = ACTIONS(255),
        [anon_sym_LPAREN] = ACTIONS(255),
        [anon_sym_RPAREN] = ACTIONS(255),
        [anon_sym_STAR] = ACTIONS(255),
        [anon_sym_PLUS] = ACTIONS(255),
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_DASH] = ACTIONS(255),
        [anon_sym_DOT] = ACTIONS(255),
        [anon_sym_SLASH] = ACTIONS(255),
        [anon_sym_COLON] = ACTIONS(255),
        [anon_sym_SEMI] = ACTIONS(255),
        [anon_sym_LT] = ACTIONS(255),
        [anon_sym_EQ] = ACTIONS(255),
        [anon_sym_GT] = ACTIONS(255),
        [anon_sym_QMARK] = ACTIONS(255),
        [anon_sym_AT] = ACTIONS(255),
        [anon_sym_LBRACK] = ACTIONS(255),
        [anon_sym_BSLASH] = ACTIONS(255),
        [anon_sym_RBRACK] = ACTIONS(255),
        [anon_sym_CARET] = ACTIONS(255),
        [anon_sym__] = ACTIONS(255),
        [anon_sym_BQUOTE] = ACTIONS(255),
        [anon_sym_PIPE] = ACTIONS(255),
        [anon_sym_TILDE] = ACTIONS(255),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(255),
        [anon_sym_anchor] = ACTIONS(255),
        [sym_email] = ACTIONS(255),
        [anon_sym_footnote] = ACTIONS(255),
        [anon_sym_footnoteref] = ACTIONS(255),
        [anon_sym_image] = ACTIONS(255),
        [anon_sym_icon] = ACTIONS(255),
        [anon_sym_kbd] = ACTIONS(255),
        [anon_sym_btn] = ACTIONS(255),
        [anon_sym_http] = ACTIONS(255),
        [anon_sym_https] = ACTIONS(255),
        [anon_sym_file] = ACTIONS(255),
        [anon_sym_ftp] = ACTIONS(255),
        [anon_sym_irc] = ACTIONS(255),
        [anon_sym_link] = ACTIONS(255),
        [anon_sym_mailto] = ACTIONS(255),
        [anon_sym_stem] = ACTIONS(255),
        [anon_sym_latexmath] = ACTIONS(255),
        [anon_sym_asciimath] = ACTIONS(255),
        [anon_sym_menu] = ACTIONS(255),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(255),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(255),
        [anon_sym_pass] = ACTIONS(255),
        [anon_sym_LT_LT] = ACTIONS(255),
        [anon_sym_xref] = ACTIONS(255),
        [anon_sym_STAR2] = ACTIONS(255),
        [anon_sym_STAR_STAR] = ACTIONS(255),
        [anon_sym__2] = ACTIONS(255),
        [anon_sym___] = ACTIONS(255),
        [anon_sym_BQUOTE2] = ACTIONS(255),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(255),
        [anon_sym_POUND2] = ACTIONS(255),
        [anon_sym_POUND_POUND] = ACTIONS(255),
    },
    [33] = {
        [ts_builtin_sym_end] = ACTIONS(257),
        [anon_sym_LBRACE] = ACTIONS(259),
        [anon_sym_RBRACE] = ACTIONS(259),
        [sym__word_no_digit] = ACTIONS(259),
        [sym__digits] = ACTIONS(259),
        [anon_sym_BANG] = ACTIONS(259),
        [anon_sym_DQUOTE] = ACTIONS(259),
        [anon_sym_POUND] = ACTIONS(259),
        [anon_sym_DOLLAR] = ACTIONS(259),
        [anon_sym_PERCENT] = ACTIONS(259),
        [anon_sym_AMP] = ACTIONS(259),
        [anon_sym_SQUOTE] = ACTIONS(259),
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(259),
        [anon_sym_PLUS] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(259),
        [anon_sym_DASH] = ACTIONS(259),
        [anon_sym_DOT] = ACTIONS(259),
        [anon_sym_SLASH] = ACTIONS(259),
        [anon_sym_COLON] = ACTIONS(259),
        [anon_sym_SEMI] = ACTIONS(259),
        [anon_sym_LT] = ACTIONS(259),
        [anon_sym_EQ] = ACTIONS(259),
        [anon_sym_GT] = ACTIONS(259),
        [anon_sym_QMARK] = ACTIONS(259),
        [anon_sym_AT] = ACTIONS(259),
        [anon_sym_LBRACK] = ACTIONS(259),
        [anon_sym_BSLASH] = ACTIONS(259),
        [anon_sym_RBRACK] = ACTIONS(259),
        [anon_sym_CARET] = ACTIONS(259),
        [anon_sym__] = ACTIONS(259),
        [anon_sym_BQUOTE] = ACTIONS(259),
        [anon_sym_PIPE] = ACTIONS(259),
        [anon_sym_TILDE] = ACTIONS(259),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(259),
        [anon_sym_anchor] = ACTIONS(259),
        [sym_email] = ACTIONS(259),
        [anon_sym_footnote] = ACTIONS(259),
        [anon_sym_footnoteref] = ACTIONS(259),
        [anon_sym_image] = ACTIONS(259),
        [anon_sym_icon] = ACTIONS(259),
        [anon_sym_kbd] = ACTIONS(259),
        [anon_sym_btn] = ACTIONS(259),
        [anon_sym_http] = ACTIONS(259),
        [anon_sym_https] = ACTIONS(259),
        [anon_sym_file] = ACTIONS(259),
        [anon_sym_ftp] = ACTIONS(259),
        [anon_sym_irc] = ACTIONS(259),
        [anon_sym_link] = ACTIONS(259),
        [anon_sym_mailto] = ACTIONS(259),
        [anon_sym_stem] = ACTIONS(259),
        [anon_sym_latexmath] = ACTIONS(259),
        [anon_sym_asciimath] = ACTIONS(259),
        [anon_sym_menu] = ACTIONS(259),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(259),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(259),
        [anon_sym_pass] = ACTIONS(259),
        [anon_sym_LT_LT] = ACTIONS(259),
        [anon_sym_xref] = ACTIONS(259),
        [anon_sym_STAR2] = ACTIONS(259),
        [anon_sym_STAR_STAR] = ACTIONS(259),
        [anon_sym__2] = ACTIONS(259),
        [anon_sym___] = ACTIONS(259),
        [anon_sym_BQUOTE2] = ACTIONS(259),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(259),
        [anon_sym_POUND2] = ACTIONS(259),
        [anon_sym_POUND_POUND] = ACTIONS(259),
    },
    [34] = {
        [ts_builtin_sym_end] = ACTIONS(261),
        [anon_sym_LBRACE] = ACTIONS(263),
        [anon_sym_RBRACE] = ACTIONS(263),
        [sym__word_no_digit] = ACTIONS(263),
        [sym__digits] = ACTIONS(263),
        [anon_sym_BANG] = ACTIONS(263),
        [anon_sym_DQUOTE] = ACTIONS(263),
        [anon_sym_POUND] = ACTIONS(263),
        [anon_sym_DOLLAR] = ACTIONS(263),
        [anon_sym_PERCENT] = ACTIONS(263),
        [anon_sym_AMP] = ACTIONS(263),
        [anon_sym_SQUOTE] = ACTIONS(263),
        [anon_sym_LPAREN] = ACTIONS(263),
        [anon_sym_RPAREN] = ACTIONS(263),
        [anon_sym_STAR] = ACTIONS(263),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_DASH] = ACTIONS(263),
        [anon_sym_DOT] = ACTIONS(263),
        [anon_sym_SLASH] = ACTIONS(263),
        [anon_sym_COLON] = ACTIONS(263),
        [anon_sym_SEMI] = ACTIONS(263),
        [anon_sym_LT] = ACTIONS(263),
        [anon_sym_EQ] = ACTIONS(263),
        [anon_sym_GT] = ACTIONS(263),
        [anon_sym_QMARK] = ACTIONS(263),
        [anon_sym_AT] = ACTIONS(263),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_BSLASH] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(263),
        [anon_sym_CARET] = ACTIONS(263),
        [anon_sym__] = ACTIONS(263),
        [anon_sym_BQUOTE] = ACTIONS(263),
        [anon_sym_PIPE] = ACTIONS(263),
        [anon_sym_TILDE] = ACTIONS(263),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(263),
        [anon_sym_anchor] = ACTIONS(263),
        [sym_email] = ACTIONS(263),
        [anon_sym_footnote] = ACTIONS(263),
        [anon_sym_footnoteref] = ACTIONS(263),
        [anon_sym_image] = ACTIONS(263),
        [anon_sym_icon] = ACTIONS(263),
        [anon_sym_kbd] = ACTIONS(263),
        [anon_sym_btn] = ACTIONS(263),
        [anon_sym_http] = ACTIONS(263),
        [anon_sym_https] = ACTIONS(263),
        [anon_sym_file] = ACTIONS(263),
        [anon_sym_ftp] = ACTIONS(263),
        [anon_sym_irc] = ACTIONS(263),
        [anon_sym_link] = ACTIONS(263),
        [anon_sym_mailto] = ACTIONS(263),
        [anon_sym_stem] = ACTIONS(263),
        [anon_sym_latexmath] = ACTIONS(263),
        [anon_sym_asciimath] = ACTIONS(263),
        [anon_sym_menu] = ACTIONS(263),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(263),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(263),
        [anon_sym_pass] = ACTIONS(263),
        [anon_sym_LT_LT] = ACTIONS(263),
        [anon_sym_xref] = ACTIONS(263),
        [anon_sym_STAR2] = ACTIONS(263),
        [anon_sym_STAR_STAR] = ACTIONS(263),
        [anon_sym__2] = ACTIONS(263),
        [anon_sym___] = ACTIONS(263),
        [anon_sym_BQUOTE2] = ACTIONS(263),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(263),
        [anon_sym_POUND2] = ACTIONS(263),
        [anon_sym_POUND_POUND] = ACTIONS(263),
    },
    [35] = {
        [ts_builtin_sym_end] = ACTIONS(265),
        [anon_sym_LBRACE] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(267),
        [sym__word_no_digit] = ACTIONS(267),
        [sym__digits] = ACTIONS(267),
        [anon_sym_BANG] = ACTIONS(267),
        [anon_sym_DQUOTE] = ACTIONS(267),
        [anon_sym_POUND] = ACTIONS(267),
        [anon_sym_DOLLAR] = ACTIONS(267),
        [anon_sym_PERCENT] = ACTIONS(267),
        [anon_sym_AMP] = ACTIONS(267),
        [anon_sym_SQUOTE] = ACTIONS(267),
        [anon_sym_LPAREN] = ACTIONS(267),
        [anon_sym_RPAREN] = ACTIONS(267),
        [anon_sym_STAR] = ACTIONS(267),
        [anon_sym_PLUS] = ACTIONS(267),
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_DASH] = ACTIONS(267),
        [anon_sym_DOT] = ACTIONS(267),
        [anon_sym_SLASH] = ACTIONS(267),
        [anon_sym_COLON] = ACTIONS(267),
        [anon_sym_SEMI] = ACTIONS(267),
        [anon_sym_LT] = ACTIONS(267),
        [anon_sym_EQ] = ACTIONS(267),
        [anon_sym_GT] = ACTIONS(267),
        [anon_sym_QMARK] = ACTIONS(267),
        [anon_sym_AT] = ACTIONS(267),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_BSLASH] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(267),
        [anon_sym_CARET] = ACTIONS(267),
        [anon_sym__] = ACTIONS(267),
        [anon_sym_BQUOTE] = ACTIONS(267),
        [anon_sym_PIPE] = ACTIONS(267),
        [anon_sym_TILDE] = ACTIONS(267),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(267),
        [anon_sym_anchor] = ACTIONS(267),
        [sym_email] = ACTIONS(267),
        [anon_sym_footnote] = ACTIONS(267),
        [anon_sym_footnoteref] = ACTIONS(267),
        [anon_sym_image] = ACTIONS(267),
        [anon_sym_icon] = ACTIONS(267),
        [anon_sym_kbd] = ACTIONS(267),
        [anon_sym_btn] = ACTIONS(267),
        [anon_sym_http] = ACTIONS(267),
        [anon_sym_https] = ACTIONS(267),
        [anon_sym_file] = ACTIONS(267),
        [anon_sym_ftp] = ACTIONS(267),
        [anon_sym_irc] = ACTIONS(267),
        [anon_sym_link] = ACTIONS(267),
        [anon_sym_mailto] = ACTIONS(267),
        [anon_sym_stem] = ACTIONS(267),
        [anon_sym_latexmath] = ACTIONS(267),
        [anon_sym_asciimath] = ACTIONS(267),
        [anon_sym_menu] = ACTIONS(267),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(267),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(267),
        [anon_sym_pass] = ACTIONS(267),
        [anon_sym_LT_LT] = ACTIONS(267),
        [anon_sym_xref] = ACTIONS(267),
        [anon_sym_STAR2] = ACTIONS(267),
        [anon_sym_STAR_STAR] = ACTIONS(267),
        [anon_sym__2] = ACTIONS(267),
        [anon_sym___] = ACTIONS(267),
        [anon_sym_BQUOTE2] = ACTIONS(267),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(267),
        [anon_sym_POUND2] = ACTIONS(267),
        [anon_sym_POUND_POUND] = ACTIONS(267),
    },
    [36] = {
        [ts_builtin_sym_end] = ACTIONS(269),
        [anon_sym_LBRACE] = ACTIONS(271),
        [anon_sym_RBRACE] = ACTIONS(271),
        [sym__word_no_digit] = ACTIONS(271),
        [sym__digits] = ACTIONS(271),
        [anon_sym_BANG] = ACTIONS(271),
        [anon_sym_DQUOTE] = ACTIONS(271),
        [anon_sym_POUND] = ACTIONS(271),
        [anon_sym_DOLLAR] = ACTIONS(271),
        [anon_sym_PERCENT] = ACTIONS(271),
        [anon_sym_AMP] = ACTIONS(271),
        [anon_sym_SQUOTE] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(271),
        [anon_sym_RPAREN] = ACTIONS(271),
        [anon_sym_STAR] = ACTIONS(271),
        [anon_sym_PLUS] = ACTIONS(271),
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_DASH] = ACTIONS(271),
        [anon_sym_DOT] = ACTIONS(271),
        [anon_sym_SLASH] = ACTIONS(271),
        [anon_sym_COLON] = ACTIONS(271),
        [anon_sym_SEMI] = ACTIONS(271),
        [anon_sym_LT] = ACTIONS(271),
        [anon_sym_EQ] = ACTIONS(271),
        [anon_sym_GT] = ACTIONS(271),
        [anon_sym_QMARK] = ACTIONS(271),
        [anon_sym_AT] = ACTIONS(271),
        [anon_sym_LBRACK] = ACTIONS(271),
        [anon_sym_BSLASH] = ACTIONS(271),
        [anon_sym_RBRACK] = ACTIONS(271),
        [anon_sym_CARET] = ACTIONS(271),
        [anon_sym__] = ACTIONS(271),
        [anon_sym_BQUOTE] = ACTIONS(271),
        [anon_sym_PIPE] = ACTIONS(271),
        [anon_sym_TILDE] = ACTIONS(271),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(271),
        [anon_sym_anchor] = ACTIONS(271),
        [sym_email] = ACTIONS(271),
        [anon_sym_footnote] = ACTIONS(271),
        [anon_sym_footnoteref] = ACTIONS(271),
        [anon_sym_image] = ACTIONS(271),
        [anon_sym_icon] = ACTIONS(271),
        [anon_sym_kbd] = ACTIONS(271),
        [anon_sym_btn] = ACTIONS(271),
        [anon_sym_http] = ACTIONS(271),
        [anon_sym_https] = ACTIONS(271),
        [anon_sym_file] = ACTIONS(271),
        [anon_sym_ftp] = ACTIONS(271),
        [anon_sym_irc] = ACTIONS(271),
        [anon_sym_link] = ACTIONS(271),
        [anon_sym_mailto] = ACTIONS(271),
        [anon_sym_stem] = ACTIONS(271),
        [anon_sym_latexmath] = ACTIONS(271),
        [anon_sym_asciimath] = ACTIONS(271),
        [anon_sym_menu] = ACTIONS(271),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(271),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(271),
        [anon_sym_pass] = ACTIONS(271),
        [anon_sym_LT_LT] = ACTIONS(271),
        [anon_sym_xref] = ACTIONS(271),
        [anon_sym_STAR2] = ACTIONS(271),
        [anon_sym_STAR_STAR] = ACTIONS(271),
        [anon_sym__2] = ACTIONS(271),
        [anon_sym___] = ACTIONS(271),
        [anon_sym_BQUOTE2] = ACTIONS(271),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(271),
        [anon_sym_POUND2] = ACTIONS(271),
        [anon_sym_POUND_POUND] = ACTIONS(271),
    },
    [37] = {
        [ts_builtin_sym_end] = ACTIONS(273),
        [anon_sym_LBRACE] = ACTIONS(275),
        [anon_sym_RBRACE] = ACTIONS(275),
        [sym__word_no_digit] = ACTIONS(275),
        [sym__digits] = ACTIONS(275),
        [anon_sym_BANG] = ACTIONS(275),
        [anon_sym_DQUOTE] = ACTIONS(275),
        [anon_sym_POUND] = ACTIONS(275),
        [anon_sym_DOLLAR] = ACTIONS(275),
        [anon_sym_PERCENT] = ACTIONS(275),
        [anon_sym_AMP] = ACTIONS(275),
        [anon_sym_SQUOTE] = ACTIONS(275),
        [anon_sym_LPAREN] = ACTIONS(275),
        [anon_sym_RPAREN] = ACTIONS(275),
        [anon_sym_STAR] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_DASH] = ACTIONS(275),
        [anon_sym_DOT] = ACTIONS(275),
        [anon_sym_SLASH] = ACTIONS(275),
        [anon_sym_COLON] = ACTIONS(275),
        [anon_sym_SEMI] = ACTIONS(275),
        [anon_sym_LT] = ACTIONS(275),
        [anon_sym_EQ] = ACTIONS(275),
        [anon_sym_GT] = ACTIONS(275),
        [anon_sym_QMARK] = ACTIONS(275),
        [anon_sym_AT] = ACTIONS(275),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_BSLASH] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(275),
        [anon_sym_CARET] = ACTIONS(275),
        [anon_sym__] = ACTIONS(275),
        [anon_sym_BQUOTE] = ACTIONS(275),
        [anon_sym_PIPE] = ACTIONS(275),
        [anon_sym_TILDE] = ACTIONS(275),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(275),
        [anon_sym_anchor] = ACTIONS(275),
        [sym_email] = ACTIONS(275),
        [anon_sym_footnote] = ACTIONS(275),
        [anon_sym_footnoteref] = ACTIONS(275),
        [anon_sym_image] = ACTIONS(275),
        [anon_sym_icon] = ACTIONS(275),
        [anon_sym_kbd] = ACTIONS(275),
        [anon_sym_btn] = ACTIONS(275),
        [anon_sym_http] = ACTIONS(275),
        [anon_sym_https] = ACTIONS(275),
        [anon_sym_file] = ACTIONS(275),
        [anon_sym_ftp] = ACTIONS(275),
        [anon_sym_irc] = ACTIONS(275),
        [anon_sym_link] = ACTIONS(275),
        [anon_sym_mailto] = ACTIONS(275),
        [anon_sym_stem] = ACTIONS(275),
        [anon_sym_latexmath] = ACTIONS(275),
        [anon_sym_asciimath] = ACTIONS(275),
        [anon_sym_menu] = ACTIONS(275),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(275),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(275),
        [anon_sym_pass] = ACTIONS(275),
        [anon_sym_LT_LT] = ACTIONS(275),
        [anon_sym_xref] = ACTIONS(275),
        [anon_sym_STAR2] = ACTIONS(275),
        [anon_sym_STAR_STAR] = ACTIONS(275),
        [anon_sym__2] = ACTIONS(275),
        [anon_sym___] = ACTIONS(275),
        [anon_sym_BQUOTE2] = ACTIONS(275),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(275),
        [anon_sym_POUND2] = ACTIONS(275),
        [anon_sym_POUND_POUND] = ACTIONS(275),
    },
    [38] = {
        [ts_builtin_sym_end] = ACTIONS(277),
        [anon_sym_LBRACE] = ACTIONS(279),
        [anon_sym_RBRACE] = ACTIONS(279),
        [sym__word_no_digit] = ACTIONS(279),
        [sym__digits] = ACTIONS(279),
        [anon_sym_BANG] = ACTIONS(279),
        [anon_sym_DQUOTE] = ACTIONS(279),
        [anon_sym_POUND] = ACTIONS(279),
        [anon_sym_DOLLAR] = ACTIONS(279),
        [anon_sym_PERCENT] = ACTIONS(279),
        [anon_sym_AMP] = ACTIONS(279),
        [anon_sym_SQUOTE] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(279),
        [anon_sym_RPAREN] = ACTIONS(279),
        [anon_sym_STAR] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(279),
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_DASH] = ACTIONS(279),
        [anon_sym_DOT] = ACTIONS(279),
        [anon_sym_SLASH] = ACTIONS(279),
        [anon_sym_COLON] = ACTIONS(279),
        [anon_sym_SEMI] = ACTIONS(279),
        [anon_sym_LT] = ACTIONS(279),
        [anon_sym_EQ] = ACTIONS(279),
        [anon_sym_GT] = ACTIONS(279),
        [anon_sym_QMARK] = ACTIONS(279),
        [anon_sym_AT] = ACTIONS(279),
        [anon_sym_LBRACK] = ACTIONS(279),
        [anon_sym_BSLASH] = ACTIONS(279),
        [anon_sym_RBRACK] = ACTIONS(279),
        [anon_sym_CARET] = ACTIONS(279),
        [anon_sym__] = ACTIONS(279),
        [anon_sym_BQUOTE] = ACTIONS(279),
        [anon_sym_PIPE] = ACTIONS(279),
        [anon_sym_TILDE] = ACTIONS(279),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(279),
        [anon_sym_anchor] = ACTIONS(279),
        [sym_email] = ACTIONS(279),
        [anon_sym_footnote] = ACTIONS(279),
        [anon_sym_footnoteref] = ACTIONS(279),
        [anon_sym_image] = ACTIONS(279),
        [anon_sym_icon] = ACTIONS(279),
        [anon_sym_kbd] = ACTIONS(279),
        [anon_sym_btn] = ACTIONS(279),
        [anon_sym_http] = ACTIONS(279),
        [anon_sym_https] = ACTIONS(279),
        [anon_sym_file] = ACTIONS(279),
        [anon_sym_ftp] = ACTIONS(279),
        [anon_sym_irc] = ACTIONS(279),
        [anon_sym_link] = ACTIONS(279),
        [anon_sym_mailto] = ACTIONS(279),
        [anon_sym_stem] = ACTIONS(279),
        [anon_sym_latexmath] = ACTIONS(279),
        [anon_sym_asciimath] = ACTIONS(279),
        [anon_sym_menu] = ACTIONS(279),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(279),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(279),
        [anon_sym_pass] = ACTIONS(279),
        [anon_sym_LT_LT] = ACTIONS(279),
        [anon_sym_xref] = ACTIONS(279),
        [anon_sym_STAR2] = ACTIONS(279),
        [anon_sym_STAR_STAR] = ACTIONS(279),
        [anon_sym__2] = ACTIONS(279),
        [anon_sym___] = ACTIONS(279),
        [anon_sym_BQUOTE2] = ACTIONS(279),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(279),
        [anon_sym_POUND2] = ACTIONS(279),
        [anon_sym_POUND_POUND] = ACTIONS(279),
    },
    [39] = {
        [ts_builtin_sym_end] = ACTIONS(281),
        [anon_sym_LBRACE] = ACTIONS(283),
        [anon_sym_RBRACE] = ACTIONS(283),
        [sym__word_no_digit] = ACTIONS(283),
        [sym__digits] = ACTIONS(283),
        [anon_sym_BANG] = ACTIONS(283),
        [anon_sym_DQUOTE] = ACTIONS(283),
        [anon_sym_POUND] = ACTIONS(283),
        [anon_sym_DOLLAR] = ACTIONS(283),
        [anon_sym_PERCENT] = ACTIONS(283),
        [anon_sym_AMP] = ACTIONS(283),
        [anon_sym_SQUOTE] = ACTIONS(283),
        [anon_sym_LPAREN] = ACTIONS(283),
        [anon_sym_RPAREN] = ACTIONS(283),
        [anon_sym_STAR] = ACTIONS(283),
        [anon_sym_PLUS] = ACTIONS(283),
        [anon_sym_COMMA] = ACTIONS(283),
        [anon_sym_DASH] = ACTIONS(283),
        [anon_sym_DOT] = ACTIONS(283),
        [anon_sym_SLASH] = ACTIONS(283),
        [anon_sym_COLON] = ACTIONS(283),
        [anon_sym_SEMI] = ACTIONS(283),
        [anon_sym_LT] = ACTIONS(283),
        [anon_sym_EQ] = ACTIONS(283),
        [anon_sym_GT] = ACTIONS(283),
        [anon_sym_QMARK] = ACTIONS(283),
        [anon_sym_AT] = ACTIONS(283),
        [anon_sym_LBRACK] = ACTIONS(283),
        [anon_sym_BSLASH] = ACTIONS(283),
        [anon_sym_RBRACK] = ACTIONS(283),
        [anon_sym_CARET] = ACTIONS(283),
        [anon_sym__] = ACTIONS(283),
        [anon_sym_BQUOTE] = ACTIONS(283),
        [anon_sym_PIPE] = ACTIONS(283),
        [anon_sym_TILDE] = ACTIONS(283),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(283),
        [anon_sym_anchor] = ACTIONS(283),
        [sym_email] = ACTIONS(283),
        [anon_sym_footnote] = ACTIONS(283),
        [anon_sym_footnoteref] = ACTIONS(283),
        [anon_sym_image] = ACTIONS(283),
        [anon_sym_icon] = ACTIONS(283),
        [anon_sym_kbd] = ACTIONS(283),
        [anon_sym_btn] = ACTIONS(283),
        [anon_sym_http] = ACTIONS(283),
        [anon_sym_https] = ACTIONS(283),
        [anon_sym_file] = ACTIONS(283),
        [anon_sym_ftp] = ACTIONS(283),
        [anon_sym_irc] = ACTIONS(283),
        [anon_sym_link] = ACTIONS(283),
        [anon_sym_mailto] = ACTIONS(283),
        [anon_sym_stem] = ACTIONS(283),
        [anon_sym_latexmath] = ACTIONS(283),
        [anon_sym_asciimath] = ACTIONS(283),
        [anon_sym_menu] = ACTIONS(283),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(283),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(283),
        [anon_sym_pass] = ACTIONS(283),
        [anon_sym_LT_LT] = ACTIONS(283),
        [anon_sym_xref] = ACTIONS(283),
        [anon_sym_STAR2] = ACTIONS(283),
        [anon_sym_STAR_STAR] = ACTIONS(283),
        [anon_sym__2] = ACTIONS(283),
        [anon_sym___] = ACTIONS(283),
        [anon_sym_BQUOTE2] = ACTIONS(283),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(283),
        [anon_sym_POUND2] = ACTIONS(283),
        [anon_sym_POUND_POUND] = ACTIONS(283),
    },
    [40] = {
        [ts_builtin_sym_end] = ACTIONS(285),
        [anon_sym_LBRACE] = ACTIONS(287),
        [anon_sym_RBRACE] = ACTIONS(287),
        [sym__word_no_digit] = ACTIONS(287),
        [sym__digits] = ACTIONS(287),
        [anon_sym_BANG] = ACTIONS(287),
        [anon_sym_DQUOTE] = ACTIONS(287),
        [anon_sym_POUND] = ACTIONS(287),
        [anon_sym_DOLLAR] = ACTIONS(287),
        [anon_sym_PERCENT] = ACTIONS(287),
        [anon_sym_AMP] = ACTIONS(287),
        [anon_sym_SQUOTE] = ACTIONS(287),
        [anon_sym_LPAREN] = ACTIONS(287),
        [anon_sym_RPAREN] = ACTIONS(287),
        [anon_sym_STAR] = ACTIONS(287),
        [anon_sym_PLUS] = ACTIONS(287),
        [anon_sym_COMMA] = ACTIONS(287),
        [anon_sym_DASH] = ACTIONS(287),
        [anon_sym_DOT] = ACTIONS(287),
        [anon_sym_SLASH] = ACTIONS(287),
        [anon_sym_COLON] = ACTIONS(287),
        [anon_sym_SEMI] = ACTIONS(287),
        [anon_sym_LT] = ACTIONS(287),
        [anon_sym_EQ] = ACTIONS(287),
        [anon_sym_GT] = ACTIONS(287),
        [anon_sym_QMARK] = ACTIONS(287),
        [anon_sym_AT] = ACTIONS(287),
        [anon_sym_LBRACK] = ACTIONS(287),
        [anon_sym_BSLASH] = ACTIONS(287),
        [anon_sym_RBRACK] = ACTIONS(287),
        [anon_sym_CARET] = ACTIONS(287),
        [anon_sym__] = ACTIONS(287),
        [anon_sym_BQUOTE] = ACTIONS(287),
        [anon_sym_PIPE] = ACTIONS(287),
        [anon_sym_TILDE] = ACTIONS(287),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(287),
        [anon_sym_anchor] = ACTIONS(287),
        [sym_email] = ACTIONS(287),
        [anon_sym_footnote] = ACTIONS(287),
        [anon_sym_footnoteref] = ACTIONS(287),
        [anon_sym_image] = ACTIONS(287),
        [anon_sym_icon] = ACTIONS(287),
        [anon_sym_kbd] = ACTIONS(287),
        [anon_sym_btn] = ACTIONS(287),
        [anon_sym_http] = ACTIONS(287),
        [anon_sym_https] = ACTIONS(287),
        [anon_sym_file] = ACTIONS(287),
        [anon_sym_ftp] = ACTIONS(287),
        [anon_sym_irc] = ACTIONS(287),
        [anon_sym_link] = ACTIONS(287),
        [anon_sym_mailto] = ACTIONS(287),
        [anon_sym_stem] = ACTIONS(287),
        [anon_sym_latexmath] = ACTIONS(287),
        [anon_sym_asciimath] = ACTIONS(287),
        [anon_sym_menu] = ACTIONS(287),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(287),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(287),
        [anon_sym_pass] = ACTIONS(287),
        [anon_sym_LT_LT] = ACTIONS(287),
        [anon_sym_xref] = ACTIONS(287),
        [anon_sym_STAR2] = ACTIONS(287),
        [anon_sym_STAR_STAR] = ACTIONS(287),
        [anon_sym__2] = ACTIONS(287),
        [anon_sym___] = ACTIONS(287),
        [anon_sym_BQUOTE2] = ACTIONS(287),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(287),
        [anon_sym_POUND2] = ACTIONS(287),
        [anon_sym_POUND_POUND] = ACTIONS(287),
    },
    [41] = {
        [ts_builtin_sym_end] = ACTIONS(289),
        [anon_sym_LBRACE] = ACTIONS(291),
        [anon_sym_RBRACE] = ACTIONS(291),
        [sym__word_no_digit] = ACTIONS(291),
        [sym__digits] = ACTIONS(291),
        [anon_sym_BANG] = ACTIONS(291),
        [anon_sym_DQUOTE] = ACTIONS(291),
        [anon_sym_POUND] = ACTIONS(291),
        [anon_sym_DOLLAR] = ACTIONS(291),
        [anon_sym_PERCENT] = ACTIONS(291),
        [anon_sym_AMP] = ACTIONS(291),
        [anon_sym_SQUOTE] = ACTIONS(291),
        [anon_sym_LPAREN] = ACTIONS(291),
        [anon_sym_RPAREN] = ACTIONS(291),
        [anon_sym_STAR] = ACTIONS(291),
        [anon_sym_PLUS] = ACTIONS(291),
        [anon_sym_COMMA] = ACTIONS(291),
        [anon_sym_DASH] = ACTIONS(291),
        [anon_sym_DOT] = ACTIONS(291),
        [anon_sym_SLASH] = ACTIONS(291),
        [anon_sym_COLON] = ACTIONS(291),
        [anon_sym_SEMI] = ACTIONS(291),
        [anon_sym_LT] = ACTIONS(291),
        [anon_sym_EQ] = ACTIONS(291),
        [anon_sym_GT] = ACTIONS(291),
        [anon_sym_QMARK] = ACTIONS(291),
        [anon_sym_AT] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(291),
        [anon_sym_BSLASH] = ACTIONS(291),
        [anon_sym_RBRACK] = ACTIONS(291),
        [anon_sym_CARET] = ACTIONS(291),
        [anon_sym__] = ACTIONS(291),
        [anon_sym_BQUOTE] = ACTIONS(291),
        [anon_sym_PIPE] = ACTIONS(291),
        [anon_sym_TILDE] = ACTIONS(291),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(291),
        [anon_sym_anchor] = ACTIONS(291),
        [sym_email] = ACTIONS(291),
        [anon_sym_footnote] = ACTIONS(291),
        [anon_sym_footnoteref] = ACTIONS(291),
        [anon_sym_image] = ACTIONS(291),
        [anon_sym_icon] = ACTIONS(291),
        [anon_sym_kbd] = ACTIONS(291),
        [anon_sym_btn] = ACTIONS(291),
        [anon_sym_http] = ACTIONS(291),
        [anon_sym_https] = ACTIONS(291),
        [anon_sym_file] = ACTIONS(291),
        [anon_sym_ftp] = ACTIONS(291),
        [anon_sym_irc] = ACTIONS(291),
        [anon_sym_link] = ACTIONS(291),
        [anon_sym_mailto] = ACTIONS(291),
        [anon_sym_stem] = ACTIONS(291),
        [anon_sym_latexmath] = ACTIONS(291),
        [anon_sym_asciimath] = ACTIONS(291),
        [anon_sym_menu] = ACTIONS(291),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(291),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(291),
        [anon_sym_pass] = ACTIONS(291),
        [anon_sym_LT_LT] = ACTIONS(291),
        [anon_sym_xref] = ACTIONS(291),
        [anon_sym_STAR2] = ACTIONS(291),
        [anon_sym_STAR_STAR] = ACTIONS(291),
        [anon_sym__2] = ACTIONS(291),
        [anon_sym___] = ACTIONS(291),
        [anon_sym_BQUOTE2] = ACTIONS(291),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(291),
        [anon_sym_POUND2] = ACTIONS(291),
        [anon_sym_POUND_POUND] = ACTIONS(291),
    },
    [42] = {
        [ts_builtin_sym_end] = ACTIONS(293),
        [anon_sym_LBRACE] = ACTIONS(295),
        [anon_sym_RBRACE] = ACTIONS(295),
        [sym__word_no_digit] = ACTIONS(295),
        [sym__digits] = ACTIONS(295),
        [anon_sym_BANG] = ACTIONS(295),
        [anon_sym_DQUOTE] = ACTIONS(295),
        [anon_sym_POUND] = ACTIONS(295),
        [anon_sym_DOLLAR] = ACTIONS(295),
        [anon_sym_PERCENT] = ACTIONS(295),
        [anon_sym_AMP] = ACTIONS(295),
        [anon_sym_SQUOTE] = ACTIONS(295),
        [anon_sym_LPAREN] = ACTIONS(295),
        [anon_sym_RPAREN] = ACTIONS(295),
        [anon_sym_STAR] = ACTIONS(295),
        [anon_sym_PLUS] = ACTIONS(295),
        [anon_sym_COMMA] = ACTIONS(295),
        [anon_sym_DASH] = ACTIONS(295),
        [anon_sym_DOT] = ACTIONS(295),
        [anon_sym_SLASH] = ACTIONS(295),
        [anon_sym_COLON] = ACTIONS(295),
        [anon_sym_SEMI] = ACTIONS(295),
        [anon_sym_LT] = ACTIONS(295),
        [anon_sym_EQ] = ACTIONS(295),
        [anon_sym_GT] = ACTIONS(295),
        [anon_sym_QMARK] = ACTIONS(295),
        [anon_sym_AT] = ACTIONS(295),
        [anon_sym_LBRACK] = ACTIONS(295),
        [anon_sym_BSLASH] = ACTIONS(295),
        [anon_sym_RBRACK] = ACTIONS(295),
        [anon_sym_CARET] = ACTIONS(295),
        [anon_sym__] = ACTIONS(295),
        [anon_sym_BQUOTE] = ACTIONS(295),
        [anon_sym_PIPE] = ACTIONS(295),
        [anon_sym_TILDE] = ACTIONS(295),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(295),
        [anon_sym_anchor] = ACTIONS(295),
        [sym_email] = ACTIONS(295),
        [anon_sym_footnote] = ACTIONS(295),
        [anon_sym_footnoteref] = ACTIONS(295),
        [anon_sym_image] = ACTIONS(295),
        [anon_sym_icon] = ACTIONS(295),
        [anon_sym_kbd] = ACTIONS(295),
        [anon_sym_btn] = ACTIONS(295),
        [anon_sym_http] = ACTIONS(295),
        [anon_sym_https] = ACTIONS(295),
        [anon_sym_file] = ACTIONS(295),
        [anon_sym_ftp] = ACTIONS(295),
        [anon_sym_irc] = ACTIONS(295),
        [anon_sym_link] = ACTIONS(295),
        [anon_sym_mailto] = ACTIONS(295),
        [anon_sym_stem] = ACTIONS(295),
        [anon_sym_latexmath] = ACTIONS(295),
        [anon_sym_asciimath] = ACTIONS(295),
        [anon_sym_menu] = ACTIONS(295),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(295),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(295),
        [anon_sym_pass] = ACTIONS(295),
        [anon_sym_LT_LT] = ACTIONS(295),
        [anon_sym_xref] = ACTIONS(295),
        [anon_sym_STAR2] = ACTIONS(295),
        [anon_sym_STAR_STAR] = ACTIONS(295),
        [anon_sym__2] = ACTIONS(295),
        [anon_sym___] = ACTIONS(295),
        [anon_sym_BQUOTE2] = ACTIONS(295),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(295),
        [anon_sym_POUND2] = ACTIONS(295),
        [anon_sym_POUND_POUND] = ACTIONS(295),
    },
    [43] = {
        [ts_builtin_sym_end] = ACTIONS(297),
        [anon_sym_LBRACE] = ACTIONS(299),
        [anon_sym_RBRACE] = ACTIONS(299),
        [sym__word_no_digit] = ACTIONS(299),
        [sym__digits] = ACTIONS(299),
        [anon_sym_BANG] = ACTIONS(299),
        [anon_sym_DQUOTE] = ACTIONS(299),
        [anon_sym_POUND] = ACTIONS(299),
        [anon_sym_DOLLAR] = ACTIONS(299),
        [anon_sym_PERCENT] = ACTIONS(299),
        [anon_sym_AMP] = ACTIONS(299),
        [anon_sym_SQUOTE] = ACTIONS(299),
        [anon_sym_LPAREN] = ACTIONS(299),
        [anon_sym_RPAREN] = ACTIONS(299),
        [anon_sym_STAR] = ACTIONS(299),
        [anon_sym_PLUS] = ACTIONS(299),
        [anon_sym_COMMA] = ACTIONS(299),
        [anon_sym_DASH] = ACTIONS(299),
        [anon_sym_DOT] = ACTIONS(299),
        [anon_sym_SLASH] = ACTIONS(299),
        [anon_sym_COLON] = ACTIONS(299),
        [anon_sym_SEMI] = ACTIONS(299),
        [anon_sym_LT] = ACTIONS(299),
        [anon_sym_EQ] = ACTIONS(299),
        [anon_sym_GT] = ACTIONS(299),
        [anon_sym_QMARK] = ACTIONS(299),
        [anon_sym_AT] = ACTIONS(299),
        [anon_sym_LBRACK] = ACTIONS(299),
        [anon_sym_BSLASH] = ACTIONS(299),
        [anon_sym_RBRACK] = ACTIONS(299),
        [anon_sym_CARET] = ACTIONS(299),
        [anon_sym__] = ACTIONS(299),
        [anon_sym_BQUOTE] = ACTIONS(299),
        [anon_sym_PIPE] = ACTIONS(299),
        [anon_sym_TILDE] = ACTIONS(299),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(299),
        [anon_sym_anchor] = ACTIONS(299),
        [sym_email] = ACTIONS(299),
        [anon_sym_footnote] = ACTIONS(299),
        [anon_sym_footnoteref] = ACTIONS(299),
        [anon_sym_image] = ACTIONS(299),
        [anon_sym_icon] = ACTIONS(299),
        [anon_sym_kbd] = ACTIONS(299),
        [anon_sym_btn] = ACTIONS(299),
        [anon_sym_http] = ACTIONS(299),
        [anon_sym_https] = ACTIONS(299),
        [anon_sym_file] = ACTIONS(299),
        [anon_sym_ftp] = ACTIONS(299),
        [anon_sym_irc] = ACTIONS(299),
        [anon_sym_link] = ACTIONS(299),
        [anon_sym_mailto] = ACTIONS(299),
        [anon_sym_stem] = ACTIONS(299),
        [anon_sym_latexmath] = ACTIONS(299),
        [anon_sym_asciimath] = ACTIONS(299),
        [anon_sym_menu] = ACTIONS(299),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(299),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(299),
        [anon_sym_pass] = ACTIONS(299),
        [anon_sym_LT_LT] = ACTIONS(299),
        [anon_sym_xref] = ACTIONS(299),
        [anon_sym_STAR2] = ACTIONS(299),
        [anon_sym_STAR_STAR] = ACTIONS(299),
        [anon_sym__2] = ACTIONS(299),
        [anon_sym___] = ACTIONS(299),
        [anon_sym_BQUOTE2] = ACTIONS(299),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(299),
        [anon_sym_POUND2] = ACTIONS(299),
        [anon_sym_POUND_POUND] = ACTIONS(299),
    },
    [44] = {
        [ts_builtin_sym_end] = ACTIONS(301),
        [anon_sym_LBRACE] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym__word_no_digit] = ACTIONS(303),
        [sym__digits] = ACTIONS(303),
        [anon_sym_BANG] = ACTIONS(303),
        [anon_sym_DQUOTE] = ACTIONS(303),
        [anon_sym_POUND] = ACTIONS(303),
        [anon_sym_DOLLAR] = ACTIONS(303),
        [anon_sym_PERCENT] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_SQUOTE] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(303),
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_STAR] = ACTIONS(303),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_DOT] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_SEMI] = ACTIONS(303),
        [anon_sym_LT] = ACTIONS(303),
        [anon_sym_EQ] = ACTIONS(303),
        [anon_sym_GT] = ACTIONS(303),
        [anon_sym_QMARK] = ACTIONS(303),
        [anon_sym_AT] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_BSLASH] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym__] = ACTIONS(303),
        [anon_sym_BQUOTE] = ACTIONS(303),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_TILDE] = ACTIONS(303),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(303),
        [anon_sym_anchor] = ACTIONS(303),
        [sym_email] = ACTIONS(303),
        [anon_sym_footnote] = ACTIONS(303),
        [anon_sym_footnoteref] = ACTIONS(303),
        [anon_sym_image] = ACTIONS(303),
        [anon_sym_icon] = ACTIONS(303),
        [anon_sym_kbd] = ACTIONS(303),
        [anon_sym_btn] = ACTIONS(303),
        [anon_sym_http] = ACTIONS(303),
        [anon_sym_https] = ACTIONS(303),
        [anon_sym_file] = ACTIONS(303),
        [anon_sym_ftp] = ACTIONS(303),
        [anon_sym_irc] = ACTIONS(303),
        [anon_sym_link] = ACTIONS(303),
        [anon_sym_mailto] = ACTIONS(303),
        [anon_sym_stem] = ACTIONS(303),
        [anon_sym_latexmath] = ACTIONS(303),
        [anon_sym_asciimath] = ACTIONS(303),
        [anon_sym_menu] = ACTIONS(303),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(303),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(303),
        [anon_sym_pass] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_xref] = ACTIONS(303),
        [anon_sym_STAR2] = ACTIONS(303),
        [anon_sym_STAR_STAR] = ACTIONS(303),
        [anon_sym__2] = ACTIONS(303),
        [anon_sym___] = ACTIONS(303),
        [anon_sym_BQUOTE2] = ACTIONS(303),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(303),
        [anon_sym_POUND2] = ACTIONS(303),
        [anon_sym_POUND_POUND] = ACTIONS(303),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 9,
    ACTIONS(310),
    1,
    anon_sym__2,
    ACTIONS(313),
    1,
    anon_sym___,
    ACTIONS(316),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(319),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(322),
    1,
    anon_sym_POUND2,
    ACTIONS(325),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(305),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    ACTIONS(308),
    2,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    STATE(45),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [33] = 9,
    ACTIONS(328),
    1,
    anon_sym_STAR2,
    ACTIONS(331),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(339),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(342),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(345),
    1,
    anon_sym_POUND2,
    ACTIONS(348),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(334),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    ACTIONS(337),
    2,
    anon_sym__3,
    anon_sym___,
    STATE(46),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [66] = 9,
    ACTIONS(353),
    1,
    anon_sym_STAR3,
    ACTIONS(355),
    1,
    anon_sym__2,
    ACTIONS(357),
    1,
    anon_sym___,
    ACTIONS(359),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(361),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(363),
    1,
    anon_sym_POUND2,
    ACTIONS(365),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(351),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(45),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [98] = 9,
    ACTIONS(355),
    1,
    anon_sym__2,
    ACTIONS(357),
    1,
    anon_sym___,
    ACTIONS(359),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(361),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(363),
    1,
    anon_sym_POUND2,
    ACTIONS(365),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(367),
    1,
    anon_sym_STAR3,
    ACTIONS(351),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(45),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [130] = 9,
    ACTIONS(369),
    1,
    anon_sym_STAR2,
    ACTIONS(371),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(375),
    1,
    anon_sym___,
    ACTIONS(377),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(379),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(381),
    1,
    anon_sym_POUND2,
    ACTIONS(383),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(373),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(61),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [162] = 9,
    ACTIONS(369),
    1,
    anon_sym_STAR2,
    ACTIONS(371),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(375),
    1,
    anon_sym__3,
    ACTIONS(377),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(379),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(381),
    1,
    anon_sym_POUND2,
    ACTIONS(383),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(385),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(60),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [194] = 9,
    ACTIONS(355),
    1,
    anon_sym__2,
    ACTIONS(357),
    1,
    anon_sym___,
    ACTIONS(359),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(361),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(363),
    1,
    anon_sym_POUND2,
    ACTIONS(365),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(389),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(387),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(59),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [226] = 9,
    ACTIONS(355),
    1,
    anon_sym__2,
    ACTIONS(357),
    1,
    anon_sym___,
    ACTIONS(359),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(361),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(363),
    1,
    anon_sym_POUND2,
    ACTIONS(365),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(389),
    1,
    anon_sym_STAR3,
    ACTIONS(391),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(47),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [258] = 9,
    ACTIONS(355),
    1,
    anon_sym__2,
    ACTIONS(357),
    1,
    anon_sym___,
    ACTIONS(359),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(361),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(363),
    1,
    anon_sym_POUND2,
    ACTIONS(365),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(395),
    1,
    anon_sym_STAR3,
    ACTIONS(393),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(48),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [290] = 9,
    ACTIONS(355),
    1,
    anon_sym__2,
    ACTIONS(357),
    1,
    anon_sym___,
    ACTIONS(359),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(361),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(363),
    1,
    anon_sym_POUND2,
    ACTIONS(365),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(395),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(397),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(62),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [322] = 9,
    ACTIONS(369),
    1,
    anon_sym_STAR2,
    ACTIONS(371),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(377),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(379),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(381),
    1,
    anon_sym_POUND2,
    ACTIONS(383),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(401),
    1,
    anon_sym__3,
    ACTIONS(399),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(58),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [354] = 9,
    ACTIONS(369),
    1,
    anon_sym_STAR2,
    ACTIONS(371),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(377),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(379),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(381),
    1,
    anon_sym_POUND2,
    ACTIONS(383),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(401),
    1,
    anon_sym___,
    ACTIONS(403),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(57),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [386] = 9,
    ACTIONS(369),
    1,
    anon_sym_STAR2,
    ACTIONS(371),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(377),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(379),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(381),
    1,
    anon_sym_POUND2,
    ACTIONS(383),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(407),
    1,
    anon_sym___,
    ACTIONS(405),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(46),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [418] = 9,
    ACTIONS(369),
    1,
    anon_sym_STAR2,
    ACTIONS(371),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(377),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(379),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(381),
    1,
    anon_sym_POUND2,
    ACTIONS(383),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(407),
    1,
    anon_sym__3,
    ACTIONS(405),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(46),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [450] = 9,
    ACTIONS(353),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(355),
    1,
    anon_sym__2,
    ACTIONS(357),
    1,
    anon_sym___,
    ACTIONS(359),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(361),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(363),
    1,
    anon_sym_POUND2,
    ACTIONS(365),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(351),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(45),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [482] = 9,
    ACTIONS(369),
    1,
    anon_sym_STAR2,
    ACTIONS(371),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(377),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(379),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(381),
    1,
    anon_sym_POUND2,
    ACTIONS(383),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(409),
    1,
    anon_sym__3,
    ACTIONS(405),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(46),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [514] = 9,
    ACTIONS(369),
    1,
    anon_sym_STAR2,
    ACTIONS(371),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(377),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(379),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(381),
    1,
    anon_sym_POUND2,
    ACTIONS(383),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(409),
    1,
    anon_sym___,
    ACTIONS(405),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(46),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [546] = 9,
    ACTIONS(355),
    1,
    anon_sym__2,
    ACTIONS(357),
    1,
    anon_sym___,
    ACTIONS(359),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(361),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(363),
    1,
    anon_sym_POUND2,
    ACTIONS(365),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(367),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(351),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(45),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [578] = 1,
    ACTIONS(299),
    10,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [591] = 1,
    ACTIONS(255),
    10,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    anon_sym__3,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [604] = 1,
    ACTIONS(275),
    10,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    anon_sym__3,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [617] = 1,
    ACTIONS(287),
    10,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [630] = 1,
    ACTIONS(259),
    10,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [643] = 1,
    ACTIONS(271),
    10,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    anon_sym__3,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [656] = 1,
    ACTIONS(263),
    10,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [669] = 1,
    ACTIONS(255),
    10,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [682] = 1,
    ACTIONS(251),
    10,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [695] = 1,
    ACTIONS(259),
    10,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    anon_sym__3,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [708] = 1,
    ACTIONS(299),
    10,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    anon_sym__3,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [721] = 1,
    ACTIONS(251),
    10,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    anon_sym__3,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [734] = 3,
    ACTIONS(411),
    1,
    anon_sym_RBRACK,
    STATE(76),
    1,
    aux_sym_image_macro_repeat1,
    ACTIONS(413),
    3,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [746] = 3,
    ACTIONS(415),
    1,
    anon_sym_RBRACK,
    STATE(76),
    1,
    aux_sym_image_macro_repeat1,
    ACTIONS(417),
    3,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [758] = 5,
    ACTIONS(420),
    1,
    anon_sym_PLUS,
    ACTIONS(422),
    1,
    anon_sym_COMMA,
    ACTIONS(424),
    1,
    anon_sym_RBRACK,
    STATE(113),
    1,
    aux_sym_kbd_macro_repeat1,
    STATE(114),
    1,
    aux_sym_kbd_macro_repeat2,
    [774] = 3,
    ACTIONS(426),
    1,
    anon_sym_RBRACK,
    STATE(75),
    1,
    aux_sym_image_macro_repeat1,
    ACTIONS(413),
    3,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [786] = 3,
    STATE(79),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(428),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    ACTIONS(431),
    2,
    anon_sym_POUND3,
    anon_sym_POUND_POUND,
    [798] = 3,
    STATE(80),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(433),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    ACTIONS(436),
    2,
    anon_sym_BQUOTE3,
    anon_sym_BQUOTE_BQUOTE,
    [810] = 3,
    ACTIONS(440),
    1,
    anon_sym_BQUOTE3,
    STATE(95),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(438),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [821] = 3,
    ACTIONS(444),
    1,
    anon_sym_BQUOTE3,
    STATE(107),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(442),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [832] = 3,
    ACTIONS(448),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(102),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(446),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [843] = 3,
    ACTIONS(452),
    1,
    anon_sym_POUND3,
    STATE(103),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(450),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [854] = 3,
    ACTIONS(454),
    1,
    anon_sym_DOT,
    STATE(85),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(144),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [865] = 3,
    ACTIONS(457),
    1,
    anon_sym_DOT,
    STATE(85),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(167),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [876] = 3,
    ACTIONS(461),
    1,
    anon_sym_POUND3,
    STATE(79),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(459),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [887] = 3,
    ACTIONS(463),
    1,
    anon_sym_POUND_POUND,
    STATE(79),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(459),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [898] = 3,
    ACTIONS(461),
    1,
    anon_sym_POUND_POUND,
    STATE(79),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(459),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [909] = 3,
    ACTIONS(440),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(96),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(465),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [920] = 3,
    ACTIONS(469),
    1,
    anon_sym_POUND3,
    STATE(87),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(467),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [931] = 3,
    ACTIONS(457),
    1,
    anon_sym_DOT,
    STATE(86),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(161),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [942] = 3,
    ACTIONS(469),
    1,
    anon_sym_POUND_POUND,
    STATE(89),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(471),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [953] = 3,
    ACTIONS(448),
    1,
    anon_sym_BQUOTE3,
    STATE(101),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(473),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [964] = 3,
    ACTIONS(477),
    1,
    anon_sym_BQUOTE3,
    STATE(80),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(475),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [975] = 3,
    ACTIONS(477),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(80),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(475),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [986] = 3,
    ACTIONS(479),
    1,
    anon_sym_POUND_POUND,
    STATE(79),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(459),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [997] = 3,
    ACTIONS(479),
    1,
    anon_sym_POUND3,
    STATE(79),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(459),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1008] = 3,
    ACTIONS(481),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(80),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(475),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1019] = 3,
    ACTIONS(452),
    1,
    anon_sym_POUND_POUND,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(483),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1030] = 3,
    ACTIONS(485),
    1,
    anon_sym_BQUOTE3,
    STATE(80),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(475),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1041] = 3,
    ACTIONS(485),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(80),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(475),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1052] = 3,
    ACTIONS(463),
    1,
    anon_sym_POUND3,
    STATE(79),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(459),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1063] = 1,
    ACTIONS(487),
    4,
    anon_sym_RBRACK,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [1070] = 3,
    ACTIONS(444),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(99),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(489),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1081] = 3,
    ACTIONS(493),
    1,
    anon_sym_POUND_POUND,
    STATE(97),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(491),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1092] = 3,
    ACTIONS(481),
    1,
    anon_sym_BQUOTE3,
    STATE(80),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(475),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1103] = 3,
    ACTIONS(493),
    1,
    anon_sym_POUND3,
    STATE(98),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(495),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1114] = 2,
    STATE(118),
    1,
    sym_key,
    ACTIONS(497),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [1122] = 2,
    STATE(77),
    1,
    sym_key,
    ACTIONS(497),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [1130] = 1,
    ACTIONS(144),
    3,
    anon_sym_DQUOTE,
    anon_sym_DOT,
    anon_sym_LBRACK,
    [1136] = 2,
    STATE(126),
    1,
    sym_key,
    ACTIONS(497),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [1144] = 3,
    ACTIONS(420),
    1,
    anon_sym_PLUS,
    ACTIONS(499),
    1,
    anon_sym_RBRACK,
    STATE(117),
    1,
    aux_sym_kbd_macro_repeat1,
    [1154] = 3,
    ACTIONS(422),
    1,
    anon_sym_COMMA,
    ACTIONS(499),
    1,
    anon_sym_RBRACK,
    STATE(116),
    1,
    aux_sym_kbd_macro_repeat2,
    [1164] = 1,
    ACTIONS(501),
    3,
    anon_sym_PLUS,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [1170] = 3,
    ACTIONS(503),
    1,
    anon_sym_COMMA,
    ACTIONS(506),
    1,
    anon_sym_RBRACK,
    STATE(116),
    1,
    aux_sym_kbd_macro_repeat2,
    [1180] = 3,
    ACTIONS(508),
    1,
    anon_sym_PLUS,
    ACTIONS(511),
    1,
    anon_sym_RBRACK,
    STATE(117),
    1,
    aux_sym_kbd_macro_repeat1,
    [1190] = 1,
    ACTIONS(506),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [1195] = 2,
    ACTIONS(513),
    1,
    aux_sym_anchor_token2,
    ACTIONS(515),
    1,
    aux_sym_footnote_macro_token1,
    [1202] = 2,
    ACTIONS(517),
    1,
    aux_sym_replacement_token1,
    ACTIONS(519),
    1,
    anon_sym_LBRACK,
    [1209] = 2,
    ACTIONS(521),
    1,
    anon_sym_COMMA,
    ACTIONS(523),
    1,
    anon_sym_RBRACK_RBRACK,
    [1216] = 2,
    ACTIONS(525),
    1,
    anon_sym_DQUOTE,
    ACTIONS(527),
    1,
    anon_sym_LBRACK,
    [1223] = 2,
    ACTIONS(529),
    1,
    anon_sym_COMMA,
    ACTIONS(531),
    1,
    anon_sym_RBRACK,
    [1230] = 2,
    ACTIONS(533),
    1,
    aux_sym_anchor_token2,
    ACTIONS(535),
    1,
    aux_sym_footnote_macro_token1,
    [1237] = 2,
    ACTIONS(537),
    1,
    anon_sym_COMMA,
    ACTIONS(539),
    1,
    anon_sym_RBRACK,
    [1244] = 1,
    ACTIONS(511),
    2,
    anon_sym_PLUS,
    anon_sym_RBRACK,
    [1249] = 1,
    ACTIONS(541),
    1,
    anon_sym_RBRACE,
    [1253] = 1,
    ACTIONS(543),
    1,
    aux_sym_image_macro_token1,
    [1257] = 1,
    ACTIONS(545),
    1,
    anon_sym_RBRACK,
    [1261] = 1,
    ACTIONS(547),
    1,
    anon_sym_COLON,
    [1265] = 1,
    ACTIONS(549),
    1,
    anon_sym_RBRACK,
    [1269] = 1,
    ACTIONS(551),
    1,
    anon_sym_RBRACK,
    [1273] = 1,
    ACTIONS(553),
    1,
    anon_sym_RBRACK,
    [1277] = 1,
    ACTIONS(555),
    1,
    aux_sym_replacement_token1,
    [1281] = 1,
    ACTIONS(557),
    1,
    anon_sym_COLON,
    [1285] = 1,
    ACTIONS(559),
    1,
    aux_sym_replacement_token1,
    [1289] = 1,
    ACTIONS(561),
    1,
    aux_sym_footnote_macro_token2,
    [1293] = 1,
    ACTIONS(563),
    1,
    aux_sym_replacement_token1,
    [1297] = 1,
    ACTIONS(565),
    1,
    anon_sym_RBRACK,
    [1301] = 1,
    ACTIONS(567),
    1,
    anon_sym_COLON,
    [1305] = 1,
    ACTIONS(569),
    1,
    aux_sym_anchor_token2,
    [1309] = 1,
    ACTIONS(571),
    1,
    anon_sym_COLON,
    [1313] = 1,
    ACTIONS(573),
    1,
    anon_sym_COLON,
    [1317] = 1,
    ACTIONS(575),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [1321] = 1,
    ACTIONS(577),
    1,
    anon_sym_COLON,
    [1325] = 1,
    ACTIONS(579),
    1,
    anon_sym_COLON,
    [1329] = 1,
    ACTIONS(581),
    1,
    anon_sym_RBRACK,
    [1333] = 1,
    ACTIONS(583),
    1,
    anon_sym_COLON,
    [1337] = 1,
    ACTIONS(585),
    1,
    anon_sym_COLON,
    [1341] = 1,
    ACTIONS(587),
    1,
    aux_sym_anchor_token2,
    [1345] = 1,
    ACTIONS(589),
    1,
    sym__link_component,
    [1349] = 1,
    ACTIONS(591),
    1,
    ts_builtin_sym_end,
    [1353] = 1,
    ACTIONS(593),
    1,
    aux_sym_anchor_token2,
    [1357] = 1,
    ACTIONS(595),
    1,
    anon_sym_RBRACK,
    [1361] = 1,
    ACTIONS(597),
    1,
    anon_sym_LBRACK,
    [1365] = 1,
    ACTIONS(599),
    1,
    aux_sym_anchor_token2,
    [1369] = 1,
    ACTIONS(601),
    1,
    anon_sym_RBRACK_RBRACK,
    [1373] = 1,
    ACTIONS(603),
    1,
    anon_sym_RBRACK,
    [1377] = 1,
    ACTIONS(605),
    1,
    anon_sym_RBRACK,
    [1381] = 1,
    ACTIONS(607),
    1,
    anon_sym_RBRACK,
    [1385] = 1,
    ACTIONS(609),
    1,
    aux_sym_footnote_macro_token2,
    [1389] = 1,
    ACTIONS(611),
    1,
    anon_sym_PLUS,
    [1393] = 1,
    ACTIONS(613),
    1,
    anon_sym_RBRACK,
    [1397] = 1,
    ACTIONS(615),
    1,
    aux_sym_replacement_token1,
    [1401] = 1,
    ACTIONS(617),
    1,
    anon_sym_RBRACK,
    [1405] = 1,
    ACTIONS(619),
    1,
    aux_sym_replacement_token1,
    [1409] = 1,
    ACTIONS(621),
    1,
    anon_sym_LBRACK,
    [1413] = 1,
    ACTIONS(623),
    1,
    anon_sym_GT_GT,
    [1417] = 1,
    ACTIONS(625),
    1,
    anon_sym_LBRACK,
    [1421] = 1,
    ACTIONS(627),
    1,
    anon_sym_LBRACK,
    [1425] = 1,
    ACTIONS(629),
    1,
    aux_sym_anchor_token2,
    [1429] = 1,
    ACTIONS(631),
    1,
    anon_sym_LBRACK,
    [1433] = 1,
    ACTIONS(633),
    1,
    anon_sym_DQUOTE,
    [1437] = 1,
    ACTIONS(635),
    1,
    sym__link_component,
    [1441] = 1,
    ACTIONS(637),
    1,
    anon_sym_LBRACK,
    [1445] = 1,
    ACTIONS(639),
    1,
    aux_sym_anchor_token2,
    [1449] = 1,
    ACTIONS(641),
    1,
    anon_sym_LBRACK,
    [1453] = 1,
    ACTIONS(643),
    1,
    anon_sym_LBRACK,
    [1457] = 1,
    ACTIONS(645),
    1,
    aux_sym_anchor_token1,
    [1461] = 1,
    ACTIONS(647),
    1,
    aux_sym_auto_link_token1,
    [1465] = 1,
    ACTIONS(649),
    1,
    aux_sym_anchor_token2,
    [1469] = 1,
    ACTIONS(651),
    1,
    aux_sym_xref_token2,
    [1473] = 1,
    ACTIONS(653),
    1,
    sym__link_component,
    [1477] = 1,
    ACTIONS(655),
    1,
    aux_sym_xref_token1,
    [1481] = 1,
    ACTIONS(657),
    1,
    anon_sym_quotes,
    [1485] = 1,
    ACTIONS(611),
    1,
    anon_sym_DOLLAR_DOLLAR,
    [1489] = 1,
    ACTIONS(611),
    1,
    anon_sym_PLUS_PLUS_PLUS,
    [1493] = 1,
    ACTIONS(659),
    1,
    aux_sym_replacement_token1,
    [1497] = 1,
    ACTIONS(661),
    1,
    anon_sym_LBRACK,
    [1501] = 1,
    ACTIONS(663),
    1,
    aux_sym_link_macro_token1,
    [1505] = 1,
    ACTIONS(665),
    1,
    sym__link_component,
    [1509] = 1,
    ACTIONS(667),
    1,
    anon_sym_COLON_SLASH_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(45)] = 0,
    [SMALL_STATE(46)] = 33,
    [SMALL_STATE(47)] = 66,
    [SMALL_STATE(48)] = 98,
    [SMALL_STATE(49)] = 130,
    [SMALL_STATE(50)] = 162,
    [SMALL_STATE(51)] = 194,
    [SMALL_STATE(52)] = 226,
    [SMALL_STATE(53)] = 258,
    [SMALL_STATE(54)] = 290,
    [SMALL_STATE(55)] = 322,
    [SMALL_STATE(56)] = 354,
    [SMALL_STATE(57)] = 386,
    [SMALL_STATE(58)] = 418,
    [SMALL_STATE(59)] = 450,
    [SMALL_STATE(60)] = 482,
    [SMALL_STATE(61)] = 514,
    [SMALL_STATE(62)] = 546,
    [SMALL_STATE(63)] = 578,
    [SMALL_STATE(64)] = 591,
    [SMALL_STATE(65)] = 604,
    [SMALL_STATE(66)] = 617,
    [SMALL_STATE(67)] = 630,
    [SMALL_STATE(68)] = 643,
    [SMALL_STATE(69)] = 656,
    [SMALL_STATE(70)] = 669,
    [SMALL_STATE(71)] = 682,
    [SMALL_STATE(72)] = 695,
    [SMALL_STATE(73)] = 708,
    [SMALL_STATE(74)] = 721,
    [SMALL_STATE(75)] = 734,
    [SMALL_STATE(76)] = 746,
    [SMALL_STATE(77)] = 758,
    [SMALL_STATE(78)] = 774,
    [SMALL_STATE(79)] = 786,
    [SMALL_STATE(80)] = 798,
    [SMALL_STATE(81)] = 810,
    [SMALL_STATE(82)] = 821,
    [SMALL_STATE(83)] = 832,
    [SMALL_STATE(84)] = 843,
    [SMALL_STATE(85)] = 854,
    [SMALL_STATE(86)] = 865,
    [SMALL_STATE(87)] = 876,
    [SMALL_STATE(88)] = 887,
    [SMALL_STATE(89)] = 898,
    [SMALL_STATE(90)] = 909,
    [SMALL_STATE(91)] = 920,
    [SMALL_STATE(92)] = 931,
    [SMALL_STATE(93)] = 942,
    [SMALL_STATE(94)] = 953,
    [SMALL_STATE(95)] = 964,
    [SMALL_STATE(96)] = 975,
    [SMALL_STATE(97)] = 986,
    [SMALL_STATE(98)] = 997,
    [SMALL_STATE(99)] = 1008,
    [SMALL_STATE(100)] = 1019,
    [SMALL_STATE(101)] = 1030,
    [SMALL_STATE(102)] = 1041,
    [SMALL_STATE(103)] = 1052,
    [SMALL_STATE(104)] = 1063,
    [SMALL_STATE(105)] = 1070,
    [SMALL_STATE(106)] = 1081,
    [SMALL_STATE(107)] = 1092,
    [SMALL_STATE(108)] = 1103,
    [SMALL_STATE(109)] = 1114,
    [SMALL_STATE(110)] = 1122,
    [SMALL_STATE(111)] = 1130,
    [SMALL_STATE(112)] = 1136,
    [SMALL_STATE(113)] = 1144,
    [SMALL_STATE(114)] = 1154,
    [SMALL_STATE(115)] = 1164,
    [SMALL_STATE(116)] = 1170,
    [SMALL_STATE(117)] = 1180,
    [SMALL_STATE(118)] = 1190,
    [SMALL_STATE(119)] = 1195,
    [SMALL_STATE(120)] = 1202,
    [SMALL_STATE(121)] = 1209,
    [SMALL_STATE(122)] = 1216,
    [SMALL_STATE(123)] = 1223,
    [SMALL_STATE(124)] = 1230,
    [SMALL_STATE(125)] = 1237,
    [SMALL_STATE(126)] = 1244,
    [SMALL_STATE(127)] = 1249,
    [SMALL_STATE(128)] = 1253,
    [SMALL_STATE(129)] = 1257,
    [SMALL_STATE(130)] = 1261,
    [SMALL_STATE(131)] = 1265,
    [SMALL_STATE(132)] = 1269,
    [SMALL_STATE(133)] = 1273,
    [SMALL_STATE(134)] = 1277,
    [SMALL_STATE(135)] = 1281,
    [SMALL_STATE(136)] = 1285,
    [SMALL_STATE(137)] = 1289,
    [SMALL_STATE(138)] = 1293,
    [SMALL_STATE(139)] = 1297,
    [SMALL_STATE(140)] = 1301,
    [SMALL_STATE(141)] = 1305,
    [SMALL_STATE(142)] = 1309,
    [SMALL_STATE(143)] = 1313,
    [SMALL_STATE(144)] = 1317,
    [SMALL_STATE(145)] = 1321,
    [SMALL_STATE(146)] = 1325,
    [SMALL_STATE(147)] = 1329,
    [SMALL_STATE(148)] = 1333,
    [SMALL_STATE(149)] = 1337,
    [SMALL_STATE(150)] = 1341,
    [SMALL_STATE(151)] = 1345,
    [SMALL_STATE(152)] = 1349,
    [SMALL_STATE(153)] = 1353,
    [SMALL_STATE(154)] = 1357,
    [SMALL_STATE(155)] = 1361,
    [SMALL_STATE(156)] = 1365,
    [SMALL_STATE(157)] = 1369,
    [SMALL_STATE(158)] = 1373,
    [SMALL_STATE(159)] = 1377,
    [SMALL_STATE(160)] = 1381,
    [SMALL_STATE(161)] = 1385,
    [SMALL_STATE(162)] = 1389,
    [SMALL_STATE(163)] = 1393,
    [SMALL_STATE(164)] = 1397,
    [SMALL_STATE(165)] = 1401,
    [SMALL_STATE(166)] = 1405,
    [SMALL_STATE(167)] = 1409,
    [SMALL_STATE(168)] = 1413,
    [SMALL_STATE(169)] = 1417,
    [SMALL_STATE(170)] = 1421,
    [SMALL_STATE(171)] = 1425,
    [SMALL_STATE(172)] = 1429,
    [SMALL_STATE(173)] = 1433,
    [SMALL_STATE(174)] = 1437,
    [SMALL_STATE(175)] = 1441,
    [SMALL_STATE(176)] = 1445,
    [SMALL_STATE(177)] = 1449,
    [SMALL_STATE(178)] = 1453,
    [SMALL_STATE(179)] = 1457,
    [SMALL_STATE(180)] = 1461,
    [SMALL_STATE(181)] = 1465,
    [SMALL_STATE(182)] = 1469,
    [SMALL_STATE(183)] = 1473,
    [SMALL_STATE(184)] = 1477,
    [SMALL_STATE(185)] = 1481,
    [SMALL_STATE(186)] = 1485,
    [SMALL_STATE(187)] = 1489,
    [SMALL_STATE(188)] = 1493,
    [SMALL_STATE(189)] = 1497,
    [SMALL_STATE(190)] = 1501,
    [SMALL_STATE(191)] = 1505,
    [SMALL_STATE(192)] = 1509,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(5),
    [5] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(28),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(3),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(6),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(7),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(166),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(149),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(148),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(146),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(145),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(144),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(143),
    [27] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(142),
    [29] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(140),
    [31] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(138),
    [33] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(136),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(135),
    [37] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(134),
    [39] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(130),
    [41] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(52),
    [43] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(51),
    [45] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(50),
    [47] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(49),
    [49] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(82),
    [51] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(105),
    [53] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(108),
    [55] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(106),
    [57] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    [59] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(5),
    [62] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(28),
    [65] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(2),
    [68] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(6),
    [71] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(7),
    [74] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(166),
    [77] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(149),
    [80] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(148),
    [83] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(146),
    [86] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(145),
    [89] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(144),
    [92] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(143),
    [95] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(142),
    [98] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(140),
    [101] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(138),
    [104] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(136),
    [107] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(135),
    [110] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(134),
    [113] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(130),
    [116] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(52),
    [119] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(51),
    [122] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(50),
    [125] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(49),
    [128] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(82),
    [131] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(105),
    [134] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(108),
    [137] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(106),
    [140] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [142] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(2),
    [144] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [146] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [148] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(151),
    [151] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [153] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [155] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(127),
    [157] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(192),
    [159] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(162),
    [161] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 3, 0, 0),
    [163] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 3, 0, 0),
    [165] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(151),
    [167] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 4, 0, 0),
    [169] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 4, 0, 0),
    [171] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_image_macro, 5, 0, 0),
    [173] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_image_macro, 5, 0, 0),
    [175] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [177] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [179] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(181),
    [181] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_macro, 6, 0, 9),
    [183] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_macro, 6, 0, 9),
    [185] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_kbd_macro, 6, 0, 0),
    [187] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_kbd_macro, 6, 0, 0),
    [189] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_image_macro, 6, 0, 0),
    [191] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_image_macro, 6, 0, 0),
    [193] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 6, 0, 8),
    [195] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 6, 0, 8),
    [197] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 6, 0, 7),
    [199] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 6, 0, 7),
    [201] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 6, 0, 7),
    [203] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 6, 0, 7),
    [205] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [207] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [209] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_math_macro, 5, 0, 6),
    [211] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_math_macro, 5, 0, 6),
    [213] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_kbd_macro, 5, 0, 0),
    [215] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_kbd_macro, 5, 0, 0),
    [217] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 3, 0, 2),
    [219] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 3, 0, 2),
    [221] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 5, 0, 0),
    [223] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 5, 0, 0),
    [225] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 5, 0, 4),
    [227] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 5, 0, 4),
    [229] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 5, 0, 2),
    [231] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 5, 0, 2),
    [233] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 4, 0, 3),
    [235] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 4, 0, 3),
    [237] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 4, 0, 2),
    [239] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 4, 0, 2),
    [241] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_menu_macro, 6, 0, 10),
    [243] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_menu_macro, 6, 0, 10),
    [245] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_passthrough, 6, 0, 0),
    [247] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_passthrough, 6, 0, 0),
    [249] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 3, 0, 0),
    [251] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 3, 0, 0),
    [253] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 3, 0, 0),
    [255] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 3, 0, 0),
    [257] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 2, 0, 0),
    [259] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 2, 0, 0),
    [261] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [263] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [265] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [267] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [269] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [271] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [273] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [275] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [277] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 6, 0, 11),
    [279] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 6, 0, 11),
    [281] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [283] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [285] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [287] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [289] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 7, 0, 0),
    [291] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 7, 0, 0),
    [293] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 8, 0, 8),
    [295] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 8, 0, 8),
    [297] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 2, 0, 0),
    [299] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 2, 0, 0),
    [301] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 1),
    [303] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 1),
    [305] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(45),
    [308] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    [310] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(55),
    [313] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(56),
    [316] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(81),
    [319] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(90),
    [322] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(91),
    [325] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(93),
    [328] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(53),
    [331] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(54),
    [334] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(46),
    [337] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    [339] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(94),
    [342] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(83),
    [345] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(84),
    [348] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(100),
    [351] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(45),
    [353] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(36),
    [355] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(55),
    [357] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(56),
    [359] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(81),
    [361] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(90),
    [363] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(91),
    [365] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(93),
    [367] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(68),
    [369] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(53),
    [371] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(54),
    [373] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(61),
    [375] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(40),
    [377] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(94),
    [379] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(83),
    [381] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(84),
    [383] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(100),
    [385] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(60),
    [387] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(59),
    [389] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(37),
    [391] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(47),
    [393] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(48),
    [395] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(65),
    [397] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [399] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(58),
    [401] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(66),
    [403] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(57),
    [405] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(46),
    [407] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(69),
    [409] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(34),
    [411] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(14),
    [413] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(104),
    [415] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_image_macro_repeat1, 2, 0, 0),
    [417] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_image_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(104),
    [420] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(112),
    [422] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(109),
    [424] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [426] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(10),
    [428] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    SHIFT_REPEAT(79),
    [431] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    [433] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    SHIFT_REPEAT(80),
    [436] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    [438] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(95),
    [440] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(63),
    [442] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(107),
    [444] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(43),
    [446] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(102),
    [448] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(73),
    [450] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(103),
    [452] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(72),
    [454] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(183),
    [457] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(183),
    [459] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(79),
    [461] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(71),
    [463] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(74),
    [465] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(96),
    [467] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(87),
    [469] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(67),
    [471] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(89),
    [473] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(101),
    [475] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(80),
    [477] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(70),
    [479] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(31),
    [481] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(32),
    [483] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(88),
    [485] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(64),
    [487] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_image_macro_repeat1, 1, 0, 5),
    [489] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(99),
    [491] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(97),
    [493] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(33),
    [495] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(98),
    [497] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(115),
    [499] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [501] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_key, 1, 0, 0),
    [503] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(109),
    [506] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat2, 2, 0, 0),
    [508] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(112),
    [511] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat1, 2, 0, 0),
    [513] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(154),
    [515] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(125),
    [517] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(177),
    [519] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(119),
    [521] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(179),
    [523] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [525] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [527] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(180),
    [529] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(137),
    [531] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [533] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(163),
    [535] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(123),
    [537] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(161),
    [539] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [541] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [543] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(175),
    [545] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [547] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [549] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(29),
    [551] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [553] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [555] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(184),
    [557] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(185),
    [559] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(186),
    [561] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(147),
    [563] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(187),
    [565] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(41),
    [567] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(188),
    [569] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(129),
    [571] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(189),
    [573] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(190),
    [575] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(191),
    [577] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(155),
    [579] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(128),
    [581] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [583] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(120),
    [585] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(164),
    [587] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(132),
    [589] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [591] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [593] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(131),
    [595] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [597] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(110),
    [599] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(165),
    [601] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [603] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(173),
    [605] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [607] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [609] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(139),
    [611] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [613] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [615] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(178),
    [617] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [619] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(121),
    [621] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [623] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [625] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(150),
    [627] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(153),
    [629] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(160),
    [631] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(141),
    [633] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [635] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [637] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [639] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(133),
    [641] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(124),
    [643] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(156),
    [645] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(157),
    [647] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(158),
    [649] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(159),
    [651] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(167),
    [653] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(111),
    [655] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(168),
    [657] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(169),
    [659] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(170),
    [661] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(171),
    [663] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(172),
    [665] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [667] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(174),
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
