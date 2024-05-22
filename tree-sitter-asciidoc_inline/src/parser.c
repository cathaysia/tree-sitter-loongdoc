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
#define STATE_COUNT 158
#define LARGE_STATE_COUNT 46
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 3
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 11

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
    anon_sym_STAR2 = 78,
    aux_sym_emphasis_token1 = 79,
    anon_sym_BSLASH_STAR = 80,
    anon_sym_STAR3 = 81,
    anon_sym_STAR_STAR = 82,
    anon_sym__2 = 83,
    aux_sym_ltalic_token1 = 84,
    anon_sym_BSLASH_ = 85,
    anon_sym__3 = 86,
    anon_sym___ = 87,
    anon_sym_BQUOTE2 = 88,
    aux_sym_monospace_token1 = 89,
    anon_sym_BSLASH_BQUOTE = 90,
    anon_sym_BQUOTE3 = 91,
    anon_sym_BQUOTE_BQUOTE = 92,
    anon_sym_POUND2 = 93,
    aux_sym_highlight_token1 = 94,
    anon_sym_BSLASH_POUND = 95,
    anon_sym_POUND3 = 96,
    anon_sym_POUND_POUND = 97,
    sym_inline = 98,
    sym_replacement = 99,
    sym_word = 100,
    sym_punctuation = 101,
    sym_anchor = 102,
    sym_footnote_macro = 103,
    sym_image_macro = 104,
    sym_kbd_macro = 105,
    sym_key = 106,
    sym_auto_link = 107,
    sym_link_url = 108,
    sym_link_macro = 109,
    sym_math_macro = 110,
    sym_menu_macro = 111,
    sym_passthrough = 112,
    sym_xref = 113,
    sym_emphasis = 114,
    sym_ltalic = 115,
    sym_monospace = 116,
    sym_highlight = 117,
    aux_sym_inline_repeat1 = 118,
    aux_sym_image_macro_repeat1 = 119,
    aux_sym_kbd_macro_repeat1 = 120,
    aux_sym_kbd_macro_repeat2 = 121,
    aux_sym_link_url_repeat1 = 122,
    aux_sym_emphasis_repeat1 = 123,
    aux_sym_ltalic_repeat1 = 124,
    aux_sym_monospace_repeat1 = 125,
    aux_sym_highlight_repeat1 = 126,
    alias_sym_intrinsic_attributes = 127,
    alias_sym_keys = 128,
    alias_sym_math = 129,
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
    [sym_word] = "word",
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
    [sym_word] = sym_word,
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
    [sym_word] = {
        .visible = true,
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
    [61] = 4,
    [62] = 62,
    [63] = 63,
    [64] = 6,
    [65] = 9,
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
    [82] = 44,
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
    [155] = 133,
    [156] = 99,
    [157] = 150,
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
                '#', 450,
                '$', 296,
                '%', 297,
                '&', 298,
                '\'', 299,
                '(', 300,
                ')', 301,
                '*', 423,
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
                '_', 431,
                '`', 442,
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
                '#', 450,
                '$', 296,
                '%', 297,
                '&', 298,
                '\'', 299,
                '(', 300,
                ')', 301,
                '*', 423,
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
                '_', 431,
                '`', 442,
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
                '#', 450,
                '$', 296,
                '%', 297,
                '&', 298,
                '\'', 299,
                '(', 300,
                ')', 301,
                '*', 423,
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
                '_', 431,
                '`', 442,
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
                ADVANCE(455);
            if(lookahead == '#')
                ADVANCE(456);
            END_STATE();
        case 8:
            if(lookahead == ' ')
                ADVANCE(447);
            if(lookahead == '`')
                ADVANCE(448);
            END_STATE();
        case 9:
            if(lookahead == ' ')
                ADVANCE(428);
            if(lookahead == '*')
                ADVANCE(429);
            END_STATE();
        case 10:
            if(lookahead == ' ')
                ADVANCE(436);
            if(lookahead == '_')
                ADVANCE(437);
            END_STATE();
        case 11:
            if(lookahead == '"')
                ADVANCE(54);
            if(lookahead == '\\')
                ADVANCE(78);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(11);
            END_STATE();
        case 12:
            ADVANCE_MAP(
                '"', 293,
                '$', 14,
                '+', 303,
                ',', 305,
                '.', 307,
                ':', 49,
                '>', 53,
                '[', 316,
                '\\', 62,
                ']', 319,
                '}', 221,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(12);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            END_STATE();
        case 13:
            if(lookahead == '#')
                ADVANCE(7);
            if(lookahead == '\\')
                ADVANCE(452);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(13);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(453);
            if(lookahead != 0)
                ADVANCE(451);
            END_STATE();
        case 14:
            if(lookahead == '$')
                ADVANCE(409);
            END_STATE();
        case 15:
            if(lookahead == '*')
                ADVANCE(9);
            if(lookahead == '\\')
                ADVANCE(425);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(15);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(426);
            if(lookahead != 0)
                ADVANCE(424);
            END_STATE();
        case 16:
            if(lookahead == '+')
                ADVANCE(408);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 17:
            if(lookahead == '+')
                ADVANCE(19);
            if(lookahead == ',')
                ADVANCE(305);
            if(lookahead == '[')
                ADVANCE(316);
            if(lookahead == ']')
                ADVANCE(63);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(17);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(220);
            END_STATE();
        case 18:
            if(lookahead == '+')
                ADVANCE(407);
            END_STATE();
        case 19:
            if(lookahead == '+')
                ADVANCE(18);
            END_STATE();
        case 20:
            if(lookahead == '-')
                ADVANCE(21);
            if(lookahead == '.')
                ADVANCE(76);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            END_STATE();
        case 21:
            if(lookahead == '-')
                ADVANCE(21);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            END_STATE();
        case 22:
            if(lookahead == '-')
                ADVANCE(22);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(339);
            END_STATE();
        case 23:
            if(lookahead == '-')
                ADVANCE(30);
            if(lookahead == '0')
                ADVANCE(28);
            if(lookahead == '1')
                ADVANCE(27);
            if(lookahead == '2')
                ADVANCE(24);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(26);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            END_STATE();
        case 24:
            if(lookahead == '-')
                ADVANCE(30);
            if(lookahead == '5')
                ADVANCE(25);
            if(lookahead == ':')
                ADVANCE(58);
            if(lookahead == ']')
                ADVANCE(338);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(28);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(26);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            END_STATE();
        case 25:
            if(lookahead == '-')
                ADVANCE(30);
            if(lookahead == ':')
                ADVANCE(58);
            if(lookahead == ']')
                ADVANCE(338);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(28);
            if(('6' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            END_STATE();
        case 26:
            if(lookahead == '-')
                ADVANCE(30);
            if(lookahead == ':')
                ADVANCE(58);
            if(lookahead == ']')
                ADVANCE(338);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(28);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            END_STATE();
        case 27:
            if(lookahead == '-')
                ADVANCE(30);
            if(lookahead == ':')
                ADVANCE(58);
            if(lookahead == ']')
                ADVANCE(338);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(26);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            END_STATE();
        case 28:
            if(lookahead == '-')
                ADVANCE(30);
            if(lookahead == ':')
                ADVANCE(58);
            if(lookahead == ']')
                ADVANCE(338);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            END_STATE();
        case 29:
            if(lookahead == '-')
                ADVANCE(30);
            if(lookahead == ':')
                ADVANCE(58);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            END_STATE();
        case 30:
            if(lookahead == '-')
                ADVANCE(30);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            END_STATE();
        case 31:
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 32:
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 33:
            if(lookahead == '.')
                ADVANCE(23);
            END_STATE();
        case 34:
            if(lookahead == '.')
                ADVANCE(23);
            if(lookahead == '5')
                ADVANCE(35);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(33);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(36);
            END_STATE();
        case 35:
            if(lookahead == '.')
                ADVANCE(23);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(33);
            END_STATE();
        case 36:
            if(lookahead == '.')
                ADVANCE(23);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(33);
            END_STATE();
        case 37:
            if(lookahead == '.')
                ADVANCE(23);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(36);
            END_STATE();
        case 38:
            if(lookahead == '.')
                ADVANCE(51);
            END_STATE();
        case 39:
            if(lookahead == '.')
                ADVANCE(51);
            if(lookahead == '5')
                ADVANCE(40);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(38);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(41);
            END_STATE();
        case 40:
            if(lookahead == '.')
                ADVANCE(51);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(38);
            END_STATE();
        case 41:
            if(lookahead == '.')
                ADVANCE(51);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(38);
            END_STATE();
        case 42:
            if(lookahead == '.')
                ADVANCE(51);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(41);
            END_STATE();
        case 43:
            if(lookahead == '.')
                ADVANCE(52);
            END_STATE();
        case 44:
            if(lookahead == '.')
                ADVANCE(52);
            if(lookahead == '5')
                ADVANCE(45);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(43);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(46);
            END_STATE();
        case 45:
            if(lookahead == '.')
                ADVANCE(52);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(43);
            END_STATE();
        case 46:
            if(lookahead == '.')
                ADVANCE(52);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(43);
            END_STATE();
        case 47:
            if(lookahead == '.')
                ADVANCE(52);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(46);
            END_STATE();
        case 48:
            if(lookahead == '/')
                ADVANCE(386);
            END_STATE();
        case 49:
            if(lookahead == '/')
                ADVANCE(48);
            END_STATE();
        case 50:
            if(lookahead == '0')
                ADVANCE(43);
            if(lookahead == '1')
                ADVANCE(47);
            if(lookahead == '2')
                ADVANCE(44);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(46);
            END_STATE();
        case 51:
            if(lookahead == '0')
                ADVANCE(33);
            if(lookahead == '1')
                ADVANCE(37);
            if(lookahead == '2')
                ADVANCE(34);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(36);
            END_STATE();
        case 52:
            if(lookahead == '0')
                ADVANCE(38);
            if(lookahead == '1')
                ADVANCE(42);
            if(lookahead == '2')
                ADVANCE(39);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(41);
            END_STATE();
        case 53:
            if(lookahead == '>')
                ADVANCE(419);
            END_STATE();
        case 54:
            if(lookahead == '@')
                ADVANCE(55);
            END_STATE();
        case 55:
            if(lookahead == '[')
                ADVANCE(50);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            END_STATE();
        case 56:
            if(lookahead == '\\')
                ADVANCE(57);
            if(lookahead == ']')
                ADVANCE(340);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(56);
            END_STATE();
        case 57:
            if(lookahead == '\\')
                ADVANCE(57);
            if(lookahead == ']')
                ADVANCE(340);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(56);
            END_STATE();
        case 58:
            if(lookahead == '\\')
                ADVANCE(57);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(56);
            END_STATE();
        case 59:
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
        case 60:
            if(lookahead == '\\')
                ADVANCE(445);
            if(lookahead == '`')
                ADVANCE(8);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(60);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(444);
            if(lookahead != 0)
                ADVANCE(443);
            END_STATE();
        case 61:
            if(lookahead == '\\')
                ADVANCE(434);
            if(lookahead == '_')
                ADVANCE(10);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(61);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(433);
            if(lookahead != 0)
                ADVANCE(432);
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
                SKIP(71);
            if(lookahead != 0 &&
               lookahead != '.' &&
               lookahead != '>' &&
               lookahead != '[')
                ADVANCE(387);
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
                ADVANCE(329);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(330);
            END_STATE();
        case 74:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(74);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(394);
            END_STATE();
        case 75:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(355);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(356);
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
                ADVANCE(32);
            END_STATE();
        case 78:
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(11);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 83:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
            END_STATE();
        case 292:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 293:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 294:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(54);
            if(lookahead == '\\')
                ADVANCE(78);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(11);
            END_STATE();
        case 295:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(457);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('$' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 296:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(410);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 297:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 298:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 299:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(430);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 303:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 304:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '+')
                ADVANCE(16);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 305:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 306:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 307:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 308:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 313:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 314:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 321:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(440);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(441);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 323:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(438);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(439);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '`')
                ADVANCE(449);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 326:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 327:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(22);
            if(lookahead == '.')
                ADVANCE(76);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(339);
            END_STATE();
        case 340:
            ACCEPT_TOKEN(sym_email);
            if(lookahead == '\\')
                ADVANCE(57);
            if(lookahead == ']')
                ADVANCE(340);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(56);
            END_STATE();
        case 341:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 409:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            END_STATE();
        case 410:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 411:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
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
                ADVANCE(55);
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
                ADVANCE(32);
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
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 423:
            ACCEPT_TOKEN(anon_sym_STAR2);
            END_STATE();
        case 424:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            END_STATE();
        case 425:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '*')
                ADVANCE(427);
            END_STATE();
        case 426:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '\\')
                ADVANCE(425);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(426);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(424);
            END_STATE();
        case 427:
            ACCEPT_TOKEN(anon_sym_BSLASH_STAR);
            END_STATE();
        case 428:
            ACCEPT_TOKEN(anon_sym_STAR3);
            END_STATE();
        case 429:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            END_STATE();
        case 430:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 431:
            ACCEPT_TOKEN(anon_sym__2);
            END_STATE();
        case 432:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            END_STATE();
        case 433:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '\\')
                ADVANCE(434);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(433);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_')
                ADVANCE(432);
            END_STATE();
        case 434:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '_')
                ADVANCE(435);
            END_STATE();
        case 435:
            ACCEPT_TOKEN(anon_sym_BSLASH_);
            END_STATE();
        case 436:
            ACCEPT_TOKEN(anon_sym__3);
            END_STATE();
        case 437:
            ACCEPT_TOKEN(anon_sym___);
            END_STATE();
        case 438:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '_')
                ADVANCE(31);
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
                ADVANCE(32);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(290);
            END_STATE();
        case 439:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
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
                ADVANCE(32);
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
        case 440:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(220);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(218);
            END_STATE();
        case 441:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 442:
            ACCEPT_TOKEN(anon_sym_BQUOTE2);
            END_STATE();
        case 443:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            END_STATE();
        case 444:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '\\')
                ADVANCE(445);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(444);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '`')
                ADVANCE(443);
            END_STATE();
        case 445:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '`')
                ADVANCE(446);
            END_STATE();
        case 446:
            ACCEPT_TOKEN(anon_sym_BSLASH_BQUOTE);
            END_STATE();
        case 447:
            ACCEPT_TOKEN(anon_sym_BQUOTE3);
            END_STATE();
        case 448:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            END_STATE();
        case 449:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 450:
            ACCEPT_TOKEN(anon_sym_POUND2);
            END_STATE();
        case 451:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            END_STATE();
        case 452:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '#')
                ADVANCE(454);
            END_STATE();
        case 453:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '\\')
                ADVANCE(452);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(453);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '#')
                ADVANCE(451);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(anon_sym_BSLASH_POUND);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(anon_sym_POUND3);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead == '.')
                ADVANCE(77);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
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
    [7] = { .lex_state = 79 },
    [8] = { .lex_state = 80 },
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
    [45] = { .lex_state = 79 },
    [46] = { .lex_state = 59 },
    [47] = { .lex_state = 59 },
    [48] = { .lex_state = 13 },
    [49] = { .lex_state = 59 },
    [50] = { .lex_state = 60 },
    [51] = { .lex_state = 12 },
    [52] = { .lex_state = 15 },
    [53] = { .lex_state = 61 },
    [54] = { .lex_state = 61 },
    [55] = { .lex_state = 15 },
    [56] = { .lex_state = 60 },
    [57] = { .lex_state = 60 },
    [58] = { .lex_state = 15 },
    [59] = { .lex_state = 13 },
    [60] = { .lex_state = 13 },
    [61] = { .lex_state = 12 },
    [62] = { .lex_state = 61 },
    [63] = { .lex_state = 61 },
    [64] = { .lex_state = 12 },
    [65] = { .lex_state = 12 },
    [66] = { .lex_state = 15 },
    [67] = { .lex_state = 59 },
    [68] = { .lex_state = 15 },
    [69] = { .lex_state = 61 },
    [70] = { .lex_state = 60 },
    [71] = { .lex_state = 60 },
    [72] = { .lex_state = 13 },
    [73] = { .lex_state = 13 },
    [74] = { .lex_state = 12 },
    [75] = { .lex_state = 12 },
    [76] = { .lex_state = 0 },
    [77] = { .lex_state = 12 },
    [78] = { .lex_state = 12 },
    [79] = { .lex_state = 0 },
    [80] = { .lex_state = 12 },
    [81] = { .lex_state = 12 },
    [82] = { .lex_state = 12 },
    [83] = { .lex_state = 12 },
    [84] = { .lex_state = 0 },
    [85] = { .lex_state = 12 },
    [86] = { .lex_state = 335 },
    [87] = { .lex_state = 17 },
    [88] = { .lex_state = 17 },
    [89] = { .lex_state = 0 },
    [90] = { .lex_state = 335 },
    [91] = { .lex_state = 0 },
    [92] = { .lex_state = 12 },
    [93] = { .lex_state = 0 },
    [94] = { .lex_state = 0 },
    [95] = { .lex_state = 0 },
    [96] = { .lex_state = 17 },
    [97] = { .lex_state = 335 },
    [98] = { .lex_state = 17 },
    [99] = { .lex_state = 71 },
    [100] = { .lex_state = 12 },
    [101] = { .lex_state = 335 },
    [102] = { .lex_state = 0 },
    [103] = { .lex_state = 335 },
    [104] = { .lex_state = 335 },
    [105] = { .lex_state = 12 },
    [106] = { .lex_state = 335 },
    [107] = { .lex_state = 12 },
    [108] = { .lex_state = 12 },
    [109] = { .lex_state = 12 },
    [110] = { .lex_state = 0 },
    [111] = { .lex_state = 0 },
    [112] = { .lex_state = 335 },
    [113] = { .lex_state = 12 },
    [114] = { .lex_state = 72 },
    [115] = { .lex_state = 12 },
    [116] = { .lex_state = 12 },
    [117] = { .lex_state = 12 },
    [118] = { .lex_state = 73 },
    [119] = { .lex_state = 369 },
    [120] = { .lex_state = 335 },
    [121] = { .lex_state = 17 },
    [122] = { .lex_state = 417 },
    [123] = { .lex_state = 67 },
    [124] = { .lex_state = 12 },
    [125] = { .lex_state = 17 },
    [126] = { .lex_state = 0 },
    [127] = { .lex_state = 17 },
    [128] = { .lex_state = 0 },
    [129] = { .lex_state = 0 },
    [130] = { .lex_state = 0 },
    [131] = { .lex_state = 12 },
    [132] = { .lex_state = 74 },
    [133] = { .lex_state = 71 },
    [134] = { .lex_state = 72 },
    [135] = { .lex_state = 75 },
    [136] = { .lex_state = 0 },
    [137] = { .lex_state = 17 },
    [138] = { .lex_state = 12 },
    [139] = { .lex_state = 12 },
    [140] = { .lex_state = 0 },
    [141] = { .lex_state = 0 },
    [142] = { .lex_state = 17 },
    [143] = { .lex_state = 0 },
    [144] = { .lex_state = 17 },
    [145] = { .lex_state = 17 },
    [146] = { .lex_state = 0 },
    [147] = { .lex_state = 0 },
    [148] = { .lex_state = 0 },
    [149] = { .lex_state = 0 },
    [150] = { .lex_state = 12 },
    [151] = { .lex_state = 0 },
    [152] = { .lex_state = 0 },
    [153] = { .lex_state = 0 },
    [154] = { .lex_state = 0 },
    [155] = { .lex_state = 71 },
    [156] = { .lex_state = 71 },
    [157] = { .lex_state = 12 },
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
        [sym_inline] = STATE(140),
        [sym_replacement] = STATE(3),
        [sym_word] = STATE(3),
        [sym_punctuation] = STATE(3),
        [sym_anchor] = STATE(3),
        [sym_footnote_macro] = STATE(3),
        [sym_image_macro] = STATE(3),
        [sym_kbd_macro] = STATE(3),
        [sym_auto_link] = STATE(3),
        [sym_link_url] = STATE(30),
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
        [sym_email] = ACTIONS(17),
        [anon_sym_footnote] = ACTIONS(19),
        [anon_sym_footnoteref] = ACTIONS(19),
        [anon_sym_image] = ACTIONS(21),
        [anon_sym_icon] = ACTIONS(21),
        [anon_sym_kbd] = ACTIONS(23),
        [anon_sym_btn] = ACTIONS(23),
        [anon_sym_http] = ACTIONS(25),
        [anon_sym_https] = ACTIONS(25),
        [anon_sym_file] = ACTIONS(25),
        [anon_sym_ftp] = ACTIONS(25),
        [anon_sym_irc] = ACTIONS(25),
        [anon_sym_link] = ACTIONS(27),
        [anon_sym_mailto] = ACTIONS(27),
        [anon_sym_stem] = ACTIONS(29),
        [anon_sym_latexmath] = ACTIONS(29),
        [anon_sym_asciimath] = ACTIONS(29),
        [anon_sym_menu] = ACTIONS(31),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(33),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(35),
        [anon_sym_pass] = ACTIONS(37),
        [anon_sym_LT_LT] = ACTIONS(39),
        [anon_sym_xref] = ACTIONS(41),
        [anon_sym_STAR2] = ACTIONS(43),
        [anon_sym_STAR_STAR] = ACTIONS(45),
        [anon_sym__2] = ACTIONS(47),
        [anon_sym___] = ACTIONS(49),
        [anon_sym_BQUOTE2] = ACTIONS(51),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(53),
        [anon_sym_POUND2] = ACTIONS(55),
        [anon_sym_POUND_POUND] = ACTIONS(57),
    },
    [2] = {
        [sym_replacement] = STATE(2),
        [sym_word] = STATE(2),
        [sym_punctuation] = STATE(2),
        [sym_anchor] = STATE(2),
        [sym_footnote_macro] = STATE(2),
        [sym_image_macro] = STATE(2),
        [sym_kbd_macro] = STATE(2),
        [sym_auto_link] = STATE(2),
        [sym_link_url] = STATE(30),
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
        [ts_builtin_sym_end] = ACTIONS(59),
        [anon_sym_LBRACE] = ACTIONS(61),
        [anon_sym_RBRACE] = ACTIONS(64),
        [sym__word_no_digit] = ACTIONS(67),
        [sym__digits] = ACTIONS(67),
        [anon_sym_BANG] = ACTIONS(64),
        [anon_sym_DQUOTE] = ACTIONS(70),
        [anon_sym_POUND] = ACTIONS(64),
        [anon_sym_DOLLAR] = ACTIONS(64),
        [anon_sym_PERCENT] = ACTIONS(64),
        [anon_sym_AMP] = ACTIONS(64),
        [anon_sym_SQUOTE] = ACTIONS(64),
        [anon_sym_LPAREN] = ACTIONS(64),
        [anon_sym_RPAREN] = ACTIONS(64),
        [anon_sym_STAR] = ACTIONS(64),
        [anon_sym_PLUS] = ACTIONS(73),
        [anon_sym_COMMA] = ACTIONS(64),
        [anon_sym_DASH] = ACTIONS(64),
        [anon_sym_DOT] = ACTIONS(64),
        [anon_sym_SLASH] = ACTIONS(64),
        [anon_sym_COLON] = ACTIONS(64),
        [anon_sym_SEMI] = ACTIONS(64),
        [anon_sym_LT] = ACTIONS(64),
        [anon_sym_EQ] = ACTIONS(64),
        [anon_sym_GT] = ACTIONS(64),
        [anon_sym_QMARK] = ACTIONS(64),
        [anon_sym_AT] = ACTIONS(64),
        [anon_sym_LBRACK] = ACTIONS(64),
        [anon_sym_BSLASH] = ACTIONS(64),
        [anon_sym_RBRACK] = ACTIONS(64),
        [anon_sym_CARET] = ACTIONS(64),
        [anon_sym__] = ACTIONS(64),
        [anon_sym_BQUOTE] = ACTIONS(64),
        [anon_sym_PIPE] = ACTIONS(64),
        [anon_sym_TILDE] = ACTIONS(64),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(76),
        [anon_sym_anchor] = ACTIONS(79),
        [sym_email] = ACTIONS(82),
        [anon_sym_footnote] = ACTIONS(85),
        [anon_sym_footnoteref] = ACTIONS(85),
        [anon_sym_image] = ACTIONS(88),
        [anon_sym_icon] = ACTIONS(88),
        [anon_sym_kbd] = ACTIONS(91),
        [anon_sym_btn] = ACTIONS(91),
        [anon_sym_http] = ACTIONS(94),
        [anon_sym_https] = ACTIONS(94),
        [anon_sym_file] = ACTIONS(94),
        [anon_sym_ftp] = ACTIONS(94),
        [anon_sym_irc] = ACTIONS(94),
        [anon_sym_link] = ACTIONS(97),
        [anon_sym_mailto] = ACTIONS(97),
        [anon_sym_stem] = ACTIONS(100),
        [anon_sym_latexmath] = ACTIONS(100),
        [anon_sym_asciimath] = ACTIONS(100),
        [anon_sym_menu] = ACTIONS(103),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(106),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(109),
        [anon_sym_pass] = ACTIONS(112),
        [anon_sym_LT_LT] = ACTIONS(115),
        [anon_sym_xref] = ACTIONS(118),
        [anon_sym_STAR2] = ACTIONS(121),
        [anon_sym_STAR_STAR] = ACTIONS(124),
        [anon_sym__2] = ACTIONS(127),
        [anon_sym___] = ACTIONS(130),
        [anon_sym_BQUOTE2] = ACTIONS(133),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(136),
        [anon_sym_POUND2] = ACTIONS(139),
        [anon_sym_POUND_POUND] = ACTIONS(142),
    },
    [3] = {
        [sym_replacement] = STATE(2),
        [sym_word] = STATE(2),
        [sym_punctuation] = STATE(2),
        [sym_anchor] = STATE(2),
        [sym_footnote_macro] = STATE(2),
        [sym_image_macro] = STATE(2),
        [sym_kbd_macro] = STATE(2),
        [sym_auto_link] = STATE(2),
        [sym_link_url] = STATE(30),
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
        [ts_builtin_sym_end] = ACTIONS(145),
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
        [sym_email] = ACTIONS(147),
        [anon_sym_footnote] = ACTIONS(19),
        [anon_sym_footnoteref] = ACTIONS(19),
        [anon_sym_image] = ACTIONS(21),
        [anon_sym_icon] = ACTIONS(21),
        [anon_sym_kbd] = ACTIONS(23),
        [anon_sym_btn] = ACTIONS(23),
        [anon_sym_http] = ACTIONS(25),
        [anon_sym_https] = ACTIONS(25),
        [anon_sym_file] = ACTIONS(25),
        [anon_sym_ftp] = ACTIONS(25),
        [anon_sym_irc] = ACTIONS(25),
        [anon_sym_link] = ACTIONS(27),
        [anon_sym_mailto] = ACTIONS(27),
        [anon_sym_stem] = ACTIONS(29),
        [anon_sym_latexmath] = ACTIONS(29),
        [anon_sym_asciimath] = ACTIONS(29),
        [anon_sym_menu] = ACTIONS(31),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(33),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(35),
        [anon_sym_pass] = ACTIONS(37),
        [anon_sym_LT_LT] = ACTIONS(39),
        [anon_sym_xref] = ACTIONS(41),
        [anon_sym_STAR2] = ACTIONS(43),
        [anon_sym_STAR_STAR] = ACTIONS(45),
        [anon_sym__2] = ACTIONS(47),
        [anon_sym___] = ACTIONS(49),
        [anon_sym_BQUOTE2] = ACTIONS(51),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(53),
        [anon_sym_POUND2] = ACTIONS(55),
        [anon_sym_POUND_POUND] = ACTIONS(57),
    },
    [4] = {
        [aux_sym_link_url_repeat1] = STATE(6),
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
        [anon_sym_DOT] = ACTIONS(153),
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
        [sym_email] = ACTIONS(151),
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
        [anon_sym_LT_LT] = ACTIONS(151),
        [anon_sym_xref] = ACTIONS(151),
        [anon_sym_STAR2] = ACTIONS(151),
        [anon_sym_STAR_STAR] = ACTIONS(151),
        [anon_sym__2] = ACTIONS(151),
        [anon_sym___] = ACTIONS(151),
        [anon_sym_BQUOTE2] = ACTIONS(151),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(151),
        [anon_sym_POUND2] = ACTIONS(151),
        [anon_sym_POUND_POUND] = ACTIONS(151),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(155),
        [anon_sym_LBRACE] = ACTIONS(157),
        [aux_sym_replacement_token1] = ACTIONS(159),
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
        [sym_email] = ACTIONS(157),
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
        [anon_sym_STAR2] = ACTIONS(157),
        [anon_sym_STAR_STAR] = ACTIONS(157),
        [anon_sym__2] = ACTIONS(157),
        [anon_sym___] = ACTIONS(157),
        [anon_sym_BQUOTE2] = ACTIONS(157),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(157),
        [anon_sym_POUND2] = ACTIONS(157),
        [anon_sym_POUND_POUND] = ACTIONS(157),
    },
    [6] = {
        [aux_sym_link_url_repeat1] = STATE(6),
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
    [7] = {
        [sym_link_url] = STATE(85),
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
        [sym_email] = ACTIONS(157),
        [anon_sym_footnote] = ACTIONS(157),
        [anon_sym_footnoteref] = ACTIONS(157),
        [anon_sym_image] = ACTIONS(157),
        [anon_sym_icon] = ACTIONS(157),
        [anon_sym_kbd] = ACTIONS(157),
        [anon_sym_btn] = ACTIONS(157),
        [anon_sym_http] = ACTIONS(168),
        [anon_sym_https] = ACTIONS(168),
        [anon_sym_file] = ACTIONS(168),
        [anon_sym_ftp] = ACTIONS(168),
        [anon_sym_irc] = ACTIONS(168),
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
        [anon_sym_STAR2] = ACTIONS(157),
        [anon_sym_STAR_STAR] = ACTIONS(157),
        [anon_sym__2] = ACTIONS(157),
        [anon_sym___] = ACTIONS(157),
        [anon_sym_BQUOTE2] = ACTIONS(157),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(157),
        [anon_sym_POUND2] = ACTIONS(157),
        [anon_sym_POUND_POUND] = ACTIONS(157),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(155),
        [anon_sym_LBRACE] = ACTIONS(157),
        [aux_sym_replacement_token1] = ACTIONS(170),
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
        [sym_email] = ACTIONS(157),
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
        [anon_sym_STAR2] = ACTIONS(157),
        [anon_sym_STAR_STAR] = ACTIONS(157),
        [anon_sym__2] = ACTIONS(157),
        [anon_sym___] = ACTIONS(157),
        [anon_sym_BQUOTE2] = ACTIONS(157),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(157),
        [anon_sym_POUND2] = ACTIONS(157),
        [anon_sym_POUND_POUND] = ACTIONS(157),
    },
    [9] = {
        [aux_sym_link_url_repeat1] = STATE(4),
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
        [anon_sym_DOT] = ACTIONS(153),
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
        [sym_email] = ACTIONS(174),
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
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(174),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(174),
        [anon_sym_pass] = ACTIONS(174),
        [anon_sym_LT_LT] = ACTIONS(174),
        [anon_sym_xref] = ACTIONS(174),
        [anon_sym_STAR2] = ACTIONS(174),
        [anon_sym_STAR_STAR] = ACTIONS(174),
        [anon_sym__2] = ACTIONS(174),
        [anon_sym___] = ACTIONS(174),
        [anon_sym_BQUOTE2] = ACTIONS(174),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(174),
        [anon_sym_POUND2] = ACTIONS(174),
        [anon_sym_POUND_POUND] = ACTIONS(174),
    },
    [10] = {
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
        [sym_email] = ACTIONS(178),
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
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(178),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(178),
        [anon_sym_pass] = ACTIONS(178),
        [anon_sym_LT_LT] = ACTIONS(178),
        [anon_sym_xref] = ACTIONS(178),
        [anon_sym_STAR2] = ACTIONS(178),
        [anon_sym_STAR_STAR] = ACTIONS(178),
        [anon_sym__2] = ACTIONS(178),
        [anon_sym___] = ACTIONS(178),
        [anon_sym_BQUOTE2] = ACTIONS(178),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(178),
        [anon_sym_POUND2] = ACTIONS(178),
        [anon_sym_POUND_POUND] = ACTIONS(178),
    },
    [11] = {
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
        [sym_email] = ACTIONS(182),
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
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(182),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(182),
        [anon_sym_pass] = ACTIONS(182),
        [anon_sym_LT_LT] = ACTIONS(182),
        [anon_sym_xref] = ACTIONS(182),
        [anon_sym_STAR2] = ACTIONS(182),
        [anon_sym_STAR_STAR] = ACTIONS(182),
        [anon_sym__2] = ACTIONS(182),
        [anon_sym___] = ACTIONS(182),
        [anon_sym_BQUOTE2] = ACTIONS(182),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(182),
        [anon_sym_POUND2] = ACTIONS(182),
        [anon_sym_POUND_POUND] = ACTIONS(182),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(184),
        [anon_sym_LBRACE] = ACTIONS(186),
        [anon_sym_RBRACE] = ACTIONS(186),
        [sym__word_no_digit] = ACTIONS(186),
        [sym__digits] = ACTIONS(186),
        [anon_sym_BANG] = ACTIONS(186),
        [anon_sym_DQUOTE] = ACTIONS(186),
        [anon_sym_POUND] = ACTIONS(186),
        [anon_sym_DOLLAR] = ACTIONS(186),
        [anon_sym_PERCENT] = ACTIONS(186),
        [anon_sym_AMP] = ACTIONS(186),
        [anon_sym_SQUOTE] = ACTIONS(186),
        [anon_sym_LPAREN] = ACTIONS(186),
        [anon_sym_RPAREN] = ACTIONS(186),
        [anon_sym_STAR] = ACTIONS(186),
        [anon_sym_PLUS] = ACTIONS(186),
        [anon_sym_COMMA] = ACTIONS(186),
        [anon_sym_DASH] = ACTIONS(186),
        [anon_sym_DOT] = ACTIONS(186),
        [anon_sym_SLASH] = ACTIONS(186),
        [anon_sym_COLON] = ACTIONS(186),
        [anon_sym_SEMI] = ACTIONS(186),
        [anon_sym_LT] = ACTIONS(186),
        [anon_sym_EQ] = ACTIONS(186),
        [anon_sym_GT] = ACTIONS(186),
        [anon_sym_QMARK] = ACTIONS(186),
        [anon_sym_AT] = ACTIONS(186),
        [anon_sym_LBRACK] = ACTIONS(186),
        [anon_sym_BSLASH] = ACTIONS(186),
        [anon_sym_RBRACK] = ACTIONS(186),
        [anon_sym_CARET] = ACTIONS(186),
        [anon_sym__] = ACTIONS(186),
        [anon_sym_BQUOTE] = ACTIONS(186),
        [anon_sym_PIPE] = ACTIONS(186),
        [anon_sym_TILDE] = ACTIONS(186),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(186),
        [anon_sym_anchor] = ACTIONS(186),
        [sym_email] = ACTIONS(186),
        [anon_sym_footnote] = ACTIONS(186),
        [anon_sym_footnoteref] = ACTIONS(186),
        [anon_sym_image] = ACTIONS(186),
        [anon_sym_icon] = ACTIONS(186),
        [anon_sym_kbd] = ACTIONS(186),
        [anon_sym_btn] = ACTIONS(186),
        [anon_sym_http] = ACTIONS(186),
        [anon_sym_https] = ACTIONS(186),
        [anon_sym_file] = ACTIONS(186),
        [anon_sym_ftp] = ACTIONS(186),
        [anon_sym_irc] = ACTIONS(186),
        [anon_sym_link] = ACTIONS(186),
        [anon_sym_mailto] = ACTIONS(186),
        [anon_sym_stem] = ACTIONS(186),
        [anon_sym_latexmath] = ACTIONS(186),
        [anon_sym_asciimath] = ACTIONS(186),
        [anon_sym_menu] = ACTIONS(186),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(186),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(186),
        [anon_sym_pass] = ACTIONS(186),
        [anon_sym_LT_LT] = ACTIONS(186),
        [anon_sym_xref] = ACTIONS(186),
        [anon_sym_STAR2] = ACTIONS(186),
        [anon_sym_STAR_STAR] = ACTIONS(186),
        [anon_sym__2] = ACTIONS(186),
        [anon_sym___] = ACTIONS(186),
        [anon_sym_BQUOTE2] = ACTIONS(186),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(186),
        [anon_sym_POUND2] = ACTIONS(186),
        [anon_sym_POUND_POUND] = ACTIONS(186),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(188),
        [anon_sym_LBRACE] = ACTIONS(190),
        [anon_sym_RBRACE] = ACTIONS(190),
        [sym__word_no_digit] = ACTIONS(190),
        [sym__digits] = ACTIONS(190),
        [anon_sym_BANG] = ACTIONS(190),
        [anon_sym_DQUOTE] = ACTIONS(190),
        [anon_sym_POUND] = ACTIONS(190),
        [anon_sym_DOLLAR] = ACTIONS(190),
        [anon_sym_PERCENT] = ACTIONS(190),
        [anon_sym_AMP] = ACTIONS(190),
        [anon_sym_SQUOTE] = ACTIONS(190),
        [anon_sym_LPAREN] = ACTIONS(190),
        [anon_sym_RPAREN] = ACTIONS(190),
        [anon_sym_STAR] = ACTIONS(190),
        [anon_sym_PLUS] = ACTIONS(190),
        [anon_sym_COMMA] = ACTIONS(190),
        [anon_sym_DASH] = ACTIONS(190),
        [anon_sym_DOT] = ACTIONS(190),
        [anon_sym_SLASH] = ACTIONS(190),
        [anon_sym_COLON] = ACTIONS(190),
        [anon_sym_SEMI] = ACTIONS(190),
        [anon_sym_LT] = ACTIONS(190),
        [anon_sym_EQ] = ACTIONS(190),
        [anon_sym_GT] = ACTIONS(190),
        [anon_sym_QMARK] = ACTIONS(190),
        [anon_sym_AT] = ACTIONS(190),
        [anon_sym_LBRACK] = ACTIONS(190),
        [anon_sym_BSLASH] = ACTIONS(190),
        [anon_sym_RBRACK] = ACTIONS(190),
        [anon_sym_CARET] = ACTIONS(190),
        [anon_sym__] = ACTIONS(190),
        [anon_sym_BQUOTE] = ACTIONS(190),
        [anon_sym_PIPE] = ACTIONS(190),
        [anon_sym_TILDE] = ACTIONS(190),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(190),
        [anon_sym_anchor] = ACTIONS(190),
        [sym_email] = ACTIONS(190),
        [anon_sym_footnote] = ACTIONS(190),
        [anon_sym_footnoteref] = ACTIONS(190),
        [anon_sym_image] = ACTIONS(190),
        [anon_sym_icon] = ACTIONS(190),
        [anon_sym_kbd] = ACTIONS(190),
        [anon_sym_btn] = ACTIONS(190),
        [anon_sym_http] = ACTIONS(190),
        [anon_sym_https] = ACTIONS(190),
        [anon_sym_file] = ACTIONS(190),
        [anon_sym_ftp] = ACTIONS(190),
        [anon_sym_irc] = ACTIONS(190),
        [anon_sym_link] = ACTIONS(190),
        [anon_sym_mailto] = ACTIONS(190),
        [anon_sym_stem] = ACTIONS(190),
        [anon_sym_latexmath] = ACTIONS(190),
        [anon_sym_asciimath] = ACTIONS(190),
        [anon_sym_menu] = ACTIONS(190),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(190),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(190),
        [anon_sym_pass] = ACTIONS(190),
        [anon_sym_LT_LT] = ACTIONS(190),
        [anon_sym_xref] = ACTIONS(190),
        [anon_sym_STAR2] = ACTIONS(190),
        [anon_sym_STAR_STAR] = ACTIONS(190),
        [anon_sym__2] = ACTIONS(190),
        [anon_sym___] = ACTIONS(190),
        [anon_sym_BQUOTE2] = ACTIONS(190),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(190),
        [anon_sym_POUND2] = ACTIONS(190),
        [anon_sym_POUND_POUND] = ACTIONS(190),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(192),
        [anon_sym_LBRACE] = ACTIONS(194),
        [anon_sym_RBRACE] = ACTIONS(194),
        [sym__word_no_digit] = ACTIONS(194),
        [sym__digits] = ACTIONS(194),
        [anon_sym_BANG] = ACTIONS(194),
        [anon_sym_DQUOTE] = ACTIONS(194),
        [anon_sym_POUND] = ACTIONS(194),
        [anon_sym_DOLLAR] = ACTIONS(194),
        [anon_sym_PERCENT] = ACTIONS(194),
        [anon_sym_AMP] = ACTIONS(194),
        [anon_sym_SQUOTE] = ACTIONS(194),
        [anon_sym_LPAREN] = ACTIONS(194),
        [anon_sym_RPAREN] = ACTIONS(194),
        [anon_sym_STAR] = ACTIONS(194),
        [anon_sym_PLUS] = ACTIONS(194),
        [anon_sym_COMMA] = ACTIONS(194),
        [anon_sym_DASH] = ACTIONS(194),
        [anon_sym_DOT] = ACTIONS(194),
        [anon_sym_SLASH] = ACTIONS(194),
        [anon_sym_COLON] = ACTIONS(194),
        [anon_sym_SEMI] = ACTIONS(194),
        [anon_sym_LT] = ACTIONS(194),
        [anon_sym_EQ] = ACTIONS(194),
        [anon_sym_GT] = ACTIONS(194),
        [anon_sym_QMARK] = ACTIONS(194),
        [anon_sym_AT] = ACTIONS(194),
        [anon_sym_LBRACK] = ACTIONS(194),
        [anon_sym_BSLASH] = ACTIONS(194),
        [anon_sym_RBRACK] = ACTIONS(194),
        [anon_sym_CARET] = ACTIONS(194),
        [anon_sym__] = ACTIONS(194),
        [anon_sym_BQUOTE] = ACTIONS(194),
        [anon_sym_PIPE] = ACTIONS(194),
        [anon_sym_TILDE] = ACTIONS(194),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(194),
        [anon_sym_anchor] = ACTIONS(194),
        [sym_email] = ACTIONS(194),
        [anon_sym_footnote] = ACTIONS(194),
        [anon_sym_footnoteref] = ACTIONS(194),
        [anon_sym_image] = ACTIONS(194),
        [anon_sym_icon] = ACTIONS(194),
        [anon_sym_kbd] = ACTIONS(194),
        [anon_sym_btn] = ACTIONS(194),
        [anon_sym_http] = ACTIONS(194),
        [anon_sym_https] = ACTIONS(194),
        [anon_sym_file] = ACTIONS(194),
        [anon_sym_ftp] = ACTIONS(194),
        [anon_sym_irc] = ACTIONS(194),
        [anon_sym_link] = ACTIONS(194),
        [anon_sym_mailto] = ACTIONS(194),
        [anon_sym_stem] = ACTIONS(194),
        [anon_sym_latexmath] = ACTIONS(194),
        [anon_sym_asciimath] = ACTIONS(194),
        [anon_sym_menu] = ACTIONS(194),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(194),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(194),
        [anon_sym_pass] = ACTIONS(194),
        [anon_sym_LT_LT] = ACTIONS(194),
        [anon_sym_xref] = ACTIONS(194),
        [anon_sym_STAR2] = ACTIONS(194),
        [anon_sym_STAR_STAR] = ACTIONS(194),
        [anon_sym__2] = ACTIONS(194),
        [anon_sym___] = ACTIONS(194),
        [anon_sym_BQUOTE2] = ACTIONS(194),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(194),
        [anon_sym_POUND2] = ACTIONS(194),
        [anon_sym_POUND_POUND] = ACTIONS(194),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(196),
        [anon_sym_LBRACE] = ACTIONS(198),
        [anon_sym_RBRACE] = ACTIONS(198),
        [sym__word_no_digit] = ACTIONS(198),
        [sym__digits] = ACTIONS(198),
        [anon_sym_BANG] = ACTIONS(198),
        [anon_sym_DQUOTE] = ACTIONS(198),
        [anon_sym_POUND] = ACTIONS(198),
        [anon_sym_DOLLAR] = ACTIONS(198),
        [anon_sym_PERCENT] = ACTIONS(198),
        [anon_sym_AMP] = ACTIONS(198),
        [anon_sym_SQUOTE] = ACTIONS(198),
        [anon_sym_LPAREN] = ACTIONS(198),
        [anon_sym_RPAREN] = ACTIONS(198),
        [anon_sym_STAR] = ACTIONS(198),
        [anon_sym_PLUS] = ACTIONS(198),
        [anon_sym_COMMA] = ACTIONS(198),
        [anon_sym_DASH] = ACTIONS(198),
        [anon_sym_DOT] = ACTIONS(198),
        [anon_sym_SLASH] = ACTIONS(198),
        [anon_sym_COLON] = ACTIONS(198),
        [anon_sym_SEMI] = ACTIONS(198),
        [anon_sym_LT] = ACTIONS(198),
        [anon_sym_EQ] = ACTIONS(198),
        [anon_sym_GT] = ACTIONS(198),
        [anon_sym_QMARK] = ACTIONS(198),
        [anon_sym_AT] = ACTIONS(198),
        [anon_sym_LBRACK] = ACTIONS(198),
        [anon_sym_BSLASH] = ACTIONS(198),
        [anon_sym_RBRACK] = ACTIONS(198),
        [anon_sym_CARET] = ACTIONS(198),
        [anon_sym__] = ACTIONS(198),
        [anon_sym_BQUOTE] = ACTIONS(198),
        [anon_sym_PIPE] = ACTIONS(198),
        [anon_sym_TILDE] = ACTIONS(198),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(198),
        [anon_sym_anchor] = ACTIONS(198),
        [sym_email] = ACTIONS(198),
        [anon_sym_footnote] = ACTIONS(198),
        [anon_sym_footnoteref] = ACTIONS(198),
        [anon_sym_image] = ACTIONS(198),
        [anon_sym_icon] = ACTIONS(198),
        [anon_sym_kbd] = ACTIONS(198),
        [anon_sym_btn] = ACTIONS(198),
        [anon_sym_http] = ACTIONS(198),
        [anon_sym_https] = ACTIONS(198),
        [anon_sym_file] = ACTIONS(198),
        [anon_sym_ftp] = ACTIONS(198),
        [anon_sym_irc] = ACTIONS(198),
        [anon_sym_link] = ACTIONS(198),
        [anon_sym_mailto] = ACTIONS(198),
        [anon_sym_stem] = ACTIONS(198),
        [anon_sym_latexmath] = ACTIONS(198),
        [anon_sym_asciimath] = ACTIONS(198),
        [anon_sym_menu] = ACTIONS(198),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(198),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(198),
        [anon_sym_pass] = ACTIONS(198),
        [anon_sym_LT_LT] = ACTIONS(198),
        [anon_sym_xref] = ACTIONS(198),
        [anon_sym_STAR2] = ACTIONS(198),
        [anon_sym_STAR_STAR] = ACTIONS(198),
        [anon_sym__2] = ACTIONS(198),
        [anon_sym___] = ACTIONS(198),
        [anon_sym_BQUOTE2] = ACTIONS(198),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(198),
        [anon_sym_POUND2] = ACTIONS(198),
        [anon_sym_POUND_POUND] = ACTIONS(198),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(200),
        [anon_sym_LBRACE] = ACTIONS(202),
        [anon_sym_RBRACE] = ACTIONS(202),
        [sym__word_no_digit] = ACTIONS(202),
        [sym__digits] = ACTIONS(202),
        [anon_sym_BANG] = ACTIONS(202),
        [anon_sym_DQUOTE] = ACTIONS(202),
        [anon_sym_POUND] = ACTIONS(202),
        [anon_sym_DOLLAR] = ACTIONS(202),
        [anon_sym_PERCENT] = ACTIONS(202),
        [anon_sym_AMP] = ACTIONS(202),
        [anon_sym_SQUOTE] = ACTIONS(202),
        [anon_sym_LPAREN] = ACTIONS(202),
        [anon_sym_RPAREN] = ACTIONS(202),
        [anon_sym_STAR] = ACTIONS(202),
        [anon_sym_PLUS] = ACTIONS(202),
        [anon_sym_COMMA] = ACTIONS(202),
        [anon_sym_DASH] = ACTIONS(202),
        [anon_sym_DOT] = ACTIONS(202),
        [anon_sym_SLASH] = ACTIONS(202),
        [anon_sym_COLON] = ACTIONS(202),
        [anon_sym_SEMI] = ACTIONS(202),
        [anon_sym_LT] = ACTIONS(202),
        [anon_sym_EQ] = ACTIONS(202),
        [anon_sym_GT] = ACTIONS(202),
        [anon_sym_QMARK] = ACTIONS(202),
        [anon_sym_AT] = ACTIONS(202),
        [anon_sym_LBRACK] = ACTIONS(202),
        [anon_sym_BSLASH] = ACTIONS(202),
        [anon_sym_RBRACK] = ACTIONS(202),
        [anon_sym_CARET] = ACTIONS(202),
        [anon_sym__] = ACTIONS(202),
        [anon_sym_BQUOTE] = ACTIONS(202),
        [anon_sym_PIPE] = ACTIONS(202),
        [anon_sym_TILDE] = ACTIONS(202),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(202),
        [anon_sym_anchor] = ACTIONS(202),
        [sym_email] = ACTIONS(202),
        [anon_sym_footnote] = ACTIONS(202),
        [anon_sym_footnoteref] = ACTIONS(202),
        [anon_sym_image] = ACTIONS(202),
        [anon_sym_icon] = ACTIONS(202),
        [anon_sym_kbd] = ACTIONS(202),
        [anon_sym_btn] = ACTIONS(202),
        [anon_sym_http] = ACTIONS(202),
        [anon_sym_https] = ACTIONS(202),
        [anon_sym_file] = ACTIONS(202),
        [anon_sym_ftp] = ACTIONS(202),
        [anon_sym_irc] = ACTIONS(202),
        [anon_sym_link] = ACTIONS(202),
        [anon_sym_mailto] = ACTIONS(202),
        [anon_sym_stem] = ACTIONS(202),
        [anon_sym_latexmath] = ACTIONS(202),
        [anon_sym_asciimath] = ACTIONS(202),
        [anon_sym_menu] = ACTIONS(202),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(202),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(202),
        [anon_sym_pass] = ACTIONS(202),
        [anon_sym_LT_LT] = ACTIONS(202),
        [anon_sym_xref] = ACTIONS(202),
        [anon_sym_STAR2] = ACTIONS(202),
        [anon_sym_STAR_STAR] = ACTIONS(202),
        [anon_sym__2] = ACTIONS(202),
        [anon_sym___] = ACTIONS(202),
        [anon_sym_BQUOTE2] = ACTIONS(202),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(202),
        [anon_sym_POUND2] = ACTIONS(202),
        [anon_sym_POUND_POUND] = ACTIONS(202),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(204),
        [anon_sym_LBRACE] = ACTIONS(206),
        [anon_sym_RBRACE] = ACTIONS(206),
        [sym__word_no_digit] = ACTIONS(206),
        [sym__digits] = ACTIONS(206),
        [anon_sym_BANG] = ACTIONS(206),
        [anon_sym_DQUOTE] = ACTIONS(206),
        [anon_sym_POUND] = ACTIONS(206),
        [anon_sym_DOLLAR] = ACTIONS(206),
        [anon_sym_PERCENT] = ACTIONS(206),
        [anon_sym_AMP] = ACTIONS(206),
        [anon_sym_SQUOTE] = ACTIONS(206),
        [anon_sym_LPAREN] = ACTIONS(206),
        [anon_sym_RPAREN] = ACTIONS(206),
        [anon_sym_STAR] = ACTIONS(206),
        [anon_sym_PLUS] = ACTIONS(206),
        [anon_sym_COMMA] = ACTIONS(206),
        [anon_sym_DASH] = ACTIONS(206),
        [anon_sym_DOT] = ACTIONS(206),
        [anon_sym_SLASH] = ACTIONS(206),
        [anon_sym_COLON] = ACTIONS(206),
        [anon_sym_SEMI] = ACTIONS(206),
        [anon_sym_LT] = ACTIONS(206),
        [anon_sym_EQ] = ACTIONS(206),
        [anon_sym_GT] = ACTIONS(206),
        [anon_sym_QMARK] = ACTIONS(206),
        [anon_sym_AT] = ACTIONS(206),
        [anon_sym_LBRACK] = ACTIONS(206),
        [anon_sym_BSLASH] = ACTIONS(206),
        [anon_sym_RBRACK] = ACTIONS(206),
        [anon_sym_CARET] = ACTIONS(206),
        [anon_sym__] = ACTIONS(206),
        [anon_sym_BQUOTE] = ACTIONS(206),
        [anon_sym_PIPE] = ACTIONS(206),
        [anon_sym_TILDE] = ACTIONS(206),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(206),
        [anon_sym_anchor] = ACTIONS(206),
        [sym_email] = ACTIONS(206),
        [anon_sym_footnote] = ACTIONS(206),
        [anon_sym_footnoteref] = ACTIONS(206),
        [anon_sym_image] = ACTIONS(206),
        [anon_sym_icon] = ACTIONS(206),
        [anon_sym_kbd] = ACTIONS(206),
        [anon_sym_btn] = ACTIONS(206),
        [anon_sym_http] = ACTIONS(206),
        [anon_sym_https] = ACTIONS(206),
        [anon_sym_file] = ACTIONS(206),
        [anon_sym_ftp] = ACTIONS(206),
        [anon_sym_irc] = ACTIONS(206),
        [anon_sym_link] = ACTIONS(206),
        [anon_sym_mailto] = ACTIONS(206),
        [anon_sym_stem] = ACTIONS(206),
        [anon_sym_latexmath] = ACTIONS(206),
        [anon_sym_asciimath] = ACTIONS(206),
        [anon_sym_menu] = ACTIONS(206),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(206),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(206),
        [anon_sym_pass] = ACTIONS(206),
        [anon_sym_LT_LT] = ACTIONS(206),
        [anon_sym_xref] = ACTIONS(206),
        [anon_sym_STAR2] = ACTIONS(206),
        [anon_sym_STAR_STAR] = ACTIONS(206),
        [anon_sym__2] = ACTIONS(206),
        [anon_sym___] = ACTIONS(206),
        [anon_sym_BQUOTE2] = ACTIONS(206),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(206),
        [anon_sym_POUND2] = ACTIONS(206),
        [anon_sym_POUND_POUND] = ACTIONS(206),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(208),
        [anon_sym_LBRACE] = ACTIONS(210),
        [anon_sym_RBRACE] = ACTIONS(210),
        [sym__word_no_digit] = ACTIONS(210),
        [sym__digits] = ACTIONS(210),
        [anon_sym_BANG] = ACTIONS(210),
        [anon_sym_DQUOTE] = ACTIONS(210),
        [anon_sym_POUND] = ACTIONS(210),
        [anon_sym_DOLLAR] = ACTIONS(210),
        [anon_sym_PERCENT] = ACTIONS(210),
        [anon_sym_AMP] = ACTIONS(210),
        [anon_sym_SQUOTE] = ACTIONS(210),
        [anon_sym_LPAREN] = ACTIONS(210),
        [anon_sym_RPAREN] = ACTIONS(210),
        [anon_sym_STAR] = ACTIONS(210),
        [anon_sym_PLUS] = ACTIONS(210),
        [anon_sym_COMMA] = ACTIONS(210),
        [anon_sym_DASH] = ACTIONS(210),
        [anon_sym_DOT] = ACTIONS(210),
        [anon_sym_SLASH] = ACTIONS(210),
        [anon_sym_COLON] = ACTIONS(210),
        [anon_sym_SEMI] = ACTIONS(210),
        [anon_sym_LT] = ACTIONS(210),
        [anon_sym_EQ] = ACTIONS(210),
        [anon_sym_GT] = ACTIONS(210),
        [anon_sym_QMARK] = ACTIONS(210),
        [anon_sym_AT] = ACTIONS(210),
        [anon_sym_LBRACK] = ACTIONS(210),
        [anon_sym_BSLASH] = ACTIONS(210),
        [anon_sym_RBRACK] = ACTIONS(210),
        [anon_sym_CARET] = ACTIONS(210),
        [anon_sym__] = ACTIONS(210),
        [anon_sym_BQUOTE] = ACTIONS(210),
        [anon_sym_PIPE] = ACTIONS(210),
        [anon_sym_TILDE] = ACTIONS(210),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(210),
        [anon_sym_anchor] = ACTIONS(210),
        [sym_email] = ACTIONS(210),
        [anon_sym_footnote] = ACTIONS(210),
        [anon_sym_footnoteref] = ACTIONS(210),
        [anon_sym_image] = ACTIONS(210),
        [anon_sym_icon] = ACTIONS(210),
        [anon_sym_kbd] = ACTIONS(210),
        [anon_sym_btn] = ACTIONS(210),
        [anon_sym_http] = ACTIONS(210),
        [anon_sym_https] = ACTIONS(210),
        [anon_sym_file] = ACTIONS(210),
        [anon_sym_ftp] = ACTIONS(210),
        [anon_sym_irc] = ACTIONS(210),
        [anon_sym_link] = ACTIONS(210),
        [anon_sym_mailto] = ACTIONS(210),
        [anon_sym_stem] = ACTIONS(210),
        [anon_sym_latexmath] = ACTIONS(210),
        [anon_sym_asciimath] = ACTIONS(210),
        [anon_sym_menu] = ACTIONS(210),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(210),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(210),
        [anon_sym_pass] = ACTIONS(210),
        [anon_sym_LT_LT] = ACTIONS(210),
        [anon_sym_xref] = ACTIONS(210),
        [anon_sym_STAR2] = ACTIONS(210),
        [anon_sym_STAR_STAR] = ACTIONS(210),
        [anon_sym__2] = ACTIONS(210),
        [anon_sym___] = ACTIONS(210),
        [anon_sym_BQUOTE2] = ACTIONS(210),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(210),
        [anon_sym_POUND2] = ACTIONS(210),
        [anon_sym_POUND_POUND] = ACTIONS(210),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(212),
        [anon_sym_LBRACE] = ACTIONS(214),
        [anon_sym_RBRACE] = ACTIONS(214),
        [sym__word_no_digit] = ACTIONS(214),
        [sym__digits] = ACTIONS(214),
        [anon_sym_BANG] = ACTIONS(214),
        [anon_sym_DQUOTE] = ACTIONS(214),
        [anon_sym_POUND] = ACTIONS(214),
        [anon_sym_DOLLAR] = ACTIONS(214),
        [anon_sym_PERCENT] = ACTIONS(214),
        [anon_sym_AMP] = ACTIONS(214),
        [anon_sym_SQUOTE] = ACTIONS(214),
        [anon_sym_LPAREN] = ACTIONS(214),
        [anon_sym_RPAREN] = ACTIONS(214),
        [anon_sym_STAR] = ACTIONS(214),
        [anon_sym_PLUS] = ACTIONS(214),
        [anon_sym_COMMA] = ACTIONS(214),
        [anon_sym_DASH] = ACTIONS(214),
        [anon_sym_DOT] = ACTIONS(214),
        [anon_sym_SLASH] = ACTIONS(214),
        [anon_sym_COLON] = ACTIONS(214),
        [anon_sym_SEMI] = ACTIONS(214),
        [anon_sym_LT] = ACTIONS(214),
        [anon_sym_EQ] = ACTIONS(214),
        [anon_sym_GT] = ACTIONS(214),
        [anon_sym_QMARK] = ACTIONS(214),
        [anon_sym_AT] = ACTIONS(214),
        [anon_sym_LBRACK] = ACTIONS(214),
        [anon_sym_BSLASH] = ACTIONS(214),
        [anon_sym_RBRACK] = ACTIONS(214),
        [anon_sym_CARET] = ACTIONS(214),
        [anon_sym__] = ACTIONS(214),
        [anon_sym_BQUOTE] = ACTIONS(214),
        [anon_sym_PIPE] = ACTIONS(214),
        [anon_sym_TILDE] = ACTIONS(214),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(214),
        [anon_sym_anchor] = ACTIONS(214),
        [sym_email] = ACTIONS(214),
        [anon_sym_footnote] = ACTIONS(214),
        [anon_sym_footnoteref] = ACTIONS(214),
        [anon_sym_image] = ACTIONS(214),
        [anon_sym_icon] = ACTIONS(214),
        [anon_sym_kbd] = ACTIONS(214),
        [anon_sym_btn] = ACTIONS(214),
        [anon_sym_http] = ACTIONS(214),
        [anon_sym_https] = ACTIONS(214),
        [anon_sym_file] = ACTIONS(214),
        [anon_sym_ftp] = ACTIONS(214),
        [anon_sym_irc] = ACTIONS(214),
        [anon_sym_link] = ACTIONS(214),
        [anon_sym_mailto] = ACTIONS(214),
        [anon_sym_stem] = ACTIONS(214),
        [anon_sym_latexmath] = ACTIONS(214),
        [anon_sym_asciimath] = ACTIONS(214),
        [anon_sym_menu] = ACTIONS(214),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(214),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(214),
        [anon_sym_pass] = ACTIONS(214),
        [anon_sym_LT_LT] = ACTIONS(214),
        [anon_sym_xref] = ACTIONS(214),
        [anon_sym_STAR2] = ACTIONS(214),
        [anon_sym_STAR_STAR] = ACTIONS(214),
        [anon_sym__2] = ACTIONS(214),
        [anon_sym___] = ACTIONS(214),
        [anon_sym_BQUOTE2] = ACTIONS(214),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(214),
        [anon_sym_POUND2] = ACTIONS(214),
        [anon_sym_POUND_POUND] = ACTIONS(214),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(216),
        [anon_sym_LBRACE] = ACTIONS(218),
        [anon_sym_RBRACE] = ACTIONS(218),
        [sym__word_no_digit] = ACTIONS(218),
        [sym__digits] = ACTIONS(218),
        [anon_sym_BANG] = ACTIONS(218),
        [anon_sym_DQUOTE] = ACTIONS(218),
        [anon_sym_POUND] = ACTIONS(218),
        [anon_sym_DOLLAR] = ACTIONS(218),
        [anon_sym_PERCENT] = ACTIONS(218),
        [anon_sym_AMP] = ACTIONS(218),
        [anon_sym_SQUOTE] = ACTIONS(218),
        [anon_sym_LPAREN] = ACTIONS(218),
        [anon_sym_RPAREN] = ACTIONS(218),
        [anon_sym_STAR] = ACTIONS(218),
        [anon_sym_PLUS] = ACTIONS(218),
        [anon_sym_COMMA] = ACTIONS(218),
        [anon_sym_DASH] = ACTIONS(218),
        [anon_sym_DOT] = ACTIONS(218),
        [anon_sym_SLASH] = ACTIONS(218),
        [anon_sym_COLON] = ACTIONS(218),
        [anon_sym_SEMI] = ACTIONS(218),
        [anon_sym_LT] = ACTIONS(218),
        [anon_sym_EQ] = ACTIONS(218),
        [anon_sym_GT] = ACTIONS(218),
        [anon_sym_QMARK] = ACTIONS(218),
        [anon_sym_AT] = ACTIONS(218),
        [anon_sym_LBRACK] = ACTIONS(218),
        [anon_sym_BSLASH] = ACTIONS(218),
        [anon_sym_RBRACK] = ACTIONS(218),
        [anon_sym_CARET] = ACTIONS(218),
        [anon_sym__] = ACTIONS(218),
        [anon_sym_BQUOTE] = ACTIONS(218),
        [anon_sym_PIPE] = ACTIONS(218),
        [anon_sym_TILDE] = ACTIONS(218),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(218),
        [anon_sym_anchor] = ACTIONS(218),
        [sym_email] = ACTIONS(218),
        [anon_sym_footnote] = ACTIONS(218),
        [anon_sym_footnoteref] = ACTIONS(218),
        [anon_sym_image] = ACTIONS(218),
        [anon_sym_icon] = ACTIONS(218),
        [anon_sym_kbd] = ACTIONS(218),
        [anon_sym_btn] = ACTIONS(218),
        [anon_sym_http] = ACTIONS(218),
        [anon_sym_https] = ACTIONS(218),
        [anon_sym_file] = ACTIONS(218),
        [anon_sym_ftp] = ACTIONS(218),
        [anon_sym_irc] = ACTIONS(218),
        [anon_sym_link] = ACTIONS(218),
        [anon_sym_mailto] = ACTIONS(218),
        [anon_sym_stem] = ACTIONS(218),
        [anon_sym_latexmath] = ACTIONS(218),
        [anon_sym_asciimath] = ACTIONS(218),
        [anon_sym_menu] = ACTIONS(218),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(218),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(218),
        [anon_sym_pass] = ACTIONS(218),
        [anon_sym_LT_LT] = ACTIONS(218),
        [anon_sym_xref] = ACTIONS(218),
        [anon_sym_STAR2] = ACTIONS(218),
        [anon_sym_STAR_STAR] = ACTIONS(218),
        [anon_sym__2] = ACTIONS(218),
        [anon_sym___] = ACTIONS(218),
        [anon_sym_BQUOTE2] = ACTIONS(218),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(218),
        [anon_sym_POUND2] = ACTIONS(218),
        [anon_sym_POUND_POUND] = ACTIONS(218),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(220),
        [anon_sym_LBRACE] = ACTIONS(222),
        [anon_sym_RBRACE] = ACTIONS(222),
        [sym__word_no_digit] = ACTIONS(222),
        [sym__digits] = ACTIONS(222),
        [anon_sym_BANG] = ACTIONS(222),
        [anon_sym_DQUOTE] = ACTIONS(222),
        [anon_sym_POUND] = ACTIONS(222),
        [anon_sym_DOLLAR] = ACTIONS(222),
        [anon_sym_PERCENT] = ACTIONS(222),
        [anon_sym_AMP] = ACTIONS(222),
        [anon_sym_SQUOTE] = ACTIONS(222),
        [anon_sym_LPAREN] = ACTIONS(222),
        [anon_sym_RPAREN] = ACTIONS(222),
        [anon_sym_STAR] = ACTIONS(222),
        [anon_sym_PLUS] = ACTIONS(222),
        [anon_sym_COMMA] = ACTIONS(222),
        [anon_sym_DASH] = ACTIONS(222),
        [anon_sym_DOT] = ACTIONS(222),
        [anon_sym_SLASH] = ACTIONS(222),
        [anon_sym_COLON] = ACTIONS(222),
        [anon_sym_SEMI] = ACTIONS(222),
        [anon_sym_LT] = ACTIONS(222),
        [anon_sym_EQ] = ACTIONS(222),
        [anon_sym_GT] = ACTIONS(222),
        [anon_sym_QMARK] = ACTIONS(222),
        [anon_sym_AT] = ACTIONS(222),
        [anon_sym_LBRACK] = ACTIONS(222),
        [anon_sym_BSLASH] = ACTIONS(222),
        [anon_sym_RBRACK] = ACTIONS(222),
        [anon_sym_CARET] = ACTIONS(222),
        [anon_sym__] = ACTIONS(222),
        [anon_sym_BQUOTE] = ACTIONS(222),
        [anon_sym_PIPE] = ACTIONS(222),
        [anon_sym_TILDE] = ACTIONS(222),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(222),
        [anon_sym_anchor] = ACTIONS(222),
        [sym_email] = ACTIONS(222),
        [anon_sym_footnote] = ACTIONS(222),
        [anon_sym_footnoteref] = ACTIONS(222),
        [anon_sym_image] = ACTIONS(222),
        [anon_sym_icon] = ACTIONS(222),
        [anon_sym_kbd] = ACTIONS(222),
        [anon_sym_btn] = ACTIONS(222),
        [anon_sym_http] = ACTIONS(222),
        [anon_sym_https] = ACTIONS(222),
        [anon_sym_file] = ACTIONS(222),
        [anon_sym_ftp] = ACTIONS(222),
        [anon_sym_irc] = ACTIONS(222),
        [anon_sym_link] = ACTIONS(222),
        [anon_sym_mailto] = ACTIONS(222),
        [anon_sym_stem] = ACTIONS(222),
        [anon_sym_latexmath] = ACTIONS(222),
        [anon_sym_asciimath] = ACTIONS(222),
        [anon_sym_menu] = ACTIONS(222),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(222),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(222),
        [anon_sym_pass] = ACTIONS(222),
        [anon_sym_LT_LT] = ACTIONS(222),
        [anon_sym_xref] = ACTIONS(222),
        [anon_sym_STAR2] = ACTIONS(222),
        [anon_sym_STAR_STAR] = ACTIONS(222),
        [anon_sym__2] = ACTIONS(222),
        [anon_sym___] = ACTIONS(222),
        [anon_sym_BQUOTE2] = ACTIONS(222),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(222),
        [anon_sym_POUND2] = ACTIONS(222),
        [anon_sym_POUND_POUND] = ACTIONS(222),
    },
    [22] = {
        [ts_builtin_sym_end] = ACTIONS(224),
        [anon_sym_LBRACE] = ACTIONS(226),
        [anon_sym_RBRACE] = ACTIONS(226),
        [sym__word_no_digit] = ACTIONS(226),
        [sym__digits] = ACTIONS(226),
        [anon_sym_BANG] = ACTIONS(226),
        [anon_sym_DQUOTE] = ACTIONS(226),
        [anon_sym_POUND] = ACTIONS(226),
        [anon_sym_DOLLAR] = ACTIONS(226),
        [anon_sym_PERCENT] = ACTIONS(226),
        [anon_sym_AMP] = ACTIONS(226),
        [anon_sym_SQUOTE] = ACTIONS(226),
        [anon_sym_LPAREN] = ACTIONS(226),
        [anon_sym_RPAREN] = ACTIONS(226),
        [anon_sym_STAR] = ACTIONS(226),
        [anon_sym_PLUS] = ACTIONS(226),
        [anon_sym_COMMA] = ACTIONS(226),
        [anon_sym_DASH] = ACTIONS(226),
        [anon_sym_DOT] = ACTIONS(226),
        [anon_sym_SLASH] = ACTIONS(226),
        [anon_sym_COLON] = ACTIONS(226),
        [anon_sym_SEMI] = ACTIONS(226),
        [anon_sym_LT] = ACTIONS(226),
        [anon_sym_EQ] = ACTIONS(226),
        [anon_sym_GT] = ACTIONS(226),
        [anon_sym_QMARK] = ACTIONS(226),
        [anon_sym_AT] = ACTIONS(226),
        [anon_sym_LBRACK] = ACTIONS(226),
        [anon_sym_BSLASH] = ACTIONS(226),
        [anon_sym_RBRACK] = ACTIONS(226),
        [anon_sym_CARET] = ACTIONS(226),
        [anon_sym__] = ACTIONS(226),
        [anon_sym_BQUOTE] = ACTIONS(226),
        [anon_sym_PIPE] = ACTIONS(226),
        [anon_sym_TILDE] = ACTIONS(226),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(226),
        [anon_sym_anchor] = ACTIONS(226),
        [sym_email] = ACTIONS(226),
        [anon_sym_footnote] = ACTIONS(226),
        [anon_sym_footnoteref] = ACTIONS(226),
        [anon_sym_image] = ACTIONS(226),
        [anon_sym_icon] = ACTIONS(226),
        [anon_sym_kbd] = ACTIONS(226),
        [anon_sym_btn] = ACTIONS(226),
        [anon_sym_http] = ACTIONS(226),
        [anon_sym_https] = ACTIONS(226),
        [anon_sym_file] = ACTIONS(226),
        [anon_sym_ftp] = ACTIONS(226),
        [anon_sym_irc] = ACTIONS(226),
        [anon_sym_link] = ACTIONS(226),
        [anon_sym_mailto] = ACTIONS(226),
        [anon_sym_stem] = ACTIONS(226),
        [anon_sym_latexmath] = ACTIONS(226),
        [anon_sym_asciimath] = ACTIONS(226),
        [anon_sym_menu] = ACTIONS(226),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(226),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(226),
        [anon_sym_pass] = ACTIONS(226),
        [anon_sym_LT_LT] = ACTIONS(226),
        [anon_sym_xref] = ACTIONS(226),
        [anon_sym_STAR2] = ACTIONS(226),
        [anon_sym_STAR_STAR] = ACTIONS(226),
        [anon_sym__2] = ACTIONS(226),
        [anon_sym___] = ACTIONS(226),
        [anon_sym_BQUOTE2] = ACTIONS(226),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(226),
        [anon_sym_POUND2] = ACTIONS(226),
        [anon_sym_POUND_POUND] = ACTIONS(226),
    },
    [23] = {
        [ts_builtin_sym_end] = ACTIONS(228),
        [anon_sym_LBRACE] = ACTIONS(230),
        [anon_sym_RBRACE] = ACTIONS(230),
        [sym__word_no_digit] = ACTIONS(230),
        [sym__digits] = ACTIONS(230),
        [anon_sym_BANG] = ACTIONS(230),
        [anon_sym_DQUOTE] = ACTIONS(230),
        [anon_sym_POUND] = ACTIONS(230),
        [anon_sym_DOLLAR] = ACTIONS(230),
        [anon_sym_PERCENT] = ACTIONS(230),
        [anon_sym_AMP] = ACTIONS(230),
        [anon_sym_SQUOTE] = ACTIONS(230),
        [anon_sym_LPAREN] = ACTIONS(230),
        [anon_sym_RPAREN] = ACTIONS(230),
        [anon_sym_STAR] = ACTIONS(230),
        [anon_sym_PLUS] = ACTIONS(230),
        [anon_sym_COMMA] = ACTIONS(230),
        [anon_sym_DASH] = ACTIONS(230),
        [anon_sym_DOT] = ACTIONS(230),
        [anon_sym_SLASH] = ACTIONS(230),
        [anon_sym_COLON] = ACTIONS(230),
        [anon_sym_SEMI] = ACTIONS(230),
        [anon_sym_LT] = ACTIONS(230),
        [anon_sym_EQ] = ACTIONS(230),
        [anon_sym_GT] = ACTIONS(230),
        [anon_sym_QMARK] = ACTIONS(230),
        [anon_sym_AT] = ACTIONS(230),
        [anon_sym_LBRACK] = ACTIONS(230),
        [anon_sym_BSLASH] = ACTIONS(230),
        [anon_sym_RBRACK] = ACTIONS(230),
        [anon_sym_CARET] = ACTIONS(230),
        [anon_sym__] = ACTIONS(230),
        [anon_sym_BQUOTE] = ACTIONS(230),
        [anon_sym_PIPE] = ACTIONS(230),
        [anon_sym_TILDE] = ACTIONS(230),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(230),
        [anon_sym_anchor] = ACTIONS(230),
        [sym_email] = ACTIONS(230),
        [anon_sym_footnote] = ACTIONS(230),
        [anon_sym_footnoteref] = ACTIONS(230),
        [anon_sym_image] = ACTIONS(230),
        [anon_sym_icon] = ACTIONS(230),
        [anon_sym_kbd] = ACTIONS(230),
        [anon_sym_btn] = ACTIONS(230),
        [anon_sym_http] = ACTIONS(230),
        [anon_sym_https] = ACTIONS(230),
        [anon_sym_file] = ACTIONS(230),
        [anon_sym_ftp] = ACTIONS(230),
        [anon_sym_irc] = ACTIONS(230),
        [anon_sym_link] = ACTIONS(230),
        [anon_sym_mailto] = ACTIONS(230),
        [anon_sym_stem] = ACTIONS(230),
        [anon_sym_latexmath] = ACTIONS(230),
        [anon_sym_asciimath] = ACTIONS(230),
        [anon_sym_menu] = ACTIONS(230),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(230),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(230),
        [anon_sym_pass] = ACTIONS(230),
        [anon_sym_LT_LT] = ACTIONS(230),
        [anon_sym_xref] = ACTIONS(230),
        [anon_sym_STAR2] = ACTIONS(230),
        [anon_sym_STAR_STAR] = ACTIONS(230),
        [anon_sym__2] = ACTIONS(230),
        [anon_sym___] = ACTIONS(230),
        [anon_sym_BQUOTE2] = ACTIONS(230),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(230),
        [anon_sym_POUND2] = ACTIONS(230),
        [anon_sym_POUND_POUND] = ACTIONS(230),
    },
    [24] = {
        [ts_builtin_sym_end] = ACTIONS(232),
        [anon_sym_LBRACE] = ACTIONS(234),
        [anon_sym_RBRACE] = ACTIONS(234),
        [sym__word_no_digit] = ACTIONS(234),
        [sym__digits] = ACTIONS(234),
        [anon_sym_BANG] = ACTIONS(234),
        [anon_sym_DQUOTE] = ACTIONS(234),
        [anon_sym_POUND] = ACTIONS(234),
        [anon_sym_DOLLAR] = ACTIONS(234),
        [anon_sym_PERCENT] = ACTIONS(234),
        [anon_sym_AMP] = ACTIONS(234),
        [anon_sym_SQUOTE] = ACTIONS(234),
        [anon_sym_LPAREN] = ACTIONS(234),
        [anon_sym_RPAREN] = ACTIONS(234),
        [anon_sym_STAR] = ACTIONS(234),
        [anon_sym_PLUS] = ACTIONS(234),
        [anon_sym_COMMA] = ACTIONS(234),
        [anon_sym_DASH] = ACTIONS(234),
        [anon_sym_DOT] = ACTIONS(234),
        [anon_sym_SLASH] = ACTIONS(234),
        [anon_sym_COLON] = ACTIONS(234),
        [anon_sym_SEMI] = ACTIONS(234),
        [anon_sym_LT] = ACTIONS(234),
        [anon_sym_EQ] = ACTIONS(234),
        [anon_sym_GT] = ACTIONS(234),
        [anon_sym_QMARK] = ACTIONS(234),
        [anon_sym_AT] = ACTIONS(234),
        [anon_sym_LBRACK] = ACTIONS(234),
        [anon_sym_BSLASH] = ACTIONS(234),
        [anon_sym_RBRACK] = ACTIONS(234),
        [anon_sym_CARET] = ACTIONS(234),
        [anon_sym__] = ACTIONS(234),
        [anon_sym_BQUOTE] = ACTIONS(234),
        [anon_sym_PIPE] = ACTIONS(234),
        [anon_sym_TILDE] = ACTIONS(234),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(234),
        [anon_sym_anchor] = ACTIONS(234),
        [sym_email] = ACTIONS(234),
        [anon_sym_footnote] = ACTIONS(234),
        [anon_sym_footnoteref] = ACTIONS(234),
        [anon_sym_image] = ACTIONS(234),
        [anon_sym_icon] = ACTIONS(234),
        [anon_sym_kbd] = ACTIONS(234),
        [anon_sym_btn] = ACTIONS(234),
        [anon_sym_http] = ACTIONS(234),
        [anon_sym_https] = ACTIONS(234),
        [anon_sym_file] = ACTIONS(234),
        [anon_sym_ftp] = ACTIONS(234),
        [anon_sym_irc] = ACTIONS(234),
        [anon_sym_link] = ACTIONS(234),
        [anon_sym_mailto] = ACTIONS(234),
        [anon_sym_stem] = ACTIONS(234),
        [anon_sym_latexmath] = ACTIONS(234),
        [anon_sym_asciimath] = ACTIONS(234),
        [anon_sym_menu] = ACTIONS(234),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(234),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(234),
        [anon_sym_pass] = ACTIONS(234),
        [anon_sym_LT_LT] = ACTIONS(234),
        [anon_sym_xref] = ACTIONS(234),
        [anon_sym_STAR2] = ACTIONS(234),
        [anon_sym_STAR_STAR] = ACTIONS(234),
        [anon_sym__2] = ACTIONS(234),
        [anon_sym___] = ACTIONS(234),
        [anon_sym_BQUOTE2] = ACTIONS(234),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(234),
        [anon_sym_POUND2] = ACTIONS(234),
        [anon_sym_POUND_POUND] = ACTIONS(234),
    },
    [25] = {
        [ts_builtin_sym_end] = ACTIONS(236),
        [anon_sym_LBRACE] = ACTIONS(238),
        [anon_sym_RBRACE] = ACTIONS(238),
        [sym__word_no_digit] = ACTIONS(238),
        [sym__digits] = ACTIONS(238),
        [anon_sym_BANG] = ACTIONS(238),
        [anon_sym_DQUOTE] = ACTIONS(238),
        [anon_sym_POUND] = ACTIONS(238),
        [anon_sym_DOLLAR] = ACTIONS(238),
        [anon_sym_PERCENT] = ACTIONS(238),
        [anon_sym_AMP] = ACTIONS(238),
        [anon_sym_SQUOTE] = ACTIONS(238),
        [anon_sym_LPAREN] = ACTIONS(238),
        [anon_sym_RPAREN] = ACTIONS(238),
        [anon_sym_STAR] = ACTIONS(238),
        [anon_sym_PLUS] = ACTIONS(238),
        [anon_sym_COMMA] = ACTIONS(238),
        [anon_sym_DASH] = ACTIONS(238),
        [anon_sym_DOT] = ACTIONS(238),
        [anon_sym_SLASH] = ACTIONS(238),
        [anon_sym_COLON] = ACTIONS(238),
        [anon_sym_SEMI] = ACTIONS(238),
        [anon_sym_LT] = ACTIONS(238),
        [anon_sym_EQ] = ACTIONS(238),
        [anon_sym_GT] = ACTIONS(238),
        [anon_sym_QMARK] = ACTIONS(238),
        [anon_sym_AT] = ACTIONS(238),
        [anon_sym_LBRACK] = ACTIONS(238),
        [anon_sym_BSLASH] = ACTIONS(238),
        [anon_sym_RBRACK] = ACTIONS(238),
        [anon_sym_CARET] = ACTIONS(238),
        [anon_sym__] = ACTIONS(238),
        [anon_sym_BQUOTE] = ACTIONS(238),
        [anon_sym_PIPE] = ACTIONS(238),
        [anon_sym_TILDE] = ACTIONS(238),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(238),
        [anon_sym_anchor] = ACTIONS(238),
        [sym_email] = ACTIONS(238),
        [anon_sym_footnote] = ACTIONS(238),
        [anon_sym_footnoteref] = ACTIONS(238),
        [anon_sym_image] = ACTIONS(238),
        [anon_sym_icon] = ACTIONS(238),
        [anon_sym_kbd] = ACTIONS(238),
        [anon_sym_btn] = ACTIONS(238),
        [anon_sym_http] = ACTIONS(238),
        [anon_sym_https] = ACTIONS(238),
        [anon_sym_file] = ACTIONS(238),
        [anon_sym_ftp] = ACTIONS(238),
        [anon_sym_irc] = ACTIONS(238),
        [anon_sym_link] = ACTIONS(238),
        [anon_sym_mailto] = ACTIONS(238),
        [anon_sym_stem] = ACTIONS(238),
        [anon_sym_latexmath] = ACTIONS(238),
        [anon_sym_asciimath] = ACTIONS(238),
        [anon_sym_menu] = ACTIONS(238),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(238),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(238),
        [anon_sym_pass] = ACTIONS(238),
        [anon_sym_LT_LT] = ACTIONS(238),
        [anon_sym_xref] = ACTIONS(238),
        [anon_sym_STAR2] = ACTIONS(238),
        [anon_sym_STAR_STAR] = ACTIONS(238),
        [anon_sym__2] = ACTIONS(238),
        [anon_sym___] = ACTIONS(238),
        [anon_sym_BQUOTE2] = ACTIONS(238),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(238),
        [anon_sym_POUND2] = ACTIONS(238),
        [anon_sym_POUND_POUND] = ACTIONS(238),
    },
    [26] = {
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
    [27] = {
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
    [28] = {
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
        [sym_email] = ACTIONS(157),
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
        [anon_sym_STAR2] = ACTIONS(157),
        [anon_sym_STAR_STAR] = ACTIONS(157),
        [anon_sym__2] = ACTIONS(157),
        [anon_sym___] = ACTIONS(157),
        [anon_sym_BQUOTE2] = ACTIONS(157),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(157),
        [anon_sym_POUND2] = ACTIONS(157),
        [anon_sym_POUND_POUND] = ACTIONS(157),
    },
    [29] = {
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
    [30] = {
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
        [anon_sym_LBRACK] = ACTIONS(256),
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
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(258),
        [anon_sym_LBRACE] = ACTIONS(260),
        [anon_sym_RBRACE] = ACTIONS(260),
        [sym__word_no_digit] = ACTIONS(260),
        [sym__digits] = ACTIONS(260),
        [anon_sym_BANG] = ACTIONS(260),
        [anon_sym_DQUOTE] = ACTIONS(260),
        [anon_sym_POUND] = ACTIONS(260),
        [anon_sym_DOLLAR] = ACTIONS(260),
        [anon_sym_PERCENT] = ACTIONS(260),
        [anon_sym_AMP] = ACTIONS(260),
        [anon_sym_SQUOTE] = ACTIONS(260),
        [anon_sym_LPAREN] = ACTIONS(260),
        [anon_sym_RPAREN] = ACTIONS(260),
        [anon_sym_STAR] = ACTIONS(260),
        [anon_sym_PLUS] = ACTIONS(260),
        [anon_sym_COMMA] = ACTIONS(260),
        [anon_sym_DASH] = ACTIONS(260),
        [anon_sym_DOT] = ACTIONS(260),
        [anon_sym_SLASH] = ACTIONS(260),
        [anon_sym_COLON] = ACTIONS(260),
        [anon_sym_SEMI] = ACTIONS(260),
        [anon_sym_LT] = ACTIONS(260),
        [anon_sym_EQ] = ACTIONS(260),
        [anon_sym_GT] = ACTIONS(260),
        [anon_sym_QMARK] = ACTIONS(260),
        [anon_sym_AT] = ACTIONS(260),
        [anon_sym_LBRACK] = ACTIONS(260),
        [anon_sym_BSLASH] = ACTIONS(260),
        [anon_sym_RBRACK] = ACTIONS(260),
        [anon_sym_CARET] = ACTIONS(260),
        [anon_sym__] = ACTIONS(260),
        [anon_sym_BQUOTE] = ACTIONS(260),
        [anon_sym_PIPE] = ACTIONS(260),
        [anon_sym_TILDE] = ACTIONS(260),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(260),
        [anon_sym_anchor] = ACTIONS(260),
        [sym_email] = ACTIONS(260),
        [anon_sym_footnote] = ACTIONS(260),
        [anon_sym_footnoteref] = ACTIONS(260),
        [anon_sym_image] = ACTIONS(260),
        [anon_sym_icon] = ACTIONS(260),
        [anon_sym_kbd] = ACTIONS(260),
        [anon_sym_btn] = ACTIONS(260),
        [anon_sym_http] = ACTIONS(260),
        [anon_sym_https] = ACTIONS(260),
        [anon_sym_file] = ACTIONS(260),
        [anon_sym_ftp] = ACTIONS(260),
        [anon_sym_irc] = ACTIONS(260),
        [anon_sym_link] = ACTIONS(260),
        [anon_sym_mailto] = ACTIONS(260),
        [anon_sym_stem] = ACTIONS(260),
        [anon_sym_latexmath] = ACTIONS(260),
        [anon_sym_asciimath] = ACTIONS(260),
        [anon_sym_menu] = ACTIONS(260),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(260),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(260),
        [anon_sym_pass] = ACTIONS(260),
        [anon_sym_LT_LT] = ACTIONS(260),
        [anon_sym_xref] = ACTIONS(260),
        [anon_sym_STAR2] = ACTIONS(260),
        [anon_sym_STAR_STAR] = ACTIONS(260),
        [anon_sym__2] = ACTIONS(260),
        [anon_sym___] = ACTIONS(260),
        [anon_sym_BQUOTE2] = ACTIONS(260),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(260),
        [anon_sym_POUND2] = ACTIONS(260),
        [anon_sym_POUND_POUND] = ACTIONS(260),
    },
    [32] = {
        [ts_builtin_sym_end] = ACTIONS(262),
        [anon_sym_LBRACE] = ACTIONS(264),
        [anon_sym_RBRACE] = ACTIONS(264),
        [sym__word_no_digit] = ACTIONS(264),
        [sym__digits] = ACTIONS(264),
        [anon_sym_BANG] = ACTIONS(264),
        [anon_sym_DQUOTE] = ACTIONS(264),
        [anon_sym_POUND] = ACTIONS(264),
        [anon_sym_DOLLAR] = ACTIONS(264),
        [anon_sym_PERCENT] = ACTIONS(264),
        [anon_sym_AMP] = ACTIONS(264),
        [anon_sym_SQUOTE] = ACTIONS(264),
        [anon_sym_LPAREN] = ACTIONS(264),
        [anon_sym_RPAREN] = ACTIONS(264),
        [anon_sym_STAR] = ACTIONS(264),
        [anon_sym_PLUS] = ACTIONS(264),
        [anon_sym_COMMA] = ACTIONS(264),
        [anon_sym_DASH] = ACTIONS(264),
        [anon_sym_DOT] = ACTIONS(264),
        [anon_sym_SLASH] = ACTIONS(264),
        [anon_sym_COLON] = ACTIONS(264),
        [anon_sym_SEMI] = ACTIONS(264),
        [anon_sym_LT] = ACTIONS(264),
        [anon_sym_EQ] = ACTIONS(264),
        [anon_sym_GT] = ACTIONS(264),
        [anon_sym_QMARK] = ACTIONS(264),
        [anon_sym_AT] = ACTIONS(264),
        [anon_sym_LBRACK] = ACTIONS(264),
        [anon_sym_BSLASH] = ACTIONS(264),
        [anon_sym_RBRACK] = ACTIONS(264),
        [anon_sym_CARET] = ACTIONS(264),
        [anon_sym__] = ACTIONS(264),
        [anon_sym_BQUOTE] = ACTIONS(264),
        [anon_sym_PIPE] = ACTIONS(264),
        [anon_sym_TILDE] = ACTIONS(264),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(264),
        [anon_sym_anchor] = ACTIONS(264),
        [sym_email] = ACTIONS(264),
        [anon_sym_footnote] = ACTIONS(264),
        [anon_sym_footnoteref] = ACTIONS(264),
        [anon_sym_image] = ACTIONS(264),
        [anon_sym_icon] = ACTIONS(264),
        [anon_sym_kbd] = ACTIONS(264),
        [anon_sym_btn] = ACTIONS(264),
        [anon_sym_http] = ACTIONS(264),
        [anon_sym_https] = ACTIONS(264),
        [anon_sym_file] = ACTIONS(264),
        [anon_sym_ftp] = ACTIONS(264),
        [anon_sym_irc] = ACTIONS(264),
        [anon_sym_link] = ACTIONS(264),
        [anon_sym_mailto] = ACTIONS(264),
        [anon_sym_stem] = ACTIONS(264),
        [anon_sym_latexmath] = ACTIONS(264),
        [anon_sym_asciimath] = ACTIONS(264),
        [anon_sym_menu] = ACTIONS(264),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(264),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(264),
        [anon_sym_pass] = ACTIONS(264),
        [anon_sym_LT_LT] = ACTIONS(264),
        [anon_sym_xref] = ACTIONS(264),
        [anon_sym_STAR2] = ACTIONS(264),
        [anon_sym_STAR_STAR] = ACTIONS(264),
        [anon_sym__2] = ACTIONS(264),
        [anon_sym___] = ACTIONS(264),
        [anon_sym_BQUOTE2] = ACTIONS(264),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(264),
        [anon_sym_POUND2] = ACTIONS(264),
        [anon_sym_POUND_POUND] = ACTIONS(264),
    },
    [33] = {
        [ts_builtin_sym_end] = ACTIONS(266),
        [anon_sym_LBRACE] = ACTIONS(268),
        [anon_sym_RBRACE] = ACTIONS(268),
        [sym__word_no_digit] = ACTIONS(268),
        [sym__digits] = ACTIONS(268),
        [anon_sym_BANG] = ACTIONS(268),
        [anon_sym_DQUOTE] = ACTIONS(268),
        [anon_sym_POUND] = ACTIONS(268),
        [anon_sym_DOLLAR] = ACTIONS(268),
        [anon_sym_PERCENT] = ACTIONS(268),
        [anon_sym_AMP] = ACTIONS(268),
        [anon_sym_SQUOTE] = ACTIONS(268),
        [anon_sym_LPAREN] = ACTIONS(268),
        [anon_sym_RPAREN] = ACTIONS(268),
        [anon_sym_STAR] = ACTIONS(268),
        [anon_sym_PLUS] = ACTIONS(268),
        [anon_sym_COMMA] = ACTIONS(268),
        [anon_sym_DASH] = ACTIONS(268),
        [anon_sym_DOT] = ACTIONS(268),
        [anon_sym_SLASH] = ACTIONS(268),
        [anon_sym_COLON] = ACTIONS(268),
        [anon_sym_SEMI] = ACTIONS(268),
        [anon_sym_LT] = ACTIONS(268),
        [anon_sym_EQ] = ACTIONS(268),
        [anon_sym_GT] = ACTIONS(268),
        [anon_sym_QMARK] = ACTIONS(268),
        [anon_sym_AT] = ACTIONS(268),
        [anon_sym_LBRACK] = ACTIONS(268),
        [anon_sym_BSLASH] = ACTIONS(268),
        [anon_sym_RBRACK] = ACTIONS(268),
        [anon_sym_CARET] = ACTIONS(268),
        [anon_sym__] = ACTIONS(268),
        [anon_sym_BQUOTE] = ACTIONS(268),
        [anon_sym_PIPE] = ACTIONS(268),
        [anon_sym_TILDE] = ACTIONS(268),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(268),
        [anon_sym_anchor] = ACTIONS(268),
        [sym_email] = ACTIONS(268),
        [anon_sym_footnote] = ACTIONS(268),
        [anon_sym_footnoteref] = ACTIONS(268),
        [anon_sym_image] = ACTIONS(268),
        [anon_sym_icon] = ACTIONS(268),
        [anon_sym_kbd] = ACTIONS(268),
        [anon_sym_btn] = ACTIONS(268),
        [anon_sym_http] = ACTIONS(268),
        [anon_sym_https] = ACTIONS(268),
        [anon_sym_file] = ACTIONS(268),
        [anon_sym_ftp] = ACTIONS(268),
        [anon_sym_irc] = ACTIONS(268),
        [anon_sym_link] = ACTIONS(268),
        [anon_sym_mailto] = ACTIONS(268),
        [anon_sym_stem] = ACTIONS(268),
        [anon_sym_latexmath] = ACTIONS(268),
        [anon_sym_asciimath] = ACTIONS(268),
        [anon_sym_menu] = ACTIONS(268),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(268),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(268),
        [anon_sym_pass] = ACTIONS(268),
        [anon_sym_LT_LT] = ACTIONS(268),
        [anon_sym_xref] = ACTIONS(268),
        [anon_sym_STAR2] = ACTIONS(268),
        [anon_sym_STAR_STAR] = ACTIONS(268),
        [anon_sym__2] = ACTIONS(268),
        [anon_sym___] = ACTIONS(268),
        [anon_sym_BQUOTE2] = ACTIONS(268),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(268),
        [anon_sym_POUND2] = ACTIONS(268),
        [anon_sym_POUND_POUND] = ACTIONS(268),
    },
    [34] = {
        [ts_builtin_sym_end] = ACTIONS(270),
        [anon_sym_LBRACE] = ACTIONS(272),
        [anon_sym_RBRACE] = ACTIONS(272),
        [sym__word_no_digit] = ACTIONS(272),
        [sym__digits] = ACTIONS(272),
        [anon_sym_BANG] = ACTIONS(272),
        [anon_sym_DQUOTE] = ACTIONS(272),
        [anon_sym_POUND] = ACTIONS(272),
        [anon_sym_DOLLAR] = ACTIONS(272),
        [anon_sym_PERCENT] = ACTIONS(272),
        [anon_sym_AMP] = ACTIONS(272),
        [anon_sym_SQUOTE] = ACTIONS(272),
        [anon_sym_LPAREN] = ACTIONS(272),
        [anon_sym_RPAREN] = ACTIONS(272),
        [anon_sym_STAR] = ACTIONS(272),
        [anon_sym_PLUS] = ACTIONS(272),
        [anon_sym_COMMA] = ACTIONS(272),
        [anon_sym_DASH] = ACTIONS(272),
        [anon_sym_DOT] = ACTIONS(272),
        [anon_sym_SLASH] = ACTIONS(272),
        [anon_sym_COLON] = ACTIONS(272),
        [anon_sym_SEMI] = ACTIONS(272),
        [anon_sym_LT] = ACTIONS(272),
        [anon_sym_EQ] = ACTIONS(272),
        [anon_sym_GT] = ACTIONS(272),
        [anon_sym_QMARK] = ACTIONS(272),
        [anon_sym_AT] = ACTIONS(272),
        [anon_sym_LBRACK] = ACTIONS(272),
        [anon_sym_BSLASH] = ACTIONS(272),
        [anon_sym_RBRACK] = ACTIONS(272),
        [anon_sym_CARET] = ACTIONS(272),
        [anon_sym__] = ACTIONS(272),
        [anon_sym_BQUOTE] = ACTIONS(272),
        [anon_sym_PIPE] = ACTIONS(272),
        [anon_sym_TILDE] = ACTIONS(272),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(272),
        [anon_sym_anchor] = ACTIONS(272),
        [sym_email] = ACTIONS(272),
        [anon_sym_footnote] = ACTIONS(272),
        [anon_sym_footnoteref] = ACTIONS(272),
        [anon_sym_image] = ACTIONS(272),
        [anon_sym_icon] = ACTIONS(272),
        [anon_sym_kbd] = ACTIONS(272),
        [anon_sym_btn] = ACTIONS(272),
        [anon_sym_http] = ACTIONS(272),
        [anon_sym_https] = ACTIONS(272),
        [anon_sym_file] = ACTIONS(272),
        [anon_sym_ftp] = ACTIONS(272),
        [anon_sym_irc] = ACTIONS(272),
        [anon_sym_link] = ACTIONS(272),
        [anon_sym_mailto] = ACTIONS(272),
        [anon_sym_stem] = ACTIONS(272),
        [anon_sym_latexmath] = ACTIONS(272),
        [anon_sym_asciimath] = ACTIONS(272),
        [anon_sym_menu] = ACTIONS(272),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(272),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(272),
        [anon_sym_pass] = ACTIONS(272),
        [anon_sym_LT_LT] = ACTIONS(272),
        [anon_sym_xref] = ACTIONS(272),
        [anon_sym_STAR2] = ACTIONS(272),
        [anon_sym_STAR_STAR] = ACTIONS(272),
        [anon_sym__2] = ACTIONS(272),
        [anon_sym___] = ACTIONS(272),
        [anon_sym_BQUOTE2] = ACTIONS(272),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(272),
        [anon_sym_POUND2] = ACTIONS(272),
        [anon_sym_POUND_POUND] = ACTIONS(272),
    },
    [35] = {
        [ts_builtin_sym_end] = ACTIONS(274),
        [anon_sym_LBRACE] = ACTIONS(276),
        [anon_sym_RBRACE] = ACTIONS(276),
        [sym__word_no_digit] = ACTIONS(276),
        [sym__digits] = ACTIONS(276),
        [anon_sym_BANG] = ACTIONS(276),
        [anon_sym_DQUOTE] = ACTIONS(276),
        [anon_sym_POUND] = ACTIONS(276),
        [anon_sym_DOLLAR] = ACTIONS(276),
        [anon_sym_PERCENT] = ACTIONS(276),
        [anon_sym_AMP] = ACTIONS(276),
        [anon_sym_SQUOTE] = ACTIONS(276),
        [anon_sym_LPAREN] = ACTIONS(276),
        [anon_sym_RPAREN] = ACTIONS(276),
        [anon_sym_STAR] = ACTIONS(276),
        [anon_sym_PLUS] = ACTIONS(276),
        [anon_sym_COMMA] = ACTIONS(276),
        [anon_sym_DASH] = ACTIONS(276),
        [anon_sym_DOT] = ACTIONS(276),
        [anon_sym_SLASH] = ACTIONS(276),
        [anon_sym_COLON] = ACTIONS(276),
        [anon_sym_SEMI] = ACTIONS(276),
        [anon_sym_LT] = ACTIONS(276),
        [anon_sym_EQ] = ACTIONS(276),
        [anon_sym_GT] = ACTIONS(276),
        [anon_sym_QMARK] = ACTIONS(276),
        [anon_sym_AT] = ACTIONS(276),
        [anon_sym_LBRACK] = ACTIONS(276),
        [anon_sym_BSLASH] = ACTIONS(276),
        [anon_sym_RBRACK] = ACTIONS(276),
        [anon_sym_CARET] = ACTIONS(276),
        [anon_sym__] = ACTIONS(276),
        [anon_sym_BQUOTE] = ACTIONS(276),
        [anon_sym_PIPE] = ACTIONS(276),
        [anon_sym_TILDE] = ACTIONS(276),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(276),
        [anon_sym_anchor] = ACTIONS(276),
        [sym_email] = ACTIONS(276),
        [anon_sym_footnote] = ACTIONS(276),
        [anon_sym_footnoteref] = ACTIONS(276),
        [anon_sym_image] = ACTIONS(276),
        [anon_sym_icon] = ACTIONS(276),
        [anon_sym_kbd] = ACTIONS(276),
        [anon_sym_btn] = ACTIONS(276),
        [anon_sym_http] = ACTIONS(276),
        [anon_sym_https] = ACTIONS(276),
        [anon_sym_file] = ACTIONS(276),
        [anon_sym_ftp] = ACTIONS(276),
        [anon_sym_irc] = ACTIONS(276),
        [anon_sym_link] = ACTIONS(276),
        [anon_sym_mailto] = ACTIONS(276),
        [anon_sym_stem] = ACTIONS(276),
        [anon_sym_latexmath] = ACTIONS(276),
        [anon_sym_asciimath] = ACTIONS(276),
        [anon_sym_menu] = ACTIONS(276),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(276),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(276),
        [anon_sym_pass] = ACTIONS(276),
        [anon_sym_LT_LT] = ACTIONS(276),
        [anon_sym_xref] = ACTIONS(276),
        [anon_sym_STAR2] = ACTIONS(276),
        [anon_sym_STAR_STAR] = ACTIONS(276),
        [anon_sym__2] = ACTIONS(276),
        [anon_sym___] = ACTIONS(276),
        [anon_sym_BQUOTE2] = ACTIONS(276),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(276),
        [anon_sym_POUND2] = ACTIONS(276),
        [anon_sym_POUND_POUND] = ACTIONS(276),
    },
    [36] = {
        [ts_builtin_sym_end] = ACTIONS(278),
        [anon_sym_LBRACE] = ACTIONS(280),
        [anon_sym_RBRACE] = ACTIONS(280),
        [sym__word_no_digit] = ACTIONS(280),
        [sym__digits] = ACTIONS(280),
        [anon_sym_BANG] = ACTIONS(280),
        [anon_sym_DQUOTE] = ACTIONS(280),
        [anon_sym_POUND] = ACTIONS(280),
        [anon_sym_DOLLAR] = ACTIONS(280),
        [anon_sym_PERCENT] = ACTIONS(280),
        [anon_sym_AMP] = ACTIONS(280),
        [anon_sym_SQUOTE] = ACTIONS(280),
        [anon_sym_LPAREN] = ACTIONS(280),
        [anon_sym_RPAREN] = ACTIONS(280),
        [anon_sym_STAR] = ACTIONS(280),
        [anon_sym_PLUS] = ACTIONS(280),
        [anon_sym_COMMA] = ACTIONS(280),
        [anon_sym_DASH] = ACTIONS(280),
        [anon_sym_DOT] = ACTIONS(280),
        [anon_sym_SLASH] = ACTIONS(280),
        [anon_sym_COLON] = ACTIONS(280),
        [anon_sym_SEMI] = ACTIONS(280),
        [anon_sym_LT] = ACTIONS(280),
        [anon_sym_EQ] = ACTIONS(280),
        [anon_sym_GT] = ACTIONS(280),
        [anon_sym_QMARK] = ACTIONS(280),
        [anon_sym_AT] = ACTIONS(280),
        [anon_sym_LBRACK] = ACTIONS(280),
        [anon_sym_BSLASH] = ACTIONS(280),
        [anon_sym_RBRACK] = ACTIONS(280),
        [anon_sym_CARET] = ACTIONS(280),
        [anon_sym__] = ACTIONS(280),
        [anon_sym_BQUOTE] = ACTIONS(280),
        [anon_sym_PIPE] = ACTIONS(280),
        [anon_sym_TILDE] = ACTIONS(280),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(280),
        [anon_sym_anchor] = ACTIONS(280),
        [sym_email] = ACTIONS(280),
        [anon_sym_footnote] = ACTIONS(280),
        [anon_sym_footnoteref] = ACTIONS(280),
        [anon_sym_image] = ACTIONS(280),
        [anon_sym_icon] = ACTIONS(280),
        [anon_sym_kbd] = ACTIONS(280),
        [anon_sym_btn] = ACTIONS(280),
        [anon_sym_http] = ACTIONS(280),
        [anon_sym_https] = ACTIONS(280),
        [anon_sym_file] = ACTIONS(280),
        [anon_sym_ftp] = ACTIONS(280),
        [anon_sym_irc] = ACTIONS(280),
        [anon_sym_link] = ACTIONS(280),
        [anon_sym_mailto] = ACTIONS(280),
        [anon_sym_stem] = ACTIONS(280),
        [anon_sym_latexmath] = ACTIONS(280),
        [anon_sym_asciimath] = ACTIONS(280),
        [anon_sym_menu] = ACTIONS(280),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(280),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(280),
        [anon_sym_pass] = ACTIONS(280),
        [anon_sym_LT_LT] = ACTIONS(280),
        [anon_sym_xref] = ACTIONS(280),
        [anon_sym_STAR2] = ACTIONS(280),
        [anon_sym_STAR_STAR] = ACTIONS(280),
        [anon_sym__2] = ACTIONS(280),
        [anon_sym___] = ACTIONS(280),
        [anon_sym_BQUOTE2] = ACTIONS(280),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(280),
        [anon_sym_POUND2] = ACTIONS(280),
        [anon_sym_POUND_POUND] = ACTIONS(280),
    },
    [37] = {
        [ts_builtin_sym_end] = ACTIONS(282),
        [anon_sym_LBRACE] = ACTIONS(284),
        [anon_sym_RBRACE] = ACTIONS(284),
        [sym__word_no_digit] = ACTIONS(284),
        [sym__digits] = ACTIONS(284),
        [anon_sym_BANG] = ACTIONS(284),
        [anon_sym_DQUOTE] = ACTIONS(284),
        [anon_sym_POUND] = ACTIONS(284),
        [anon_sym_DOLLAR] = ACTIONS(284),
        [anon_sym_PERCENT] = ACTIONS(284),
        [anon_sym_AMP] = ACTIONS(284),
        [anon_sym_SQUOTE] = ACTIONS(284),
        [anon_sym_LPAREN] = ACTIONS(284),
        [anon_sym_RPAREN] = ACTIONS(284),
        [anon_sym_STAR] = ACTIONS(284),
        [anon_sym_PLUS] = ACTIONS(284),
        [anon_sym_COMMA] = ACTIONS(284),
        [anon_sym_DASH] = ACTIONS(284),
        [anon_sym_DOT] = ACTIONS(284),
        [anon_sym_SLASH] = ACTIONS(284),
        [anon_sym_COLON] = ACTIONS(284),
        [anon_sym_SEMI] = ACTIONS(284),
        [anon_sym_LT] = ACTIONS(284),
        [anon_sym_EQ] = ACTIONS(284),
        [anon_sym_GT] = ACTIONS(284),
        [anon_sym_QMARK] = ACTIONS(284),
        [anon_sym_AT] = ACTIONS(284),
        [anon_sym_LBRACK] = ACTIONS(284),
        [anon_sym_BSLASH] = ACTIONS(284),
        [anon_sym_RBRACK] = ACTIONS(284),
        [anon_sym_CARET] = ACTIONS(284),
        [anon_sym__] = ACTIONS(284),
        [anon_sym_BQUOTE] = ACTIONS(284),
        [anon_sym_PIPE] = ACTIONS(284),
        [anon_sym_TILDE] = ACTIONS(284),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(284),
        [anon_sym_anchor] = ACTIONS(284),
        [sym_email] = ACTIONS(284),
        [anon_sym_footnote] = ACTIONS(284),
        [anon_sym_footnoteref] = ACTIONS(284),
        [anon_sym_image] = ACTIONS(284),
        [anon_sym_icon] = ACTIONS(284),
        [anon_sym_kbd] = ACTIONS(284),
        [anon_sym_btn] = ACTIONS(284),
        [anon_sym_http] = ACTIONS(284),
        [anon_sym_https] = ACTIONS(284),
        [anon_sym_file] = ACTIONS(284),
        [anon_sym_ftp] = ACTIONS(284),
        [anon_sym_irc] = ACTIONS(284),
        [anon_sym_link] = ACTIONS(284),
        [anon_sym_mailto] = ACTIONS(284),
        [anon_sym_stem] = ACTIONS(284),
        [anon_sym_latexmath] = ACTIONS(284),
        [anon_sym_asciimath] = ACTIONS(284),
        [anon_sym_menu] = ACTIONS(284),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(284),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(284),
        [anon_sym_pass] = ACTIONS(284),
        [anon_sym_LT_LT] = ACTIONS(284),
        [anon_sym_xref] = ACTIONS(284),
        [anon_sym_STAR2] = ACTIONS(284),
        [anon_sym_STAR_STAR] = ACTIONS(284),
        [anon_sym__2] = ACTIONS(284),
        [anon_sym___] = ACTIONS(284),
        [anon_sym_BQUOTE2] = ACTIONS(284),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(284),
        [anon_sym_POUND2] = ACTIONS(284),
        [anon_sym_POUND_POUND] = ACTIONS(284),
    },
    [38] = {
        [ts_builtin_sym_end] = ACTIONS(286),
        [anon_sym_LBRACE] = ACTIONS(288),
        [anon_sym_RBRACE] = ACTIONS(288),
        [sym__word_no_digit] = ACTIONS(288),
        [sym__digits] = ACTIONS(288),
        [anon_sym_BANG] = ACTIONS(288),
        [anon_sym_DQUOTE] = ACTIONS(288),
        [anon_sym_POUND] = ACTIONS(288),
        [anon_sym_DOLLAR] = ACTIONS(288),
        [anon_sym_PERCENT] = ACTIONS(288),
        [anon_sym_AMP] = ACTIONS(288),
        [anon_sym_SQUOTE] = ACTIONS(288),
        [anon_sym_LPAREN] = ACTIONS(288),
        [anon_sym_RPAREN] = ACTIONS(288),
        [anon_sym_STAR] = ACTIONS(288),
        [anon_sym_PLUS] = ACTIONS(288),
        [anon_sym_COMMA] = ACTIONS(288),
        [anon_sym_DASH] = ACTIONS(288),
        [anon_sym_DOT] = ACTIONS(288),
        [anon_sym_SLASH] = ACTIONS(288),
        [anon_sym_COLON] = ACTIONS(288),
        [anon_sym_SEMI] = ACTIONS(288),
        [anon_sym_LT] = ACTIONS(288),
        [anon_sym_EQ] = ACTIONS(288),
        [anon_sym_GT] = ACTIONS(288),
        [anon_sym_QMARK] = ACTIONS(288),
        [anon_sym_AT] = ACTIONS(288),
        [anon_sym_LBRACK] = ACTIONS(288),
        [anon_sym_BSLASH] = ACTIONS(288),
        [anon_sym_RBRACK] = ACTIONS(288),
        [anon_sym_CARET] = ACTIONS(288),
        [anon_sym__] = ACTIONS(288),
        [anon_sym_BQUOTE] = ACTIONS(288),
        [anon_sym_PIPE] = ACTIONS(288),
        [anon_sym_TILDE] = ACTIONS(288),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(288),
        [anon_sym_anchor] = ACTIONS(288),
        [sym_email] = ACTIONS(288),
        [anon_sym_footnote] = ACTIONS(288),
        [anon_sym_footnoteref] = ACTIONS(288),
        [anon_sym_image] = ACTIONS(288),
        [anon_sym_icon] = ACTIONS(288),
        [anon_sym_kbd] = ACTIONS(288),
        [anon_sym_btn] = ACTIONS(288),
        [anon_sym_http] = ACTIONS(288),
        [anon_sym_https] = ACTIONS(288),
        [anon_sym_file] = ACTIONS(288),
        [anon_sym_ftp] = ACTIONS(288),
        [anon_sym_irc] = ACTIONS(288),
        [anon_sym_link] = ACTIONS(288),
        [anon_sym_mailto] = ACTIONS(288),
        [anon_sym_stem] = ACTIONS(288),
        [anon_sym_latexmath] = ACTIONS(288),
        [anon_sym_asciimath] = ACTIONS(288),
        [anon_sym_menu] = ACTIONS(288),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(288),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(288),
        [anon_sym_pass] = ACTIONS(288),
        [anon_sym_LT_LT] = ACTIONS(288),
        [anon_sym_xref] = ACTIONS(288),
        [anon_sym_STAR2] = ACTIONS(288),
        [anon_sym_STAR_STAR] = ACTIONS(288),
        [anon_sym__2] = ACTIONS(288),
        [anon_sym___] = ACTIONS(288),
        [anon_sym_BQUOTE2] = ACTIONS(288),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(288),
        [anon_sym_POUND2] = ACTIONS(288),
        [anon_sym_POUND_POUND] = ACTIONS(288),
    },
    [39] = {
        [ts_builtin_sym_end] = ACTIONS(290),
        [anon_sym_LBRACE] = ACTIONS(292),
        [anon_sym_RBRACE] = ACTIONS(292),
        [sym__word_no_digit] = ACTIONS(292),
        [sym__digits] = ACTIONS(292),
        [anon_sym_BANG] = ACTIONS(292),
        [anon_sym_DQUOTE] = ACTIONS(292),
        [anon_sym_POUND] = ACTIONS(292),
        [anon_sym_DOLLAR] = ACTIONS(292),
        [anon_sym_PERCENT] = ACTIONS(292),
        [anon_sym_AMP] = ACTIONS(292),
        [anon_sym_SQUOTE] = ACTIONS(292),
        [anon_sym_LPAREN] = ACTIONS(292),
        [anon_sym_RPAREN] = ACTIONS(292),
        [anon_sym_STAR] = ACTIONS(292),
        [anon_sym_PLUS] = ACTIONS(292),
        [anon_sym_COMMA] = ACTIONS(292),
        [anon_sym_DASH] = ACTIONS(292),
        [anon_sym_DOT] = ACTIONS(292),
        [anon_sym_SLASH] = ACTIONS(292),
        [anon_sym_COLON] = ACTIONS(292),
        [anon_sym_SEMI] = ACTIONS(292),
        [anon_sym_LT] = ACTIONS(292),
        [anon_sym_EQ] = ACTIONS(292),
        [anon_sym_GT] = ACTIONS(292),
        [anon_sym_QMARK] = ACTIONS(292),
        [anon_sym_AT] = ACTIONS(292),
        [anon_sym_LBRACK] = ACTIONS(292),
        [anon_sym_BSLASH] = ACTIONS(292),
        [anon_sym_RBRACK] = ACTIONS(292),
        [anon_sym_CARET] = ACTIONS(292),
        [anon_sym__] = ACTIONS(292),
        [anon_sym_BQUOTE] = ACTIONS(292),
        [anon_sym_PIPE] = ACTIONS(292),
        [anon_sym_TILDE] = ACTIONS(292),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(292),
        [anon_sym_anchor] = ACTIONS(292),
        [sym_email] = ACTIONS(292),
        [anon_sym_footnote] = ACTIONS(292),
        [anon_sym_footnoteref] = ACTIONS(292),
        [anon_sym_image] = ACTIONS(292),
        [anon_sym_icon] = ACTIONS(292),
        [anon_sym_kbd] = ACTIONS(292),
        [anon_sym_btn] = ACTIONS(292),
        [anon_sym_http] = ACTIONS(292),
        [anon_sym_https] = ACTIONS(292),
        [anon_sym_file] = ACTIONS(292),
        [anon_sym_ftp] = ACTIONS(292),
        [anon_sym_irc] = ACTIONS(292),
        [anon_sym_link] = ACTIONS(292),
        [anon_sym_mailto] = ACTIONS(292),
        [anon_sym_stem] = ACTIONS(292),
        [anon_sym_latexmath] = ACTIONS(292),
        [anon_sym_asciimath] = ACTIONS(292),
        [anon_sym_menu] = ACTIONS(292),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(292),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(292),
        [anon_sym_pass] = ACTIONS(292),
        [anon_sym_LT_LT] = ACTIONS(292),
        [anon_sym_xref] = ACTIONS(292),
        [anon_sym_STAR2] = ACTIONS(292),
        [anon_sym_STAR_STAR] = ACTIONS(292),
        [anon_sym__2] = ACTIONS(292),
        [anon_sym___] = ACTIONS(292),
        [anon_sym_BQUOTE2] = ACTIONS(292),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(292),
        [anon_sym_POUND2] = ACTIONS(292),
        [anon_sym_POUND_POUND] = ACTIONS(292),
    },
    [40] = {
        [ts_builtin_sym_end] = ACTIONS(294),
        [anon_sym_LBRACE] = ACTIONS(296),
        [anon_sym_RBRACE] = ACTIONS(296),
        [sym__word_no_digit] = ACTIONS(296),
        [sym__digits] = ACTIONS(296),
        [anon_sym_BANG] = ACTIONS(296),
        [anon_sym_DQUOTE] = ACTIONS(296),
        [anon_sym_POUND] = ACTIONS(296),
        [anon_sym_DOLLAR] = ACTIONS(296),
        [anon_sym_PERCENT] = ACTIONS(296),
        [anon_sym_AMP] = ACTIONS(296),
        [anon_sym_SQUOTE] = ACTIONS(296),
        [anon_sym_LPAREN] = ACTIONS(296),
        [anon_sym_RPAREN] = ACTIONS(296),
        [anon_sym_STAR] = ACTIONS(296),
        [anon_sym_PLUS] = ACTIONS(296),
        [anon_sym_COMMA] = ACTIONS(296),
        [anon_sym_DASH] = ACTIONS(296),
        [anon_sym_DOT] = ACTIONS(296),
        [anon_sym_SLASH] = ACTIONS(296),
        [anon_sym_COLON] = ACTIONS(296),
        [anon_sym_SEMI] = ACTIONS(296),
        [anon_sym_LT] = ACTIONS(296),
        [anon_sym_EQ] = ACTIONS(296),
        [anon_sym_GT] = ACTIONS(296),
        [anon_sym_QMARK] = ACTIONS(296),
        [anon_sym_AT] = ACTIONS(296),
        [anon_sym_LBRACK] = ACTIONS(296),
        [anon_sym_BSLASH] = ACTIONS(296),
        [anon_sym_RBRACK] = ACTIONS(296),
        [anon_sym_CARET] = ACTIONS(296),
        [anon_sym__] = ACTIONS(296),
        [anon_sym_BQUOTE] = ACTIONS(296),
        [anon_sym_PIPE] = ACTIONS(296),
        [anon_sym_TILDE] = ACTIONS(296),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(296),
        [anon_sym_anchor] = ACTIONS(296),
        [sym_email] = ACTIONS(296),
        [anon_sym_footnote] = ACTIONS(296),
        [anon_sym_footnoteref] = ACTIONS(296),
        [anon_sym_image] = ACTIONS(296),
        [anon_sym_icon] = ACTIONS(296),
        [anon_sym_kbd] = ACTIONS(296),
        [anon_sym_btn] = ACTIONS(296),
        [anon_sym_http] = ACTIONS(296),
        [anon_sym_https] = ACTIONS(296),
        [anon_sym_file] = ACTIONS(296),
        [anon_sym_ftp] = ACTIONS(296),
        [anon_sym_irc] = ACTIONS(296),
        [anon_sym_link] = ACTIONS(296),
        [anon_sym_mailto] = ACTIONS(296),
        [anon_sym_stem] = ACTIONS(296),
        [anon_sym_latexmath] = ACTIONS(296),
        [anon_sym_asciimath] = ACTIONS(296),
        [anon_sym_menu] = ACTIONS(296),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(296),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(296),
        [anon_sym_pass] = ACTIONS(296),
        [anon_sym_LT_LT] = ACTIONS(296),
        [anon_sym_xref] = ACTIONS(296),
        [anon_sym_STAR2] = ACTIONS(296),
        [anon_sym_STAR_STAR] = ACTIONS(296),
        [anon_sym__2] = ACTIONS(296),
        [anon_sym___] = ACTIONS(296),
        [anon_sym_BQUOTE2] = ACTIONS(296),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(296),
        [anon_sym_POUND2] = ACTIONS(296),
        [anon_sym_POUND_POUND] = ACTIONS(296),
    },
    [41] = {
        [ts_builtin_sym_end] = ACTIONS(298),
        [anon_sym_LBRACE] = ACTIONS(300),
        [anon_sym_RBRACE] = ACTIONS(300),
        [sym__word_no_digit] = ACTIONS(300),
        [sym__digits] = ACTIONS(300),
        [anon_sym_BANG] = ACTIONS(300),
        [anon_sym_DQUOTE] = ACTIONS(300),
        [anon_sym_POUND] = ACTIONS(300),
        [anon_sym_DOLLAR] = ACTIONS(300),
        [anon_sym_PERCENT] = ACTIONS(300),
        [anon_sym_AMP] = ACTIONS(300),
        [anon_sym_SQUOTE] = ACTIONS(300),
        [anon_sym_LPAREN] = ACTIONS(300),
        [anon_sym_RPAREN] = ACTIONS(300),
        [anon_sym_STAR] = ACTIONS(300),
        [anon_sym_PLUS] = ACTIONS(300),
        [anon_sym_COMMA] = ACTIONS(300),
        [anon_sym_DASH] = ACTIONS(300),
        [anon_sym_DOT] = ACTIONS(300),
        [anon_sym_SLASH] = ACTIONS(300),
        [anon_sym_COLON] = ACTIONS(300),
        [anon_sym_SEMI] = ACTIONS(300),
        [anon_sym_LT] = ACTIONS(300),
        [anon_sym_EQ] = ACTIONS(300),
        [anon_sym_GT] = ACTIONS(300),
        [anon_sym_QMARK] = ACTIONS(300),
        [anon_sym_AT] = ACTIONS(300),
        [anon_sym_LBRACK] = ACTIONS(300),
        [anon_sym_BSLASH] = ACTIONS(300),
        [anon_sym_RBRACK] = ACTIONS(300),
        [anon_sym_CARET] = ACTIONS(300),
        [anon_sym__] = ACTIONS(300),
        [anon_sym_BQUOTE] = ACTIONS(300),
        [anon_sym_PIPE] = ACTIONS(300),
        [anon_sym_TILDE] = ACTIONS(300),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(300),
        [anon_sym_anchor] = ACTIONS(300),
        [sym_email] = ACTIONS(300),
        [anon_sym_footnote] = ACTIONS(300),
        [anon_sym_footnoteref] = ACTIONS(300),
        [anon_sym_image] = ACTIONS(300),
        [anon_sym_icon] = ACTIONS(300),
        [anon_sym_kbd] = ACTIONS(300),
        [anon_sym_btn] = ACTIONS(300),
        [anon_sym_http] = ACTIONS(300),
        [anon_sym_https] = ACTIONS(300),
        [anon_sym_file] = ACTIONS(300),
        [anon_sym_ftp] = ACTIONS(300),
        [anon_sym_irc] = ACTIONS(300),
        [anon_sym_link] = ACTIONS(300),
        [anon_sym_mailto] = ACTIONS(300),
        [anon_sym_stem] = ACTIONS(300),
        [anon_sym_latexmath] = ACTIONS(300),
        [anon_sym_asciimath] = ACTIONS(300),
        [anon_sym_menu] = ACTIONS(300),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(300),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(300),
        [anon_sym_pass] = ACTIONS(300),
        [anon_sym_LT_LT] = ACTIONS(300),
        [anon_sym_xref] = ACTIONS(300),
        [anon_sym_STAR2] = ACTIONS(300),
        [anon_sym_STAR_STAR] = ACTIONS(300),
        [anon_sym__2] = ACTIONS(300),
        [anon_sym___] = ACTIONS(300),
        [anon_sym_BQUOTE2] = ACTIONS(300),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(300),
        [anon_sym_POUND2] = ACTIONS(300),
        [anon_sym_POUND_POUND] = ACTIONS(300),
    },
    [42] = {
        [ts_builtin_sym_end] = ACTIONS(302),
        [anon_sym_LBRACE] = ACTIONS(304),
        [anon_sym_RBRACE] = ACTIONS(304),
        [sym__word_no_digit] = ACTIONS(304),
        [sym__digits] = ACTIONS(304),
        [anon_sym_BANG] = ACTIONS(304),
        [anon_sym_DQUOTE] = ACTIONS(304),
        [anon_sym_POUND] = ACTIONS(304),
        [anon_sym_DOLLAR] = ACTIONS(304),
        [anon_sym_PERCENT] = ACTIONS(304),
        [anon_sym_AMP] = ACTIONS(304),
        [anon_sym_SQUOTE] = ACTIONS(304),
        [anon_sym_LPAREN] = ACTIONS(304),
        [anon_sym_RPAREN] = ACTIONS(304),
        [anon_sym_STAR] = ACTIONS(304),
        [anon_sym_PLUS] = ACTIONS(304),
        [anon_sym_COMMA] = ACTIONS(304),
        [anon_sym_DASH] = ACTIONS(304),
        [anon_sym_DOT] = ACTIONS(304),
        [anon_sym_SLASH] = ACTIONS(304),
        [anon_sym_COLON] = ACTIONS(304),
        [anon_sym_SEMI] = ACTIONS(304),
        [anon_sym_LT] = ACTIONS(304),
        [anon_sym_EQ] = ACTIONS(304),
        [anon_sym_GT] = ACTIONS(304),
        [anon_sym_QMARK] = ACTIONS(304),
        [anon_sym_AT] = ACTIONS(304),
        [anon_sym_LBRACK] = ACTIONS(304),
        [anon_sym_BSLASH] = ACTIONS(304),
        [anon_sym_RBRACK] = ACTIONS(304),
        [anon_sym_CARET] = ACTIONS(304),
        [anon_sym__] = ACTIONS(304),
        [anon_sym_BQUOTE] = ACTIONS(304),
        [anon_sym_PIPE] = ACTIONS(304),
        [anon_sym_TILDE] = ACTIONS(304),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(304),
        [anon_sym_anchor] = ACTIONS(304),
        [sym_email] = ACTIONS(304),
        [anon_sym_footnote] = ACTIONS(304),
        [anon_sym_footnoteref] = ACTIONS(304),
        [anon_sym_image] = ACTIONS(304),
        [anon_sym_icon] = ACTIONS(304),
        [anon_sym_kbd] = ACTIONS(304),
        [anon_sym_btn] = ACTIONS(304),
        [anon_sym_http] = ACTIONS(304),
        [anon_sym_https] = ACTIONS(304),
        [anon_sym_file] = ACTIONS(304),
        [anon_sym_ftp] = ACTIONS(304),
        [anon_sym_irc] = ACTIONS(304),
        [anon_sym_link] = ACTIONS(304),
        [anon_sym_mailto] = ACTIONS(304),
        [anon_sym_stem] = ACTIONS(304),
        [anon_sym_latexmath] = ACTIONS(304),
        [anon_sym_asciimath] = ACTIONS(304),
        [anon_sym_menu] = ACTIONS(304),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(304),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(304),
        [anon_sym_pass] = ACTIONS(304),
        [anon_sym_LT_LT] = ACTIONS(304),
        [anon_sym_xref] = ACTIONS(304),
        [anon_sym_STAR2] = ACTIONS(304),
        [anon_sym_STAR_STAR] = ACTIONS(304),
        [anon_sym__2] = ACTIONS(304),
        [anon_sym___] = ACTIONS(304),
        [anon_sym_BQUOTE2] = ACTIONS(304),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(304),
        [anon_sym_POUND2] = ACTIONS(304),
        [anon_sym_POUND_POUND] = ACTIONS(304),
    },
    [43] = {
        [ts_builtin_sym_end] = ACTIONS(306),
        [anon_sym_LBRACE] = ACTIONS(308),
        [anon_sym_RBRACE] = ACTIONS(308),
        [sym__word_no_digit] = ACTIONS(308),
        [sym__digits] = ACTIONS(308),
        [anon_sym_BANG] = ACTIONS(308),
        [anon_sym_DQUOTE] = ACTIONS(308),
        [anon_sym_POUND] = ACTIONS(308),
        [anon_sym_DOLLAR] = ACTIONS(308),
        [anon_sym_PERCENT] = ACTIONS(308),
        [anon_sym_AMP] = ACTIONS(308),
        [anon_sym_SQUOTE] = ACTIONS(308),
        [anon_sym_LPAREN] = ACTIONS(308),
        [anon_sym_RPAREN] = ACTIONS(308),
        [anon_sym_STAR] = ACTIONS(308),
        [anon_sym_PLUS] = ACTIONS(308),
        [anon_sym_COMMA] = ACTIONS(308),
        [anon_sym_DASH] = ACTIONS(308),
        [anon_sym_DOT] = ACTIONS(308),
        [anon_sym_SLASH] = ACTIONS(308),
        [anon_sym_COLON] = ACTIONS(308),
        [anon_sym_SEMI] = ACTIONS(308),
        [anon_sym_LT] = ACTIONS(308),
        [anon_sym_EQ] = ACTIONS(308),
        [anon_sym_GT] = ACTIONS(308),
        [anon_sym_QMARK] = ACTIONS(308),
        [anon_sym_AT] = ACTIONS(308),
        [anon_sym_LBRACK] = ACTIONS(308),
        [anon_sym_BSLASH] = ACTIONS(308),
        [anon_sym_RBRACK] = ACTIONS(308),
        [anon_sym_CARET] = ACTIONS(308),
        [anon_sym__] = ACTIONS(308),
        [anon_sym_BQUOTE] = ACTIONS(308),
        [anon_sym_PIPE] = ACTIONS(308),
        [anon_sym_TILDE] = ACTIONS(308),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(308),
        [anon_sym_anchor] = ACTIONS(308),
        [sym_email] = ACTIONS(308),
        [anon_sym_footnote] = ACTIONS(308),
        [anon_sym_footnoteref] = ACTIONS(308),
        [anon_sym_image] = ACTIONS(308),
        [anon_sym_icon] = ACTIONS(308),
        [anon_sym_kbd] = ACTIONS(308),
        [anon_sym_btn] = ACTIONS(308),
        [anon_sym_http] = ACTIONS(308),
        [anon_sym_https] = ACTIONS(308),
        [anon_sym_file] = ACTIONS(308),
        [anon_sym_ftp] = ACTIONS(308),
        [anon_sym_irc] = ACTIONS(308),
        [anon_sym_link] = ACTIONS(308),
        [anon_sym_mailto] = ACTIONS(308),
        [anon_sym_stem] = ACTIONS(308),
        [anon_sym_latexmath] = ACTIONS(308),
        [anon_sym_asciimath] = ACTIONS(308),
        [anon_sym_menu] = ACTIONS(308),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(308),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(308),
        [anon_sym_pass] = ACTIONS(308),
        [anon_sym_LT_LT] = ACTIONS(308),
        [anon_sym_xref] = ACTIONS(308),
        [anon_sym_STAR2] = ACTIONS(308),
        [anon_sym_STAR_STAR] = ACTIONS(308),
        [anon_sym__2] = ACTIONS(308),
        [anon_sym___] = ACTIONS(308),
        [anon_sym_BQUOTE2] = ACTIONS(308),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(308),
        [anon_sym_POUND2] = ACTIONS(308),
        [anon_sym_POUND_POUND] = ACTIONS(308),
    },
    [44] = {
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
    [45] = {
        [ts_builtin_sym_end] = ACTIONS(310),
        [anon_sym_LBRACE] = ACTIONS(312),
        [anon_sym_RBRACE] = ACTIONS(312),
        [sym__word_no_digit] = ACTIONS(312),
        [sym__digits] = ACTIONS(312),
        [anon_sym_BANG] = ACTIONS(312),
        [anon_sym_DQUOTE] = ACTIONS(312),
        [anon_sym_POUND] = ACTIONS(312),
        [anon_sym_DOLLAR] = ACTIONS(312),
        [anon_sym_PERCENT] = ACTIONS(312),
        [anon_sym_AMP] = ACTIONS(312),
        [anon_sym_SQUOTE] = ACTIONS(312),
        [anon_sym_LPAREN] = ACTIONS(312),
        [anon_sym_RPAREN] = ACTIONS(312),
        [anon_sym_STAR] = ACTIONS(312),
        [anon_sym_PLUS] = ACTIONS(312),
        [anon_sym_COMMA] = ACTIONS(312),
        [anon_sym_DASH] = ACTIONS(312),
        [anon_sym_DOT] = ACTIONS(312),
        [anon_sym_SLASH] = ACTIONS(312),
        [anon_sym_COLON] = ACTIONS(312),
        [anon_sym_SEMI] = ACTIONS(312),
        [anon_sym_LT] = ACTIONS(312),
        [anon_sym_EQ] = ACTIONS(312),
        [anon_sym_GT] = ACTIONS(312),
        [anon_sym_QMARK] = ACTIONS(312),
        [anon_sym_AT] = ACTIONS(312),
        [anon_sym_LBRACK] = ACTIONS(312),
        [anon_sym_BSLASH] = ACTIONS(312),
        [anon_sym_RBRACK] = ACTIONS(312),
        [anon_sym_CARET] = ACTIONS(312),
        [anon_sym__] = ACTIONS(312),
        [anon_sym_BQUOTE] = ACTIONS(312),
        [anon_sym_PIPE] = ACTIONS(312),
        [anon_sym_TILDE] = ACTIONS(312),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(312),
        [anon_sym_anchor] = ACTIONS(312),
        [sym_email] = ACTIONS(312),
        [anon_sym_footnote] = ACTIONS(312),
        [anon_sym_footnoteref] = ACTIONS(312),
        [anon_sym_image] = ACTIONS(312),
        [anon_sym_icon] = ACTIONS(312),
        [anon_sym_kbd] = ACTIONS(312),
        [anon_sym_btn] = ACTIONS(312),
        [anon_sym_http] = ACTIONS(312),
        [anon_sym_https] = ACTIONS(312),
        [anon_sym_file] = ACTIONS(312),
        [anon_sym_ftp] = ACTIONS(312),
        [anon_sym_irc] = ACTIONS(312),
        [anon_sym_link] = ACTIONS(312),
        [anon_sym_mailto] = ACTIONS(312),
        [anon_sym_stem] = ACTIONS(312),
        [anon_sym_latexmath] = ACTIONS(312),
        [anon_sym_asciimath] = ACTIONS(312),
        [anon_sym_menu] = ACTIONS(312),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(312),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(312),
        [anon_sym_pass] = ACTIONS(312),
        [anon_sym_LT_LT] = ACTIONS(312),
        [anon_sym_xref] = ACTIONS(312),
        [anon_sym_STAR2] = ACTIONS(312),
        [anon_sym_STAR_STAR] = ACTIONS(312),
        [anon_sym__2] = ACTIONS(312),
        [anon_sym___] = ACTIONS(312),
        [anon_sym_BQUOTE2] = ACTIONS(312),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(312),
        [anon_sym_POUND2] = ACTIONS(312),
        [anon_sym_POUND_POUND] = ACTIONS(312),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 3,
    ACTIONS(314),
    1,
    anon_sym_RBRACK,
    STATE(49),
    1,
    aux_sym_image_macro_repeat1,
    ACTIONS(316),
    3,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [12] = 3,
    ACTIONS(318),
    1,
    anon_sym_RBRACK,
    STATE(46),
    1,
    aux_sym_image_macro_repeat1,
    ACTIONS(316),
    3,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [24] = 3,
    STATE(48),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(320),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    ACTIONS(323),
    2,
    anon_sym_POUND3,
    anon_sym_POUND_POUND,
    [36] = 3,
    ACTIONS(325),
    1,
    anon_sym_RBRACK,
    STATE(49),
    1,
    aux_sym_image_macro_repeat1,
    ACTIONS(327),
    3,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [48] = 3,
    STATE(50),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(330),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    ACTIONS(333),
    2,
    anon_sym_BQUOTE3,
    anon_sym_BQUOTE_BQUOTE,
    [60] = 5,
    ACTIONS(335),
    1,
    anon_sym_PLUS,
    ACTIONS(337),
    1,
    anon_sym_COMMA,
    ACTIONS(339),
    1,
    anon_sym_RBRACK,
    STATE(76),
    1,
    aux_sym_kbd_macro_repeat2,
    STATE(77),
    1,
    aux_sym_kbd_macro_repeat1,
    [76] = 3,
    STATE(52),
    1,
    aux_sym_emphasis_repeat1,
    ACTIONS(341),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    ACTIONS(344),
    2,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    [88] = 3,
    STATE(53),
    1,
    aux_sym_ltalic_repeat1,
    ACTIONS(346),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    ACTIONS(349),
    2,
    anon_sym__3,
    anon_sym___,
    [100] = 3,
    ACTIONS(353),
    1,
    anon_sym__3,
    STATE(62),
    1,
    aux_sym_ltalic_repeat1,
    ACTIONS(351),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    [111] = 3,
    ACTIONS(357),
    1,
    anon_sym_STAR_STAR,
    STATE(68),
    1,
    aux_sym_emphasis_repeat1,
    ACTIONS(355),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    [122] = 3,
    ACTIONS(361),
    1,
    anon_sym_BQUOTE3,
    STATE(50),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(359),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [133] = 3,
    ACTIONS(361),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(50),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(359),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [144] = 3,
    ACTIONS(365),
    1,
    anon_sym_STAR3,
    STATE(52),
    1,
    aux_sym_emphasis_repeat1,
    ACTIONS(363),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    [155] = 3,
    ACTIONS(369),
    1,
    anon_sym_POUND3,
    STATE(48),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(367),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [166] = 3,
    ACTIONS(369),
    1,
    anon_sym_POUND_POUND,
    STATE(48),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(367),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [177] = 3,
    ACTIONS(371),
    1,
    anon_sym_DOT,
    STATE(64),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(149),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [188] = 3,
    ACTIONS(375),
    1,
    anon_sym__3,
    STATE(53),
    1,
    aux_sym_ltalic_repeat1,
    ACTIONS(373),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    [199] = 3,
    ACTIONS(375),
    1,
    anon_sym___,
    STATE(53),
    1,
    aux_sym_ltalic_repeat1,
    ACTIONS(373),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    [210] = 3,
    ACTIONS(377),
    1,
    anon_sym_DOT,
    STATE(64),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(161),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [221] = 3,
    ACTIONS(371),
    1,
    anon_sym_DOT,
    STATE(61),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(172),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [232] = 3,
    ACTIONS(357),
    1,
    anon_sym_STAR3,
    STATE(58),
    1,
    aux_sym_emphasis_repeat1,
    ACTIONS(380),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    [243] = 1,
    ACTIONS(382),
    4,
    anon_sym_RBRACK,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [250] = 3,
    ACTIONS(365),
    1,
    anon_sym_STAR_STAR,
    STATE(52),
    1,
    aux_sym_emphasis_repeat1,
    ACTIONS(363),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    [261] = 3,
    ACTIONS(353),
    1,
    anon_sym___,
    STATE(63),
    1,
    aux_sym_ltalic_repeat1,
    ACTIONS(384),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    [272] = 3,
    ACTIONS(388),
    1,
    anon_sym_BQUOTE3,
    STATE(56),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(386),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [283] = 3,
    ACTIONS(388),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(57),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(390),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [294] = 3,
    ACTIONS(394),
    1,
    anon_sym_POUND3,
    STATE(59),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(392),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [305] = 3,
    ACTIONS(394),
    1,
    anon_sym_POUND_POUND,
    STATE(60),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(396),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [316] = 2,
    STATE(51),
    1,
    sym_key,
    ACTIONS(398),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [324] = 1,
    ACTIONS(400),
    3,
    anon_sym_PLUS,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [330] = 3,
    ACTIONS(337),
    1,
    anon_sym_COMMA,
    ACTIONS(402),
    1,
    anon_sym_RBRACK,
    STATE(79),
    1,
    aux_sym_kbd_macro_repeat2,
    [340] = 3,
    ACTIONS(335),
    1,
    anon_sym_PLUS,
    ACTIONS(402),
    1,
    anon_sym_RBRACK,
    STATE(78),
    1,
    aux_sym_kbd_macro_repeat1,
    [350] = 3,
    ACTIONS(404),
    1,
    anon_sym_PLUS,
    ACTIONS(407),
    1,
    anon_sym_RBRACK,
    STATE(78),
    1,
    aux_sym_kbd_macro_repeat1,
    [360] = 3,
    ACTIONS(409),
    1,
    anon_sym_COMMA,
    ACTIONS(412),
    1,
    anon_sym_RBRACK,
    STATE(79),
    1,
    aux_sym_kbd_macro_repeat2,
    [370] = 2,
    STATE(89),
    1,
    sym_key,
    ACTIONS(398),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [378] = 2,
    STATE(83),
    1,
    sym_key,
    ACTIONS(398),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [386] = 1,
    ACTIONS(161),
    3,
    anon_sym_DQUOTE,
    anon_sym_DOT,
    anon_sym_LBRACK,
    [392] = 1,
    ACTIONS(407),
    2,
    anon_sym_PLUS,
    anon_sym_RBRACK,
    [397] = 2,
    ACTIONS(414),
    1,
    anon_sym_COMMA,
    ACTIONS(416),
    1,
    anon_sym_RBRACK,
    [404] = 2,
    ACTIONS(418),
    1,
    anon_sym_DQUOTE,
    ACTIONS(420),
    1,
    anon_sym_LBRACK,
    [411] = 2,
    ACTIONS(422),
    1,
    aux_sym_anchor_token2,
    ACTIONS(424),
    1,
    aux_sym_footnote_macro_token1,
    [418] = 2,
    ACTIONS(426),
    1,
    anon_sym_COMMA,
    ACTIONS(428),
    1,
    anon_sym_RBRACK_RBRACK,
    [425] = 2,
    ACTIONS(430),
    1,
    aux_sym_replacement_token1,
    ACTIONS(432),
    1,
    anon_sym_LBRACK,
    [432] = 1,
    ACTIONS(412),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [437] = 2,
    ACTIONS(434),
    1,
    aux_sym_anchor_token2,
    ACTIONS(436),
    1,
    aux_sym_footnote_macro_token1,
    [444] = 2,
    ACTIONS(438),
    1,
    anon_sym_COMMA,
    ACTIONS(440),
    1,
    anon_sym_RBRACK,
    [451] = 1,
    ACTIONS(442),
    1,
    anon_sym_LBRACK,
    [455] = 1,
    ACTIONS(444),
    1,
    anon_sym_RBRACK,
    [459] = 1,
    ACTIONS(446),
    1,
    anon_sym_RBRACK,
    [463] = 1,
    ACTIONS(448),
    1,
    anon_sym_RBRACK,
    [467] = 1,
    ACTIONS(450),
    1,
    anon_sym_RBRACK_RBRACK,
    [471] = 1,
    ACTIONS(452),
    1,
    aux_sym_anchor_token2,
    [475] = 1,
    ACTIONS(454),
    1,
    aux_sym_replacement_token1,
    [479] = 1,
    ACTIONS(456),
    1,
    sym__link_component,
    [483] = 1,
    ACTIONS(458),
    1,
    anon_sym_LBRACK,
    [487] = 1,
    ACTIONS(460),
    1,
    aux_sym_anchor_token2,
    [491] = 1,
    ACTIONS(462),
    1,
    anon_sym_RBRACK,
    [495] = 1,
    ACTIONS(464),
    1,
    aux_sym_anchor_token2,
    [499] = 1,
    ACTIONS(466),
    1,
    aux_sym_anchor_token2,
    [503] = 1,
    ACTIONS(468),
    1,
    anon_sym_GT_GT,
    [507] = 1,
    ACTIONS(470),
    1,
    aux_sym_anchor_token2,
    [511] = 1,
    ACTIONS(472),
    1,
    anon_sym_LBRACK,
    [515] = 1,
    ACTIONS(474),
    1,
    anon_sym_DQUOTE,
    [519] = 1,
    ACTIONS(476),
    1,
    anon_sym_LBRACK,
    [523] = 1,
    ACTIONS(478),
    1,
    anon_sym_RBRACK,
    [527] = 1,
    ACTIONS(480),
    1,
    anon_sym_RBRACK,
    [531] = 1,
    ACTIONS(482),
    1,
    aux_sym_anchor_token2,
    [535] = 1,
    ACTIONS(484),
    1,
    anon_sym_LBRACK,
    [539] = 1,
    ACTIONS(486),
    1,
    aux_sym_footnote_macro_token2,
    [543] = 1,
    ACTIONS(488),
    1,
    anon_sym_LBRACK,
    [547] = 1,
    ACTIONS(490),
    1,
    anon_sym_LBRACK,
    [551] = 1,
    ACTIONS(492),
    1,
    anon_sym_LBRACK,
    [555] = 1,
    ACTIONS(494),
    1,
    aux_sym_anchor_token1,
    [559] = 1,
    ACTIONS(496),
    1,
    aux_sym_auto_link_token1,
    [563] = 1,
    ACTIONS(498),
    1,
    aux_sym_anchor_token2,
    [567] = 1,
    ACTIONS(500),
    1,
    aux_sym_replacement_token1,
    [571] = 1,
    ACTIONS(502),
    1,
    aux_sym_xref_token1,
    [575] = 1,
    ACTIONS(504),
    1,
    anon_sym_quotes,
    [579] = 1,
    ACTIONS(506),
    1,
    anon_sym_DOLLAR_DOLLAR,
    [583] = 1,
    ACTIONS(506),
    1,
    anon_sym_PLUS_PLUS_PLUS,
    [587] = 1,
    ACTIONS(508),
    1,
    anon_sym_RBRACK,
    [591] = 1,
    ACTIONS(510),
    1,
    aux_sym_replacement_token1,
    [595] = 1,
    ACTIONS(512),
    1,
    anon_sym_RBRACK,
    [599] = 1,
    ACTIONS(514),
    1,
    anon_sym_RBRACK,
    [603] = 1,
    ACTIONS(516),
    1,
    anon_sym_RBRACK,
    [607] = 1,
    ACTIONS(518),
    1,
    anon_sym_LBRACK,
    [611] = 1,
    ACTIONS(520),
    1,
    aux_sym_link_macro_token1,
    [615] = 1,
    ACTIONS(522),
    1,
    sym__link_component,
    [619] = 1,
    ACTIONS(524),
    1,
    aux_sym_footnote_macro_token2,
    [623] = 1,
    ACTIONS(526),
    1,
    aux_sym_image_macro_token1,
    [627] = 1,
    ACTIONS(528),
    1,
    anon_sym_RBRACK,
    [631] = 1,
    ACTIONS(530),
    1,
    aux_sym_replacement_token1,
    [635] = 1,
    ACTIONS(506),
    1,
    anon_sym_PLUS,
    [639] = 1,
    ACTIONS(532),
    1,
    anon_sym_RBRACE,
    [643] = 1,
    ACTIONS(534),
    1,
    ts_builtin_sym_end,
    [647] = 1,
    ACTIONS(536),
    1,
    anon_sym_COLON,
    [651] = 1,
    ACTIONS(538),
    1,
    aux_sym_replacement_token1,
    [655] = 1,
    ACTIONS(540),
    1,
    anon_sym_COLON,
    [659] = 1,
    ACTIONS(542),
    1,
    aux_sym_replacement_token1,
    [663] = 1,
    ACTIONS(544),
    1,
    aux_sym_replacement_token1,
    [667] = 1,
    ACTIONS(546),
    1,
    anon_sym_COLON,
    [671] = 1,
    ACTIONS(548),
    1,
    anon_sym_COLON,
    [675] = 1,
    ACTIONS(550),
    1,
    anon_sym_RBRACK,
    [679] = 1,
    ACTIONS(552),
    1,
    anon_sym_COLON,
    [683] = 1,
    ACTIONS(554),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [687] = 1,
    ACTIONS(556),
    1,
    anon_sym_COLON,
    [691] = 1,
    ACTIONS(558),
    1,
    anon_sym_COLON,
    [695] = 1,
    ACTIONS(560),
    1,
    anon_sym_COLON,
    [699] = 1,
    ACTIONS(562),
    1,
    anon_sym_COLON,
    [703] = 1,
    ACTIONS(564),
    1,
    sym__link_component,
    [707] = 1,
    ACTIONS(566),
    1,
    sym__link_component,
    [711] = 1,
    ACTIONS(568),
    1,
    anon_sym_COLON_SLASH_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(46)] = 0,
    [SMALL_STATE(47)] = 12,
    [SMALL_STATE(48)] = 24,
    [SMALL_STATE(49)] = 36,
    [SMALL_STATE(50)] = 48,
    [SMALL_STATE(51)] = 60,
    [SMALL_STATE(52)] = 76,
    [SMALL_STATE(53)] = 88,
    [SMALL_STATE(54)] = 100,
    [SMALL_STATE(55)] = 111,
    [SMALL_STATE(56)] = 122,
    [SMALL_STATE(57)] = 133,
    [SMALL_STATE(58)] = 144,
    [SMALL_STATE(59)] = 155,
    [SMALL_STATE(60)] = 166,
    [SMALL_STATE(61)] = 177,
    [SMALL_STATE(62)] = 188,
    [SMALL_STATE(63)] = 199,
    [SMALL_STATE(64)] = 210,
    [SMALL_STATE(65)] = 221,
    [SMALL_STATE(66)] = 232,
    [SMALL_STATE(67)] = 243,
    [SMALL_STATE(68)] = 250,
    [SMALL_STATE(69)] = 261,
    [SMALL_STATE(70)] = 272,
    [SMALL_STATE(71)] = 283,
    [SMALL_STATE(72)] = 294,
    [SMALL_STATE(73)] = 305,
    [SMALL_STATE(74)] = 316,
    [SMALL_STATE(75)] = 324,
    [SMALL_STATE(76)] = 330,
    [SMALL_STATE(77)] = 340,
    [SMALL_STATE(78)] = 350,
    [SMALL_STATE(79)] = 360,
    [SMALL_STATE(80)] = 370,
    [SMALL_STATE(81)] = 378,
    [SMALL_STATE(82)] = 386,
    [SMALL_STATE(83)] = 392,
    [SMALL_STATE(84)] = 397,
    [SMALL_STATE(85)] = 404,
    [SMALL_STATE(86)] = 411,
    [SMALL_STATE(87)] = 418,
    [SMALL_STATE(88)] = 425,
    [SMALL_STATE(89)] = 432,
    [SMALL_STATE(90)] = 437,
    [SMALL_STATE(91)] = 444,
    [SMALL_STATE(92)] = 451,
    [SMALL_STATE(93)] = 455,
    [SMALL_STATE(94)] = 459,
    [SMALL_STATE(95)] = 463,
    [SMALL_STATE(96)] = 467,
    [SMALL_STATE(97)] = 471,
    [SMALL_STATE(98)] = 475,
    [SMALL_STATE(99)] = 479,
    [SMALL_STATE(100)] = 483,
    [SMALL_STATE(101)] = 487,
    [SMALL_STATE(102)] = 491,
    [SMALL_STATE(103)] = 495,
    [SMALL_STATE(104)] = 499,
    [SMALL_STATE(105)] = 503,
    [SMALL_STATE(106)] = 507,
    [SMALL_STATE(107)] = 511,
    [SMALL_STATE(108)] = 515,
    [SMALL_STATE(109)] = 519,
    [SMALL_STATE(110)] = 523,
    [SMALL_STATE(111)] = 527,
    [SMALL_STATE(112)] = 531,
    [SMALL_STATE(113)] = 535,
    [SMALL_STATE(114)] = 539,
    [SMALL_STATE(115)] = 543,
    [SMALL_STATE(116)] = 547,
    [SMALL_STATE(117)] = 551,
    [SMALL_STATE(118)] = 555,
    [SMALL_STATE(119)] = 559,
    [SMALL_STATE(120)] = 563,
    [SMALL_STATE(121)] = 567,
    [SMALL_STATE(122)] = 571,
    [SMALL_STATE(123)] = 575,
    [SMALL_STATE(124)] = 579,
    [SMALL_STATE(125)] = 583,
    [SMALL_STATE(126)] = 587,
    [SMALL_STATE(127)] = 591,
    [SMALL_STATE(128)] = 595,
    [SMALL_STATE(129)] = 599,
    [SMALL_STATE(130)] = 603,
    [SMALL_STATE(131)] = 607,
    [SMALL_STATE(132)] = 611,
    [SMALL_STATE(133)] = 615,
    [SMALL_STATE(134)] = 619,
    [SMALL_STATE(135)] = 623,
    [SMALL_STATE(136)] = 627,
    [SMALL_STATE(137)] = 631,
    [SMALL_STATE(138)] = 635,
    [SMALL_STATE(139)] = 639,
    [SMALL_STATE(140)] = 643,
    [SMALL_STATE(141)] = 647,
    [SMALL_STATE(142)] = 651,
    [SMALL_STATE(143)] = 655,
    [SMALL_STATE(144)] = 659,
    [SMALL_STATE(145)] = 663,
    [SMALL_STATE(146)] = 667,
    [SMALL_STATE(147)] = 671,
    [SMALL_STATE(148)] = 675,
    [SMALL_STATE(149)] = 679,
    [SMALL_STATE(150)] = 683,
    [SMALL_STATE(151)] = 687,
    [SMALL_STATE(152)] = 691,
    [SMALL_STATE(153)] = 695,
    [SMALL_STATE(154)] = 699,
    [SMALL_STATE(155)] = 703,
    [SMALL_STATE(156)] = 707,
    [SMALL_STATE(157)] = 711,
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
    SHIFT(19),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(7),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(8),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(98),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(154),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(3),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(153),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(152),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(151),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(150),
    [27] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(149),
    [29] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(147),
    [31] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(146),
    [33] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(145),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(144),
    [37] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(143),
    [39] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(142),
    [41] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(141),
    [43] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(66),
    [45] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(55),
    [47] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(54),
    [49] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(69),
    [51] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(70),
    [53] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(71),
    [55] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(72),
    [57] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(73),
    [59] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    [61] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(5),
    [64] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(28),
    [67] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(19),
    [70] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(7),
    [73] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(8),
    [76] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(98),
    [79] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(154),
    [82] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(2),
    [85] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(153),
    [88] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(152),
    [91] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(151),
    [94] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(150),
    [97] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(149),
    [100] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(147),
    [103] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(146),
    [106] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(145),
    [109] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(144),
    [112] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(143),
    [115] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(142),
    [118] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(141),
    [121] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(66),
    [124] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(55),
    [127] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(54),
    [130] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(69),
    [133] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(70),
    [136] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(71),
    [139] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(72),
    [142] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(73),
    [145] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [147] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(2),
    [149] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 4, 0, 0),
    [151] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 4, 0, 0),
    [153] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(99),
    [155] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [157] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_punctuation, 1, 0, 0),
    [159] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(139),
    [161] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [163] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [165] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(99),
    [168] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(157),
    [170] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(138),
    [172] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 3, 0, 0),
    [174] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 3, 0, 0),
    [176] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 4, 0, 3),
    [178] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 4, 0, 3),
    [180] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 3, 0, 0),
    [182] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 3, 0, 0),
    [184] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 8, 0, 8),
    [186] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 8, 0, 8),
    [188] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 7, 0, 0),
    [190] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 7, 0, 0),
    [192] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 6, 0, 7),
    [194] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 6, 0, 7),
    [196] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_passthrough, 6, 0, 0),
    [198] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_passthrough, 6, 0, 0),
    [200] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_menu_macro, 6, 0, 10),
    [202] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_menu_macro, 6, 0, 10),
    [204] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_macro, 6, 0, 9),
    [206] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_macro, 6, 0, 9),
    [208] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 3, 0, 0),
    [210] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 3, 0, 0),
    [212] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_word, 1, 0, 0),
    [214] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_word, 1, 0, 0),
    [216] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_kbd_macro, 6, 0, 0),
    [218] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_kbd_macro, 6, 0, 0),
    [220] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [222] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [224] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 2, 0, 0),
    [226] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 2, 0, 0),
    [228] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [230] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [232] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 2, 0, 0),
    [234] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 2, 0, 0),
    [236] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 4, 0, 2),
    [238] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 4, 0, 2),
    [240] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 1),
    [242] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 1),
    [244] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 5, 0, 2),
    [246] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 5, 0, 2),
    [248] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 5, 0, 4),
    [250] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 5, 0, 4),
    [252] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [254] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [256] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(120),
    [258] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [260] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [262] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [264] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [266] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 5, 0, 0),
    [268] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 5, 0, 0),
    [270] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_image_macro, 6, 0, 0),
    [272] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_image_macro, 6, 0, 0),
    [274] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_image_macro, 5, 0, 0),
    [276] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_image_macro, 5, 0, 0),
    [278] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 6, 0, 8),
    [280] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 6, 0, 8),
    [282] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 3, 0, 2),
    [284] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 3, 0, 2),
    [286] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 6, 0, 7),
    [288] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 6, 0, 7),
    [290] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [292] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [294] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 6, 0, 7),
    [296] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 6, 0, 7),
    [298] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [300] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [302] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_math_macro, 5, 0, 6),
    [304] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_math_macro, 5, 0, 6),
    [306] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_kbd_macro, 5, 0, 0),
    [308] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_kbd_macro, 5, 0, 0),
    [310] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [312] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [314] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(34),
    [316] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(67),
    [318] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(35),
    [320] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    SHIFT_REPEAT(48),
    [323] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    [325] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_image_macro_repeat1, 2, 0, 0),
    [327] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_image_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(67),
    [330] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    SHIFT_REPEAT(50),
    [333] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    [335] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(81),
    [337] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [339] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [341] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(52),
    [344] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    [346] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(53),
    [349] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    [351] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [353] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(31),
    [355] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(68),
    [357] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(32),
    [359] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(50),
    [361] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(18),
    [363] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(52),
    [365] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(23),
    [367] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(48),
    [369] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(11),
    [371] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(156),
    [373] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(53),
    [375] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(21),
    [377] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(156),
    [380] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(58),
    [382] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_image_macro_repeat1, 1, 0, 5),
    [384] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(63),
    [386] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(56),
    [388] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(24),
    [390] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(57),
    [392] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(59),
    [394] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(22),
    [396] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(60),
    [398] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [400] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_key, 1, 0, 0),
    [402] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [404] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(81),
    [407] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat1, 2, 0, 0),
    [409] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(80),
    [412] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat2, 2, 0, 0),
    [414] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(134),
    [416] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [418] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [420] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(119),
    [422] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(94),
    [424] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(91),
    [426] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(118),
    [428] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [430] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(116),
    [432] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(86),
    [434] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(111),
    [436] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(84),
    [438] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(114),
    [440] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(33),
    [442] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [444] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [446] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(29),
    [448] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(108),
    [450] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [452] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(110),
    [454] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [456] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [458] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(106),
    [460] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(126),
    [462] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [464] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(128),
    [466] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(129),
    [468] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [470] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(130),
    [472] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(104),
    [474] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(41),
    [476] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(103),
    [478] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [480] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [482] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(102),
    [484] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(101),
    [486] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(136),
    [488] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [490] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(90),
    [492] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(97),
    [494] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
    [496] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(95),
    [498] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [500] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(100),
    [502] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(105),
    [504] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(107),
    [506] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [508] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [510] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(109),
    [512] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [514] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [516] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [518] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(112),
    [520] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(113),
    [522] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [524] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(148),
    [526] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(115),
    [528] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [530] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(117),
    [532] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [534] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [536] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(121),
    [538] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(122),
    [540] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(123),
    [542] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(124),
    [544] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(125),
    [546] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(127),
    [548] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(131),
    [550] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [552] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(132),
    [554] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(133),
    [556] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [558] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(135),
    [560] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [562] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(137),
    [564] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [566] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [568] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(155),
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
