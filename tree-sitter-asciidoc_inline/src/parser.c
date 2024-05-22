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
#define STATE_COUNT 192
#define LARGE_STATE_COUNT 44
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
    sym__punctuation = 102,
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
    [sym__punctuation] = "_punctuation",
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
    [sym__punctuation] = sym__punctuation,
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
    [sym__punctuation] = {
        .visible = false,
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
    [47] = 46,
    [48] = 48,
    [49] = 49,
    [50] = 50,
    [51] = 51,
    [52] = 51,
    [53] = 50,
    [54] = 49,
    [55] = 48,
    [56] = 56,
    [57] = 57,
    [58] = 58,
    [59] = 57,
    [60] = 56,
    [61] = 58,
    [62] = 42,
    [63] = 31,
    [64] = 36,
    [65] = 39,
    [66] = 32,
    [67] = 35,
    [68] = 33,
    [69] = 31,
    [70] = 30,
    [71] = 32,
    [72] = 42,
    [73] = 30,
    [74] = 74,
    [75] = 75,
    [76] = 76,
    [77] = 77,
    [78] = 78,
    [79] = 79,
    [80] = 80,
    [81] = 80,
    [82] = 82,
    [83] = 83,
    [84] = 4,
    [85] = 9,
    [86] = 86,
    [87] = 87,
    [88] = 87,
    [89] = 82,
    [90] = 83,
    [91] = 8,
    [92] = 92,
    [93] = 80,
    [94] = 94,
    [95] = 95,
    [96] = 87,
    [97] = 86,
    [98] = 95,
    [99] = 92,
    [100] = 94,
    [101] = 95,
    [102] = 86,
    [103] = 103,
    [104] = 82,
    [105] = 92,
    [106] = 94,
    [107] = 83,
    [108] = 108,
    [109] = 109,
    [110] = 19,
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
    [182] = 150,
    [183] = 183,
    [184] = 184,
    [185] = 185,
    [186] = 186,
    [187] = 187,
    [188] = 188,
    [189] = 189,
    [190] = 173,
    [191] = 143,
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
    [44] = { .lex_state = 7 },
    [45] = { .lex_state = 9 },
    [46] = { .lex_state = 7 },
    [47] = { .lex_state = 7 },
    [48] = { .lex_state = 9 },
    [49] = { .lex_state = 9 },
    [50] = { .lex_state = 7 },
    [51] = { .lex_state = 7 },
    [52] = { .lex_state = 7 },
    [53] = { .lex_state = 7 },
    [54] = { .lex_state = 9 },
    [55] = { .lex_state = 9 },
    [56] = { .lex_state = 9 },
    [57] = { .lex_state = 9 },
    [58] = { .lex_state = 7 },
    [59] = { .lex_state = 9 },
    [60] = { .lex_state = 9 },
    [61] = { .lex_state = 7 },
    [62] = { .lex_state = 7 },
    [63] = { .lex_state = 9 },
    [64] = { .lex_state = 9 },
    [65] = { .lex_state = 7 },
    [66] = { .lex_state = 7 },
    [67] = { .lex_state = 9 },
    [68] = { .lex_state = 7 },
    [69] = { .lex_state = 7 },
    [70] = { .lex_state = 7 },
    [71] = { .lex_state = 9 },
    [72] = { .lex_state = 9 },
    [73] = { .lex_state = 9 },
    [74] = { .lex_state = 60 },
    [75] = { .lex_state = 60 },
    [76] = { .lex_state = 14 },
    [77] = { .lex_state = 60 },
    [78] = { .lex_state = 15 },
    [79] = { .lex_state = 61 },
    [80] = { .lex_state = 61 },
    [81] = { .lex_state = 61 },
    [82] = { .lex_state = 61 },
    [83] = { .lex_state = 15 },
    [84] = { .lex_state = 14 },
    [85] = { .lex_state = 14 },
    [86] = { .lex_state = 15 },
    [87] = { .lex_state = 15 },
    [88] = { .lex_state = 15 },
    [89] = { .lex_state = 61 },
    [90] = { .lex_state = 15 },
    [91] = { .lex_state = 14 },
    [92] = { .lex_state = 15 },
    [93] = { .lex_state = 61 },
    [94] = { .lex_state = 61 },
    [95] = { .lex_state = 61 },
    [96] = { .lex_state = 15 },
    [97] = { .lex_state = 15 },
    [98] = { .lex_state = 61 },
    [99] = { .lex_state = 15 },
    [100] = { .lex_state = 61 },
    [101] = { .lex_state = 61 },
    [102] = { .lex_state = 15 },
    [103] = { .lex_state = 60 },
    [104] = { .lex_state = 61 },
    [105] = { .lex_state = 15 },
    [106] = { .lex_state = 61 },
    [107] = { .lex_state = 15 },
    [108] = { .lex_state = 14 },
    [109] = { .lex_state = 14 },
    [110] = { .lex_state = 14 },
    [111] = { .lex_state = 14 },
    [112] = { .lex_state = 14 },
    [113] = { .lex_state = 0 },
    [114] = { .lex_state = 14 },
    [115] = { .lex_state = 0 },
    [116] = { .lex_state = 14 },
    [117] = { .lex_state = 0 },
    [118] = { .lex_state = 335 },
    [119] = { .lex_state = 18 },
    [120] = { .lex_state = 18 },
    [121] = { .lex_state = 14 },
    [122] = { .lex_state = 0 },
    [123] = { .lex_state = 335 },
    [124] = { .lex_state = 0 },
    [125] = { .lex_state = 14 },
    [126] = { .lex_state = 14 },
    [127] = { .lex_state = 71 },
    [128] = { .lex_state = 0 },
    [129] = { .lex_state = 0 },
    [130] = { .lex_state = 0 },
    [131] = { .lex_state = 0 },
    [132] = { .lex_state = 0 },
    [133] = { .lex_state = 18 },
    [134] = { .lex_state = 0 },
    [135] = { .lex_state = 18 },
    [136] = { .lex_state = 72 },
    [137] = { .lex_state = 18 },
    [138] = { .lex_state = 0 },
    [139] = { .lex_state = 0 },
    [140] = { .lex_state = 335 },
    [141] = { .lex_state = 0 },
    [142] = { .lex_state = 0 },
    [143] = { .lex_state = 14 },
    [144] = { .lex_state = 0 },
    [145] = { .lex_state = 0 },
    [146] = { .lex_state = 0 },
    [147] = { .lex_state = 0 },
    [148] = { .lex_state = 0 },
    [149] = { .lex_state = 335 },
    [150] = { .lex_state = 73 },
    [151] = { .lex_state = 0 },
    [152] = { .lex_state = 335 },
    [153] = { .lex_state = 0 },
    [154] = { .lex_state = 14 },
    [155] = { .lex_state = 335 },
    [156] = { .lex_state = 18 },
    [157] = { .lex_state = 0 },
    [158] = { .lex_state = 0 },
    [159] = { .lex_state = 0 },
    [160] = { .lex_state = 72 },
    [161] = { .lex_state = 14 },
    [162] = { .lex_state = 0 },
    [163] = { .lex_state = 18 },
    [164] = { .lex_state = 0 },
    [165] = { .lex_state = 18 },
    [166] = { .lex_state = 14 },
    [167] = { .lex_state = 14 },
    [168] = { .lex_state = 14 },
    [169] = { .lex_state = 14 },
    [170] = { .lex_state = 335 },
    [171] = { .lex_state = 14 },
    [172] = { .lex_state = 14 },
    [173] = { .lex_state = 73 },
    [174] = { .lex_state = 14 },
    [175] = { .lex_state = 335 },
    [176] = { .lex_state = 14 },
    [177] = { .lex_state = 14 },
    [178] = { .lex_state = 74 },
    [179] = { .lex_state = 369 },
    [180] = { .lex_state = 335 },
    [181] = { .lex_state = 423 },
    [182] = { .lex_state = 73 },
    [183] = { .lex_state = 417 },
    [184] = { .lex_state = 67 },
    [185] = { .lex_state = 14 },
    [186] = { .lex_state = 18 },
    [187] = { .lex_state = 18 },
    [188] = { .lex_state = 14 },
    [189] = { .lex_state = 75 },
    [190] = { .lex_state = 73 },
    [191] = { .lex_state = 14 },
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
        [sym_inline] = STATE(151),
        [sym_replacement] = STATE(3),
        [sym__word] = STATE(3),
        [sym__punctuation] = STATE(3),
        [sym_anchor] = STATE(3),
        [sym_footnote_macro] = STATE(3),
        [sym_image_macro] = STATE(3),
        [sym_kbd_macro] = STATE(3),
        [sym_auto_link] = STATE(3),
        [sym_link_url] = STATE(28),
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
        [sym__word_no_digit] = ACTIONS(5),
        [sym__digits] = ACTIONS(5),
        [anon_sym_BANG] = ACTIONS(5),
        [anon_sym_DQUOTE] = ACTIONS(7),
        [anon_sym_POUND] = ACTIONS(5),
        [anon_sym_DOLLAR] = ACTIONS(5),
        [anon_sym_PERCENT] = ACTIONS(5),
        [anon_sym_AMP] = ACTIONS(5),
        [anon_sym_SQUOTE] = ACTIONS(5),
        [anon_sym_LPAREN] = ACTIONS(5),
        [anon_sym_RPAREN] = ACTIONS(5),
        [anon_sym_STAR] = ACTIONS(5),
        [anon_sym_PLUS] = ACTIONS(9),
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
        [sym_email] = ACTIONS(5),
        [anon_sym_footnote] = ACTIONS(15),
        [anon_sym_footnoteref] = ACTIONS(15),
        [anon_sym_image] = ACTIONS(17),
        [anon_sym_icon] = ACTIONS(17),
        [anon_sym_kbd] = ACTIONS(19),
        [anon_sym_btn] = ACTIONS(19),
        [anon_sym_http] = ACTIONS(21),
        [anon_sym_https] = ACTIONS(21),
        [anon_sym_file] = ACTIONS(21),
        [anon_sym_ftp] = ACTIONS(21),
        [anon_sym_irc] = ACTIONS(21),
        [anon_sym_link] = ACTIONS(23),
        [anon_sym_mailto] = ACTIONS(23),
        [anon_sym_stem] = ACTIONS(25),
        [anon_sym_latexmath] = ACTIONS(25),
        [anon_sym_asciimath] = ACTIONS(25),
        [anon_sym_menu] = ACTIONS(27),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(29),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(31),
        [anon_sym_pass] = ACTIONS(33),
        [anon_sym_LT_LT] = ACTIONS(35),
        [anon_sym_xref] = ACTIONS(37),
        [anon_sym_STAR2] = ACTIONS(39),
        [anon_sym_STAR_STAR] = ACTIONS(41),
        [anon_sym__2] = ACTIONS(43),
        [anon_sym___] = ACTIONS(45),
        [anon_sym_BQUOTE2] = ACTIONS(47),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(49),
        [anon_sym_POUND2] = ACTIONS(51),
        [anon_sym_POUND_POUND] = ACTIONS(53),
    },
    [2] = {
        [sym_replacement] = STATE(2),
        [sym__word] = STATE(2),
        [sym__punctuation] = STATE(2),
        [sym_anchor] = STATE(2),
        [sym_footnote_macro] = STATE(2),
        [sym_image_macro] = STATE(2),
        [sym_kbd_macro] = STATE(2),
        [sym_auto_link] = STATE(2),
        [sym_link_url] = STATE(28),
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
        [ts_builtin_sym_end] = ACTIONS(55),
        [anon_sym_LBRACE] = ACTIONS(57),
        [anon_sym_RBRACE] = ACTIONS(60),
        [sym__word_no_digit] = ACTIONS(60),
        [sym__digits] = ACTIONS(60),
        [anon_sym_BANG] = ACTIONS(60),
        [anon_sym_DQUOTE] = ACTIONS(63),
        [anon_sym_POUND] = ACTIONS(60),
        [anon_sym_DOLLAR] = ACTIONS(60),
        [anon_sym_PERCENT] = ACTIONS(60),
        [anon_sym_AMP] = ACTIONS(60),
        [anon_sym_SQUOTE] = ACTIONS(60),
        [anon_sym_LPAREN] = ACTIONS(60),
        [anon_sym_RPAREN] = ACTIONS(60),
        [anon_sym_STAR] = ACTIONS(60),
        [anon_sym_PLUS] = ACTIONS(66),
        [anon_sym_COMMA] = ACTIONS(60),
        [anon_sym_DASH] = ACTIONS(60),
        [anon_sym_DOT] = ACTIONS(60),
        [anon_sym_SLASH] = ACTIONS(60),
        [anon_sym_COLON] = ACTIONS(60),
        [anon_sym_SEMI] = ACTIONS(60),
        [anon_sym_LT] = ACTIONS(60),
        [anon_sym_EQ] = ACTIONS(60),
        [anon_sym_GT] = ACTIONS(60),
        [anon_sym_QMARK] = ACTIONS(60),
        [anon_sym_AT] = ACTIONS(60),
        [anon_sym_LBRACK] = ACTIONS(60),
        [anon_sym_BSLASH] = ACTIONS(60),
        [anon_sym_RBRACK] = ACTIONS(60),
        [anon_sym_CARET] = ACTIONS(60),
        [anon_sym__] = ACTIONS(60),
        [anon_sym_BQUOTE] = ACTIONS(60),
        [anon_sym_PIPE] = ACTIONS(60),
        [anon_sym_TILDE] = ACTIONS(60),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(69),
        [anon_sym_anchor] = ACTIONS(72),
        [sym_email] = ACTIONS(60),
        [anon_sym_footnote] = ACTIONS(75),
        [anon_sym_footnoteref] = ACTIONS(75),
        [anon_sym_image] = ACTIONS(78),
        [anon_sym_icon] = ACTIONS(78),
        [anon_sym_kbd] = ACTIONS(81),
        [anon_sym_btn] = ACTIONS(81),
        [anon_sym_http] = ACTIONS(84),
        [anon_sym_https] = ACTIONS(84),
        [anon_sym_file] = ACTIONS(84),
        [anon_sym_ftp] = ACTIONS(84),
        [anon_sym_irc] = ACTIONS(84),
        [anon_sym_link] = ACTIONS(87),
        [anon_sym_mailto] = ACTIONS(87),
        [anon_sym_stem] = ACTIONS(90),
        [anon_sym_latexmath] = ACTIONS(90),
        [anon_sym_asciimath] = ACTIONS(90),
        [anon_sym_menu] = ACTIONS(93),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(96),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(99),
        [anon_sym_pass] = ACTIONS(102),
        [anon_sym_LT_LT] = ACTIONS(105),
        [anon_sym_xref] = ACTIONS(108),
        [anon_sym_STAR2] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(114),
        [anon_sym__2] = ACTIONS(117),
        [anon_sym___] = ACTIONS(120),
        [anon_sym_BQUOTE2] = ACTIONS(123),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(126),
        [anon_sym_POUND2] = ACTIONS(129),
        [anon_sym_POUND_POUND] = ACTIONS(132),
    },
    [3] = {
        [sym_replacement] = STATE(2),
        [sym__word] = STATE(2),
        [sym__punctuation] = STATE(2),
        [sym_anchor] = STATE(2),
        [sym_footnote_macro] = STATE(2),
        [sym_image_macro] = STATE(2),
        [sym_kbd_macro] = STATE(2),
        [sym_auto_link] = STATE(2),
        [sym_link_url] = STATE(28),
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
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_LBRACE] = ACTIONS(3),
        [anon_sym_RBRACE] = ACTIONS(137),
        [sym__word_no_digit] = ACTIONS(137),
        [sym__digits] = ACTIONS(137),
        [anon_sym_BANG] = ACTIONS(137),
        [anon_sym_DQUOTE] = ACTIONS(7),
        [anon_sym_POUND] = ACTIONS(137),
        [anon_sym_DOLLAR] = ACTIONS(137),
        [anon_sym_PERCENT] = ACTIONS(137),
        [anon_sym_AMP] = ACTIONS(137),
        [anon_sym_SQUOTE] = ACTIONS(137),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_RPAREN] = ACTIONS(137),
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(9),
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
        [anon_sym_LBRACK_LBRACK] = ACTIONS(11),
        [anon_sym_anchor] = ACTIONS(13),
        [sym_email] = ACTIONS(137),
        [anon_sym_footnote] = ACTIONS(15),
        [anon_sym_footnoteref] = ACTIONS(15),
        [anon_sym_image] = ACTIONS(17),
        [anon_sym_icon] = ACTIONS(17),
        [anon_sym_kbd] = ACTIONS(19),
        [anon_sym_btn] = ACTIONS(19),
        [anon_sym_http] = ACTIONS(21),
        [anon_sym_https] = ACTIONS(21),
        [anon_sym_file] = ACTIONS(21),
        [anon_sym_ftp] = ACTIONS(21),
        [anon_sym_irc] = ACTIONS(21),
        [anon_sym_link] = ACTIONS(23),
        [anon_sym_mailto] = ACTIONS(23),
        [anon_sym_stem] = ACTIONS(25),
        [anon_sym_latexmath] = ACTIONS(25),
        [anon_sym_asciimath] = ACTIONS(25),
        [anon_sym_menu] = ACTIONS(27),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(29),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(31),
        [anon_sym_pass] = ACTIONS(33),
        [anon_sym_LT_LT] = ACTIONS(35),
        [anon_sym_xref] = ACTIONS(37),
        [anon_sym_STAR2] = ACTIONS(39),
        [anon_sym_STAR_STAR] = ACTIONS(41),
        [anon_sym__2] = ACTIONS(43),
        [anon_sym___] = ACTIONS(45),
        [anon_sym_BQUOTE2] = ACTIONS(47),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(49),
        [anon_sym_POUND2] = ACTIONS(51),
        [anon_sym_POUND_POUND] = ACTIONS(53),
    },
    [4] = {
        [aux_sym_link_url_repeat1] = STATE(4),
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
        [anon_sym_DOT] = ACTIONS(143),
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
        [sym_email] = ACTIONS(141),
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
        [anon_sym_menu] = ACTIONS(141),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(141),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(141),
        [anon_sym_pass] = ACTIONS(141),
        [anon_sym_LT_LT] = ACTIONS(141),
        [anon_sym_xref] = ACTIONS(141),
        [anon_sym_STAR2] = ACTIONS(141),
        [anon_sym_STAR_STAR] = ACTIONS(141),
        [anon_sym__2] = ACTIONS(141),
        [anon_sym___] = ACTIONS(141),
        [anon_sym_BQUOTE2] = ACTIONS(141),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(141),
        [anon_sym_POUND2] = ACTIONS(141),
        [anon_sym_POUND_POUND] = ACTIONS(141),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(146),
        [anon_sym_LBRACE] = ACTIONS(148),
        [aux_sym_replacement_token1] = ACTIONS(150),
        [anon_sym_RBRACE] = ACTIONS(148),
        [sym__word_no_digit] = ACTIONS(148),
        [sym__digits] = ACTIONS(148),
        [anon_sym_BANG] = ACTIONS(148),
        [anon_sym_DQUOTE] = ACTIONS(148),
        [anon_sym_POUND] = ACTIONS(148),
        [anon_sym_DOLLAR] = ACTIONS(148),
        [anon_sym_PERCENT] = ACTIONS(148),
        [anon_sym_AMP] = ACTIONS(148),
        [anon_sym_SQUOTE] = ACTIONS(148),
        [anon_sym_LPAREN] = ACTIONS(148),
        [anon_sym_RPAREN] = ACTIONS(148),
        [anon_sym_STAR] = ACTIONS(148),
        [anon_sym_PLUS] = ACTIONS(148),
        [anon_sym_COMMA] = ACTIONS(148),
        [anon_sym_DASH] = ACTIONS(148),
        [anon_sym_DOT] = ACTIONS(148),
        [anon_sym_SLASH] = ACTIONS(148),
        [anon_sym_COLON] = ACTIONS(148),
        [anon_sym_SEMI] = ACTIONS(148),
        [anon_sym_LT] = ACTIONS(148),
        [anon_sym_EQ] = ACTIONS(148),
        [anon_sym_GT] = ACTIONS(148),
        [anon_sym_QMARK] = ACTIONS(148),
        [anon_sym_AT] = ACTIONS(148),
        [anon_sym_LBRACK] = ACTIONS(148),
        [anon_sym_BSLASH] = ACTIONS(148),
        [anon_sym_RBRACK] = ACTIONS(148),
        [anon_sym_CARET] = ACTIONS(148),
        [anon_sym__] = ACTIONS(148),
        [anon_sym_BQUOTE] = ACTIONS(148),
        [anon_sym_PIPE] = ACTIONS(148),
        [anon_sym_TILDE] = ACTIONS(148),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(148),
        [anon_sym_anchor] = ACTIONS(148),
        [sym_email] = ACTIONS(148),
        [anon_sym_footnote] = ACTIONS(148),
        [anon_sym_footnoteref] = ACTIONS(148),
        [anon_sym_image] = ACTIONS(148),
        [anon_sym_icon] = ACTIONS(148),
        [anon_sym_kbd] = ACTIONS(148),
        [anon_sym_btn] = ACTIONS(148),
        [anon_sym_http] = ACTIONS(148),
        [anon_sym_https] = ACTIONS(148),
        [anon_sym_file] = ACTIONS(148),
        [anon_sym_ftp] = ACTIONS(148),
        [anon_sym_irc] = ACTIONS(148),
        [anon_sym_link] = ACTIONS(148),
        [anon_sym_mailto] = ACTIONS(148),
        [anon_sym_stem] = ACTIONS(148),
        [anon_sym_latexmath] = ACTIONS(148),
        [anon_sym_asciimath] = ACTIONS(148),
        [anon_sym_menu] = ACTIONS(148),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(148),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(148),
        [anon_sym_pass] = ACTIONS(148),
        [anon_sym_LT_LT] = ACTIONS(148),
        [anon_sym_xref] = ACTIONS(148),
        [anon_sym_STAR2] = ACTIONS(148),
        [anon_sym_STAR_STAR] = ACTIONS(148),
        [anon_sym__2] = ACTIONS(148),
        [anon_sym___] = ACTIONS(148),
        [anon_sym_BQUOTE2] = ACTIONS(148),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(148),
        [anon_sym_POUND2] = ACTIONS(148),
        [anon_sym_POUND_POUND] = ACTIONS(148),
    },
    [6] = {
        [sym_link_url] = STATE(121),
        [ts_builtin_sym_end] = ACTIONS(146),
        [anon_sym_LBRACE] = ACTIONS(148),
        [anon_sym_RBRACE] = ACTIONS(148),
        [sym__word_no_digit] = ACTIONS(148),
        [sym__digits] = ACTIONS(148),
        [anon_sym_BANG] = ACTIONS(148),
        [anon_sym_DQUOTE] = ACTIONS(148),
        [anon_sym_POUND] = ACTIONS(148),
        [anon_sym_DOLLAR] = ACTIONS(148),
        [anon_sym_PERCENT] = ACTIONS(148),
        [anon_sym_AMP] = ACTIONS(148),
        [anon_sym_SQUOTE] = ACTIONS(148),
        [anon_sym_LPAREN] = ACTIONS(148),
        [anon_sym_RPAREN] = ACTIONS(148),
        [anon_sym_STAR] = ACTIONS(148),
        [anon_sym_PLUS] = ACTIONS(148),
        [anon_sym_COMMA] = ACTIONS(148),
        [anon_sym_DASH] = ACTIONS(148),
        [anon_sym_DOT] = ACTIONS(148),
        [anon_sym_SLASH] = ACTIONS(148),
        [anon_sym_COLON] = ACTIONS(148),
        [anon_sym_SEMI] = ACTIONS(148),
        [anon_sym_LT] = ACTIONS(148),
        [anon_sym_EQ] = ACTIONS(148),
        [anon_sym_GT] = ACTIONS(148),
        [anon_sym_QMARK] = ACTIONS(148),
        [anon_sym_AT] = ACTIONS(148),
        [anon_sym_LBRACK] = ACTIONS(148),
        [anon_sym_BSLASH] = ACTIONS(148),
        [anon_sym_RBRACK] = ACTIONS(148),
        [anon_sym_CARET] = ACTIONS(148),
        [anon_sym__] = ACTIONS(148),
        [anon_sym_BQUOTE] = ACTIONS(148),
        [anon_sym_PIPE] = ACTIONS(148),
        [anon_sym_TILDE] = ACTIONS(148),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(148),
        [anon_sym_anchor] = ACTIONS(148),
        [sym_email] = ACTIONS(148),
        [anon_sym_footnote] = ACTIONS(148),
        [anon_sym_footnoteref] = ACTIONS(148),
        [anon_sym_image] = ACTIONS(148),
        [anon_sym_icon] = ACTIONS(148),
        [anon_sym_kbd] = ACTIONS(148),
        [anon_sym_btn] = ACTIONS(148),
        [anon_sym_http] = ACTIONS(152),
        [anon_sym_https] = ACTIONS(152),
        [anon_sym_file] = ACTIONS(152),
        [anon_sym_ftp] = ACTIONS(152),
        [anon_sym_irc] = ACTIONS(152),
        [anon_sym_link] = ACTIONS(148),
        [anon_sym_mailto] = ACTIONS(148),
        [anon_sym_stem] = ACTIONS(148),
        [anon_sym_latexmath] = ACTIONS(148),
        [anon_sym_asciimath] = ACTIONS(148),
        [anon_sym_menu] = ACTIONS(148),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(148),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(148),
        [anon_sym_pass] = ACTIONS(148),
        [anon_sym_LT_LT] = ACTIONS(148),
        [anon_sym_xref] = ACTIONS(148),
        [anon_sym_STAR2] = ACTIONS(148),
        [anon_sym_STAR_STAR] = ACTIONS(148),
        [anon_sym__2] = ACTIONS(148),
        [anon_sym___] = ACTIONS(148),
        [anon_sym_BQUOTE2] = ACTIONS(148),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(148),
        [anon_sym_POUND2] = ACTIONS(148),
        [anon_sym_POUND_POUND] = ACTIONS(148),
    },
    [7] = {
        [ts_builtin_sym_end] = ACTIONS(146),
        [anon_sym_LBRACE] = ACTIONS(148),
        [aux_sym_replacement_token1] = ACTIONS(154),
        [anon_sym_RBRACE] = ACTIONS(148),
        [sym__word_no_digit] = ACTIONS(148),
        [sym__digits] = ACTIONS(148),
        [anon_sym_BANG] = ACTIONS(148),
        [anon_sym_DQUOTE] = ACTIONS(148),
        [anon_sym_POUND] = ACTIONS(148),
        [anon_sym_DOLLAR] = ACTIONS(148),
        [anon_sym_PERCENT] = ACTIONS(148),
        [anon_sym_AMP] = ACTIONS(148),
        [anon_sym_SQUOTE] = ACTIONS(148),
        [anon_sym_LPAREN] = ACTIONS(148),
        [anon_sym_RPAREN] = ACTIONS(148),
        [anon_sym_STAR] = ACTIONS(148),
        [anon_sym_PLUS] = ACTIONS(148),
        [anon_sym_COMMA] = ACTIONS(148),
        [anon_sym_DASH] = ACTIONS(148),
        [anon_sym_DOT] = ACTIONS(148),
        [anon_sym_SLASH] = ACTIONS(148),
        [anon_sym_COLON] = ACTIONS(148),
        [anon_sym_SEMI] = ACTIONS(148),
        [anon_sym_LT] = ACTIONS(148),
        [anon_sym_EQ] = ACTIONS(148),
        [anon_sym_GT] = ACTIONS(148),
        [anon_sym_QMARK] = ACTIONS(148),
        [anon_sym_AT] = ACTIONS(148),
        [anon_sym_LBRACK] = ACTIONS(148),
        [anon_sym_BSLASH] = ACTIONS(148),
        [anon_sym_RBRACK] = ACTIONS(148),
        [anon_sym_CARET] = ACTIONS(148),
        [anon_sym__] = ACTIONS(148),
        [anon_sym_BQUOTE] = ACTIONS(148),
        [anon_sym_PIPE] = ACTIONS(148),
        [anon_sym_TILDE] = ACTIONS(148),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(148),
        [anon_sym_anchor] = ACTIONS(148),
        [sym_email] = ACTIONS(148),
        [anon_sym_footnote] = ACTIONS(148),
        [anon_sym_footnoteref] = ACTIONS(148),
        [anon_sym_image] = ACTIONS(148),
        [anon_sym_icon] = ACTIONS(148),
        [anon_sym_kbd] = ACTIONS(148),
        [anon_sym_btn] = ACTIONS(148),
        [anon_sym_http] = ACTIONS(148),
        [anon_sym_https] = ACTIONS(148),
        [anon_sym_file] = ACTIONS(148),
        [anon_sym_ftp] = ACTIONS(148),
        [anon_sym_irc] = ACTIONS(148),
        [anon_sym_link] = ACTIONS(148),
        [anon_sym_mailto] = ACTIONS(148),
        [anon_sym_stem] = ACTIONS(148),
        [anon_sym_latexmath] = ACTIONS(148),
        [anon_sym_asciimath] = ACTIONS(148),
        [anon_sym_menu] = ACTIONS(148),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(148),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(148),
        [anon_sym_pass] = ACTIONS(148),
        [anon_sym_LT_LT] = ACTIONS(148),
        [anon_sym_xref] = ACTIONS(148),
        [anon_sym_STAR2] = ACTIONS(148),
        [anon_sym_STAR_STAR] = ACTIONS(148),
        [anon_sym__2] = ACTIONS(148),
        [anon_sym___] = ACTIONS(148),
        [anon_sym_BQUOTE2] = ACTIONS(148),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(148),
        [anon_sym_POUND2] = ACTIONS(148),
        [anon_sym_POUND_POUND] = ACTIONS(148),
    },
    [8] = {
        [aux_sym_link_url_repeat1] = STATE(9),
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
        [anon_sym_DOT] = ACTIONS(160),
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
        [sym_email] = ACTIONS(158),
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
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(158),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(158),
        [anon_sym_pass] = ACTIONS(158),
        [anon_sym_LT_LT] = ACTIONS(158),
        [anon_sym_xref] = ACTIONS(158),
        [anon_sym_STAR2] = ACTIONS(158),
        [anon_sym_STAR_STAR] = ACTIONS(158),
        [anon_sym__2] = ACTIONS(158),
        [anon_sym___] = ACTIONS(158),
        [anon_sym_BQUOTE2] = ACTIONS(158),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(158),
        [anon_sym_POUND2] = ACTIONS(158),
        [anon_sym_POUND_POUND] = ACTIONS(158),
    },
    [9] = {
        [aux_sym_link_url_repeat1] = STATE(4),
        [ts_builtin_sym_end] = ACTIONS(162),
        [anon_sym_LBRACE] = ACTIONS(164),
        [anon_sym_RBRACE] = ACTIONS(164),
        [sym__word_no_digit] = ACTIONS(164),
        [sym__digits] = ACTIONS(164),
        [anon_sym_BANG] = ACTIONS(164),
        [anon_sym_DQUOTE] = ACTIONS(164),
        [anon_sym_POUND] = ACTIONS(164),
        [anon_sym_DOLLAR] = ACTIONS(164),
        [anon_sym_PERCENT] = ACTIONS(164),
        [anon_sym_AMP] = ACTIONS(164),
        [anon_sym_SQUOTE] = ACTIONS(164),
        [anon_sym_LPAREN] = ACTIONS(164),
        [anon_sym_RPAREN] = ACTIONS(164),
        [anon_sym_STAR] = ACTIONS(164),
        [anon_sym_PLUS] = ACTIONS(164),
        [anon_sym_COMMA] = ACTIONS(164),
        [anon_sym_DASH] = ACTIONS(164),
        [anon_sym_DOT] = ACTIONS(160),
        [anon_sym_SLASH] = ACTIONS(164),
        [anon_sym_COLON] = ACTIONS(164),
        [anon_sym_SEMI] = ACTIONS(164),
        [anon_sym_LT] = ACTIONS(164),
        [anon_sym_EQ] = ACTIONS(164),
        [anon_sym_GT] = ACTIONS(164),
        [anon_sym_QMARK] = ACTIONS(164),
        [anon_sym_AT] = ACTIONS(164),
        [anon_sym_LBRACK] = ACTIONS(164),
        [anon_sym_BSLASH] = ACTIONS(164),
        [anon_sym_RBRACK] = ACTIONS(164),
        [anon_sym_CARET] = ACTIONS(164),
        [anon_sym__] = ACTIONS(164),
        [anon_sym_BQUOTE] = ACTIONS(164),
        [anon_sym_PIPE] = ACTIONS(164),
        [anon_sym_TILDE] = ACTIONS(164),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(164),
        [anon_sym_anchor] = ACTIONS(164),
        [sym_email] = ACTIONS(164),
        [anon_sym_footnote] = ACTIONS(164),
        [anon_sym_footnoteref] = ACTIONS(164),
        [anon_sym_image] = ACTIONS(164),
        [anon_sym_icon] = ACTIONS(164),
        [anon_sym_kbd] = ACTIONS(164),
        [anon_sym_btn] = ACTIONS(164),
        [anon_sym_http] = ACTIONS(164),
        [anon_sym_https] = ACTIONS(164),
        [anon_sym_file] = ACTIONS(164),
        [anon_sym_ftp] = ACTIONS(164),
        [anon_sym_irc] = ACTIONS(164),
        [anon_sym_link] = ACTIONS(164),
        [anon_sym_mailto] = ACTIONS(164),
        [anon_sym_stem] = ACTIONS(164),
        [anon_sym_latexmath] = ACTIONS(164),
        [anon_sym_asciimath] = ACTIONS(164),
        [anon_sym_menu] = ACTIONS(164),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(164),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(164),
        [anon_sym_pass] = ACTIONS(164),
        [anon_sym_LT_LT] = ACTIONS(164),
        [anon_sym_xref] = ACTIONS(164),
        [anon_sym_STAR2] = ACTIONS(164),
        [anon_sym_STAR_STAR] = ACTIONS(164),
        [anon_sym__2] = ACTIONS(164),
        [anon_sym___] = ACTIONS(164),
        [anon_sym_BQUOTE2] = ACTIONS(164),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(164),
        [anon_sym_POUND2] = ACTIONS(164),
        [anon_sym_POUND_POUND] = ACTIONS(164),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(166),
        [anon_sym_LBRACE] = ACTIONS(168),
        [anon_sym_RBRACE] = ACTIONS(168),
        [sym__word_no_digit] = ACTIONS(168),
        [sym__digits] = ACTIONS(168),
        [anon_sym_BANG] = ACTIONS(168),
        [anon_sym_DQUOTE] = ACTIONS(168),
        [anon_sym_POUND] = ACTIONS(168),
        [anon_sym_DOLLAR] = ACTIONS(168),
        [anon_sym_PERCENT] = ACTIONS(168),
        [anon_sym_AMP] = ACTIONS(168),
        [anon_sym_SQUOTE] = ACTIONS(168),
        [anon_sym_LPAREN] = ACTIONS(168),
        [anon_sym_RPAREN] = ACTIONS(168),
        [anon_sym_STAR] = ACTIONS(168),
        [anon_sym_PLUS] = ACTIONS(168),
        [anon_sym_COMMA] = ACTIONS(168),
        [anon_sym_DASH] = ACTIONS(168),
        [anon_sym_DOT] = ACTIONS(168),
        [anon_sym_SLASH] = ACTIONS(168),
        [anon_sym_COLON] = ACTIONS(168),
        [anon_sym_SEMI] = ACTIONS(168),
        [anon_sym_LT] = ACTIONS(168),
        [anon_sym_EQ] = ACTIONS(168),
        [anon_sym_GT] = ACTIONS(168),
        [anon_sym_QMARK] = ACTIONS(168),
        [anon_sym_AT] = ACTIONS(168),
        [anon_sym_LBRACK] = ACTIONS(168),
        [anon_sym_BSLASH] = ACTIONS(168),
        [anon_sym_RBRACK] = ACTIONS(168),
        [anon_sym_CARET] = ACTIONS(168),
        [anon_sym__] = ACTIONS(168),
        [anon_sym_BQUOTE] = ACTIONS(168),
        [anon_sym_PIPE] = ACTIONS(168),
        [anon_sym_TILDE] = ACTIONS(168),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(168),
        [anon_sym_anchor] = ACTIONS(168),
        [sym_email] = ACTIONS(168),
        [anon_sym_footnote] = ACTIONS(168),
        [anon_sym_footnoteref] = ACTIONS(168),
        [anon_sym_image] = ACTIONS(168),
        [anon_sym_icon] = ACTIONS(168),
        [anon_sym_kbd] = ACTIONS(168),
        [anon_sym_btn] = ACTIONS(168),
        [anon_sym_http] = ACTIONS(168),
        [anon_sym_https] = ACTIONS(168),
        [anon_sym_file] = ACTIONS(168),
        [anon_sym_ftp] = ACTIONS(168),
        [anon_sym_irc] = ACTIONS(168),
        [anon_sym_link] = ACTIONS(168),
        [anon_sym_mailto] = ACTIONS(168),
        [anon_sym_stem] = ACTIONS(168),
        [anon_sym_latexmath] = ACTIONS(168),
        [anon_sym_asciimath] = ACTIONS(168),
        [anon_sym_menu] = ACTIONS(168),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(168),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(168),
        [anon_sym_pass] = ACTIONS(168),
        [anon_sym_LT_LT] = ACTIONS(168),
        [anon_sym_xref] = ACTIONS(168),
        [anon_sym_STAR2] = ACTIONS(168),
        [anon_sym_STAR_STAR] = ACTIONS(168),
        [anon_sym__2] = ACTIONS(168),
        [anon_sym___] = ACTIONS(168),
        [anon_sym_BQUOTE2] = ACTIONS(168),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(168),
        [anon_sym_POUND2] = ACTIONS(168),
        [anon_sym_POUND_POUND] = ACTIONS(168),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(170),
        [anon_sym_LBRACE] = ACTIONS(172),
        [anon_sym_RBRACE] = ACTIONS(172),
        [sym__word_no_digit] = ACTIONS(172),
        [sym__digits] = ACTIONS(172),
        [anon_sym_BANG] = ACTIONS(172),
        [anon_sym_DQUOTE] = ACTIONS(172),
        [anon_sym_POUND] = ACTIONS(172),
        [anon_sym_DOLLAR] = ACTIONS(172),
        [anon_sym_PERCENT] = ACTIONS(172),
        [anon_sym_AMP] = ACTIONS(172),
        [anon_sym_SQUOTE] = ACTIONS(172),
        [anon_sym_LPAREN] = ACTIONS(172),
        [anon_sym_RPAREN] = ACTIONS(172),
        [anon_sym_STAR] = ACTIONS(172),
        [anon_sym_PLUS] = ACTIONS(172),
        [anon_sym_COMMA] = ACTIONS(172),
        [anon_sym_DASH] = ACTIONS(172),
        [anon_sym_DOT] = ACTIONS(172),
        [anon_sym_SLASH] = ACTIONS(172),
        [anon_sym_COLON] = ACTIONS(172),
        [anon_sym_SEMI] = ACTIONS(172),
        [anon_sym_LT] = ACTIONS(172),
        [anon_sym_EQ] = ACTIONS(172),
        [anon_sym_GT] = ACTIONS(172),
        [anon_sym_QMARK] = ACTIONS(172),
        [anon_sym_AT] = ACTIONS(172),
        [anon_sym_LBRACK] = ACTIONS(172),
        [anon_sym_BSLASH] = ACTIONS(172),
        [anon_sym_RBRACK] = ACTIONS(172),
        [anon_sym_CARET] = ACTIONS(172),
        [anon_sym__] = ACTIONS(172),
        [anon_sym_BQUOTE] = ACTIONS(172),
        [anon_sym_PIPE] = ACTIONS(172),
        [anon_sym_TILDE] = ACTIONS(172),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(172),
        [anon_sym_anchor] = ACTIONS(172),
        [sym_email] = ACTIONS(172),
        [anon_sym_footnote] = ACTIONS(172),
        [anon_sym_footnoteref] = ACTIONS(172),
        [anon_sym_image] = ACTIONS(172),
        [anon_sym_icon] = ACTIONS(172),
        [anon_sym_kbd] = ACTIONS(172),
        [anon_sym_btn] = ACTIONS(172),
        [anon_sym_http] = ACTIONS(172),
        [anon_sym_https] = ACTIONS(172),
        [anon_sym_file] = ACTIONS(172),
        [anon_sym_ftp] = ACTIONS(172),
        [anon_sym_irc] = ACTIONS(172),
        [anon_sym_link] = ACTIONS(172),
        [anon_sym_mailto] = ACTIONS(172),
        [anon_sym_stem] = ACTIONS(172),
        [anon_sym_latexmath] = ACTIONS(172),
        [anon_sym_asciimath] = ACTIONS(172),
        [anon_sym_menu] = ACTIONS(172),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(172),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(172),
        [anon_sym_pass] = ACTIONS(172),
        [anon_sym_LT_LT] = ACTIONS(172),
        [anon_sym_xref] = ACTIONS(172),
        [anon_sym_STAR2] = ACTIONS(172),
        [anon_sym_STAR_STAR] = ACTIONS(172),
        [anon_sym__2] = ACTIONS(172),
        [anon_sym___] = ACTIONS(172),
        [anon_sym_BQUOTE2] = ACTIONS(172),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(172),
        [anon_sym_POUND2] = ACTIONS(172),
        [anon_sym_POUND_POUND] = ACTIONS(172),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(174),
        [anon_sym_LBRACE] = ACTIONS(176),
        [anon_sym_RBRACE] = ACTIONS(176),
        [sym__word_no_digit] = ACTIONS(176),
        [sym__digits] = ACTIONS(176),
        [anon_sym_BANG] = ACTIONS(176),
        [anon_sym_DQUOTE] = ACTIONS(176),
        [anon_sym_POUND] = ACTIONS(176),
        [anon_sym_DOLLAR] = ACTIONS(176),
        [anon_sym_PERCENT] = ACTIONS(176),
        [anon_sym_AMP] = ACTIONS(176),
        [anon_sym_SQUOTE] = ACTIONS(176),
        [anon_sym_LPAREN] = ACTIONS(176),
        [anon_sym_RPAREN] = ACTIONS(176),
        [anon_sym_STAR] = ACTIONS(176),
        [anon_sym_PLUS] = ACTIONS(176),
        [anon_sym_COMMA] = ACTIONS(176),
        [anon_sym_DASH] = ACTIONS(176),
        [anon_sym_DOT] = ACTIONS(176),
        [anon_sym_SLASH] = ACTIONS(176),
        [anon_sym_COLON] = ACTIONS(176),
        [anon_sym_SEMI] = ACTIONS(176),
        [anon_sym_LT] = ACTIONS(176),
        [anon_sym_EQ] = ACTIONS(176),
        [anon_sym_GT] = ACTIONS(176),
        [anon_sym_QMARK] = ACTIONS(176),
        [anon_sym_AT] = ACTIONS(176),
        [anon_sym_LBRACK] = ACTIONS(176),
        [anon_sym_BSLASH] = ACTIONS(176),
        [anon_sym_RBRACK] = ACTIONS(176),
        [anon_sym_CARET] = ACTIONS(176),
        [anon_sym__] = ACTIONS(176),
        [anon_sym_BQUOTE] = ACTIONS(176),
        [anon_sym_PIPE] = ACTIONS(176),
        [anon_sym_TILDE] = ACTIONS(176),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(176),
        [anon_sym_anchor] = ACTIONS(176),
        [sym_email] = ACTIONS(176),
        [anon_sym_footnote] = ACTIONS(176),
        [anon_sym_footnoteref] = ACTIONS(176),
        [anon_sym_image] = ACTIONS(176),
        [anon_sym_icon] = ACTIONS(176),
        [anon_sym_kbd] = ACTIONS(176),
        [anon_sym_btn] = ACTIONS(176),
        [anon_sym_http] = ACTIONS(176),
        [anon_sym_https] = ACTIONS(176),
        [anon_sym_file] = ACTIONS(176),
        [anon_sym_ftp] = ACTIONS(176),
        [anon_sym_irc] = ACTIONS(176),
        [anon_sym_link] = ACTIONS(176),
        [anon_sym_mailto] = ACTIONS(176),
        [anon_sym_stem] = ACTIONS(176),
        [anon_sym_latexmath] = ACTIONS(176),
        [anon_sym_asciimath] = ACTIONS(176),
        [anon_sym_menu] = ACTIONS(176),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(176),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(176),
        [anon_sym_pass] = ACTIONS(176),
        [anon_sym_LT_LT] = ACTIONS(176),
        [anon_sym_xref] = ACTIONS(176),
        [anon_sym_STAR2] = ACTIONS(176),
        [anon_sym_STAR_STAR] = ACTIONS(176),
        [anon_sym__2] = ACTIONS(176),
        [anon_sym___] = ACTIONS(176),
        [anon_sym_BQUOTE2] = ACTIONS(176),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(176),
        [anon_sym_POUND2] = ACTIONS(176),
        [anon_sym_POUND_POUND] = ACTIONS(176),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(178),
        [anon_sym_LBRACE] = ACTIONS(180),
        [anon_sym_RBRACE] = ACTIONS(180),
        [sym__word_no_digit] = ACTIONS(180),
        [sym__digits] = ACTIONS(180),
        [anon_sym_BANG] = ACTIONS(180),
        [anon_sym_DQUOTE] = ACTIONS(180),
        [anon_sym_POUND] = ACTIONS(180),
        [anon_sym_DOLLAR] = ACTIONS(180),
        [anon_sym_PERCENT] = ACTIONS(180),
        [anon_sym_AMP] = ACTIONS(180),
        [anon_sym_SQUOTE] = ACTIONS(180),
        [anon_sym_LPAREN] = ACTIONS(180),
        [anon_sym_RPAREN] = ACTIONS(180),
        [anon_sym_STAR] = ACTIONS(180),
        [anon_sym_PLUS] = ACTIONS(180),
        [anon_sym_COMMA] = ACTIONS(180),
        [anon_sym_DASH] = ACTIONS(180),
        [anon_sym_DOT] = ACTIONS(180),
        [anon_sym_SLASH] = ACTIONS(180),
        [anon_sym_COLON] = ACTIONS(180),
        [anon_sym_SEMI] = ACTIONS(180),
        [anon_sym_LT] = ACTIONS(180),
        [anon_sym_EQ] = ACTIONS(180),
        [anon_sym_GT] = ACTIONS(180),
        [anon_sym_QMARK] = ACTIONS(180),
        [anon_sym_AT] = ACTIONS(180),
        [anon_sym_LBRACK] = ACTIONS(180),
        [anon_sym_BSLASH] = ACTIONS(180),
        [anon_sym_RBRACK] = ACTIONS(180),
        [anon_sym_CARET] = ACTIONS(180),
        [anon_sym__] = ACTIONS(180),
        [anon_sym_BQUOTE] = ACTIONS(180),
        [anon_sym_PIPE] = ACTIONS(180),
        [anon_sym_TILDE] = ACTIONS(180),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(180),
        [anon_sym_anchor] = ACTIONS(180),
        [sym_email] = ACTIONS(180),
        [anon_sym_footnote] = ACTIONS(180),
        [anon_sym_footnoteref] = ACTIONS(180),
        [anon_sym_image] = ACTIONS(180),
        [anon_sym_icon] = ACTIONS(180),
        [anon_sym_kbd] = ACTIONS(180),
        [anon_sym_btn] = ACTIONS(180),
        [anon_sym_http] = ACTIONS(180),
        [anon_sym_https] = ACTIONS(180),
        [anon_sym_file] = ACTIONS(180),
        [anon_sym_ftp] = ACTIONS(180),
        [anon_sym_irc] = ACTIONS(180),
        [anon_sym_link] = ACTIONS(180),
        [anon_sym_mailto] = ACTIONS(180),
        [anon_sym_stem] = ACTIONS(180),
        [anon_sym_latexmath] = ACTIONS(180),
        [anon_sym_asciimath] = ACTIONS(180),
        [anon_sym_menu] = ACTIONS(180),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(180),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(180),
        [anon_sym_pass] = ACTIONS(180),
        [anon_sym_LT_LT] = ACTIONS(180),
        [anon_sym_xref] = ACTIONS(180),
        [anon_sym_STAR2] = ACTIONS(180),
        [anon_sym_STAR_STAR] = ACTIONS(180),
        [anon_sym__2] = ACTIONS(180),
        [anon_sym___] = ACTIONS(180),
        [anon_sym_BQUOTE2] = ACTIONS(180),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(180),
        [anon_sym_POUND2] = ACTIONS(180),
        [anon_sym_POUND_POUND] = ACTIONS(180),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(182),
        [anon_sym_LBRACE] = ACTIONS(184),
        [anon_sym_RBRACE] = ACTIONS(184),
        [sym__word_no_digit] = ACTIONS(184),
        [sym__digits] = ACTIONS(184),
        [anon_sym_BANG] = ACTIONS(184),
        [anon_sym_DQUOTE] = ACTIONS(184),
        [anon_sym_POUND] = ACTIONS(184),
        [anon_sym_DOLLAR] = ACTIONS(184),
        [anon_sym_PERCENT] = ACTIONS(184),
        [anon_sym_AMP] = ACTIONS(184),
        [anon_sym_SQUOTE] = ACTIONS(184),
        [anon_sym_LPAREN] = ACTIONS(184),
        [anon_sym_RPAREN] = ACTIONS(184),
        [anon_sym_STAR] = ACTIONS(184),
        [anon_sym_PLUS] = ACTIONS(184),
        [anon_sym_COMMA] = ACTIONS(184),
        [anon_sym_DASH] = ACTIONS(184),
        [anon_sym_DOT] = ACTIONS(184),
        [anon_sym_SLASH] = ACTIONS(184),
        [anon_sym_COLON] = ACTIONS(184),
        [anon_sym_SEMI] = ACTIONS(184),
        [anon_sym_LT] = ACTIONS(184),
        [anon_sym_EQ] = ACTIONS(184),
        [anon_sym_GT] = ACTIONS(184),
        [anon_sym_QMARK] = ACTIONS(184),
        [anon_sym_AT] = ACTIONS(184),
        [anon_sym_LBRACK] = ACTIONS(184),
        [anon_sym_BSLASH] = ACTIONS(184),
        [anon_sym_RBRACK] = ACTIONS(184),
        [anon_sym_CARET] = ACTIONS(184),
        [anon_sym__] = ACTIONS(184),
        [anon_sym_BQUOTE] = ACTIONS(184),
        [anon_sym_PIPE] = ACTIONS(184),
        [anon_sym_TILDE] = ACTIONS(184),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(184),
        [anon_sym_anchor] = ACTIONS(184),
        [sym_email] = ACTIONS(184),
        [anon_sym_footnote] = ACTIONS(184),
        [anon_sym_footnoteref] = ACTIONS(184),
        [anon_sym_image] = ACTIONS(184),
        [anon_sym_icon] = ACTIONS(184),
        [anon_sym_kbd] = ACTIONS(184),
        [anon_sym_btn] = ACTIONS(184),
        [anon_sym_http] = ACTIONS(184),
        [anon_sym_https] = ACTIONS(184),
        [anon_sym_file] = ACTIONS(184),
        [anon_sym_ftp] = ACTIONS(184),
        [anon_sym_irc] = ACTIONS(184),
        [anon_sym_link] = ACTIONS(184),
        [anon_sym_mailto] = ACTIONS(184),
        [anon_sym_stem] = ACTIONS(184),
        [anon_sym_latexmath] = ACTIONS(184),
        [anon_sym_asciimath] = ACTIONS(184),
        [anon_sym_menu] = ACTIONS(184),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(184),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(184),
        [anon_sym_pass] = ACTIONS(184),
        [anon_sym_LT_LT] = ACTIONS(184),
        [anon_sym_xref] = ACTIONS(184),
        [anon_sym_STAR2] = ACTIONS(184),
        [anon_sym_STAR_STAR] = ACTIONS(184),
        [anon_sym__2] = ACTIONS(184),
        [anon_sym___] = ACTIONS(184),
        [anon_sym_BQUOTE2] = ACTIONS(184),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(184),
        [anon_sym_POUND2] = ACTIONS(184),
        [anon_sym_POUND_POUND] = ACTIONS(184),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(186),
        [anon_sym_LBRACE] = ACTIONS(188),
        [anon_sym_RBRACE] = ACTIONS(188),
        [sym__word_no_digit] = ACTIONS(188),
        [sym__digits] = ACTIONS(188),
        [anon_sym_BANG] = ACTIONS(188),
        [anon_sym_DQUOTE] = ACTIONS(188),
        [anon_sym_POUND] = ACTIONS(188),
        [anon_sym_DOLLAR] = ACTIONS(188),
        [anon_sym_PERCENT] = ACTIONS(188),
        [anon_sym_AMP] = ACTIONS(188),
        [anon_sym_SQUOTE] = ACTIONS(188),
        [anon_sym_LPAREN] = ACTIONS(188),
        [anon_sym_RPAREN] = ACTIONS(188),
        [anon_sym_STAR] = ACTIONS(188),
        [anon_sym_PLUS] = ACTIONS(188),
        [anon_sym_COMMA] = ACTIONS(188),
        [anon_sym_DASH] = ACTIONS(188),
        [anon_sym_DOT] = ACTIONS(188),
        [anon_sym_SLASH] = ACTIONS(188),
        [anon_sym_COLON] = ACTIONS(188),
        [anon_sym_SEMI] = ACTIONS(188),
        [anon_sym_LT] = ACTIONS(188),
        [anon_sym_EQ] = ACTIONS(188),
        [anon_sym_GT] = ACTIONS(188),
        [anon_sym_QMARK] = ACTIONS(188),
        [anon_sym_AT] = ACTIONS(188),
        [anon_sym_LBRACK] = ACTIONS(188),
        [anon_sym_BSLASH] = ACTIONS(188),
        [anon_sym_RBRACK] = ACTIONS(188),
        [anon_sym_CARET] = ACTIONS(188),
        [anon_sym__] = ACTIONS(188),
        [anon_sym_BQUOTE] = ACTIONS(188),
        [anon_sym_PIPE] = ACTIONS(188),
        [anon_sym_TILDE] = ACTIONS(188),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(188),
        [anon_sym_anchor] = ACTIONS(188),
        [sym_email] = ACTIONS(188),
        [anon_sym_footnote] = ACTIONS(188),
        [anon_sym_footnoteref] = ACTIONS(188),
        [anon_sym_image] = ACTIONS(188),
        [anon_sym_icon] = ACTIONS(188),
        [anon_sym_kbd] = ACTIONS(188),
        [anon_sym_btn] = ACTIONS(188),
        [anon_sym_http] = ACTIONS(188),
        [anon_sym_https] = ACTIONS(188),
        [anon_sym_file] = ACTIONS(188),
        [anon_sym_ftp] = ACTIONS(188),
        [anon_sym_irc] = ACTIONS(188),
        [anon_sym_link] = ACTIONS(188),
        [anon_sym_mailto] = ACTIONS(188),
        [anon_sym_stem] = ACTIONS(188),
        [anon_sym_latexmath] = ACTIONS(188),
        [anon_sym_asciimath] = ACTIONS(188),
        [anon_sym_menu] = ACTIONS(188),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(188),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(188),
        [anon_sym_pass] = ACTIONS(188),
        [anon_sym_LT_LT] = ACTIONS(188),
        [anon_sym_xref] = ACTIONS(188),
        [anon_sym_STAR2] = ACTIONS(188),
        [anon_sym_STAR_STAR] = ACTIONS(188),
        [anon_sym__2] = ACTIONS(188),
        [anon_sym___] = ACTIONS(188),
        [anon_sym_BQUOTE2] = ACTIONS(188),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(188),
        [anon_sym_POUND2] = ACTIONS(188),
        [anon_sym_POUND_POUND] = ACTIONS(188),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(190),
        [anon_sym_LBRACE] = ACTIONS(192),
        [anon_sym_RBRACE] = ACTIONS(192),
        [sym__word_no_digit] = ACTIONS(192),
        [sym__digits] = ACTIONS(192),
        [anon_sym_BANG] = ACTIONS(192),
        [anon_sym_DQUOTE] = ACTIONS(192),
        [anon_sym_POUND] = ACTIONS(192),
        [anon_sym_DOLLAR] = ACTIONS(192),
        [anon_sym_PERCENT] = ACTIONS(192),
        [anon_sym_AMP] = ACTIONS(192),
        [anon_sym_SQUOTE] = ACTIONS(192),
        [anon_sym_LPAREN] = ACTIONS(192),
        [anon_sym_RPAREN] = ACTIONS(192),
        [anon_sym_STAR] = ACTIONS(192),
        [anon_sym_PLUS] = ACTIONS(192),
        [anon_sym_COMMA] = ACTIONS(192),
        [anon_sym_DASH] = ACTIONS(192),
        [anon_sym_DOT] = ACTIONS(192),
        [anon_sym_SLASH] = ACTIONS(192),
        [anon_sym_COLON] = ACTIONS(192),
        [anon_sym_SEMI] = ACTIONS(192),
        [anon_sym_LT] = ACTIONS(192),
        [anon_sym_EQ] = ACTIONS(192),
        [anon_sym_GT] = ACTIONS(192),
        [anon_sym_QMARK] = ACTIONS(192),
        [anon_sym_AT] = ACTIONS(192),
        [anon_sym_LBRACK] = ACTIONS(192),
        [anon_sym_BSLASH] = ACTIONS(192),
        [anon_sym_RBRACK] = ACTIONS(192),
        [anon_sym_CARET] = ACTIONS(192),
        [anon_sym__] = ACTIONS(192),
        [anon_sym_BQUOTE] = ACTIONS(192),
        [anon_sym_PIPE] = ACTIONS(192),
        [anon_sym_TILDE] = ACTIONS(192),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(192),
        [anon_sym_anchor] = ACTIONS(192),
        [sym_email] = ACTIONS(192),
        [anon_sym_footnote] = ACTIONS(192),
        [anon_sym_footnoteref] = ACTIONS(192),
        [anon_sym_image] = ACTIONS(192),
        [anon_sym_icon] = ACTIONS(192),
        [anon_sym_kbd] = ACTIONS(192),
        [anon_sym_btn] = ACTIONS(192),
        [anon_sym_http] = ACTIONS(192),
        [anon_sym_https] = ACTIONS(192),
        [anon_sym_file] = ACTIONS(192),
        [anon_sym_ftp] = ACTIONS(192),
        [anon_sym_irc] = ACTIONS(192),
        [anon_sym_link] = ACTIONS(192),
        [anon_sym_mailto] = ACTIONS(192),
        [anon_sym_stem] = ACTIONS(192),
        [anon_sym_latexmath] = ACTIONS(192),
        [anon_sym_asciimath] = ACTIONS(192),
        [anon_sym_menu] = ACTIONS(192),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(192),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(192),
        [anon_sym_pass] = ACTIONS(192),
        [anon_sym_LT_LT] = ACTIONS(192),
        [anon_sym_xref] = ACTIONS(192),
        [anon_sym_STAR2] = ACTIONS(192),
        [anon_sym_STAR_STAR] = ACTIONS(192),
        [anon_sym__2] = ACTIONS(192),
        [anon_sym___] = ACTIONS(192),
        [anon_sym_BQUOTE2] = ACTIONS(192),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(192),
        [anon_sym_POUND2] = ACTIONS(192),
        [anon_sym_POUND_POUND] = ACTIONS(192),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(194),
        [anon_sym_LBRACE] = ACTIONS(196),
        [anon_sym_RBRACE] = ACTIONS(196),
        [sym__word_no_digit] = ACTIONS(196),
        [sym__digits] = ACTIONS(196),
        [anon_sym_BANG] = ACTIONS(196),
        [anon_sym_DQUOTE] = ACTIONS(196),
        [anon_sym_POUND] = ACTIONS(196),
        [anon_sym_DOLLAR] = ACTIONS(196),
        [anon_sym_PERCENT] = ACTIONS(196),
        [anon_sym_AMP] = ACTIONS(196),
        [anon_sym_SQUOTE] = ACTIONS(196),
        [anon_sym_LPAREN] = ACTIONS(196),
        [anon_sym_RPAREN] = ACTIONS(196),
        [anon_sym_STAR] = ACTIONS(196),
        [anon_sym_PLUS] = ACTIONS(196),
        [anon_sym_COMMA] = ACTIONS(196),
        [anon_sym_DASH] = ACTIONS(196),
        [anon_sym_DOT] = ACTIONS(196),
        [anon_sym_SLASH] = ACTIONS(196),
        [anon_sym_COLON] = ACTIONS(196),
        [anon_sym_SEMI] = ACTIONS(196),
        [anon_sym_LT] = ACTIONS(196),
        [anon_sym_EQ] = ACTIONS(196),
        [anon_sym_GT] = ACTIONS(196),
        [anon_sym_QMARK] = ACTIONS(196),
        [anon_sym_AT] = ACTIONS(196),
        [anon_sym_LBRACK] = ACTIONS(196),
        [anon_sym_BSLASH] = ACTIONS(196),
        [anon_sym_RBRACK] = ACTIONS(196),
        [anon_sym_CARET] = ACTIONS(196),
        [anon_sym__] = ACTIONS(196),
        [anon_sym_BQUOTE] = ACTIONS(196),
        [anon_sym_PIPE] = ACTIONS(196),
        [anon_sym_TILDE] = ACTIONS(196),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(196),
        [anon_sym_anchor] = ACTIONS(196),
        [sym_email] = ACTIONS(196),
        [anon_sym_footnote] = ACTIONS(196),
        [anon_sym_footnoteref] = ACTIONS(196),
        [anon_sym_image] = ACTIONS(196),
        [anon_sym_icon] = ACTIONS(196),
        [anon_sym_kbd] = ACTIONS(196),
        [anon_sym_btn] = ACTIONS(196),
        [anon_sym_http] = ACTIONS(196),
        [anon_sym_https] = ACTIONS(196),
        [anon_sym_file] = ACTIONS(196),
        [anon_sym_ftp] = ACTIONS(196),
        [anon_sym_irc] = ACTIONS(196),
        [anon_sym_link] = ACTIONS(196),
        [anon_sym_mailto] = ACTIONS(196),
        [anon_sym_stem] = ACTIONS(196),
        [anon_sym_latexmath] = ACTIONS(196),
        [anon_sym_asciimath] = ACTIONS(196),
        [anon_sym_menu] = ACTIONS(196),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(196),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(196),
        [anon_sym_pass] = ACTIONS(196),
        [anon_sym_LT_LT] = ACTIONS(196),
        [anon_sym_xref] = ACTIONS(196),
        [anon_sym_STAR2] = ACTIONS(196),
        [anon_sym_STAR_STAR] = ACTIONS(196),
        [anon_sym__2] = ACTIONS(196),
        [anon_sym___] = ACTIONS(196),
        [anon_sym_BQUOTE2] = ACTIONS(196),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(196),
        [anon_sym_POUND2] = ACTIONS(196),
        [anon_sym_POUND_POUND] = ACTIONS(196),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(198),
        [anon_sym_LBRACE] = ACTIONS(200),
        [anon_sym_RBRACE] = ACTIONS(200),
        [sym__word_no_digit] = ACTIONS(200),
        [sym__digits] = ACTIONS(200),
        [anon_sym_BANG] = ACTIONS(200),
        [anon_sym_DQUOTE] = ACTIONS(200),
        [anon_sym_POUND] = ACTIONS(200),
        [anon_sym_DOLLAR] = ACTIONS(200),
        [anon_sym_PERCENT] = ACTIONS(200),
        [anon_sym_AMP] = ACTIONS(200),
        [anon_sym_SQUOTE] = ACTIONS(200),
        [anon_sym_LPAREN] = ACTIONS(200),
        [anon_sym_RPAREN] = ACTIONS(200),
        [anon_sym_STAR] = ACTIONS(200),
        [anon_sym_PLUS] = ACTIONS(200),
        [anon_sym_COMMA] = ACTIONS(200),
        [anon_sym_DASH] = ACTIONS(200),
        [anon_sym_DOT] = ACTIONS(200),
        [anon_sym_SLASH] = ACTIONS(200),
        [anon_sym_COLON] = ACTIONS(200),
        [anon_sym_SEMI] = ACTIONS(200),
        [anon_sym_LT] = ACTIONS(200),
        [anon_sym_EQ] = ACTIONS(200),
        [anon_sym_GT] = ACTIONS(200),
        [anon_sym_QMARK] = ACTIONS(200),
        [anon_sym_AT] = ACTIONS(200),
        [anon_sym_LBRACK] = ACTIONS(200),
        [anon_sym_BSLASH] = ACTIONS(200),
        [anon_sym_RBRACK] = ACTIONS(200),
        [anon_sym_CARET] = ACTIONS(200),
        [anon_sym__] = ACTIONS(200),
        [anon_sym_BQUOTE] = ACTIONS(200),
        [anon_sym_PIPE] = ACTIONS(200),
        [anon_sym_TILDE] = ACTIONS(200),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(200),
        [anon_sym_anchor] = ACTIONS(200),
        [sym_email] = ACTIONS(200),
        [anon_sym_footnote] = ACTIONS(200),
        [anon_sym_footnoteref] = ACTIONS(200),
        [anon_sym_image] = ACTIONS(200),
        [anon_sym_icon] = ACTIONS(200),
        [anon_sym_kbd] = ACTIONS(200),
        [anon_sym_btn] = ACTIONS(200),
        [anon_sym_http] = ACTIONS(200),
        [anon_sym_https] = ACTIONS(200),
        [anon_sym_file] = ACTIONS(200),
        [anon_sym_ftp] = ACTIONS(200),
        [anon_sym_irc] = ACTIONS(200),
        [anon_sym_link] = ACTIONS(200),
        [anon_sym_mailto] = ACTIONS(200),
        [anon_sym_stem] = ACTIONS(200),
        [anon_sym_latexmath] = ACTIONS(200),
        [anon_sym_asciimath] = ACTIONS(200),
        [anon_sym_menu] = ACTIONS(200),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(200),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(200),
        [anon_sym_pass] = ACTIONS(200),
        [anon_sym_LT_LT] = ACTIONS(200),
        [anon_sym_xref] = ACTIONS(200),
        [anon_sym_STAR2] = ACTIONS(200),
        [anon_sym_STAR_STAR] = ACTIONS(200),
        [anon_sym__2] = ACTIONS(200),
        [anon_sym___] = ACTIONS(200),
        [anon_sym_BQUOTE2] = ACTIONS(200),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(200),
        [anon_sym_POUND2] = ACTIONS(200),
        [anon_sym_POUND_POUND] = ACTIONS(200),
    },
    [19] = {
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
        [sym_email] = ACTIONS(141),
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
        [anon_sym_menu] = ACTIONS(141),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(141),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(141),
        [anon_sym_pass] = ACTIONS(141),
        [anon_sym_LT_LT] = ACTIONS(141),
        [anon_sym_xref] = ACTIONS(141),
        [anon_sym_STAR2] = ACTIONS(141),
        [anon_sym_STAR_STAR] = ACTIONS(141),
        [anon_sym__2] = ACTIONS(141),
        [anon_sym___] = ACTIONS(141),
        [anon_sym_BQUOTE2] = ACTIONS(141),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(141),
        [anon_sym_POUND2] = ACTIONS(141),
        [anon_sym_POUND_POUND] = ACTIONS(141),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(202),
        [anon_sym_LBRACE] = ACTIONS(204),
        [anon_sym_RBRACE] = ACTIONS(204),
        [sym__word_no_digit] = ACTIONS(204),
        [sym__digits] = ACTIONS(204),
        [anon_sym_BANG] = ACTIONS(204),
        [anon_sym_DQUOTE] = ACTIONS(204),
        [anon_sym_POUND] = ACTIONS(204),
        [anon_sym_DOLLAR] = ACTIONS(204),
        [anon_sym_PERCENT] = ACTIONS(204),
        [anon_sym_AMP] = ACTIONS(204),
        [anon_sym_SQUOTE] = ACTIONS(204),
        [anon_sym_LPAREN] = ACTIONS(204),
        [anon_sym_RPAREN] = ACTIONS(204),
        [anon_sym_STAR] = ACTIONS(204),
        [anon_sym_PLUS] = ACTIONS(204),
        [anon_sym_COMMA] = ACTIONS(204),
        [anon_sym_DASH] = ACTIONS(204),
        [anon_sym_DOT] = ACTIONS(204),
        [anon_sym_SLASH] = ACTIONS(204),
        [anon_sym_COLON] = ACTIONS(204),
        [anon_sym_SEMI] = ACTIONS(204),
        [anon_sym_LT] = ACTIONS(204),
        [anon_sym_EQ] = ACTIONS(204),
        [anon_sym_GT] = ACTIONS(204),
        [anon_sym_QMARK] = ACTIONS(204),
        [anon_sym_AT] = ACTIONS(204),
        [anon_sym_LBRACK] = ACTIONS(204),
        [anon_sym_BSLASH] = ACTIONS(204),
        [anon_sym_RBRACK] = ACTIONS(204),
        [anon_sym_CARET] = ACTIONS(204),
        [anon_sym__] = ACTIONS(204),
        [anon_sym_BQUOTE] = ACTIONS(204),
        [anon_sym_PIPE] = ACTIONS(204),
        [anon_sym_TILDE] = ACTIONS(204),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(204),
        [anon_sym_anchor] = ACTIONS(204),
        [sym_email] = ACTIONS(204),
        [anon_sym_footnote] = ACTIONS(204),
        [anon_sym_footnoteref] = ACTIONS(204),
        [anon_sym_image] = ACTIONS(204),
        [anon_sym_icon] = ACTIONS(204),
        [anon_sym_kbd] = ACTIONS(204),
        [anon_sym_btn] = ACTIONS(204),
        [anon_sym_http] = ACTIONS(204),
        [anon_sym_https] = ACTIONS(204),
        [anon_sym_file] = ACTIONS(204),
        [anon_sym_ftp] = ACTIONS(204),
        [anon_sym_irc] = ACTIONS(204),
        [anon_sym_link] = ACTIONS(204),
        [anon_sym_mailto] = ACTIONS(204),
        [anon_sym_stem] = ACTIONS(204),
        [anon_sym_latexmath] = ACTIONS(204),
        [anon_sym_asciimath] = ACTIONS(204),
        [anon_sym_menu] = ACTIONS(204),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(204),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(204),
        [anon_sym_pass] = ACTIONS(204),
        [anon_sym_LT_LT] = ACTIONS(204),
        [anon_sym_xref] = ACTIONS(204),
        [anon_sym_STAR2] = ACTIONS(204),
        [anon_sym_STAR_STAR] = ACTIONS(204),
        [anon_sym__2] = ACTIONS(204),
        [anon_sym___] = ACTIONS(204),
        [anon_sym_BQUOTE2] = ACTIONS(204),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(204),
        [anon_sym_POUND2] = ACTIONS(204),
        [anon_sym_POUND_POUND] = ACTIONS(204),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(206),
        [anon_sym_LBRACE] = ACTIONS(208),
        [anon_sym_RBRACE] = ACTIONS(208),
        [sym__word_no_digit] = ACTIONS(208),
        [sym__digits] = ACTIONS(208),
        [anon_sym_BANG] = ACTIONS(208),
        [anon_sym_DQUOTE] = ACTIONS(208),
        [anon_sym_POUND] = ACTIONS(208),
        [anon_sym_DOLLAR] = ACTIONS(208),
        [anon_sym_PERCENT] = ACTIONS(208),
        [anon_sym_AMP] = ACTIONS(208),
        [anon_sym_SQUOTE] = ACTIONS(208),
        [anon_sym_LPAREN] = ACTIONS(208),
        [anon_sym_RPAREN] = ACTIONS(208),
        [anon_sym_STAR] = ACTIONS(208),
        [anon_sym_PLUS] = ACTIONS(208),
        [anon_sym_COMMA] = ACTIONS(208),
        [anon_sym_DASH] = ACTIONS(208),
        [anon_sym_DOT] = ACTIONS(208),
        [anon_sym_SLASH] = ACTIONS(208),
        [anon_sym_COLON] = ACTIONS(208),
        [anon_sym_SEMI] = ACTIONS(208),
        [anon_sym_LT] = ACTIONS(208),
        [anon_sym_EQ] = ACTIONS(208),
        [anon_sym_GT] = ACTIONS(208),
        [anon_sym_QMARK] = ACTIONS(208),
        [anon_sym_AT] = ACTIONS(208),
        [anon_sym_LBRACK] = ACTIONS(208),
        [anon_sym_BSLASH] = ACTIONS(208),
        [anon_sym_RBRACK] = ACTIONS(208),
        [anon_sym_CARET] = ACTIONS(208),
        [anon_sym__] = ACTIONS(208),
        [anon_sym_BQUOTE] = ACTIONS(208),
        [anon_sym_PIPE] = ACTIONS(208),
        [anon_sym_TILDE] = ACTIONS(208),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(208),
        [anon_sym_anchor] = ACTIONS(208),
        [sym_email] = ACTIONS(208),
        [anon_sym_footnote] = ACTIONS(208),
        [anon_sym_footnoteref] = ACTIONS(208),
        [anon_sym_image] = ACTIONS(208),
        [anon_sym_icon] = ACTIONS(208),
        [anon_sym_kbd] = ACTIONS(208),
        [anon_sym_btn] = ACTIONS(208),
        [anon_sym_http] = ACTIONS(208),
        [anon_sym_https] = ACTIONS(208),
        [anon_sym_file] = ACTIONS(208),
        [anon_sym_ftp] = ACTIONS(208),
        [anon_sym_irc] = ACTIONS(208),
        [anon_sym_link] = ACTIONS(208),
        [anon_sym_mailto] = ACTIONS(208),
        [anon_sym_stem] = ACTIONS(208),
        [anon_sym_latexmath] = ACTIONS(208),
        [anon_sym_asciimath] = ACTIONS(208),
        [anon_sym_menu] = ACTIONS(208),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(208),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(208),
        [anon_sym_pass] = ACTIONS(208),
        [anon_sym_LT_LT] = ACTIONS(208),
        [anon_sym_xref] = ACTIONS(208),
        [anon_sym_STAR2] = ACTIONS(208),
        [anon_sym_STAR_STAR] = ACTIONS(208),
        [anon_sym__2] = ACTIONS(208),
        [anon_sym___] = ACTIONS(208),
        [anon_sym_BQUOTE2] = ACTIONS(208),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(208),
        [anon_sym_POUND2] = ACTIONS(208),
        [anon_sym_POUND_POUND] = ACTIONS(208),
    },
    [22] = {
        [ts_builtin_sym_end] = ACTIONS(210),
        [anon_sym_LBRACE] = ACTIONS(212),
        [anon_sym_RBRACE] = ACTIONS(212),
        [sym__word_no_digit] = ACTIONS(212),
        [sym__digits] = ACTIONS(212),
        [anon_sym_BANG] = ACTIONS(212),
        [anon_sym_DQUOTE] = ACTIONS(212),
        [anon_sym_POUND] = ACTIONS(212),
        [anon_sym_DOLLAR] = ACTIONS(212),
        [anon_sym_PERCENT] = ACTIONS(212),
        [anon_sym_AMP] = ACTIONS(212),
        [anon_sym_SQUOTE] = ACTIONS(212),
        [anon_sym_LPAREN] = ACTIONS(212),
        [anon_sym_RPAREN] = ACTIONS(212),
        [anon_sym_STAR] = ACTIONS(212),
        [anon_sym_PLUS] = ACTIONS(212),
        [anon_sym_COMMA] = ACTIONS(212),
        [anon_sym_DASH] = ACTIONS(212),
        [anon_sym_DOT] = ACTIONS(212),
        [anon_sym_SLASH] = ACTIONS(212),
        [anon_sym_COLON] = ACTIONS(212),
        [anon_sym_SEMI] = ACTIONS(212),
        [anon_sym_LT] = ACTIONS(212),
        [anon_sym_EQ] = ACTIONS(212),
        [anon_sym_GT] = ACTIONS(212),
        [anon_sym_QMARK] = ACTIONS(212),
        [anon_sym_AT] = ACTIONS(212),
        [anon_sym_LBRACK] = ACTIONS(212),
        [anon_sym_BSLASH] = ACTIONS(212),
        [anon_sym_RBRACK] = ACTIONS(212),
        [anon_sym_CARET] = ACTIONS(212),
        [anon_sym__] = ACTIONS(212),
        [anon_sym_BQUOTE] = ACTIONS(212),
        [anon_sym_PIPE] = ACTIONS(212),
        [anon_sym_TILDE] = ACTIONS(212),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(212),
        [anon_sym_anchor] = ACTIONS(212),
        [sym_email] = ACTIONS(212),
        [anon_sym_footnote] = ACTIONS(212),
        [anon_sym_footnoteref] = ACTIONS(212),
        [anon_sym_image] = ACTIONS(212),
        [anon_sym_icon] = ACTIONS(212),
        [anon_sym_kbd] = ACTIONS(212),
        [anon_sym_btn] = ACTIONS(212),
        [anon_sym_http] = ACTIONS(212),
        [anon_sym_https] = ACTIONS(212),
        [anon_sym_file] = ACTIONS(212),
        [anon_sym_ftp] = ACTIONS(212),
        [anon_sym_irc] = ACTIONS(212),
        [anon_sym_link] = ACTIONS(212),
        [anon_sym_mailto] = ACTIONS(212),
        [anon_sym_stem] = ACTIONS(212),
        [anon_sym_latexmath] = ACTIONS(212),
        [anon_sym_asciimath] = ACTIONS(212),
        [anon_sym_menu] = ACTIONS(212),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(212),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(212),
        [anon_sym_pass] = ACTIONS(212),
        [anon_sym_LT_LT] = ACTIONS(212),
        [anon_sym_xref] = ACTIONS(212),
        [anon_sym_STAR2] = ACTIONS(212),
        [anon_sym_STAR_STAR] = ACTIONS(212),
        [anon_sym__2] = ACTIONS(212),
        [anon_sym___] = ACTIONS(212),
        [anon_sym_BQUOTE2] = ACTIONS(212),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(212),
        [anon_sym_POUND2] = ACTIONS(212),
        [anon_sym_POUND_POUND] = ACTIONS(212),
    },
    [23] = {
        [ts_builtin_sym_end] = ACTIONS(214),
        [anon_sym_LBRACE] = ACTIONS(216),
        [anon_sym_RBRACE] = ACTIONS(216),
        [sym__word_no_digit] = ACTIONS(216),
        [sym__digits] = ACTIONS(216),
        [anon_sym_BANG] = ACTIONS(216),
        [anon_sym_DQUOTE] = ACTIONS(216),
        [anon_sym_POUND] = ACTIONS(216),
        [anon_sym_DOLLAR] = ACTIONS(216),
        [anon_sym_PERCENT] = ACTIONS(216),
        [anon_sym_AMP] = ACTIONS(216),
        [anon_sym_SQUOTE] = ACTIONS(216),
        [anon_sym_LPAREN] = ACTIONS(216),
        [anon_sym_RPAREN] = ACTIONS(216),
        [anon_sym_STAR] = ACTIONS(216),
        [anon_sym_PLUS] = ACTIONS(216),
        [anon_sym_COMMA] = ACTIONS(216),
        [anon_sym_DASH] = ACTIONS(216),
        [anon_sym_DOT] = ACTIONS(216),
        [anon_sym_SLASH] = ACTIONS(216),
        [anon_sym_COLON] = ACTIONS(216),
        [anon_sym_SEMI] = ACTIONS(216),
        [anon_sym_LT] = ACTIONS(216),
        [anon_sym_EQ] = ACTIONS(216),
        [anon_sym_GT] = ACTIONS(216),
        [anon_sym_QMARK] = ACTIONS(216),
        [anon_sym_AT] = ACTIONS(216),
        [anon_sym_LBRACK] = ACTIONS(216),
        [anon_sym_BSLASH] = ACTIONS(216),
        [anon_sym_RBRACK] = ACTIONS(216),
        [anon_sym_CARET] = ACTIONS(216),
        [anon_sym__] = ACTIONS(216),
        [anon_sym_BQUOTE] = ACTIONS(216),
        [anon_sym_PIPE] = ACTIONS(216),
        [anon_sym_TILDE] = ACTIONS(216),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(216),
        [anon_sym_anchor] = ACTIONS(216),
        [sym_email] = ACTIONS(216),
        [anon_sym_footnote] = ACTIONS(216),
        [anon_sym_footnoteref] = ACTIONS(216),
        [anon_sym_image] = ACTIONS(216),
        [anon_sym_icon] = ACTIONS(216),
        [anon_sym_kbd] = ACTIONS(216),
        [anon_sym_btn] = ACTIONS(216),
        [anon_sym_http] = ACTIONS(216),
        [anon_sym_https] = ACTIONS(216),
        [anon_sym_file] = ACTIONS(216),
        [anon_sym_ftp] = ACTIONS(216),
        [anon_sym_irc] = ACTIONS(216),
        [anon_sym_link] = ACTIONS(216),
        [anon_sym_mailto] = ACTIONS(216),
        [anon_sym_stem] = ACTIONS(216),
        [anon_sym_latexmath] = ACTIONS(216),
        [anon_sym_asciimath] = ACTIONS(216),
        [anon_sym_menu] = ACTIONS(216),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(216),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(216),
        [anon_sym_pass] = ACTIONS(216),
        [anon_sym_LT_LT] = ACTIONS(216),
        [anon_sym_xref] = ACTIONS(216),
        [anon_sym_STAR2] = ACTIONS(216),
        [anon_sym_STAR_STAR] = ACTIONS(216),
        [anon_sym__2] = ACTIONS(216),
        [anon_sym___] = ACTIONS(216),
        [anon_sym_BQUOTE2] = ACTIONS(216),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(216),
        [anon_sym_POUND2] = ACTIONS(216),
        [anon_sym_POUND_POUND] = ACTIONS(216),
    },
    [24] = {
        [ts_builtin_sym_end] = ACTIONS(218),
        [anon_sym_LBRACE] = ACTIONS(220),
        [anon_sym_RBRACE] = ACTIONS(220),
        [sym__word_no_digit] = ACTIONS(220),
        [sym__digits] = ACTIONS(220),
        [anon_sym_BANG] = ACTIONS(220),
        [anon_sym_DQUOTE] = ACTIONS(220),
        [anon_sym_POUND] = ACTIONS(220),
        [anon_sym_DOLLAR] = ACTIONS(220),
        [anon_sym_PERCENT] = ACTIONS(220),
        [anon_sym_AMP] = ACTIONS(220),
        [anon_sym_SQUOTE] = ACTIONS(220),
        [anon_sym_LPAREN] = ACTIONS(220),
        [anon_sym_RPAREN] = ACTIONS(220),
        [anon_sym_STAR] = ACTIONS(220),
        [anon_sym_PLUS] = ACTIONS(220),
        [anon_sym_COMMA] = ACTIONS(220),
        [anon_sym_DASH] = ACTIONS(220),
        [anon_sym_DOT] = ACTIONS(220),
        [anon_sym_SLASH] = ACTIONS(220),
        [anon_sym_COLON] = ACTIONS(220),
        [anon_sym_SEMI] = ACTIONS(220),
        [anon_sym_LT] = ACTIONS(220),
        [anon_sym_EQ] = ACTIONS(220),
        [anon_sym_GT] = ACTIONS(220),
        [anon_sym_QMARK] = ACTIONS(220),
        [anon_sym_AT] = ACTIONS(220),
        [anon_sym_LBRACK] = ACTIONS(220),
        [anon_sym_BSLASH] = ACTIONS(220),
        [anon_sym_RBRACK] = ACTIONS(220),
        [anon_sym_CARET] = ACTIONS(220),
        [anon_sym__] = ACTIONS(220),
        [anon_sym_BQUOTE] = ACTIONS(220),
        [anon_sym_PIPE] = ACTIONS(220),
        [anon_sym_TILDE] = ACTIONS(220),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(220),
        [anon_sym_anchor] = ACTIONS(220),
        [sym_email] = ACTIONS(220),
        [anon_sym_footnote] = ACTIONS(220),
        [anon_sym_footnoteref] = ACTIONS(220),
        [anon_sym_image] = ACTIONS(220),
        [anon_sym_icon] = ACTIONS(220),
        [anon_sym_kbd] = ACTIONS(220),
        [anon_sym_btn] = ACTIONS(220),
        [anon_sym_http] = ACTIONS(220),
        [anon_sym_https] = ACTIONS(220),
        [anon_sym_file] = ACTIONS(220),
        [anon_sym_ftp] = ACTIONS(220),
        [anon_sym_irc] = ACTIONS(220),
        [anon_sym_link] = ACTIONS(220),
        [anon_sym_mailto] = ACTIONS(220),
        [anon_sym_stem] = ACTIONS(220),
        [anon_sym_latexmath] = ACTIONS(220),
        [anon_sym_asciimath] = ACTIONS(220),
        [anon_sym_menu] = ACTIONS(220),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(220),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(220),
        [anon_sym_pass] = ACTIONS(220),
        [anon_sym_LT_LT] = ACTIONS(220),
        [anon_sym_xref] = ACTIONS(220),
        [anon_sym_STAR2] = ACTIONS(220),
        [anon_sym_STAR_STAR] = ACTIONS(220),
        [anon_sym__2] = ACTIONS(220),
        [anon_sym___] = ACTIONS(220),
        [anon_sym_BQUOTE2] = ACTIONS(220),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(220),
        [anon_sym_POUND2] = ACTIONS(220),
        [anon_sym_POUND_POUND] = ACTIONS(220),
    },
    [25] = {
        [ts_builtin_sym_end] = ACTIONS(222),
        [anon_sym_LBRACE] = ACTIONS(224),
        [anon_sym_RBRACE] = ACTIONS(224),
        [sym__word_no_digit] = ACTIONS(224),
        [sym__digits] = ACTIONS(224),
        [anon_sym_BANG] = ACTIONS(224),
        [anon_sym_DQUOTE] = ACTIONS(224),
        [anon_sym_POUND] = ACTIONS(224),
        [anon_sym_DOLLAR] = ACTIONS(224),
        [anon_sym_PERCENT] = ACTIONS(224),
        [anon_sym_AMP] = ACTIONS(224),
        [anon_sym_SQUOTE] = ACTIONS(224),
        [anon_sym_LPAREN] = ACTIONS(224),
        [anon_sym_RPAREN] = ACTIONS(224),
        [anon_sym_STAR] = ACTIONS(224),
        [anon_sym_PLUS] = ACTIONS(224),
        [anon_sym_COMMA] = ACTIONS(224),
        [anon_sym_DASH] = ACTIONS(224),
        [anon_sym_DOT] = ACTIONS(224),
        [anon_sym_SLASH] = ACTIONS(224),
        [anon_sym_COLON] = ACTIONS(224),
        [anon_sym_SEMI] = ACTIONS(224),
        [anon_sym_LT] = ACTIONS(224),
        [anon_sym_EQ] = ACTIONS(224),
        [anon_sym_GT] = ACTIONS(224),
        [anon_sym_QMARK] = ACTIONS(224),
        [anon_sym_AT] = ACTIONS(224),
        [anon_sym_LBRACK] = ACTIONS(224),
        [anon_sym_BSLASH] = ACTIONS(224),
        [anon_sym_RBRACK] = ACTIONS(224),
        [anon_sym_CARET] = ACTIONS(224),
        [anon_sym__] = ACTIONS(224),
        [anon_sym_BQUOTE] = ACTIONS(224),
        [anon_sym_PIPE] = ACTIONS(224),
        [anon_sym_TILDE] = ACTIONS(224),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(224),
        [anon_sym_anchor] = ACTIONS(224),
        [sym_email] = ACTIONS(224),
        [anon_sym_footnote] = ACTIONS(224),
        [anon_sym_footnoteref] = ACTIONS(224),
        [anon_sym_image] = ACTIONS(224),
        [anon_sym_icon] = ACTIONS(224),
        [anon_sym_kbd] = ACTIONS(224),
        [anon_sym_btn] = ACTIONS(224),
        [anon_sym_http] = ACTIONS(224),
        [anon_sym_https] = ACTIONS(224),
        [anon_sym_file] = ACTIONS(224),
        [anon_sym_ftp] = ACTIONS(224),
        [anon_sym_irc] = ACTIONS(224),
        [anon_sym_link] = ACTIONS(224),
        [anon_sym_mailto] = ACTIONS(224),
        [anon_sym_stem] = ACTIONS(224),
        [anon_sym_latexmath] = ACTIONS(224),
        [anon_sym_asciimath] = ACTIONS(224),
        [anon_sym_menu] = ACTIONS(224),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(224),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(224),
        [anon_sym_pass] = ACTIONS(224),
        [anon_sym_LT_LT] = ACTIONS(224),
        [anon_sym_xref] = ACTIONS(224),
        [anon_sym_STAR2] = ACTIONS(224),
        [anon_sym_STAR_STAR] = ACTIONS(224),
        [anon_sym__2] = ACTIONS(224),
        [anon_sym___] = ACTIONS(224),
        [anon_sym_BQUOTE2] = ACTIONS(224),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(224),
        [anon_sym_POUND2] = ACTIONS(224),
        [anon_sym_POUND_POUND] = ACTIONS(224),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(226),
        [anon_sym_LBRACE] = ACTIONS(228),
        [anon_sym_RBRACE] = ACTIONS(228),
        [sym__word_no_digit] = ACTIONS(228),
        [sym__digits] = ACTIONS(228),
        [anon_sym_BANG] = ACTIONS(228),
        [anon_sym_DQUOTE] = ACTIONS(228),
        [anon_sym_POUND] = ACTIONS(228),
        [anon_sym_DOLLAR] = ACTIONS(228),
        [anon_sym_PERCENT] = ACTIONS(228),
        [anon_sym_AMP] = ACTIONS(228),
        [anon_sym_SQUOTE] = ACTIONS(228),
        [anon_sym_LPAREN] = ACTIONS(228),
        [anon_sym_RPAREN] = ACTIONS(228),
        [anon_sym_STAR] = ACTIONS(228),
        [anon_sym_PLUS] = ACTIONS(228),
        [anon_sym_COMMA] = ACTIONS(228),
        [anon_sym_DASH] = ACTIONS(228),
        [anon_sym_DOT] = ACTIONS(228),
        [anon_sym_SLASH] = ACTIONS(228),
        [anon_sym_COLON] = ACTIONS(228),
        [anon_sym_SEMI] = ACTIONS(228),
        [anon_sym_LT] = ACTIONS(228),
        [anon_sym_EQ] = ACTIONS(228),
        [anon_sym_GT] = ACTIONS(228),
        [anon_sym_QMARK] = ACTIONS(228),
        [anon_sym_AT] = ACTIONS(228),
        [anon_sym_LBRACK] = ACTIONS(228),
        [anon_sym_BSLASH] = ACTIONS(228),
        [anon_sym_RBRACK] = ACTIONS(228),
        [anon_sym_CARET] = ACTIONS(228),
        [anon_sym__] = ACTIONS(228),
        [anon_sym_BQUOTE] = ACTIONS(228),
        [anon_sym_PIPE] = ACTIONS(228),
        [anon_sym_TILDE] = ACTIONS(228),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(228),
        [anon_sym_anchor] = ACTIONS(228),
        [sym_email] = ACTIONS(228),
        [anon_sym_footnote] = ACTIONS(228),
        [anon_sym_footnoteref] = ACTIONS(228),
        [anon_sym_image] = ACTIONS(228),
        [anon_sym_icon] = ACTIONS(228),
        [anon_sym_kbd] = ACTIONS(228),
        [anon_sym_btn] = ACTIONS(228),
        [anon_sym_http] = ACTIONS(228),
        [anon_sym_https] = ACTIONS(228),
        [anon_sym_file] = ACTIONS(228),
        [anon_sym_ftp] = ACTIONS(228),
        [anon_sym_irc] = ACTIONS(228),
        [anon_sym_link] = ACTIONS(228),
        [anon_sym_mailto] = ACTIONS(228),
        [anon_sym_stem] = ACTIONS(228),
        [anon_sym_latexmath] = ACTIONS(228),
        [anon_sym_asciimath] = ACTIONS(228),
        [anon_sym_menu] = ACTIONS(228),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(228),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(228),
        [anon_sym_pass] = ACTIONS(228),
        [anon_sym_LT_LT] = ACTIONS(228),
        [anon_sym_xref] = ACTIONS(228),
        [anon_sym_STAR2] = ACTIONS(228),
        [anon_sym_STAR_STAR] = ACTIONS(228),
        [anon_sym__2] = ACTIONS(228),
        [anon_sym___] = ACTIONS(228),
        [anon_sym_BQUOTE2] = ACTIONS(228),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(228),
        [anon_sym_POUND2] = ACTIONS(228),
        [anon_sym_POUND_POUND] = ACTIONS(228),
    },
    [27] = {
        [ts_builtin_sym_end] = ACTIONS(230),
        [anon_sym_LBRACE] = ACTIONS(232),
        [anon_sym_RBRACE] = ACTIONS(232),
        [sym__word_no_digit] = ACTIONS(232),
        [sym__digits] = ACTIONS(232),
        [anon_sym_BANG] = ACTIONS(232),
        [anon_sym_DQUOTE] = ACTIONS(232),
        [anon_sym_POUND] = ACTIONS(232),
        [anon_sym_DOLLAR] = ACTIONS(232),
        [anon_sym_PERCENT] = ACTIONS(232),
        [anon_sym_AMP] = ACTIONS(232),
        [anon_sym_SQUOTE] = ACTIONS(232),
        [anon_sym_LPAREN] = ACTIONS(232),
        [anon_sym_RPAREN] = ACTIONS(232),
        [anon_sym_STAR] = ACTIONS(232),
        [anon_sym_PLUS] = ACTIONS(232),
        [anon_sym_COMMA] = ACTIONS(232),
        [anon_sym_DASH] = ACTIONS(232),
        [anon_sym_DOT] = ACTIONS(232),
        [anon_sym_SLASH] = ACTIONS(232),
        [anon_sym_COLON] = ACTIONS(232),
        [anon_sym_SEMI] = ACTIONS(232),
        [anon_sym_LT] = ACTIONS(232),
        [anon_sym_EQ] = ACTIONS(232),
        [anon_sym_GT] = ACTIONS(232),
        [anon_sym_QMARK] = ACTIONS(232),
        [anon_sym_AT] = ACTIONS(232),
        [anon_sym_LBRACK] = ACTIONS(232),
        [anon_sym_BSLASH] = ACTIONS(232),
        [anon_sym_RBRACK] = ACTIONS(232),
        [anon_sym_CARET] = ACTIONS(232),
        [anon_sym__] = ACTIONS(232),
        [anon_sym_BQUOTE] = ACTIONS(232),
        [anon_sym_PIPE] = ACTIONS(232),
        [anon_sym_TILDE] = ACTIONS(232),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(232),
        [anon_sym_anchor] = ACTIONS(232),
        [sym_email] = ACTIONS(232),
        [anon_sym_footnote] = ACTIONS(232),
        [anon_sym_footnoteref] = ACTIONS(232),
        [anon_sym_image] = ACTIONS(232),
        [anon_sym_icon] = ACTIONS(232),
        [anon_sym_kbd] = ACTIONS(232),
        [anon_sym_btn] = ACTIONS(232),
        [anon_sym_http] = ACTIONS(232),
        [anon_sym_https] = ACTIONS(232),
        [anon_sym_file] = ACTIONS(232),
        [anon_sym_ftp] = ACTIONS(232),
        [anon_sym_irc] = ACTIONS(232),
        [anon_sym_link] = ACTIONS(232),
        [anon_sym_mailto] = ACTIONS(232),
        [anon_sym_stem] = ACTIONS(232),
        [anon_sym_latexmath] = ACTIONS(232),
        [anon_sym_asciimath] = ACTIONS(232),
        [anon_sym_menu] = ACTIONS(232),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(232),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(232),
        [anon_sym_pass] = ACTIONS(232),
        [anon_sym_LT_LT] = ACTIONS(232),
        [anon_sym_xref] = ACTIONS(232),
        [anon_sym_STAR2] = ACTIONS(232),
        [anon_sym_STAR_STAR] = ACTIONS(232),
        [anon_sym__2] = ACTIONS(232),
        [anon_sym___] = ACTIONS(232),
        [anon_sym_BQUOTE2] = ACTIONS(232),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(232),
        [anon_sym_POUND2] = ACTIONS(232),
        [anon_sym_POUND_POUND] = ACTIONS(232),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(234),
        [anon_sym_LBRACE] = ACTIONS(236),
        [anon_sym_RBRACE] = ACTIONS(236),
        [sym__word_no_digit] = ACTIONS(236),
        [sym__digits] = ACTIONS(236),
        [anon_sym_BANG] = ACTIONS(236),
        [anon_sym_DQUOTE] = ACTIONS(236),
        [anon_sym_POUND] = ACTIONS(236),
        [anon_sym_DOLLAR] = ACTIONS(236),
        [anon_sym_PERCENT] = ACTIONS(236),
        [anon_sym_AMP] = ACTIONS(236),
        [anon_sym_SQUOTE] = ACTIONS(236),
        [anon_sym_LPAREN] = ACTIONS(236),
        [anon_sym_RPAREN] = ACTIONS(236),
        [anon_sym_STAR] = ACTIONS(236),
        [anon_sym_PLUS] = ACTIONS(236),
        [anon_sym_COMMA] = ACTIONS(236),
        [anon_sym_DASH] = ACTIONS(236),
        [anon_sym_DOT] = ACTIONS(236),
        [anon_sym_SLASH] = ACTIONS(236),
        [anon_sym_COLON] = ACTIONS(236),
        [anon_sym_SEMI] = ACTIONS(236),
        [anon_sym_LT] = ACTIONS(236),
        [anon_sym_EQ] = ACTIONS(236),
        [anon_sym_GT] = ACTIONS(236),
        [anon_sym_QMARK] = ACTIONS(236),
        [anon_sym_AT] = ACTIONS(236),
        [anon_sym_LBRACK] = ACTIONS(238),
        [anon_sym_BSLASH] = ACTIONS(236),
        [anon_sym_RBRACK] = ACTIONS(236),
        [anon_sym_CARET] = ACTIONS(236),
        [anon_sym__] = ACTIONS(236),
        [anon_sym_BQUOTE] = ACTIONS(236),
        [anon_sym_PIPE] = ACTIONS(236),
        [anon_sym_TILDE] = ACTIONS(236),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(236),
        [anon_sym_anchor] = ACTIONS(236),
        [sym_email] = ACTIONS(236),
        [anon_sym_footnote] = ACTIONS(236),
        [anon_sym_footnoteref] = ACTIONS(236),
        [anon_sym_image] = ACTIONS(236),
        [anon_sym_icon] = ACTIONS(236),
        [anon_sym_kbd] = ACTIONS(236),
        [anon_sym_btn] = ACTIONS(236),
        [anon_sym_http] = ACTIONS(236),
        [anon_sym_https] = ACTIONS(236),
        [anon_sym_file] = ACTIONS(236),
        [anon_sym_ftp] = ACTIONS(236),
        [anon_sym_irc] = ACTIONS(236),
        [anon_sym_link] = ACTIONS(236),
        [anon_sym_mailto] = ACTIONS(236),
        [anon_sym_stem] = ACTIONS(236),
        [anon_sym_latexmath] = ACTIONS(236),
        [anon_sym_asciimath] = ACTIONS(236),
        [anon_sym_menu] = ACTIONS(236),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(236),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(236),
        [anon_sym_pass] = ACTIONS(236),
        [anon_sym_LT_LT] = ACTIONS(236),
        [anon_sym_xref] = ACTIONS(236),
        [anon_sym_STAR2] = ACTIONS(236),
        [anon_sym_STAR_STAR] = ACTIONS(236),
        [anon_sym__2] = ACTIONS(236),
        [anon_sym___] = ACTIONS(236),
        [anon_sym_BQUOTE2] = ACTIONS(236),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(236),
        [anon_sym_POUND2] = ACTIONS(236),
        [anon_sym_POUND_POUND] = ACTIONS(236),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(240),
        [anon_sym_LBRACE] = ACTIONS(242),
        [anon_sym_RBRACE] = ACTIONS(242),
        [sym__word_no_digit] = ACTIONS(242),
        [sym__digits] = ACTIONS(242),
        [anon_sym_BANG] = ACTIONS(242),
        [anon_sym_DQUOTE] = ACTIONS(242),
        [anon_sym_POUND] = ACTIONS(242),
        [anon_sym_DOLLAR] = ACTIONS(242),
        [anon_sym_PERCENT] = ACTIONS(242),
        [anon_sym_AMP] = ACTIONS(242),
        [anon_sym_SQUOTE] = ACTIONS(242),
        [anon_sym_LPAREN] = ACTIONS(242),
        [anon_sym_RPAREN] = ACTIONS(242),
        [anon_sym_STAR] = ACTIONS(242),
        [anon_sym_PLUS] = ACTIONS(242),
        [anon_sym_COMMA] = ACTIONS(242),
        [anon_sym_DASH] = ACTIONS(242),
        [anon_sym_DOT] = ACTIONS(242),
        [anon_sym_SLASH] = ACTIONS(242),
        [anon_sym_COLON] = ACTIONS(242),
        [anon_sym_SEMI] = ACTIONS(242),
        [anon_sym_LT] = ACTIONS(242),
        [anon_sym_EQ] = ACTIONS(242),
        [anon_sym_GT] = ACTIONS(242),
        [anon_sym_QMARK] = ACTIONS(242),
        [anon_sym_AT] = ACTIONS(242),
        [anon_sym_LBRACK] = ACTIONS(242),
        [anon_sym_BSLASH] = ACTIONS(242),
        [anon_sym_RBRACK] = ACTIONS(242),
        [anon_sym_CARET] = ACTIONS(242),
        [anon_sym__] = ACTIONS(242),
        [anon_sym_BQUOTE] = ACTIONS(242),
        [anon_sym_PIPE] = ACTIONS(242),
        [anon_sym_TILDE] = ACTIONS(242),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(242),
        [anon_sym_anchor] = ACTIONS(242),
        [sym_email] = ACTIONS(242),
        [anon_sym_footnote] = ACTIONS(242),
        [anon_sym_footnoteref] = ACTIONS(242),
        [anon_sym_image] = ACTIONS(242),
        [anon_sym_icon] = ACTIONS(242),
        [anon_sym_kbd] = ACTIONS(242),
        [anon_sym_btn] = ACTIONS(242),
        [anon_sym_http] = ACTIONS(242),
        [anon_sym_https] = ACTIONS(242),
        [anon_sym_file] = ACTIONS(242),
        [anon_sym_ftp] = ACTIONS(242),
        [anon_sym_irc] = ACTIONS(242),
        [anon_sym_link] = ACTIONS(242),
        [anon_sym_mailto] = ACTIONS(242),
        [anon_sym_stem] = ACTIONS(242),
        [anon_sym_latexmath] = ACTIONS(242),
        [anon_sym_asciimath] = ACTIONS(242),
        [anon_sym_menu] = ACTIONS(242),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(242),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(242),
        [anon_sym_pass] = ACTIONS(242),
        [anon_sym_LT_LT] = ACTIONS(242),
        [anon_sym_xref] = ACTIONS(242),
        [anon_sym_STAR2] = ACTIONS(242),
        [anon_sym_STAR_STAR] = ACTIONS(242),
        [anon_sym__2] = ACTIONS(242),
        [anon_sym___] = ACTIONS(242),
        [anon_sym_BQUOTE2] = ACTIONS(242),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(242),
        [anon_sym_POUND2] = ACTIONS(242),
        [anon_sym_POUND_POUND] = ACTIONS(242),
    },
    [30] = {
        [ts_builtin_sym_end] = ACTIONS(244),
        [anon_sym_LBRACE] = ACTIONS(246),
        [anon_sym_RBRACE] = ACTIONS(246),
        [sym__word_no_digit] = ACTIONS(246),
        [sym__digits] = ACTIONS(246),
        [anon_sym_BANG] = ACTIONS(246),
        [anon_sym_DQUOTE] = ACTIONS(246),
        [anon_sym_POUND] = ACTIONS(246),
        [anon_sym_DOLLAR] = ACTIONS(246),
        [anon_sym_PERCENT] = ACTIONS(246),
        [anon_sym_AMP] = ACTIONS(246),
        [anon_sym_SQUOTE] = ACTIONS(246),
        [anon_sym_LPAREN] = ACTIONS(246),
        [anon_sym_RPAREN] = ACTIONS(246),
        [anon_sym_STAR] = ACTIONS(246),
        [anon_sym_PLUS] = ACTIONS(246),
        [anon_sym_COMMA] = ACTIONS(246),
        [anon_sym_DASH] = ACTIONS(246),
        [anon_sym_DOT] = ACTIONS(246),
        [anon_sym_SLASH] = ACTIONS(246),
        [anon_sym_COLON] = ACTIONS(246),
        [anon_sym_SEMI] = ACTIONS(246),
        [anon_sym_LT] = ACTIONS(246),
        [anon_sym_EQ] = ACTIONS(246),
        [anon_sym_GT] = ACTIONS(246),
        [anon_sym_QMARK] = ACTIONS(246),
        [anon_sym_AT] = ACTIONS(246),
        [anon_sym_LBRACK] = ACTIONS(246),
        [anon_sym_BSLASH] = ACTIONS(246),
        [anon_sym_RBRACK] = ACTIONS(246),
        [anon_sym_CARET] = ACTIONS(246),
        [anon_sym__] = ACTIONS(246),
        [anon_sym_BQUOTE] = ACTIONS(246),
        [anon_sym_PIPE] = ACTIONS(246),
        [anon_sym_TILDE] = ACTIONS(246),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(246),
        [anon_sym_anchor] = ACTIONS(246),
        [sym_email] = ACTIONS(246),
        [anon_sym_footnote] = ACTIONS(246),
        [anon_sym_footnoteref] = ACTIONS(246),
        [anon_sym_image] = ACTIONS(246),
        [anon_sym_icon] = ACTIONS(246),
        [anon_sym_kbd] = ACTIONS(246),
        [anon_sym_btn] = ACTIONS(246),
        [anon_sym_http] = ACTIONS(246),
        [anon_sym_https] = ACTIONS(246),
        [anon_sym_file] = ACTIONS(246),
        [anon_sym_ftp] = ACTIONS(246),
        [anon_sym_irc] = ACTIONS(246),
        [anon_sym_link] = ACTIONS(246),
        [anon_sym_mailto] = ACTIONS(246),
        [anon_sym_stem] = ACTIONS(246),
        [anon_sym_latexmath] = ACTIONS(246),
        [anon_sym_asciimath] = ACTIONS(246),
        [anon_sym_menu] = ACTIONS(246),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(246),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(246),
        [anon_sym_pass] = ACTIONS(246),
        [anon_sym_LT_LT] = ACTIONS(246),
        [anon_sym_xref] = ACTIONS(246),
        [anon_sym_STAR2] = ACTIONS(246),
        [anon_sym_STAR_STAR] = ACTIONS(246),
        [anon_sym__2] = ACTIONS(246),
        [anon_sym___] = ACTIONS(246),
        [anon_sym_BQUOTE2] = ACTIONS(246),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(246),
        [anon_sym_POUND2] = ACTIONS(246),
        [anon_sym_POUND_POUND] = ACTIONS(246),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(248),
        [anon_sym_LBRACE] = ACTIONS(250),
        [anon_sym_RBRACE] = ACTIONS(250),
        [sym__word_no_digit] = ACTIONS(250),
        [sym__digits] = ACTIONS(250),
        [anon_sym_BANG] = ACTIONS(250),
        [anon_sym_DQUOTE] = ACTIONS(250),
        [anon_sym_POUND] = ACTIONS(250),
        [anon_sym_DOLLAR] = ACTIONS(250),
        [anon_sym_PERCENT] = ACTIONS(250),
        [anon_sym_AMP] = ACTIONS(250),
        [anon_sym_SQUOTE] = ACTIONS(250),
        [anon_sym_LPAREN] = ACTIONS(250),
        [anon_sym_RPAREN] = ACTIONS(250),
        [anon_sym_STAR] = ACTIONS(250),
        [anon_sym_PLUS] = ACTIONS(250),
        [anon_sym_COMMA] = ACTIONS(250),
        [anon_sym_DASH] = ACTIONS(250),
        [anon_sym_DOT] = ACTIONS(250),
        [anon_sym_SLASH] = ACTIONS(250),
        [anon_sym_COLON] = ACTIONS(250),
        [anon_sym_SEMI] = ACTIONS(250),
        [anon_sym_LT] = ACTIONS(250),
        [anon_sym_EQ] = ACTIONS(250),
        [anon_sym_GT] = ACTIONS(250),
        [anon_sym_QMARK] = ACTIONS(250),
        [anon_sym_AT] = ACTIONS(250),
        [anon_sym_LBRACK] = ACTIONS(250),
        [anon_sym_BSLASH] = ACTIONS(250),
        [anon_sym_RBRACK] = ACTIONS(250),
        [anon_sym_CARET] = ACTIONS(250),
        [anon_sym__] = ACTIONS(250),
        [anon_sym_BQUOTE] = ACTIONS(250),
        [anon_sym_PIPE] = ACTIONS(250),
        [anon_sym_TILDE] = ACTIONS(250),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(250),
        [anon_sym_anchor] = ACTIONS(250),
        [sym_email] = ACTIONS(250),
        [anon_sym_footnote] = ACTIONS(250),
        [anon_sym_footnoteref] = ACTIONS(250),
        [anon_sym_image] = ACTIONS(250),
        [anon_sym_icon] = ACTIONS(250),
        [anon_sym_kbd] = ACTIONS(250),
        [anon_sym_btn] = ACTIONS(250),
        [anon_sym_http] = ACTIONS(250),
        [anon_sym_https] = ACTIONS(250),
        [anon_sym_file] = ACTIONS(250),
        [anon_sym_ftp] = ACTIONS(250),
        [anon_sym_irc] = ACTIONS(250),
        [anon_sym_link] = ACTIONS(250),
        [anon_sym_mailto] = ACTIONS(250),
        [anon_sym_stem] = ACTIONS(250),
        [anon_sym_latexmath] = ACTIONS(250),
        [anon_sym_asciimath] = ACTIONS(250),
        [anon_sym_menu] = ACTIONS(250),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(250),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(250),
        [anon_sym_pass] = ACTIONS(250),
        [anon_sym_LT_LT] = ACTIONS(250),
        [anon_sym_xref] = ACTIONS(250),
        [anon_sym_STAR2] = ACTIONS(250),
        [anon_sym_STAR_STAR] = ACTIONS(250),
        [anon_sym__2] = ACTIONS(250),
        [anon_sym___] = ACTIONS(250),
        [anon_sym_BQUOTE2] = ACTIONS(250),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(250),
        [anon_sym_POUND2] = ACTIONS(250),
        [anon_sym_POUND_POUND] = ACTIONS(250),
    },
    [32] = {
        [ts_builtin_sym_end] = ACTIONS(252),
        [anon_sym_LBRACE] = ACTIONS(254),
        [anon_sym_RBRACE] = ACTIONS(254),
        [sym__word_no_digit] = ACTIONS(254),
        [sym__digits] = ACTIONS(254),
        [anon_sym_BANG] = ACTIONS(254),
        [anon_sym_DQUOTE] = ACTIONS(254),
        [anon_sym_POUND] = ACTIONS(254),
        [anon_sym_DOLLAR] = ACTIONS(254),
        [anon_sym_PERCENT] = ACTIONS(254),
        [anon_sym_AMP] = ACTIONS(254),
        [anon_sym_SQUOTE] = ACTIONS(254),
        [anon_sym_LPAREN] = ACTIONS(254),
        [anon_sym_RPAREN] = ACTIONS(254),
        [anon_sym_STAR] = ACTIONS(254),
        [anon_sym_PLUS] = ACTIONS(254),
        [anon_sym_COMMA] = ACTIONS(254),
        [anon_sym_DASH] = ACTIONS(254),
        [anon_sym_DOT] = ACTIONS(254),
        [anon_sym_SLASH] = ACTIONS(254),
        [anon_sym_COLON] = ACTIONS(254),
        [anon_sym_SEMI] = ACTIONS(254),
        [anon_sym_LT] = ACTIONS(254),
        [anon_sym_EQ] = ACTIONS(254),
        [anon_sym_GT] = ACTIONS(254),
        [anon_sym_QMARK] = ACTIONS(254),
        [anon_sym_AT] = ACTIONS(254),
        [anon_sym_LBRACK] = ACTIONS(254),
        [anon_sym_BSLASH] = ACTIONS(254),
        [anon_sym_RBRACK] = ACTIONS(254),
        [anon_sym_CARET] = ACTIONS(254),
        [anon_sym__] = ACTIONS(254),
        [anon_sym_BQUOTE] = ACTIONS(254),
        [anon_sym_PIPE] = ACTIONS(254),
        [anon_sym_TILDE] = ACTIONS(254),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(254),
        [anon_sym_anchor] = ACTIONS(254),
        [sym_email] = ACTIONS(254),
        [anon_sym_footnote] = ACTIONS(254),
        [anon_sym_footnoteref] = ACTIONS(254),
        [anon_sym_image] = ACTIONS(254),
        [anon_sym_icon] = ACTIONS(254),
        [anon_sym_kbd] = ACTIONS(254),
        [anon_sym_btn] = ACTIONS(254),
        [anon_sym_http] = ACTIONS(254),
        [anon_sym_https] = ACTIONS(254),
        [anon_sym_file] = ACTIONS(254),
        [anon_sym_ftp] = ACTIONS(254),
        [anon_sym_irc] = ACTIONS(254),
        [anon_sym_link] = ACTIONS(254),
        [anon_sym_mailto] = ACTIONS(254),
        [anon_sym_stem] = ACTIONS(254),
        [anon_sym_latexmath] = ACTIONS(254),
        [anon_sym_asciimath] = ACTIONS(254),
        [anon_sym_menu] = ACTIONS(254),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(254),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(254),
        [anon_sym_pass] = ACTIONS(254),
        [anon_sym_LT_LT] = ACTIONS(254),
        [anon_sym_xref] = ACTIONS(254),
        [anon_sym_STAR2] = ACTIONS(254),
        [anon_sym_STAR_STAR] = ACTIONS(254),
        [anon_sym__2] = ACTIONS(254),
        [anon_sym___] = ACTIONS(254),
        [anon_sym_BQUOTE2] = ACTIONS(254),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(254),
        [anon_sym_POUND2] = ACTIONS(254),
        [anon_sym_POUND_POUND] = ACTIONS(254),
    },
    [33] = {
        [ts_builtin_sym_end] = ACTIONS(256),
        [anon_sym_LBRACE] = ACTIONS(258),
        [anon_sym_RBRACE] = ACTIONS(258),
        [sym__word_no_digit] = ACTIONS(258),
        [sym__digits] = ACTIONS(258),
        [anon_sym_BANG] = ACTIONS(258),
        [anon_sym_DQUOTE] = ACTIONS(258),
        [anon_sym_POUND] = ACTIONS(258),
        [anon_sym_DOLLAR] = ACTIONS(258),
        [anon_sym_PERCENT] = ACTIONS(258),
        [anon_sym_AMP] = ACTIONS(258),
        [anon_sym_SQUOTE] = ACTIONS(258),
        [anon_sym_LPAREN] = ACTIONS(258),
        [anon_sym_RPAREN] = ACTIONS(258),
        [anon_sym_STAR] = ACTIONS(258),
        [anon_sym_PLUS] = ACTIONS(258),
        [anon_sym_COMMA] = ACTIONS(258),
        [anon_sym_DASH] = ACTIONS(258),
        [anon_sym_DOT] = ACTIONS(258),
        [anon_sym_SLASH] = ACTIONS(258),
        [anon_sym_COLON] = ACTIONS(258),
        [anon_sym_SEMI] = ACTIONS(258),
        [anon_sym_LT] = ACTIONS(258),
        [anon_sym_EQ] = ACTIONS(258),
        [anon_sym_GT] = ACTIONS(258),
        [anon_sym_QMARK] = ACTIONS(258),
        [anon_sym_AT] = ACTIONS(258),
        [anon_sym_LBRACK] = ACTIONS(258),
        [anon_sym_BSLASH] = ACTIONS(258),
        [anon_sym_RBRACK] = ACTIONS(258),
        [anon_sym_CARET] = ACTIONS(258),
        [anon_sym__] = ACTIONS(258),
        [anon_sym_BQUOTE] = ACTIONS(258),
        [anon_sym_PIPE] = ACTIONS(258),
        [anon_sym_TILDE] = ACTIONS(258),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(258),
        [anon_sym_anchor] = ACTIONS(258),
        [sym_email] = ACTIONS(258),
        [anon_sym_footnote] = ACTIONS(258),
        [anon_sym_footnoteref] = ACTIONS(258),
        [anon_sym_image] = ACTIONS(258),
        [anon_sym_icon] = ACTIONS(258),
        [anon_sym_kbd] = ACTIONS(258),
        [anon_sym_btn] = ACTIONS(258),
        [anon_sym_http] = ACTIONS(258),
        [anon_sym_https] = ACTIONS(258),
        [anon_sym_file] = ACTIONS(258),
        [anon_sym_ftp] = ACTIONS(258),
        [anon_sym_irc] = ACTIONS(258),
        [anon_sym_link] = ACTIONS(258),
        [anon_sym_mailto] = ACTIONS(258),
        [anon_sym_stem] = ACTIONS(258),
        [anon_sym_latexmath] = ACTIONS(258),
        [anon_sym_asciimath] = ACTIONS(258),
        [anon_sym_menu] = ACTIONS(258),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(258),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(258),
        [anon_sym_pass] = ACTIONS(258),
        [anon_sym_LT_LT] = ACTIONS(258),
        [anon_sym_xref] = ACTIONS(258),
        [anon_sym_STAR2] = ACTIONS(258),
        [anon_sym_STAR_STAR] = ACTIONS(258),
        [anon_sym__2] = ACTIONS(258),
        [anon_sym___] = ACTIONS(258),
        [anon_sym_BQUOTE2] = ACTIONS(258),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(258),
        [anon_sym_POUND2] = ACTIONS(258),
        [anon_sym_POUND_POUND] = ACTIONS(258),
    },
    [34] = {
        [ts_builtin_sym_end] = ACTIONS(260),
        [anon_sym_LBRACE] = ACTIONS(262),
        [anon_sym_RBRACE] = ACTIONS(262),
        [sym__word_no_digit] = ACTIONS(262),
        [sym__digits] = ACTIONS(262),
        [anon_sym_BANG] = ACTIONS(262),
        [anon_sym_DQUOTE] = ACTIONS(262),
        [anon_sym_POUND] = ACTIONS(262),
        [anon_sym_DOLLAR] = ACTIONS(262),
        [anon_sym_PERCENT] = ACTIONS(262),
        [anon_sym_AMP] = ACTIONS(262),
        [anon_sym_SQUOTE] = ACTIONS(262),
        [anon_sym_LPAREN] = ACTIONS(262),
        [anon_sym_RPAREN] = ACTIONS(262),
        [anon_sym_STAR] = ACTIONS(262),
        [anon_sym_PLUS] = ACTIONS(262),
        [anon_sym_COMMA] = ACTIONS(262),
        [anon_sym_DASH] = ACTIONS(262),
        [anon_sym_DOT] = ACTIONS(262),
        [anon_sym_SLASH] = ACTIONS(262),
        [anon_sym_COLON] = ACTIONS(262),
        [anon_sym_SEMI] = ACTIONS(262),
        [anon_sym_LT] = ACTIONS(262),
        [anon_sym_EQ] = ACTIONS(262),
        [anon_sym_GT] = ACTIONS(262),
        [anon_sym_QMARK] = ACTIONS(262),
        [anon_sym_AT] = ACTIONS(262),
        [anon_sym_LBRACK] = ACTIONS(262),
        [anon_sym_BSLASH] = ACTIONS(262),
        [anon_sym_RBRACK] = ACTIONS(262),
        [anon_sym_CARET] = ACTIONS(262),
        [anon_sym__] = ACTIONS(262),
        [anon_sym_BQUOTE] = ACTIONS(262),
        [anon_sym_PIPE] = ACTIONS(262),
        [anon_sym_TILDE] = ACTIONS(262),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(262),
        [anon_sym_anchor] = ACTIONS(262),
        [sym_email] = ACTIONS(262),
        [anon_sym_footnote] = ACTIONS(262),
        [anon_sym_footnoteref] = ACTIONS(262),
        [anon_sym_image] = ACTIONS(262),
        [anon_sym_icon] = ACTIONS(262),
        [anon_sym_kbd] = ACTIONS(262),
        [anon_sym_btn] = ACTIONS(262),
        [anon_sym_http] = ACTIONS(262),
        [anon_sym_https] = ACTIONS(262),
        [anon_sym_file] = ACTIONS(262),
        [anon_sym_ftp] = ACTIONS(262),
        [anon_sym_irc] = ACTIONS(262),
        [anon_sym_link] = ACTIONS(262),
        [anon_sym_mailto] = ACTIONS(262),
        [anon_sym_stem] = ACTIONS(262),
        [anon_sym_latexmath] = ACTIONS(262),
        [anon_sym_asciimath] = ACTIONS(262),
        [anon_sym_menu] = ACTIONS(262),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(262),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(262),
        [anon_sym_pass] = ACTIONS(262),
        [anon_sym_LT_LT] = ACTIONS(262),
        [anon_sym_xref] = ACTIONS(262),
        [anon_sym_STAR2] = ACTIONS(262),
        [anon_sym_STAR_STAR] = ACTIONS(262),
        [anon_sym__2] = ACTIONS(262),
        [anon_sym___] = ACTIONS(262),
        [anon_sym_BQUOTE2] = ACTIONS(262),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(262),
        [anon_sym_POUND2] = ACTIONS(262),
        [anon_sym_POUND_POUND] = ACTIONS(262),
    },
    [35] = {
        [ts_builtin_sym_end] = ACTIONS(264),
        [anon_sym_LBRACE] = ACTIONS(266),
        [anon_sym_RBRACE] = ACTIONS(266),
        [sym__word_no_digit] = ACTIONS(266),
        [sym__digits] = ACTIONS(266),
        [anon_sym_BANG] = ACTIONS(266),
        [anon_sym_DQUOTE] = ACTIONS(266),
        [anon_sym_POUND] = ACTIONS(266),
        [anon_sym_DOLLAR] = ACTIONS(266),
        [anon_sym_PERCENT] = ACTIONS(266),
        [anon_sym_AMP] = ACTIONS(266),
        [anon_sym_SQUOTE] = ACTIONS(266),
        [anon_sym_LPAREN] = ACTIONS(266),
        [anon_sym_RPAREN] = ACTIONS(266),
        [anon_sym_STAR] = ACTIONS(266),
        [anon_sym_PLUS] = ACTIONS(266),
        [anon_sym_COMMA] = ACTIONS(266),
        [anon_sym_DASH] = ACTIONS(266),
        [anon_sym_DOT] = ACTIONS(266),
        [anon_sym_SLASH] = ACTIONS(266),
        [anon_sym_COLON] = ACTIONS(266),
        [anon_sym_SEMI] = ACTIONS(266),
        [anon_sym_LT] = ACTIONS(266),
        [anon_sym_EQ] = ACTIONS(266),
        [anon_sym_GT] = ACTIONS(266),
        [anon_sym_QMARK] = ACTIONS(266),
        [anon_sym_AT] = ACTIONS(266),
        [anon_sym_LBRACK] = ACTIONS(266),
        [anon_sym_BSLASH] = ACTIONS(266),
        [anon_sym_RBRACK] = ACTIONS(266),
        [anon_sym_CARET] = ACTIONS(266),
        [anon_sym__] = ACTIONS(266),
        [anon_sym_BQUOTE] = ACTIONS(266),
        [anon_sym_PIPE] = ACTIONS(266),
        [anon_sym_TILDE] = ACTIONS(266),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(266),
        [anon_sym_anchor] = ACTIONS(266),
        [sym_email] = ACTIONS(266),
        [anon_sym_footnote] = ACTIONS(266),
        [anon_sym_footnoteref] = ACTIONS(266),
        [anon_sym_image] = ACTIONS(266),
        [anon_sym_icon] = ACTIONS(266),
        [anon_sym_kbd] = ACTIONS(266),
        [anon_sym_btn] = ACTIONS(266),
        [anon_sym_http] = ACTIONS(266),
        [anon_sym_https] = ACTIONS(266),
        [anon_sym_file] = ACTIONS(266),
        [anon_sym_ftp] = ACTIONS(266),
        [anon_sym_irc] = ACTIONS(266),
        [anon_sym_link] = ACTIONS(266),
        [anon_sym_mailto] = ACTIONS(266),
        [anon_sym_stem] = ACTIONS(266),
        [anon_sym_latexmath] = ACTIONS(266),
        [anon_sym_asciimath] = ACTIONS(266),
        [anon_sym_menu] = ACTIONS(266),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(266),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(266),
        [anon_sym_pass] = ACTIONS(266),
        [anon_sym_LT_LT] = ACTIONS(266),
        [anon_sym_xref] = ACTIONS(266),
        [anon_sym_STAR2] = ACTIONS(266),
        [anon_sym_STAR_STAR] = ACTIONS(266),
        [anon_sym__2] = ACTIONS(266),
        [anon_sym___] = ACTIONS(266),
        [anon_sym_BQUOTE2] = ACTIONS(266),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(266),
        [anon_sym_POUND2] = ACTIONS(266),
        [anon_sym_POUND_POUND] = ACTIONS(266),
    },
    [36] = {
        [ts_builtin_sym_end] = ACTIONS(268),
        [anon_sym_LBRACE] = ACTIONS(270),
        [anon_sym_RBRACE] = ACTIONS(270),
        [sym__word_no_digit] = ACTIONS(270),
        [sym__digits] = ACTIONS(270),
        [anon_sym_BANG] = ACTIONS(270),
        [anon_sym_DQUOTE] = ACTIONS(270),
        [anon_sym_POUND] = ACTIONS(270),
        [anon_sym_DOLLAR] = ACTIONS(270),
        [anon_sym_PERCENT] = ACTIONS(270),
        [anon_sym_AMP] = ACTIONS(270),
        [anon_sym_SQUOTE] = ACTIONS(270),
        [anon_sym_LPAREN] = ACTIONS(270),
        [anon_sym_RPAREN] = ACTIONS(270),
        [anon_sym_STAR] = ACTIONS(270),
        [anon_sym_PLUS] = ACTIONS(270),
        [anon_sym_COMMA] = ACTIONS(270),
        [anon_sym_DASH] = ACTIONS(270),
        [anon_sym_DOT] = ACTIONS(270),
        [anon_sym_SLASH] = ACTIONS(270),
        [anon_sym_COLON] = ACTIONS(270),
        [anon_sym_SEMI] = ACTIONS(270),
        [anon_sym_LT] = ACTIONS(270),
        [anon_sym_EQ] = ACTIONS(270),
        [anon_sym_GT] = ACTIONS(270),
        [anon_sym_QMARK] = ACTIONS(270),
        [anon_sym_AT] = ACTIONS(270),
        [anon_sym_LBRACK] = ACTIONS(270),
        [anon_sym_BSLASH] = ACTIONS(270),
        [anon_sym_RBRACK] = ACTIONS(270),
        [anon_sym_CARET] = ACTIONS(270),
        [anon_sym__] = ACTIONS(270),
        [anon_sym_BQUOTE] = ACTIONS(270),
        [anon_sym_PIPE] = ACTIONS(270),
        [anon_sym_TILDE] = ACTIONS(270),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(270),
        [anon_sym_anchor] = ACTIONS(270),
        [sym_email] = ACTIONS(270),
        [anon_sym_footnote] = ACTIONS(270),
        [anon_sym_footnoteref] = ACTIONS(270),
        [anon_sym_image] = ACTIONS(270),
        [anon_sym_icon] = ACTIONS(270),
        [anon_sym_kbd] = ACTIONS(270),
        [anon_sym_btn] = ACTIONS(270),
        [anon_sym_http] = ACTIONS(270),
        [anon_sym_https] = ACTIONS(270),
        [anon_sym_file] = ACTIONS(270),
        [anon_sym_ftp] = ACTIONS(270),
        [anon_sym_irc] = ACTIONS(270),
        [anon_sym_link] = ACTIONS(270),
        [anon_sym_mailto] = ACTIONS(270),
        [anon_sym_stem] = ACTIONS(270),
        [anon_sym_latexmath] = ACTIONS(270),
        [anon_sym_asciimath] = ACTIONS(270),
        [anon_sym_menu] = ACTIONS(270),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(270),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(270),
        [anon_sym_pass] = ACTIONS(270),
        [anon_sym_LT_LT] = ACTIONS(270),
        [anon_sym_xref] = ACTIONS(270),
        [anon_sym_STAR2] = ACTIONS(270),
        [anon_sym_STAR_STAR] = ACTIONS(270),
        [anon_sym__2] = ACTIONS(270),
        [anon_sym___] = ACTIONS(270),
        [anon_sym_BQUOTE2] = ACTIONS(270),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(270),
        [anon_sym_POUND2] = ACTIONS(270),
        [anon_sym_POUND_POUND] = ACTIONS(270),
    },
    [37] = {
        [ts_builtin_sym_end] = ACTIONS(272),
        [anon_sym_LBRACE] = ACTIONS(274),
        [anon_sym_RBRACE] = ACTIONS(274),
        [sym__word_no_digit] = ACTIONS(274),
        [sym__digits] = ACTIONS(274),
        [anon_sym_BANG] = ACTIONS(274),
        [anon_sym_DQUOTE] = ACTIONS(274),
        [anon_sym_POUND] = ACTIONS(274),
        [anon_sym_DOLLAR] = ACTIONS(274),
        [anon_sym_PERCENT] = ACTIONS(274),
        [anon_sym_AMP] = ACTIONS(274),
        [anon_sym_SQUOTE] = ACTIONS(274),
        [anon_sym_LPAREN] = ACTIONS(274),
        [anon_sym_RPAREN] = ACTIONS(274),
        [anon_sym_STAR] = ACTIONS(274),
        [anon_sym_PLUS] = ACTIONS(274),
        [anon_sym_COMMA] = ACTIONS(274),
        [anon_sym_DASH] = ACTIONS(274),
        [anon_sym_DOT] = ACTIONS(274),
        [anon_sym_SLASH] = ACTIONS(274),
        [anon_sym_COLON] = ACTIONS(274),
        [anon_sym_SEMI] = ACTIONS(274),
        [anon_sym_LT] = ACTIONS(274),
        [anon_sym_EQ] = ACTIONS(274),
        [anon_sym_GT] = ACTIONS(274),
        [anon_sym_QMARK] = ACTIONS(274),
        [anon_sym_AT] = ACTIONS(274),
        [anon_sym_LBRACK] = ACTIONS(274),
        [anon_sym_BSLASH] = ACTIONS(274),
        [anon_sym_RBRACK] = ACTIONS(274),
        [anon_sym_CARET] = ACTIONS(274),
        [anon_sym__] = ACTIONS(274),
        [anon_sym_BQUOTE] = ACTIONS(274),
        [anon_sym_PIPE] = ACTIONS(274),
        [anon_sym_TILDE] = ACTIONS(274),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(274),
        [anon_sym_anchor] = ACTIONS(274),
        [sym_email] = ACTIONS(274),
        [anon_sym_footnote] = ACTIONS(274),
        [anon_sym_footnoteref] = ACTIONS(274),
        [anon_sym_image] = ACTIONS(274),
        [anon_sym_icon] = ACTIONS(274),
        [anon_sym_kbd] = ACTIONS(274),
        [anon_sym_btn] = ACTIONS(274),
        [anon_sym_http] = ACTIONS(274),
        [anon_sym_https] = ACTIONS(274),
        [anon_sym_file] = ACTIONS(274),
        [anon_sym_ftp] = ACTIONS(274),
        [anon_sym_irc] = ACTIONS(274),
        [anon_sym_link] = ACTIONS(274),
        [anon_sym_mailto] = ACTIONS(274),
        [anon_sym_stem] = ACTIONS(274),
        [anon_sym_latexmath] = ACTIONS(274),
        [anon_sym_asciimath] = ACTIONS(274),
        [anon_sym_menu] = ACTIONS(274),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(274),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(274),
        [anon_sym_pass] = ACTIONS(274),
        [anon_sym_LT_LT] = ACTIONS(274),
        [anon_sym_xref] = ACTIONS(274),
        [anon_sym_STAR2] = ACTIONS(274),
        [anon_sym_STAR_STAR] = ACTIONS(274),
        [anon_sym__2] = ACTIONS(274),
        [anon_sym___] = ACTIONS(274),
        [anon_sym_BQUOTE2] = ACTIONS(274),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(274),
        [anon_sym_POUND2] = ACTIONS(274),
        [anon_sym_POUND_POUND] = ACTIONS(274),
    },
    [38] = {
        [ts_builtin_sym_end] = ACTIONS(276),
        [anon_sym_LBRACE] = ACTIONS(278),
        [anon_sym_RBRACE] = ACTIONS(278),
        [sym__word_no_digit] = ACTIONS(278),
        [sym__digits] = ACTIONS(278),
        [anon_sym_BANG] = ACTIONS(278),
        [anon_sym_DQUOTE] = ACTIONS(278),
        [anon_sym_POUND] = ACTIONS(278),
        [anon_sym_DOLLAR] = ACTIONS(278),
        [anon_sym_PERCENT] = ACTIONS(278),
        [anon_sym_AMP] = ACTIONS(278),
        [anon_sym_SQUOTE] = ACTIONS(278),
        [anon_sym_LPAREN] = ACTIONS(278),
        [anon_sym_RPAREN] = ACTIONS(278),
        [anon_sym_STAR] = ACTIONS(278),
        [anon_sym_PLUS] = ACTIONS(278),
        [anon_sym_COMMA] = ACTIONS(278),
        [anon_sym_DASH] = ACTIONS(278),
        [anon_sym_DOT] = ACTIONS(278),
        [anon_sym_SLASH] = ACTIONS(278),
        [anon_sym_COLON] = ACTIONS(278),
        [anon_sym_SEMI] = ACTIONS(278),
        [anon_sym_LT] = ACTIONS(278),
        [anon_sym_EQ] = ACTIONS(278),
        [anon_sym_GT] = ACTIONS(278),
        [anon_sym_QMARK] = ACTIONS(278),
        [anon_sym_AT] = ACTIONS(278),
        [anon_sym_LBRACK] = ACTIONS(278),
        [anon_sym_BSLASH] = ACTIONS(278),
        [anon_sym_RBRACK] = ACTIONS(278),
        [anon_sym_CARET] = ACTIONS(278),
        [anon_sym__] = ACTIONS(278),
        [anon_sym_BQUOTE] = ACTIONS(278),
        [anon_sym_PIPE] = ACTIONS(278),
        [anon_sym_TILDE] = ACTIONS(278),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(278),
        [anon_sym_anchor] = ACTIONS(278),
        [sym_email] = ACTIONS(278),
        [anon_sym_footnote] = ACTIONS(278),
        [anon_sym_footnoteref] = ACTIONS(278),
        [anon_sym_image] = ACTIONS(278),
        [anon_sym_icon] = ACTIONS(278),
        [anon_sym_kbd] = ACTIONS(278),
        [anon_sym_btn] = ACTIONS(278),
        [anon_sym_http] = ACTIONS(278),
        [anon_sym_https] = ACTIONS(278),
        [anon_sym_file] = ACTIONS(278),
        [anon_sym_ftp] = ACTIONS(278),
        [anon_sym_irc] = ACTIONS(278),
        [anon_sym_link] = ACTIONS(278),
        [anon_sym_mailto] = ACTIONS(278),
        [anon_sym_stem] = ACTIONS(278),
        [anon_sym_latexmath] = ACTIONS(278),
        [anon_sym_asciimath] = ACTIONS(278),
        [anon_sym_menu] = ACTIONS(278),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(278),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(278),
        [anon_sym_pass] = ACTIONS(278),
        [anon_sym_LT_LT] = ACTIONS(278),
        [anon_sym_xref] = ACTIONS(278),
        [anon_sym_STAR2] = ACTIONS(278),
        [anon_sym_STAR_STAR] = ACTIONS(278),
        [anon_sym__2] = ACTIONS(278),
        [anon_sym___] = ACTIONS(278),
        [anon_sym_BQUOTE2] = ACTIONS(278),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(278),
        [anon_sym_POUND2] = ACTIONS(278),
        [anon_sym_POUND_POUND] = ACTIONS(278),
    },
    [39] = {
        [ts_builtin_sym_end] = ACTIONS(280),
        [anon_sym_LBRACE] = ACTIONS(282),
        [anon_sym_RBRACE] = ACTIONS(282),
        [sym__word_no_digit] = ACTIONS(282),
        [sym__digits] = ACTIONS(282),
        [anon_sym_BANG] = ACTIONS(282),
        [anon_sym_DQUOTE] = ACTIONS(282),
        [anon_sym_POUND] = ACTIONS(282),
        [anon_sym_DOLLAR] = ACTIONS(282),
        [anon_sym_PERCENT] = ACTIONS(282),
        [anon_sym_AMP] = ACTIONS(282),
        [anon_sym_SQUOTE] = ACTIONS(282),
        [anon_sym_LPAREN] = ACTIONS(282),
        [anon_sym_RPAREN] = ACTIONS(282),
        [anon_sym_STAR] = ACTIONS(282),
        [anon_sym_PLUS] = ACTIONS(282),
        [anon_sym_COMMA] = ACTIONS(282),
        [anon_sym_DASH] = ACTIONS(282),
        [anon_sym_DOT] = ACTIONS(282),
        [anon_sym_SLASH] = ACTIONS(282),
        [anon_sym_COLON] = ACTIONS(282),
        [anon_sym_SEMI] = ACTIONS(282),
        [anon_sym_LT] = ACTIONS(282),
        [anon_sym_EQ] = ACTIONS(282),
        [anon_sym_GT] = ACTIONS(282),
        [anon_sym_QMARK] = ACTIONS(282),
        [anon_sym_AT] = ACTIONS(282),
        [anon_sym_LBRACK] = ACTIONS(282),
        [anon_sym_BSLASH] = ACTIONS(282),
        [anon_sym_RBRACK] = ACTIONS(282),
        [anon_sym_CARET] = ACTIONS(282),
        [anon_sym__] = ACTIONS(282),
        [anon_sym_BQUOTE] = ACTIONS(282),
        [anon_sym_PIPE] = ACTIONS(282),
        [anon_sym_TILDE] = ACTIONS(282),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(282),
        [anon_sym_anchor] = ACTIONS(282),
        [sym_email] = ACTIONS(282),
        [anon_sym_footnote] = ACTIONS(282),
        [anon_sym_footnoteref] = ACTIONS(282),
        [anon_sym_image] = ACTIONS(282),
        [anon_sym_icon] = ACTIONS(282),
        [anon_sym_kbd] = ACTIONS(282),
        [anon_sym_btn] = ACTIONS(282),
        [anon_sym_http] = ACTIONS(282),
        [anon_sym_https] = ACTIONS(282),
        [anon_sym_file] = ACTIONS(282),
        [anon_sym_ftp] = ACTIONS(282),
        [anon_sym_irc] = ACTIONS(282),
        [anon_sym_link] = ACTIONS(282),
        [anon_sym_mailto] = ACTIONS(282),
        [anon_sym_stem] = ACTIONS(282),
        [anon_sym_latexmath] = ACTIONS(282),
        [anon_sym_asciimath] = ACTIONS(282),
        [anon_sym_menu] = ACTIONS(282),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(282),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(282),
        [anon_sym_pass] = ACTIONS(282),
        [anon_sym_LT_LT] = ACTIONS(282),
        [anon_sym_xref] = ACTIONS(282),
        [anon_sym_STAR2] = ACTIONS(282),
        [anon_sym_STAR_STAR] = ACTIONS(282),
        [anon_sym__2] = ACTIONS(282),
        [anon_sym___] = ACTIONS(282),
        [anon_sym_BQUOTE2] = ACTIONS(282),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(282),
        [anon_sym_POUND2] = ACTIONS(282),
        [anon_sym_POUND_POUND] = ACTIONS(282),
    },
    [40] = {
        [ts_builtin_sym_end] = ACTIONS(284),
        [anon_sym_LBRACE] = ACTIONS(286),
        [anon_sym_RBRACE] = ACTIONS(286),
        [sym__word_no_digit] = ACTIONS(286),
        [sym__digits] = ACTIONS(286),
        [anon_sym_BANG] = ACTIONS(286),
        [anon_sym_DQUOTE] = ACTIONS(286),
        [anon_sym_POUND] = ACTIONS(286),
        [anon_sym_DOLLAR] = ACTIONS(286),
        [anon_sym_PERCENT] = ACTIONS(286),
        [anon_sym_AMP] = ACTIONS(286),
        [anon_sym_SQUOTE] = ACTIONS(286),
        [anon_sym_LPAREN] = ACTIONS(286),
        [anon_sym_RPAREN] = ACTIONS(286),
        [anon_sym_STAR] = ACTIONS(286),
        [anon_sym_PLUS] = ACTIONS(286),
        [anon_sym_COMMA] = ACTIONS(286),
        [anon_sym_DASH] = ACTIONS(286),
        [anon_sym_DOT] = ACTIONS(286),
        [anon_sym_SLASH] = ACTIONS(286),
        [anon_sym_COLON] = ACTIONS(286),
        [anon_sym_SEMI] = ACTIONS(286),
        [anon_sym_LT] = ACTIONS(286),
        [anon_sym_EQ] = ACTIONS(286),
        [anon_sym_GT] = ACTIONS(286),
        [anon_sym_QMARK] = ACTIONS(286),
        [anon_sym_AT] = ACTIONS(286),
        [anon_sym_LBRACK] = ACTIONS(286),
        [anon_sym_BSLASH] = ACTIONS(286),
        [anon_sym_RBRACK] = ACTIONS(286),
        [anon_sym_CARET] = ACTIONS(286),
        [anon_sym__] = ACTIONS(286),
        [anon_sym_BQUOTE] = ACTIONS(286),
        [anon_sym_PIPE] = ACTIONS(286),
        [anon_sym_TILDE] = ACTIONS(286),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(286),
        [anon_sym_anchor] = ACTIONS(286),
        [sym_email] = ACTIONS(286),
        [anon_sym_footnote] = ACTIONS(286),
        [anon_sym_footnoteref] = ACTIONS(286),
        [anon_sym_image] = ACTIONS(286),
        [anon_sym_icon] = ACTIONS(286),
        [anon_sym_kbd] = ACTIONS(286),
        [anon_sym_btn] = ACTIONS(286),
        [anon_sym_http] = ACTIONS(286),
        [anon_sym_https] = ACTIONS(286),
        [anon_sym_file] = ACTIONS(286),
        [anon_sym_ftp] = ACTIONS(286),
        [anon_sym_irc] = ACTIONS(286),
        [anon_sym_link] = ACTIONS(286),
        [anon_sym_mailto] = ACTIONS(286),
        [anon_sym_stem] = ACTIONS(286),
        [anon_sym_latexmath] = ACTIONS(286),
        [anon_sym_asciimath] = ACTIONS(286),
        [anon_sym_menu] = ACTIONS(286),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(286),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(286),
        [anon_sym_pass] = ACTIONS(286),
        [anon_sym_LT_LT] = ACTIONS(286),
        [anon_sym_xref] = ACTIONS(286),
        [anon_sym_STAR2] = ACTIONS(286),
        [anon_sym_STAR_STAR] = ACTIONS(286),
        [anon_sym__2] = ACTIONS(286),
        [anon_sym___] = ACTIONS(286),
        [anon_sym_BQUOTE2] = ACTIONS(286),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(286),
        [anon_sym_POUND2] = ACTIONS(286),
        [anon_sym_POUND_POUND] = ACTIONS(286),
    },
    [41] = {
        [ts_builtin_sym_end] = ACTIONS(288),
        [anon_sym_LBRACE] = ACTIONS(290),
        [anon_sym_RBRACE] = ACTIONS(290),
        [sym__word_no_digit] = ACTIONS(290),
        [sym__digits] = ACTIONS(290),
        [anon_sym_BANG] = ACTIONS(290),
        [anon_sym_DQUOTE] = ACTIONS(290),
        [anon_sym_POUND] = ACTIONS(290),
        [anon_sym_DOLLAR] = ACTIONS(290),
        [anon_sym_PERCENT] = ACTIONS(290),
        [anon_sym_AMP] = ACTIONS(290),
        [anon_sym_SQUOTE] = ACTIONS(290),
        [anon_sym_LPAREN] = ACTIONS(290),
        [anon_sym_RPAREN] = ACTIONS(290),
        [anon_sym_STAR] = ACTIONS(290),
        [anon_sym_PLUS] = ACTIONS(290),
        [anon_sym_COMMA] = ACTIONS(290),
        [anon_sym_DASH] = ACTIONS(290),
        [anon_sym_DOT] = ACTIONS(290),
        [anon_sym_SLASH] = ACTIONS(290),
        [anon_sym_COLON] = ACTIONS(290),
        [anon_sym_SEMI] = ACTIONS(290),
        [anon_sym_LT] = ACTIONS(290),
        [anon_sym_EQ] = ACTIONS(290),
        [anon_sym_GT] = ACTIONS(290),
        [anon_sym_QMARK] = ACTIONS(290),
        [anon_sym_AT] = ACTIONS(290),
        [anon_sym_LBRACK] = ACTIONS(290),
        [anon_sym_BSLASH] = ACTIONS(290),
        [anon_sym_RBRACK] = ACTIONS(290),
        [anon_sym_CARET] = ACTIONS(290),
        [anon_sym__] = ACTIONS(290),
        [anon_sym_BQUOTE] = ACTIONS(290),
        [anon_sym_PIPE] = ACTIONS(290),
        [anon_sym_TILDE] = ACTIONS(290),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(290),
        [anon_sym_anchor] = ACTIONS(290),
        [sym_email] = ACTIONS(290),
        [anon_sym_footnote] = ACTIONS(290),
        [anon_sym_footnoteref] = ACTIONS(290),
        [anon_sym_image] = ACTIONS(290),
        [anon_sym_icon] = ACTIONS(290),
        [anon_sym_kbd] = ACTIONS(290),
        [anon_sym_btn] = ACTIONS(290),
        [anon_sym_http] = ACTIONS(290),
        [anon_sym_https] = ACTIONS(290),
        [anon_sym_file] = ACTIONS(290),
        [anon_sym_ftp] = ACTIONS(290),
        [anon_sym_irc] = ACTIONS(290),
        [anon_sym_link] = ACTIONS(290),
        [anon_sym_mailto] = ACTIONS(290),
        [anon_sym_stem] = ACTIONS(290),
        [anon_sym_latexmath] = ACTIONS(290),
        [anon_sym_asciimath] = ACTIONS(290),
        [anon_sym_menu] = ACTIONS(290),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(290),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(290),
        [anon_sym_pass] = ACTIONS(290),
        [anon_sym_LT_LT] = ACTIONS(290),
        [anon_sym_xref] = ACTIONS(290),
        [anon_sym_STAR2] = ACTIONS(290),
        [anon_sym_STAR_STAR] = ACTIONS(290),
        [anon_sym__2] = ACTIONS(290),
        [anon_sym___] = ACTIONS(290),
        [anon_sym_BQUOTE2] = ACTIONS(290),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(290),
        [anon_sym_POUND2] = ACTIONS(290),
        [anon_sym_POUND_POUND] = ACTIONS(290),
    },
    [42] = {
        [ts_builtin_sym_end] = ACTIONS(292),
        [anon_sym_LBRACE] = ACTIONS(294),
        [anon_sym_RBRACE] = ACTIONS(294),
        [sym__word_no_digit] = ACTIONS(294),
        [sym__digits] = ACTIONS(294),
        [anon_sym_BANG] = ACTIONS(294),
        [anon_sym_DQUOTE] = ACTIONS(294),
        [anon_sym_POUND] = ACTIONS(294),
        [anon_sym_DOLLAR] = ACTIONS(294),
        [anon_sym_PERCENT] = ACTIONS(294),
        [anon_sym_AMP] = ACTIONS(294),
        [anon_sym_SQUOTE] = ACTIONS(294),
        [anon_sym_LPAREN] = ACTIONS(294),
        [anon_sym_RPAREN] = ACTIONS(294),
        [anon_sym_STAR] = ACTIONS(294),
        [anon_sym_PLUS] = ACTIONS(294),
        [anon_sym_COMMA] = ACTIONS(294),
        [anon_sym_DASH] = ACTIONS(294),
        [anon_sym_DOT] = ACTIONS(294),
        [anon_sym_SLASH] = ACTIONS(294),
        [anon_sym_COLON] = ACTIONS(294),
        [anon_sym_SEMI] = ACTIONS(294),
        [anon_sym_LT] = ACTIONS(294),
        [anon_sym_EQ] = ACTIONS(294),
        [anon_sym_GT] = ACTIONS(294),
        [anon_sym_QMARK] = ACTIONS(294),
        [anon_sym_AT] = ACTIONS(294),
        [anon_sym_LBRACK] = ACTIONS(294),
        [anon_sym_BSLASH] = ACTIONS(294),
        [anon_sym_RBRACK] = ACTIONS(294),
        [anon_sym_CARET] = ACTIONS(294),
        [anon_sym__] = ACTIONS(294),
        [anon_sym_BQUOTE] = ACTIONS(294),
        [anon_sym_PIPE] = ACTIONS(294),
        [anon_sym_TILDE] = ACTIONS(294),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(294),
        [anon_sym_anchor] = ACTIONS(294),
        [sym_email] = ACTIONS(294),
        [anon_sym_footnote] = ACTIONS(294),
        [anon_sym_footnoteref] = ACTIONS(294),
        [anon_sym_image] = ACTIONS(294),
        [anon_sym_icon] = ACTIONS(294),
        [anon_sym_kbd] = ACTIONS(294),
        [anon_sym_btn] = ACTIONS(294),
        [anon_sym_http] = ACTIONS(294),
        [anon_sym_https] = ACTIONS(294),
        [anon_sym_file] = ACTIONS(294),
        [anon_sym_ftp] = ACTIONS(294),
        [anon_sym_irc] = ACTIONS(294),
        [anon_sym_link] = ACTIONS(294),
        [anon_sym_mailto] = ACTIONS(294),
        [anon_sym_stem] = ACTIONS(294),
        [anon_sym_latexmath] = ACTIONS(294),
        [anon_sym_asciimath] = ACTIONS(294),
        [anon_sym_menu] = ACTIONS(294),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(294),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(294),
        [anon_sym_pass] = ACTIONS(294),
        [anon_sym_LT_LT] = ACTIONS(294),
        [anon_sym_xref] = ACTIONS(294),
        [anon_sym_STAR2] = ACTIONS(294),
        [anon_sym_STAR_STAR] = ACTIONS(294),
        [anon_sym__2] = ACTIONS(294),
        [anon_sym___] = ACTIONS(294),
        [anon_sym_BQUOTE2] = ACTIONS(294),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(294),
        [anon_sym_POUND2] = ACTIONS(294),
        [anon_sym_POUND_POUND] = ACTIONS(294),
    },
    [43] = {
        [ts_builtin_sym_end] = ACTIONS(296),
        [anon_sym_LBRACE] = ACTIONS(298),
        [anon_sym_RBRACE] = ACTIONS(298),
        [sym__word_no_digit] = ACTIONS(298),
        [sym__digits] = ACTIONS(298),
        [anon_sym_BANG] = ACTIONS(298),
        [anon_sym_DQUOTE] = ACTIONS(298),
        [anon_sym_POUND] = ACTIONS(298),
        [anon_sym_DOLLAR] = ACTIONS(298),
        [anon_sym_PERCENT] = ACTIONS(298),
        [anon_sym_AMP] = ACTIONS(298),
        [anon_sym_SQUOTE] = ACTIONS(298),
        [anon_sym_LPAREN] = ACTIONS(298),
        [anon_sym_RPAREN] = ACTIONS(298),
        [anon_sym_STAR] = ACTIONS(298),
        [anon_sym_PLUS] = ACTIONS(298),
        [anon_sym_COMMA] = ACTIONS(298),
        [anon_sym_DASH] = ACTIONS(298),
        [anon_sym_DOT] = ACTIONS(298),
        [anon_sym_SLASH] = ACTIONS(298),
        [anon_sym_COLON] = ACTIONS(298),
        [anon_sym_SEMI] = ACTIONS(298),
        [anon_sym_LT] = ACTIONS(298),
        [anon_sym_EQ] = ACTIONS(298),
        [anon_sym_GT] = ACTIONS(298),
        [anon_sym_QMARK] = ACTIONS(298),
        [anon_sym_AT] = ACTIONS(298),
        [anon_sym_LBRACK] = ACTIONS(298),
        [anon_sym_BSLASH] = ACTIONS(298),
        [anon_sym_RBRACK] = ACTIONS(298),
        [anon_sym_CARET] = ACTIONS(298),
        [anon_sym__] = ACTIONS(298),
        [anon_sym_BQUOTE] = ACTIONS(298),
        [anon_sym_PIPE] = ACTIONS(298),
        [anon_sym_TILDE] = ACTIONS(298),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(298),
        [anon_sym_anchor] = ACTIONS(298),
        [sym_email] = ACTIONS(298),
        [anon_sym_footnote] = ACTIONS(298),
        [anon_sym_footnoteref] = ACTIONS(298),
        [anon_sym_image] = ACTIONS(298),
        [anon_sym_icon] = ACTIONS(298),
        [anon_sym_kbd] = ACTIONS(298),
        [anon_sym_btn] = ACTIONS(298),
        [anon_sym_http] = ACTIONS(298),
        [anon_sym_https] = ACTIONS(298),
        [anon_sym_file] = ACTIONS(298),
        [anon_sym_ftp] = ACTIONS(298),
        [anon_sym_irc] = ACTIONS(298),
        [anon_sym_link] = ACTIONS(298),
        [anon_sym_mailto] = ACTIONS(298),
        [anon_sym_stem] = ACTIONS(298),
        [anon_sym_latexmath] = ACTIONS(298),
        [anon_sym_asciimath] = ACTIONS(298),
        [anon_sym_menu] = ACTIONS(298),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(298),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(298),
        [anon_sym_pass] = ACTIONS(298),
        [anon_sym_LT_LT] = ACTIONS(298),
        [anon_sym_xref] = ACTIONS(298),
        [anon_sym_STAR2] = ACTIONS(298),
        [anon_sym_STAR_STAR] = ACTIONS(298),
        [anon_sym__2] = ACTIONS(298),
        [anon_sym___] = ACTIONS(298),
        [anon_sym_BQUOTE2] = ACTIONS(298),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(298),
        [anon_sym_POUND2] = ACTIONS(298),
        [anon_sym_POUND_POUND] = ACTIONS(298),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 9,
    ACTIONS(305),
    1,
    anon_sym__2,
    ACTIONS(308),
    1,
    anon_sym___,
    ACTIONS(311),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(314),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(317),
    1,
    anon_sym_POUND2,
    ACTIONS(320),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(300),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    ACTIONS(303),
    2,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    STATE(44),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [33] = 9,
    ACTIONS(323),
    1,
    anon_sym_STAR2,
    ACTIONS(326),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(334),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(337),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(340),
    1,
    anon_sym_POUND2,
    ACTIONS(343),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(329),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    ACTIONS(332),
    2,
    anon_sym__3,
    anon_sym___,
    STATE(45),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [66] = 9,
    ACTIONS(348),
    1,
    anon_sym_STAR3,
    ACTIONS(350),
    1,
    anon_sym__2,
    ACTIONS(352),
    1,
    anon_sym___,
    ACTIONS(354),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(356),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(358),
    1,
    anon_sym_POUND2,
    ACTIONS(360),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(346),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(44),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [98] = 9,
    ACTIONS(350),
    1,
    anon_sym__2,
    ACTIONS(352),
    1,
    anon_sym___,
    ACTIONS(354),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(356),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(358),
    1,
    anon_sym_POUND2,
    ACTIONS(360),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(362),
    1,
    anon_sym_STAR3,
    ACTIONS(346),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(44),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [130] = 9,
    ACTIONS(364),
    1,
    anon_sym_STAR2,
    ACTIONS(366),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(370),
    1,
    anon_sym___,
    ACTIONS(372),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(374),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(376),
    1,
    anon_sym_POUND2,
    ACTIONS(378),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(368),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(60),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [162] = 9,
    ACTIONS(364),
    1,
    anon_sym_STAR2,
    ACTIONS(366),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(370),
    1,
    anon_sym__3,
    ACTIONS(372),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(374),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(376),
    1,
    anon_sym_POUND2,
    ACTIONS(378),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(380),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(59),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [194] = 9,
    ACTIONS(350),
    1,
    anon_sym__2,
    ACTIONS(352),
    1,
    anon_sym___,
    ACTIONS(354),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(356),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(358),
    1,
    anon_sym_POUND2,
    ACTIONS(360),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(384),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(382),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(58),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [226] = 9,
    ACTIONS(350),
    1,
    anon_sym__2,
    ACTIONS(352),
    1,
    anon_sym___,
    ACTIONS(354),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(356),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(358),
    1,
    anon_sym_POUND2,
    ACTIONS(360),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(384),
    1,
    anon_sym_STAR3,
    ACTIONS(386),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(46),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [258] = 9,
    ACTIONS(350),
    1,
    anon_sym__2,
    ACTIONS(352),
    1,
    anon_sym___,
    ACTIONS(354),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(356),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(358),
    1,
    anon_sym_POUND2,
    ACTIONS(360),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(390),
    1,
    anon_sym_STAR3,
    ACTIONS(388),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(47),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [290] = 9,
    ACTIONS(350),
    1,
    anon_sym__2,
    ACTIONS(352),
    1,
    anon_sym___,
    ACTIONS(354),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(356),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(358),
    1,
    anon_sym_POUND2,
    ACTIONS(360),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(390),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(392),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(61),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [322] = 9,
    ACTIONS(364),
    1,
    anon_sym_STAR2,
    ACTIONS(366),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(372),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(374),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(376),
    1,
    anon_sym_POUND2,
    ACTIONS(378),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(396),
    1,
    anon_sym__3,
    ACTIONS(394),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(57),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [354] = 9,
    ACTIONS(364),
    1,
    anon_sym_STAR2,
    ACTIONS(366),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(372),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(374),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(376),
    1,
    anon_sym_POUND2,
    ACTIONS(378),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(396),
    1,
    anon_sym___,
    ACTIONS(398),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(56),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [386] = 9,
    ACTIONS(364),
    1,
    anon_sym_STAR2,
    ACTIONS(366),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(372),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(374),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(376),
    1,
    anon_sym_POUND2,
    ACTIONS(378),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(402),
    1,
    anon_sym___,
    ACTIONS(400),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(45),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [418] = 9,
    ACTIONS(364),
    1,
    anon_sym_STAR2,
    ACTIONS(366),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(372),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(374),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(376),
    1,
    anon_sym_POUND2,
    ACTIONS(378),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(402),
    1,
    anon_sym__3,
    ACTIONS(400),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(45),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [450] = 9,
    ACTIONS(348),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(350),
    1,
    anon_sym__2,
    ACTIONS(352),
    1,
    anon_sym___,
    ACTIONS(354),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(356),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(358),
    1,
    anon_sym_POUND2,
    ACTIONS(360),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(346),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(44),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [482] = 9,
    ACTIONS(364),
    1,
    anon_sym_STAR2,
    ACTIONS(366),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(372),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(374),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(376),
    1,
    anon_sym_POUND2,
    ACTIONS(378),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(404),
    1,
    anon_sym__3,
    ACTIONS(400),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(45),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [514] = 9,
    ACTIONS(364),
    1,
    anon_sym_STAR2,
    ACTIONS(366),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(372),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(374),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(376),
    1,
    anon_sym_POUND2,
    ACTIONS(378),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(404),
    1,
    anon_sym___,
    ACTIONS(400),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(45),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [546] = 9,
    ACTIONS(350),
    1,
    anon_sym__2,
    ACTIONS(352),
    1,
    anon_sym___,
    ACTIONS(354),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(356),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(358),
    1,
    anon_sym_POUND2,
    ACTIONS(360),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(362),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(346),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(44),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [578] = 1,
    ACTIONS(294),
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
    ACTIONS(250),
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
    ACTIONS(270),
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
    ACTIONS(282),
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
    ACTIONS(254),
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
    ACTIONS(266),
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
    ACTIONS(258),
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
    ACTIONS(250),
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
    ACTIONS(246),
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
    ACTIONS(254),
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
    ACTIONS(294),
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
    ACTIONS(246),
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
    ACTIONS(406),
    1,
    anon_sym_RBRACK,
    STATE(75),
    1,
    aux_sym_image_macro_repeat1,
    ACTIONS(408),
    3,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [746] = 3,
    ACTIONS(410),
    1,
    anon_sym_RBRACK,
    STATE(75),
    1,
    aux_sym_image_macro_repeat1,
    ACTIONS(412),
    3,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [758] = 5,
    ACTIONS(415),
    1,
    anon_sym_PLUS,
    ACTIONS(417),
    1,
    anon_sym_COMMA,
    ACTIONS(419),
    1,
    anon_sym_RBRACK,
    STATE(112),
    1,
    aux_sym_kbd_macro_repeat1,
    STATE(113),
    1,
    aux_sym_kbd_macro_repeat2,
    [774] = 3,
    ACTIONS(421),
    1,
    anon_sym_RBRACK,
    STATE(74),
    1,
    aux_sym_image_macro_repeat1,
    ACTIONS(408),
    3,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [786] = 3,
    STATE(78),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(423),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    ACTIONS(426),
    2,
    anon_sym_POUND3,
    anon_sym_POUND_POUND,
    [798] = 3,
    STATE(79),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(428),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    ACTIONS(431),
    2,
    anon_sym_BQUOTE3,
    anon_sym_BQUOTE_BQUOTE,
    [810] = 3,
    ACTIONS(435),
    1,
    anon_sym_BQUOTE3,
    STATE(94),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(433),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [821] = 3,
    ACTIONS(439),
    1,
    anon_sym_BQUOTE3,
    STATE(106),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(437),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [832] = 3,
    ACTIONS(443),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(101),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(441),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [843] = 3,
    ACTIONS(447),
    1,
    anon_sym_POUND3,
    STATE(102),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(445),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [854] = 3,
    ACTIONS(449),
    1,
    anon_sym_DOT,
    STATE(84),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(139),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [865] = 3,
    ACTIONS(452),
    1,
    anon_sym_DOT,
    STATE(84),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(162),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [876] = 3,
    ACTIONS(456),
    1,
    anon_sym_POUND3,
    STATE(78),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(454),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [887] = 3,
    ACTIONS(458),
    1,
    anon_sym_POUND_POUND,
    STATE(78),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(454),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [898] = 3,
    ACTIONS(456),
    1,
    anon_sym_POUND_POUND,
    STATE(78),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(454),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [909] = 3,
    ACTIONS(435),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(95),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(460),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [920] = 3,
    ACTIONS(464),
    1,
    anon_sym_POUND3,
    STATE(86),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(462),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [931] = 3,
    ACTIONS(452),
    1,
    anon_sym_DOT,
    STATE(85),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(156),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [942] = 3,
    ACTIONS(464),
    1,
    anon_sym_POUND_POUND,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(466),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [953] = 3,
    ACTIONS(443),
    1,
    anon_sym_BQUOTE3,
    STATE(100),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(468),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [964] = 3,
    ACTIONS(472),
    1,
    anon_sym_BQUOTE3,
    STATE(79),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(470),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [975] = 3,
    ACTIONS(472),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(79),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(470),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [986] = 3,
    ACTIONS(474),
    1,
    anon_sym_POUND_POUND,
    STATE(78),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(454),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [997] = 3,
    ACTIONS(474),
    1,
    anon_sym_POUND3,
    STATE(78),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(454),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1008] = 3,
    ACTIONS(476),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(79),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(470),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1019] = 3,
    ACTIONS(447),
    1,
    anon_sym_POUND_POUND,
    STATE(87),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(478),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1030] = 3,
    ACTIONS(480),
    1,
    anon_sym_BQUOTE3,
    STATE(79),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(470),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1041] = 3,
    ACTIONS(480),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(79),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(470),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1052] = 3,
    ACTIONS(458),
    1,
    anon_sym_POUND3,
    STATE(78),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(454),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1063] = 1,
    ACTIONS(482),
    4,
    anon_sym_RBRACK,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [1070] = 3,
    ACTIONS(439),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(98),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(484),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1081] = 3,
    ACTIONS(488),
    1,
    anon_sym_POUND_POUND,
    STATE(96),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(486),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1092] = 3,
    ACTIONS(476),
    1,
    anon_sym_BQUOTE3,
    STATE(79),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(470),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1103] = 3,
    ACTIONS(488),
    1,
    anon_sym_POUND3,
    STATE(97),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(490),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1114] = 2,
    STATE(117),
    1,
    sym_key,
    ACTIONS(492),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [1122] = 2,
    STATE(76),
    1,
    sym_key,
    ACTIONS(492),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [1130] = 1,
    ACTIONS(139),
    3,
    anon_sym_DQUOTE,
    anon_sym_DOT,
    anon_sym_LBRACK,
    [1136] = 2,
    STATE(125),
    1,
    sym_key,
    ACTIONS(492),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [1144] = 3,
    ACTIONS(415),
    1,
    anon_sym_PLUS,
    ACTIONS(494),
    1,
    anon_sym_RBRACK,
    STATE(116),
    1,
    aux_sym_kbd_macro_repeat1,
    [1154] = 3,
    ACTIONS(417),
    1,
    anon_sym_COMMA,
    ACTIONS(494),
    1,
    anon_sym_RBRACK,
    STATE(115),
    1,
    aux_sym_kbd_macro_repeat2,
    [1164] = 1,
    ACTIONS(496),
    3,
    anon_sym_PLUS,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [1170] = 3,
    ACTIONS(498),
    1,
    anon_sym_COMMA,
    ACTIONS(501),
    1,
    anon_sym_RBRACK,
    STATE(115),
    1,
    aux_sym_kbd_macro_repeat2,
    [1180] = 3,
    ACTIONS(503),
    1,
    anon_sym_PLUS,
    ACTIONS(506),
    1,
    anon_sym_RBRACK,
    STATE(116),
    1,
    aux_sym_kbd_macro_repeat1,
    [1190] = 1,
    ACTIONS(501),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [1195] = 2,
    ACTIONS(508),
    1,
    aux_sym_anchor_token2,
    ACTIONS(510),
    1,
    aux_sym_footnote_macro_token1,
    [1202] = 2,
    ACTIONS(512),
    1,
    aux_sym_replacement_token1,
    ACTIONS(514),
    1,
    anon_sym_LBRACK,
    [1209] = 2,
    ACTIONS(516),
    1,
    anon_sym_COMMA,
    ACTIONS(518),
    1,
    anon_sym_RBRACK_RBRACK,
    [1216] = 2,
    ACTIONS(520),
    1,
    anon_sym_DQUOTE,
    ACTIONS(522),
    1,
    anon_sym_LBRACK,
    [1223] = 2,
    ACTIONS(524),
    1,
    anon_sym_COMMA,
    ACTIONS(526),
    1,
    anon_sym_RBRACK,
    [1230] = 2,
    ACTIONS(528),
    1,
    aux_sym_anchor_token2,
    ACTIONS(530),
    1,
    aux_sym_footnote_macro_token1,
    [1237] = 2,
    ACTIONS(532),
    1,
    anon_sym_COMMA,
    ACTIONS(534),
    1,
    anon_sym_RBRACK,
    [1244] = 1,
    ACTIONS(506),
    2,
    anon_sym_PLUS,
    anon_sym_RBRACK,
    [1249] = 1,
    ACTIONS(536),
    1,
    anon_sym_RBRACE,
    [1253] = 1,
    ACTIONS(538),
    1,
    aux_sym_image_macro_token1,
    [1257] = 1,
    ACTIONS(540),
    1,
    anon_sym_RBRACK,
    [1261] = 1,
    ACTIONS(542),
    1,
    anon_sym_COLON,
    [1265] = 1,
    ACTIONS(544),
    1,
    anon_sym_RBRACK,
    [1269] = 1,
    ACTIONS(546),
    1,
    anon_sym_RBRACK,
    [1273] = 1,
    ACTIONS(548),
    1,
    anon_sym_RBRACK,
    [1277] = 1,
    ACTIONS(550),
    1,
    aux_sym_replacement_token1,
    [1281] = 1,
    ACTIONS(552),
    1,
    anon_sym_COLON,
    [1285] = 1,
    ACTIONS(554),
    1,
    aux_sym_replacement_token1,
    [1289] = 1,
    ACTIONS(556),
    1,
    aux_sym_footnote_macro_token2,
    [1293] = 1,
    ACTIONS(558),
    1,
    aux_sym_replacement_token1,
    [1297] = 1,
    ACTIONS(560),
    1,
    anon_sym_RBRACK,
    [1301] = 1,
    ACTIONS(562),
    1,
    anon_sym_COLON,
    [1305] = 1,
    ACTIONS(564),
    1,
    aux_sym_anchor_token2,
    [1309] = 1,
    ACTIONS(566),
    1,
    anon_sym_COLON,
    [1313] = 1,
    ACTIONS(568),
    1,
    anon_sym_COLON,
    [1317] = 1,
    ACTIONS(570),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [1321] = 1,
    ACTIONS(572),
    1,
    anon_sym_COLON,
    [1325] = 1,
    ACTIONS(574),
    1,
    anon_sym_COLON,
    [1329] = 1,
    ACTIONS(576),
    1,
    anon_sym_RBRACK,
    [1333] = 1,
    ACTIONS(578),
    1,
    anon_sym_COLON,
    [1337] = 1,
    ACTIONS(580),
    1,
    anon_sym_COLON,
    [1341] = 1,
    ACTIONS(582),
    1,
    aux_sym_anchor_token2,
    [1345] = 1,
    ACTIONS(584),
    1,
    sym__link_component,
    [1349] = 1,
    ACTIONS(586),
    1,
    ts_builtin_sym_end,
    [1353] = 1,
    ACTIONS(588),
    1,
    aux_sym_anchor_token2,
    [1357] = 1,
    ACTIONS(590),
    1,
    anon_sym_RBRACK,
    [1361] = 1,
    ACTIONS(592),
    1,
    anon_sym_LBRACK,
    [1365] = 1,
    ACTIONS(594),
    1,
    aux_sym_anchor_token2,
    [1369] = 1,
    ACTIONS(596),
    1,
    anon_sym_RBRACK_RBRACK,
    [1373] = 1,
    ACTIONS(598),
    1,
    anon_sym_RBRACK,
    [1377] = 1,
    ACTIONS(600),
    1,
    anon_sym_RBRACK,
    [1381] = 1,
    ACTIONS(602),
    1,
    anon_sym_RBRACK,
    [1385] = 1,
    ACTIONS(604),
    1,
    aux_sym_footnote_macro_token2,
    [1389] = 1,
    ACTIONS(606),
    1,
    anon_sym_PLUS,
    [1393] = 1,
    ACTIONS(608),
    1,
    anon_sym_RBRACK,
    [1397] = 1,
    ACTIONS(610),
    1,
    aux_sym_replacement_token1,
    [1401] = 1,
    ACTIONS(612),
    1,
    anon_sym_RBRACK,
    [1405] = 1,
    ACTIONS(614),
    1,
    aux_sym_replacement_token1,
    [1409] = 1,
    ACTIONS(616),
    1,
    anon_sym_LBRACK,
    [1413] = 1,
    ACTIONS(618),
    1,
    anon_sym_GT_GT,
    [1417] = 1,
    ACTIONS(620),
    1,
    anon_sym_LBRACK,
    [1421] = 1,
    ACTIONS(622),
    1,
    anon_sym_LBRACK,
    [1425] = 1,
    ACTIONS(624),
    1,
    aux_sym_anchor_token2,
    [1429] = 1,
    ACTIONS(626),
    1,
    anon_sym_LBRACK,
    [1433] = 1,
    ACTIONS(628),
    1,
    anon_sym_DQUOTE,
    [1437] = 1,
    ACTIONS(630),
    1,
    sym__link_component,
    [1441] = 1,
    ACTIONS(632),
    1,
    anon_sym_LBRACK,
    [1445] = 1,
    ACTIONS(634),
    1,
    aux_sym_anchor_token2,
    [1449] = 1,
    ACTIONS(636),
    1,
    anon_sym_LBRACK,
    [1453] = 1,
    ACTIONS(638),
    1,
    anon_sym_LBRACK,
    [1457] = 1,
    ACTIONS(640),
    1,
    aux_sym_anchor_token1,
    [1461] = 1,
    ACTIONS(642),
    1,
    aux_sym_auto_link_token1,
    [1465] = 1,
    ACTIONS(644),
    1,
    aux_sym_anchor_token2,
    [1469] = 1,
    ACTIONS(646),
    1,
    aux_sym_xref_token2,
    [1473] = 1,
    ACTIONS(648),
    1,
    sym__link_component,
    [1477] = 1,
    ACTIONS(650),
    1,
    aux_sym_xref_token1,
    [1481] = 1,
    ACTIONS(652),
    1,
    anon_sym_quotes,
    [1485] = 1,
    ACTIONS(606),
    1,
    anon_sym_DOLLAR_DOLLAR,
    [1489] = 1,
    ACTIONS(606),
    1,
    anon_sym_PLUS_PLUS_PLUS,
    [1493] = 1,
    ACTIONS(654),
    1,
    aux_sym_replacement_token1,
    [1497] = 1,
    ACTIONS(656),
    1,
    anon_sym_LBRACK,
    [1501] = 1,
    ACTIONS(658),
    1,
    aux_sym_link_macro_token1,
    [1505] = 1,
    ACTIONS(660),
    1,
    sym__link_component,
    [1509] = 1,
    ACTIONS(662),
    1,
    anon_sym_COLON_SLASH_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(44)] = 0,
    [SMALL_STATE(45)] = 33,
    [SMALL_STATE(46)] = 66,
    [SMALL_STATE(47)] = 98,
    [SMALL_STATE(48)] = 130,
    [SMALL_STATE(49)] = 162,
    [SMALL_STATE(50)] = 194,
    [SMALL_STATE(51)] = 226,
    [SMALL_STATE(52)] = 258,
    [SMALL_STATE(53)] = 290,
    [SMALL_STATE(54)] = 322,
    [SMALL_STATE(55)] = 354,
    [SMALL_STATE(56)] = 386,
    [SMALL_STATE(57)] = 418,
    [SMALL_STATE(58)] = 450,
    [SMALL_STATE(59)] = 482,
    [SMALL_STATE(60)] = 514,
    [SMALL_STATE(61)] = 546,
    [SMALL_STATE(62)] = 578,
    [SMALL_STATE(63)] = 591,
    [SMALL_STATE(64)] = 604,
    [SMALL_STATE(65)] = 617,
    [SMALL_STATE(66)] = 630,
    [SMALL_STATE(67)] = 643,
    [SMALL_STATE(68)] = 656,
    [SMALL_STATE(69)] = 669,
    [SMALL_STATE(70)] = 682,
    [SMALL_STATE(71)] = 695,
    [SMALL_STATE(72)] = 708,
    [SMALL_STATE(73)] = 721,
    [SMALL_STATE(74)] = 734,
    [SMALL_STATE(75)] = 746,
    [SMALL_STATE(76)] = 758,
    [SMALL_STATE(77)] = 774,
    [SMALL_STATE(78)] = 786,
    [SMALL_STATE(79)] = 798,
    [SMALL_STATE(80)] = 810,
    [SMALL_STATE(81)] = 821,
    [SMALL_STATE(82)] = 832,
    [SMALL_STATE(83)] = 843,
    [SMALL_STATE(84)] = 854,
    [SMALL_STATE(85)] = 865,
    [SMALL_STATE(86)] = 876,
    [SMALL_STATE(87)] = 887,
    [SMALL_STATE(88)] = 898,
    [SMALL_STATE(89)] = 909,
    [SMALL_STATE(90)] = 920,
    [SMALL_STATE(91)] = 931,
    [SMALL_STATE(92)] = 942,
    [SMALL_STATE(93)] = 953,
    [SMALL_STATE(94)] = 964,
    [SMALL_STATE(95)] = 975,
    [SMALL_STATE(96)] = 986,
    [SMALL_STATE(97)] = 997,
    [SMALL_STATE(98)] = 1008,
    [SMALL_STATE(99)] = 1019,
    [SMALL_STATE(100)] = 1030,
    [SMALL_STATE(101)] = 1041,
    [SMALL_STATE(102)] = 1052,
    [SMALL_STATE(103)] = 1063,
    [SMALL_STATE(104)] = 1070,
    [SMALL_STATE(105)] = 1081,
    [SMALL_STATE(106)] = 1092,
    [SMALL_STATE(107)] = 1103,
    [SMALL_STATE(108)] = 1114,
    [SMALL_STATE(109)] = 1122,
    [SMALL_STATE(110)] = 1130,
    [SMALL_STATE(111)] = 1136,
    [SMALL_STATE(112)] = 1144,
    [SMALL_STATE(113)] = 1154,
    [SMALL_STATE(114)] = 1164,
    [SMALL_STATE(115)] = 1170,
    [SMALL_STATE(116)] = 1180,
    [SMALL_STATE(117)] = 1190,
    [SMALL_STATE(118)] = 1195,
    [SMALL_STATE(119)] = 1202,
    [SMALL_STATE(120)] = 1209,
    [SMALL_STATE(121)] = 1216,
    [SMALL_STATE(122)] = 1223,
    [SMALL_STATE(123)] = 1230,
    [SMALL_STATE(124)] = 1237,
    [SMALL_STATE(125)] = 1244,
    [SMALL_STATE(126)] = 1249,
    [SMALL_STATE(127)] = 1253,
    [SMALL_STATE(128)] = 1257,
    [SMALL_STATE(129)] = 1261,
    [SMALL_STATE(130)] = 1265,
    [SMALL_STATE(131)] = 1269,
    [SMALL_STATE(132)] = 1273,
    [SMALL_STATE(133)] = 1277,
    [SMALL_STATE(134)] = 1281,
    [SMALL_STATE(135)] = 1285,
    [SMALL_STATE(136)] = 1289,
    [SMALL_STATE(137)] = 1293,
    [SMALL_STATE(138)] = 1297,
    [SMALL_STATE(139)] = 1301,
    [SMALL_STATE(140)] = 1305,
    [SMALL_STATE(141)] = 1309,
    [SMALL_STATE(142)] = 1313,
    [SMALL_STATE(143)] = 1317,
    [SMALL_STATE(144)] = 1321,
    [SMALL_STATE(145)] = 1325,
    [SMALL_STATE(146)] = 1329,
    [SMALL_STATE(147)] = 1333,
    [SMALL_STATE(148)] = 1337,
    [SMALL_STATE(149)] = 1341,
    [SMALL_STATE(150)] = 1345,
    [SMALL_STATE(151)] = 1349,
    [SMALL_STATE(152)] = 1353,
    [SMALL_STATE(153)] = 1357,
    [SMALL_STATE(154)] = 1361,
    [SMALL_STATE(155)] = 1365,
    [SMALL_STATE(156)] = 1369,
    [SMALL_STATE(157)] = 1373,
    [SMALL_STATE(158)] = 1377,
    [SMALL_STATE(159)] = 1381,
    [SMALL_STATE(160)] = 1385,
    [SMALL_STATE(161)] = 1389,
    [SMALL_STATE(162)] = 1393,
    [SMALL_STATE(163)] = 1397,
    [SMALL_STATE(164)] = 1401,
    [SMALL_STATE(165)] = 1405,
    [SMALL_STATE(166)] = 1409,
    [SMALL_STATE(167)] = 1413,
    [SMALL_STATE(168)] = 1417,
    [SMALL_STATE(169)] = 1421,
    [SMALL_STATE(170)] = 1425,
    [SMALL_STATE(171)] = 1429,
    [SMALL_STATE(172)] = 1433,
    [SMALL_STATE(173)] = 1437,
    [SMALL_STATE(174)] = 1441,
    [SMALL_STATE(175)] = 1445,
    [SMALL_STATE(176)] = 1449,
    [SMALL_STATE(177)] = 1453,
    [SMALL_STATE(178)] = 1457,
    [SMALL_STATE(179)] = 1461,
    [SMALL_STATE(180)] = 1465,
    [SMALL_STATE(181)] = 1469,
    [SMALL_STATE(182)] = 1473,
    [SMALL_STATE(183)] = 1477,
    [SMALL_STATE(184)] = 1481,
    [SMALL_STATE(185)] = 1485,
    [SMALL_STATE(186)] = 1489,
    [SMALL_STATE(187)] = 1493,
    [SMALL_STATE(188)] = 1497,
    [SMALL_STATE(189)] = 1501,
    [SMALL_STATE(190)] = 1505,
    [SMALL_STATE(191)] = 1509,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(5),
    [5] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(3),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(6),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(7),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(165),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(148),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(147),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(145),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(144),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(143),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(142),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(141),
    [27] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(139),
    [29] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(137),
    [31] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(135),
    [33] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(134),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(133),
    [37] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(129),
    [39] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(51),
    [41] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(50),
    [43] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(49),
    [45] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(48),
    [47] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(81),
    [49] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(104),
    [51] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(107),
    [53] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(105),
    [55] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    [57] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(5),
    [60] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(2),
    [63] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(6),
    [66] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(7),
    [69] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(165),
    [72] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(148),
    [75] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(147),
    [78] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(145),
    [81] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(144),
    [84] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(143),
    [87] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(142),
    [90] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(141),
    [93] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(139),
    [96] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(137),
    [99] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(135),
    [102] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(134),
    [105] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(133),
    [108] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(129),
    [111] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(51),
    [114] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(50),
    [117] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(49),
    [120] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(48),
    [123] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(81),
    [126] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(104),
    [129] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(107),
    [132] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(105),
    [135] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [137] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(2),
    [139] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [141] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [143] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(150),
    [146] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__punctuation, 1, 0, 0),
    [148] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__punctuation, 1, 0, 0),
    [150] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(126),
    [152] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(191),
    [154] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(161),
    [156] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 3, 0, 0),
    [158] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 3, 0, 0),
    [160] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(150),
    [162] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 4, 0, 0),
    [164] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 4, 0, 0),
    [166] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 5, 0, 0),
    [168] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 5, 0, 0),
    [170] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 8, 0, 8),
    [172] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 8, 0, 8),
    [174] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_kbd_macro, 6, 0, 0),
    [176] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_kbd_macro, 6, 0, 0),
    [178] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_image_macro, 6, 0, 0),
    [180] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_image_macro, 6, 0, 0),
    [182] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 6, 0, 8),
    [184] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 6, 0, 8),
    [186] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 6, 0, 7),
    [188] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 6, 0, 7),
    [190] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 6, 0, 7),
    [192] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 6, 0, 7),
    [194] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [196] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [198] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_math_macro, 5, 0, 6),
    [200] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_math_macro, 5, 0, 6),
    [202] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_kbd_macro, 5, 0, 0),
    [204] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_kbd_macro, 5, 0, 0),
    [206] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_image_macro, 5, 0, 0),
    [208] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_image_macro, 5, 0, 0),
    [210] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 3, 0, 2),
    [212] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 3, 0, 2),
    [214] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 5, 0, 4),
    [216] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 5, 0, 4),
    [218] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 5, 0, 2),
    [220] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 5, 0, 2),
    [222] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 4, 0, 3),
    [224] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 4, 0, 3),
    [226] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 4, 0, 2),
    [228] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 4, 0, 2),
    [230] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_macro, 6, 0, 9),
    [232] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_macro, 6, 0, 9),
    [234] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [236] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [238] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(180),
    [240] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_menu_macro, 6, 0, 10),
    [242] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_menu_macro, 6, 0, 10),
    [244] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 3, 0, 0),
    [246] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 3, 0, 0),
    [248] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 3, 0, 0),
    [250] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 3, 0, 0),
    [252] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 2, 0, 0),
    [254] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 2, 0, 0),
    [256] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [258] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [260] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [262] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [264] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [266] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [268] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [270] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [272] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_passthrough, 6, 0, 0),
    [274] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_passthrough, 6, 0, 0),
    [276] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [278] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [280] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [282] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [284] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 6, 0, 11),
    [286] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 6, 0, 11),
    [288] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 7, 0, 0),
    [290] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 7, 0, 0),
    [292] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 2, 0, 0),
    [294] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 2, 0, 0),
    [296] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 1),
    [298] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 1),
    [300] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(44),
    [303] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    [305] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(54),
    [308] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(55),
    [311] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(80),
    [314] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(89),
    [317] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(90),
    [320] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(92),
    [323] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(52),
    [326] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(53),
    [329] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(45),
    [332] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    [334] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(93),
    [337] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(82),
    [340] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(83),
    [343] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(99),
    [346] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(44),
    [348] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(35),
    [350] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(54),
    [352] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(55),
    [354] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(80),
    [356] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(89),
    [358] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(90),
    [360] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(92),
    [362] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(67),
    [364] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(52),
    [366] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(53),
    [368] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(60),
    [370] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(39),
    [372] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(93),
    [374] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(82),
    [376] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(83),
    [378] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(99),
    [380] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(59),
    [382] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(58),
    [384] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(36),
    [386] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(46),
    [388] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(47),
    [390] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(64),
    [392] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(61),
    [394] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(57),
    [396] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(65),
    [398] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(56),
    [400] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(45),
    [402] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(68),
    [404] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(33),
    [406] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(13),
    [408] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(103),
    [410] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_image_macro_repeat1, 2, 0, 0),
    [412] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_image_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(103),
    [415] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(111),
    [417] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(108),
    [419] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [421] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(21),
    [423] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    SHIFT_REPEAT(78),
    [426] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    [428] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    SHIFT_REPEAT(79),
    [431] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    [433] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(94),
    [435] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [437] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(106),
    [439] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(42),
    [441] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(101),
    [443] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(72),
    [445] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(102),
    [447] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(71),
    [449] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(182),
    [452] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [454] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(78),
    [456] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(70),
    [458] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(73),
    [460] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(95),
    [462] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(86),
    [464] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(66),
    [466] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(88),
    [468] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(100),
    [470] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(79),
    [472] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(69),
    [474] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(30),
    [476] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(31),
    [478] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(87),
    [480] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(63),
    [482] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_image_macro_repeat1, 1, 0, 5),
    [484] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(98),
    [486] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(96),
    [488] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(32),
    [490] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(97),
    [492] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(114),
    [494] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [496] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_key, 1, 0, 0),
    [498] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(108),
    [501] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat2, 2, 0, 0),
    [503] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(111),
    [506] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat1, 2, 0, 0),
    [508] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(153),
    [510] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(124),
    [512] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [514] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(118),
    [516] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(178),
    [518] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [520] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [522] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(179),
    [524] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(136),
    [526] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [528] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(162),
    [530] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(122),
    [532] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(160),
    [534] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [536] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [538] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(174),
    [540] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [542] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(181),
    [544] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(29),
    [546] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [548] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [550] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(183),
    [552] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(184),
    [554] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(185),
    [556] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(146),
    [558] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(186),
    [560] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(41),
    [562] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(187),
    [564] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(128),
    [566] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(188),
    [568] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(189),
    [570] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(190),
    [572] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(154),
    [574] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(127),
    [576] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [578] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(119),
    [580] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(163),
    [582] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(131),
    [584] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [586] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [588] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(130),
    [590] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [592] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(109),
    [594] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(164),
    [596] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [598] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(172),
    [600] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [602] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [604] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(138),
    [606] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [608] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [610] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(177),
    [612] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [614] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(120),
    [616] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(175),
    [618] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [620] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(149),
    [622] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(152),
    [624] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(159),
    [626] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(140),
    [628] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [630] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [632] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [634] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(132),
    [636] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(123),
    [638] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(155),
    [640] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(156),
    [642] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(157),
    [644] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(158),
    [646] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(166),
    [648] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(110),
    [650] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(167),
    [652] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(168),
    [654] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(169),
    [656] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(170),
    [658] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(171),
    [660] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [662] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(173),
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
