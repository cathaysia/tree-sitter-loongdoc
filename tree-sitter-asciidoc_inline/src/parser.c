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
#define STATE_COUNT 204
#define LARGE_STATE_COUNT 48
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 3
#define TOKEN_COUNT 99
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 10

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
    aux_sym_anchor_token2 = 38,
    anon_sym_RBRACK_RBRACK = 39,
    anon_sym_anchor = 40,
    aux_sym_anchor_token3 = 41,
    sym_email = 42,
    anon_sym_footnote = 43,
    anon_sym_footnoteref = 44,
    aux_sym_footnote_macro_token1 = 45,
    aux_sym_footnote_macro_token2 = 46,
    anon_sym_image = 47,
    anon_sym_icon = 48,
    aux_sym_image_macro_token1 = 49,
    aux_sym_image_macro_token2 = 50,
    anon_sym_BSLASH_LBRACK = 51,
    anon_sym_BSLASH_RBRACK = 52,
    anon_sym_kbd = 53,
    anon_sym_btn = 54,
    aux_sym_key_token1 = 55,
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
    sym_link_label = 109,
    sym_link_url = 110,
    sym_link_macro = 111,
    sym_math_macro = 112,
    sym_menu_macro = 113,
    sym_passthrough = 114,
    sym_xref = 115,
    sym_emphasis = 116,
    sym_ltalic = 117,
    sym_monospace = 118,
    sym_highlight = 119,
    sym_pass_macro = 120,
    aux_sym_inline_repeat1 = 121,
    aux_sym_image_macro_repeat1 = 122,
    aux_sym_kbd_macro_repeat1 = 123,
    aux_sym_kbd_macro_repeat2 = 124,
    aux_sym_link_label_repeat1 = 125,
    aux_sym_link_url_repeat1 = 126,
    aux_sym_emphasis_repeat1 = 127,
    aux_sym_ltalic_repeat1 = 128,
    aux_sym_monospace_repeat1 = 129,
    aux_sym_highlight_repeat1 = 130,
    alias_sym_keys = 131,
    alias_sym_math = 132,
    alias_sym_pass_value = 133,
};

