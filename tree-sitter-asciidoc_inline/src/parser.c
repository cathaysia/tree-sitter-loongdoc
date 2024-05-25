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
#define STATE_COUNT 157
#define LARGE_STATE_COUNT 35
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 3
#define TOKEN_COUNT 95
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
    anon_sym_kbd = 1,
    anon_sym_btn = 2,
    anon_sym_image = 3,
    anon_sym_icon = 4,
    anon_sym_pass = 5,
    anon_sym_link = 6,
    anon_sym_mailto = 7,
    anon_sym_menu = 8,
    anon_sym_latexmath = 9,
    anon_sym_asciimath = 10,
    anon_sym_footnote = 11,
    anon_sym_footnoteref = 12,
    anon_sym_anchor = 13,
    anon_sym_xref = 14,
    anon_sym_COLON = 15,
    aux_sym_inline_macro_token1 = 16,
    anon_sym_BSLASH_LBRACK = 17,
    anon_sym_LBRACK = 18,
    aux_sym_inline_macro_token2 = 19,
    anon_sym_BSLASH_RBRACK = 20,
    anon_sym_RBRACK = 21,
    anon_sym_LBRACE = 22,
    aux_sym_replacement_token1 = 23,
    anon_sym_RBRACE = 24,
    sym__word_no_digit = 25,
    sym__digits = 26,
    anon_sym_BANG = 27,
    anon_sym_DQUOTE = 28,
    anon_sym_POUND = 29,
    anon_sym_DOLLAR = 30,
    anon_sym_PERCENT = 31,
    anon_sym_AMP = 32,
    anon_sym_SQUOTE = 33,
    anon_sym_LPAREN = 34,
    anon_sym_RPAREN = 35,
    anon_sym_STAR = 36,
    anon_sym_PLUS = 37,
    anon_sym_COMMA = 38,
    anon_sym_DASH = 39,
    anon_sym_DOT = 40,
    anon_sym_SLASH = 41,
    anon_sym_COLON2 = 42,
    anon_sym_SEMI = 43,
    anon_sym_LT = 44,
    anon_sym_EQ = 45,
    anon_sym_GT = 46,
    anon_sym_QMARK = 47,
    anon_sym_AT = 48,
    anon_sym_BSLASH = 49,
    anon_sym_CARET = 50,
    anon_sym__ = 51,
    anon_sym_BQUOTE = 52,
    anon_sym_PIPE = 53,
    anon_sym_TILDE = 54,
    anon_sym_LBRACK_LBRACK = 55,
    aux_sym_anchor_token1 = 56,
    aux_sym_anchor_token2 = 57,
    anon_sym_RBRACK_RBRACK = 58,
    sym_email = 59,
    anon_sym_http = 60,
    anon_sym_https = 61,
    anon_sym_file = 62,
    anon_sym_ftp = 63,
    anon_sym_irc = 64,
    anon_sym_COLON_SLASH_SLASH = 65,
    sym__link_component = 66,
    anon_sym_PLUS_PLUS_PLUS = 67,
    anon_sym_DOLLAR_DOLLAR = 68,
    anon_sym_LT_LT = 69,
    aux_sym_xref_token1 = 70,
    anon_sym_BSLASH_COMMA = 71,
    anon_sym_BSLASH_GT = 72,
    aux_sym_xref_token2 = 73,
    anon_sym_GT_GT = 74,
    anon_sym_STAR2 = 75,
    aux_sym_emphasis_token1 = 76,
    anon_sym_BSLASH_STAR = 77,
    anon_sym_STAR3 = 78,
    anon_sym_STAR_STAR = 79,
    anon_sym__2 = 80,
    aux_sym_ltalic_token1 = 81,
    anon_sym_BSLASH_ = 82,
    anon_sym__3 = 83,
    anon_sym___ = 84,
    anon_sym_BQUOTE2 = 85,
    aux_sym_monospace_token1 = 86,
    anon_sym_BSLASH_BQUOTE = 87,
    anon_sym_BQUOTE3 = 88,
    anon_sym_BQUOTE_BQUOTE = 89,
    anon_sym_POUND2 = 90,
    aux_sym_highlight_token1 = 91,
    anon_sym_BSLASH_POUND = 92,
    anon_sym_POUND3 = 93,
    anon_sym_POUND_POUND = 94,
    sym_inline = 95,
    sym_inline_macro = 96,
    sym_replacement = 97,
    sym__word = 98,
    sym__punctuation = 99,
    sym_anchor = 100,
    sym_auto_link = 101,
    sym_link_label = 102,
    sym_link_url = 103,
    sym_passthrough = 104,
    sym_xref = 105,
    sym_emphasis = 106,
    sym_ltalic = 107,
    sym_monospace = 108,
    sym_highlight = 109,
    aux_sym_inline_repeat1 = 110,
    aux_sym_inline_macro_repeat1 = 111,
    aux_sym_inline_macro_repeat2 = 112,
    aux_sym_link_label_repeat1 = 113,
    aux_sym_link_url_repeat1 = 114,
    aux_sym_xref_repeat1 = 115,
    aux_sym_xref_repeat2 = 116,
    aux_sym_emphasis_repeat1 = 117,
    aux_sym_ltalic_repeat1 = 118,
    aux_sym_monospace_repeat1 = 119,
    aux_sym_highlight_repeat1 = 120,
    alias_sym_attr = 121,
    alias_sym_id = 122,
    alias_sym_target = 123,
};

static const char *const ts_symbol_names[] = {
    [ts_builtin_sym_end] = "end",
    [anon_sym_kbd] = "kbd",
    [anon_sym_btn] = "btn",
    [anon_sym_image] = "image",
    [anon_sym_icon] = "icon",
    [anon_sym_pass] = "pass",
    [anon_sym_link] = "link",
    [anon_sym_mailto] = "mailto",
    [anon_sym_menu] = "menu",
    [anon_sym_latexmath] = "latexmath",
    [anon_sym_asciimath] = "asciimath",
    [anon_sym_footnote] = "footnote",
    [anon_sym_footnoteref] = "footnoteref",
    [anon_sym_anchor] = "anchor",
    [anon_sym_xref] = "xref",
    [anon_sym_COLON] = ":",
    [aux_sym_inline_macro_token1] = "inline_macro_token1",
    [anon_sym_BSLASH_LBRACK] = "\\[",
    [anon_sym_LBRACK] = "[",
    [aux_sym_inline_macro_token2] = "inline_macro_token2",
    [anon_sym_BSLASH_RBRACK] = "\\]",
    [anon_sym_RBRACK] = "]",
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
    [anon_sym_COLON2] = ":",
    [anon_sym_SEMI] = ";",
    [anon_sym_LT] = "<",
    [anon_sym_EQ] = "=",
    [anon_sym_GT] = ">",
    [anon_sym_QMARK] = "\?",
    [anon_sym_AT] = "@",
    [anon_sym_BSLASH] = "\\",
    [anon_sym_CARET] = "^",
    [anon_sym__] = "_",
    [anon_sym_BQUOTE] = "`",
    [anon_sym_PIPE] = "|",
    [anon_sym_TILDE] = "~",
    [anon_sym_LBRACK_LBRACK] = "[[",
    [aux_sym_anchor_token1] = "anchor_token1",
    [aux_sym_anchor_token2] = "reftext",
    [anon_sym_RBRACK_RBRACK] = "]]",
    [sym_email] = "email",
    [anon_sym_http] = "http",
    [anon_sym_https] = "https",
    [anon_sym_file] = "file",
    [anon_sym_ftp] = "ftp",
    [anon_sym_irc] = "irc",
    [anon_sym_COLON_SLASH_SLASH] = "://",
    [sym__link_component] = "_link_component",
    [anon_sym_PLUS_PLUS_PLUS] = "+++",
    [anon_sym_DOLLAR_DOLLAR] = "$$",
    [anon_sym_LT_LT] = "<<",
    [aux_sym_xref_token1] = "xref_token1",
    [anon_sym_BSLASH_COMMA] = "\\,",
    [anon_sym_BSLASH_GT] = "\\>",
    [aux_sym_xref_token2] = "xref_token2",
    [anon_sym_GT_GT] = ">>",
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
    [sym_inline_macro] = "inline_macro",
    [sym_replacement] = "replacement",
    [sym__word] = "_word",
    [sym__punctuation] = "_punctuation",
    [sym_anchor] = "anchor",
    [sym_auto_link] = "auto_link",
    [sym_link_label] = "link_label",
    [sym_link_url] = "link_url",
    [sym_passthrough] = "passthrough",
    [sym_xref] = "xref",
    [sym_emphasis] = "emphasis",
    [sym_ltalic] = "ltalic",
    [sym_monospace] = "monospace",
    [sym_highlight] = "highlight",
    [aux_sym_inline_repeat1] = "inline_repeat1",
    [aux_sym_inline_macro_repeat1] = "inline_macro_repeat1",
    [aux_sym_inline_macro_repeat2] = "inline_macro_repeat2",
    [aux_sym_link_label_repeat1] = "link_label_repeat1",
    [aux_sym_link_url_repeat1] = "link_url_repeat1",
    [aux_sym_xref_repeat1] = "xref_repeat1",
    [aux_sym_xref_repeat2] = "xref_repeat2",
    [aux_sym_emphasis_repeat1] = "emphasis_repeat1",
    [aux_sym_ltalic_repeat1] = "ltalic_repeat1",
    [aux_sym_monospace_repeat1] = "monospace_repeat1",
    [aux_sym_highlight_repeat1] = "highlight_repeat1",
    [alias_sym_attr] = "attr",
    [alias_sym_id] = "id",
    [alias_sym_target] = "target",
};