static const char *const ts_symbol_names[] = {
    [ts_builtin_sym_end] = "end",
    [anon_sym_LBRACE] = "{",
    [aux_sym_replacement_token1] = "intrinsic_attributes",
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
    [aux_sym_anchor_token1] = "anchor_token1",
    [aux_sym_anchor_token2] = "reftext",
    [anon_sym_RBRACK_RBRACK] = "]]",
    [anon_sym_anchor] = "anchor",
    [aux_sym_anchor_token3] = "anchor_token3",
    [sym_email] = "email",
    [anon_sym_footnote] = "footnote",
    [anon_sym_footnoteref] = "footnoteref",
    [aux_sym_footnote_macro_token1] = "id",
    [aux_sym_footnote_macro_token2] = "reftext",
    [anon_sym_image] = "image",
    [anon_sym_icon] = "icon",
    [aux_sym_image_macro_token1] = "link_url",
    [aux_sym_image_macro_token2] = "image_macro_token2",
    [anon_sym_BSLASH_LBRACK] = "id",
    [anon_sym_BSLASH_RBRACK] = "\\]",
    [anon_sym_kbd] = "kbd",
    [anon_sym_btn] = "btn",
    [aux_sym_key_token1] = "key_token1",
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
    [sym_link_label] = "link_label",
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
    [sym_pass_macro] = "pass_macro",
    [aux_sym_inline_repeat1] = "inline_repeat1",
    [aux_sym_image_macro_repeat1] = "image_macro_repeat1",
    [aux_sym_kbd_macro_repeat1] = "kbd_macro_repeat1",
    [aux_sym_kbd_macro_repeat2] = "kbd_macro_repeat2",
    [aux_sym_link_label_repeat1] = "link_label_repeat1",
    [aux_sym_link_url_repeat1] = "link_url_repeat1",
    [aux_sym_emphasis_repeat1] = "emphasis_repeat1",
    [aux_sym_ltalic_repeat1] = "ltalic_repeat1",
    [aux_sym_monospace_repeat1] = "monospace_repeat1",
    [aux_sym_highlight_repeat1] = "highlight_repeat1",
    [alias_sym_keys] = "keys",
    [alias_sym_math] = "math",
    [alias_sym_pass_value] = "pass_value",
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
    [aux_sym_anchor_token2] = aux_sym_anchor_token2,
    [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
    [anon_sym_anchor] = anon_sym_anchor,
    [aux_sym_anchor_token3] = aux_sym_anchor_token3,
    [sym_email] = sym_email,
    [anon_sym_footnote] = anon_sym_footnote,
    [anon_sym_footnoteref] = anon_sym_footnoteref,
    [aux_sym_footnote_macro_token1] = aux_sym_footnote_macro_token1,
    [aux_sym_footnote_macro_token2] = aux_sym_anchor_token2,
    [anon_sym_image] = anon_sym_image,
    [anon_sym_icon] = anon_sym_icon,
    [aux_sym_image_macro_token1] = sym_link_url,
    [aux_sym_image_macro_token2] = aux_sym_image_macro_token2,
    [anon_sym_BSLASH_LBRACK] = aux_sym_footnote_macro_token1,
    [anon_sym_BSLASH_RBRACK] = anon_sym_BSLASH_RBRACK,
    [anon_sym_kbd] = anon_sym_kbd,
    [anon_sym_btn] = anon_sym_btn,
    [aux_sym_key_token1] = aux_sym_key_token1,
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
    [aux_sym_xref_token1] = aux_sym_anchor_token2,
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
    [sym_link_label] = sym_link_label,
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
    [sym_pass_macro] = sym_pass_macro,
    [aux_sym_inline_repeat1] = aux_sym_inline_repeat1,
    [aux_sym_image_macro_repeat1] = aux_sym_image_macro_repeat1,
    [aux_sym_kbd_macro_repeat1] = aux_sym_kbd_macro_repeat1,
    [aux_sym_kbd_macro_repeat2] = aux_sym_kbd_macro_repeat2,
    [aux_sym_link_label_repeat1] = aux_sym_link_label_repeat1,
    [aux_sym_link_url_repeat1] = aux_sym_link_url_repeat1,
    [aux_sym_emphasis_repeat1] = aux_sym_emphasis_repeat1,
    [aux_sym_ltalic_repeat1] = aux_sym_ltalic_repeat1,
    [aux_sym_monospace_repeat1] = aux_sym_monospace_repeat1,
    [aux_sym_highlight_repeat1] = aux_sym_highlight_repeat1,
    [alias_sym_keys] = alias_sym_keys,
    [alias_sym_math] = alias_sym_math,
    [alias_sym_pass_value] = alias_sym_pass_value,
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
        .visible = true,
        .named = true,
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
        .visible = false,
        .named = false,
    },
    [aux_sym_anchor_token2] = {
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
    [aux_sym_anchor_token3] = {
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
        .visible = false,
        .named = false,
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
    [sym_link_label] = {
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
    [sym_pass_macro] = {
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
    [aux_sym_link_label_repeat1] = {
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
    [alias_sym_keys] = {
        .visible = true,
        .named = true,
    },
    [alias_sym_math] = {
        .visible = true,
        .named = true,
    },
    [alias_sym_pass_value] = {
        .visible = true,
        .named = true,
    },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
    [0] = { 0 },
    [1] = {
        [1] = aux_sym_footnote_macro_token1,
    },
    [2] = {
        [3] = aux_sym_anchor_token2,
    },
    [3] = {
        [0] = aux_sym_footnote_macro_token1,
    },
    [4] = {
        [3] = alias_sym_math,
    },
    [5] = {
        [3] = alias_sym_pass_value,
    },
    [6] = {
        [2] = aux_sym_footnote_macro_token1,
        [4] = aux_sym_anchor_token2,
    },
    [7] = {
        [2] = aux_sym_footnote_macro_token1,
    },
    [8] = {
        [2] = aux_sym_footnote_macro_token1,
        [4] = alias_sym_keys,
    },
    [9] = {
        [4] = aux_sym_anchor_token2,
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
    [55] = 51,
    [56] = 53,
    [57] = 57,
    [58] = 58,
    [59] = 50,
    [60] = 57,
    [61] = 58,
    [62] = 62,
    [63] = 52,
    [64] = 62,
    [65] = 54,
    [66] = 41,
    [67] = 40,
    [68] = 43,
    [69] = 35,
    [70] = 34,
    [71] = 47,
    [72] = 34,
    [73] = 35,
    [74] = 37,
    [75] = 43,
    [76] = 40,
    [77] = 24,
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
    [93] = 4,
    [94] = 9,
    [95] = 91,
    [96] = 89,
    [97] = 97,
    [98] = 8,
    [99] = 90,
    [100] = 100,
    [101] = 97,
    [102] = 102,
    [103] = 102,
    [104] = 100,
    [105] = 105,
    [106] = 92,
    [107] = 92,
    [108] = 100,
    [109] = 97,
    [110] = 89,
    [111] = 90,
    [112] = 105,
    [113] = 102,
    [114] = 105,
    [115] = 115,
    [116] = 91,
    [117] = 117,
    [118] = 118,
    [119] = 119,
    [120] = 21,
    [121] = 121,
    [122] = 122,
    [123] = 123,
    [124] = 124,
    [125] = 36,
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
    [183] = 183,
    [184] = 159,
    [185] = 138,
    [186] = 186,
    [187] = 187,
    [188] = 188,
    [189] = 189,
    [190] = 190,
    [191] = 191,
    [192] = 192,
    [193] = 193,
    [194] = 162,
    [195] = 195,
    [196] = 196,
    [197] = 197,
    [198] = 198,
    [199] = 199,
    [200] = 200,
    [201] = 201,
    [202] = 202,
    [203] = 153,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(84);
            ADVANCE_MAP(
                ' ', 2,
                '!', 339,
                '"', 342,
                '#', 344,
                '$', 346,
                '%', 348,
                '&', 350,
                '\'', 352,
                '(', 354,
                ')', 356,
                '*', 358,
                '+', 361,
                ',', 363,
                '-', 365,
                '.', 367,
                '/', 369,
                ':', 371,
                ';', 373,
                '<', 375,
                '=', 377,
                '>', 379,
                '?', 381,
                '@', 383,
                '[', 386,
                '\\', 388,
                ']', 390,
                '^', 392,
                '_', 394,
                '`', 400,
                'a', 445,
                'b', 464,
                'f', 435,
                'h', 469,
                'i', 418,
                'k', 415,
                'l', 412,
                'm', 409,
                'p', 410,
                'q', 476,
                's', 465,
                'x', 460,
                '{', 86,
                '|', 402,
                '}', 202,
                '~', 404,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(337);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            END_STATE();
        case 1:
            ADVANCE_MAP(
                ' ', 2,
                '!', 339,
                '"', 342,
                '#', 344,
                '$', 346,
                '%', 348,
                '&', 350,
                '\'', 352,
                '(', 354,
                ')', 356,
                '*', 358,
                '+', 361,
                ',', 363,
                '-', 365,
                '.', 367,
                '/', 369,
                ':', 371,
                ';', 373,
                '<', 375,
                '=', 377,
                '>', 379,
                '?', 381,
                '@', 383,
                '[', 386,
                '\\', 388,
                ']', 390,
                '^', 392,
                '_', 394,
                '`', 400,
                'a', 445,
                'b', 464,
                'f', 435,
                'h', 469,
                'i', 418,
                'k', 415,
                'l', 412,
                'm', 409,
                'p', 410,
                'q', 476,
                's', 465,
                'x', 460,
                '{', 86,
                '|', 402,
                '}', 202,
                '~', 404,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(1);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(337);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            END_STATE();
        case 2:
            ADVANCE_MAP(
                ' ', 2,
                '!', 339,
                '"', 342,
                '#', 638,
                '$', 346,
                '%', 348,
                '&', 350,
                '\'', 352,
                '(', 354,
                ')', 356,
                '*', 599,
                '+', 361,
                ',', 363,
                '-', 365,
                '.', 367,
                '/', 369,
                ':', 371,
                ';', 373,
                '<', 375,
                '=', 377,
                '>', 379,
                '?', 381,
                '@', 383,
                '[', 386,
                '\\', 388,
                ']', 390,
                '^', 392,
                '_', 612,
                '`', 629,
                'a', 445,
                'b', 464,
                'f', 435,
                'h', 469,
                'i', 418,
                'k', 415,
                'l', 412,
                'm', 409,
                'p', 410,
                'q', 476,
                's', 465,
                'x', 460,
                '{', 86,
                '|', 402,
                '}', 202,
                '~', 404,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(1);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(337);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            END_STATE();
        case 3:
            ADVANCE_MAP(
                ' ', 4,
                '!', 339,
                '"', 342,
                '#', 344,
                '$', 346,
                '%', 348,
                '&', 350,
                '\'', 352,
                '(', 354,
                ')', 356,
                '*', 358,
                '+', 361,
                ',', 363,
                '-', 365,
                '.', 367,
                '/', 369,
                ':', 371,
                ';', 373,
                '<', 375,
                '=', 377,
                '>', 379,
                '?', 381,
                '@', 383,
                '[', 386,
                '\\', 388,
                ']', 390,
                '^', 392,
                '_', 395,
                '`', 400,
                'a', 240,
                'b', 257,
                'f', 230,
                'h', 262,
                'i', 214,
                'k', 211,
                'l', 208,
                'm', 205,
                'p', 206,
                's', 258,
                'x', 254,
                '{', 86,
                '|', 402,
                '}', 202,
                '~', 404,
                0x0b, 203,
                '\f', 203,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(3);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(338);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
            if(lookahead != 0)
                ADVANCE(335);
            END_STATE();
        case 4:
            ADVANCE_MAP(
                ' ', 4,
                '!', 339,
                '"', 342,
                '#', 638,
                '$', 346,
                '%', 348,
                '&', 350,
                '\'', 352,
                '(', 354,
                ')', 356,
                '*', 599,
                '+', 361,
                ',', 363,
                '-', 365,
                '.', 367,
                '/', 369,
                ':', 371,
                ';', 373,
                '<', 375,
                '=', 377,
                '>', 379,
                '?', 381,
                '@', 383,
                '[', 386,
                '\\', 388,
                ']', 390,
                '^', 392,
                '_', 612,
                '`', 629,
                'a', 240,
                'b', 257,
                'f', 230,
                'h', 262,
                'i', 214,
                'k', 211,
                'l', 208,
                'm', 205,
                'p', 206,
                's', 258,
                'x', 254,
                '{', 86,
                '|', 402,
                '}', 202,
                '~', 404,
                0x0b, 203,
                '\f', 203,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(3);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(338);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
            if(lookahead != 0)
                ADVANCE(335);
            END_STATE();
        case 5:
            ADVANCE_MAP(
                ' ', 6,
                '!', 339,
                '"', 342,
                '#', 344,
                '$', 346,
                '%', 348,
                '&', 350,
                '\'', 352,
                '(', 354,
                ')', 356,
                '*', 358,
                '+', 361,
                ',', 363,
                '-', 365,
                '.', 367,
                '/', 369,
                ':', 371,
                ';', 373,
                '<', 375,
                '=', 377,
                '>', 379,
                '?', 381,
                '@', 383,
                '[', 386,
                '\\', 388,
                ']', 390,
                '^', 392,
                '_', 394,
                '`', 400,
                'a', 305,
                'b', 322,
                'f', 295,
                'h', 327,
                'i', 279,
                'k', 276,
                'l', 273,
                'm', 270,
                'p', 271,
                's', 323,
                'x', 319,
                '{', 86,
                '|', 402,
                '}', 202,
                '~', 404,
                0x0b, 204,
                '\f', 204,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(5);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(337);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0)
                ADVANCE(335);
            END_STATE();
        case 6:
            ADVANCE_MAP(
                ' ', 6,
                '!', 339,
                '"', 342,
                '#', 638,
                '$', 346,
                '%', 348,
                '&', 350,
                '\'', 352,
                '(', 354,
                ')', 356,
                '*', 599,
                '+', 361,
                ',', 363,
                '-', 365,
                '.', 367,
                '/', 369,
                ':', 371,
                ';', 373,
                '<', 375,
                '=', 377,
                '>', 379,
                '?', 381,
                '@', 383,
                '[', 386,
                '\\', 388,
                ']', 390,
                '^', 392,
                '_', 612,
                '`', 629,
                'a', 305,
                'b', 322,
                'f', 295,
                'h', 327,
                'i', 279,
                'k', 276,
                'l', 273,
                'm', 270,
                'p', 271,
                's', 323,
                'x', 319,
                '{', 86,
                '|', 402,
                '}', 202,
                '~', 404,
                0x0b, 204,
                '\f', 204,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(5);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(337);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0)
                ADVANCE(335);
            END_STATE();
        case 7:
            if(lookahead == ' ')
                ADVANCE(601);
            if(lookahead == '#')
                ADVANCE(603);
            if(lookahead == '*')
                ADVANCE(8);
            if(lookahead == '\\')
                ADVANCE(604);
            if(lookahead == '_')
                ADVANCE(605);
            if(lookahead == '`')
                ADVANCE(606);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(7);
            if(('\t' <= lookahead && lookahead <= '\f'))
                ADVANCE(602);
            if(lookahead != 0)
                ADVANCE(600);
            END_STATE();
        case 8:
            if(lookahead == ' ')
                ADVANCE(608);
            if(lookahead == '*')
                ADVANCE(609);
            END_STATE();
        case 9:
            if(lookahead == ' ')
                ADVANCE(614);
            if(lookahead == '#')
                ADVANCE(616);
            if(lookahead == '*')
                ADVANCE(617);
            if(lookahead == '\\')
                ADVANCE(618);
            if(lookahead == '_')
                ADVANCE(10);
            if(lookahead == '`')
                ADVANCE(619);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(9);
            if(('\t' <= lookahead && lookahead <= '\f'))
                ADVANCE(615);
            if(lookahead != 0)
                ADVANCE(613);
            END_STATE();
        case 10:
            if(lookahead == ' ')
                ADVANCE(621);
            if(lookahead == '_')
                ADVANCE(622);
            END_STATE();
        case 11:
            if(lookahead == ' ')
                ADVANCE(634);
            if(lookahead == '`')
                ADVANCE(635);
            END_STATE();
        case 12:
            if(lookahead == ' ')
                ADVANCE(643);
            if(lookahead == '#')
                ADVANCE(644);
            END_STATE();
        case 13:
            if(lookahead == '"')
                ADVANCE(55);
            if(lookahead == '\\')
                ADVANCE(80);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(13);
            END_STATE();
        case 14:
            ADVANCE_MAP(
                '"', 341,
                '$', 16,
                '+', 360,
                ',', 363,
                '.', 367,
                ':', 50,
                '>', 54,
                '[', 385,
                '\\', 65,
                ']', 390,
                '}', 201,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(14);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(528);
            END_STATE();
        case 15:
            if(lookahead == '#')
                ADVANCE(12);
            if(lookahead == '\\')
                ADVANCE(640);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(15);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(641);
            if(lookahead != 0)
                ADVANCE(639);
            END_STATE();
        case 16:
            if(lookahead == '$')
                ADVANCE(579);
            END_STATE();
        case 17:
            if(lookahead == '+')
                ADVANCE(577);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(363);
            if(lookahead == '[')
                ADVANCE(385);
            if(lookahead == ']')
                ADVANCE(66);
            if(lookahead == 'q')
                ADVANCE(72);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(18);
            END_STATE();
        case 19:
            if(lookahead == '+')
                ADVANCE(576);
            END_STATE();
        case 20:
            if(lookahead == '+')
                ADVANCE(19);
            END_STATE();
        case 21:
            if(lookahead == '-')
                ADVANCE(22);
            if(lookahead == '.')
                ADVANCE(78);
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
                ADVANCE(492);
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
                ADVANCE(60);
            if(lookahead == ']')
                ADVANCE(491);
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
                ADVANCE(60);
            if(lookahead == ']')
                ADVANCE(491);
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
                ADVANCE(60);
            if(lookahead == ']')
                ADVANCE(491);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(29);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            END_STATE();
        case 28:
            if(lookahead == '-')
                ADVANCE(31);
            if(lookahead == ':')
                ADVANCE(60);
            if(lookahead == ']')
                ADVANCE(491);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(27);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            END_STATE();
        case 29:
            if(lookahead == '-')
                ADVANCE(31);
            if(lookahead == ':')
                ADVANCE(60);
            if(lookahead == ']')
                ADVANCE(491);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            END_STATE();
        case 30:
            if(lookahead == '-')
                ADVANCE(31);
            if(lookahead == ':')
                ADVANCE(60);
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
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 33:
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(549);
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
                ADVANCE(592);
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
            if(lookahead == '[')
                ADVANCE(385);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(57);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(480);
            END_STATE();
        case 58:
            if(lookahead == '\\')
                ADVANCE(59);
            if(lookahead == ']')
                ADVANCE(493);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(58);
            END_STATE();
        case 59:
            if(lookahead == '\\')
                ADVANCE(59);
            if(lookahead == ']')
                ADVANCE(493);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(58);
            END_STATE();
        case 60:
            if(lookahead == '\\')
                ADVANCE(59);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(58);
            END_STATE();
        case 61:
            if(lookahead == '\\')
                ADVANCE(196);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(193);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 62:
            if(lookahead == '\\')
                ADVANCE(515);
            if(lookahead == ']')
                ADVANCE(390);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(516);
            if(lookahead != 0)
                ADVANCE(514);
            END_STATE();
        case 63:
            if(lookahead == '\\')
                ADVANCE(632);
            if(lookahead == '`')
                ADVANCE(11);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(63);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(631);
            if(lookahead != 0)
                ADVANCE(630);
            END_STATE();
        case 64:
            if(lookahead == ']')
                ADVANCE(390);
            if(lookahead == '{')
                ADVANCE(85);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(517);
            if(lookahead != 0)
                ADVANCE(514);
            END_STATE();
        case 65:
            if(lookahead == ']')
                ADVANCE(519);
            END_STATE();
        case 66:
            if(lookahead == ']')
                ADVANCE(483);
            END_STATE();
        case 67:
            if(lookahead == '_')
                ADVANCE(67);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 68:
            if(lookahead == 'e')
                ADVANCE(70);
            END_STATE();
        case 69:
            if(lookahead == 'o')
                ADVANCE(71);
            END_STATE();
        case 70:
            if(lookahead == 's')
                ADVANCE(586);
            END_STATE();
        case 71:
            if(lookahead == 't')
                ADVANCE(68);
            END_STATE();
        case 72:
            if(lookahead == 'u')
                ADVANCE(69);
            END_STATE();
        case 73:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(73);
            if(lookahead != 0 &&
               lookahead != '.' &&
               lookahead != '>' &&
               lookahead != '[')
                ADVANCE(550);
            END_STATE();
        case 74:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(502);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(503);
            END_STATE();
        case 75:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(75);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(559);
            END_STATE();
        case 76:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(512);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(513);
            END_STATE();
        case 77:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(481);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(482);
            END_STATE();
        case 78:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(492);
            END_STATE();
        case 79:
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
        case 80:
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(13);
            END_STATE();
        case 81:
            if(eof)
                ADVANCE(84);
            ADVANCE_MAP(
                ' ', 4,
                '!', 339,
                '"', 342,
                '#', 344,
                '$', 346,
                '%', 348,
                '&', 350,
                '\'', 352,
                '(', 354,
                ')', 356,
                '*', 358,
                '+', 361,
                ',', 363,
                '-', 365,
                '.', 367,
                '/', 369,
                ':', 371,
                ';', 373,
                '<', 375,
                '=', 377,
                '>', 379,
                '?', 381,
                '@', 383,
                '[', 386,
                '\\', 388,
                ']', 390,
                '^', 392,
                '_', 395,
                '`', 400,
                'a', 240,
                'b', 257,
                'f', 230,
                'h', 262,
                'i', 214,
                'k', 211,
                'l', 208,
                'm', 205,
                'p', 206,
                's', 258,
                'x', 254,
                '{', 86,
                '|', 402,
                '}', 202,
                '~', 404,
                0x0b, 203,
                '\f', 203,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(81);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(338);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
            if(lookahead != 0)
                ADVANCE(335);
            END_STATE();
        case 82:
            if(eof)
                ADVANCE(84);
            ADVANCE_MAP(
                ' ', 88,
                '!', 340,
                '"', 343,
                '#', 345,
                '$', 347,
                '%', 349,
                '&', 351,
                '\'', 353,
                '(', 355,
                ')', 357,
                '*', 359,
                '+', 362,
                ',', 364,
                '-', 366,
                '.', 368,
                '/', 370,
                ':', 372,
                ';', 374,
                '<', 376,
                '=', 378,
                '>', 380,
                '?', 382,
                '@', 384,
                '[', 387,
                '\\', 389,
                ']', 391,
                '^', 393,
                '_', 398,
                '`', 401,
                'a', 139,
                'b', 156,
                'f', 129,
                'h', 161,
                'i', 113,
                'k', 110,
                'l', 107,
                'm', 104,
                'p', 105,
                's', 157,
                'x', 153,
                '{', 87,
                '|', 403,
                '}', 202,
                '~', 405,
                0x0b, 90,
                '\f', 90,
                '\t', 89,
                '\n', 89,
                '\r', 89,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(169);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 83:
            if(eof)
                ADVANCE(84);
            ADVANCE_MAP(
                ' ', 6,
                '!', 339,
                '"', 342,
                '#', 344,
                '$', 346,
                '%', 348,
                '&', 350,
                '\'', 352,
                '(', 354,
                ')', 356,
                '*', 358,
                '+', 361,
                ',', 363,
                '-', 365,
                '.', 367,
                '/', 369,
                ':', 371,
                ';', 373,
                '<', 375,
                '=', 377,
                '>', 379,
                '?', 381,
                '@', 383,
                '[', 386,
                '\\', 388,
                ']', 390,
                '^', 392,
                '_', 394,
                '`', 400,
                'a', 305,
                'b', 322,
                'f', 295,
                'h', 327,
                'i', 279,
                'k', 276,
                'l', 273,
                'm', 270,
                'p', 271,
                's', 323,
                'x', 319,
                '{', 86,
                '|', 402,
                '}', 202,
                '~', 404,
                0x0b, 204,
                '\f', 204,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(83);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(337);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0)
                ADVANCE(335);
            END_STATE();
        case 84:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 85:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 86:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 87:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 88:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 88,
                '!', 340,
                '"', 343,
                '#', 638,
                '$', 347,
                '%', 349,
                '&', 351,
                '\'', 353,
                '(', 355,
                ')', 357,
                '*', 599,
                '+', 362,
                ',', 364,
                '-', 366,
                '.', 368,
                '/', 370,
                ':', 372,
                ';', 374,
                '<', 376,
                '=', 378,
                '>', 380,
                '?', 382,
                '@', 384,
                '[', 387,
                '\\', 389,
                ']', 391,
                '^', 393,
                '_', 612,
                '`', 629,
                'a', 139,
                'b', 156,
                'f', 129,
                'h', 161,
                'i', 113,
                'k', 110,
                'l', 107,
                'm', 104,
                'p', 105,
                's', 157,
                'x', 153,
                '{', 87,
                '|', 403,
                '~', 405,
                0x0b, 90,
                '\f', 90,
                '\t', 89,
                '\n', 89,
                '\r', 89,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(169);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(191);
            END_STATE();
        case 89:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 88,
                '!', 340,
                '"', 343,
                '#', 345,
                '$', 347,
                '%', 349,
                '&', 351,
                '\'', 353,
                '(', 355,
                ')', 357,
                '*', 359,
                '+', 362,
                ',', 364,
                '-', 366,
                '.', 368,
                '/', 370,
                ':', 372,
                ';', 374,
                '<', 376,
                '=', 378,
                '>', 380,
                '?', 382,
                '@', 384,
                '[', 387,
                '\\', 389,
                ']', 391,
                '^', 393,
                '_', 398,
                '`', 401,
                'a', 139,
                'b', 156,
                'f', 129,
                'h', 161,
                'i', 113,
                'k', 110,
                'l', 107,
                'm', 104,
                'p', 105,
                's', 157,
                'x', 153,
                '{', 87,
                '|', 403,
                '~', 405,
                0x0b, 90,
                '\f', 90,
                '\t', 89,
                '\n', 89,
                '\r', 89,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(169);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(191);
            END_STATE();
        case 90:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 88,
                '!', 340,
                '"', 343,
                '#', 345,
                '$', 347,
                '%', 349,
                '&', 351,
                '\'', 353,
                '(', 355,
                ')', 357,
                '*', 359,
                '+', 362,
                ',', 364,
                '-', 366,
                '.', 368,
                '/', 370,
                ':', 372,
                ';', 374,
                '<', 376,
                '=', 378,
                '>', 380,
                '?', 382,
                '@', 384,
                '[', 387,
                '\\', 389,
                ']', 391,
                '^', 393,
                '_', 399,
                '`', 401,
                'a', 139,
                'b', 156,
                'f', 129,
                'h', 161,
                'i', 113,
                'k', 110,
                'l', 107,
                'm', 104,
                'p', 105,
                's', 157,
                'x', 153,
                '{', 87,
                '|', 403,
                '~', 405,
                0x0b, 90,
                '\f', 90,
                '\t', 89,
                '\n', 89,
                '\r', 89,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(169);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(191);
            END_STATE();
        case 91:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '"')
                ADVANCE(189);
            if(lookahead == '\\')
                ADVANCE(197);
            if(lookahead == '}')
                ADVANCE(13);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(91);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 92:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '"')
                ADVANCE(189);
            if(lookahead == '\\')
                ADVANCE(197);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(91);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 93:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '+')
                ADVANCE(578);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 94:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(95);
            if(lookahead == '.')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(94);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 95:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(95);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(94);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 96:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(103);
            if(lookahead == '0')
                ADVANCE(101);
            if(lookahead == '1')
                ADVANCE(100);
            if(lookahead == '2')
                ADVANCE(97);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(99);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(102);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 97:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(103);
            if(lookahead == '5')
                ADVANCE(98);
            if(lookahead == ':')
                ADVANCE(200);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == ']')
                ADVANCE(195);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(101);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(99);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(102);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 98:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(103);
            if(lookahead == ':')
                ADVANCE(200);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == ']')
                ADVANCE(195);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(101);
            if(('6' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(102);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 99:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(103);
            if(lookahead == ':')
                ADVANCE(200);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == ']')
                ADVANCE(195);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(101);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(102);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 100:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(103);
            if(lookahead == ':')
                ADVANCE(200);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == ']')
                ADVANCE(195);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(99);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(102);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 101:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(103);
            if(lookahead == ':')
                ADVANCE(200);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == ']')
                ADVANCE(195);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(102);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 102:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(103);
            if(lookahead == ':')
                ADVANCE(200);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(102);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 103:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(103);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(102);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 104:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'a')
                ADVANCE(130);
            if(lookahead == 'e')
                ADVANCE(142);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 105:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'a')
                ADVANCE(155);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 106:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'a')
                ADVANCE(125);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 107:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'a')
                ADVANCE(162);
            if(lookahead == 'i')
                ADVANCE(141);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 108:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'a')
                ADVANCE(159);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 109:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'a')
                ADVANCE(160);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 110:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'b')
                ADVANCE(115);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 111:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'c')
                ADVANCE(128);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 112:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'c')
                ADVANCE(548);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 113:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                '.', 192,
                '@', 190,
                '\\', 196,
                '_', 168,
                'c', 147,
                'm', 106,
                'r', 112,
                '}', 33,
            );
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 114:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'c')
                ADVANCE(132);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 115:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'd')
                ADVANCE(523);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 116:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'e')
                ADVANCE(136);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 117:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'e')
                ADVANCE(123);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 118:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'e')
                ADVANCE(540);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 119:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'e')
                ADVANCE(167);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 120:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'e')
                ADVANCE(507);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 121:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'e')
                ADVANCE(497);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 122:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'e')
                ADVANCE(124);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 123:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'f')
                ADVANCE(596);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 124:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'f')
                ADVANCE(501);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 125:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'g')
                ADVANCE(120);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 126:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'h')
                ADVANCE(571);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 127:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'h')
                ADVANCE(567);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 128:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'h')
                ADVANCE(146);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 129:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                '.', 192,
                '@', 190,
                '\\', 196,
                '_', 168,
                'i', 134,
                'o', 149,
                't', 150,
                '}', 33,
            );
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 130:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'i')
                ADVANCE(135);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 131:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'i')
                ADVANCE(137);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 132:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'i')
                ADVANCE(131);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 133:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'k')
                ADVANCE(554);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 134:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'l')
                ADVANCE(118);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 135:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'l')
                ADVANCE(164);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 136:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'm')
                ADVANCE(563);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 137:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'm')
                ADVANCE(108);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 138:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'm')
                ADVANCE(109);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 139:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'n')
                ADVANCE(111);
            if(lookahead == 's')
                ADVANCE(114);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 140:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'n')
                ADVANCE(527);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 141:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'n')
                ADVANCE(133);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 142:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'n')
                ADVANCE(166);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 143:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'n')
                ADVANCE(511);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 144:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'n')
                ADVANCE(148);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 145:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'o')
                ADVANCE(558);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 146:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'o')
                ADVANCE(152);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 147:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'o')
                ADVANCE(143);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 148:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'o')
                ADVANCE(165);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 149:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'o')
                ADVANCE(163);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 150:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'p')
                ADVANCE(544);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 151:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'p')
                ADVANCE(532);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 152:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'r')
                ADVANCE(487);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 153:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'r')
                ADVANCE(117);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 154:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 's')
                ADVANCE(585);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 155:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 's')
                ADVANCE(154);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 156:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 't')
                ADVANCE(140);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 157:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 't')
                ADVANCE(116);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 158:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 't')
                ADVANCE(151);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 159:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 't')
                ADVANCE(126);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 160:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 't')
                ADVANCE(127);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 161:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 't')
                ADVANCE(158);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 162:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 't')
                ADVANCE(119);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 163:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 't')
                ADVANCE(144);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 164:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 't')
                ADVANCE(145);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 165:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 't')
                ADVANCE(121);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 166:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'u')
                ADVANCE(575);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 167:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'x')
                ADVANCE(138);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 168:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 169:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(169);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 170:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 171:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(96);
            if(lookahead == '5')
                ADVANCE(172);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(175);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(173);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 172:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(96);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(175);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 173:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(96);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(175);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 174:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(96);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(173);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 175:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(96);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 176:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(187);
            if(lookahead == '5')
                ADVANCE(177);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(180);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(178);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 177:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(187);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(180);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 178:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(187);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(180);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 179:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(187);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(178);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 180:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(187);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 181:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(188);
            if(lookahead == '5')
                ADVANCE(182);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(185);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(183);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 182:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(188);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(185);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 183:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(188);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(185);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 184:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(188);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(183);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 185:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(188);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 186:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(185);
            if(lookahead == '1')
                ADVANCE(184);
            if(lookahead == '2')
                ADVANCE(181);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(183);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 187:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(175);
            if(lookahead == '1')
                ADVANCE(174);
            if(lookahead == '2')
                ADVANCE(171);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(173);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 188:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(180);
            if(lookahead == '1')
                ADVANCE(179);
            if(lookahead == '2')
                ADVANCE(176);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(178);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 189:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 190:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '[')
                ADVANCE(186);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(94);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 191:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(191);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               (' ' <= lookahead && lookahead <= '@') ||
               ('[' <= lookahead && lookahead <= '`') ||
               lookahead == '{' ||
               lookahead == '|' ||
               lookahead == '~')
                ADVANCE(195);
            if(lookahead != 0 &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(191);
            END_STATE();
        case 192:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               lookahead == '-' ||
               ('/' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 193:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(193);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 194:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(196);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(94);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 195:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 196:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 197:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(92);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(91);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 198:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(199);
            if(lookahead == ']')
                ADVANCE(198);
            if(lookahead == '}')
                ADVANCE(58);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(198);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 199:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(199);
            if(lookahead == ']')
                ADVANCE(198);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(198);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 200:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(199);
            if(lookahead == '}')
                ADVANCE(58);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(198);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 201:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 202:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 203:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                ' ', 4,
                '_', 396,
                'a', 240,
                'b', 257,
                'f', 230,
                'h', 262,
                'i', 214,
                'k', 211,
                'l', 208,
                'm', 205,
                'p', 206,
                's', 258,
                'x', 254,
                0x0b, 203,
                '\f', 203,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 204:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                ' ', 6,
                '_', 397,
                'a', 305,
                'b', 322,
                'f', 295,
                'h', 327,
                'i', 279,
                'k', 276,
                'l', 273,
                'm', 270,
                'p', 271,
                's', 323,
                'x', 319,
                0x0b, 204,
                '\f', 204,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 205:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'a')
                ADVANCE(231);
            if(lookahead == 'e')
                ADVANCE(243);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 206:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'a')
                ADVANCE(256);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 207:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'a')
                ADVANCE(226);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 208:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'a')
                ADVANCE(263);
            if(lookahead == 'i')
                ADVANCE(242);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 209:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'a')
                ADVANCE(260);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 210:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'a')
                ADVANCE(261);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 211:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'b')
                ADVANCE(216);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 212:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'c')
                ADVANCE(229);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 213:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'c')
                ADVANCE(545);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 214:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'c')
                ADVANCE(248);
            if(lookahead == 'm')
                ADVANCE(207);
            if(lookahead == 'r')
                ADVANCE(213);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 215:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'c')
                ADVANCE(233);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 216:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'd')
                ADVANCE(520);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 217:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'e')
                ADVANCE(237);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 218:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'e')
                ADVANCE(224);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 219:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'e')
                ADVANCE(537);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 220:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'e')
                ADVANCE(268);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 221:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'e')
                ADVANCE(504);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 222:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'e')
                ADVANCE(494);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 223:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'e')
                ADVANCE(225);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 224:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'f')
                ADVANCE(593);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 225:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'f')
                ADVANCE(498);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 226:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'g')
                ADVANCE(221);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 227:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'h')
                ADVANCE(568);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 228:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'h')
                ADVANCE(564);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 229:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'h')
                ADVANCE(247);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 230:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'i')
                ADVANCE(235);
            if(lookahead == 'o')
                ADVANCE(250);
            if(lookahead == 't')
                ADVANCE(251);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 231:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'i')
                ADVANCE(236);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 232:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'i')
                ADVANCE(238);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 233:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'i')
                ADVANCE(232);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 234:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'k')
                ADVANCE(551);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 235:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'l')
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 236:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'l')
                ADVANCE(265);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 237:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'm')
                ADVANCE(560);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 238:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'm')
                ADVANCE(209);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 239:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'm')
                ADVANCE(210);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 240:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'n')
                ADVANCE(212);
            if(lookahead == 's')
                ADVANCE(215);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 241:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'n')
                ADVANCE(524);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 242:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'n')
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 243:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'n')
                ADVANCE(267);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 244:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'n')
                ADVANCE(508);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 245:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'n')
                ADVANCE(249);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 246:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'o')
                ADVANCE(555);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 247:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'o')
                ADVANCE(253);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 248:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'o')
                ADVANCE(244);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 249:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'o')
                ADVANCE(266);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 250:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'o')
                ADVANCE(264);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 251:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'p')
                ADVANCE(541);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 252:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'p')
                ADVANCE(529);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 253:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'r')
                ADVANCE(484);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 254:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'r')
                ADVANCE(218);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 255:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 's')
                ADVANCE(582);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 256:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 's')
                ADVANCE(255);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 257:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(241);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 258:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(217);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 259:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(252);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 260:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(227);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 261:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(228);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 262:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(259);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 263:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(220);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 264:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(245);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 265:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(246);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 266:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(222);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 267:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'u')
                ADVANCE(572);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 268:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'x')
                ADVANCE(239);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 269:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 270:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'a')
                ADVANCE(296);
            if(lookahead == 'e')
                ADVANCE(308);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 271:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'a')
                ADVANCE(321);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 272:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'a')
                ADVANCE(291);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 273:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'a')
                ADVANCE(328);
            if(lookahead == 'i')
                ADVANCE(307);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 274:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'a')
                ADVANCE(325);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 275:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'a')
                ADVANCE(326);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 276:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'b')
                ADVANCE(281);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 277:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'c')
                ADVANCE(294);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 278:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'c')
                ADVANCE(546);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 279:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'c')
                ADVANCE(313);
            if(lookahead == 'm')
                ADVANCE(272);
            if(lookahead == 'r')
                ADVANCE(278);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 280:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'c')
                ADVANCE(298);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 281:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'd')
                ADVANCE(521);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 282:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'e')
                ADVANCE(302);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 283:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'e')
                ADVANCE(289);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 284:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'e')
                ADVANCE(538);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 285:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'e')
                ADVANCE(333);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 286:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'e')
                ADVANCE(505);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 287:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'e')
                ADVANCE(495);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 288:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'e')
                ADVANCE(290);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 289:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'f')
                ADVANCE(594);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 290:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'f')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 291:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'g')
                ADVANCE(286);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 292:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'h')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 293:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'h')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 294:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'h')
                ADVANCE(312);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 295:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'i')
                ADVANCE(300);
            if(lookahead == 'o')
                ADVANCE(315);
            if(lookahead == 't')
                ADVANCE(316);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 296:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'i')
                ADVANCE(301);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 297:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'i')
                ADVANCE(303);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 298:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'i')
                ADVANCE(297);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 299:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'k')
                ADVANCE(552);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 300:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'l')
                ADVANCE(284);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 301:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'l')
                ADVANCE(330);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 302:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'm')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 303:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'm')
                ADVANCE(274);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 304:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'm')
                ADVANCE(275);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 305:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'n')
                ADVANCE(277);
            if(lookahead == 's')
                ADVANCE(280);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 306:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'n')
                ADVANCE(525);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 307:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'n')
                ADVANCE(299);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 308:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'n')
                ADVANCE(332);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 309:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'n')
                ADVANCE(509);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 310:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'n')
                ADVANCE(314);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 311:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'o')
                ADVANCE(556);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 312:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'o')
                ADVANCE(318);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 313:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'o')
                ADVANCE(309);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 314:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'o')
                ADVANCE(331);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 315:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'o')
                ADVANCE(329);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 316:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'p')
                ADVANCE(542);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 317:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'p')
                ADVANCE(530);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 318:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'r')
                ADVANCE(485);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 319:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'r')
                ADVANCE(283);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 320:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 's')
                ADVANCE(583);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 321:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 's')
                ADVANCE(320);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 322:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(306);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 323:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(282);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 324:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(317);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 325:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(292);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 326:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(293);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 327:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(324);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 328:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(285);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 329:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(310);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 330:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(311);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 331:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(287);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 332:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'u')
                ADVANCE(573);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 333:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'x')
                ADVANCE(304);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 334:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 335:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(67);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 336:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(479);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(480);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 337:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(337);
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
                ADVANCE(480);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 338:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(338);
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
        case 339:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 340:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 341:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 342:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(55);
            if(lookahead == '\\')
                ADVANCE(80);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(13);
            END_STATE();
        case 343:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(189);
            if(lookahead == '\\')
                ADVANCE(197);
            if(lookahead == '}')
                ADVANCE(13);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(91);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 344:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(645);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 345:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(646);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('$' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 346:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(580);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 347:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(581);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 348:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 349:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 350:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 351:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 352:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 353:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 354:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 355:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 356:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 357:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 358:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '*')
                ADVANCE(610);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 359:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '*')
                ADVANCE(611);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 360:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 361:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '+')
                ADVANCE(17);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 362:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '+')
                ADVANCE(93);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 363:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 364:
            ACCEPT_TOKEN(anon_sym_COMMA);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 365:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 366:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 367:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 368:
            ACCEPT_TOKEN(anon_sym_DOT);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 369:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 370:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 371:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 372:
            ACCEPT_TOKEN(anon_sym_COLON);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 373:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 374:
            ACCEPT_TOKEN(anon_sym_SEMI);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 375:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(588);
            END_STATE();
        case 376:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(589);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 377:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 378:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 379:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 380:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 381:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 382:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 383:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 384:
            ACCEPT_TOKEN(anon_sym_AT);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 385:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 386:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(406);
            END_STATE();
        case 387:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(407);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 388:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            END_STATE();
        case 389:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 390:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 391:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 392:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 393:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 394:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(625);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 395:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(626);
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
        case 396:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(623);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 397:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 398:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(628);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 399:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(627);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 400:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '`')
                ADVANCE(636);
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
        case 401:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '`')
                ADVANCE(637);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 402:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 403:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 404:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 405:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 406:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            END_STATE();
        case 407:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 408:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 409:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'a')
                ADVANCE(436);
            if(lookahead == 'e')
                ADVANCE(449);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 410:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'a')
                ADVANCE(463);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 411:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'a')
                ADVANCE(431);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 412:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'a')
                ADVANCE(470);
            if(lookahead == 'i')
                ADVANCE(447);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 413:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'a')
                ADVANCE(467);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 414:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'a')
                ADVANCE(468);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 415:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'b')
                ADVANCE(420);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 416:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'c')
                ADVANCE(434);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 417:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'c')
                ADVANCE(547);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 418:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'c')
                ADVANCE(453);
            if(lookahead == 'm')
                ADVANCE(411);
            if(lookahead == 'r')
                ADVANCE(417);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 419:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'c')
                ADVANCE(438);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 420:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'd')
                ADVANCE(522);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 421:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'e')
                ADVANCE(442);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 422:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'e')
                ADVANCE(429);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 423:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'e')
                ADVANCE(539);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 424:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'e')
                ADVANCE(477);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 425:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'e')
                ADVANCE(506);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 426:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'e')
                ADVANCE(496);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 427:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'e')
                ADVANCE(430);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 428:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'e')
                ADVANCE(462);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 429:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'f')
                ADVANCE(595);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 430:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'f')
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 431:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'g')
                ADVANCE(425);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 432:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'h')
                ADVANCE(570);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 433:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'h')
                ADVANCE(566);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 434:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'h')
                ADVANCE(452);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 435:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'i')
                ADVANCE(440);
            if(lookahead == 'o')
                ADVANCE(455);
            if(lookahead == 't')
                ADVANCE(457);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 436:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'i')
                ADVANCE(441);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 437:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'i')
                ADVANCE(443);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 438:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'i')
                ADVANCE(437);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 439:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'k')
                ADVANCE(553);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 440:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'l')
                ADVANCE(423);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 441:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'l')
                ADVANCE(472);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 442:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'm')
                ADVANCE(562);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 443:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'm')
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 444:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'm')
                ADVANCE(414);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 445:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'n')
                ADVANCE(416);
            if(lookahead == 's')
                ADVANCE(419);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 446:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'n')
                ADVANCE(526);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 447:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'n')
                ADVANCE(439);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 448:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'n')
                ADVANCE(510);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 449:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'n')
                ADVANCE(475);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 450:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'n')
                ADVANCE(456);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 451:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'o')
                ADVANCE(557);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 452:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'o')
                ADVANCE(459);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 453:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'o')
                ADVANCE(448);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'o')
                ADVANCE(473);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'o')
                ADVANCE(471);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'o')
                ADVANCE(474);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'p')
                ADVANCE(543);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'p')
                ADVANCE(531);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'r')
                ADVANCE(486);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'r')
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 's')
                ADVANCE(584);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 's')
                ADVANCE(587);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 's')
                ADVANCE(461);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 't')
                ADVANCE(446);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 't')
                ADVANCE(421);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 't')
                ADVANCE(458);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 't')
                ADVANCE(432);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 't')
                ADVANCE(433);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 't')
                ADVANCE(466);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 't')
                ADVANCE(424);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 't')
                ADVANCE(450);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 't')
                ADVANCE(451);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 't')
                ADVANCE(428);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 't')
                ADVANCE(426);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'u')
                ADVANCE(574);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'u')
                ADVANCE(454);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'x')
                ADVANCE(444);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '_')
                ADVANCE(479);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(480);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(480);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(aux_sym_anchor_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(481);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(482);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(aux_sym_anchor_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ' ||
               ('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(482);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(aux_sym_anchor_token3);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(488);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(489);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(490);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(aux_sym_anchor_token3);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(489);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(490);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(aux_sym_anchor_token3);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(490);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(sym_email);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(sym_email);
            if(lookahead == '-')
                ADVANCE(23);
            if(lookahead == '.')
                ADVANCE(78);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(492);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(sym_email);
            if(lookahead == '\\')
                ADVANCE(59);
            if(lookahead == ']')
                ADVANCE(493);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(58);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'r')
                ADVANCE(223);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'r')
                ADVANCE(288);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 'r')
                ADVANCE(427);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 'r')
                ADVANCE(122);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(aux_sym_footnote_macro_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(502);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(503);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(aux_sym_footnote_macro_token2);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(503);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(aux_sym_image_macro_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(512);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(513);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(aux_sym_image_macro_token1);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(513);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == '[')
                ADVANCE(518);
            if(lookahead == ']')
                ADVANCE(519);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == '\\')
                ADVANCE(515);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(516);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(514);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == '{')
                ADVANCE(85);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(517);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(514);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(aux_sym_key_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(528);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 's')
                ADVANCE(533);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 's')
                ADVANCE(534);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(334);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == 's')
                ADVANCE(535);
            if(lookahead == '!' ||
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == 's')
                ADVANCE(536);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(sym__link_component);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '.' &&
               lookahead != '>' &&
               lookahead != '[')
                ADVANCE(550);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(aux_sym_link_macro_token1);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '[')
                ADVANCE(559);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 578:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 581:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(anon_sym_quotes);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(anon_sym_quotes);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(590);
            if(lookahead != 0 &&
               lookahead != '>')
                ADVANCE(591);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            if(lookahead != 0 &&
               lookahead != '>')
                ADVANCE(591);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(597);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(598);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(598);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(anon_sym_STAR2);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == ' ')
                ADVANCE(601);
            if(lookahead == '#')
                ADVANCE(638);
            if(lookahead == '\\')
                ADVANCE(604);
            if(lookahead == '_')
                ADVANCE(612);
            if(lookahead == '`')
                ADVANCE(629);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(602);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(600);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == ' ')
                ADVANCE(601);
            if(lookahead == '#')
                ADVANCE(603);
            if(lookahead == '\\')
                ADVANCE(604);
            if(lookahead == '_')
                ADVANCE(605);
            if(lookahead == '`')
                ADVANCE(606);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(602);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(600);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '#')
                ADVANCE(644);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '*')
                ADVANCE(607);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '_')
                ADVANCE(622);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '`')
                ADVANCE(635);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(anon_sym_BSLASH_STAR);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(anon_sym_STAR3);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 611:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(anon_sym__2);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == ' ')
                ADVANCE(614);
            if(lookahead == '#')
                ADVANCE(638);
            if(lookahead == '*')
                ADVANCE(599);
            if(lookahead == '\\')
                ADVANCE(618);
            if(lookahead == '`')
                ADVANCE(629);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(615);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_' &&
               lookahead != '`')
                ADVANCE(613);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == ' ')
                ADVANCE(614);
            if(lookahead == '#')
                ADVANCE(616);
            if(lookahead == '*')
                ADVANCE(617);
            if(lookahead == '\\')
                ADVANCE(618);
            if(lookahead == '`')
                ADVANCE(619);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(615);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_' &&
               lookahead != '`')
                ADVANCE(613);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '#')
                ADVANCE(644);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '*')
                ADVANCE(609);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '_')
                ADVANCE(620);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '`')
                ADVANCE(635);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(anon_sym_BSLASH_);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym__3);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(anon_sym___);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(269);
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
                ADVANCE(335);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(56);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(478);
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
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 627:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '_')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(anon_sym_BQUOTE2);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '\\')
                ADVANCE(632);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(631);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '`')
                ADVANCE(630);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '`')
                ADVANCE(633);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(anon_sym_BSLASH_BQUOTE);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(anon_sym_BQUOTE3);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 637:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(anon_sym_POUND2);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '#')
                ADVANCE(642);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '\\')
                ADVANCE(640);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(641);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '#')
                ADVANCE(639);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(anon_sym_BSLASH_POUND);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(anon_sym_POUND3);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead == '.')
                ADVANCE(79);
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
        case 646:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 81 },
    [2] = { .lex_state = 81 },
    [3] = { .lex_state = 81 },
    [4] = { .lex_state = 81 },
    [5] = { .lex_state = 82 },
    [6] = { .lex_state = 81 },
    [7] = { .lex_state = 83 },
    [8] = { .lex_state = 81 },
    [9] = { .lex_state = 81 },
    [10] = { .lex_state = 81 },
    [11] = { .lex_state = 81 },
    [12] = { .lex_state = 81 },
    [13] = { .lex_state = 81 },
    [14] = { .lex_state = 81 },
    [15] = { .lex_state = 81 },
    [16] = { .lex_state = 81 },
    [17] = { .lex_state = 81 },
    [18] = { .lex_state = 81 },
    [19] = { .lex_state = 81 },
    [20] = { .lex_state = 81 },
    [21] = { .lex_state = 81 },
    [22] = { .lex_state = 81 },
    [23] = { .lex_state = 81 },
    [24] = { .lex_state = 81 },
    [25] = { .lex_state = 81 },
    [26] = { .lex_state = 81 },
    [27] = { .lex_state = 81 },
    [28] = { .lex_state = 81 },
    [29] = { .lex_state = 81 },
    [30] = { .lex_state = 81 },
    [31] = { .lex_state = 81 },
    [32] = { .lex_state = 81 },
    [33] = { .lex_state = 81 },
    [34] = { .lex_state = 81 },
    [35] = { .lex_state = 81 },
    [36] = { .lex_state = 81 },
    [37] = { .lex_state = 81 },
    [38] = { .lex_state = 81 },
    [39] = { .lex_state = 81 },
    [40] = { .lex_state = 81 },
    [41] = { .lex_state = 81 },
    [42] = { .lex_state = 81 },
    [43] = { .lex_state = 81 },
    [44] = { .lex_state = 81 },
    [45] = { .lex_state = 81 },
    [46] = { .lex_state = 81 },
    [47] = { .lex_state = 81 },
    [48] = { .lex_state = 7 },
    [49] = { .lex_state = 9 },
    [50] = { .lex_state = 9 },
    [51] = { .lex_state = 7 },
    [52] = { .lex_state = 9 },
    [53] = { .lex_state = 9 },
    [54] = { .lex_state = 7 },
    [55] = { .lex_state = 7 },
    [56] = { .lex_state = 9 },
    [57] = { .lex_state = 7 },
    [58] = { .lex_state = 7 },
    [59] = { .lex_state = 9 },
    [60] = { .lex_state = 7 },
    [61] = { .lex_state = 7 },
    [62] = { .lex_state = 9 },
    [63] = { .lex_state = 9 },
    [64] = { .lex_state = 9 },
    [65] = { .lex_state = 7 },
    [66] = { .lex_state = 9 },
    [67] = { .lex_state = 9 },
    [68] = { .lex_state = 9 },
    [69] = { .lex_state = 9 },
    [70] = { .lex_state = 9 },
    [71] = { .lex_state = 9 },
    [72] = { .lex_state = 7 },
    [73] = { .lex_state = 7 },
    [74] = { .lex_state = 7 },
    [75] = { .lex_state = 7 },
    [76] = { .lex_state = 7 },
    [77] = { .lex_state = 7 },
    [78] = { .lex_state = 64 },
    [79] = { .lex_state = 64 },
    [80] = { .lex_state = 64 },
    [81] = { .lex_state = 64 },
    [82] = { .lex_state = 62 },
    [83] = { .lex_state = 64 },
    [84] = { .lex_state = 62 },
    [85] = { .lex_state = 14 },
    [86] = { .lex_state = 63 },
    [87] = { .lex_state = 62 },
    [88] = { .lex_state = 15 },
    [89] = { .lex_state = 15 },
    [90] = { .lex_state = 63 },
    [91] = { .lex_state = 15 },
    [92] = { .lex_state = 15 },
    [93] = { .lex_state = 14 },
    [94] = { .lex_state = 14 },
    [95] = { .lex_state = 15 },
    [96] = { .lex_state = 15 },
    [97] = { .lex_state = 63 },
    [98] = { .lex_state = 14 },
    [99] = { .lex_state = 63 },
    [100] = { .lex_state = 63 },
    [101] = { .lex_state = 63 },
    [102] = { .lex_state = 63 },
    [103] = { .lex_state = 63 },
    [104] = { .lex_state = 63 },
    [105] = { .lex_state = 15 },
    [106] = { .lex_state = 15 },
    [107] = { .lex_state = 15 },
    [108] = { .lex_state = 63 },
    [109] = { .lex_state = 63 },
    [110] = { .lex_state = 15 },
    [111] = { .lex_state = 63 },
    [112] = { .lex_state = 15 },
    [113] = { .lex_state = 63 },
    [114] = { .lex_state = 15 },
    [115] = { .lex_state = 62 },
    [116] = { .lex_state = 15 },
    [117] = { .lex_state = 14 },
    [118] = { .lex_state = 0 },
    [119] = { .lex_state = 14 },
    [120] = { .lex_state = 14 },
    [121] = { .lex_state = 14 },
    [122] = { .lex_state = 14 },
    [123] = { .lex_state = 0 },
    [124] = { .lex_state = 14 },
    [125] = { .lex_state = 64 },
    [126] = { .lex_state = 14 },
    [127] = { .lex_state = 18 },
    [128] = { .lex_state = 488 },
    [129] = { .lex_state = 57 },
    [130] = { .lex_state = 0 },
    [131] = { .lex_state = 0 },
    [132] = { .lex_state = 488 },
    [133] = { .lex_state = 14 },
    [134] = { .lex_state = 18 },
    [135] = { .lex_state = 14 },
    [136] = { .lex_state = 0 },
    [137] = { .lex_state = 488 },
    [138] = { .lex_state = 73 },
    [139] = { .lex_state = 0 },
    [140] = { .lex_state = 0 },
    [141] = { .lex_state = 0 },
    [142] = { .lex_state = 0 },
    [143] = { .lex_state = 57 },
    [144] = { .lex_state = 0 },
    [145] = { .lex_state = 0 },
    [146] = { .lex_state = 57 },
    [147] = { .lex_state = 74 },
    [148] = { .lex_state = 57 },
    [149] = { .lex_state = 0 },
    [150] = { .lex_state = 0 },
    [151] = { .lex_state = 0 },
    [152] = { .lex_state = 0 },
    [153] = { .lex_state = 14 },
    [154] = { .lex_state = 0 },
    [155] = { .lex_state = 0 },
    [156] = { .lex_state = 0 },
    [157] = { .lex_state = 0 },
    [158] = { .lex_state = 0 },
    [159] = { .lex_state = 14 },
    [160] = { .lex_state = 0 },
    [161] = { .lex_state = 14 },
    [162] = { .lex_state = 73 },
    [163] = { .lex_state = 0 },
    [164] = { .lex_state = 14 },
    [165] = { .lex_state = 488 },
    [166] = { .lex_state = 75 },
    [167] = { .lex_state = 0 },
    [168] = { .lex_state = 488 },
    [169] = { .lex_state = 18 },
    [170] = { .lex_state = 488 },
    [171] = { .lex_state = 0 },
    [172] = { .lex_state = 14 },
    [173] = { .lex_state = 0 },
    [174] = { .lex_state = 57 },
    [175] = { .lex_state = 61 },
    [176] = { .lex_state = 0 },
    [177] = { .lex_state = 76 },
    [178] = { .lex_state = 14 },
    [179] = { .lex_state = 57 },
    [180] = { .lex_state = 14 },
    [181] = { .lex_state = 14 },
    [182] = { .lex_state = 14 },
    [183] = { .lex_state = 488 },
    [184] = { .lex_state = 14 },
    [185] = { .lex_state = 73 },
    [186] = { .lex_state = 14 },
    [187] = { .lex_state = 488 },
    [188] = { .lex_state = 14 },
    [189] = { .lex_state = 74 },
    [190] = { .lex_state = 14 },
    [191] = { .lex_state = 14 },
    [192] = { .lex_state = 0 },
    [193] = { .lex_state = 14 },
    [194] = { .lex_state = 73 },
    [195] = { .lex_state = 77 },
    [196] = { .lex_state = 597 },
    [197] = { .lex_state = 590 },
    [198] = { .lex_state = 0 },
    [199] = { .lex_state = 14 },
    [200] = { .lex_state = 18 },
    [201] = { .lex_state = 57 },
    [202] = { .lex_state = 14 },
    [203] = { .lex_state = 14 },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_LBRACE] = ACTIONS(1),
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
        [aux_sym_anchor_token1] = ACTIONS(1),
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
        [sym_inline] = STATE(198),
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
        [sym_pass_macro] = STATE(3),
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
        [sym_pass_macro] = STATE(2),
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
        [sym_pass_macro] = STATE(2),
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
        [sym_link_url] = STATE(133),
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
        [aux_sym_anchor_token1] = ACTIONS(154),
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
    [20] = {
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
    [21] = {
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
    [40] = {
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
    [41] = {
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
    [42] = {
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
    [43] = {
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
    [44] = {
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
    [45] = {
        [ts_builtin_sym_end] = ACTIONS(300),
        [anon_sym_LBRACE] = ACTIONS(302),
        [anon_sym_RBRACE] = ACTIONS(302),
        [sym__word_no_digit] = ACTIONS(302),
        [sym__digits] = ACTIONS(302),
        [anon_sym_BANG] = ACTIONS(302),
        [anon_sym_DQUOTE] = ACTIONS(302),
        [anon_sym_POUND] = ACTIONS(302),
        [anon_sym_DOLLAR] = ACTIONS(302),
        [anon_sym_PERCENT] = ACTIONS(302),
        [anon_sym_AMP] = ACTIONS(302),
        [anon_sym_SQUOTE] = ACTIONS(302),
        [anon_sym_LPAREN] = ACTIONS(302),
        [anon_sym_RPAREN] = ACTIONS(302),
        [anon_sym_STAR] = ACTIONS(302),
        [anon_sym_PLUS] = ACTIONS(302),
        [anon_sym_COMMA] = ACTIONS(302),
        [anon_sym_DASH] = ACTIONS(302),
        [anon_sym_DOT] = ACTIONS(302),
        [anon_sym_SLASH] = ACTIONS(302),
        [anon_sym_COLON] = ACTIONS(302),
        [anon_sym_SEMI] = ACTIONS(302),
        [anon_sym_LT] = ACTIONS(302),
        [anon_sym_EQ] = ACTIONS(302),
        [anon_sym_GT] = ACTIONS(302),
        [anon_sym_QMARK] = ACTIONS(302),
        [anon_sym_AT] = ACTIONS(302),
        [anon_sym_LBRACK] = ACTIONS(302),
        [anon_sym_BSLASH] = ACTIONS(302),
        [anon_sym_RBRACK] = ACTIONS(302),
        [anon_sym_CARET] = ACTIONS(302),
        [anon_sym__] = ACTIONS(302),
        [anon_sym_BQUOTE] = ACTIONS(302),
        [anon_sym_PIPE] = ACTIONS(302),
        [anon_sym_TILDE] = ACTIONS(302),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(302),
        [anon_sym_anchor] = ACTIONS(302),
        [sym_email] = ACTIONS(302),
        [anon_sym_footnote] = ACTIONS(302),
        [anon_sym_footnoteref] = ACTIONS(302),
        [anon_sym_image] = ACTIONS(302),
        [anon_sym_icon] = ACTIONS(302),
        [anon_sym_kbd] = ACTIONS(302),
        [anon_sym_btn] = ACTIONS(302),
        [anon_sym_http] = ACTIONS(302),
        [anon_sym_https] = ACTIONS(302),
        [anon_sym_file] = ACTIONS(302),
        [anon_sym_ftp] = ACTIONS(302),
        [anon_sym_irc] = ACTIONS(302),
        [anon_sym_link] = ACTIONS(302),
        [anon_sym_mailto] = ACTIONS(302),
        [anon_sym_stem] = ACTIONS(302),
        [anon_sym_latexmath] = ACTIONS(302),
        [anon_sym_asciimath] = ACTIONS(302),
        [anon_sym_menu] = ACTIONS(302),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(302),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(302),
        [anon_sym_pass] = ACTIONS(302),
        [anon_sym_LT_LT] = ACTIONS(302),
        [anon_sym_xref] = ACTIONS(302),
        [anon_sym_STAR2] = ACTIONS(302),
        [anon_sym_STAR_STAR] = ACTIONS(302),
        [anon_sym__2] = ACTIONS(302),
        [anon_sym___] = ACTIONS(302),
        [anon_sym_BQUOTE2] = ACTIONS(302),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(302),
        [anon_sym_POUND2] = ACTIONS(302),
        [anon_sym_POUND_POUND] = ACTIONS(302),
    },
    [46] = {
        [ts_builtin_sym_end] = ACTIONS(304),
        [anon_sym_LBRACE] = ACTIONS(306),
        [anon_sym_RBRACE] = ACTIONS(306),
        [sym__word_no_digit] = ACTIONS(306),
        [sym__digits] = ACTIONS(306),
        [anon_sym_BANG] = ACTIONS(306),
        [anon_sym_DQUOTE] = ACTIONS(306),
        [anon_sym_POUND] = ACTIONS(306),
        [anon_sym_DOLLAR] = ACTIONS(306),
        [anon_sym_PERCENT] = ACTIONS(306),
        [anon_sym_AMP] = ACTIONS(306),
        [anon_sym_SQUOTE] = ACTIONS(306),
        [anon_sym_LPAREN] = ACTIONS(306),
        [anon_sym_RPAREN] = ACTIONS(306),
        [anon_sym_STAR] = ACTIONS(306),
        [anon_sym_PLUS] = ACTIONS(306),
        [anon_sym_COMMA] = ACTIONS(306),
        [anon_sym_DASH] = ACTIONS(306),
        [anon_sym_DOT] = ACTIONS(306),
        [anon_sym_SLASH] = ACTIONS(306),
        [anon_sym_COLON] = ACTIONS(306),
        [anon_sym_SEMI] = ACTIONS(306),
        [anon_sym_LT] = ACTIONS(306),
        [anon_sym_EQ] = ACTIONS(306),
        [anon_sym_GT] = ACTIONS(306),
        [anon_sym_QMARK] = ACTIONS(306),
        [anon_sym_AT] = ACTIONS(306),
        [anon_sym_LBRACK] = ACTIONS(306),
        [anon_sym_BSLASH] = ACTIONS(306),
        [anon_sym_RBRACK] = ACTIONS(306),
        [anon_sym_CARET] = ACTIONS(306),
        [anon_sym__] = ACTIONS(306),
        [anon_sym_BQUOTE] = ACTIONS(306),
        [anon_sym_PIPE] = ACTIONS(306),
        [anon_sym_TILDE] = ACTIONS(306),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(306),
        [anon_sym_anchor] = ACTIONS(306),
        [sym_email] = ACTIONS(306),
        [anon_sym_footnote] = ACTIONS(306),
        [anon_sym_footnoteref] = ACTIONS(306),
        [anon_sym_image] = ACTIONS(306),
        [anon_sym_icon] = ACTIONS(306),
        [anon_sym_kbd] = ACTIONS(306),
        [anon_sym_btn] = ACTIONS(306),
        [anon_sym_http] = ACTIONS(306),
        [anon_sym_https] = ACTIONS(306),
        [anon_sym_file] = ACTIONS(306),
        [anon_sym_ftp] = ACTIONS(306),
        [anon_sym_irc] = ACTIONS(306),
        [anon_sym_link] = ACTIONS(306),
        [anon_sym_mailto] = ACTIONS(306),
        [anon_sym_stem] = ACTIONS(306),
        [anon_sym_latexmath] = ACTIONS(306),
        [anon_sym_asciimath] = ACTIONS(306),
        [anon_sym_menu] = ACTIONS(306),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(306),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(306),
        [anon_sym_pass] = ACTIONS(306),
        [anon_sym_LT_LT] = ACTIONS(306),
        [anon_sym_xref] = ACTIONS(306),
        [anon_sym_STAR2] = ACTIONS(306),
        [anon_sym_STAR_STAR] = ACTIONS(306),
        [anon_sym__2] = ACTIONS(306),
        [anon_sym___] = ACTIONS(306),
        [anon_sym_BQUOTE2] = ACTIONS(306),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(306),
        [anon_sym_POUND2] = ACTIONS(306),
        [anon_sym_POUND_POUND] = ACTIONS(306),
    },
    [47] = {
        [ts_builtin_sym_end] = ACTIONS(308),
        [anon_sym_LBRACE] = ACTIONS(310),
        [anon_sym_RBRACE] = ACTIONS(310),
        [sym__word_no_digit] = ACTIONS(310),
        [sym__digits] = ACTIONS(310),
        [anon_sym_BANG] = ACTIONS(310),
        [anon_sym_DQUOTE] = ACTIONS(310),
        [anon_sym_POUND] = ACTIONS(310),
        [anon_sym_DOLLAR] = ACTIONS(310),
        [anon_sym_PERCENT] = ACTIONS(310),
        [anon_sym_AMP] = ACTIONS(310),
        [anon_sym_SQUOTE] = ACTIONS(310),
        [anon_sym_LPAREN] = ACTIONS(310),
        [anon_sym_RPAREN] = ACTIONS(310),
        [anon_sym_STAR] = ACTIONS(310),
        [anon_sym_PLUS] = ACTIONS(310),
        [anon_sym_COMMA] = ACTIONS(310),
        [anon_sym_DASH] = ACTIONS(310),
        [anon_sym_DOT] = ACTIONS(310),
        [anon_sym_SLASH] = ACTIONS(310),
        [anon_sym_COLON] = ACTIONS(310),
        [anon_sym_SEMI] = ACTIONS(310),
        [anon_sym_LT] = ACTIONS(310),
        [anon_sym_EQ] = ACTIONS(310),
        [anon_sym_GT] = ACTIONS(310),
        [anon_sym_QMARK] = ACTIONS(310),
        [anon_sym_AT] = ACTIONS(310),
        [anon_sym_LBRACK] = ACTIONS(310),
        [anon_sym_BSLASH] = ACTIONS(310),
        [anon_sym_RBRACK] = ACTIONS(310),
        [anon_sym_CARET] = ACTIONS(310),
        [anon_sym__] = ACTIONS(310),
        [anon_sym_BQUOTE] = ACTIONS(310),
        [anon_sym_PIPE] = ACTIONS(310),
        [anon_sym_TILDE] = ACTIONS(310),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(310),
        [anon_sym_anchor] = ACTIONS(310),
        [sym_email] = ACTIONS(310),
        [anon_sym_footnote] = ACTIONS(310),
        [anon_sym_footnoteref] = ACTIONS(310),
        [anon_sym_image] = ACTIONS(310),
        [anon_sym_icon] = ACTIONS(310),
        [anon_sym_kbd] = ACTIONS(310),
        [anon_sym_btn] = ACTIONS(310),
        [anon_sym_http] = ACTIONS(310),
        [anon_sym_https] = ACTIONS(310),
        [anon_sym_file] = ACTIONS(310),
        [anon_sym_ftp] = ACTIONS(310),
        [anon_sym_irc] = ACTIONS(310),
        [anon_sym_link] = ACTIONS(310),
        [anon_sym_mailto] = ACTIONS(310),
        [anon_sym_stem] = ACTIONS(310),
        [anon_sym_latexmath] = ACTIONS(310),
        [anon_sym_asciimath] = ACTIONS(310),
        [anon_sym_menu] = ACTIONS(310),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(310),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(310),
        [anon_sym_pass] = ACTIONS(310),
        [anon_sym_LT_LT] = ACTIONS(310),
        [anon_sym_xref] = ACTIONS(310),
        [anon_sym_STAR2] = ACTIONS(310),
        [anon_sym_STAR_STAR] = ACTIONS(310),
        [anon_sym__2] = ACTIONS(310),
        [anon_sym___] = ACTIONS(310),
        [anon_sym_BQUOTE2] = ACTIONS(310),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(310),
        [anon_sym_POUND2] = ACTIONS(310),
        [anon_sym_POUND_POUND] = ACTIONS(310),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 9,
    ACTIONS(317),
    1,
    anon_sym__2,
    ACTIONS(320),
    1,
    anon_sym___,
    ACTIONS(323),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(326),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(329),
    1,
    anon_sym_POUND2,
    ACTIONS(332),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(312),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    ACTIONS(315),
    2,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    STATE(48),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [33] = 9,
    ACTIONS(335),
    1,
    anon_sym_STAR2,
    ACTIONS(338),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(346),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(349),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(352),
    1,
    anon_sym_POUND2,
    ACTIONS(355),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(341),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    ACTIONS(344),
    2,
    anon_sym__3,
    anon_sym___,
    STATE(49),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [66] = 9,
    ACTIONS(358),
    1,
    anon_sym_STAR2,
    ACTIONS(360),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(364),
    1,
    anon_sym__3,
    ACTIONS(366),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(368),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(370),
    1,
    anon_sym_POUND2,
    ACTIONS(372),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(362),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(49),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [98] = 9,
    ACTIONS(376),
    1,
    anon_sym_STAR3,
    ACTIONS(378),
    1,
    anon_sym__2,
    ACTIONS(380),
    1,
    anon_sym___,
    ACTIONS(382),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(384),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(386),
    1,
    anon_sym_POUND2,
    ACTIONS(388),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(374),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(57),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [130] = 9,
    ACTIONS(358),
    1,
    anon_sym_STAR2,
    ACTIONS(360),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(366),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(368),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(370),
    1,
    anon_sym_POUND2,
    ACTIONS(372),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(392),
    1,
    anon_sym___,
    ACTIONS(390),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(62),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [162] = 9,
    ACTIONS(358),
    1,
    anon_sym_STAR2,
    ACTIONS(360),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(366),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(368),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(370),
    1,
    anon_sym_POUND2,
    ACTIONS(372),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(392),
    1,
    anon_sym__3,
    ACTIONS(394),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(50),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [194] = 9,
    ACTIONS(378),
    1,
    anon_sym__2,
    ACTIONS(380),
    1,
    anon_sym___,
    ACTIONS(382),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(384),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(386),
    1,
    anon_sym_POUND2,
    ACTIONS(388),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(398),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(396),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(61),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [226] = 9,
    ACTIONS(378),
    1,
    anon_sym__2,
    ACTIONS(380),
    1,
    anon_sym___,
    ACTIONS(382),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(384),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(386),
    1,
    anon_sym_POUND2,
    ACTIONS(388),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(398),
    1,
    anon_sym_STAR3,
    ACTIONS(400),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(60),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [258] = 9,
    ACTIONS(358),
    1,
    anon_sym_STAR2,
    ACTIONS(360),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(366),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(368),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(370),
    1,
    anon_sym_POUND2,
    ACTIONS(372),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(404),
    1,
    anon_sym__3,
    ACTIONS(402),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(59),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [290] = 9,
    ACTIONS(378),
    1,
    anon_sym__2,
    ACTIONS(380),
    1,
    anon_sym___,
    ACTIONS(382),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(384),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(386),
    1,
    anon_sym_POUND2,
    ACTIONS(388),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(408),
    1,
    anon_sym_STAR3,
    ACTIONS(406),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(48),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [322] = 9,
    ACTIONS(378),
    1,
    anon_sym__2,
    ACTIONS(380),
    1,
    anon_sym___,
    ACTIONS(382),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(384),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(386),
    1,
    anon_sym_POUND2,
    ACTIONS(388),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(408),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(406),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(48),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [354] = 9,
    ACTIONS(358),
    1,
    anon_sym_STAR2,
    ACTIONS(360),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(366),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(368),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(370),
    1,
    anon_sym_POUND2,
    ACTIONS(372),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(410),
    1,
    anon_sym__3,
    ACTIONS(362),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(49),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [386] = 9,
    ACTIONS(378),
    1,
    anon_sym__2,
    ACTIONS(380),
    1,
    anon_sym___,
    ACTIONS(382),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(384),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(386),
    1,
    anon_sym_POUND2,
    ACTIONS(388),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(412),
    1,
    anon_sym_STAR3,
    ACTIONS(406),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(48),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [418] = 9,
    ACTIONS(378),
    1,
    anon_sym__2,
    ACTIONS(380),
    1,
    anon_sym___,
    ACTIONS(382),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(384),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(386),
    1,
    anon_sym_POUND2,
    ACTIONS(388),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(412),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(406),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(48),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [450] = 9,
    ACTIONS(358),
    1,
    anon_sym_STAR2,
    ACTIONS(360),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(364),
    1,
    anon_sym___,
    ACTIONS(366),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(368),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(370),
    1,
    anon_sym_POUND2,
    ACTIONS(372),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(362),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(49),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [482] = 9,
    ACTIONS(358),
    1,
    anon_sym_STAR2,
    ACTIONS(360),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(366),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(368),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(370),
    1,
    anon_sym_POUND2,
    ACTIONS(372),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(404),
    1,
    anon_sym___,
    ACTIONS(414),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(64),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [514] = 9,
    ACTIONS(358),
    1,
    anon_sym_STAR2,
    ACTIONS(360),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(366),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(368),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(370),
    1,
    anon_sym_POUND2,
    ACTIONS(372),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(410),
    1,
    anon_sym___,
    ACTIONS(362),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(49),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [546] = 9,
    ACTIONS(376),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(378),
    1,
    anon_sym__2,
    ACTIONS(380),
    1,
    anon_sym___,
    ACTIONS(382),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(384),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(386),
    1,
    anon_sym_POUND2,
    ACTIONS(388),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(416),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(58),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [578] = 1,
    ACTIONS(286),
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
    [591] = 1,
    ACTIONS(282),
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
    [617] = 1,
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
    [630] = 1,
    ACTIONS(262),
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
    [643] = 1,
    ACTIONS(310),
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
    ACTIONS(262),
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
    ACTIONS(266),
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
    ACTIONS(274),
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
    [708] = 1,
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
    [721] = 1,
    ACTIONS(220),
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
    [734] = 5,
    ACTIONS(418),
    1,
    anon_sym_LBRACE,
    ACTIONS(420),
    1,
    anon_sym_RBRACK,
    ACTIONS(422),
    1,
    aux_sym_image_macro_token2,
    STATE(171),
    1,
    sym_link_label,
    STATE(81),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [751] = 5,
    ACTIONS(418),
    1,
    anon_sym_LBRACE,
    ACTIONS(422),
    1,
    aux_sym_image_macro_token2,
    ACTIONS(424),
    1,
    anon_sym_RBRACK,
    STATE(163),
    1,
    sym_link_label,
    STATE(81),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [768] = 5,
    ACTIONS(418),
    1,
    anon_sym_LBRACE,
    ACTIONS(422),
    1,
    aux_sym_image_macro_token2,
    ACTIONS(426),
    1,
    anon_sym_RBRACK,
    STATE(173),
    1,
    sym_link_label,
    STATE(81),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [785] = 4,
    ACTIONS(418),
    1,
    anon_sym_LBRACE,
    ACTIONS(428),
    1,
    anon_sym_RBRACK,
    ACTIONS(430),
    1,
    aux_sym_image_macro_token2,
    STATE(83),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [799] = 3,
    ACTIONS(432),
    1,
    anon_sym_RBRACK,
    STATE(84),
    1,
    aux_sym_image_macro_repeat1,
    ACTIONS(434),
    3,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [811] = 4,
    ACTIONS(436),
    1,
    anon_sym_LBRACE,
    ACTIONS(439),
    1,
    anon_sym_RBRACK,
    ACTIONS(441),
    1,
    aux_sym_image_macro_token2,
    STATE(83),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [825] = 3,
    ACTIONS(444),
    1,
    anon_sym_RBRACK,
    STATE(84),
    1,
    aux_sym_image_macro_repeat1,
    ACTIONS(446),
    3,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [837] = 5,
    ACTIONS(449),
    1,
    anon_sym_PLUS,
    ACTIONS(451),
    1,
    anon_sym_COMMA,
    ACTIONS(453),
    1,
    anon_sym_RBRACK,
    STATE(122),
    1,
    aux_sym_kbd_macro_repeat1,
    STATE(123),
    1,
    aux_sym_kbd_macro_repeat2,
    [853] = 3,
    STATE(86),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(455),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    ACTIONS(458),
    2,
    anon_sym_BQUOTE3,
    anon_sym_BQUOTE_BQUOTE,
    [865] = 3,
    ACTIONS(460),
    1,
    anon_sym_RBRACK,
    STATE(82),
    1,
    aux_sym_image_macro_repeat1,
    ACTIONS(434),
    3,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [877] = 3,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(462),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    ACTIONS(465),
    2,
    anon_sym_POUND3,
    anon_sym_POUND_POUND,
    [889] = 3,
    ACTIONS(469),
    1,
    anon_sym_POUND3,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(467),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [900] = 3,
    ACTIONS(473),
    1,
    anon_sym_BQUOTE3,
    STATE(108),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(471),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [911] = 3,
    ACTIONS(469),
    1,
    anon_sym_POUND_POUND,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(467),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [922] = 3,
    ACTIONS(477),
    1,
    anon_sym_POUND_POUND,
    STATE(95),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(475),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [933] = 3,
    ACTIONS(479),
    1,
    anon_sym_DOT,
    STATE(93),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(139),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [944] = 3,
    ACTIONS(482),
    1,
    anon_sym_DOT,
    STATE(93),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(162),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [955] = 3,
    ACTIONS(484),
    1,
    anon_sym_POUND_POUND,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(467),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [966] = 3,
    ACTIONS(484),
    1,
    anon_sym_POUND3,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(467),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [977] = 3,
    ACTIONS(488),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(86),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(486),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [988] = 3,
    ACTIONS(482),
    1,
    anon_sym_DOT,
    STATE(94),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(156),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [999] = 3,
    ACTIONS(492),
    1,
    anon_sym_BQUOTE3,
    STATE(104),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(490),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1010] = 3,
    ACTIONS(488),
    1,
    anon_sym_BQUOTE3,
    STATE(86),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(486),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1021] = 3,
    ACTIONS(494),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(86),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(486),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1032] = 3,
    ACTIONS(492),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(101),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(496),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1043] = 3,
    ACTIONS(473),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(109),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(498),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1054] = 3,
    ACTIONS(494),
    1,
    anon_sym_BQUOTE3,
    STATE(86),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(486),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1065] = 3,
    ACTIONS(502),
    1,
    anon_sym_POUND3,
    STATE(110),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(500),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1076] = 3,
    ACTIONS(506),
    1,
    anon_sym_POUND_POUND,
    STATE(91),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(504),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1087] = 3,
    ACTIONS(502),
    1,
    anon_sym_POUND_POUND,
    STATE(116),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(508),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1098] = 3,
    ACTIONS(510),
    1,
    anon_sym_BQUOTE3,
    STATE(86),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(486),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1109] = 3,
    ACTIONS(510),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(86),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(486),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1120] = 3,
    ACTIONS(512),
    1,
    anon_sym_POUND3,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(467),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1131] = 3,
    ACTIONS(516),
    1,
    anon_sym_BQUOTE3,
    STATE(100),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(514),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1142] = 3,
    ACTIONS(506),
    1,
    anon_sym_POUND3,
    STATE(89),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(518),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1153] = 3,
    ACTIONS(516),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(97),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(520),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1164] = 3,
    ACTIONS(477),
    1,
    anon_sym_POUND3,
    STATE(96),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(522),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1175] = 1,
    ACTIONS(524),
    4,
    anon_sym_RBRACK,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [1182] = 3,
    ACTIONS(512),
    1,
    anon_sym_POUND_POUND,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(467),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1193] = 2,
    STATE(136),
    1,
    sym_key,
    ACTIONS(526),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [1201] = 3,
    ACTIONS(528),
    1,
    anon_sym_COMMA,
    ACTIONS(531),
    1,
    anon_sym_RBRACK,
    STATE(118),
    1,
    aux_sym_kbd_macro_repeat2,
    [1211] = 2,
    STATE(85),
    1,
    sym_key,
    ACTIONS(526),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [1219] = 1,
    ACTIONS(139),
    3,
    anon_sym_DQUOTE,
    anon_sym_DOT,
    anon_sym_LBRACK,
    [1225] = 2,
    STATE(135),
    1,
    sym_key,
    ACTIONS(526),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [1233] = 3,
    ACTIONS(449),
    1,
    anon_sym_PLUS,
    ACTIONS(533),
    1,
    anon_sym_RBRACK,
    STATE(126),
    1,
    aux_sym_kbd_macro_repeat1,
    [1243] = 3,
    ACTIONS(451),
    1,
    anon_sym_COMMA,
    ACTIONS(533),
    1,
    anon_sym_RBRACK,
    STATE(118),
    1,
    aux_sym_kbd_macro_repeat2,
    [1253] = 1,
    ACTIONS(535),
    3,
    anon_sym_PLUS,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [1259] = 1,
    ACTIONS(270),
    3,
    anon_sym_LBRACE,
    anon_sym_RBRACK,
    aux_sym_image_macro_token2,
    [1265] = 3,
    ACTIONS(537),
    1,
    anon_sym_PLUS,
    ACTIONS(540),
    1,
    anon_sym_RBRACK,
    STATE(126),
    1,
    aux_sym_kbd_macro_repeat1,
    [1275] = 2,
    ACTIONS(542),
    1,
    anon_sym_LBRACK,
    ACTIONS(544),
    1,
    anon_sym_quotes,
    [1282] = 2,
    ACTIONS(546),
    1,
    aux_sym_anchor_token3,
    ACTIONS(548),
    1,
    aux_sym_footnote_macro_token1,
    [1289] = 2,
    ACTIONS(550),
    1,
    anon_sym_LBRACK,
    ACTIONS(552),
    1,
    aux_sym_anchor_token1,
    [1296] = 2,
    ACTIONS(554),
    1,
    anon_sym_COMMA,
    ACTIONS(556),
    1,
    anon_sym_RBRACK,
    [1303] = 2,
    ACTIONS(558),
    1,
    anon_sym_COMMA,
    ACTIONS(560),
    1,
    anon_sym_RBRACK,
    [1310] = 2,
    ACTIONS(562),
    1,
    aux_sym_anchor_token3,
    ACTIONS(564),
    1,
    aux_sym_footnote_macro_token1,
    [1317] = 2,
    ACTIONS(566),
    1,
    anon_sym_DQUOTE,
    ACTIONS(568),
    1,
    anon_sym_LBRACK,
    [1324] = 2,
    ACTIONS(570),
    1,
    anon_sym_COMMA,
    ACTIONS(572),
    1,
    anon_sym_RBRACK_RBRACK,
    [1331] = 1,
    ACTIONS(540),
    2,
    anon_sym_PLUS,
    anon_sym_RBRACK,
    [1336] = 1,
    ACTIONS(531),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [1341] = 1,
    ACTIONS(574),
    1,
    aux_sym_anchor_token3,
    [1345] = 1,
    ACTIONS(576),
    1,
    sym__link_component,
    [1349] = 1,
    ACTIONS(578),
    1,
    anon_sym_RBRACK,
    [1353] = 1,
    ACTIONS(580),
    1,
    anon_sym_COLON,
    [1357] = 1,
    ACTIONS(582),
    1,
    anon_sym_RBRACK,
    [1361] = 1,
    ACTIONS(584),
    1,
    anon_sym_RBRACK,
    [1365] = 1,
    ACTIONS(586),
    1,
    aux_sym_anchor_token1,
    [1369] = 1,
    ACTIONS(588),
    1,
    anon_sym_COLON,
    [1373] = 1,
    ACTIONS(590),
    1,
    anon_sym_RBRACK,
    [1377] = 1,
    ACTIONS(592),
    1,
    aux_sym_anchor_token1,
    [1381] = 1,
    ACTIONS(594),
    1,
    aux_sym_footnote_macro_token2,
    [1385] = 1,
    ACTIONS(596),
    1,
    aux_sym_anchor_token1,
    [1389] = 1,
    ACTIONS(598),
    1,
    anon_sym_COLON,
    [1393] = 1,
    ACTIONS(600),
    1,
    anon_sym_RBRACK,
    [1397] = 1,
    ACTIONS(602),
    1,
    anon_sym_COLON,
    [1401] = 1,
    ACTIONS(604),
    1,
    anon_sym_COLON,
    [1405] = 1,
    ACTIONS(606),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [1409] = 1,
    ACTIONS(608),
    1,
    anon_sym_COLON,
    [1413] = 1,
    ACTIONS(610),
    1,
    anon_sym_COLON,
    [1417] = 1,
    ACTIONS(612),
    1,
    anon_sym_COLON,
    [1421] = 1,
    ACTIONS(614),
    1,
    anon_sym_RBRACK,
    [1425] = 1,
    ACTIONS(616),
    1,
    anon_sym_COLON,
    [1429] = 1,
    ACTIONS(618),
    1,
    anon_sym_RBRACE,
    [1433] = 1,
    ACTIONS(620),
    1,
    anon_sym_RBRACK,
    [1437] = 1,
    ACTIONS(622),
    1,
    anon_sym_DQUOTE,
    [1441] = 1,
    ACTIONS(624),
    1,
    sym__link_component,
    [1445] = 1,
    ACTIONS(626),
    1,
    anon_sym_RBRACK,
    [1449] = 1,
    ACTIONS(628),
    1,
    anon_sym_PLUS,
    [1453] = 1,
    ACTIONS(630),
    1,
    aux_sym_anchor_token3,
    [1457] = 1,
    ACTIONS(632),
    1,
    aux_sym_link_macro_token1,
    [1461] = 1,
    ACTIONS(634),
    1,
    anon_sym_RBRACK,
    [1465] = 1,
    ACTIONS(636),
    1,
    aux_sym_anchor_token3,
    [1469] = 1,
    ACTIONS(638),
    1,
    anon_sym_RBRACK_RBRACK,
    [1473] = 1,
    ACTIONS(640),
    1,
    aux_sym_anchor_token3,
    [1477] = 1,
    ACTIONS(642),
    1,
    anon_sym_RBRACK,
    [1481] = 1,
    ACTIONS(644),
    1,
    anon_sym_DQUOTE,
    [1485] = 1,
    ACTIONS(646),
    1,
    anon_sym_RBRACK,
    [1489] = 1,
    ACTIONS(648),
    1,
    aux_sym_anchor_token1,
    [1493] = 1,
    ACTIONS(650),
    1,
    aux_sym_replacement_token1,
    [1497] = 1,
    ACTIONS(652),
    1,
    anon_sym_RBRACK,
    [1501] = 1,
    ACTIONS(654),
    1,
    aux_sym_image_macro_token1,
    [1505] = 1,
    ACTIONS(656),
    1,
    anon_sym_LBRACK,
    [1509] = 1,
    ACTIONS(658),
    1,
    aux_sym_anchor_token1,
    [1513] = 1,
    ACTIONS(660),
    1,
    anon_sym_LBRACK,
    [1517] = 1,
    ACTIONS(662),
    1,
    anon_sym_GT_GT,
    [1521] = 1,
    ACTIONS(664),
    1,
    anon_sym_LBRACK,
    [1525] = 1,
    ACTIONS(666),
    1,
    aux_sym_anchor_token3,
    [1529] = 1,
    ACTIONS(668),
    1,
    anon_sym_RBRACE,
    [1533] = 1,
    ACTIONS(670),
    1,
    sym__link_component,
    [1537] = 1,
    ACTIONS(672),
    1,
    anon_sym_LBRACK,
    [1541] = 1,
    ACTIONS(674),
    1,
    aux_sym_anchor_token3,
    [1545] = 1,
    ACTIONS(676),
    1,
    anon_sym_LBRACK,
    [1549] = 1,
    ACTIONS(678),
    1,
    aux_sym_footnote_macro_token2,
    [1553] = 1,
    ACTIONS(680),
    1,
    anon_sym_LBRACK,
    [1557] = 1,
    ACTIONS(682),
    1,
    anon_sym_LBRACK,
    [1561] = 1,
    ACTIONS(684),
    1,
    anon_sym_RBRACK,
    [1565] = 1,
    ACTIONS(686),
    1,
    anon_sym_LBRACK,
    [1569] = 1,
    ACTIONS(688),
    1,
    sym__link_component,
    [1573] = 1,
    ACTIONS(690),
    1,
    aux_sym_anchor_token2,
    [1577] = 1,
    ACTIONS(692),
    1,
    aux_sym_xref_token2,
    [1581] = 1,
    ACTIONS(694),
    1,
    aux_sym_xref_token1,
    [1585] = 1,
    ACTIONS(696),
    1,
    ts_builtin_sym_end,
    [1589] = 1,
    ACTIONS(628),
    1,
    anon_sym_DOLLAR_DOLLAR,
    [1593] = 1,
    ACTIONS(628),
    1,
    anon_sym_PLUS_PLUS_PLUS,
    [1597] = 1,
    ACTIONS(698),
    1,
    aux_sym_anchor_token1,
    [1601] = 1,
    ACTIONS(700),
    1,
    anon_sym_LBRACK,
    [1605] = 1,
    ACTIONS(702),
    1,
    anon_sym_COLON_SLASH_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(48)] = 0,
    [SMALL_STATE(49)] = 33,
    [SMALL_STATE(50)] = 66,
    [SMALL_STATE(51)] = 98,
    [SMALL_STATE(52)] = 130,
    [SMALL_STATE(53)] = 162,
    [SMALL_STATE(54)] = 194,
    [SMALL_STATE(55)] = 226,
    [SMALL_STATE(56)] = 258,
    [SMALL_STATE(57)] = 290,
    [SMALL_STATE(58)] = 322,
    [SMALL_STATE(59)] = 354,
    [SMALL_STATE(60)] = 386,
    [SMALL_STATE(61)] = 418,
    [SMALL_STATE(62)] = 450,
    [SMALL_STATE(63)] = 482,
    [SMALL_STATE(64)] = 514,
    [SMALL_STATE(65)] = 546,
    [SMALL_STATE(66)] = 578,
    [SMALL_STATE(67)] = 591,
    [SMALL_STATE(68)] = 604,
    [SMALL_STATE(69)] = 617,
    [SMALL_STATE(70)] = 630,
    [SMALL_STATE(71)] = 643,
    [SMALL_STATE(72)] = 656,
    [SMALL_STATE(73)] = 669,
    [SMALL_STATE(74)] = 682,
    [SMALL_STATE(75)] = 695,
    [SMALL_STATE(76)] = 708,
    [SMALL_STATE(77)] = 721,
    [SMALL_STATE(78)] = 734,
    [SMALL_STATE(79)] = 751,
    [SMALL_STATE(80)] = 768,
    [SMALL_STATE(81)] = 785,
    [SMALL_STATE(82)] = 799,
    [SMALL_STATE(83)] = 811,
    [SMALL_STATE(84)] = 825,
    [SMALL_STATE(85)] = 837,
    [SMALL_STATE(86)] = 853,
    [SMALL_STATE(87)] = 865,
    [SMALL_STATE(88)] = 877,
    [SMALL_STATE(89)] = 889,
    [SMALL_STATE(90)] = 900,
    [SMALL_STATE(91)] = 911,
    [SMALL_STATE(92)] = 922,
    [SMALL_STATE(93)] = 933,
    [SMALL_STATE(94)] = 944,
    [SMALL_STATE(95)] = 955,
    [SMALL_STATE(96)] = 966,
    [SMALL_STATE(97)] = 977,
    [SMALL_STATE(98)] = 988,
    [SMALL_STATE(99)] = 999,
    [SMALL_STATE(100)] = 1010,
    [SMALL_STATE(101)] = 1021,
    [SMALL_STATE(102)] = 1032,
    [SMALL_STATE(103)] = 1043,
    [SMALL_STATE(104)] = 1054,
    [SMALL_STATE(105)] = 1065,
    [SMALL_STATE(106)] = 1076,
    [SMALL_STATE(107)] = 1087,
    [SMALL_STATE(108)] = 1098,
    [SMALL_STATE(109)] = 1109,
    [SMALL_STATE(110)] = 1120,
    [SMALL_STATE(111)] = 1131,
    [SMALL_STATE(112)] = 1142,
    [SMALL_STATE(113)] = 1153,
    [SMALL_STATE(114)] = 1164,
    [SMALL_STATE(115)] = 1175,
    [SMALL_STATE(116)] = 1182,
    [SMALL_STATE(117)] = 1193,
    [SMALL_STATE(118)] = 1201,
    [SMALL_STATE(119)] = 1211,
    [SMALL_STATE(120)] = 1219,
    [SMALL_STATE(121)] = 1225,
    [SMALL_STATE(122)] = 1233,
    [SMALL_STATE(123)] = 1243,
    [SMALL_STATE(124)] = 1253,
    [SMALL_STATE(125)] = 1259,
    [SMALL_STATE(126)] = 1265,
    [SMALL_STATE(127)] = 1275,
    [SMALL_STATE(128)] = 1282,
    [SMALL_STATE(129)] = 1289,
    [SMALL_STATE(130)] = 1296,
    [SMALL_STATE(131)] = 1303,
    [SMALL_STATE(132)] = 1310,
    [SMALL_STATE(133)] = 1317,
    [SMALL_STATE(134)] = 1324,
    [SMALL_STATE(135)] = 1331,
    [SMALL_STATE(136)] = 1336,
    [SMALL_STATE(137)] = 1341,
    [SMALL_STATE(138)] = 1345,
    [SMALL_STATE(139)] = 1349,
    [SMALL_STATE(140)] = 1353,
    [SMALL_STATE(141)] = 1357,
    [SMALL_STATE(142)] = 1361,
    [SMALL_STATE(143)] = 1365,
    [SMALL_STATE(144)] = 1369,
    [SMALL_STATE(145)] = 1373,
    [SMALL_STATE(146)] = 1377,
    [SMALL_STATE(147)] = 1381,
    [SMALL_STATE(148)] = 1385,
    [SMALL_STATE(149)] = 1389,
    [SMALL_STATE(150)] = 1393,
    [SMALL_STATE(151)] = 1397,
    [SMALL_STATE(152)] = 1401,
    [SMALL_STATE(153)] = 1405,
    [SMALL_STATE(154)] = 1409,
    [SMALL_STATE(155)] = 1413,
    [SMALL_STATE(156)] = 1417,
    [SMALL_STATE(157)] = 1421,
    [SMALL_STATE(158)] = 1425,
    [SMALL_STATE(159)] = 1429,
    [SMALL_STATE(160)] = 1433,
    [SMALL_STATE(161)] = 1437,
    [SMALL_STATE(162)] = 1441,
    [SMALL_STATE(163)] = 1445,
    [SMALL_STATE(164)] = 1449,
    [SMALL_STATE(165)] = 1453,
    [SMALL_STATE(166)] = 1457,
    [SMALL_STATE(167)] = 1461,
    [SMALL_STATE(168)] = 1465,
    [SMALL_STATE(169)] = 1469,
    [SMALL_STATE(170)] = 1473,
    [SMALL_STATE(171)] = 1477,
    [SMALL_STATE(172)] = 1481,
    [SMALL_STATE(173)] = 1485,
    [SMALL_STATE(174)] = 1489,
    [SMALL_STATE(175)] = 1493,
    [SMALL_STATE(176)] = 1497,
    [SMALL_STATE(177)] = 1501,
    [SMALL_STATE(178)] = 1505,
    [SMALL_STATE(179)] = 1509,
    [SMALL_STATE(180)] = 1513,
    [SMALL_STATE(181)] = 1517,
    [SMALL_STATE(182)] = 1521,
    [SMALL_STATE(183)] = 1525,
    [SMALL_STATE(184)] = 1529,
    [SMALL_STATE(185)] = 1533,
    [SMALL_STATE(186)] = 1537,
    [SMALL_STATE(187)] = 1541,
    [SMALL_STATE(188)] = 1545,
    [SMALL_STATE(189)] = 1549,
    [SMALL_STATE(190)] = 1553,
    [SMALL_STATE(191)] = 1557,
    [SMALL_STATE(192)] = 1561,
    [SMALL_STATE(193)] = 1565,
    [SMALL_STATE(194)] = 1569,
    [SMALL_STATE(195)] = 1573,
    [SMALL_STATE(196)] = 1577,
    [SMALL_STATE(197)] = 1581,
    [SMALL_STATE(198)] = 1585,
    [SMALL_STATE(199)] = 1589,
    [SMALL_STATE(200)] = 1593,
    [SMALL_STATE(201)] = 1597,
    [SMALL_STATE(202)] = 1601,
    [SMALL_STATE(203)] = 1605,
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
    SHIFT(179),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(158),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(156),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(155),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(154),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(153),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(152),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(151),
    [27] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(149),
    [29] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(148),
    [31] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(146),
    [33] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(144),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(143),
    [37] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(140),
    [39] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(55),
    [41] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(54),
    [43] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(53),
    [45] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(52),
    [47] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(111),
    [49] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(113),
    [51] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(114),
    [53] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(92),
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
    SHIFT_REPEAT(179),
    [72] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(158),
    [75] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(156),
    [78] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(155),
    [81] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(154),
    [84] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(153),
    [87] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(152),
    [90] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(151),
    [93] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(149),
    [96] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(148),
    [99] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(146),
    [102] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(144),
    [105] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(143),
    [108] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(140),
    [111] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(55),
    [114] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(54),
    [117] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(53),
    [120] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(52),
    [123] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(111),
    [126] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(113),
    [129] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(114),
    [132] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(92),
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
    SHIFT_REPEAT(162),
    [146] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__punctuation, 1, 0, 0),
    [148] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__punctuation, 1, 0, 0),
    [150] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(159),
    [152] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(203),
    [154] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(164),
    [156] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 3, 0, 0),
    [158] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 3, 0, 0),
    [160] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(162),
    [162] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 4, 0, 0),
    [164] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 4, 0, 0),
    [166] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 5, 0, 0),
    [168] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 5, 0, 0),
    [170] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 8, 0, 7),
    [172] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 8, 0, 7),
    [174] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_kbd_macro, 6, 0, 0),
    [176] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_kbd_macro, 6, 0, 0),
    [178] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_image_macro, 6, 0, 0),
    [180] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_image_macro, 6, 0, 0),
    [182] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 6, 0, 7),
    [184] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 6, 0, 7),
    [186] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 6, 0, 6),
    [188] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 6, 0, 6),
    [190] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 6, 0, 6),
    [192] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 6, 0, 6),
    [194] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [196] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [198] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_pass_macro, 5, 0, 5),
    [200] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_pass_macro, 5, 0, 5),
    [202] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_math_macro, 5, 0, 4),
    [204] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_math_macro, 5, 0, 4),
    [206] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_macro, 5, 0, 0),
    [208] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_macro, 5, 0, 0),
    [210] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_kbd_macro, 5, 0, 0),
    [212] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_kbd_macro, 5, 0, 0),
    [214] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_image_macro, 5, 0, 0),
    [216] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_image_macro, 5, 0, 0),
    [218] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [220] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [222] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 5, 0, 2),
    [224] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 5, 0, 2),
    [226] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 5, 0, 1),
    [228] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 5, 0, 1),
    [230] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 5, 0, 0),
    [232] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 5, 0, 0),
    [234] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [236] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [238] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(80),
    [240] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_macro, 6, 0, 0),
    [242] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_macro, 6, 0, 0),
    [244] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [246] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [248] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 4, 0, 1),
    [250] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 4, 0, 1),
    [252] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_menu_macro, 6, 0, 8),
    [254] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_menu_macro, 6, 0, 8),
    [256] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [258] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [260] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 3, 0, 0),
    [262] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 3, 0, 0),
    [264] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 3, 0, 0),
    [266] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 3, 0, 0),
    [268] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 0),
    [270] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 0),
    [272] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [274] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [276] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_passthrough, 6, 0, 0),
    [278] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_passthrough, 6, 0, 0),
    [280] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 2, 0, 0),
    [282] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 2, 0, 0),
    [284] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [286] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [288] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [290] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [292] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 2, 0, 0),
    [294] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 2, 0, 0),
    [296] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 6, 0, 9),
    [298] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 6, 0, 9),
    [300] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 3, 0, 1),
    [302] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 3, 0, 1),
    [304] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 7, 0, 0),
    [306] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 7, 0, 0),
    [308] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [310] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [312] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(48),
    [315] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    [317] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(56),
    [320] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(63),
    [323] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(99),
    [326] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(102),
    [329] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(112),
    [332] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(106),
    [335] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(51),
    [338] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(65),
    [341] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(49),
    [344] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    [346] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(90),
    [349] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(103),
    [352] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(105),
    [355] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(107),
    [358] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(51),
    [360] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(65),
    [362] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(49),
    [364] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(37),
    [366] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(90),
    [368] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(103),
    [370] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(105),
    [372] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(107),
    [374] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(57),
    [376] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(71),
    [378] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(56),
    [380] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(63),
    [382] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(99),
    [384] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(102),
    [386] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(112),
    [388] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(106),
    [390] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [392] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(24),
    [394] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(50),
    [396] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(61),
    [398] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(47),
    [400] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(60),
    [402] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(59),
    [404] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(77),
    [406] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(48),
    [408] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(66),
    [410] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(74),
    [412] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(41),
    [414] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(64),
    [416] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(58),
    [418] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(175),
    [420] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(172),
    [422] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(81),
    [424] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(20),
    [426] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(33),
    [428] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_label, 1, 0, 0),
    [430] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(83),
    [432] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(13),
    [434] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(115),
    [436] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    SHIFT_REPEAT(175),
    [439] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    [441] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    SHIFT_REPEAT(83),
    [444] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_image_macro_repeat1, 2, 0, 0),
    [446] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_image_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(115),
    [449] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(121),
    [451] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(117),
    [453] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [455] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    SHIFT_REPEAT(86),
    [458] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    [460] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(23),
    [462] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    SHIFT_REPEAT(88),
    [465] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    [467] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(88),
    [469] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(72),
    [471] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(108),
    [473] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(67),
    [475] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(95),
    [477] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(43),
    [479] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(194),
    [482] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(194),
    [484] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(34),
    [486] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(86),
    [488] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(35),
    [490] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(104),
    [492] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(76),
    [494] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(73),
    [496] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(101),
    [498] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(109),
    [500] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(110),
    [502] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(68),
    [504] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(91),
    [506] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(75),
    [508] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(116),
    [510] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(69),
    [512] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(70),
    [514] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(100),
    [516] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(40),
    [518] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(89),
    [520] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(97),
    [522] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(96),
    [524] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_image_macro_repeat1, 1, 0, 3),
    [526] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(124),
    [528] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(117),
    [531] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat2, 2, 0, 0),
    [533] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [535] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_key, 1, 0, 0),
    [537] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(121),
    [540] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat1, 2, 0, 0),
    [542] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(183),
    [544] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [546] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(167),
    [548] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(131),
    [550] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(128),
    [552] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(191),
    [554] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(147),
    [556] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [558] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(189),
    [560] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [562] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [564] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(130),
    [566] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [568] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [570] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(195),
    [572] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [574] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(139),
    [576] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [578] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [580] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(196),
    [582] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [584] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [586] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(197),
    [588] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(127),
    [590] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [592] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(199),
    [594] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(157),
    [596] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(200),
    [598] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(201),
    [600] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [602] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(202),
    [604] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(166),
    [606] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(138),
    [608] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(178),
    [610] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(177),
    [612] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(129),
    [614] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [616] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(174),
    [618] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [620] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [622] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [624] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [626] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(29),
    [628] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [630] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(142),
    [632] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(188),
    [634] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [636] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(192),
    [638] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [640] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(141),
    [642] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(161),
    [644] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [646] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [648] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(193),
    [650] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(184),
    [652] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [654] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(190),
    [656] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(119),
    [658] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(134),
    [660] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(165),
    [662] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [664] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(170),
    [666] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(150),
    [668] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(125),
    [670] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(98),
    [672] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(137),
    [674] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(160),
    [676] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [678] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(145),
    [680] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [682] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(132),
    [684] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [686] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(168),
    [688] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(120),
    [690] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(169),
    [692] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(180),
    [694] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(181),
    [696] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [698] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(186),
    [700] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(187),
    [702] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(185),
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