static const TSSymbol ts_symbol_map[] = {
    [ts_builtin_sym_end] = ts_builtin_sym_end,
    [anon_sym_kbd] = anon_sym_kbd,
    [anon_sym_btn] = anon_sym_btn,
    [anon_sym_image] = anon_sym_image,
    [anon_sym_icon] = anon_sym_icon,
    [anon_sym_pass] = anon_sym_pass,
    [anon_sym_link] = anon_sym_link,
    [anon_sym_mailto] = anon_sym_mailto,
    [anon_sym_menu] = anon_sym_menu,
    [anon_sym_latexmath] = anon_sym_latexmath,
    [anon_sym_asciimath] = anon_sym_asciimath,
    [anon_sym_footnote] = anon_sym_footnote,
    [anon_sym_footnoteref] = anon_sym_footnoteref,
    [anon_sym_anchor] = anon_sym_anchor,
    [anon_sym_xref] = anon_sym_xref,
    [anon_sym_COLON] = anon_sym_COLON,
    [aux_sym_inline_macro_token1] = aux_sym_inline_macro_token1,
    [anon_sym_BSLASH_LBRACK] = anon_sym_BSLASH_LBRACK,
    [anon_sym_LBRACK] = anon_sym_LBRACK,
    [aux_sym_inline_macro_token2] = aux_sym_inline_macro_token2,
    [anon_sym_BSLASH_RBRACK] = anon_sym_BSLASH_RBRACK,
    [anon_sym_RBRACK] = anon_sym_RBRACK,
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
    [anon_sym_COLON2] = anon_sym_COLON,
    [anon_sym_SEMI] = anon_sym_SEMI,
    [anon_sym_LT] = anon_sym_LT,
    [anon_sym_EQ] = anon_sym_EQ,
    [anon_sym_GT] = anon_sym_GT,
    [anon_sym_QMARK] = anon_sym_QMARK,
    [anon_sym_AT] = anon_sym_AT,
    [anon_sym_BSLASH] = anon_sym_BSLASH,
    [anon_sym_CARET] = anon_sym_CARET,
    [anon_sym__] = anon_sym__,
    [anon_sym_BQUOTE] = anon_sym_BQUOTE,
    [anon_sym_PIPE] = anon_sym_PIPE,
    [anon_sym_TILDE] = anon_sym_TILDE,
    [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
    [aux_sym_anchor_token1] = aux_sym_anchor_token1,
    [aux_sym_anchor_token2] = aux_sym_anchor_token2,
    [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
    [sym_email] = sym_email,
    [anon_sym_http] = anon_sym_http,
    [anon_sym_https] = anon_sym_https,
    [anon_sym_file] = anon_sym_file,
    [anon_sym_ftp] = anon_sym_ftp,
    [anon_sym_irc] = anon_sym_irc,
    [anon_sym_COLON_SLASH_SLASH] = anon_sym_COLON_SLASH_SLASH,
    [sym__link_component] = sym__link_component,
    [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
    [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
    [anon_sym_LT_LT] = anon_sym_LT_LT,
    [aux_sym_xref_token1] = aux_sym_xref_token1,
    [anon_sym_BSLASH_COMMA] = anon_sym_BSLASH_COMMA,
    [anon_sym_BSLASH_GT] = anon_sym_BSLASH_GT,
    [aux_sym_xref_token2] = aux_sym_xref_token2,
    [anon_sym_GT_GT] = anon_sym_GT_GT,
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
    [sym_inline_macro] = sym_inline_macro,
    [sym_replacement] = sym_replacement,
    [sym__word] = sym__word,
    [sym__punctuation] = sym__punctuation,
    [sym_anchor] = sym_anchor,
    [sym_auto_link] = sym_auto_link,
    [sym_link_label] = sym_link_label,
    [sym_link_url] = sym_link_url,
    [sym_passthrough] = sym_passthrough,
    [sym_xref] = sym_xref,
    [sym_emphasis] = sym_emphasis,
    [sym_ltalic] = sym_ltalic,
    [sym_monospace] = sym_monospace,
    [sym_highlight] = sym_highlight,
    [aux_sym_inline_repeat1] = aux_sym_inline_repeat1,
    [aux_sym_inline_macro_repeat1] = aux_sym_inline_macro_repeat1,
    [aux_sym_inline_macro_repeat2] = aux_sym_inline_macro_repeat2,
    [aux_sym_link_label_repeat1] = aux_sym_link_label_repeat1,
    [aux_sym_link_url_repeat1] = aux_sym_link_url_repeat1,
    [aux_sym_xref_repeat1] = aux_sym_xref_repeat1,
    [aux_sym_xref_repeat2] = aux_sym_xref_repeat2,
    [aux_sym_emphasis_repeat1] = aux_sym_emphasis_repeat1,
    [aux_sym_ltalic_repeat1] = aux_sym_ltalic_repeat1,
    [aux_sym_monospace_repeat1] = aux_sym_monospace_repeat1,
    [aux_sym_highlight_repeat1] = aux_sym_highlight_repeat1,
    [alias_sym_attr] = alias_sym_attr,
    [alias_sym_id] = alias_sym_id,
    [alias_sym_target] = alias_sym_target,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
    [ts_builtin_sym_end] = {
        .visible = false,
        .named = true,
    },
    [anon_sym_kbd] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_btn] = {
        .visible = true,
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
    [anon_sym_pass] = {
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
    [anon_sym_menu] = {
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
    [anon_sym_footnote] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_footnoteref] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_anchor] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_xref] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COLON] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_inline_macro_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_BSLASH_LBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LBRACK] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_inline_macro_token2] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_BSLASH_RBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_RBRACK] = {
        .visible = true,
        .named = false,
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
    [anon_sym_COLON2] = {
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
    [anon_sym_BSLASH] = {
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
    [sym_email] = {
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
    [anon_sym_PLUS_PLUS_PLUS] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_DOLLAR_DOLLAR] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LT_LT] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_xref_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_BSLASH_COMMA] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASH_GT] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_xref_token2] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_GT_GT] = {
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
    [sym_inline_macro] = {
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
    [aux_sym_inline_macro_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_inline_macro_repeat2] = {
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
    [aux_sym_xref_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_xref_repeat2] = {
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
    [alias_sym_attr] = {
        .visible = true,
        .named = true,
    },
    [alias_sym_id] = {
        .visible = true,
        .named = true,
    },
    [alias_sym_target] = {
        .visible = true,
        .named = true,
    },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
    [0] = { 0 },
    [1] = {
        [1] = alias_sym_id,
    },
    [2] = {
        [3] = alias_sym_attr,
    },
    [3] = {
        [2] = alias_sym_target,
    },
    [4] = {
        [1] = alias_sym_id,
        [3] = aux_sym_anchor_token2,
    },
    [5] = {
        [2] = alias_sym_target,
        [4] = alias_sym_attr,
    },
};

static const uint16_t ts_non_terminal_alias_map[] = {
    aux_sym_inline_macro_repeat1,
    2,
    aux_sym_inline_macro_repeat1,
    alias_sym_target,
    aux_sym_inline_macro_repeat2,
    2,
    aux_sym_inline_macro_repeat2,
    alias_sym_attr,
    aux_sym_xref_repeat1,
    2,
    aux_sym_xref_repeat1,
    alias_sym_id,
    aux_sym_xref_repeat2,
    2,
    aux_sym_xref_repeat2,
    aux_sym_anchor_token2,
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
    [37] = 36,
    [38] = 38,
    [39] = 39,
    [40] = 40,
    [41] = 38,
    [42] = 40,
    [43] = 35,
    [44] = 44,
    [45] = 20,
    [46] = 19,
    [47] = 21,
    [48] = 26,
    [49] = 49,
    [50] = 50,
    [51] = 51,
    [52] = 52,
    [53] = 52,
    [54] = 51,
    [55] = 55,
    [56] = 56,
    [57] = 57,
    [58] = 58,
    [59] = 59,
    [60] = 57,
    [61] = 58,
    [62] = 59,
    [63] = 63,
    [64] = 63,
    [65] = 56,
    [66] = 55,
    [67] = 30,
    [68] = 32,
    [69] = 10,
    [70] = 30,
    [71] = 11,
    [72] = 33,
    [73] = 29,
    [74] = 29,
    [75] = 25,
    [76] = 11,
    [77] = 25,
    [78] = 34,
    [79] = 79,
    [80] = 80,
    [81] = 81,
    [82] = 82,
    [83] = 83,
    [84] = 84,
    [85] = 85,
    [86] = 84,
    [87] = 80,
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
    [100] = 93,
    [101] = 101,
    [102] = 18,
    [103] = 7,
    [104] = 104,
    [105] = 94,
    [106] = 106,
    [107] = 107,
    [108] = 106,
    [109] = 8,
    [110] = 110,
    [111] = 96,
    [112] = 96,
    [113] = 9,
    [114] = 98,
    [115] = 99,
    [116] = 98,
    [117] = 99,
    [118] = 93,
    [119] = 94,
    [120] = 104,
    [121] = 101,
    [122] = 101,
    [123] = 104,
    [124] = 106,
    [125] = 15,
    [126] = 126,
    [127] = 127,
    [128] = 18,
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
    [144] = 135,
    [145] = 145,
    [146] = 146,
    [147] = 143,
    [148] = 148,
    [149] = 149,
    [150] = 131,
    [151] = 143,
    [152] = 152,
    [153] = 152,
    [154] = 138,
    [155] = 155,
    [156] = 149,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(121);
            ADVANCE_MAP(
                ' ', 2,
                '!', 447,
                '"', 450,
                '#', 452,
                '$', 454,
                '%', 456,
                '&', 458,
                '\'', 460,
                '(', 462,
                ')', 464,
                '*', 466,
                '+', 469,
                ',', 471,
                '-', 473,
                '.', 475,
                '/', 477,
                ':', 178,
                ';', 481,
                '<', 483,
                '=', 485,
                '>', 487,
                '?', 489,
                '@', 491,
                '[', 184,
                '\\', 493,
                ']', 200,
                '^', 495,
                '_', 497,
                '`', 503,
                'a', 352,
                'b', 369,
                'f', 343,
                'h', 372,
                'i', 328,
                'k', 325,
                'l', 322,
                'm', 319,
                'p', 320,
                'x', 365,
                '{', 203,
                '|', 505,
                '}', 316,
                '~', 507,
                0x0b, 317,
                '\f', 317,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(118);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(445);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0)
                ADVANCE(444);
            END_STATE();
        case 1:
            ADVANCE_MAP(
                ' ', 2,
                '!', 447,
                '"', 450,
                '#', 452,
                '$', 454,
                '%', 456,
                '&', 458,
                '\'', 460,
                '(', 462,
                ')', 464,
                '*', 466,
                '+', 469,
                ',', 471,
                '-', 473,
                '.', 475,
                '/', 477,
                ':', 479,
                ';', 481,
                '<', 483,
                '=', 485,
                '>', 487,
                '?', 489,
                '@', 491,
                '[', 184,
                '\\', 493,
                ']', 200,
                '^', 495,
                '_', 497,
                '`', 503,
                'a', 352,
                'b', 369,
                'f', 343,
                'h', 372,
                'i', 328,
                'k', 325,
                'l', 322,
                'm', 319,
                'p', 320,
                'x', 365,
                '{', 203,
                '|', 505,
                '}', 316,
                '~', 507,
                0x0b, 317,
                '\f', 317,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(1);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(445);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0)
                ADVANCE(444);
            END_STATE();
        case 2:
            ADVANCE_MAP(
                ' ', 2,
                '!', 447,
                '"', 450,
                '#', 594,
                '$', 454,
                '%', 456,
                '&', 458,
                '\'', 460,
                '(', 462,
                ')', 464,
                '*', 555,
                '+', 469,
                ',', 471,
                '-', 473,
                '.', 475,
                '/', 477,
                ':', 479,
                ';', 481,
                '<', 483,
                '=', 485,
                '>', 487,
                '?', 489,
                '@', 491,
                '[', 184,
                '\\', 493,
                ']', 200,
                '^', 495,
                '_', 568,
                '`', 585,
                'a', 352,
                'b', 369,
                'f', 343,
                'h', 372,
                'i', 328,
                'k', 325,
                'l', 322,
                'm', 319,
                'p', 320,
                'x', 365,
                '{', 203,
                '|', 505,
                '}', 316,
                '~', 507,
                0x0b, 317,
                '\f', 317,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(1);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(445);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0)
                ADVANCE(444);
            END_STATE();
        case 3:
            ADVANCE_MAP(
                ' ', 4,
                '!', 447,
                '"', 450,
                '#', 452,
                '$', 454,
                '%', 456,
                '&', 458,
                '\'', 460,
                '(', 462,
                ')', 464,
                '*', 466,
                '+', 469,
                ',', 471,
                '-', 473,
                '.', 475,
                '/', 477,
                ':', 479,
                ';', 481,
                '<', 483,
                '=', 485,
                '>', 487,
                '?', 489,
                '@', 491,
                '[', 184,
                '\\', 493,
                ']', 200,
                '^', 495,
                '_', 499,
                '`', 503,
                'a', 414,
                'b', 431,
                'f', 405,
                'h', 434,
                'i', 390,
                'k', 387,
                'l', 384,
                'm', 381,
                'p', 382,
                'x', 427,
                '{', 203,
                '|', 505,
                '}', 316,
                '~', 507,
                0x0b, 318,
                '\f', 318,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(3);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(446);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead != 0)
                ADVANCE(444);
            END_STATE();
        case 4:
            ADVANCE_MAP(
                ' ', 4,
                '!', 447,
                '"', 450,
                '#', 594,
                '$', 454,
                '%', 456,
                '&', 458,
                '\'', 460,
                '(', 462,
                ')', 464,
                '*', 555,
                '+', 469,
                ',', 471,
                '-', 473,
                '.', 475,
                '/', 477,
                ':', 479,
                ';', 481,
                '<', 483,
                '=', 485,
                '>', 487,
                '?', 489,
                '@', 491,
                '[', 184,
                '\\', 493,
                ']', 200,
                '^', 495,
                '_', 568,
                '`', 585,
                'a', 414,
                'b', 431,
                'f', 405,
                'h', 434,
                'i', 390,
                'k', 387,
                'l', 384,
                'm', 381,
                'p', 382,
                'x', 427,
                '{', 203,
                '|', 505,
                '}', 316,
                '~', 507,
                0x0b, 318,
                '\f', 318,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(3);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(446);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead != 0)
                ADVANCE(444);
            END_STATE();
        case 5:
            if(lookahead == ' ')
                ADVANCE(557);
            if(lookahead == '#')
                ADVANCE(559);
            if(lookahead == '*')
                ADVANCE(6);
            if(lookahead == '\\')
                ADVANCE(560);
            if(lookahead == '_')
                ADVANCE(561);
            if(lookahead == '`')
                ADVANCE(562);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(5);
            if(('\t' <= lookahead && lookahead <= '\f'))
                ADVANCE(558);
            if(lookahead != 0)
                ADVANCE(556);
            END_STATE();
        case 6:
            if(lookahead == ' ')
                ADVANCE(564);
            if(lookahead == '*')
                ADVANCE(565);
            END_STATE();
        case 7:
            if(lookahead == ' ')
                ADVANCE(570);
            if(lookahead == '#')
                ADVANCE(572);
            if(lookahead == '*')
                ADVANCE(573);
            if(lookahead == '\\')
                ADVANCE(574);
            if(lookahead == '_')
                ADVANCE(8);
            if(lookahead == '`')
                ADVANCE(575);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(7);
            if(('\t' <= lookahead && lookahead <= '\f'))
                ADVANCE(571);
            if(lookahead != 0)
                ADVANCE(569);
            END_STATE();
        case 8:
            if(lookahead == ' ')
                ADVANCE(577);
            if(lookahead == '_')
                ADVANCE(578);
            END_STATE();
        case 9:
            if(lookahead == ' ')
                ADVANCE(599);
            if(lookahead == '#')
                ADVANCE(600);
            END_STATE();
        case 10:
            if(lookahead == ' ')
                ADVANCE(590);
            if(lookahead == '`')
                ADVANCE(591);
            END_STATE();
        case 11:
            if(lookahead == '"')
                ADVANCE(56);
            if(lookahead == '\\')
                ADVANCE(117);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(11);
            END_STATE();
        case 12:
            ADVANCE_MAP(
                '"', 449,
                '$', 15,
                '+', 468,
                ',', 471,
                '.', 475,
                ':', 178,
                '[', 183,
                ']', 66,
                '}', 315,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(13);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(514);
            END_STATE();
        case 13:
            ADVANCE_MAP(
                '"', 449,
                '$', 15,
                '+', 468,
                ',', 471,
                '.', 475,
                '[', 183,
                ']', 66,
                '}', 315,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(13);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(514);
            END_STATE();
        case 14:
            if(lookahead == '#')
                ADVANCE(9);
            if(lookahead == '\\')
                ADVANCE(596);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(14);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(597);
            if(lookahead != 0)
                ADVANCE(595);
            END_STATE();
        case 15:
            if(lookahead == '$')
                ADVANCE(541);
            END_STATE();
        case 16:
            if(lookahead == '+')
                ADVANCE(539);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 17:
            if(lookahead == '+')
                ADVANCE(19);
            if(lookahead == ':')
                ADVANCE(50);
            if(lookahead == ']')
                ADVANCE(200);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(17);
            END_STATE();
        case 18:
            if(lookahead == '+')
                ADVANCE(538);
            END_STATE();
        case 19:
            if(lookahead == '+')
                ADVANCE(18);
            END_STATE();
        case 20:
            if(lookahead == ',')
                ADVANCE(471);
            if(lookahead == '>')
                ADVANCE(55);
            if(lookahead == '\\')
                ADVANCE(547);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(548);
            if(lookahead != 0)
                ADVANCE(546);
            END_STATE();
        case 21:
            if(lookahead == '-')
                ADVANCE(22);
            if(lookahead == '.')
                ADVANCE(115);
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
                ADVANCE(519);
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
                ADVANCE(61);
            if(lookahead == ']')
                ADVANCE(518);
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
                ADVANCE(61);
            if(lookahead == ']')
                ADVANCE(518);
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
                ADVANCE(61);
            if(lookahead == ']')
                ADVANCE(518);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(29);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            END_STATE();
        case 28:
            if(lookahead == '-')
                ADVANCE(31);
            if(lookahead == ':')
                ADVANCE(61);
            if(lookahead == ']')
                ADVANCE(518);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(27);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            END_STATE();
        case 29:
            if(lookahead == '-')
                ADVANCE(31);
            if(lookahead == ':')
                ADVANCE(61);
            if(lookahead == ']')
                ADVANCE(518);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            END_STATE();
        case 30:
            if(lookahead == '-')
                ADVANCE(31);
            if(lookahead == ':')
                ADVANCE(61);
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
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 33:
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
                ADVANCE(536);
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
                ADVANCE(55);
            if(lookahead == '\\')
                ADVANCE(552);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(553);
            if(lookahead != 0)
                ADVANCE(551);
            END_STATE();
        case 55:
            if(lookahead == '>')
                ADVANCE(554);
            END_STATE();
        case 56:
            if(lookahead == '@')
                ADVANCE(57);
            END_STATE();
        case 57:
            if(lookahead == '[')
                ADVANCE(51);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            END_STATE();
        case 58:
            if(lookahead == '[')
                ADVANCE(183);
            if(lookahead == '\\')
                ADVANCE(180);
            if(lookahead == '{')
                ADVANCE(202);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(181);
            if(lookahead != 0)
                ADVANCE(179);
            END_STATE();
        case 59:
            if(lookahead == '\\')
                ADVANCE(60);
            if(lookahead == ']')
                ADVANCE(520);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(59);
            END_STATE();
        case 60:
            if(lookahead == '\\')
                ADVANCE(60);
            if(lookahead == ']')
                ADVANCE(520);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(59);
            END_STATE();
        case 61:
            if(lookahead == '\\')
                ADVANCE(60);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(59);
            END_STATE();
        case 62:
            if(lookahead == '\\')
                ADVANCE(310);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(307);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 63:
            ADVANCE_MAP(
                '\\', 188,
                ']', 200,
                'a', 194,
                'b', 197,
                'f', 195,
                'i', 193,
                'k', 192,
                'l', 189,
                'm', 190,
                'p', 191,
                'x', 196,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(187);
            if(lookahead != 0)
                ADVANCE(186);
            END_STATE();
        case 64:
            if(lookahead == '\\')
                ADVANCE(588);
            if(lookahead == '`')
                ADVANCE(10);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(64);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(587);
            if(lookahead != 0)
                ADVANCE(586);
            END_STATE();
        case 65:
            if(lookahead == ']')
                ADVANCE(200);
            if(lookahead == '{')
                ADVANCE(202);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(198);
            if(lookahead != 0)
                ADVANCE(186);
            END_STATE();
        case 66:
            if(lookahead == ']')
                ADVANCE(517);
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
                ADVANCE(444);
            END_STATE();
        case 68:
            if(lookahead == 'a')
                ADVANCE(81);
            END_STATE();
        case 69:
            if(lookahead == 'a')
                ADVANCE(106);
            END_STATE();
        case 70:
            if(lookahead == 'a')
                ADVANCE(107);
            END_STATE();
        case 71:
            if(lookahead == 'c')
                ADVANCE(84);
            END_STATE();
        case 72:
            if(lookahead == 'c')
                ADVANCE(87);
            END_STATE();
        case 73:
            if(lookahead == 'd')
                ADVANCE(122);
            END_STATE();
        case 74:
            if(lookahead == 'e')
                ADVANCE(79);
            END_STATE();
        case 75:
            if(lookahead == 'e')
                ADVANCE(112);
            END_STATE();
        case 76:
            if(lookahead == 'e')
                ADVANCE(130);
            END_STATE();
        case 77:
            if(lookahead == 'e')
                ADVANCE(165);
            END_STATE();
        case 78:
            if(lookahead == 'e')
                ADVANCE(80);
            END_STATE();
        case 79:
            if(lookahead == 'f')
                ADVANCE(174);
            END_STATE();
        case 80:
            if(lookahead == 'f')
                ADVANCE(166);
            END_STATE();
        case 81:
            if(lookahead == 'g')
                ADVANCE(76);
            END_STATE();
        case 82:
            if(lookahead == 'h')
                ADVANCE(158);
            END_STATE();
        case 83:
            if(lookahead == 'h')
                ADVANCE(154);
            END_STATE();
        case 84:
            if(lookahead == 'h')
                ADVANCE(97);
            END_STATE();
        case 85:
            if(lookahead == 'i')
                ADVANCE(89);
            END_STATE();
        case 86:
            if(lookahead == 'i')
                ADVANCE(90);
            END_STATE();
        case 87:
            if(lookahead == 'i')
                ADVANCE(86);
            END_STATE();
        case 88:
            if(lookahead == 'k')
                ADVANCE(142);
            END_STATE();
        case 89:
            if(lookahead == 'l')
                ADVANCE(108);
            END_STATE();
        case 90:
            if(lookahead == 'm')
                ADVANCE(69);
            END_STATE();
        case 91:
            if(lookahead == 'm')
                ADVANCE(70);
            END_STATE();
        case 92:
            if(lookahead == 'n')
                ADVANCE(126);
            END_STATE();
        case 93:
            if(lookahead == 'n')
                ADVANCE(88);
            END_STATE();
        case 94:
            if(lookahead == 'n')
                ADVANCE(111);
            END_STATE();
        case 95:
            if(lookahead == 'n')
                ADVANCE(134);
            END_STATE();
        case 96:
            if(lookahead == 'n')
                ADVANCE(101);
            END_STATE();
        case 97:
            if(lookahead == 'o')
                ADVANCE(102);
            END_STATE();
        case 98:
            if(lookahead == 'o')
                ADVANCE(146);
            END_STATE();
        case 99:
            if(lookahead == 'o')
                ADVANCE(110);
            END_STATE();
        case 100:
            if(lookahead == 'o')
                ADVANCE(95);
            END_STATE();
        case 101:
            if(lookahead == 'o')
                ADVANCE(109);
            END_STATE();
        case 102:
            if(lookahead == 'r')
                ADVANCE(170);
            END_STATE();
        case 103:
            if(lookahead == 's')
                ADVANCE(138);
            END_STATE();
        case 104:
            if(lookahead == 's')
                ADVANCE(103);
            END_STATE();
        case 105:
            if(lookahead == 't')
                ADVANCE(75);
            END_STATE();
        case 106:
            if(lookahead == 't')
                ADVANCE(82);
            END_STATE();
        case 107:
            if(lookahead == 't')
                ADVANCE(83);
            END_STATE();
        case 108:
            if(lookahead == 't')
                ADVANCE(98);
            END_STATE();
        case 109:
            if(lookahead == 't')
                ADVANCE(77);
            END_STATE();
        case 110:
            if(lookahead == 't')
                ADVANCE(96);
            END_STATE();
        case 111:
            if(lookahead == 'u')
                ADVANCE(150);
            END_STATE();
        case 112:
            if(lookahead == 'x')
                ADVANCE(91);
            END_STATE();
        case 113:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(113);
            if(lookahead != 0 &&
               lookahead != '.' &&
               lookahead != '>' &&
               lookahead != '[')
                ADVANCE(537);
            END_STATE();
        case 114:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(515);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(516);
            END_STATE();
        case 115:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(519);
            END_STATE();
        case 116:
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
        case 117:
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(11);
            END_STATE();
        case 118:
            if(eof)
                ADVANCE(121);
            ADVANCE_MAP(
                ' ', 2,
                '!', 447,
                '"', 450,
                '#', 452,
                '$', 454,
                '%', 456,
                '&', 458,
                '\'', 460,
                '(', 462,
                ')', 464,
                '*', 466,
                '+', 469,
                ',', 471,
                '-', 473,
                '.', 475,
                '/', 477,
                ':', 479,
                ';', 481,
                '<', 483,
                '=', 485,
                '>', 487,
                '?', 489,
                '@', 491,
                '[', 184,
                '\\', 493,
                ']', 200,
                '^', 495,
                '_', 497,
                '`', 503,
                'a', 352,
                'b', 369,
                'f', 343,
                'h', 372,
                'i', 328,
                'k', 325,
                'l', 322,
                'm', 319,
                'p', 320,
                'x', 365,
                '{', 203,
                '|', 505,
                '}', 316,
                '~', 507,
                0x0b, 317,
                '\f', 317,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(118);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(445);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0)
                ADVANCE(444);
            END_STATE();
        case 119:
            if(eof)
                ADVANCE(121);
            ADVANCE_MAP(
                ' ', 4,
                '!', 447,
                '"', 450,
                '#', 452,
                '$', 454,
                '%', 456,
                '&', 458,
                '\'', 460,
                '(', 462,
                ')', 464,
                '*', 466,
                '+', 469,
                ',', 471,
                '-', 473,
                '.', 475,
                '/', 477,
                ':', 479,
                ';', 481,
                '<', 483,
                '=', 485,
                '>', 487,
                '?', 489,
                '@', 491,
                '[', 184,
                '\\', 493,
                ']', 200,
                '^', 495,
                '_', 499,
                '`', 503,
                'a', 414,
                'b', 431,
                'f', 405,
                'h', 434,
                'i', 390,
                'k', 387,
                'l', 384,
                'm', 381,
                'p', 382,
                'x', 427,
                '{', 203,
                '|', 505,
                '}', 316,
                '~', 507,
                0x0b, 318,
                '\f', 318,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(119);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(446);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead != 0)
                ADVANCE(444);
            END_STATE();
        case 120:
            if(eof)
                ADVANCE(121);
            ADVANCE_MAP(
                ' ', 205,
                '!', 448,
                '"', 451,
                '#', 453,
                '$', 455,
                '%', 457,
                '&', 459,
                '\'', 461,
                '(', 463,
                ')', 465,
                '*', 467,
                '+', 470,
                ',', 472,
                '-', 474,
                '.', 476,
                '/', 478,
                ':', 480,
                ';', 482,
                '<', 484,
                '=', 486,
                '>', 488,
                '?', 490,
                '@', 492,
                '[', 185,
                '\\', 494,
                ']', 201,
                '^', 496,
                '_', 501,
                '`', 504,
                'a', 254,
                'b', 271,
                'f', 245,
                'h', 274,
                'i', 230,
                'k', 227,
                'l', 224,
                'm', 221,
                'p', 222,
                'x', 267,
                '{', 204,
                '|', 506,
                '}', 316,
                '~', 508,
                0x0b, 207,
                '\f', 207,
                '\t', 206,
                '\n', 206,
                '\r', 206,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(283);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 121:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 122:
            ACCEPT_TOKEN(anon_sym_kbd);
            END_STATE();
        case 123:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 124:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 125:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 126:
            ACCEPT_TOKEN(anon_sym_btn);
            END_STATE();
        case 127:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 128:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 129:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 130:
            ACCEPT_TOKEN(anon_sym_image);
            END_STATE();
        case 131:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 132:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 133:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 134:
            ACCEPT_TOKEN(anon_sym_icon);
            END_STATE();
        case 135:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 136:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 137:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 138:
            ACCEPT_TOKEN(anon_sym_pass);
            END_STATE();
        case 139:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 140:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 141:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 142:
            ACCEPT_TOKEN(anon_sym_link);
            END_STATE();
        case 143:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 144:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 145:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 146:
            ACCEPT_TOKEN(anon_sym_mailto);
            END_STATE();
        case 147:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 148:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 149:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 150:
            ACCEPT_TOKEN(anon_sym_menu);
            END_STATE();
        case 151:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 152:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 153:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 154:
            ACCEPT_TOKEN(anon_sym_latexmath);
            END_STATE();
        case 155:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 156:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 157:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 158:
            ACCEPT_TOKEN(anon_sym_asciimath);
            END_STATE();
        case 159:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 160:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 161:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 162:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'r')
                ADVANCE(336);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 163:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'r')
                ADVANCE(398);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 164:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'r')
                ADVANCE(238);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 165:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == 'r')
                ADVANCE(78);
            END_STATE();
        case 166:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            END_STATE();
        case 167:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 168:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 169:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 170:
            ACCEPT_TOKEN(anon_sym_anchor);
            END_STATE();
        case 171:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 172:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 173:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 174:
            ACCEPT_TOKEN(anon_sym_xref);
            END_STATE();
        case 175:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 176:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 177:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 178:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 179:
            ACCEPT_TOKEN(aux_sym_inline_macro_token1);
            END_STATE();
        case 180:
            ACCEPT_TOKEN(aux_sym_inline_macro_token1);
            if(lookahead == '[')
                ADVANCE(182);
            END_STATE();
        case 181:
            ACCEPT_TOKEN(aux_sym_inline_macro_token1);
            if(lookahead == '\\')
                ADVANCE(180);
            if(lookahead == '{')
                ADVANCE(202);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(181);
            if(lookahead != 0 &&
               lookahead != '[' &&
               lookahead != '\\')
                ADVANCE(179);
            END_STATE();
        case 182:
            ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
            END_STATE();
        case 183:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 184:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(509);
            END_STATE();
        case 185:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(510);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 186:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            END_STATE();
        case 187:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            ADVANCE_MAP(
                '\\', 188,
                'a', 194,
                'b', 197,
                'f', 195,
                'i', 193,
                'k', 192,
                'l', 189,
                'm', 190,
                'p', 191,
                'x', 196,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(187);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(186);
            END_STATE();
        case 188:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == ']')
                ADVANCE(199);
            END_STATE();
        case 189:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'a')
                ADVANCE(105);
            if(lookahead == 'i')
                ADVANCE(93);
            END_STATE();
        case 190:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'a')
                ADVANCE(85);
            if(lookahead == 'e')
                ADVANCE(94);
            END_STATE();
        case 191:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'a')
                ADVANCE(104);
            END_STATE();
        case 192:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'b')
                ADVANCE(73);
            END_STATE();
        case 193:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'c')
                ADVANCE(100);
            if(lookahead == 'm')
                ADVANCE(68);
            END_STATE();
        case 194:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'n')
                ADVANCE(71);
            if(lookahead == 's')
                ADVANCE(72);
            END_STATE();
        case 195:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'o')
                ADVANCE(99);
            END_STATE();
        case 196:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'r')
                ADVANCE(74);
            END_STATE();
        case 197:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 't')
                ADVANCE(92);
            END_STATE();
        case 198:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == '{')
                ADVANCE(202);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(198);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(186);
            END_STATE();
        case 199:
            ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
            END_STATE();
        case 200:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 201:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 202:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 203:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 204:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 205:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 205,
                '!', 448,
                '"', 451,
                '#', 594,
                '$', 455,
                '%', 457,
                '&', 459,
                '\'', 461,
                '(', 463,
                ')', 465,
                '*', 555,
                '+', 470,
                ',', 472,
                '-', 474,
                '.', 476,
                '/', 478,
                ':', 480,
                ';', 482,
                '<', 484,
                '=', 486,
                '>', 488,
                '?', 490,
                '@', 492,
                '[', 185,
                '\\', 494,
                ']', 201,
                '^', 496,
                '_', 568,
                '`', 585,
                'a', 254,
                'b', 271,
                'f', 245,
                'h', 274,
                'i', 230,
                'k', 227,
                'l', 224,
                'm', 221,
                'p', 222,
                'x', 267,
                '{', 204,
                '|', 506,
                '~', 508,
                0x0b, 207,
                '\f', 207,
                '\t', 206,
                '\n', 206,
                '\r', 206,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(283);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(305);
            END_STATE();
        case 206:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 205,
                '!', 448,
                '"', 451,
                '#', 453,
                '$', 455,
                '%', 457,
                '&', 459,
                '\'', 461,
                '(', 463,
                ')', 465,
                '*', 467,
                '+', 470,
                ',', 472,
                '-', 474,
                '.', 476,
                '/', 478,
                ':', 480,
                ';', 482,
                '<', 484,
                '=', 486,
                '>', 488,
                '?', 490,
                '@', 492,
                '[', 185,
                '\\', 494,
                ']', 201,
                '^', 496,
                '_', 501,
                '`', 504,
                'a', 254,
                'b', 271,
                'f', 245,
                'h', 274,
                'i', 230,
                'k', 227,
                'l', 224,
                'm', 221,
                'p', 222,
                'x', 267,
                '{', 204,
                '|', 506,
                '~', 508,
                0x0b, 207,
                '\f', 207,
                '\t', 206,
                '\n', 206,
                '\r', 206,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(283);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(305);
            END_STATE();
        case 207:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 205,
                '!', 448,
                '"', 451,
                '#', 453,
                '$', 455,
                '%', 457,
                '&', 459,
                '\'', 461,
                '(', 463,
                ')', 465,
                '*', 467,
                '+', 470,
                ',', 472,
                '-', 474,
                '.', 476,
                '/', 478,
                ':', 480,
                ';', 482,
                '<', 484,
                '=', 486,
                '>', 488,
                '?', 490,
                '@', 492,
                '[', 185,
                '\\', 494,
                ']', 201,
                '^', 496,
                '_', 502,
                '`', 504,
                'a', 254,
                'b', 271,
                'f', 245,
                'h', 274,
                'i', 230,
                'k', 227,
                'l', 224,
                'm', 221,
                'p', 222,
                'x', 267,
                '{', 204,
                '|', 506,
                '~', 508,
                0x0b, 207,
                '\f', 207,
                '\t', 206,
                '\n', 206,
                '\r', 206,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(283);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(305);
            END_STATE();
        case 208:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '"')
                ADVANCE(303);
            if(lookahead == '\\')
                ADVANCE(311);
            if(lookahead == '}')
                ADVANCE(11);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(208);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 209:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '"')
                ADVANCE(303);
            if(lookahead == '\\')
                ADVANCE(311);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(208);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 210:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '+')
                ADVANCE(540);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 211:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(212);
            if(lookahead == '.')
                ADVANCE(308);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(211);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 212:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(212);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(211);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 213:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(220);
            if(lookahead == '0')
                ADVANCE(218);
            if(lookahead == '1')
                ADVANCE(217);
            if(lookahead == '2')
                ADVANCE(214);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(216);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 214:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(220);
            if(lookahead == '5')
                ADVANCE(215);
            if(lookahead == ':')
                ADVANCE(314);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == ']')
                ADVANCE(309);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(216);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 215:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(220);
            if(lookahead == ':')
                ADVANCE(314);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == ']')
                ADVANCE(309);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(218);
            if(('6' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 216:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(220);
            if(lookahead == ':')
                ADVANCE(314);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == ']')
                ADVANCE(309);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(218);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 217:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(220);
            if(lookahead == ':')
                ADVANCE(314);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == ']')
                ADVANCE(309);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(216);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 218:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(220);
            if(lookahead == ':')
                ADVANCE(314);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == ']')
                ADVANCE(309);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 219:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(220);
            if(lookahead == ':')
                ADVANCE(314);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 220:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(220);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 221:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'a')
                ADVANCE(247);
            if(lookahead == 'e')
                ADVANCE(257);
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
                ADVANCE(309);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 222:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'a')
                ADVANCE(270);
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
                ADVANCE(309);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 223:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'a')
                ADVANCE(241);
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
                ADVANCE(309);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 224:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'a')
                ADVANCE(275);
            if(lookahead == 'i')
                ADVANCE(256);
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
                ADVANCE(309);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 225:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'a')
                ADVANCE(273);
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
                ADVANCE(309);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 226:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'a')
                ADVANCE(276);
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
                ADVANCE(309);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 227:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'b')
                ADVANCE(232);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 228:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'c')
                ADVANCE(244);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 229:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'c')
                ADVANCE(535);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 230:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                '.', 306,
                '@', 304,
                '\\', 310,
                '_', 282,
                'c', 262,
                'm', 223,
                'r', 229,
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 231:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'c')
                ADVANCE(248);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 232:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'd')
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 233:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'e')
                ADVANCE(239);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 234:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'e')
                ADVANCE(529);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 235:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'e')
                ADVANCE(281);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 236:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'e')
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 237:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'e')
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 238:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'e')
                ADVANCE(240);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 239:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'f')
                ADVANCE(177);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 240:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'f')
                ADVANCE(169);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 241:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'g')
                ADVANCE(236);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 242:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'h')
                ADVANCE(161);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 243:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'h')
                ADVANCE(157);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 244:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'h')
                ADVANCE(261);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 245:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                '.', 306,
                '@', 304,
                '\\', 310,
                '_', 282,
                'i', 250,
                'o', 264,
                't', 265,
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 246:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'i')
                ADVANCE(252);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 247:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'i')
                ADVANCE(251);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 248:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'i')
                ADVANCE(246);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 249:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'k')
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 250:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'l')
                ADVANCE(234);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 251:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'l')
                ADVANCE(278);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 252:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'm')
                ADVANCE(225);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 253:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'm')
                ADVANCE(226);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 254:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'n')
                ADVANCE(228);
            if(lookahead == 's')
                ADVANCE(231);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 255:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'n')
                ADVANCE(129);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 256:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'n')
                ADVANCE(249);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 257:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'n')
                ADVANCE(280);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 258:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'n')
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 259:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'n')
                ADVANCE(263);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 260:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'o')
                ADVANCE(149);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 261:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'o')
                ADVANCE(268);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 262:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'o')
                ADVANCE(258);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 263:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'o')
                ADVANCE(279);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 264:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'o')
                ADVANCE(277);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 265:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 266:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'p')
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 267:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'r')
                ADVANCE(233);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 268:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'r')
                ADVANCE(173);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 269:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 's')
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 270:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 's')
                ADVANCE(269);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 271:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 't')
                ADVANCE(255);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 272:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 't')
                ADVANCE(266);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 273:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 't')
                ADVANCE(242);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 274:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 't')
                ADVANCE(272);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 275:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 't')
                ADVANCE(235);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 276:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 't')
                ADVANCE(243);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 277:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 't')
                ADVANCE(259);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 278:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 't')
                ADVANCE(260);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 279:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 't')
                ADVANCE(237);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 280:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'u')
                ADVANCE(153);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 281:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 'x')
                ADVANCE(253);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 282:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 283:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '}')
                ADVANCE(33);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(283);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 284:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 285:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(213);
            if(lookahead == '5')
                ADVANCE(286);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(289);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(287);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 286:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(213);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(289);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 287:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(213);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(289);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 288:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(213);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(287);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 289:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(213);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 290:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(301);
            if(lookahead == '5')
                ADVANCE(291);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(294);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(292);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 291:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(301);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(294);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 292:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(301);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(294);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 293:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(301);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(292);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 294:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(301);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 295:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(302);
            if(lookahead == '5')
                ADVANCE(296);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(299);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(297);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 296:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(302);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(299);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 297:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(302);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(299);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 298:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(302);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(297);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 299:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(302);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 300:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(299);
            if(lookahead == '1')
                ADVANCE(298);
            if(lookahead == '2')
                ADVANCE(295);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(297);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 301:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(289);
            if(lookahead == '1')
                ADVANCE(288);
            if(lookahead == '2')
                ADVANCE(285);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(287);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 302:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(294);
            if(lookahead == '1')
                ADVANCE(293);
            if(lookahead == '2')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(292);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 303:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 304:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '[')
                ADVANCE(300);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(211);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 305:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(305);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               (' ' <= lookahead && lookahead <= '@') ||
               ('[' <= lookahead && lookahead <= '`') ||
               lookahead == '{' ||
               lookahead == '|' ||
               lookahead == '~')
                ADVANCE(309);
            if(lookahead != 0 &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(305);
            END_STATE();
        case 306:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 307:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(307);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 308:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(310);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(211);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 309:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 310:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 311:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(209);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(208);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 312:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(313);
            if(lookahead == ']')
                ADVANCE(312);
            if(lookahead == '}')
                ADVANCE(59);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(312);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 313:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(313);
            if(lookahead == ']')
                ADVANCE(312);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(312);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 314:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(313);
            if(lookahead == '}')
                ADVANCE(59);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(312);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 315:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 316:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 317:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                ' ', 2,
                '_', 498,
                'a', 352,
                'b', 369,
                'f', 343,
                'h', 372,
                'i', 328,
                'k', 325,
                'l', 322,
                'm', 319,
                'p', 320,
                'x', 365,
                0x0b, 317,
                '\f', 317,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 318:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                ' ', 4,
                '_', 500,
                'a', 414,
                'b', 431,
                'f', 405,
                'h', 434,
                'i', 390,
                'k', 387,
                'l', 384,
                'm', 381,
                'p', 382,
                'x', 427,
                0x0b, 318,
                '\f', 318,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 319:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'a')
                ADVANCE(345);
            if(lookahead == 'e')
                ADVANCE(355);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 320:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'a')
                ADVANCE(368);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 321:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'a')
                ADVANCE(339);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 322:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'a')
                ADVANCE(373);
            if(lookahead == 'i')
                ADVANCE(354);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 323:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'a')
                ADVANCE(371);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 324:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'a')
                ADVANCE(374);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 325:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'b')
                ADVANCE(330);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 326:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'c')
                ADVANCE(342);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 327:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'c')
                ADVANCE(533);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 328:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'c')
                ADVANCE(360);
            if(lookahead == 'm')
                ADVANCE(321);
            if(lookahead == 'r')
                ADVANCE(327);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 329:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'c')
                ADVANCE(346);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 330:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'd')
                ADVANCE(123);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 331:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'e')
                ADVANCE(337);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 332:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'e')
                ADVANCE(527);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 333:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'e')
                ADVANCE(379);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 334:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'e')
                ADVANCE(131);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 335:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'e')
                ADVANCE(162);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 336:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'e')
                ADVANCE(338);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 337:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'f')
                ADVANCE(175);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 338:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'f')
                ADVANCE(167);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 339:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'g')
                ADVANCE(334);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 340:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'h')
                ADVANCE(159);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 341:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'h')
                ADVANCE(155);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 342:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'h')
                ADVANCE(359);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 343:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'i')
                ADVANCE(348);
            if(lookahead == 'o')
                ADVANCE(362);
            if(lookahead == 't')
                ADVANCE(363);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 344:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'i')
                ADVANCE(350);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 345:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'i')
                ADVANCE(349);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 346:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'i')
                ADVANCE(344);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 347:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'k')
                ADVANCE(143);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 348:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'l')
                ADVANCE(332);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 349:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'l')
                ADVANCE(376);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 350:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'm')
                ADVANCE(323);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 351:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'm')
                ADVANCE(324);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 352:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'n')
                ADVANCE(326);
            if(lookahead == 's')
                ADVANCE(329);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 353:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'n')
                ADVANCE(127);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 354:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'n')
                ADVANCE(347);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 355:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'n')
                ADVANCE(378);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 356:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'n')
                ADVANCE(135);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 357:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'n')
                ADVANCE(361);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 358:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'o')
                ADVANCE(147);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 359:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'o')
                ADVANCE(366);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 360:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'o')
                ADVANCE(356);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 361:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'o')
                ADVANCE(377);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 362:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'o')
                ADVANCE(375);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 363:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'p')
                ADVANCE(530);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 364:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'p')
                ADVANCE(521);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 365:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'r')
                ADVANCE(331);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 366:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'r')
                ADVANCE(171);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 367:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 's')
                ADVANCE(139);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 368:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 's')
                ADVANCE(367);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 369:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 't')
                ADVANCE(353);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 370:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 't')
                ADVANCE(364);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 371:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 't')
                ADVANCE(340);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 372:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 't')
                ADVANCE(370);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 373:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 't')
                ADVANCE(333);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 374:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 't')
                ADVANCE(341);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 375:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 't')
                ADVANCE(357);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 376:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 't')
                ADVANCE(358);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 377:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 't')
                ADVANCE(335);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 378:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'u')
                ADVANCE(151);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 379:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 'x')
                ADVANCE(351);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 380:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 381:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'a')
                ADVANCE(407);
            if(lookahead == 'e')
                ADVANCE(417);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 382:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'a')
                ADVANCE(430);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 383:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'a')
                ADVANCE(401);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 384:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'a')
                ADVANCE(435);
            if(lookahead == 'i')
                ADVANCE(416);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 385:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'a')
                ADVANCE(433);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 386:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'a')
                ADVANCE(436);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 387:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'b')
                ADVANCE(392);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 388:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'c')
                ADVANCE(404);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 389:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'c')
                ADVANCE(534);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 390:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'c')
                ADVANCE(422);
            if(lookahead == 'm')
                ADVANCE(383);
            if(lookahead == 'r')
                ADVANCE(389);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 391:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'c')
                ADVANCE(408);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 392:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'd')
                ADVANCE(124);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 393:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'e')
                ADVANCE(399);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 394:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'e')
                ADVANCE(528);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 395:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'e')
                ADVANCE(441);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 396:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'e')
                ADVANCE(132);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 397:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'e')
                ADVANCE(163);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 398:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'e')
                ADVANCE(400);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 399:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'f')
                ADVANCE(176);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 400:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'f')
                ADVANCE(168);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 401:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'g')
                ADVANCE(396);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 402:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'h')
                ADVANCE(160);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 403:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'h')
                ADVANCE(156);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 404:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'h')
                ADVANCE(421);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 405:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'i')
                ADVANCE(410);
            if(lookahead == 'o')
                ADVANCE(424);
            if(lookahead == 't')
                ADVANCE(425);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 406:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'i')
                ADVANCE(412);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 407:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'i')
                ADVANCE(411);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 408:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'i')
                ADVANCE(406);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 409:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'k')
                ADVANCE(144);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 410:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'l')
                ADVANCE(394);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 411:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'l')
                ADVANCE(438);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 412:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'm')
                ADVANCE(385);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 413:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'm')
                ADVANCE(386);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 414:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'n')
                ADVANCE(388);
            if(lookahead == 's')
                ADVANCE(391);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 415:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'n')
                ADVANCE(128);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 416:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'n')
                ADVANCE(409);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 417:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'n')
                ADVANCE(440);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 418:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'n')
                ADVANCE(136);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 419:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'n')
                ADVANCE(423);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 420:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'o')
                ADVANCE(148);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 421:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'o')
                ADVANCE(428);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 422:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'o')
                ADVANCE(418);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 423:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'o')
                ADVANCE(439);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 424:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'o')
                ADVANCE(437);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 425:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'p')
                ADVANCE(531);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 426:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'p')
                ADVANCE(522);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 427:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'r')
                ADVANCE(393);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 428:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'r')
                ADVANCE(172);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 429:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 's')
                ADVANCE(140);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 430:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 's')
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 431:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(415);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 432:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(426);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 433:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(402);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 434:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(432);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 435:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(395);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 436:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(403);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 437:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(419);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 438:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(420);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 439:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 't')
                ADVANCE(397);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 440:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'u')
                ADVANCE(152);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 441:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 'x')
                ADVANCE(413);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 442:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 443:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(513);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(514);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 444:
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
                ADVANCE(444);
            END_STATE();
        case 445:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(445);
            if(lookahead == '!' ||
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
                ADVANCE(514);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(512);
            END_STATE();
        case 446:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(446);
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
        case 447:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 448:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 449:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 450:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(56);
            if(lookahead == '\\')
                ADVANCE(117);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(11);
            END_STATE();
        case 451:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(303);
            if(lookahead == '\\')
                ADVANCE(311);
            if(lookahead == '}')
                ADVANCE(11);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(208);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 452:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(601);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 453:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(602);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(542);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 455:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(543);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 457:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 459:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 461:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '*')
                ADVANCE(566);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '*')
                ADVANCE(567);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '+')
                ADVANCE(16);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '+')
                ADVANCE(210);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '}')
                ADVANCE(33);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(anon_sym_COMMA);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 474:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(anon_sym_DOT);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 478:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(anon_sym_COLON2);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(anon_sym_COLON2);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(anon_sym_SEMI);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(544);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(545);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 486:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 490:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(anon_sym_AT);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 496:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(581);
            if(lookahead == '!' ||
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
                ADVANCE(514);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(512);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(579);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(582);
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
        case 500:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(580);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(584);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(583);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '`')
                ADVANCE(592);
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
        case 504:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '`')
                ADVANCE(593);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 506:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 508:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(514);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(512);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '_')
                ADVANCE(513);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(514);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(514);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(aux_sym_anchor_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(515);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(516);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(aux_sym_anchor_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ' ||
               ('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(516);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(sym_email);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(sym_email);
            if(lookahead == '-')
                ADVANCE(23);
            if(lookahead == '.')
                ADVANCE(115);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(519);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(sym_email);
            if(lookahead == '\\')
                ADVANCE(60);
            if(lookahead == ']')
                ADVANCE(520);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(59);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(lookahead == 's')
                ADVANCE(524);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(380);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(lookahead == 's')
                ADVANCE(525);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
            if(lookahead == 's')
                ADVANCE(526);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(sym__link_component);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '.' &&
               lookahead != '>' &&
               lookahead != '[')
                ADVANCE(537);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 540:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 543:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(309);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            if(lookahead == ',')
                ADVANCE(549);
            if(lookahead == '>')
                ADVANCE(550);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            if(lookahead == '\\')
                ADVANCE(547);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(548);
            if(lookahead != 0 &&
               lookahead != ',' &&
               lookahead != '>')
                ADVANCE(546);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(anon_sym_BSLASH_COMMA);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(anon_sym_BSLASH_GT);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            if(lookahead == '>')
                ADVANCE(550);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            if(lookahead == '\\')
                ADVANCE(552);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(553);
            if(lookahead != 0 &&
               lookahead != '>')
                ADVANCE(551);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(anon_sym_STAR2);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == ' ')
                ADVANCE(557);
            if(lookahead == '#')
                ADVANCE(594);
            if(lookahead == '\\')
                ADVANCE(560);
            if(lookahead == '_')
                ADVANCE(568);
            if(lookahead == '`')
                ADVANCE(585);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(558);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(556);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == ' ')
                ADVANCE(557);
            if(lookahead == '#')
                ADVANCE(559);
            if(lookahead == '\\')
                ADVANCE(560);
            if(lookahead == '_')
                ADVANCE(561);
            if(lookahead == '`')
                ADVANCE(562);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(558);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(556);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '#')
                ADVANCE(600);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '*')
                ADVANCE(563);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '_')
                ADVANCE(578);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '`')
                ADVANCE(591);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(anon_sym_BSLASH_STAR);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(anon_sym_STAR3);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 567:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(anon_sym__2);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == ' ')
                ADVANCE(570);
            if(lookahead == '#')
                ADVANCE(594);
            if(lookahead == '*')
                ADVANCE(555);
            if(lookahead == '\\')
                ADVANCE(574);
            if(lookahead == '`')
                ADVANCE(585);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(571);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_' &&
               lookahead != '`')
                ADVANCE(569);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == ' ')
                ADVANCE(570);
            if(lookahead == '#')
                ADVANCE(572);
            if(lookahead == '*')
                ADVANCE(573);
            if(lookahead == '\\')
                ADVANCE(574);
            if(lookahead == '`')
                ADVANCE(575);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(571);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_' &&
               lookahead != '`')
                ADVANCE(569);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '#')
                ADVANCE(600);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '*')
                ADVANCE(565);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '_')
                ADVANCE(576);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '`')
                ADVANCE(591);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(anon_sym_BSLASH_);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(anon_sym__3);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(anon_sym___);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(lookahead == '!' ||
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
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(380);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(32);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(442);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(444);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(33);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(514);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(512);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 583:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
            if(lookahead == '_')
                ADVANCE(282);
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
                ADVANCE(309);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(282);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(305);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(anon_sym_BQUOTE2);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '\\')
                ADVANCE(588);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(587);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '`')
                ADVANCE(586);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '`')
                ADVANCE(589);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(anon_sym_BSLASH_BQUOTE);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(anon_sym_BQUOTE3);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 593:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(anon_sym_POUND2);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '#')
                ADVANCE(598);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '\\')
                ADVANCE(596);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(597);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '#')
                ADVANCE(595);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(anon_sym_BSLASH_POUND);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(anon_sym_POUND3);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead == '.')
                ADVANCE(116);
            if(lookahead == '@')
                ADVANCE(57);
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
        case 602:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead == '.')
                ADVANCE(306);
            if(lookahead == '@')
                ADVANCE(304);
            if(lookahead == '\\')
                ADVANCE(310);
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
                ADVANCE(284);
            if(lookahead != 0)
                ADVANCE(309);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 119 },
    [2] = { .lex_state = 119 },
    [3] = { .lex_state = 119 },
    [4] = { .lex_state = 120 },
    [5] = { .lex_state = 119 },
    [6] = { .lex_state = 118 },
    [7] = { .lex_state = 119 },
    [8] = { .lex_state = 119 },
    [9] = { .lex_state = 119 },
    [10] = { .lex_state = 119 },
    [11] = { .lex_state = 119 },
    [12] = { .lex_state = 119 },
    [13] = { .lex_state = 119 },
    [14] = { .lex_state = 119 },
    [15] = { .lex_state = 119 },
    [16] = { .lex_state = 119 },
    [17] = { .lex_state = 119 },
    [18] = { .lex_state = 119 },
    [19] = { .lex_state = 119 },
    [20] = { .lex_state = 119 },
    [21] = { .lex_state = 119 },
    [22] = { .lex_state = 119 },
    [23] = { .lex_state = 119 },
    [24] = { .lex_state = 119 },
    [25] = { .lex_state = 119 },
    [26] = { .lex_state = 119 },
    [27] = { .lex_state = 119 },
    [28] = { .lex_state = 119 },
    [29] = { .lex_state = 119 },
    [30] = { .lex_state = 119 },
    [31] = { .lex_state = 119 },
    [32] = { .lex_state = 119 },
    [33] = { .lex_state = 119 },
    [34] = { .lex_state = 119 },
    [35] = { .lex_state = 63 },
    [36] = { .lex_state = 63 },
    [37] = { .lex_state = 63 },
    [38] = { .lex_state = 63 },
    [39] = { .lex_state = 63 },
    [40] = { .lex_state = 63 },
    [41] = { .lex_state = 63 },
    [42] = { .lex_state = 63 },
    [43] = { .lex_state = 63 },
    [44] = { .lex_state = 63 },
    [45] = { .lex_state = 63 },
    [46] = { .lex_state = 63 },
    [47] = { .lex_state = 63 },
    [48] = { .lex_state = 63 },
    [49] = { .lex_state = 5 },
    [50] = { .lex_state = 7 },
    [51] = { .lex_state = 5 },
    [52] = { .lex_state = 5 },
    [53] = { .lex_state = 5 },
    [54] = { .lex_state = 5 },
    [55] = { .lex_state = 7 },
    [56] = { .lex_state = 7 },
    [57] = { .lex_state = 7 },
    [58] = { .lex_state = 7 },
    [59] = { .lex_state = 5 },
    [60] = { .lex_state = 7 },
    [61] = { .lex_state = 7 },
    [62] = { .lex_state = 5 },
    [63] = { .lex_state = 5 },
    [64] = { .lex_state = 5 },
    [65] = { .lex_state = 7 },
    [66] = { .lex_state = 7 },
    [67] = { .lex_state = 7 },
    [68] = { .lex_state = 7 },
    [69] = { .lex_state = 7 },
    [70] = { .lex_state = 5 },
    [71] = { .lex_state = 7 },
    [72] = { .lex_state = 5 },
    [73] = { .lex_state = 7 },
    [74] = { .lex_state = 5 },
    [75] = { .lex_state = 7 },
    [76] = { .lex_state = 5 },
    [77] = { .lex_state = 5 },
    [78] = { .lex_state = 5 },
    [79] = { .lex_state = 20 },
    [80] = { .lex_state = 58 },
    [81] = { .lex_state = 20 },
    [82] = { .lex_state = 65 },
    [83] = { .lex_state = 58 },
    [84] = { .lex_state = 58 },
    [85] = { .lex_state = 65 },
    [86] = { .lex_state = 58 },
    [87] = { .lex_state = 58 },
    [88] = { .lex_state = 14 },
    [89] = { .lex_state = 65 },
    [90] = { .lex_state = 20 },
    [91] = { .lex_state = 64 },
    [92] = { .lex_state = 65 },
    [93] = { .lex_state = 64 },
    [94] = { .lex_state = 64 },
    [95] = { .lex_state = 54 },
    [96] = { .lex_state = 14 },
    [97] = { .lex_state = 54 },
    [98] = { .lex_state = 14 },
    [99] = { .lex_state = 64 },
    [100] = { .lex_state = 64 },
    [101] = { .lex_state = 14 },
    [102] = { .lex_state = 58 },
    [103] = { .lex_state = 12 },
    [104] = { .lex_state = 14 },
    [105] = { .lex_state = 64 },
    [106] = { .lex_state = 64 },
    [107] = { .lex_state = 20 },
    [108] = { .lex_state = 64 },
    [109] = { .lex_state = 12 },
    [110] = { .lex_state = 58 },
    [111] = { .lex_state = 14 },
    [112] = { .lex_state = 14 },
    [113] = { .lex_state = 12 },
    [114] = { .lex_state = 14 },
    [115] = { .lex_state = 64 },
    [116] = { .lex_state = 14 },
    [117] = { .lex_state = 64 },
    [118] = { .lex_state = 64 },
    [119] = { .lex_state = 64 },
    [120] = { .lex_state = 14 },
    [121] = { .lex_state = 14 },
    [122] = { .lex_state = 14 },
    [123] = { .lex_state = 14 },
    [124] = { .lex_state = 64 },
    [125] = { .lex_state = 12 },
    [126] = { .lex_state = 54 },
    [127] = { .lex_state = 54 },
    [128] = { .lex_state = 65 },
    [129] = { .lex_state = 12 },
    [130] = { .lex_state = 12 },
    [131] = { .lex_state = 113 },
    [132] = { .lex_state = 17 },
    [133] = { .lex_state = 0 },
    [134] = { .lex_state = 12 },
    [135] = { .lex_state = 113 },
    [136] = { .lex_state = 17 },
    [137] = { .lex_state = 12 },
    [138] = { .lex_state = 62 },
    [139] = { .lex_state = 114 },
    [140] = { .lex_state = 12 },
    [141] = { .lex_state = 12 },
    [142] = { .lex_state = 12 },
    [143] = { .lex_state = 12 },
    [144] = { .lex_state = 113 },
    [145] = { .lex_state = 12 },
    [146] = { .lex_state = 17 },
    [147] = { .lex_state = 12 },
    [148] = { .lex_state = 12 },
    [149] = { .lex_state = 12 },
    [150] = { .lex_state = 113 },
    [151] = { .lex_state = 12 },
    [152] = { .lex_state = 17 },
    [153] = { .lex_state = 17 },
    [154] = { .lex_state = 62 },
    [155] = { .lex_state = 12 },
    [156] = { .lex_state = 12 },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_kbd] = ACTIONS(1),
        [anon_sym_btn] = ACTIONS(1),
        [anon_sym_image] = ACTIONS(1),
        [anon_sym_icon] = ACTIONS(1),
        [anon_sym_pass] = ACTIONS(1),
        [anon_sym_link] = ACTIONS(1),
        [anon_sym_mailto] = ACTIONS(1),
        [anon_sym_menu] = ACTIONS(1),
        [anon_sym_latexmath] = ACTIONS(1),
        [anon_sym_asciimath] = ACTIONS(1),
        [anon_sym_footnote] = ACTIONS(1),
        [anon_sym_footnoteref] = ACTIONS(1),
        [anon_sym_anchor] = ACTIONS(1),
        [anon_sym_xref] = ACTIONS(1),
        [anon_sym_COLON] = ACTIONS(1),
        [anon_sym_LBRACK] = ACTIONS(1),
        [anon_sym_RBRACK] = ACTIONS(1),
        [anon_sym_LBRACE] = ACTIONS(1),
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
        [anon_sym_COLON2] = ACTIONS(1),
        [anon_sym_SEMI] = ACTIONS(1),
        [anon_sym_LT] = ACTIONS(1),
        [anon_sym_EQ] = ACTIONS(1),
        [anon_sym_GT] = ACTIONS(1),
        [anon_sym_QMARK] = ACTIONS(1),
        [anon_sym_AT] = ACTIONS(1),
        [anon_sym_BSLASH] = ACTIONS(1),
        [anon_sym_CARET] = ACTIONS(1),
        [anon_sym__] = ACTIONS(1),
        [anon_sym_BQUOTE] = ACTIONS(1),
        [anon_sym_PIPE] = ACTIONS(1),
        [anon_sym_TILDE] = ACTIONS(1),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
        [aux_sym_anchor_token1] = ACTIONS(1),
        [sym_email] = ACTIONS(1),
        [anon_sym_http] = ACTIONS(1),
        [anon_sym_https] = ACTIONS(1),
        [anon_sym_file] = ACTIONS(1),
        [anon_sym_ftp] = ACTIONS(1),
        [anon_sym_irc] = ACTIONS(1),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
        [anon_sym_LT_LT] = ACTIONS(1),
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
        [sym_inline] = STATE(133),
        [sym_inline_macro] = STATE(2),
        [sym_replacement] = STATE(2),
        [sym__word] = STATE(2),
        [sym__punctuation] = STATE(2),
        [sym_anchor] = STATE(2),
        [sym_auto_link] = STATE(2),
        [sym_link_url] = STATE(22),
        [sym_passthrough] = STATE(2),
        [sym_xref] = STATE(2),
        [sym_emphasis] = STATE(2),
        [sym_ltalic] = STATE(2),
        [sym_monospace] = STATE(2),
        [sym_highlight] = STATE(2),
        [aux_sym_inline_repeat1] = STATE(2),
        [anon_sym_kbd] = ACTIONS(3),
        [anon_sym_btn] = ACTIONS(3),
        [anon_sym_image] = ACTIONS(3),
        [anon_sym_icon] = ACTIONS(3),
        [anon_sym_pass] = ACTIONS(3),
        [anon_sym_link] = ACTIONS(3),
        [anon_sym_mailto] = ACTIONS(3),
        [anon_sym_menu] = ACTIONS(3),
        [anon_sym_latexmath] = ACTIONS(3),
        [anon_sym_asciimath] = ACTIONS(3),
        [anon_sym_footnote] = ACTIONS(3),
        [anon_sym_footnoteref] = ACTIONS(3),
        [anon_sym_anchor] = ACTIONS(3),
        [anon_sym_xref] = ACTIONS(3),
        [anon_sym_LBRACK] = ACTIONS(5),
        [anon_sym_RBRACK] = ACTIONS(5),
        [anon_sym_LBRACE] = ACTIONS(7),
        [anon_sym_RBRACE] = ACTIONS(5),
        [sym__word_no_digit] = ACTIONS(5),
        [sym__digits] = ACTIONS(5),
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
        [anon_sym_COLON2] = ACTIONS(5),
        [anon_sym_SEMI] = ACTIONS(5),
        [anon_sym_LT] = ACTIONS(5),
        [anon_sym_EQ] = ACTIONS(5),
        [anon_sym_GT] = ACTIONS(5),
        [anon_sym_QMARK] = ACTIONS(5),
        [anon_sym_AT] = ACTIONS(5),
        [anon_sym_BSLASH] = ACTIONS(5),
        [anon_sym_CARET] = ACTIONS(5),
        [anon_sym__] = ACTIONS(5),
        [anon_sym_BQUOTE] = ACTIONS(5),
        [anon_sym_PIPE] = ACTIONS(5),
        [anon_sym_TILDE] = ACTIONS(5),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(13),
        [sym_email] = ACTIONS(5),
        [anon_sym_http] = ACTIONS(15),
        [anon_sym_https] = ACTIONS(15),
        [anon_sym_file] = ACTIONS(15),
        [anon_sym_ftp] = ACTIONS(15),
        [anon_sym_irc] = ACTIONS(15),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(17),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(19),
        [anon_sym_LT_LT] = ACTIONS(21),
        [anon_sym_STAR2] = ACTIONS(23),
        [anon_sym_STAR_STAR] = ACTIONS(25),
        [anon_sym__2] = ACTIONS(27),
        [anon_sym___] = ACTIONS(29),
        [anon_sym_BQUOTE2] = ACTIONS(31),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(33),
        [anon_sym_POUND2] = ACTIONS(35),
        [anon_sym_POUND_POUND] = ACTIONS(37),
    },
    [2] = {
        [sym_inline_macro] = STATE(3),
        [sym_replacement] = STATE(3),
        [sym__word] = STATE(3),
        [sym__punctuation] = STATE(3),
        [sym_anchor] = STATE(3),
        [sym_auto_link] = STATE(3),
        [sym_link_url] = STATE(22),
        [sym_passthrough] = STATE(3),
        [sym_xref] = STATE(3),
        [sym_emphasis] = STATE(3),
        [sym_ltalic] = STATE(3),
        [sym_monospace] = STATE(3),
        [sym_highlight] = STATE(3),
        [aux_sym_inline_repeat1] = STATE(3),
        [ts_builtin_sym_end] = ACTIONS(39),
        [anon_sym_kbd] = ACTIONS(3),
        [anon_sym_btn] = ACTIONS(3),
        [anon_sym_image] = ACTIONS(3),
        [anon_sym_icon] = ACTIONS(3),
        [anon_sym_pass] = ACTIONS(3),
        [anon_sym_link] = ACTIONS(3),
        [anon_sym_mailto] = ACTIONS(3),
        [anon_sym_menu] = ACTIONS(3),
        [anon_sym_latexmath] = ACTIONS(3),
        [anon_sym_asciimath] = ACTIONS(3),
        [anon_sym_footnote] = ACTIONS(3),
        [anon_sym_footnoteref] = ACTIONS(3),
        [anon_sym_anchor] = ACTIONS(3),
        [anon_sym_xref] = ACTIONS(3),
        [anon_sym_LBRACK] = ACTIONS(41),
        [anon_sym_RBRACK] = ACTIONS(41),
        [anon_sym_LBRACE] = ACTIONS(7),
        [anon_sym_RBRACE] = ACTIONS(41),
        [sym__word_no_digit] = ACTIONS(41),
        [sym__digits] = ACTIONS(41),
        [anon_sym_BANG] = ACTIONS(41),
        [anon_sym_DQUOTE] = ACTIONS(9),
        [anon_sym_POUND] = ACTIONS(41),
        [anon_sym_DOLLAR] = ACTIONS(41),
        [anon_sym_PERCENT] = ACTIONS(41),
        [anon_sym_AMP] = ACTIONS(41),
        [anon_sym_SQUOTE] = ACTIONS(41),
        [anon_sym_LPAREN] = ACTIONS(41),
        [anon_sym_RPAREN] = ACTIONS(41),
        [anon_sym_STAR] = ACTIONS(41),
        [anon_sym_PLUS] = ACTIONS(11),
        [anon_sym_COMMA] = ACTIONS(41),
        [anon_sym_DASH] = ACTIONS(41),
        [anon_sym_DOT] = ACTIONS(41),
        [anon_sym_SLASH] = ACTIONS(41),
        [anon_sym_COLON2] = ACTIONS(41),
        [anon_sym_SEMI] = ACTIONS(41),
        [anon_sym_LT] = ACTIONS(41),
        [anon_sym_EQ] = ACTIONS(41),
        [anon_sym_GT] = ACTIONS(41),
        [anon_sym_QMARK] = ACTIONS(41),
        [anon_sym_AT] = ACTIONS(41),
        [anon_sym_BSLASH] = ACTIONS(41),
        [anon_sym_CARET] = ACTIONS(41),
        [anon_sym__] = ACTIONS(41),
        [anon_sym_BQUOTE] = ACTIONS(41),
        [anon_sym_PIPE] = ACTIONS(41),
        [anon_sym_TILDE] = ACTIONS(41),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(13),
        [sym_email] = ACTIONS(41),
        [anon_sym_http] = ACTIONS(15),
        [anon_sym_https] = ACTIONS(15),
        [anon_sym_file] = ACTIONS(15),
        [anon_sym_ftp] = ACTIONS(15),
        [anon_sym_irc] = ACTIONS(15),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(17),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(19),
        [anon_sym_LT_LT] = ACTIONS(21),
        [anon_sym_STAR2] = ACTIONS(23),
        [anon_sym_STAR_STAR] = ACTIONS(25),
        [anon_sym__2] = ACTIONS(27),
        [anon_sym___] = ACTIONS(29),
        [anon_sym_BQUOTE2] = ACTIONS(31),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(33),
        [anon_sym_POUND2] = ACTIONS(35),
        [anon_sym_POUND_POUND] = ACTIONS(37),
    },
    [3] = {
        [sym_inline_macro] = STATE(3),
        [sym_replacement] = STATE(3),
        [sym__word] = STATE(3),
        [sym__punctuation] = STATE(3),
        [sym_anchor] = STATE(3),
        [sym_auto_link] = STATE(3),
        [sym_link_url] = STATE(22),
        [sym_passthrough] = STATE(3),
        [sym_xref] = STATE(3),
        [sym_emphasis] = STATE(3),
        [sym_ltalic] = STATE(3),
        [sym_monospace] = STATE(3),
        [sym_highlight] = STATE(3),
        [aux_sym_inline_repeat1] = STATE(3),
        [ts_builtin_sym_end] = ACTIONS(43),
        [anon_sym_kbd] = ACTIONS(45),
        [anon_sym_btn] = ACTIONS(45),
        [anon_sym_image] = ACTIONS(45),
        [anon_sym_icon] = ACTIONS(45),
        [anon_sym_pass] = ACTIONS(45),
        [anon_sym_link] = ACTIONS(45),
        [anon_sym_mailto] = ACTIONS(45),
        [anon_sym_menu] = ACTIONS(45),
        [anon_sym_latexmath] = ACTIONS(45),
        [anon_sym_asciimath] = ACTIONS(45),
        [anon_sym_footnote] = ACTIONS(45),
        [anon_sym_footnoteref] = ACTIONS(45),
        [anon_sym_anchor] = ACTIONS(45),
        [anon_sym_xref] = ACTIONS(45),
        [anon_sym_LBRACK] = ACTIONS(48),
        [anon_sym_RBRACK] = ACTIONS(48),
        [anon_sym_LBRACE] = ACTIONS(51),
        [anon_sym_RBRACE] = ACTIONS(48),
        [sym__word_no_digit] = ACTIONS(48),
        [sym__digits] = ACTIONS(48),
        [anon_sym_BANG] = ACTIONS(48),
        [anon_sym_DQUOTE] = ACTIONS(54),
        [anon_sym_POUND] = ACTIONS(48),
        [anon_sym_DOLLAR] = ACTIONS(48),
        [anon_sym_PERCENT] = ACTIONS(48),
        [anon_sym_AMP] = ACTIONS(48),
        [anon_sym_SQUOTE] = ACTIONS(48),
        [anon_sym_LPAREN] = ACTIONS(48),
        [anon_sym_RPAREN] = ACTIONS(48),
        [anon_sym_STAR] = ACTIONS(48),
        [anon_sym_PLUS] = ACTIONS(57),
        [anon_sym_COMMA] = ACTIONS(48),
        [anon_sym_DASH] = ACTIONS(48),
        [anon_sym_DOT] = ACTIONS(48),
        [anon_sym_SLASH] = ACTIONS(48),
        [anon_sym_COLON2] = ACTIONS(48),
        [anon_sym_SEMI] = ACTIONS(48),
        [anon_sym_LT] = ACTIONS(48),
        [anon_sym_EQ] = ACTIONS(48),
        [anon_sym_GT] = ACTIONS(48),
        [anon_sym_QMARK] = ACTIONS(48),
        [anon_sym_AT] = ACTIONS(48),
        [anon_sym_BSLASH] = ACTIONS(48),
        [anon_sym_CARET] = ACTIONS(48),
        [anon_sym__] = ACTIONS(48),
        [anon_sym_BQUOTE] = ACTIONS(48),
        [anon_sym_PIPE] = ACTIONS(48),
        [anon_sym_TILDE] = ACTIONS(48),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(60),
        [sym_email] = ACTIONS(48),
        [anon_sym_http] = ACTIONS(63),
        [anon_sym_https] = ACTIONS(63),
        [anon_sym_file] = ACTIONS(63),
        [anon_sym_ftp] = ACTIONS(63),
        [anon_sym_irc] = ACTIONS(63),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(66),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(69),
        [anon_sym_LT_LT] = ACTIONS(72),
        [anon_sym_STAR2] = ACTIONS(75),
        [anon_sym_STAR_STAR] = ACTIONS(78),
        [anon_sym__2] = ACTIONS(81),
        [anon_sym___] = ACTIONS(84),
        [anon_sym_BQUOTE2] = ACTIONS(87),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(90),
        [anon_sym_POUND2] = ACTIONS(93),
        [anon_sym_POUND_POUND] = ACTIONS(96),
    },
    [4] = {
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_kbd] = ACTIONS(101),
        [anon_sym_btn] = ACTIONS(101),
        [anon_sym_image] = ACTIONS(101),
        [anon_sym_icon] = ACTIONS(101),
        [anon_sym_pass] = ACTIONS(101),
        [anon_sym_link] = ACTIONS(101),
        [anon_sym_mailto] = ACTIONS(101),
        [anon_sym_menu] = ACTIONS(101),
        [anon_sym_latexmath] = ACTIONS(101),
        [anon_sym_asciimath] = ACTIONS(101),
        [anon_sym_footnote] = ACTIONS(101),
        [anon_sym_footnoteref] = ACTIONS(101),
        [anon_sym_anchor] = ACTIONS(101),
        [anon_sym_xref] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(101),
        [anon_sym_RBRACK] = ACTIONS(101),
        [anon_sym_LBRACE] = ACTIONS(101),
        [aux_sym_replacement_token1] = ACTIONS(103),
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
        [anon_sym_COLON2] = ACTIONS(101),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_LT] = ACTIONS(101),
        [anon_sym_EQ] = ACTIONS(101),
        [anon_sym_GT] = ACTIONS(101),
        [anon_sym_QMARK] = ACTIONS(101),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_BSLASH] = ACTIONS(101),
        [anon_sym_CARET] = ACTIONS(101),
        [anon_sym__] = ACTIONS(101),
        [anon_sym_BQUOTE] = ACTIONS(101),
        [anon_sym_PIPE] = ACTIONS(101),
        [anon_sym_TILDE] = ACTIONS(101),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(101),
        [sym_email] = ACTIONS(101),
        [anon_sym_http] = ACTIONS(101),
        [anon_sym_https] = ACTIONS(101),
        [anon_sym_file] = ACTIONS(101),
        [anon_sym_ftp] = ACTIONS(101),
        [anon_sym_irc] = ACTIONS(101),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(101),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(101),
        [anon_sym_LT_LT] = ACTIONS(101),
        [anon_sym_STAR2] = ACTIONS(101),
        [anon_sym_STAR_STAR] = ACTIONS(101),
        [anon_sym__2] = ACTIONS(101),
        [anon_sym___] = ACTIONS(101),
        [anon_sym_BQUOTE2] = ACTIONS(101),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(101),
        [anon_sym_POUND2] = ACTIONS(101),
        [anon_sym_POUND_POUND] = ACTIONS(101),
    },
    [5] = {
        [sym_link_url] = STATE(129),
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_kbd] = ACTIONS(101),
        [anon_sym_btn] = ACTIONS(101),
        [anon_sym_image] = ACTIONS(101),
        [anon_sym_icon] = ACTIONS(101),
        [anon_sym_pass] = ACTIONS(101),
        [anon_sym_link] = ACTIONS(101),
        [anon_sym_mailto] = ACTIONS(101),
        [anon_sym_menu] = ACTIONS(101),
        [anon_sym_latexmath] = ACTIONS(101),
        [anon_sym_asciimath] = ACTIONS(101),
        [anon_sym_footnote] = ACTIONS(101),
        [anon_sym_footnoteref] = ACTIONS(101),
        [anon_sym_anchor] = ACTIONS(101),
        [anon_sym_xref] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(101),
        [anon_sym_RBRACK] = ACTIONS(101),
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
        [anon_sym_COLON2] = ACTIONS(101),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_LT] = ACTIONS(101),
        [anon_sym_EQ] = ACTIONS(101),
        [anon_sym_GT] = ACTIONS(101),
        [anon_sym_QMARK] = ACTIONS(101),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_BSLASH] = ACTIONS(101),
        [anon_sym_CARET] = ACTIONS(101),
        [anon_sym__] = ACTIONS(101),
        [anon_sym_BQUOTE] = ACTIONS(101),
        [anon_sym_PIPE] = ACTIONS(101),
        [anon_sym_TILDE] = ACTIONS(101),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(101),
        [sym_email] = ACTIONS(101),
        [anon_sym_http] = ACTIONS(105),
        [anon_sym_https] = ACTIONS(105),
        [anon_sym_file] = ACTIONS(105),
        [anon_sym_ftp] = ACTIONS(105),
        [anon_sym_irc] = ACTIONS(105),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(101),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(101),
        [anon_sym_LT_LT] = ACTIONS(101),
        [anon_sym_STAR2] = ACTIONS(101),
        [anon_sym_STAR_STAR] = ACTIONS(101),
        [anon_sym__2] = ACTIONS(101),
        [anon_sym___] = ACTIONS(101),
        [anon_sym_BQUOTE2] = ACTIONS(101),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(101),
        [anon_sym_POUND2] = ACTIONS(101),
        [anon_sym_POUND_POUND] = ACTIONS(101),
    },
    [6] = {
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_kbd] = ACTIONS(101),
        [anon_sym_btn] = ACTIONS(101),
        [anon_sym_image] = ACTIONS(101),
        [anon_sym_icon] = ACTIONS(101),
        [anon_sym_pass] = ACTIONS(101),
        [anon_sym_link] = ACTIONS(101),
        [anon_sym_mailto] = ACTIONS(101),
        [anon_sym_menu] = ACTIONS(101),
        [anon_sym_latexmath] = ACTIONS(101),
        [anon_sym_asciimath] = ACTIONS(101),
        [anon_sym_footnote] = ACTIONS(101),
        [anon_sym_footnoteref] = ACTIONS(101),
        [anon_sym_anchor] = ACTIONS(101),
        [anon_sym_xref] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(101),
        [anon_sym_RBRACK] = ACTIONS(101),
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
        [anon_sym_COLON2] = ACTIONS(101),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_LT] = ACTIONS(101),
        [anon_sym_EQ] = ACTIONS(101),
        [anon_sym_GT] = ACTIONS(101),
        [anon_sym_QMARK] = ACTIONS(101),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_BSLASH] = ACTIONS(101),
        [anon_sym_CARET] = ACTIONS(101),
        [anon_sym__] = ACTIONS(101),
        [anon_sym_BQUOTE] = ACTIONS(101),
        [anon_sym_PIPE] = ACTIONS(101),
        [anon_sym_TILDE] = ACTIONS(101),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(101),
        [aux_sym_anchor_token1] = ACTIONS(107),
        [sym_email] = ACTIONS(101),
        [anon_sym_http] = ACTIONS(101),
        [anon_sym_https] = ACTIONS(101),
        [anon_sym_file] = ACTIONS(101),
        [anon_sym_ftp] = ACTIONS(101),
        [anon_sym_irc] = ACTIONS(101),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(101),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(101),
        [anon_sym_LT_LT] = ACTIONS(101),
        [anon_sym_STAR2] = ACTIONS(101),
        [anon_sym_STAR_STAR] = ACTIONS(101),
        [anon_sym__2] = ACTIONS(101),
        [anon_sym___] = ACTIONS(101),
        [anon_sym_BQUOTE2] = ACTIONS(101),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(101),
        [anon_sym_POUND2] = ACTIONS(101),
        [anon_sym_POUND_POUND] = ACTIONS(101),
    },
    [7] = {
        [aux_sym_link_url_repeat1] = STATE(8),
        [ts_builtin_sym_end] = ACTIONS(109),
        [anon_sym_kbd] = ACTIONS(111),
        [anon_sym_btn] = ACTIONS(111),
        [anon_sym_image] = ACTIONS(111),
        [anon_sym_icon] = ACTIONS(111),
        [anon_sym_pass] = ACTIONS(111),
        [anon_sym_link] = ACTIONS(111),
        [anon_sym_mailto] = ACTIONS(111),
        [anon_sym_menu] = ACTIONS(111),
        [anon_sym_latexmath] = ACTIONS(111),
        [anon_sym_asciimath] = ACTIONS(111),
        [anon_sym_footnote] = ACTIONS(111),
        [anon_sym_footnoteref] = ACTIONS(111),
        [anon_sym_anchor] = ACTIONS(111),
        [anon_sym_xref] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_RBRACK] = ACTIONS(111),
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
        [anon_sym_DOT] = ACTIONS(113),
        [anon_sym_SLASH] = ACTIONS(111),
        [anon_sym_COLON2] = ACTIONS(111),
        [anon_sym_SEMI] = ACTIONS(111),
        [anon_sym_LT] = ACTIONS(111),
        [anon_sym_EQ] = ACTIONS(111),
        [anon_sym_GT] = ACTIONS(111),
        [anon_sym_QMARK] = ACTIONS(111),
        [anon_sym_AT] = ACTIONS(111),
        [anon_sym_BSLASH] = ACTIONS(111),
        [anon_sym_CARET] = ACTIONS(111),
        [anon_sym__] = ACTIONS(111),
        [anon_sym_BQUOTE] = ACTIONS(111),
        [anon_sym_PIPE] = ACTIONS(111),
        [anon_sym_TILDE] = ACTIONS(111),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(111),
        [sym_email] = ACTIONS(111),
        [anon_sym_http] = ACTIONS(111),
        [anon_sym_https] = ACTIONS(111),
        [anon_sym_file] = ACTIONS(111),
        [anon_sym_ftp] = ACTIONS(111),
        [anon_sym_irc] = ACTIONS(111),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(111),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(111),
        [anon_sym_LT_LT] = ACTIONS(111),
        [anon_sym_STAR2] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(111),
        [anon_sym__2] = ACTIONS(111),
        [anon_sym___] = ACTIONS(111),
        [anon_sym_BQUOTE2] = ACTIONS(111),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(111),
        [anon_sym_POUND2] = ACTIONS(111),
        [anon_sym_POUND_POUND] = ACTIONS(111),
    },
    [8] = {
        [aux_sym_link_url_repeat1] = STATE(9),
        [ts_builtin_sym_end] = ACTIONS(115),
        [anon_sym_kbd] = ACTIONS(117),
        [anon_sym_btn] = ACTIONS(117),
        [anon_sym_image] = ACTIONS(117),
        [anon_sym_icon] = ACTIONS(117),
        [anon_sym_pass] = ACTIONS(117),
        [anon_sym_link] = ACTIONS(117),
        [anon_sym_mailto] = ACTIONS(117),
        [anon_sym_menu] = ACTIONS(117),
        [anon_sym_latexmath] = ACTIONS(117),
        [anon_sym_asciimath] = ACTIONS(117),
        [anon_sym_footnote] = ACTIONS(117),
        [anon_sym_footnoteref] = ACTIONS(117),
        [anon_sym_anchor] = ACTIONS(117),
        [anon_sym_xref] = ACTIONS(117),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(117),
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
        [anon_sym_DOT] = ACTIONS(113),
        [anon_sym_SLASH] = ACTIONS(117),
        [anon_sym_COLON2] = ACTIONS(117),
        [anon_sym_SEMI] = ACTIONS(117),
        [anon_sym_LT] = ACTIONS(117),
        [anon_sym_EQ] = ACTIONS(117),
        [anon_sym_GT] = ACTIONS(117),
        [anon_sym_QMARK] = ACTIONS(117),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_BSLASH] = ACTIONS(117),
        [anon_sym_CARET] = ACTIONS(117),
        [anon_sym__] = ACTIONS(117),
        [anon_sym_BQUOTE] = ACTIONS(117),
        [anon_sym_PIPE] = ACTIONS(117),
        [anon_sym_TILDE] = ACTIONS(117),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(117),
        [sym_email] = ACTIONS(117),
        [anon_sym_http] = ACTIONS(117),
        [anon_sym_https] = ACTIONS(117),
        [anon_sym_file] = ACTIONS(117),
        [anon_sym_ftp] = ACTIONS(117),
        [anon_sym_irc] = ACTIONS(117),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(117),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(117),
        [anon_sym_LT_LT] = ACTIONS(117),
        [anon_sym_STAR2] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(117),
        [anon_sym__2] = ACTIONS(117),
        [anon_sym___] = ACTIONS(117),
        [anon_sym_BQUOTE2] = ACTIONS(117),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(117),
        [anon_sym_POUND2] = ACTIONS(117),
        [anon_sym_POUND_POUND] = ACTIONS(117),
    },
    [9] = {
        [aux_sym_link_url_repeat1] = STATE(9),
        [ts_builtin_sym_end] = ACTIONS(119),
        [anon_sym_kbd] = ACTIONS(121),
        [anon_sym_btn] = ACTIONS(121),
        [anon_sym_image] = ACTIONS(121),
        [anon_sym_icon] = ACTIONS(121),
        [anon_sym_pass] = ACTIONS(121),
        [anon_sym_link] = ACTIONS(121),
        [anon_sym_mailto] = ACTIONS(121),
        [anon_sym_menu] = ACTIONS(121),
        [anon_sym_latexmath] = ACTIONS(121),
        [anon_sym_asciimath] = ACTIONS(121),
        [anon_sym_footnote] = ACTIONS(121),
        [anon_sym_footnoteref] = ACTIONS(121),
        [anon_sym_anchor] = ACTIONS(121),
        [anon_sym_xref] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_RBRACK] = ACTIONS(121),
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
        [anon_sym_DOT] = ACTIONS(123),
        [anon_sym_SLASH] = ACTIONS(121),
        [anon_sym_COLON2] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_LT] = ACTIONS(121),
        [anon_sym_EQ] = ACTIONS(121),
        [anon_sym_GT] = ACTIONS(121),
        [anon_sym_QMARK] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(121),
        [anon_sym_BSLASH] = ACTIONS(121),
        [anon_sym_CARET] = ACTIONS(121),
        [anon_sym__] = ACTIONS(121),
        [anon_sym_BQUOTE] = ACTIONS(121),
        [anon_sym_PIPE] = ACTIONS(121),
        [anon_sym_TILDE] = ACTIONS(121),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(121),
        [sym_email] = ACTIONS(121),
        [anon_sym_http] = ACTIONS(121),
        [anon_sym_https] = ACTIONS(121),
        [anon_sym_file] = ACTIONS(121),
        [anon_sym_ftp] = ACTIONS(121),
        [anon_sym_irc] = ACTIONS(121),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(121),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(121),
        [anon_sym_LT_LT] = ACTIONS(121),
        [anon_sym_STAR2] = ACTIONS(121),
        [anon_sym_STAR_STAR] = ACTIONS(121),
        [anon_sym__2] = ACTIONS(121),
        [anon_sym___] = ACTIONS(121),
        [anon_sym_BQUOTE2] = ACTIONS(121),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(121),
        [anon_sym_POUND2] = ACTIONS(121),
        [anon_sym_POUND_POUND] = ACTIONS(121),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(126),
        [anon_sym_kbd] = ACTIONS(128),
        [anon_sym_btn] = ACTIONS(128),
        [anon_sym_image] = ACTIONS(128),
        [anon_sym_icon] = ACTIONS(128),
        [anon_sym_pass] = ACTIONS(128),
        [anon_sym_link] = ACTIONS(128),
        [anon_sym_mailto] = ACTIONS(128),
        [anon_sym_menu] = ACTIONS(128),
        [anon_sym_latexmath] = ACTIONS(128),
        [anon_sym_asciimath] = ACTIONS(128),
        [anon_sym_footnote] = ACTIONS(128),
        [anon_sym_footnoteref] = ACTIONS(128),
        [anon_sym_anchor] = ACTIONS(128),
        [anon_sym_xref] = ACTIONS(128),
        [anon_sym_LBRACK] = ACTIONS(128),
        [anon_sym_RBRACK] = ACTIONS(128),
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
        [anon_sym_COLON2] = ACTIONS(128),
        [anon_sym_SEMI] = ACTIONS(128),
        [anon_sym_LT] = ACTIONS(128),
        [anon_sym_EQ] = ACTIONS(128),
        [anon_sym_GT] = ACTIONS(128),
        [anon_sym_QMARK] = ACTIONS(128),
        [anon_sym_AT] = ACTIONS(128),
        [anon_sym_BSLASH] = ACTIONS(128),
        [anon_sym_CARET] = ACTIONS(128),
        [anon_sym__] = ACTIONS(128),
        [anon_sym_BQUOTE] = ACTIONS(128),
        [anon_sym_PIPE] = ACTIONS(128),
        [anon_sym_TILDE] = ACTIONS(128),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(128),
        [sym_email] = ACTIONS(128),
        [anon_sym_http] = ACTIONS(128),
        [anon_sym_https] = ACTIONS(128),
        [anon_sym_file] = ACTIONS(128),
        [anon_sym_ftp] = ACTIONS(128),
        [anon_sym_irc] = ACTIONS(128),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(128),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(128),
        [anon_sym_LT_LT] = ACTIONS(128),
        [anon_sym_STAR2] = ACTIONS(128),
        [anon_sym_STAR_STAR] = ACTIONS(128),
        [anon_sym__2] = ACTIONS(128),
        [anon_sym___] = ACTIONS(128),
        [anon_sym_BQUOTE2] = ACTIONS(128),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(128),
        [anon_sym_POUND2] = ACTIONS(128),
        [anon_sym_POUND_POUND] = ACTIONS(128),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(130),
        [anon_sym_kbd] = ACTIONS(132),
        [anon_sym_btn] = ACTIONS(132),
        [anon_sym_image] = ACTIONS(132),
        [anon_sym_icon] = ACTIONS(132),
        [anon_sym_pass] = ACTIONS(132),
        [anon_sym_link] = ACTIONS(132),
        [anon_sym_mailto] = ACTIONS(132),
        [anon_sym_menu] = ACTIONS(132),
        [anon_sym_latexmath] = ACTIONS(132),
        [anon_sym_asciimath] = ACTIONS(132),
        [anon_sym_footnote] = ACTIONS(132),
        [anon_sym_footnoteref] = ACTIONS(132),
        [anon_sym_anchor] = ACTIONS(132),
        [anon_sym_xref] = ACTIONS(132),
        [anon_sym_LBRACK] = ACTIONS(132),
        [anon_sym_RBRACK] = ACTIONS(132),
        [anon_sym_LBRACE] = ACTIONS(132),
        [anon_sym_RBRACE] = ACTIONS(132),
        [sym__word_no_digit] = ACTIONS(132),
        [sym__digits] = ACTIONS(132),
        [anon_sym_BANG] = ACTIONS(132),
        [anon_sym_DQUOTE] = ACTIONS(132),
        [anon_sym_POUND] = ACTIONS(132),
        [anon_sym_DOLLAR] = ACTIONS(132),
        [anon_sym_PERCENT] = ACTIONS(132),
        [anon_sym_AMP] = ACTIONS(132),
        [anon_sym_SQUOTE] = ACTIONS(132),
        [anon_sym_LPAREN] = ACTIONS(132),
        [anon_sym_RPAREN] = ACTIONS(132),
        [anon_sym_STAR] = ACTIONS(132),
        [anon_sym_PLUS] = ACTIONS(132),
        [anon_sym_COMMA] = ACTIONS(132),
        [anon_sym_DASH] = ACTIONS(132),
        [anon_sym_DOT] = ACTIONS(132),
        [anon_sym_SLASH] = ACTIONS(132),
        [anon_sym_COLON2] = ACTIONS(132),
        [anon_sym_SEMI] = ACTIONS(132),
        [anon_sym_LT] = ACTIONS(132),
        [anon_sym_EQ] = ACTIONS(132),
        [anon_sym_GT] = ACTIONS(132),
        [anon_sym_QMARK] = ACTIONS(132),
        [anon_sym_AT] = ACTIONS(132),
        [anon_sym_BSLASH] = ACTIONS(132),
        [anon_sym_CARET] = ACTIONS(132),
        [anon_sym__] = ACTIONS(132),
        [anon_sym_BQUOTE] = ACTIONS(132),
        [anon_sym_PIPE] = ACTIONS(132),
        [anon_sym_TILDE] = ACTIONS(132),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(132),
        [sym_email] = ACTIONS(132),
        [anon_sym_http] = ACTIONS(132),
        [anon_sym_https] = ACTIONS(132),
        [anon_sym_file] = ACTIONS(132),
        [anon_sym_ftp] = ACTIONS(132),
        [anon_sym_irc] = ACTIONS(132),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(132),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(132),
        [anon_sym_LT_LT] = ACTIONS(132),
        [anon_sym_STAR2] = ACTIONS(132),
        [anon_sym_STAR_STAR] = ACTIONS(132),
        [anon_sym__2] = ACTIONS(132),
        [anon_sym___] = ACTIONS(132),
        [anon_sym_BQUOTE2] = ACTIONS(132),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(132),
        [anon_sym_POUND2] = ACTIONS(132),
        [anon_sym_POUND_POUND] = ACTIONS(132),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(134),
        [anon_sym_kbd] = ACTIONS(136),
        [anon_sym_btn] = ACTIONS(136),
        [anon_sym_image] = ACTIONS(136),
        [anon_sym_icon] = ACTIONS(136),
        [anon_sym_pass] = ACTIONS(136),
        [anon_sym_link] = ACTIONS(136),
        [anon_sym_mailto] = ACTIONS(136),
        [anon_sym_menu] = ACTIONS(136),
        [anon_sym_latexmath] = ACTIONS(136),
        [anon_sym_asciimath] = ACTIONS(136),
        [anon_sym_footnote] = ACTIONS(136),
        [anon_sym_footnoteref] = ACTIONS(136),
        [anon_sym_anchor] = ACTIONS(136),
        [anon_sym_xref] = ACTIONS(136),
        [anon_sym_LBRACK] = ACTIONS(136),
        [anon_sym_RBRACK] = ACTIONS(136),
        [anon_sym_LBRACE] = ACTIONS(136),
        [anon_sym_RBRACE] = ACTIONS(136),
        [sym__word_no_digit] = ACTIONS(136),
        [sym__digits] = ACTIONS(136),
        [anon_sym_BANG] = ACTIONS(136),
        [anon_sym_DQUOTE] = ACTIONS(136),
        [anon_sym_POUND] = ACTIONS(136),
        [anon_sym_DOLLAR] = ACTIONS(136),
        [anon_sym_PERCENT] = ACTIONS(136),
        [anon_sym_AMP] = ACTIONS(136),
        [anon_sym_SQUOTE] = ACTIONS(136),
        [anon_sym_LPAREN] = ACTIONS(136),
        [anon_sym_RPAREN] = ACTIONS(136),
        [anon_sym_STAR] = ACTIONS(136),
        [anon_sym_PLUS] = ACTIONS(136),
        [anon_sym_COMMA] = ACTIONS(136),
        [anon_sym_DASH] = ACTIONS(136),
        [anon_sym_DOT] = ACTIONS(136),
        [anon_sym_SLASH] = ACTIONS(136),
        [anon_sym_COLON2] = ACTIONS(136),
        [anon_sym_SEMI] = ACTIONS(136),
        [anon_sym_LT] = ACTIONS(136),
        [anon_sym_EQ] = ACTIONS(136),
        [anon_sym_GT] = ACTIONS(136),
        [anon_sym_QMARK] = ACTIONS(136),
        [anon_sym_AT] = ACTIONS(136),
        [anon_sym_BSLASH] = ACTIONS(136),
        [anon_sym_CARET] = ACTIONS(136),
        [anon_sym__] = ACTIONS(136),
        [anon_sym_BQUOTE] = ACTIONS(136),
        [anon_sym_PIPE] = ACTIONS(136),
        [anon_sym_TILDE] = ACTIONS(136),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(136),
        [sym_email] = ACTIONS(136),
        [anon_sym_http] = ACTIONS(136),
        [anon_sym_https] = ACTIONS(136),
        [anon_sym_file] = ACTIONS(136),
        [anon_sym_ftp] = ACTIONS(136),
        [anon_sym_irc] = ACTIONS(136),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(136),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(136),
        [anon_sym_LT_LT] = ACTIONS(136),
        [anon_sym_STAR2] = ACTIONS(136),
        [anon_sym_STAR_STAR] = ACTIONS(136),
        [anon_sym__2] = ACTIONS(136),
        [anon_sym___] = ACTIONS(136),
        [anon_sym_BQUOTE2] = ACTIONS(136),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(136),
        [anon_sym_POUND2] = ACTIONS(136),
        [anon_sym_POUND_POUND] = ACTIONS(136),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(138),
        [anon_sym_kbd] = ACTIONS(140),
        [anon_sym_btn] = ACTIONS(140),
        [anon_sym_image] = ACTIONS(140),
        [anon_sym_icon] = ACTIONS(140),
        [anon_sym_pass] = ACTIONS(140),
        [anon_sym_link] = ACTIONS(140),
        [anon_sym_mailto] = ACTIONS(140),
        [anon_sym_menu] = ACTIONS(140),
        [anon_sym_latexmath] = ACTIONS(140),
        [anon_sym_asciimath] = ACTIONS(140),
        [anon_sym_footnote] = ACTIONS(140),
        [anon_sym_footnoteref] = ACTIONS(140),
        [anon_sym_anchor] = ACTIONS(140),
        [anon_sym_xref] = ACTIONS(140),
        [anon_sym_LBRACK] = ACTIONS(140),
        [anon_sym_RBRACK] = ACTIONS(140),
        [anon_sym_LBRACE] = ACTIONS(140),
        [anon_sym_RBRACE] = ACTIONS(140),
        [sym__word_no_digit] = ACTIONS(140),
        [sym__digits] = ACTIONS(140),
        [anon_sym_BANG] = ACTIONS(140),
        [anon_sym_DQUOTE] = ACTIONS(140),
        [anon_sym_POUND] = ACTIONS(140),
        [anon_sym_DOLLAR] = ACTIONS(140),
        [anon_sym_PERCENT] = ACTIONS(140),
        [anon_sym_AMP] = ACTIONS(140),
        [anon_sym_SQUOTE] = ACTIONS(140),
        [anon_sym_LPAREN] = ACTIONS(140),
        [anon_sym_RPAREN] = ACTIONS(140),
        [anon_sym_STAR] = ACTIONS(140),
        [anon_sym_PLUS] = ACTIONS(140),
        [anon_sym_COMMA] = ACTIONS(140),
        [anon_sym_DASH] = ACTIONS(140),
        [anon_sym_DOT] = ACTIONS(140),
        [anon_sym_SLASH] = ACTIONS(140),
        [anon_sym_COLON2] = ACTIONS(140),
        [anon_sym_SEMI] = ACTIONS(140),
        [anon_sym_LT] = ACTIONS(140),
        [anon_sym_EQ] = ACTIONS(140),
        [anon_sym_GT] = ACTIONS(140),
        [anon_sym_QMARK] = ACTIONS(140),
        [anon_sym_AT] = ACTIONS(140),
        [anon_sym_BSLASH] = ACTIONS(140),
        [anon_sym_CARET] = ACTIONS(140),
        [anon_sym__] = ACTIONS(140),
        [anon_sym_BQUOTE] = ACTIONS(140),
        [anon_sym_PIPE] = ACTIONS(140),
        [anon_sym_TILDE] = ACTIONS(140),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(140),
        [sym_email] = ACTIONS(140),
        [anon_sym_http] = ACTIONS(140),
        [anon_sym_https] = ACTIONS(140),
        [anon_sym_file] = ACTIONS(140),
        [anon_sym_ftp] = ACTIONS(140),
        [anon_sym_irc] = ACTIONS(140),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(140),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(140),
        [anon_sym_LT_LT] = ACTIONS(140),
        [anon_sym_STAR2] = ACTIONS(140),
        [anon_sym_STAR_STAR] = ACTIONS(140),
        [anon_sym__2] = ACTIONS(140),
        [anon_sym___] = ACTIONS(140),
        [anon_sym_BQUOTE2] = ACTIONS(140),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(140),
        [anon_sym_POUND2] = ACTIONS(140),
        [anon_sym_POUND_POUND] = ACTIONS(140),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(142),
        [anon_sym_kbd] = ACTIONS(144),
        [anon_sym_btn] = ACTIONS(144),
        [anon_sym_image] = ACTIONS(144),
        [anon_sym_icon] = ACTIONS(144),
        [anon_sym_pass] = ACTIONS(144),
        [anon_sym_link] = ACTIONS(144),
        [anon_sym_mailto] = ACTIONS(144),
        [anon_sym_menu] = ACTIONS(144),
        [anon_sym_latexmath] = ACTIONS(144),
        [anon_sym_asciimath] = ACTIONS(144),
        [anon_sym_footnote] = ACTIONS(144),
        [anon_sym_footnoteref] = ACTIONS(144),
        [anon_sym_anchor] = ACTIONS(144),
        [anon_sym_xref] = ACTIONS(144),
        [anon_sym_LBRACK] = ACTIONS(144),
        [anon_sym_RBRACK] = ACTIONS(144),
        [anon_sym_LBRACE] = ACTIONS(144),
        [anon_sym_RBRACE] = ACTIONS(144),
        [sym__word_no_digit] = ACTIONS(144),
        [sym__digits] = ACTIONS(144),
        [anon_sym_BANG] = ACTIONS(144),
        [anon_sym_DQUOTE] = ACTIONS(144),
        [anon_sym_POUND] = ACTIONS(144),
        [anon_sym_DOLLAR] = ACTIONS(144),
        [anon_sym_PERCENT] = ACTIONS(144),
        [anon_sym_AMP] = ACTIONS(144),
        [anon_sym_SQUOTE] = ACTIONS(144),
        [anon_sym_LPAREN] = ACTIONS(144),
        [anon_sym_RPAREN] = ACTIONS(144),
        [anon_sym_STAR] = ACTIONS(144),
        [anon_sym_PLUS] = ACTIONS(144),
        [anon_sym_COMMA] = ACTIONS(144),
        [anon_sym_DASH] = ACTIONS(144),
        [anon_sym_DOT] = ACTIONS(144),
        [anon_sym_SLASH] = ACTIONS(144),
        [anon_sym_COLON2] = ACTIONS(144),
        [anon_sym_SEMI] = ACTIONS(144),
        [anon_sym_LT] = ACTIONS(144),
        [anon_sym_EQ] = ACTIONS(144),
        [anon_sym_GT] = ACTIONS(144),
        [anon_sym_QMARK] = ACTIONS(144),
        [anon_sym_AT] = ACTIONS(144),
        [anon_sym_BSLASH] = ACTIONS(144),
        [anon_sym_CARET] = ACTIONS(144),
        [anon_sym__] = ACTIONS(144),
        [anon_sym_BQUOTE] = ACTIONS(144),
        [anon_sym_PIPE] = ACTIONS(144),
        [anon_sym_TILDE] = ACTIONS(144),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(144),
        [sym_email] = ACTIONS(144),
        [anon_sym_http] = ACTIONS(144),
        [anon_sym_https] = ACTIONS(144),
        [anon_sym_file] = ACTIONS(144),
        [anon_sym_ftp] = ACTIONS(144),
        [anon_sym_irc] = ACTIONS(144),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(144),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(144),
        [anon_sym_LT_LT] = ACTIONS(144),
        [anon_sym_STAR2] = ACTIONS(144),
        [anon_sym_STAR_STAR] = ACTIONS(144),
        [anon_sym__2] = ACTIONS(144),
        [anon_sym___] = ACTIONS(144),
        [anon_sym_BQUOTE2] = ACTIONS(144),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(144),
        [anon_sym_POUND2] = ACTIONS(144),
        [anon_sym_POUND_POUND] = ACTIONS(144),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(119),
        [anon_sym_kbd] = ACTIONS(121),
        [anon_sym_btn] = ACTIONS(121),
        [anon_sym_image] = ACTIONS(121),
        [anon_sym_icon] = ACTIONS(121),
        [anon_sym_pass] = ACTIONS(121),
        [anon_sym_link] = ACTIONS(121),
        [anon_sym_mailto] = ACTIONS(121),
        [anon_sym_menu] = ACTIONS(121),
        [anon_sym_latexmath] = ACTIONS(121),
        [anon_sym_asciimath] = ACTIONS(121),
        [anon_sym_footnote] = ACTIONS(121),
        [anon_sym_footnoteref] = ACTIONS(121),
        [anon_sym_anchor] = ACTIONS(121),
        [anon_sym_xref] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_RBRACK] = ACTIONS(121),
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
        [anon_sym_COLON2] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_LT] = ACTIONS(121),
        [anon_sym_EQ] = ACTIONS(121),
        [anon_sym_GT] = ACTIONS(121),
        [anon_sym_QMARK] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(121),
        [anon_sym_BSLASH] = ACTIONS(121),
        [anon_sym_CARET] = ACTIONS(121),
        [anon_sym__] = ACTIONS(121),
        [anon_sym_BQUOTE] = ACTIONS(121),
        [anon_sym_PIPE] = ACTIONS(121),
        [anon_sym_TILDE] = ACTIONS(121),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(121),
        [sym_email] = ACTIONS(121),
        [anon_sym_http] = ACTIONS(121),
        [anon_sym_https] = ACTIONS(121),
        [anon_sym_file] = ACTIONS(121),
        [anon_sym_ftp] = ACTIONS(121),
        [anon_sym_irc] = ACTIONS(121),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(121),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(121),
        [anon_sym_LT_LT] = ACTIONS(121),
        [anon_sym_STAR2] = ACTIONS(121),
        [anon_sym_STAR_STAR] = ACTIONS(121),
        [anon_sym__2] = ACTIONS(121),
        [anon_sym___] = ACTIONS(121),
        [anon_sym_BQUOTE2] = ACTIONS(121),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(121),
        [anon_sym_POUND2] = ACTIONS(121),
        [anon_sym_POUND_POUND] = ACTIONS(121),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(146),
        [anon_sym_kbd] = ACTIONS(148),
        [anon_sym_btn] = ACTIONS(148),
        [anon_sym_image] = ACTIONS(148),
        [anon_sym_icon] = ACTIONS(148),
        [anon_sym_pass] = ACTIONS(148),
        [anon_sym_link] = ACTIONS(148),
        [anon_sym_mailto] = ACTIONS(148),
        [anon_sym_menu] = ACTIONS(148),
        [anon_sym_latexmath] = ACTIONS(148),
        [anon_sym_asciimath] = ACTIONS(148),
        [anon_sym_footnote] = ACTIONS(148),
        [anon_sym_footnoteref] = ACTIONS(148),
        [anon_sym_anchor] = ACTIONS(148),
        [anon_sym_xref] = ACTIONS(148),
        [anon_sym_LBRACK] = ACTIONS(148),
        [anon_sym_RBRACK] = ACTIONS(148),
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
        [anon_sym_COLON2] = ACTIONS(148),
        [anon_sym_SEMI] = ACTIONS(148),
        [anon_sym_LT] = ACTIONS(148),
        [anon_sym_EQ] = ACTIONS(148),
        [anon_sym_GT] = ACTIONS(148),
        [anon_sym_QMARK] = ACTIONS(148),
        [anon_sym_AT] = ACTIONS(148),
        [anon_sym_BSLASH] = ACTIONS(148),
        [anon_sym_CARET] = ACTIONS(148),
        [anon_sym__] = ACTIONS(148),
        [anon_sym_BQUOTE] = ACTIONS(148),
        [anon_sym_PIPE] = ACTIONS(148),
        [anon_sym_TILDE] = ACTIONS(148),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(148),
        [sym_email] = ACTIONS(148),
        [anon_sym_http] = ACTIONS(148),
        [anon_sym_https] = ACTIONS(148),
        [anon_sym_file] = ACTIONS(148),
        [anon_sym_ftp] = ACTIONS(148),
        [anon_sym_irc] = ACTIONS(148),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(148),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(148),
        [anon_sym_LT_LT] = ACTIONS(148),
        [anon_sym_STAR2] = ACTIONS(148),
        [anon_sym_STAR_STAR] = ACTIONS(148),
        [anon_sym__2] = ACTIONS(148),
        [anon_sym___] = ACTIONS(148),
        [anon_sym_BQUOTE2] = ACTIONS(148),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(148),
        [anon_sym_POUND2] = ACTIONS(148),
        [anon_sym_POUND_POUND] = ACTIONS(148),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(150),
        [anon_sym_kbd] = ACTIONS(152),
        [anon_sym_btn] = ACTIONS(152),
        [anon_sym_image] = ACTIONS(152),
        [anon_sym_icon] = ACTIONS(152),
        [anon_sym_pass] = ACTIONS(152),
        [anon_sym_link] = ACTIONS(152),
        [anon_sym_mailto] = ACTIONS(152),
        [anon_sym_menu] = ACTIONS(152),
        [anon_sym_latexmath] = ACTIONS(152),
        [anon_sym_asciimath] = ACTIONS(152),
        [anon_sym_footnote] = ACTIONS(152),
        [anon_sym_footnoteref] = ACTIONS(152),
        [anon_sym_anchor] = ACTIONS(152),
        [anon_sym_xref] = ACTIONS(152),
        [anon_sym_LBRACK] = ACTIONS(152),
        [anon_sym_RBRACK] = ACTIONS(152),
        [anon_sym_LBRACE] = ACTIONS(152),
        [anon_sym_RBRACE] = ACTIONS(152),
        [sym__word_no_digit] = ACTIONS(152),
        [sym__digits] = ACTIONS(152),
        [anon_sym_BANG] = ACTIONS(152),
        [anon_sym_DQUOTE] = ACTIONS(152),
        [anon_sym_POUND] = ACTIONS(152),
        [anon_sym_DOLLAR] = ACTIONS(152),
        [anon_sym_PERCENT] = ACTIONS(152),
        [anon_sym_AMP] = ACTIONS(152),
        [anon_sym_SQUOTE] = ACTIONS(152),
        [anon_sym_LPAREN] = ACTIONS(152),
        [anon_sym_RPAREN] = ACTIONS(152),
        [anon_sym_STAR] = ACTIONS(152),
        [anon_sym_PLUS] = ACTIONS(152),
        [anon_sym_COMMA] = ACTIONS(152),
        [anon_sym_DASH] = ACTIONS(152),
        [anon_sym_DOT] = ACTIONS(152),
        [anon_sym_SLASH] = ACTIONS(152),
        [anon_sym_COLON2] = ACTIONS(152),
        [anon_sym_SEMI] = ACTIONS(152),
        [anon_sym_LT] = ACTIONS(152),
        [anon_sym_EQ] = ACTIONS(152),
        [anon_sym_GT] = ACTIONS(152),
        [anon_sym_QMARK] = ACTIONS(152),
        [anon_sym_AT] = ACTIONS(152),
        [anon_sym_BSLASH] = ACTIONS(152),
        [anon_sym_CARET] = ACTIONS(152),
        [anon_sym__] = ACTIONS(152),
        [anon_sym_BQUOTE] = ACTIONS(152),
        [anon_sym_PIPE] = ACTIONS(152),
        [anon_sym_TILDE] = ACTIONS(152),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(152),
        [sym_email] = ACTIONS(152),
        [anon_sym_http] = ACTIONS(152),
        [anon_sym_https] = ACTIONS(152),
        [anon_sym_file] = ACTIONS(152),
        [anon_sym_ftp] = ACTIONS(152),
        [anon_sym_irc] = ACTIONS(152),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(152),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(152),
        [anon_sym_LT_LT] = ACTIONS(152),
        [anon_sym_STAR2] = ACTIONS(152),
        [anon_sym_STAR_STAR] = ACTIONS(152),
        [anon_sym__2] = ACTIONS(152),
        [anon_sym___] = ACTIONS(152),
        [anon_sym_BQUOTE2] = ACTIONS(152),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(152),
        [anon_sym_POUND2] = ACTIONS(152),
        [anon_sym_POUND_POUND] = ACTIONS(152),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(154),
        [anon_sym_kbd] = ACTIONS(156),
        [anon_sym_btn] = ACTIONS(156),
        [anon_sym_image] = ACTIONS(156),
        [anon_sym_icon] = ACTIONS(156),
        [anon_sym_pass] = ACTIONS(156),
        [anon_sym_link] = ACTIONS(156),
        [anon_sym_mailto] = ACTIONS(156),
        [anon_sym_menu] = ACTIONS(156),
        [anon_sym_latexmath] = ACTIONS(156),
        [anon_sym_asciimath] = ACTIONS(156),
        [anon_sym_footnote] = ACTIONS(156),
        [anon_sym_footnoteref] = ACTIONS(156),
        [anon_sym_anchor] = ACTIONS(156),
        [anon_sym_xref] = ACTIONS(156),
        [anon_sym_LBRACK] = ACTIONS(156),
        [anon_sym_RBRACK] = ACTIONS(156),
        [anon_sym_LBRACE] = ACTIONS(156),
        [anon_sym_RBRACE] = ACTIONS(156),
        [sym__word_no_digit] = ACTIONS(156),
        [sym__digits] = ACTIONS(156),
        [anon_sym_BANG] = ACTIONS(156),
        [anon_sym_DQUOTE] = ACTIONS(156),
        [anon_sym_POUND] = ACTIONS(156),
        [anon_sym_DOLLAR] = ACTIONS(156),
        [anon_sym_PERCENT] = ACTIONS(156),
        [anon_sym_AMP] = ACTIONS(156),
        [anon_sym_SQUOTE] = ACTIONS(156),
        [anon_sym_LPAREN] = ACTIONS(156),
        [anon_sym_RPAREN] = ACTIONS(156),
        [anon_sym_STAR] = ACTIONS(156),
        [anon_sym_PLUS] = ACTIONS(156),
        [anon_sym_COMMA] = ACTIONS(156),
        [anon_sym_DASH] = ACTIONS(156),
        [anon_sym_DOT] = ACTIONS(156),
        [anon_sym_SLASH] = ACTIONS(156),
        [anon_sym_COLON2] = ACTIONS(156),
        [anon_sym_SEMI] = ACTIONS(156),
        [anon_sym_LT] = ACTIONS(156),
        [anon_sym_EQ] = ACTIONS(156),
        [anon_sym_GT] = ACTIONS(156),
        [anon_sym_QMARK] = ACTIONS(156),
        [anon_sym_AT] = ACTIONS(156),
        [anon_sym_BSLASH] = ACTIONS(156),
        [anon_sym_CARET] = ACTIONS(156),
        [anon_sym__] = ACTIONS(156),
        [anon_sym_BQUOTE] = ACTIONS(156),
        [anon_sym_PIPE] = ACTIONS(156),
        [anon_sym_TILDE] = ACTIONS(156),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(156),
        [sym_email] = ACTIONS(156),
        [anon_sym_http] = ACTIONS(156),
        [anon_sym_https] = ACTIONS(156),
        [anon_sym_file] = ACTIONS(156),
        [anon_sym_ftp] = ACTIONS(156),
        [anon_sym_irc] = ACTIONS(156),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(156),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(156),
        [anon_sym_LT_LT] = ACTIONS(156),
        [anon_sym_STAR2] = ACTIONS(156),
        [anon_sym_STAR_STAR] = ACTIONS(156),
        [anon_sym__2] = ACTIONS(156),
        [anon_sym___] = ACTIONS(156),
        [anon_sym_BQUOTE2] = ACTIONS(156),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(156),
        [anon_sym_POUND2] = ACTIONS(156),
        [anon_sym_POUND_POUND] = ACTIONS(156),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(158),
        [anon_sym_kbd] = ACTIONS(160),
        [anon_sym_btn] = ACTIONS(160),
        [anon_sym_image] = ACTIONS(160),
        [anon_sym_icon] = ACTIONS(160),
        [anon_sym_pass] = ACTIONS(160),
        [anon_sym_link] = ACTIONS(160),
        [anon_sym_mailto] = ACTIONS(160),
        [anon_sym_menu] = ACTIONS(160),
        [anon_sym_latexmath] = ACTIONS(160),
        [anon_sym_asciimath] = ACTIONS(160),
        [anon_sym_footnote] = ACTIONS(160),
        [anon_sym_footnoteref] = ACTIONS(160),
        [anon_sym_anchor] = ACTIONS(160),
        [anon_sym_xref] = ACTIONS(160),
        [anon_sym_LBRACK] = ACTIONS(160),
        [anon_sym_RBRACK] = ACTIONS(160),
        [anon_sym_LBRACE] = ACTIONS(160),
        [anon_sym_RBRACE] = ACTIONS(160),
        [sym__word_no_digit] = ACTIONS(160),
        [sym__digits] = ACTIONS(160),
        [anon_sym_BANG] = ACTIONS(160),
        [anon_sym_DQUOTE] = ACTIONS(160),
        [anon_sym_POUND] = ACTIONS(160),
        [anon_sym_DOLLAR] = ACTIONS(160),
        [anon_sym_PERCENT] = ACTIONS(160),
        [anon_sym_AMP] = ACTIONS(160),
        [anon_sym_SQUOTE] = ACTIONS(160),
        [anon_sym_LPAREN] = ACTIONS(160),
        [anon_sym_RPAREN] = ACTIONS(160),
        [anon_sym_STAR] = ACTIONS(160),
        [anon_sym_PLUS] = ACTIONS(160),
        [anon_sym_COMMA] = ACTIONS(160),
        [anon_sym_DASH] = ACTIONS(160),
        [anon_sym_DOT] = ACTIONS(160),
        [anon_sym_SLASH] = ACTIONS(160),
        [anon_sym_COLON2] = ACTIONS(160),
        [anon_sym_SEMI] = ACTIONS(160),
        [anon_sym_LT] = ACTIONS(160),
        [anon_sym_EQ] = ACTIONS(160),
        [anon_sym_GT] = ACTIONS(160),
        [anon_sym_QMARK] = ACTIONS(160),
        [anon_sym_AT] = ACTIONS(160),
        [anon_sym_BSLASH] = ACTIONS(160),
        [anon_sym_CARET] = ACTIONS(160),
        [anon_sym__] = ACTIONS(160),
        [anon_sym_BQUOTE] = ACTIONS(160),
        [anon_sym_PIPE] = ACTIONS(160),
        [anon_sym_TILDE] = ACTIONS(160),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(160),
        [sym_email] = ACTIONS(160),
        [anon_sym_http] = ACTIONS(160),
        [anon_sym_https] = ACTIONS(160),
        [anon_sym_file] = ACTIONS(160),
        [anon_sym_ftp] = ACTIONS(160),
        [anon_sym_irc] = ACTIONS(160),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(160),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(160),
        [anon_sym_LT_LT] = ACTIONS(160),
        [anon_sym_STAR2] = ACTIONS(160),
        [anon_sym_STAR_STAR] = ACTIONS(160),
        [anon_sym__2] = ACTIONS(160),
        [anon_sym___] = ACTIONS(160),
        [anon_sym_BQUOTE2] = ACTIONS(160),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(160),
        [anon_sym_POUND2] = ACTIONS(160),
        [anon_sym_POUND_POUND] = ACTIONS(160),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(162),
        [anon_sym_kbd] = ACTIONS(164),
        [anon_sym_btn] = ACTIONS(164),
        [anon_sym_image] = ACTIONS(164),
        [anon_sym_icon] = ACTIONS(164),
        [anon_sym_pass] = ACTIONS(164),
        [anon_sym_link] = ACTIONS(164),
        [anon_sym_mailto] = ACTIONS(164),
        [anon_sym_menu] = ACTIONS(164),
        [anon_sym_latexmath] = ACTIONS(164),
        [anon_sym_asciimath] = ACTIONS(164),
        [anon_sym_footnote] = ACTIONS(164),
        [anon_sym_footnoteref] = ACTIONS(164),
        [anon_sym_anchor] = ACTIONS(164),
        [anon_sym_xref] = ACTIONS(164),
        [anon_sym_LBRACK] = ACTIONS(164),
        [anon_sym_RBRACK] = ACTIONS(164),
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
        [anon_sym_DOT] = ACTIONS(164),
        [anon_sym_SLASH] = ACTIONS(164),
        [anon_sym_COLON2] = ACTIONS(164),
        [anon_sym_SEMI] = ACTIONS(164),
        [anon_sym_LT] = ACTIONS(164),
        [anon_sym_EQ] = ACTIONS(164),
        [anon_sym_GT] = ACTIONS(164),
        [anon_sym_QMARK] = ACTIONS(164),
        [anon_sym_AT] = ACTIONS(164),
        [anon_sym_BSLASH] = ACTIONS(164),
        [anon_sym_CARET] = ACTIONS(164),
        [anon_sym__] = ACTIONS(164),
        [anon_sym_BQUOTE] = ACTIONS(164),
        [anon_sym_PIPE] = ACTIONS(164),
        [anon_sym_TILDE] = ACTIONS(164),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(164),
        [sym_email] = ACTIONS(164),
        [anon_sym_http] = ACTIONS(164),
        [anon_sym_https] = ACTIONS(164),
        [anon_sym_file] = ACTIONS(164),
        [anon_sym_ftp] = ACTIONS(164),
        [anon_sym_irc] = ACTIONS(164),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(164),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(164),
        [anon_sym_LT_LT] = ACTIONS(164),
        [anon_sym_STAR2] = ACTIONS(164),
        [anon_sym_STAR_STAR] = ACTIONS(164),
        [anon_sym__2] = ACTIONS(164),
        [anon_sym___] = ACTIONS(164),
        [anon_sym_BQUOTE2] = ACTIONS(164),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(164),
        [anon_sym_POUND2] = ACTIONS(164),
        [anon_sym_POUND_POUND] = ACTIONS(164),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(166),
        [anon_sym_kbd] = ACTIONS(168),
        [anon_sym_btn] = ACTIONS(168),
        [anon_sym_image] = ACTIONS(168),
        [anon_sym_icon] = ACTIONS(168),
        [anon_sym_pass] = ACTIONS(168),
        [anon_sym_link] = ACTIONS(168),
        [anon_sym_mailto] = ACTIONS(168),
        [anon_sym_menu] = ACTIONS(168),
        [anon_sym_latexmath] = ACTIONS(168),
        [anon_sym_asciimath] = ACTIONS(168),
        [anon_sym_footnote] = ACTIONS(168),
        [anon_sym_footnoteref] = ACTIONS(168),
        [anon_sym_anchor] = ACTIONS(168),
        [anon_sym_xref] = ACTIONS(168),
        [anon_sym_LBRACK] = ACTIONS(168),
        [anon_sym_RBRACK] = ACTIONS(168),
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
        [anon_sym_COLON2] = ACTIONS(168),
        [anon_sym_SEMI] = ACTIONS(168),
        [anon_sym_LT] = ACTIONS(168),
        [anon_sym_EQ] = ACTIONS(168),
        [anon_sym_GT] = ACTIONS(168),
        [anon_sym_QMARK] = ACTIONS(168),
        [anon_sym_AT] = ACTIONS(168),
        [anon_sym_BSLASH] = ACTIONS(168),
        [anon_sym_CARET] = ACTIONS(168),
        [anon_sym__] = ACTIONS(168),
        [anon_sym_BQUOTE] = ACTIONS(168),
        [anon_sym_PIPE] = ACTIONS(168),
        [anon_sym_TILDE] = ACTIONS(168),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(168),
        [sym_email] = ACTIONS(168),
        [anon_sym_http] = ACTIONS(168),
        [anon_sym_https] = ACTIONS(168),
        [anon_sym_file] = ACTIONS(168),
        [anon_sym_ftp] = ACTIONS(168),
        [anon_sym_irc] = ACTIONS(168),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(168),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(168),
        [anon_sym_LT_LT] = ACTIONS(168),
        [anon_sym_STAR2] = ACTIONS(168),
        [anon_sym_STAR_STAR] = ACTIONS(168),
        [anon_sym__2] = ACTIONS(168),
        [anon_sym___] = ACTIONS(168),
        [anon_sym_BQUOTE2] = ACTIONS(168),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(168),
        [anon_sym_POUND2] = ACTIONS(168),
        [anon_sym_POUND_POUND] = ACTIONS(168),
    },
    [22] = {
        [ts_builtin_sym_end] = ACTIONS(170),
        [anon_sym_kbd] = ACTIONS(172),
        [anon_sym_btn] = ACTIONS(172),
        [anon_sym_image] = ACTIONS(172),
        [anon_sym_icon] = ACTIONS(172),
        [anon_sym_pass] = ACTIONS(172),
        [anon_sym_link] = ACTIONS(172),
        [anon_sym_mailto] = ACTIONS(172),
        [anon_sym_menu] = ACTIONS(172),
        [anon_sym_latexmath] = ACTIONS(172),
        [anon_sym_asciimath] = ACTIONS(172),
        [anon_sym_footnote] = ACTIONS(172),
        [anon_sym_footnoteref] = ACTIONS(172),
        [anon_sym_anchor] = ACTIONS(172),
        [anon_sym_xref] = ACTIONS(172),
        [anon_sym_LBRACK] = ACTIONS(174),
        [anon_sym_RBRACK] = ACTIONS(172),
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
        [anon_sym_COLON2] = ACTIONS(172),
        [anon_sym_SEMI] = ACTIONS(172),
        [anon_sym_LT] = ACTIONS(172),
        [anon_sym_EQ] = ACTIONS(172),
        [anon_sym_GT] = ACTIONS(172),
        [anon_sym_QMARK] = ACTIONS(172),
        [anon_sym_AT] = ACTIONS(172),
        [anon_sym_BSLASH] = ACTIONS(172),
        [anon_sym_CARET] = ACTIONS(172),
        [anon_sym__] = ACTIONS(172),
        [anon_sym_BQUOTE] = ACTIONS(172),
        [anon_sym_PIPE] = ACTIONS(172),
        [anon_sym_TILDE] = ACTIONS(172),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(172),
        [sym_email] = ACTIONS(172),
        [anon_sym_http] = ACTIONS(172),
        [anon_sym_https] = ACTIONS(172),
        [anon_sym_file] = ACTIONS(172),
        [anon_sym_ftp] = ACTIONS(172),
        [anon_sym_irc] = ACTIONS(172),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(172),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(172),
        [anon_sym_LT_LT] = ACTIONS(172),
        [anon_sym_STAR2] = ACTIONS(172),
        [anon_sym_STAR_STAR] = ACTIONS(172),
        [anon_sym__2] = ACTIONS(172),
        [anon_sym___] = ACTIONS(172),
        [anon_sym_BQUOTE2] = ACTIONS(172),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(172),
        [anon_sym_POUND2] = ACTIONS(172),
        [anon_sym_POUND_POUND] = ACTIONS(172),
    },
    [23] = {
        [ts_builtin_sym_end] = ACTIONS(176),
        [anon_sym_kbd] = ACTIONS(178),
        [anon_sym_btn] = ACTIONS(178),
        [anon_sym_image] = ACTIONS(178),
        [anon_sym_icon] = ACTIONS(178),
        [anon_sym_pass] = ACTIONS(178),
        [anon_sym_link] = ACTIONS(178),
        [anon_sym_mailto] = ACTIONS(178),
        [anon_sym_menu] = ACTIONS(178),
        [anon_sym_latexmath] = ACTIONS(178),
        [anon_sym_asciimath] = ACTIONS(178),
        [anon_sym_footnote] = ACTIONS(178),
        [anon_sym_footnoteref] = ACTIONS(178),
        [anon_sym_anchor] = ACTIONS(178),
        [anon_sym_xref] = ACTIONS(178),
        [anon_sym_LBRACK] = ACTIONS(178),
        [anon_sym_RBRACK] = ACTIONS(178),
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
        [anon_sym_COLON2] = ACTIONS(178),
        [anon_sym_SEMI] = ACTIONS(178),
        [anon_sym_LT] = ACTIONS(178),
        [anon_sym_EQ] = ACTIONS(178),
        [anon_sym_GT] = ACTIONS(178),
        [anon_sym_QMARK] = ACTIONS(178),
        [anon_sym_AT] = ACTIONS(178),
        [anon_sym_BSLASH] = ACTIONS(178),
        [anon_sym_CARET] = ACTIONS(178),
        [anon_sym__] = ACTIONS(178),
        [anon_sym_BQUOTE] = ACTIONS(178),
        [anon_sym_PIPE] = ACTIONS(178),
        [anon_sym_TILDE] = ACTIONS(178),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(178),
        [sym_email] = ACTIONS(178),
        [anon_sym_http] = ACTIONS(178),
        [anon_sym_https] = ACTIONS(178),
        [anon_sym_file] = ACTIONS(178),
        [anon_sym_ftp] = ACTIONS(178),
        [anon_sym_irc] = ACTIONS(178),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(178),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(178),
        [anon_sym_LT_LT] = ACTIONS(178),
        [anon_sym_STAR2] = ACTIONS(178),
        [anon_sym_STAR_STAR] = ACTIONS(178),
        [anon_sym__2] = ACTIONS(178),
        [anon_sym___] = ACTIONS(178),
        [anon_sym_BQUOTE2] = ACTIONS(178),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(178),
        [anon_sym_POUND2] = ACTIONS(178),
        [anon_sym_POUND_POUND] = ACTIONS(178),
    },
    [24] = {
        [ts_builtin_sym_end] = ACTIONS(180),
        [anon_sym_kbd] = ACTIONS(182),
        [anon_sym_btn] = ACTIONS(182),
        [anon_sym_image] = ACTIONS(182),
        [anon_sym_icon] = ACTIONS(182),
        [anon_sym_pass] = ACTIONS(182),
        [anon_sym_link] = ACTIONS(182),
        [anon_sym_mailto] = ACTIONS(182),
        [anon_sym_menu] = ACTIONS(182),
        [anon_sym_latexmath] = ACTIONS(182),
        [anon_sym_asciimath] = ACTIONS(182),
        [anon_sym_footnote] = ACTIONS(182),
        [anon_sym_footnoteref] = ACTIONS(182),
        [anon_sym_anchor] = ACTIONS(182),
        [anon_sym_xref] = ACTIONS(182),
        [anon_sym_LBRACK] = ACTIONS(182),
        [anon_sym_RBRACK] = ACTIONS(182),
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
        [anon_sym_COLON2] = ACTIONS(182),
        [anon_sym_SEMI] = ACTIONS(182),
        [anon_sym_LT] = ACTIONS(182),
        [anon_sym_EQ] = ACTIONS(182),
        [anon_sym_GT] = ACTIONS(182),
        [anon_sym_QMARK] = ACTIONS(182),
        [anon_sym_AT] = ACTIONS(182),
        [anon_sym_BSLASH] = ACTIONS(182),
        [anon_sym_CARET] = ACTIONS(182),
        [anon_sym__] = ACTIONS(182),
        [anon_sym_BQUOTE] = ACTIONS(182),
        [anon_sym_PIPE] = ACTIONS(182),
        [anon_sym_TILDE] = ACTIONS(182),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(182),
        [sym_email] = ACTIONS(182),
        [anon_sym_http] = ACTIONS(182),
        [anon_sym_https] = ACTIONS(182),
        [anon_sym_file] = ACTIONS(182),
        [anon_sym_ftp] = ACTIONS(182),
        [anon_sym_irc] = ACTIONS(182),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(182),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(182),
        [anon_sym_LT_LT] = ACTIONS(182),
        [anon_sym_STAR2] = ACTIONS(182),
        [anon_sym_STAR_STAR] = ACTIONS(182),
        [anon_sym__2] = ACTIONS(182),
        [anon_sym___] = ACTIONS(182),
        [anon_sym_BQUOTE2] = ACTIONS(182),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(182),
        [anon_sym_POUND2] = ACTIONS(182),
        [anon_sym_POUND_POUND] = ACTIONS(182),
    },
    [25] = {
        [ts_builtin_sym_end] = ACTIONS(184),
        [anon_sym_kbd] = ACTIONS(186),
        [anon_sym_btn] = ACTIONS(186),
        [anon_sym_image] = ACTIONS(186),
        [anon_sym_icon] = ACTIONS(186),
        [anon_sym_pass] = ACTIONS(186),
        [anon_sym_link] = ACTIONS(186),
        [anon_sym_mailto] = ACTIONS(186),
        [anon_sym_menu] = ACTIONS(186),
        [anon_sym_latexmath] = ACTIONS(186),
        [anon_sym_asciimath] = ACTIONS(186),
        [anon_sym_footnote] = ACTIONS(186),
        [anon_sym_footnoteref] = ACTIONS(186),
        [anon_sym_anchor] = ACTIONS(186),
        [anon_sym_xref] = ACTIONS(186),
        [anon_sym_LBRACK] = ACTIONS(186),
        [anon_sym_RBRACK] = ACTIONS(186),
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
        [anon_sym_COLON2] = ACTIONS(186),
        [anon_sym_SEMI] = ACTIONS(186),
        [anon_sym_LT] = ACTIONS(186),
        [anon_sym_EQ] = ACTIONS(186),
        [anon_sym_GT] = ACTIONS(186),
        [anon_sym_QMARK] = ACTIONS(186),
        [anon_sym_AT] = ACTIONS(186),
        [anon_sym_BSLASH] = ACTIONS(186),
        [anon_sym_CARET] = ACTIONS(186),
        [anon_sym__] = ACTIONS(186),
        [anon_sym_BQUOTE] = ACTIONS(186),
        [anon_sym_PIPE] = ACTIONS(186),
        [anon_sym_TILDE] = ACTIONS(186),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(186),
        [sym_email] = ACTIONS(186),
        [anon_sym_http] = ACTIONS(186),
        [anon_sym_https] = ACTIONS(186),
        [anon_sym_file] = ACTIONS(186),
        [anon_sym_ftp] = ACTIONS(186),
        [anon_sym_irc] = ACTIONS(186),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(186),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(186),
        [anon_sym_LT_LT] = ACTIONS(186),
        [anon_sym_STAR2] = ACTIONS(186),
        [anon_sym_STAR_STAR] = ACTIONS(186),
        [anon_sym__2] = ACTIONS(186),
        [anon_sym___] = ACTIONS(186),
        [anon_sym_BQUOTE2] = ACTIONS(186),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(186),
        [anon_sym_POUND2] = ACTIONS(186),
        [anon_sym_POUND_POUND] = ACTIONS(186),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(188),
        [anon_sym_kbd] = ACTIONS(190),
        [anon_sym_btn] = ACTIONS(190),
        [anon_sym_image] = ACTIONS(190),
        [anon_sym_icon] = ACTIONS(190),
        [anon_sym_pass] = ACTIONS(190),
        [anon_sym_link] = ACTIONS(190),
        [anon_sym_mailto] = ACTIONS(190),
        [anon_sym_menu] = ACTIONS(190),
        [anon_sym_latexmath] = ACTIONS(190),
        [anon_sym_asciimath] = ACTIONS(190),
        [anon_sym_footnote] = ACTIONS(190),
        [anon_sym_footnoteref] = ACTIONS(190),
        [anon_sym_anchor] = ACTIONS(190),
        [anon_sym_xref] = ACTIONS(190),
        [anon_sym_LBRACK] = ACTIONS(190),
        [anon_sym_RBRACK] = ACTIONS(190),
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
        [anon_sym_COLON2] = ACTIONS(190),
        [anon_sym_SEMI] = ACTIONS(190),
        [anon_sym_LT] = ACTIONS(190),
        [anon_sym_EQ] = ACTIONS(190),
        [anon_sym_GT] = ACTIONS(190),
        [anon_sym_QMARK] = ACTIONS(190),
        [anon_sym_AT] = ACTIONS(190),
        [anon_sym_BSLASH] = ACTIONS(190),
        [anon_sym_CARET] = ACTIONS(190),
        [anon_sym__] = ACTIONS(190),
        [anon_sym_BQUOTE] = ACTIONS(190),
        [anon_sym_PIPE] = ACTIONS(190),
        [anon_sym_TILDE] = ACTIONS(190),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(190),
        [sym_email] = ACTIONS(190),
        [anon_sym_http] = ACTIONS(190),
        [anon_sym_https] = ACTIONS(190),
        [anon_sym_file] = ACTIONS(190),
        [anon_sym_ftp] = ACTIONS(190),
        [anon_sym_irc] = ACTIONS(190),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(190),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(190),
        [anon_sym_LT_LT] = ACTIONS(190),
        [anon_sym_STAR2] = ACTIONS(190),
        [anon_sym_STAR_STAR] = ACTIONS(190),
        [anon_sym__2] = ACTIONS(190),
        [anon_sym___] = ACTIONS(190),
        [anon_sym_BQUOTE2] = ACTIONS(190),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(190),
        [anon_sym_POUND2] = ACTIONS(190),
        [anon_sym_POUND_POUND] = ACTIONS(190),
    },
    [27] = {
        [ts_builtin_sym_end] = ACTIONS(192),
        [anon_sym_kbd] = ACTIONS(194),
        [anon_sym_btn] = ACTIONS(194),
        [anon_sym_image] = ACTIONS(194),
        [anon_sym_icon] = ACTIONS(194),
        [anon_sym_pass] = ACTIONS(194),
        [anon_sym_link] = ACTIONS(194),
        [anon_sym_mailto] = ACTIONS(194),
        [anon_sym_menu] = ACTIONS(194),
        [anon_sym_latexmath] = ACTIONS(194),
        [anon_sym_asciimath] = ACTIONS(194),
        [anon_sym_footnote] = ACTIONS(194),
        [anon_sym_footnoteref] = ACTIONS(194),
        [anon_sym_anchor] = ACTIONS(194),
        [anon_sym_xref] = ACTIONS(194),
        [anon_sym_LBRACK] = ACTIONS(194),
        [anon_sym_RBRACK] = ACTIONS(194),
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
        [anon_sym_COLON2] = ACTIONS(194),
        [anon_sym_SEMI] = ACTIONS(194),
        [anon_sym_LT] = ACTIONS(194),
        [anon_sym_EQ] = ACTIONS(194),
        [anon_sym_GT] = ACTIONS(194),
        [anon_sym_QMARK] = ACTIONS(194),
        [anon_sym_AT] = ACTIONS(194),
        [anon_sym_BSLASH] = ACTIONS(194),
        [anon_sym_CARET] = ACTIONS(194),
        [anon_sym__] = ACTIONS(194),
        [anon_sym_BQUOTE] = ACTIONS(194),
        [anon_sym_PIPE] = ACTIONS(194),
        [anon_sym_TILDE] = ACTIONS(194),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(194),
        [sym_email] = ACTIONS(194),
        [anon_sym_http] = ACTIONS(194),
        [anon_sym_https] = ACTIONS(194),
        [anon_sym_file] = ACTIONS(194),
        [anon_sym_ftp] = ACTIONS(194),
        [anon_sym_irc] = ACTIONS(194),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(194),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(194),
        [anon_sym_LT_LT] = ACTIONS(194),
        [anon_sym_STAR2] = ACTIONS(194),
        [anon_sym_STAR_STAR] = ACTIONS(194),
        [anon_sym__2] = ACTIONS(194),
        [anon_sym___] = ACTIONS(194),
        [anon_sym_BQUOTE2] = ACTIONS(194),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(194),
        [anon_sym_POUND2] = ACTIONS(194),
        [anon_sym_POUND_POUND] = ACTIONS(194),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(138),
        [anon_sym_kbd] = ACTIONS(140),
        [anon_sym_btn] = ACTIONS(140),
        [anon_sym_image] = ACTIONS(140),
        [anon_sym_icon] = ACTIONS(140),
        [anon_sym_pass] = ACTIONS(140),
        [anon_sym_link] = ACTIONS(140),
        [anon_sym_mailto] = ACTIONS(140),
        [anon_sym_menu] = ACTIONS(140),
        [anon_sym_latexmath] = ACTIONS(140),
        [anon_sym_asciimath] = ACTIONS(140),
        [anon_sym_footnote] = ACTIONS(140),
        [anon_sym_footnoteref] = ACTIONS(140),
        [anon_sym_anchor] = ACTIONS(140),
        [anon_sym_xref] = ACTIONS(140),
        [anon_sym_LBRACK] = ACTIONS(140),
        [anon_sym_RBRACK] = ACTIONS(140),
        [anon_sym_LBRACE] = ACTIONS(140),
        [anon_sym_RBRACE] = ACTIONS(140),
        [sym__word_no_digit] = ACTIONS(140),
        [sym__digits] = ACTIONS(140),
        [anon_sym_BANG] = ACTIONS(140),
        [anon_sym_DQUOTE] = ACTIONS(140),
        [anon_sym_POUND] = ACTIONS(140),
        [anon_sym_DOLLAR] = ACTIONS(140),
        [anon_sym_PERCENT] = ACTIONS(140),
        [anon_sym_AMP] = ACTIONS(140),
        [anon_sym_SQUOTE] = ACTIONS(140),
        [anon_sym_LPAREN] = ACTIONS(140),
        [anon_sym_RPAREN] = ACTIONS(140),
        [anon_sym_STAR] = ACTIONS(140),
        [anon_sym_PLUS] = ACTIONS(140),
        [anon_sym_COMMA] = ACTIONS(140),
        [anon_sym_DASH] = ACTIONS(140),
        [anon_sym_DOT] = ACTIONS(140),
        [anon_sym_SLASH] = ACTIONS(140),
        [anon_sym_COLON2] = ACTIONS(140),
        [anon_sym_SEMI] = ACTIONS(140),
        [anon_sym_LT] = ACTIONS(140),
        [anon_sym_EQ] = ACTIONS(140),
        [anon_sym_GT] = ACTIONS(140),
        [anon_sym_QMARK] = ACTIONS(140),
        [anon_sym_AT] = ACTIONS(140),
        [anon_sym_BSLASH] = ACTIONS(140),
        [anon_sym_CARET] = ACTIONS(140),
        [anon_sym__] = ACTIONS(140),
        [anon_sym_BQUOTE] = ACTIONS(140),
        [anon_sym_PIPE] = ACTIONS(140),
        [anon_sym_TILDE] = ACTIONS(140),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(140),
        [sym_email] = ACTIONS(140),
        [anon_sym_http] = ACTIONS(140),
        [anon_sym_https] = ACTIONS(140),
        [anon_sym_file] = ACTIONS(140),
        [anon_sym_ftp] = ACTIONS(140),
        [anon_sym_irc] = ACTIONS(140),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(140),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(140),
        [anon_sym_LT_LT] = ACTIONS(140),
        [anon_sym_STAR2] = ACTIONS(140),
        [anon_sym_STAR_STAR] = ACTIONS(140),
        [anon_sym__2] = ACTIONS(140),
        [anon_sym___] = ACTIONS(140),
        [anon_sym_BQUOTE2] = ACTIONS(140),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(140),
        [anon_sym_POUND2] = ACTIONS(140),
        [anon_sym_POUND_POUND] = ACTIONS(140),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(196),
        [anon_sym_kbd] = ACTIONS(198),
        [anon_sym_btn] = ACTIONS(198),
        [anon_sym_image] = ACTIONS(198),
        [anon_sym_icon] = ACTIONS(198),
        [anon_sym_pass] = ACTIONS(198),
        [anon_sym_link] = ACTIONS(198),
        [anon_sym_mailto] = ACTIONS(198),
        [anon_sym_menu] = ACTIONS(198),
        [anon_sym_latexmath] = ACTIONS(198),
        [anon_sym_asciimath] = ACTIONS(198),
        [anon_sym_footnote] = ACTIONS(198),
        [anon_sym_footnoteref] = ACTIONS(198),
        [anon_sym_anchor] = ACTIONS(198),
        [anon_sym_xref] = ACTIONS(198),
        [anon_sym_LBRACK] = ACTIONS(198),
        [anon_sym_RBRACK] = ACTIONS(198),
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
        [anon_sym_COLON2] = ACTIONS(198),
        [anon_sym_SEMI] = ACTIONS(198),
        [anon_sym_LT] = ACTIONS(198),
        [anon_sym_EQ] = ACTIONS(198),
        [anon_sym_GT] = ACTIONS(198),
        [anon_sym_QMARK] = ACTIONS(198),
        [anon_sym_AT] = ACTIONS(198),
        [anon_sym_BSLASH] = ACTIONS(198),
        [anon_sym_CARET] = ACTIONS(198),
        [anon_sym__] = ACTIONS(198),
        [anon_sym_BQUOTE] = ACTIONS(198),
        [anon_sym_PIPE] = ACTIONS(198),
        [anon_sym_TILDE] = ACTIONS(198),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(198),
        [sym_email] = ACTIONS(198),
        [anon_sym_http] = ACTIONS(198),
        [anon_sym_https] = ACTIONS(198),
        [anon_sym_file] = ACTIONS(198),
        [anon_sym_ftp] = ACTIONS(198),
        [anon_sym_irc] = ACTIONS(198),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(198),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(198),
        [anon_sym_LT_LT] = ACTIONS(198),
        [anon_sym_STAR2] = ACTIONS(198),
        [anon_sym_STAR_STAR] = ACTIONS(198),
        [anon_sym__2] = ACTIONS(198),
        [anon_sym___] = ACTIONS(198),
        [anon_sym_BQUOTE2] = ACTIONS(198),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(198),
        [anon_sym_POUND2] = ACTIONS(198),
        [anon_sym_POUND_POUND] = ACTIONS(198),
    },
    [30] = {
        [ts_builtin_sym_end] = ACTIONS(200),
        [anon_sym_kbd] = ACTIONS(202),
        [anon_sym_btn] = ACTIONS(202),
        [anon_sym_image] = ACTIONS(202),
        [anon_sym_icon] = ACTIONS(202),
        [anon_sym_pass] = ACTIONS(202),
        [anon_sym_link] = ACTIONS(202),
        [anon_sym_mailto] = ACTIONS(202),
        [anon_sym_menu] = ACTIONS(202),
        [anon_sym_latexmath] = ACTIONS(202),
        [anon_sym_asciimath] = ACTIONS(202),
        [anon_sym_footnote] = ACTIONS(202),
        [anon_sym_footnoteref] = ACTIONS(202),
        [anon_sym_anchor] = ACTIONS(202),
        [anon_sym_xref] = ACTIONS(202),
        [anon_sym_LBRACK] = ACTIONS(202),
        [anon_sym_RBRACK] = ACTIONS(202),
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
        [anon_sym_COLON2] = ACTIONS(202),
        [anon_sym_SEMI] = ACTIONS(202),
        [anon_sym_LT] = ACTIONS(202),
        [anon_sym_EQ] = ACTIONS(202),
        [anon_sym_GT] = ACTIONS(202),
        [anon_sym_QMARK] = ACTIONS(202),
        [anon_sym_AT] = ACTIONS(202),
        [anon_sym_BSLASH] = ACTIONS(202),
        [anon_sym_CARET] = ACTIONS(202),
        [anon_sym__] = ACTIONS(202),
        [anon_sym_BQUOTE] = ACTIONS(202),
        [anon_sym_PIPE] = ACTIONS(202),
        [anon_sym_TILDE] = ACTIONS(202),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(202),
        [sym_email] = ACTIONS(202),
        [anon_sym_http] = ACTIONS(202),
        [anon_sym_https] = ACTIONS(202),
        [anon_sym_file] = ACTIONS(202),
        [anon_sym_ftp] = ACTIONS(202),
        [anon_sym_irc] = ACTIONS(202),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(202),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(202),
        [anon_sym_LT_LT] = ACTIONS(202),
        [anon_sym_STAR2] = ACTIONS(202),
        [anon_sym_STAR_STAR] = ACTIONS(202),
        [anon_sym__2] = ACTIONS(202),
        [anon_sym___] = ACTIONS(202),
        [anon_sym_BQUOTE2] = ACTIONS(202),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(202),
        [anon_sym_POUND2] = ACTIONS(202),
        [anon_sym_POUND_POUND] = ACTIONS(202),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(204),
        [anon_sym_kbd] = ACTIONS(206),
        [anon_sym_btn] = ACTIONS(206),
        [anon_sym_image] = ACTIONS(206),
        [anon_sym_icon] = ACTIONS(206),
        [anon_sym_pass] = ACTIONS(206),
        [anon_sym_link] = ACTIONS(206),
        [anon_sym_mailto] = ACTIONS(206),
        [anon_sym_menu] = ACTIONS(206),
        [anon_sym_latexmath] = ACTIONS(206),
        [anon_sym_asciimath] = ACTIONS(206),
        [anon_sym_footnote] = ACTIONS(206),
        [anon_sym_footnoteref] = ACTIONS(206),
        [anon_sym_anchor] = ACTIONS(206),
        [anon_sym_xref] = ACTIONS(206),
        [anon_sym_LBRACK] = ACTIONS(206),
        [anon_sym_RBRACK] = ACTIONS(206),
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
        [anon_sym_COLON2] = ACTIONS(206),
        [anon_sym_SEMI] = ACTIONS(206),
        [anon_sym_LT] = ACTIONS(206),
        [anon_sym_EQ] = ACTIONS(206),
        [anon_sym_GT] = ACTIONS(206),
        [anon_sym_QMARK] = ACTIONS(206),
        [anon_sym_AT] = ACTIONS(206),
        [anon_sym_BSLASH] = ACTIONS(206),
        [anon_sym_CARET] = ACTIONS(206),
        [anon_sym__] = ACTIONS(206),
        [anon_sym_BQUOTE] = ACTIONS(206),
        [anon_sym_PIPE] = ACTIONS(206),
        [anon_sym_TILDE] = ACTIONS(206),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(206),
        [sym_email] = ACTIONS(206),
        [anon_sym_http] = ACTIONS(206),
        [anon_sym_https] = ACTIONS(206),
        [anon_sym_file] = ACTIONS(206),
        [anon_sym_ftp] = ACTIONS(206),
        [anon_sym_irc] = ACTIONS(206),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(206),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(206),
        [anon_sym_LT_LT] = ACTIONS(206),
        [anon_sym_STAR2] = ACTIONS(206),
        [anon_sym_STAR_STAR] = ACTIONS(206),
        [anon_sym__2] = ACTIONS(206),
        [anon_sym___] = ACTIONS(206),
        [anon_sym_BQUOTE2] = ACTIONS(206),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(206),
        [anon_sym_POUND2] = ACTIONS(206),
        [anon_sym_POUND_POUND] = ACTIONS(206),
    },
    [32] = {
        [ts_builtin_sym_end] = ACTIONS(208),
        [anon_sym_kbd] = ACTIONS(210),
        [anon_sym_btn] = ACTIONS(210),
        [anon_sym_image] = ACTIONS(210),
        [anon_sym_icon] = ACTIONS(210),
        [anon_sym_pass] = ACTIONS(210),
        [anon_sym_link] = ACTIONS(210),
        [anon_sym_mailto] = ACTIONS(210),
        [anon_sym_menu] = ACTIONS(210),
        [anon_sym_latexmath] = ACTIONS(210),
        [anon_sym_asciimath] = ACTIONS(210),
        [anon_sym_footnote] = ACTIONS(210),
        [anon_sym_footnoteref] = ACTIONS(210),
        [anon_sym_anchor] = ACTIONS(210),
        [anon_sym_xref] = ACTIONS(210),
        [anon_sym_LBRACK] = ACTIONS(210),
        [anon_sym_RBRACK] = ACTIONS(210),
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
        [anon_sym_COLON2] = ACTIONS(210),
        [anon_sym_SEMI] = ACTIONS(210),
        [anon_sym_LT] = ACTIONS(210),
        [anon_sym_EQ] = ACTIONS(210),
        [anon_sym_GT] = ACTIONS(210),
        [anon_sym_QMARK] = ACTIONS(210),
        [anon_sym_AT] = ACTIONS(210),
        [anon_sym_BSLASH] = ACTIONS(210),
        [anon_sym_CARET] = ACTIONS(210),
        [anon_sym__] = ACTIONS(210),
        [anon_sym_BQUOTE] = ACTIONS(210),
        [anon_sym_PIPE] = ACTIONS(210),
        [anon_sym_TILDE] = ACTIONS(210),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(210),
        [sym_email] = ACTIONS(210),
        [anon_sym_http] = ACTIONS(210),
        [anon_sym_https] = ACTIONS(210),
        [anon_sym_file] = ACTIONS(210),
        [anon_sym_ftp] = ACTIONS(210),
        [anon_sym_irc] = ACTIONS(210),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(210),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(210),
        [anon_sym_LT_LT] = ACTIONS(210),
        [anon_sym_STAR2] = ACTIONS(210),
        [anon_sym_STAR_STAR] = ACTIONS(210),
        [anon_sym__2] = ACTIONS(210),
        [anon_sym___] = ACTIONS(210),
        [anon_sym_BQUOTE2] = ACTIONS(210),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(210),
        [anon_sym_POUND2] = ACTIONS(210),
        [anon_sym_POUND_POUND] = ACTIONS(210),
    },
    [33] = {
        [ts_builtin_sym_end] = ACTIONS(212),
        [anon_sym_kbd] = ACTIONS(214),
        [anon_sym_btn] = ACTIONS(214),
        [anon_sym_image] = ACTIONS(214),
        [anon_sym_icon] = ACTIONS(214),
        [anon_sym_pass] = ACTIONS(214),
        [anon_sym_link] = ACTIONS(214),
        [anon_sym_mailto] = ACTIONS(214),
        [anon_sym_menu] = ACTIONS(214),
        [anon_sym_latexmath] = ACTIONS(214),
        [anon_sym_asciimath] = ACTIONS(214),
        [anon_sym_footnote] = ACTIONS(214),
        [anon_sym_footnoteref] = ACTIONS(214),
        [anon_sym_anchor] = ACTIONS(214),
        [anon_sym_xref] = ACTIONS(214),
        [anon_sym_LBRACK] = ACTIONS(214),
        [anon_sym_RBRACK] = ACTIONS(214),
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
        [anon_sym_COLON2] = ACTIONS(214),
        [anon_sym_SEMI] = ACTIONS(214),
        [anon_sym_LT] = ACTIONS(214),
        [anon_sym_EQ] = ACTIONS(214),
        [anon_sym_GT] = ACTIONS(214),
        [anon_sym_QMARK] = ACTIONS(214),
        [anon_sym_AT] = ACTIONS(214),
        [anon_sym_BSLASH] = ACTIONS(214),
        [anon_sym_CARET] = ACTIONS(214),
        [anon_sym__] = ACTIONS(214),
        [anon_sym_BQUOTE] = ACTIONS(214),
        [anon_sym_PIPE] = ACTIONS(214),
        [anon_sym_TILDE] = ACTIONS(214),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(214),
        [sym_email] = ACTIONS(214),
        [anon_sym_http] = ACTIONS(214),
        [anon_sym_https] = ACTIONS(214),
        [anon_sym_file] = ACTIONS(214),
        [anon_sym_ftp] = ACTIONS(214),
        [anon_sym_irc] = ACTIONS(214),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(214),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(214),
        [anon_sym_LT_LT] = ACTIONS(214),
        [anon_sym_STAR2] = ACTIONS(214),
        [anon_sym_STAR_STAR] = ACTIONS(214),
        [anon_sym__2] = ACTIONS(214),
        [anon_sym___] = ACTIONS(214),
        [anon_sym_BQUOTE2] = ACTIONS(214),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(214),
        [anon_sym_POUND2] = ACTIONS(214),
        [anon_sym_POUND_POUND] = ACTIONS(214),
    },
    [34] = {
        [ts_builtin_sym_end] = ACTIONS(216),
        [anon_sym_kbd] = ACTIONS(218),
        [anon_sym_btn] = ACTIONS(218),
        [anon_sym_image] = ACTIONS(218),
        [anon_sym_icon] = ACTIONS(218),
        [anon_sym_pass] = ACTIONS(218),
        [anon_sym_link] = ACTIONS(218),
        [anon_sym_mailto] = ACTIONS(218),
        [anon_sym_menu] = ACTIONS(218),
        [anon_sym_latexmath] = ACTIONS(218),
        [anon_sym_asciimath] = ACTIONS(218),
        [anon_sym_footnote] = ACTIONS(218),
        [anon_sym_footnoteref] = ACTIONS(218),
        [anon_sym_anchor] = ACTIONS(218),
        [anon_sym_xref] = ACTIONS(218),
        [anon_sym_LBRACK] = ACTIONS(218),
        [anon_sym_RBRACK] = ACTIONS(218),
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
        [anon_sym_COLON2] = ACTIONS(218),
        [anon_sym_SEMI] = ACTIONS(218),
        [anon_sym_LT] = ACTIONS(218),
        [anon_sym_EQ] = ACTIONS(218),
        [anon_sym_GT] = ACTIONS(218),
        [anon_sym_QMARK] = ACTIONS(218),
        [anon_sym_AT] = ACTIONS(218),
        [anon_sym_BSLASH] = ACTIONS(218),
        [anon_sym_CARET] = ACTIONS(218),
        [anon_sym__] = ACTIONS(218),
        [anon_sym_BQUOTE] = ACTIONS(218),
        [anon_sym_PIPE] = ACTIONS(218),
        [anon_sym_TILDE] = ACTIONS(218),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(218),
        [sym_email] = ACTIONS(218),
        [anon_sym_http] = ACTIONS(218),
        [anon_sym_https] = ACTIONS(218),
        [anon_sym_file] = ACTIONS(218),
        [anon_sym_ftp] = ACTIONS(218),
        [anon_sym_irc] = ACTIONS(218),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(218),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(218),
        [anon_sym_LT_LT] = ACTIONS(218),
        [anon_sym_STAR2] = ACTIONS(218),
        [anon_sym_STAR_STAR] = ACTIONS(218),
        [anon_sym__2] = ACTIONS(218),
        [anon_sym___] = ACTIONS(218),
        [anon_sym_BQUOTE2] = ACTIONS(218),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(218),
        [anon_sym_POUND2] = ACTIONS(218),
        [anon_sym_POUND_POUND] = ACTIONS(218),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 5,
    ACTIONS(224),
    1,
    anon_sym_RBRACK,
    STATE(39),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(44),
    1,
    sym_inline_macro,
    ACTIONS(222),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    ACTIONS(220),
    14,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_icon,
    anon_sym_pass,
    anon_sym_link,
    anon_sym_mailto,
    anon_sym_menu,
    anon_sym_latexmath,
    anon_sym_asciimath,
    anon_sym_footnote,
    anon_sym_footnoteref,
    anon_sym_anchor,
    anon_sym_xref,
    [30] = 5,
    ACTIONS(226),
    1,
    anon_sym_RBRACK,
    STATE(41),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(44),
    1,
    sym_inline_macro,
    ACTIONS(222),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    ACTIONS(220),
    14,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_icon,
    anon_sym_pass,
    anon_sym_link,
    anon_sym_mailto,
    anon_sym_menu,
    anon_sym_latexmath,
    anon_sym_asciimath,
    anon_sym_footnote,
    anon_sym_footnoteref,
    anon_sym_anchor,
    anon_sym_xref,
    [60] = 5,
    ACTIONS(228),
    1,
    anon_sym_RBRACK,
    STATE(38),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(44),
    1,
    sym_inline_macro,
    ACTIONS(222),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    ACTIONS(220),
    14,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_icon,
    anon_sym_pass,
    anon_sym_link,
    anon_sym_mailto,
    anon_sym_menu,
    anon_sym_latexmath,
    anon_sym_asciimath,
    anon_sym_footnote,
    anon_sym_footnoteref,
    anon_sym_anchor,
    anon_sym_xref,
    [90] = 5,
    ACTIONS(230),
    1,
    anon_sym_RBRACK,
    STATE(39),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(44),
    1,
    sym_inline_macro,
    ACTIONS(222),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    ACTIONS(220),
    14,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_icon,
    anon_sym_pass,
    anon_sym_link,
    anon_sym_mailto,
    anon_sym_menu,
    anon_sym_latexmath,
    anon_sym_asciimath,
    anon_sym_footnote,
    anon_sym_footnoteref,
    anon_sym_anchor,
    anon_sym_xref,
    [120] = 5,
    ACTIONS(238),
    1,
    anon_sym_RBRACK,
    STATE(39),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(44),
    1,
    sym_inline_macro,
    ACTIONS(235),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    ACTIONS(232),
    14,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_icon,
    anon_sym_pass,
    anon_sym_link,
    anon_sym_mailto,
    anon_sym_menu,
    anon_sym_latexmath,
    anon_sym_asciimath,
    anon_sym_footnote,
    anon_sym_footnoteref,
    anon_sym_anchor,
    anon_sym_xref,
    [150] = 5,
    ACTIONS(240),
    1,
    anon_sym_RBRACK,
    STATE(35),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(44),
    1,
    sym_inline_macro,
    ACTIONS(222),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    ACTIONS(220),
    14,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_icon,
    anon_sym_pass,
    anon_sym_link,
    anon_sym_mailto,
    anon_sym_menu,
    anon_sym_latexmath,
    anon_sym_asciimath,
    anon_sym_footnote,
    anon_sym_footnoteref,
    anon_sym_anchor,
    anon_sym_xref,
    [180] = 5,
    ACTIONS(242),
    1,
    anon_sym_RBRACK,
    STATE(39),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(44),
    1,
    sym_inline_macro,
    ACTIONS(222),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    ACTIONS(220),
    14,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_icon,
    anon_sym_pass,
    anon_sym_link,
    anon_sym_mailto,
    anon_sym_menu,
    anon_sym_latexmath,
    anon_sym_asciimath,
    anon_sym_footnote,
    anon_sym_footnoteref,
    anon_sym_anchor,
    anon_sym_xref,
    [210] = 5,
    ACTIONS(244),
    1,
    anon_sym_RBRACK,
    STATE(43),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(44),
    1,
    sym_inline_macro,
    ACTIONS(222),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    ACTIONS(220),
    14,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_icon,
    anon_sym_pass,
    anon_sym_link,
    anon_sym_mailto,
    anon_sym_menu,
    anon_sym_latexmath,
    anon_sym_asciimath,
    anon_sym_footnote,
    anon_sym_footnoteref,
    anon_sym_anchor,
    anon_sym_xref,
    [240] = 5,
    ACTIONS(246),
    1,
    anon_sym_RBRACK,
    STATE(39),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(44),
    1,
    sym_inline_macro,
    ACTIONS(222),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    ACTIONS(220),
    14,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_icon,
    anon_sym_pass,
    anon_sym_link,
    anon_sym_mailto,
    anon_sym_menu,
    anon_sym_latexmath,
    anon_sym_asciimath,
    anon_sym_footnote,
    anon_sym_footnoteref,
    anon_sym_anchor,
    anon_sym_xref,
    [270] = 1,
    ACTIONS(248),
    17,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_icon,
    anon_sym_pass,
    anon_sym_link,
    anon_sym_mailto,
    anon_sym_menu,
    anon_sym_latexmath,
    anon_sym_asciimath,
    anon_sym_footnote,
    anon_sym_footnoteref,
    anon_sym_anchor,
    anon_sym_xref,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    [290] = 1,
    ACTIONS(164),
    17,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_icon,
    anon_sym_pass,
    anon_sym_link,
    anon_sym_mailto,
    anon_sym_menu,
    anon_sym_latexmath,
    anon_sym_asciimath,
    anon_sym_footnote,
    anon_sym_footnoteref,
    anon_sym_anchor,
    anon_sym_xref,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    [310] = 1,
    ACTIONS(160),
    17,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_icon,
    anon_sym_pass,
    anon_sym_link,
    anon_sym_mailto,
    anon_sym_menu,
    anon_sym_latexmath,
    anon_sym_asciimath,
    anon_sym_footnote,
    anon_sym_footnoteref,
    anon_sym_anchor,
    anon_sym_xref,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    [330] = 1,
    ACTIONS(168),
    17,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_icon,
    anon_sym_pass,
    anon_sym_link,
    anon_sym_mailto,
    anon_sym_menu,
    anon_sym_latexmath,
    anon_sym_asciimath,
    anon_sym_footnote,
    anon_sym_footnoteref,
    anon_sym_anchor,
    anon_sym_xref,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    [350] = 1,
    ACTIONS(190),
    17,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_icon,
    anon_sym_pass,
    anon_sym_link,
    anon_sym_mailto,
    anon_sym_menu,
    anon_sym_latexmath,
    anon_sym_asciimath,
    anon_sym_footnote,
    anon_sym_footnoteref,
    anon_sym_anchor,
    anon_sym_xref,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    [370] = 9,
    ACTIONS(255),
    1,
    anon_sym__2,
    ACTIONS(258),
    1,
    anon_sym___,
    ACTIONS(261),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(264),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(267),
    1,
    anon_sym_POUND2,
    ACTIONS(270),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(250),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    ACTIONS(253),
    2,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    STATE(49),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [403] = 9,
    ACTIONS(273),
    1,
    anon_sym_STAR2,
    ACTIONS(276),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(284),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(287),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(290),
    1,
    anon_sym_POUND2,
    ACTIONS(293),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(279),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    ACTIONS(282),
    2,
    anon_sym__3,
    anon_sym___,
    STATE(50),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [436] = 9,
    ACTIONS(298),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(300),
    1,
    anon_sym__2,
    ACTIONS(302),
    1,
    anon_sym___,
    ACTIONS(304),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(306),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(308),
    1,
    anon_sym_POUND2,
    ACTIONS(310),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(296),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(59),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [468] = 9,
    ACTIONS(298),
    1,
    anon_sym_STAR3,
    ACTIONS(300),
    1,
    anon_sym__2,
    ACTIONS(302),
    1,
    anon_sym___,
    ACTIONS(304),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(306),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(308),
    1,
    anon_sym_POUND2,
    ACTIONS(310),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(312),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(64),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [500] = 9,
    ACTIONS(300),
    1,
    anon_sym__2,
    ACTIONS(302),
    1,
    anon_sym___,
    ACTIONS(304),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(306),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(308),
    1,
    anon_sym_POUND2,
    ACTIONS(310),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(316),
    1,
    anon_sym_STAR3,
    ACTIONS(314),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(63),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [532] = 9,
    ACTIONS(300),
    1,
    anon_sym__2,
    ACTIONS(302),
    1,
    anon_sym___,
    ACTIONS(304),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(306),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(308),
    1,
    anon_sym_POUND2,
    ACTIONS(310),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(316),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(318),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(62),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [564] = 9,
    ACTIONS(320),
    1,
    anon_sym_STAR2,
    ACTIONS(322),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(326),
    1,
    anon_sym__3,
    ACTIONS(328),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(330),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(332),
    1,
    anon_sym_POUND2,
    ACTIONS(334),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(324),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(61),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [596] = 9,
    ACTIONS(320),
    1,
    anon_sym_STAR2,
    ACTIONS(322),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(326),
    1,
    anon_sym___,
    ACTIONS(328),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(330),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(332),
    1,
    anon_sym_POUND2,
    ACTIONS(334),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(336),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(60),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [628] = 9,
    ACTIONS(320),
    1,
    anon_sym_STAR2,
    ACTIONS(322),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(328),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(330),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(332),
    1,
    anon_sym_POUND2,
    ACTIONS(334),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(340),
    1,
    anon_sym___,
    ACTIONS(338),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(50),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [660] = 9,
    ACTIONS(320),
    1,
    anon_sym_STAR2,
    ACTIONS(322),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(328),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(330),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(332),
    1,
    anon_sym_POUND2,
    ACTIONS(334),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(340),
    1,
    anon_sym__3,
    ACTIONS(338),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(50),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [692] = 9,
    ACTIONS(300),
    1,
    anon_sym__2,
    ACTIONS(302),
    1,
    anon_sym___,
    ACTIONS(304),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(306),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(308),
    1,
    anon_sym_POUND2,
    ACTIONS(310),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(344),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(342),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(49),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [724] = 9,
    ACTIONS(320),
    1,
    anon_sym_STAR2,
    ACTIONS(322),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(328),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(330),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(332),
    1,
    anon_sym_POUND2,
    ACTIONS(334),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(346),
    1,
    anon_sym___,
    ACTIONS(338),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(50),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [756] = 9,
    ACTIONS(320),
    1,
    anon_sym_STAR2,
    ACTIONS(322),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(328),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(330),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(332),
    1,
    anon_sym_POUND2,
    ACTIONS(334),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(346),
    1,
    anon_sym__3,
    ACTIONS(338),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(50),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [788] = 9,
    ACTIONS(300),
    1,
    anon_sym__2,
    ACTIONS(302),
    1,
    anon_sym___,
    ACTIONS(304),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(306),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(308),
    1,
    anon_sym_POUND2,
    ACTIONS(310),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(348),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(342),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(49),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [820] = 9,
    ACTIONS(300),
    1,
    anon_sym__2,
    ACTIONS(302),
    1,
    anon_sym___,
    ACTIONS(304),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(306),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(308),
    1,
    anon_sym_POUND2,
    ACTIONS(310),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(348),
    1,
    anon_sym_STAR3,
    ACTIONS(342),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(49),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [852] = 9,
    ACTIONS(300),
    1,
    anon_sym__2,
    ACTIONS(302),
    1,
    anon_sym___,
    ACTIONS(304),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(306),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(308),
    1,
    anon_sym_POUND2,
    ACTIONS(310),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(344),
    1,
    anon_sym_STAR3,
    ACTIONS(342),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(49),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [884] = 9,
    ACTIONS(320),
    1,
    anon_sym_STAR2,
    ACTIONS(322),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(328),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(330),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(332),
    1,
    anon_sym_POUND2,
    ACTIONS(334),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(352),
    1,
    anon_sym___,
    ACTIONS(350),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(57),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [916] = 9,
    ACTIONS(320),
    1,
    anon_sym_STAR2,
    ACTIONS(322),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(328),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(330),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(332),
    1,
    anon_sym_POUND2,
    ACTIONS(334),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(352),
    1,
    anon_sym__3,
    ACTIONS(354),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(58),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [948] = 1,
    ACTIONS(202),
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
    [961] = 1,
    ACTIONS(210),
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
    [974] = 1,
    ACTIONS(128),
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
    [987] = 1,
    ACTIONS(202),
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
    [1000] = 1,
    ACTIONS(132),
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
    [1013] = 1,
    ACTIONS(214),
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
    [1026] = 1,
    ACTIONS(198),
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
    [1039] = 1,
    ACTIONS(198),
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
    [1052] = 1,
    ACTIONS(186),
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
    [1065] = 1,
    ACTIONS(132),
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
    [1078] = 1,
    ACTIONS(186),
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
    [1091] = 1,
    ACTIONS(218),
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
    [1104] = 3,
    STATE(79),
    1,
    aux_sym_xref_repeat1,
    ACTIONS(356),
    2,
    anon_sym_COMMA,
    anon_sym_GT_GT,
    ACTIONS(358),
    3,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    [1117] = 5,
    ACTIONS(363),
    1,
    anon_sym_LBRACK,
    ACTIONS(365),
    1,
    anon_sym_LBRACE,
    STATE(86),
    1,
    aux_sym_inline_macro_repeat1,
    STATE(110),
    1,
    sym_replacement,
    ACTIONS(361),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1134] = 4,
    ACTIONS(367),
    1,
    anon_sym_COMMA,
    ACTIONS(371),
    1,
    anon_sym_GT_GT,
    STATE(79),
    1,
    aux_sym_xref_repeat1,
    ACTIONS(369),
    3,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    [1149] = 5,
    ACTIONS(373),
    1,
    aux_sym_inline_macro_token2,
    ACTIONS(375),
    1,
    anon_sym_RBRACK,
    ACTIONS(377),
    1,
    anon_sym_LBRACE,
    STATE(132),
    1,
    sym_link_label,
    STATE(92),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1166] = 5,
    ACTIONS(382),
    1,
    anon_sym_LBRACK,
    ACTIONS(384),
    1,
    anon_sym_LBRACE,
    STATE(83),
    1,
    aux_sym_inline_macro_repeat1,
    STATE(110),
    1,
    sym_replacement,
    ACTIONS(379),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1183] = 5,
    ACTIONS(365),
    1,
    anon_sym_LBRACE,
    ACTIONS(387),
    1,
    anon_sym_LBRACK,
    STATE(83),
    1,
    aux_sym_inline_macro_repeat1,
    STATE(110),
    1,
    sym_replacement,
    ACTIONS(361),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1200] = 5,
    ACTIONS(373),
    1,
    aux_sym_inline_macro_token2,
    ACTIONS(377),
    1,
    anon_sym_LBRACE,
    ACTIONS(389),
    1,
    anon_sym_RBRACK,
    STATE(146),
    1,
    sym_link_label,
    STATE(92),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1217] = 5,
    ACTIONS(365),
    1,
    anon_sym_LBRACE,
    ACTIONS(391),
    1,
    anon_sym_LBRACK,
    STATE(83),
    1,
    aux_sym_inline_macro_repeat1,
    STATE(110),
    1,
    sym_replacement,
    ACTIONS(361),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1234] = 5,
    ACTIONS(365),
    1,
    anon_sym_LBRACE,
    ACTIONS(393),
    1,
    anon_sym_LBRACK,
    STATE(84),
    1,
    aux_sym_inline_macro_repeat1,
    STATE(110),
    1,
    sym_replacement,
    ACTIONS(361),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1251] = 3,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(395),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    ACTIONS(398),
    2,
    anon_sym_POUND3,
    anon_sym_POUND_POUND,
    [1263] = 4,
    ACTIONS(400),
    1,
    aux_sym_inline_macro_token2,
    ACTIONS(403),
    1,
    anon_sym_RBRACK,
    ACTIONS(405),
    1,
    anon_sym_LBRACE,
    STATE(89),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1277] = 1,
    ACTIONS(408),
    5,
    anon_sym_COMMA,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    anon_sym_GT_GT,
    [1285] = 3,
    STATE(91),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(410),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    ACTIONS(413),
    2,
    anon_sym_BQUOTE3,
    anon_sym_BQUOTE_BQUOTE,
    [1297] = 4,
    ACTIONS(377),
    1,
    anon_sym_LBRACE,
    ACTIONS(415),
    1,
    aux_sym_inline_macro_token2,
    ACTIONS(417),
    1,
    anon_sym_RBRACK,
    STATE(89),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1311] = 3,
    ACTIONS(421),
    1,
    anon_sym_BQUOTE3,
    STATE(91),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(419),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1322] = 3,
    ACTIONS(425),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(117),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(423),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1333] = 3,
    ACTIONS(430),
    1,
    anon_sym_GT_GT,
    STATE(95),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(427),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [1344] = 3,
    ACTIONS(434),
    1,
    anon_sym_POUND_POUND,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(432),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1355] = 3,
    ACTIONS(438),
    1,
    anon_sym_GT_GT,
    STATE(95),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(436),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [1366] = 3,
    ACTIONS(434),
    1,
    anon_sym_POUND3,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(432),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1377] = 3,
    ACTIONS(440),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(91),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(419),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1388] = 3,
    ACTIONS(440),
    1,
    anon_sym_BQUOTE3,
    STATE(91),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(419),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1399] = 3,
    ACTIONS(444),
    1,
    anon_sym_POUND_POUND,
    STATE(96),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(442),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1410] = 1,
    ACTIONS(156),
    4,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    anon_sym_LBRACK,
    anon_sym_LBRACE,
    [1417] = 3,
    ACTIONS(446),
    1,
    anon_sym_DOT,
    STATE(109),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(109),
    2,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    [1428] = 3,
    ACTIONS(444),
    1,
    anon_sym_POUND3,
    STATE(98),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(448),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1439] = 3,
    ACTIONS(452),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(99),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(450),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1450] = 3,
    ACTIONS(452),
    1,
    anon_sym_BQUOTE3,
    STATE(100),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(454),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1461] = 2,
    STATE(81),
    1,
    aux_sym_xref_repeat1,
    ACTIONS(369),
    3,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    [1470] = 3,
    ACTIONS(458),
    1,
    anon_sym_BQUOTE3,
    STATE(93),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(456),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1481] = 3,
    ACTIONS(446),
    1,
    anon_sym_DOT,
    STATE(113),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(115),
    2,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    [1492] = 1,
    ACTIONS(460),
    4,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    anon_sym_LBRACK,
    anon_sym_LBRACE,
    [1499] = 3,
    ACTIONS(462),
    1,
    anon_sym_POUND_POUND,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(432),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1510] = 3,
    ACTIONS(464),
    1,
    anon_sym_POUND_POUND,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(432),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1521] = 3,
    ACTIONS(466),
    1,
    anon_sym_DOT,
    STATE(113),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(119),
    2,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    [1532] = 3,
    ACTIONS(462),
    1,
    anon_sym_POUND3,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(432),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1543] = 3,
    ACTIONS(421),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(91),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(419),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1554] = 3,
    ACTIONS(464),
    1,
    anon_sym_POUND3,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(432),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1565] = 3,
    ACTIONS(469),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(91),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(419),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1576] = 3,
    ACTIONS(469),
    1,
    anon_sym_BQUOTE3,
    STATE(91),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(419),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1587] = 3,
    ACTIONS(458),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(115),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(471),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1598] = 3,
    ACTIONS(475),
    1,
    anon_sym_POUND3,
    STATE(114),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(473),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1609] = 3,
    ACTIONS(475),
    1,
    anon_sym_POUND_POUND,
    STATE(111),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(477),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1620] = 3,
    ACTIONS(481),
    1,
    anon_sym_POUND_POUND,
    STATE(112),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(479),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1631] = 3,
    ACTIONS(481),
    1,
    anon_sym_POUND3,
    STATE(116),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(483),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1642] = 3,
    ACTIONS(425),
    1,
    anon_sym_BQUOTE3,
    STATE(118),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(485),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1653] = 1,
    ACTIONS(119),
    3,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    anon_sym_DOT,
    [1659] = 1,
    ACTIONS(487),
    3,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    anon_sym_GT_GT,
    [1665] = 2,
    STATE(97),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(436),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [1673] = 1,
    ACTIONS(156),
    3,
    aux_sym_inline_macro_token2,
    anon_sym_RBRACK,
    anon_sym_LBRACE,
    [1679] = 2,
    ACTIONS(489),
    1,
    anon_sym_LBRACK,
    ACTIONS(491),
    1,
    anon_sym_DQUOTE,
    [1686] = 2,
    ACTIONS(493),
    1,
    anon_sym_COMMA,
    ACTIONS(495),
    1,
    anon_sym_RBRACK_RBRACK,
    [1693] = 1,
    ACTIONS(497),
    1,
    sym__link_component,
    [1697] = 1,
    ACTIONS(499),
    1,
    anon_sym_RBRACK,
    [1701] = 1,
    ACTIONS(501),
    1,
    ts_builtin_sym_end,
    [1705] = 1,
    ACTIONS(503),
    1,
    anon_sym_PLUS,
    [1709] = 1,
    ACTIONS(505),
    1,
    sym__link_component,
    [1713] = 1,
    ACTIONS(503),
    1,
    anon_sym_PLUS_PLUS_PLUS,
    [1717] = 1,
    ACTIONS(503),
    1,
    anon_sym_DOLLAR_DOLLAR,
    [1721] = 1,
    ACTIONS(507),
    1,
    aux_sym_replacement_token1,
    [1725] = 1,
    ACTIONS(509),
    1,
    aux_sym_anchor_token2,
    [1729] = 1,
    ACTIONS(511),
    1,
    aux_sym_anchor_token1,
    [1733] = 1,
    ACTIONS(513),
    1,
    anon_sym_DQUOTE,
    [1737] = 1,
    ACTIONS(515),
    1,
    aux_sym_anchor_token1,
    [1741] = 1,
    ACTIONS(517),
    1,
    anon_sym_RBRACE,
    [1745] = 1,
    ACTIONS(519),
    1,
    sym__link_component,
    [1749] = 1,
    ACTIONS(521),
    1,
    anon_sym_DQUOTE,
    [1753] = 1,
    ACTIONS(523),
    1,
    anon_sym_RBRACK,
    [1757] = 1,
    ACTIONS(525),
    1,
    anon_sym_RBRACE,
    [1761] = 1,
    ACTIONS(527),
    1,
    anon_sym_RBRACK_RBRACK,
    [1765] = 1,
    ACTIONS(529),
    1,
    anon_sym_COLON,
    [1769] = 1,
    ACTIONS(531),
    1,
    sym__link_component,
    [1773] = 1,
    ACTIONS(533),
    1,
    anon_sym_RBRACE,
    [1777] = 1,
    ACTIONS(535),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [1781] = 1,
    ACTIONS(537),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [1785] = 1,
    ACTIONS(539),
    1,
    aux_sym_replacement_token1,
    [1789] = 1,
    ACTIONS(541),
    1,
    aux_sym_anchor_token1,
    [1793] = 1,
    ACTIONS(543),
    1,
    anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(35)] = 0,
    [SMALL_STATE(36)] = 30,
    [SMALL_STATE(37)] = 60,
    [SMALL_STATE(38)] = 90,
    [SMALL_STATE(39)] = 120,
    [SMALL_STATE(40)] = 150,
    [SMALL_STATE(41)] = 180,
    [SMALL_STATE(42)] = 210,
    [SMALL_STATE(43)] = 240,
    [SMALL_STATE(44)] = 270,
    [SMALL_STATE(45)] = 290,
    [SMALL_STATE(46)] = 310,
    [SMALL_STATE(47)] = 330,
    [SMALL_STATE(48)] = 350,
    [SMALL_STATE(49)] = 370,
    [SMALL_STATE(50)] = 403,
    [SMALL_STATE(51)] = 436,
    [SMALL_STATE(52)] = 468,
    [SMALL_STATE(53)] = 500,
    [SMALL_STATE(54)] = 532,
    [SMALL_STATE(55)] = 564,
    [SMALL_STATE(56)] = 596,
    [SMALL_STATE(57)] = 628,
    [SMALL_STATE(58)] = 660,
    [SMALL_STATE(59)] = 692,
    [SMALL_STATE(60)] = 724,
    [SMALL_STATE(61)] = 756,
    [SMALL_STATE(62)] = 788,
    [SMALL_STATE(63)] = 820,
    [SMALL_STATE(64)] = 852,
    [SMALL_STATE(65)] = 884,
    [SMALL_STATE(66)] = 916,
    [SMALL_STATE(67)] = 948,
    [SMALL_STATE(68)] = 961,
    [SMALL_STATE(69)] = 974,
    [SMALL_STATE(70)] = 987,
    [SMALL_STATE(71)] = 1000,
    [SMALL_STATE(72)] = 1013,
    [SMALL_STATE(73)] = 1026,
    [SMALL_STATE(74)] = 1039,
    [SMALL_STATE(75)] = 1052,
    [SMALL_STATE(76)] = 1065,
    [SMALL_STATE(77)] = 1078,
    [SMALL_STATE(78)] = 1091,
    [SMALL_STATE(79)] = 1104,
    [SMALL_STATE(80)] = 1117,
    [SMALL_STATE(81)] = 1134,
    [SMALL_STATE(82)] = 1149,
    [SMALL_STATE(83)] = 1166,
    [SMALL_STATE(84)] = 1183,
    [SMALL_STATE(85)] = 1200,
    [SMALL_STATE(86)] = 1217,
    [SMALL_STATE(87)] = 1234,
    [SMALL_STATE(88)] = 1251,
    [SMALL_STATE(89)] = 1263,
    [SMALL_STATE(90)] = 1277,
    [SMALL_STATE(91)] = 1285,
    [SMALL_STATE(92)] = 1297,
    [SMALL_STATE(93)] = 1311,
    [SMALL_STATE(94)] = 1322,
    [SMALL_STATE(95)] = 1333,
    [SMALL_STATE(96)] = 1344,
    [SMALL_STATE(97)] = 1355,
    [SMALL_STATE(98)] = 1366,
    [SMALL_STATE(99)] = 1377,
    [SMALL_STATE(100)] = 1388,
    [SMALL_STATE(101)] = 1399,
    [SMALL_STATE(102)] = 1410,
    [SMALL_STATE(103)] = 1417,
    [SMALL_STATE(104)] = 1428,
    [SMALL_STATE(105)] = 1439,
    [SMALL_STATE(106)] = 1450,
    [SMALL_STATE(107)] = 1461,
    [SMALL_STATE(108)] = 1470,
    [SMALL_STATE(109)] = 1481,
    [SMALL_STATE(110)] = 1492,
    [SMALL_STATE(111)] = 1499,
    [SMALL_STATE(112)] = 1510,
    [SMALL_STATE(113)] = 1521,
    [SMALL_STATE(114)] = 1532,
    [SMALL_STATE(115)] = 1543,
    [SMALL_STATE(116)] = 1554,
    [SMALL_STATE(117)] = 1565,
    [SMALL_STATE(118)] = 1576,
    [SMALL_STATE(119)] = 1587,
    [SMALL_STATE(120)] = 1598,
    [SMALL_STATE(121)] = 1609,
    [SMALL_STATE(122)] = 1620,
    [SMALL_STATE(123)] = 1631,
    [SMALL_STATE(124)] = 1642,
    [SMALL_STATE(125)] = 1653,
    [SMALL_STATE(126)] = 1659,
    [SMALL_STATE(127)] = 1665,
    [SMALL_STATE(128)] = 1673,
    [SMALL_STATE(129)] = 1679,
    [SMALL_STATE(130)] = 1686,
    [SMALL_STATE(131)] = 1693,
    [SMALL_STATE(132)] = 1697,
    [SMALL_STATE(133)] = 1701,
    [SMALL_STATE(134)] = 1705,
    [SMALL_STATE(135)] = 1709,
    [SMALL_STATE(136)] = 1713,
    [SMALL_STATE(137)] = 1717,
    [SMALL_STATE(138)] = 1721,
    [SMALL_STATE(139)] = 1725,
    [SMALL_STATE(140)] = 1729,
    [SMALL_STATE(141)] = 1733,
    [SMALL_STATE(142)] = 1737,
    [SMALL_STATE(143)] = 1741,
    [SMALL_STATE(144)] = 1745,
    [SMALL_STATE(145)] = 1749,
    [SMALL_STATE(146)] = 1753,
    [SMALL_STATE(147)] = 1757,
    [SMALL_STATE(148)] = 1761,
    [SMALL_STATE(149)] = 1765,
    [SMALL_STATE(150)] = 1769,
    [SMALL_STATE(151)] = 1773,
    [SMALL_STATE(152)] = 1777,
    [SMALL_STATE(153)] = 1781,
    [SMALL_STATE(154)] = 1785,
    [SMALL_STATE(155)] = 1789,
    [SMALL_STATE(156)] = 1793,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(149),
    [5] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(2),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(4),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(5),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(6),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(155),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(153),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(142),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(140),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(107),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(53),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(54),
    [27] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(55),
    [29] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(56),
    [31] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(108),
    [33] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(119),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(120),
    [37] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(121),
    [39] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [41] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(3),
    [43] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    [45] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(149),
    [48] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(3),
    [51] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(4),
    [54] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(5),
    [57] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(6),
    [60] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(155),
    [63] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(153),
    [66] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(142),
    [69] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(140),
    [72] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(107),
    [75] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(53),
    [78] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(54),
    [81] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(55),
    [84] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(56),
    [87] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(108),
    [90] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(119),
    [93] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(120),
    [96] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(121),
    [99] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__punctuation, 1, 0, 0),
    [101] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__punctuation, 1, 0, 0),
    [103] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(143),
    [105] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(152),
    [107] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(134),
    [109] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 3, 0, 0),
    [111] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 3, 0, 0),
    [113] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(150),
    [115] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 4, 0, 0),
    [117] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 4, 0, 0),
    [119] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [121] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [123] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(150),
    [126] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [128] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [130] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 2, 0, 0),
    [132] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 2, 0, 0),
    [134] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [136] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [138] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [140] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [142] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 5, 0, 4),
    [144] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 5, 0, 4),
    [146] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 5, 0, 1),
    [148] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 5, 0, 1),
    [150] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 5, 0, 0),
    [152] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 5, 0, 0),
    [154] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 0),
    [156] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 0),
    [158] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 5, 0, 3),
    [160] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 5, 0, 3),
    [162] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 6, 0, 5),
    [164] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 6, 0, 5),
    [166] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 5, 0, 2),
    [168] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 5, 0, 2),
    [170] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [172] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [174] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(82),
    [176] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [178] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [180] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [182] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [184] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 2, 0, 0),
    [186] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 2, 0, 0),
    [188] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 4, 0, 0),
    [190] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 4, 0, 0),
    [192] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 3, 0, 1),
    [194] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 3, 0, 1),
    [196] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 3, 0, 0),
    [198] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 3, 0, 0),
    [200] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 3, 0, 0),
    [202] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 3, 0, 0),
    [204] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 3, 0, 1),
    [206] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 3, 0, 1),
    [208] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [210] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [212] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [214] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [216] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [218] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [220] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(156),
    [222] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(44),
    [224] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(21),
    [226] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(19),
    [228] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(46),
    [230] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(45),
    [232] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(156),
    [235] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(44),
    [238] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0),
    [240] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(26),
    [242] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(20),
    [244] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(48),
    [246] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(47),
    [248] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 1, 0, 0),
    [250] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(49),
    [253] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    [255] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(66),
    [258] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(65),
    [261] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(124),
    [264] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(94),
    [267] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(123),
    [270] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(122),
    [273] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(52),
    [276] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(51),
    [279] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(50),
    [282] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    [284] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(106),
    [287] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(105),
    [290] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(104),
    [293] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(101),
    [296] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(59),
    [298] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(68),
    [300] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(66),
    [302] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(65),
    [304] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(124),
    [306] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(94),
    [308] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(123),
    [310] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(122),
    [312] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(64),
    [314] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(63),
    [316] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(32),
    [318] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [320] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(52),
    [322] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(51),
    [324] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(61),
    [326] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(34),
    [328] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(106),
    [330] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(105),
    [332] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(104),
    [334] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(101),
    [336] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(60),
    [338] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(50),
    [340] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(72),
    [342] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(49),
    [344] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(69),
    [346] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(33),
    [348] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(10),
    [350] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(57),
    [352] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(78),
    [354] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(58),
    [356] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 2, 0, 0),
    [358] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 2, 0, 0),
    SHIFT_REPEAT(90),
    [361] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(110),
    [363] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(40),
    [365] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(138),
    [367] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(127),
    [369] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(90),
    [371] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(27),
    [373] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(92),
    [375] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(28),
    [377] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(154),
    [379] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(110),
    [382] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 2, 0, 0),
    [384] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(138),
    [387] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(37),
    [389] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(145),
    [391] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(36),
    [393] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(42),
    [395] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    SHIFT_REPEAT(88),
    [398] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    [400] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    SHIFT_REPEAT(89),
    [403] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    [405] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    SHIFT_REPEAT(154),
    [408] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 1, 0, 0),
    [410] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    SHIFT_REPEAT(91),
    [413] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    [415] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(89),
    [417] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_label, 1, 0, 0),
    [419] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(91),
    [421] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(30),
    [423] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(117),
    [425] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(77),
    [427] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 2, 0, 0),
    SHIFT_REPEAT(126),
    [430] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 2, 0, 0),
    [432] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(88),
    [434] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(73),
    [436] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(126),
    [438] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(14),
    [440] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(67),
    [442] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(96),
    [444] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(71),
    [446] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(131),
    [448] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(98),
    [450] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(99),
    [452] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(75),
    [454] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(100),
    [456] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(93),
    [458] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(25),
    [460] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 1, 0, 0),
    [462] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(29),
    [464] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(74),
    [466] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(131),
    [469] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(70),
    [471] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(115),
    [473] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(114),
    [475] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(11),
    [477] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(111),
    [479] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(112),
    [481] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(76),
    [483] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(116),
    [485] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(118),
    [487] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 1, 0, 0),
    [489] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [491] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [493] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(139),
    [495] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [497] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(125),
    [499] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [501] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [503] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [505] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [507] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(151),
    [509] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(148),
    [511] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(137),
    [513] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [515] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(136),
    [517] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [519] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(103),
    [521] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [523] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(141),
    [525] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(128),
    [527] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [529] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [531] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [533] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(102),
    [535] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(144),
    [537] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(135),
    [539] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(147),
    [541] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(130),
    [543] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
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
