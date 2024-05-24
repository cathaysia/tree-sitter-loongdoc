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
#define STATE_COUNT 160
#define LARGE_STATE_COUNT 40
#define SYMBOL_COUNT 122
#define ALIAS_COUNT 3
#define TOKEN_COUNT 96
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

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
    anon_sym_COLON = 13,
    aux_sym_inline_macro_token1 = 14,
    anon_sym_BSLASH_LBRACK = 15,
    anon_sym_LBRACK = 16,
    aux_sym_inline_macro_token2 = 17,
    anon_sym_BSLASH_RBRACK = 18,
    anon_sym_RBRACK = 19,
    anon_sym_LBRACE = 20,
    aux_sym_replacement_token1 = 21,
    anon_sym_RBRACE = 22,
    sym__word_no_digit = 23,
    sym__digits = 24,
    anon_sym_BANG = 25,
    anon_sym_DQUOTE = 26,
    anon_sym_POUND = 27,
    anon_sym_DOLLAR = 28,
    anon_sym_PERCENT = 29,
    anon_sym_AMP = 30,
    anon_sym_SQUOTE = 31,
    anon_sym_LPAREN = 32,
    anon_sym_RPAREN = 33,
    anon_sym_STAR = 34,
    anon_sym_PLUS = 35,
    anon_sym_COMMA = 36,
    anon_sym_DASH = 37,
    anon_sym_DOT = 38,
    anon_sym_SLASH = 39,
    anon_sym_COLON2 = 40,
    anon_sym_SEMI = 41,
    anon_sym_LT = 42,
    anon_sym_EQ = 43,
    anon_sym_GT = 44,
    anon_sym_QMARK = 45,
    anon_sym_AT = 46,
    anon_sym_BSLASH = 47,
    anon_sym_CARET = 48,
    anon_sym__ = 49,
    anon_sym_BQUOTE = 50,
    anon_sym_PIPE = 51,
    anon_sym_TILDE = 52,
    anon_sym_LBRACK_LBRACK = 53,
    aux_sym_anchor_token1 = 54,
    aux_sym_anchor_token2 = 55,
    anon_sym_RBRACK_RBRACK = 56,
    anon_sym_anchor = 57,
    aux_sym_anchor_token3 = 58,
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
    anon_sym_xref = 75,
    anon_sym_STAR2 = 76,
    aux_sym_emphasis_token1 = 77,
    anon_sym_BSLASH_STAR = 78,
    anon_sym_STAR3 = 79,
    anon_sym_STAR_STAR = 80,
    anon_sym__2 = 81,
    aux_sym_ltalic_token1 = 82,
    anon_sym_BSLASH_ = 83,
    anon_sym__3 = 84,
    anon_sym___ = 85,
    anon_sym_BQUOTE2 = 86,
    aux_sym_monospace_token1 = 87,
    anon_sym_BSLASH_BQUOTE = 88,
    anon_sym_BQUOTE3 = 89,
    anon_sym_BQUOTE_BQUOTE = 90,
    anon_sym_POUND2 = 91,
    aux_sym_highlight_token1 = 92,
    anon_sym_BSLASH_POUND = 93,
    anon_sym_POUND3 = 94,
    anon_sym_POUND_POUND = 95,
    sym_inline = 96,
    sym_inline_macro = 97,
    sym_replacement = 98,
    sym__word = 99,
    sym__punctuation = 100,
    sym_anchor = 101,
    sym_auto_link = 102,
    sym_link_label = 103,
    sym_link_url = 104,
    sym_passthrough = 105,
    sym_xref = 106,
    sym_emphasis = 107,
    sym_ltalic = 108,
    sym_monospace = 109,
    sym_highlight = 110,
    aux_sym_inline_repeat1 = 111,
    aux_sym_inline_macro_repeat1 = 112,
    aux_sym_inline_macro_repeat2 = 113,
    aux_sym_link_label_repeat1 = 114,
    aux_sym_link_url_repeat1 = 115,
    aux_sym_xref_repeat1 = 116,
    aux_sym_xref_repeat2 = 117,
    aux_sym_emphasis_repeat1 = 118,
    aux_sym_ltalic_repeat1 = 119,
    aux_sym_monospace_repeat1 = 120,
    aux_sym_highlight_repeat1 = 121,
    alias_sym_attr = 122,
    alias_sym_id = 123,
    alias_sym_target = 124,
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
    [anon_sym_anchor] = "anchor",
    [aux_sym_anchor_token3] = "reftext",
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
    [anon_sym_anchor] = anon_sym_anchor,
    [aux_sym_anchor_token3] = aux_sym_anchor_token2,
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
    [anon_sym_anchor] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_anchor_token3] = {
        .visible = true,
        .named = true,
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
        [3] = aux_sym_anchor_token2,
    },
    [6] = {
        [2] = alias_sym_id,
    },
    [7] = {
        [2] = alias_sym_target,
        [4] = alias_sym_attr,
    },
    [8] = {
        [2] = alias_sym_id,
        [4] = aux_sym_anchor_token2,
    },
};

static const uint16_t ts_non_terminal_alias_map[] = {
    aux_sym_inline_macro_repeat1,
    3,
    aux_sym_inline_macro_repeat1,
    alias_sym_id,
    alias_sym_target,
    aux_sym_inline_macro_repeat2,
    3,
    aux_sym_inline_macro_repeat2,
    alias_sym_attr,
    aux_sym_anchor_token2,
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
    [47] = 44,
    [48] = 46,
    [49] = 42,
    [50] = 43,
    [51] = 51,
    [52] = 45,
    [53] = 53,
    [54] = 54,
    [55] = 54,
    [56] = 53,
    [57] = 51,
    [58] = 14,
    [59] = 14,
    [60] = 38,
    [61] = 10,
    [62] = 29,
    [63] = 29,
    [64] = 10,
    [65] = 13,
    [66] = 15,
    [67] = 38,
    [68] = 39,
    [69] = 36,
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
    [98] = 94,
    [99] = 99,
    [100] = 89,
    [101] = 83,
    [102] = 84,
    [103] = 85,
    [104] = 89,
    [105] = 105,
    [106] = 91,
    [107] = 107,
    [108] = 83,
    [109] = 84,
    [110] = 110,
    [111] = 85,
    [112] = 86,
    [113] = 113,
    [114] = 86,
    [115] = 87,
    [116] = 91,
    [117] = 94,
    [118] = 87,
    [119] = 9,
    [120] = 4,
    [121] = 5,
    [122] = 122,
    [123] = 28,
    [124] = 26,
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
    [140] = 134,
    [141] = 139,
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
    [155] = 150,
    [156] = 156,
    [157] = 157,
    [158] = 158,
    [159] = 143,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(75);
            ADVANCE_MAP(
                ' ', 2,
                '!', 372,
                '"', 375,
                '#', 377,
                '$', 379,
                '%', 381,
                '&', 383,
                '\'', 385,
                '(', 387,
                ')', 389,
                '*', 391,
                '+', 394,
                ',', 396,
                '-', 398,
                '.', 400,
                '/', 402,
                ':', 112,
                ';', 406,
                '<', 408,
                '=', 410,
                '>', 412,
                '?', 414,
                '@', 416,
                '[', 118,
                '\\', 418,
                ']', 125,
                '^', 420,
                '_', 422,
                '`', 428,
                'a', 277,
                'b', 294,
                'f', 268,
                'h', 297,
                'i', 253,
                'k', 250,
                'l', 247,
                'm', 244,
                'p', 245,
                'x', 290,
                '{', 128,
                '|', 430,
                '}', 241,
                '~', 432,
                0x0b, 242,
                '\f', 242,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(72);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(370);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0)
                ADVANCE(369);
            END_STATE();
        case 1:
            ADVANCE_MAP(
                ' ', 2,
                '!', 372,
                '"', 375,
                '#', 377,
                '$', 379,
                '%', 381,
                '&', 383,
                '\'', 385,
                '(', 387,
                ')', 389,
                '*', 391,
                '+', 394,
                ',', 396,
                '-', 398,
                '.', 400,
                '/', 402,
                ':', 404,
                ';', 406,
                '<', 408,
                '=', 410,
                '>', 412,
                '?', 414,
                '@', 416,
                '[', 118,
                '\\', 418,
                ']', 125,
                '^', 420,
                '_', 422,
                '`', 428,
                'a', 277,
                'b', 294,
                'f', 268,
                'h', 297,
                'i', 253,
                'k', 250,
                'l', 247,
                'm', 244,
                'p', 245,
                'x', 290,
                '{', 128,
                '|', 430,
                '}', 241,
                '~', 432,
                0x0b, 242,
                '\f', 242,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(1);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(370);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0)
                ADVANCE(369);
            END_STATE();
        case 2:
            ADVANCE_MAP(
                ' ', 2,
                '!', 372,
                '"', 375,
                '#', 527,
                '$', 379,
                '%', 381,
                '&', 383,
                '\'', 385,
                '(', 387,
                ')', 389,
                '*', 488,
                '+', 394,
                ',', 396,
                '-', 398,
                '.', 400,
                '/', 402,
                ':', 404,
                ';', 406,
                '<', 408,
                '=', 410,
                '>', 412,
                '?', 414,
                '@', 416,
                '[', 118,
                '\\', 418,
                ']', 125,
                '^', 420,
                '_', 501,
                '`', 518,
                'a', 277,
                'b', 294,
                'f', 268,
                'h', 297,
                'i', 253,
                'k', 250,
                'l', 247,
                'm', 244,
                'p', 245,
                'x', 290,
                '{', 128,
                '|', 430,
                '}', 241,
                '~', 432,
                0x0b, 242,
                '\f', 242,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(1);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(370);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0)
                ADVANCE(369);
            END_STATE();
        case 3:
            ADVANCE_MAP(
                ' ', 4,
                '!', 372,
                '"', 375,
                '#', 377,
                '$', 379,
                '%', 381,
                '&', 383,
                '\'', 385,
                '(', 387,
                ')', 389,
                '*', 391,
                '+', 394,
                ',', 396,
                '-', 398,
                '.', 400,
                '/', 402,
                ':', 404,
                ';', 406,
                '<', 408,
                '=', 410,
                '>', 412,
                '?', 414,
                '@', 416,
                '[', 118,
                '\\', 418,
                ']', 125,
                '^', 420,
                '_', 424,
                '`', 428,
                'a', 339,
                'b', 356,
                'f', 330,
                'h', 359,
                'i', 315,
                'k', 312,
                'l', 309,
                'm', 306,
                'p', 307,
                'x', 352,
                '{', 128,
                '|', 430,
                '}', 241,
                '~', 432,
                0x0b, 243,
                '\f', 243,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(3);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(371);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
            if(lookahead != 0)
                ADVANCE(369);
            END_STATE();
        case 4:
            ADVANCE_MAP(
                ' ', 4,
                '!', 372,
                '"', 375,
                '#', 527,
                '$', 379,
                '%', 381,
                '&', 383,
                '\'', 385,
                '(', 387,
                ')', 389,
                '*', 488,
                '+', 394,
                ',', 396,
                '-', 398,
                '.', 400,
                '/', 402,
                ':', 404,
                ';', 406,
                '<', 408,
                '=', 410,
                '>', 412,
                '?', 414,
                '@', 416,
                '[', 118,
                '\\', 418,
                ']', 125,
                '^', 420,
                '_', 501,
                '`', 518,
                'a', 339,
                'b', 356,
                'f', 330,
                'h', 359,
                'i', 315,
                'k', 312,
                'l', 309,
                'm', 306,
                'p', 307,
                'x', 352,
                '{', 128,
                '|', 430,
                '}', 241,
                '~', 432,
                0x0b, 243,
                '\f', 243,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(3);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(371);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
            if(lookahead != 0)
                ADVANCE(369);
            END_STATE();
        case 5:
            if(lookahead == ' ')
                ADVANCE(490);
            if(lookahead == '#')
                ADVANCE(492);
            if(lookahead == '*')
                ADVANCE(6);
            if(lookahead == '\\')
                ADVANCE(493);
            if(lookahead == '_')
                ADVANCE(494);
            if(lookahead == '`')
                ADVANCE(495);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(5);
            if(('\t' <= lookahead && lookahead <= '\f'))
                ADVANCE(491);
            if(lookahead != 0)
                ADVANCE(489);
            END_STATE();
        case 6:
            if(lookahead == ' ')
                ADVANCE(497);
            if(lookahead == '*')
                ADVANCE(498);
            END_STATE();
        case 7:
            if(lookahead == ' ')
                ADVANCE(503);
            if(lookahead == '#')
                ADVANCE(505);
            if(lookahead == '*')
                ADVANCE(506);
            if(lookahead == '\\')
                ADVANCE(507);
            if(lookahead == '_')
                ADVANCE(8);
            if(lookahead == '`')
                ADVANCE(508);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(7);
            if(('\t' <= lookahead && lookahead <= '\f'))
                ADVANCE(504);
            if(lookahead != 0)
                ADVANCE(502);
            END_STATE();
        case 8:
            if(lookahead == ' ')
                ADVANCE(510);
            if(lookahead == '_')
                ADVANCE(511);
            END_STATE();
        case 9:
            if(lookahead == ' ')
                ADVANCE(523);
            if(lookahead == '`')
                ADVANCE(524);
            END_STATE();
        case 10:
            if(lookahead == ' ')
                ADVANCE(532);
            if(lookahead == '#')
                ADVANCE(533);
            END_STATE();
        case 11:
            if(lookahead == '"')
                ADVANCE(56);
            if(lookahead == '\\')
                ADVANCE(71);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(11);
            END_STATE();
        case 12:
            ADVANCE_MAP(
                '"', 374,
                '$', 14,
                '+', 393,
                ',', 396,
                '.', 400,
                ':', 404,
                '[', 117,
                ']', 66,
                '}', 240,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(12);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(439);
            END_STATE();
        case 13:
            if(lookahead == '#')
                ADVANCE(10);
            if(lookahead == '\\')
                ADVANCE(529);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(13);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(530);
            if(lookahead != 0)
                ADVANCE(528);
            END_STATE();
        case 14:
            if(lookahead == '$')
                ADVANCE(471);
            END_STATE();
        case 15:
            if(lookahead == '+')
                ADVANCE(469);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 16:
            if(lookahead == '+')
                ADVANCE(18);
            if(lookahead == ':')
                ADVANCE(49);
            if(lookahead == ']')
                ADVANCE(125);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(16);
            END_STATE();
        case 17:
            if(lookahead == '+')
                ADVANCE(468);
            END_STATE();
        case 18:
            if(lookahead == '+')
                ADVANCE(17);
            END_STATE();
        case 19:
            if(lookahead == ',')
                ADVANCE(396);
            if(lookahead == '>')
                ADVANCE(55);
            if(lookahead == '\\')
                ADVANCE(477);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(478);
            if(lookahead != 0)
                ADVANCE(476);
            END_STATE();
        case 20:
            if(lookahead == '-')
                ADVANCE(21);
            if(lookahead == '.')
                ADVANCE(69);
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
                ADVANCE(449);
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
                ADVANCE(61);
            if(lookahead == ']')
                ADVANCE(448);
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
                ADVANCE(61);
            if(lookahead == ']')
                ADVANCE(448);
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
                ADVANCE(61);
            if(lookahead == ']')
                ADVANCE(448);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(28);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            END_STATE();
        case 27:
            if(lookahead == '-')
                ADVANCE(30);
            if(lookahead == ':')
                ADVANCE(61);
            if(lookahead == ']')
                ADVANCE(448);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(26);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            END_STATE();
        case 28:
            if(lookahead == '-')
                ADVANCE(30);
            if(lookahead == ':')
                ADVANCE(61);
            if(lookahead == ']')
                ADVANCE(448);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            END_STATE();
        case 29:
            if(lookahead == '-')
                ADVANCE(30);
            if(lookahead == ':')
                ADVANCE(61);
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
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 32:
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(466);
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
            if(lookahead == ':')
                ADVANCE(112);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(440);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(441);
            END_STATE();
        case 54:
            if(lookahead == '>')
                ADVANCE(55);
            if(lookahead == '\\')
                ADVANCE(482);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(483);
            if(lookahead != 0)
                ADVANCE(481);
            END_STATE();
        case 55:
            if(lookahead == '>')
                ADVANCE(484);
            END_STATE();
        case 56:
            if(lookahead == '@')
                ADVANCE(57);
            END_STATE();
        case 57:
            if(lookahead == '[')
                ADVANCE(50);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            END_STATE();
        case 58:
            if(lookahead == '[')
                ADVANCE(117);
            if(lookahead == '\\')
                ADVANCE(114);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(115);
            if(lookahead != 0)
                ADVANCE(113);
            END_STATE();
        case 59:
            if(lookahead == '\\')
                ADVANCE(60);
            if(lookahead == ']')
                ADVANCE(450);
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
                ADVANCE(450);
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
                ADVANCE(235);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(232);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 63:
            if(lookahead == '\\')
                ADVANCE(521);
            if(lookahead == '`')
                ADVANCE(9);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(63);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(520);
            if(lookahead != 0)
                ADVANCE(519);
            END_STATE();
        case 64:
            if(lookahead == '\\')
                ADVANCE(122);
            if(lookahead == ']')
                ADVANCE(125);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(121);
            if(lookahead != 0)
                ADVANCE(120);
            END_STATE();
        case 65:
            if(lookahead == ']')
                ADVANCE(125);
            if(lookahead == '{')
                ADVANCE(127);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(123);
            if(lookahead != 0)
                ADVANCE(120);
            END_STATE();
        case 66:
            if(lookahead == ']')
                ADVANCE(442);
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
                ADVANCE(369);
            END_STATE();
        case 68:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(68);
            if(lookahead != 0 &&
               lookahead != '.' &&
               lookahead != '>' &&
               lookahead != '[')
                ADVANCE(467);
            END_STATE();
        case 69:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(449);
            END_STATE();
        case 70:
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
        case 71:
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(11);
            END_STATE();
        case 72:
            if(eof)
                ADVANCE(75);
            ADVANCE_MAP(
                ' ', 2,
                '!', 372,
                '"', 375,
                '#', 377,
                '$', 379,
                '%', 381,
                '&', 383,
                '\'', 385,
                '(', 387,
                ')', 389,
                '*', 391,
                '+', 394,
                ',', 396,
                '-', 398,
                '.', 400,
                '/', 402,
                ':', 404,
                ';', 406,
                '<', 408,
                '=', 410,
                '>', 412,
                '?', 414,
                '@', 416,
                '[', 118,
                '\\', 418,
                ']', 125,
                '^', 420,
                '_', 422,
                '`', 428,
                'a', 277,
                'b', 294,
                'f', 268,
                'h', 297,
                'i', 253,
                'k', 250,
                'l', 247,
                'm', 244,
                'p', 245,
                'x', 290,
                '{', 128,
                '|', 430,
                '}', 241,
                '~', 432,
                0x0b, 242,
                '\f', 242,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(72);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(370);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0)
                ADVANCE(369);
            END_STATE();
        case 73:
            if(eof)
                ADVANCE(75);
            ADVANCE_MAP(
                ' ', 4,
                '!', 372,
                '"', 375,
                '#', 377,
                '$', 379,
                '%', 381,
                '&', 383,
                '\'', 385,
                '(', 387,
                ')', 389,
                '*', 391,
                '+', 394,
                ',', 396,
                '-', 398,
                '.', 400,
                '/', 402,
                ':', 404,
                ';', 406,
                '<', 408,
                '=', 410,
                '>', 412,
                '?', 414,
                '@', 416,
                '[', 118,
                '\\', 418,
                ']', 125,
                '^', 420,
                '_', 424,
                '`', 428,
                'a', 339,
                'b', 356,
                'f', 330,
                'h', 359,
                'i', 315,
                'k', 312,
                'l', 309,
                'm', 306,
                'p', 307,
                'x', 352,
                '{', 128,
                '|', 430,
                '}', 241,
                '~', 432,
                0x0b, 243,
                '\f', 243,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(73);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(371);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
            if(lookahead != 0)
                ADVANCE(369);
            END_STATE();
        case 74:
            if(eof)
                ADVANCE(75);
            ADVANCE_MAP(
                ' ', 130,
                '!', 373,
                '"', 376,
                '#', 378,
                '$', 380,
                '%', 382,
                '&', 384,
                '\'', 386,
                '(', 388,
                ')', 390,
                '*', 392,
                '+', 395,
                ',', 397,
                '-', 399,
                '.', 401,
                '/', 403,
                ':', 405,
                ';', 407,
                '<', 409,
                '=', 411,
                '>', 413,
                '?', 415,
                '@', 417,
                '[', 119,
                '\\', 419,
                ']', 126,
                '^', 421,
                '_', 426,
                '`', 429,
                'a', 179,
                'b', 196,
                'f', 170,
                'h', 199,
                'i', 155,
                'k', 152,
                'l', 149,
                'm', 146,
                'p', 147,
                'x', 192,
                '{', 129,
                '|', 431,
                '}', 241,
                '~', 433,
                0x0b, 132,
                '\f', 132,
                '\t', 131,
                '\n', 131,
                '\r', 131,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(208);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 75:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 76:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 77:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 78:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 79:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 80:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 81:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 82:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 83:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 84:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 85:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 86:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 87:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 88:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 89:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 90:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 91:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 92:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 93:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 94:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 95:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 96:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 97:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 98:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 99:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 100:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 101:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 102:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 103:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 104:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 105:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 106:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'r')
                ADVANCE(261);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 107:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'r')
                ADVANCE(323);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 108:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'r')
                ADVANCE(163);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 109:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 110:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 111:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 112:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 113:
            ACCEPT_TOKEN(aux_sym_inline_macro_token1);
            END_STATE();
        case 114:
            ACCEPT_TOKEN(aux_sym_inline_macro_token1);
            if(lookahead == '[')
                ADVANCE(116);
            END_STATE();
        case 115:
            ACCEPT_TOKEN(aux_sym_inline_macro_token1);
            if(lookahead == '\\')
                ADVANCE(114);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(115);
            if(lookahead != 0 &&
               lookahead != '[' &&
               lookahead != '\\')
                ADVANCE(113);
            END_STATE();
        case 116:
            ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
            END_STATE();
        case 117:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 118:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(434);
            END_STATE();
        case 119:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(435);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 120:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            END_STATE();
        case 121:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == '\\')
                ADVANCE(122);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(121);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(120);
            END_STATE();
        case 122:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == ']')
                ADVANCE(124);
            END_STATE();
        case 123:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == '{')
                ADVANCE(127);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(123);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(120);
            END_STATE();
        case 124:
            ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
            END_STATE();
        case 125:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 126:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 127:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 128:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 129:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 130:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 130,
                '!', 373,
                '"', 376,
                '#', 527,
                '$', 380,
                '%', 382,
                '&', 384,
                '\'', 386,
                '(', 388,
                ')', 390,
                '*', 488,
                '+', 395,
                ',', 397,
                '-', 399,
                '.', 401,
                '/', 403,
                ':', 405,
                ';', 407,
                '<', 409,
                '=', 411,
                '>', 413,
                '?', 415,
                '@', 417,
                '[', 119,
                '\\', 419,
                ']', 126,
                '^', 421,
                '_', 501,
                '`', 518,
                'a', 179,
                'b', 196,
                'f', 170,
                'h', 199,
                'i', 155,
                'k', 152,
                'l', 149,
                'm', 146,
                'p', 147,
                'x', 192,
                '{', 129,
                '|', 431,
                '~', 433,
                0x0b, 132,
                '\f', 132,
                '\t', 131,
                '\n', 131,
                '\r', 131,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(208);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(230);
            END_STATE();
        case 131:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 130,
                '!', 373,
                '"', 376,
                '#', 378,
                '$', 380,
                '%', 382,
                '&', 384,
                '\'', 386,
                '(', 388,
                ')', 390,
                '*', 392,
                '+', 395,
                ',', 397,
                '-', 399,
                '.', 401,
                '/', 403,
                ':', 405,
                ';', 407,
                '<', 409,
                '=', 411,
                '>', 413,
                '?', 415,
                '@', 417,
                '[', 119,
                '\\', 419,
                ']', 126,
                '^', 421,
                '_', 426,
                '`', 429,
                'a', 179,
                'b', 196,
                'f', 170,
                'h', 199,
                'i', 155,
                'k', 152,
                'l', 149,
                'm', 146,
                'p', 147,
                'x', 192,
                '{', 129,
                '|', 431,
                '~', 433,
                0x0b, 132,
                '\f', 132,
                '\t', 131,
                '\n', 131,
                '\r', 131,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(208);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(230);
            END_STATE();
        case 132:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 130,
                '!', 373,
                '"', 376,
                '#', 378,
                '$', 380,
                '%', 382,
                '&', 384,
                '\'', 386,
                '(', 388,
                ')', 390,
                '*', 392,
                '+', 395,
                ',', 397,
                '-', 399,
                '.', 401,
                '/', 403,
                ':', 405,
                ';', 407,
                '<', 409,
                '=', 411,
                '>', 413,
                '?', 415,
                '@', 417,
                '[', 119,
                '\\', 419,
                ']', 126,
                '^', 421,
                '_', 427,
                '`', 429,
                'a', 179,
                'b', 196,
                'f', 170,
                'h', 199,
                'i', 155,
                'k', 152,
                'l', 149,
                'm', 146,
                'p', 147,
                'x', 192,
                '{', 129,
                '|', 431,
                '~', 433,
                0x0b, 132,
                '\f', 132,
                '\t', 131,
                '\n', 131,
                '\r', 131,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(208);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(230);
            END_STATE();
        case 133:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '"')
                ADVANCE(228);
            if(lookahead == '\\')
                ADVANCE(236);
            if(lookahead == '}')
                ADVANCE(11);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(133);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 134:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '"')
                ADVANCE(228);
            if(lookahead == '\\')
                ADVANCE(236);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(133);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 135:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '+')
                ADVANCE(470);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 136:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(137);
            if(lookahead == '.')
                ADVANCE(233);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 137:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(137);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 138:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(145);
            if(lookahead == '0')
                ADVANCE(143);
            if(lookahead == '1')
                ADVANCE(142);
            if(lookahead == '2')
                ADVANCE(139);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(141);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(144);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 139:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(145);
            if(lookahead == '5')
                ADVANCE(140);
            if(lookahead == ':')
                ADVANCE(239);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == ']')
                ADVANCE(234);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(143);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(141);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(144);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 140:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(145);
            if(lookahead == ':')
                ADVANCE(239);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == ']')
                ADVANCE(234);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(143);
            if(('6' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(144);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 141:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(145);
            if(lookahead == ':')
                ADVANCE(239);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == ']')
                ADVANCE(234);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(143);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(144);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 142:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(145);
            if(lookahead == ':')
                ADVANCE(239);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == ']')
                ADVANCE(234);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(141);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(144);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 143:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(145);
            if(lookahead == ':')
                ADVANCE(239);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == ']')
                ADVANCE(234);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(144);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 144:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(145);
            if(lookahead == ':')
                ADVANCE(239);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(144);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 145:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(145);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(144);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 146:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'a')
                ADVANCE(172);
            if(lookahead == 'e')
                ADVANCE(182);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 147:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'a')
                ADVANCE(195);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 148:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'a')
                ADVANCE(166);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 149:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'a')
                ADVANCE(200);
            if(lookahead == 'i')
                ADVANCE(181);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 150:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'a')
                ADVANCE(198);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 151:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'a')
                ADVANCE(201);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 152:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'b')
                ADVANCE(157);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 153:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'c')
                ADVANCE(169);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 154:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'c')
                ADVANCE(465);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 155:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                '.', 231,
                '@', 229,
                '\\', 235,
                '_', 207,
                'c', 187,
                'm', 148,
                'r', 154,
                '}', 32,
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 156:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'c')
                ADVANCE(173);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 157:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'd')
                ADVANCE(78);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 158:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'e')
                ADVANCE(164);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 159:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'e')
                ADVANCE(459);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 160:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'e')
                ADVANCE(206);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 161:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'e')
                ADVANCE(84);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 162:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'e')
                ADVANCE(108);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 163:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'e')
                ADVANCE(165);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 164:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'f')
                ADVANCE(487);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 165:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'f')
                ADVANCE(111);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 166:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'g')
                ADVANCE(161);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 167:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'h')
                ADVANCE(105);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 168:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'h')
                ADVANCE(102);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 169:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'h')
                ADVANCE(186);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 170:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                '.', 231,
                '@', 229,
                '\\', 235,
                '_', 207,
                'i', 175,
                'o', 189,
                't', 190,
                '}', 32,
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 171:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'i')
                ADVANCE(177);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 172:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'i')
                ADVANCE(176);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 173:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'i')
                ADVANCE(171);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 174:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'k')
                ADVANCE(93);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 175:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'l')
                ADVANCE(159);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 176:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'l')
                ADVANCE(203);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 177:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'm')
                ADVANCE(150);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 178:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'm')
                ADVANCE(151);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 179:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'n')
                ADVANCE(153);
            if(lookahead == 's')
                ADVANCE(156);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 180:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'n')
                ADVANCE(81);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 181:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'n')
                ADVANCE(174);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 182:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'n')
                ADVANCE(205);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 183:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'n')
                ADVANCE(87);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 184:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'n')
                ADVANCE(188);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 185:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'o')
                ADVANCE(96);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 186:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'o')
                ADVANCE(193);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 187:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'o')
                ADVANCE(183);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 188:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'o')
                ADVANCE(204);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 189:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'o')
                ADVANCE(202);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 190:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'p')
                ADVANCE(462);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 191:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'p')
                ADVANCE(453);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 192:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'r')
                ADVANCE(158);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 193:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'r')
                ADVANCE(445);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 194:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 's')
                ADVANCE(90);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 195:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 's')
                ADVANCE(194);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 196:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 't')
                ADVANCE(180);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 197:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 't')
                ADVANCE(191);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 198:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 't')
                ADVANCE(167);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 199:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 't')
                ADVANCE(197);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 200:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 't')
                ADVANCE(160);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 201:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 't')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 202:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 't')
                ADVANCE(184);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 203:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 't')
                ADVANCE(185);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 204:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 't')
                ADVANCE(162);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 205:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'u')
                ADVANCE(99);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 206:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 'x')
                ADVANCE(178);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 207:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 208:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(208);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 209:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 210:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(138);
            if(lookahead == '5')
                ADVANCE(211);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(214);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(212);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 211:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(138);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(214);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 212:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(138);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(214);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 213:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(138);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(212);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 214:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(138);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 215:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(226);
            if(lookahead == '5')
                ADVANCE(216);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(219);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(217);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 216:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(226);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 217:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(226);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 218:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(226);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(217);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 219:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(226);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 220:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(227);
            if(lookahead == '5')
                ADVANCE(221);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(224);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(222);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 221:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(227);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(224);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 222:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(227);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(224);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 223:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(227);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(222);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 224:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(227);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 225:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(224);
            if(lookahead == '1')
                ADVANCE(223);
            if(lookahead == '2')
                ADVANCE(220);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(222);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 226:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(214);
            if(lookahead == '1')
                ADVANCE(213);
            if(lookahead == '2')
                ADVANCE(210);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(212);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 227:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(219);
            if(lookahead == '1')
                ADVANCE(218);
            if(lookahead == '2')
                ADVANCE(215);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(217);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 228:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 229:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '[')
                ADVANCE(225);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 230:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(230);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               (' ' <= lookahead && lookahead <= '@') ||
               ('[' <= lookahead && lookahead <= '`') ||
               lookahead == '{' ||
               lookahead == '|' ||
               lookahead == '~')
                ADVANCE(234);
            if(lookahead != 0 &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(230);
            END_STATE();
        case 231:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               lookahead == '-' ||
               ('/' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 232:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(232);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 233:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(235);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(136);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 234:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 235:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 236:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(134);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(133);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 237:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(238);
            if(lookahead == ']')
                ADVANCE(237);
            if(lookahead == '}')
                ADVANCE(59);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(237);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 238:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(238);
            if(lookahead == ']')
                ADVANCE(237);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(237);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 239:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(238);
            if(lookahead == '}')
                ADVANCE(59);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(237);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 240:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 241:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 242:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                ' ', 2,
                '_', 423,
                'a', 277,
                'b', 294,
                'f', 268,
                'h', 297,
                'i', 253,
                'k', 250,
                'l', 247,
                'm', 244,
                'p', 245,
                'x', 290,
                0x0b, 242,
                '\f', 242,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 243:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                ' ', 4,
                '_', 425,
                'a', 339,
                'b', 356,
                'f', 330,
                'h', 359,
                'i', 315,
                'k', 312,
                'l', 309,
                'm', 306,
                'p', 307,
                'x', 352,
                0x0b, 243,
                '\f', 243,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 244:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'a')
                ADVANCE(270);
            if(lookahead == 'e')
                ADVANCE(280);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 245:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'a')
                ADVANCE(293);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 246:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'a')
                ADVANCE(264);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 247:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'a')
                ADVANCE(298);
            if(lookahead == 'i')
                ADVANCE(279);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 248:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'a')
                ADVANCE(296);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 249:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'a')
                ADVANCE(299);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 250:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'b')
                ADVANCE(255);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 251:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'c')
                ADVANCE(267);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 252:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'c')
                ADVANCE(463);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 253:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'c')
                ADVANCE(285);
            if(lookahead == 'm')
                ADVANCE(246);
            if(lookahead == 'r')
                ADVANCE(252);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 254:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'c')
                ADVANCE(271);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 255:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'd')
                ADVANCE(76);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 256:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'e')
                ADVANCE(262);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 257:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'e')
                ADVANCE(457);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 258:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'e')
                ADVANCE(304);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 259:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'e')
                ADVANCE(82);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 260:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'e')
                ADVANCE(106);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 261:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'e')
                ADVANCE(263);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 262:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'f')
                ADVANCE(485);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 263:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'f')
                ADVANCE(109);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 264:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'g')
                ADVANCE(259);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 265:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'h')
                ADVANCE(103);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 266:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'h')
                ADVANCE(100);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 267:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'h')
                ADVANCE(284);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 268:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'i')
                ADVANCE(273);
            if(lookahead == 'o')
                ADVANCE(287);
            if(lookahead == 't')
                ADVANCE(288);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 269:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'i')
                ADVANCE(275);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 270:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'i')
                ADVANCE(274);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 271:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'i')
                ADVANCE(269);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 272:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'k')
                ADVANCE(91);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 273:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'l')
                ADVANCE(257);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 274:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'l')
                ADVANCE(301);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 275:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'm')
                ADVANCE(248);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 276:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'm')
                ADVANCE(249);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 277:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'n')
                ADVANCE(251);
            if(lookahead == 's')
                ADVANCE(254);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 278:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'n')
                ADVANCE(79);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 279:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'n')
                ADVANCE(272);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 280:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'n')
                ADVANCE(303);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 281:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'n')
                ADVANCE(85);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 282:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'n')
                ADVANCE(286);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 283:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'o')
                ADVANCE(94);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 284:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'o')
                ADVANCE(291);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 285:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'o')
                ADVANCE(281);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 286:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'o')
                ADVANCE(302);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 287:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'o')
                ADVANCE(300);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 288:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'p')
                ADVANCE(460);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 289:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'p')
                ADVANCE(451);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 290:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'r')
                ADVANCE(256);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 291:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'r')
                ADVANCE(443);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 292:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 's')
                ADVANCE(88);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 293:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 's')
                ADVANCE(292);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 294:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 't')
                ADVANCE(278);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 295:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 't')
                ADVANCE(289);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 296:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 't')
                ADVANCE(265);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 297:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 't')
                ADVANCE(295);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 298:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 't')
                ADVANCE(258);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 299:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 't')
                ADVANCE(266);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 300:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 't')
                ADVANCE(282);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 301:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 't')
                ADVANCE(283);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 302:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 't')
                ADVANCE(260);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 303:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'u')
                ADVANCE(97);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 304:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 'x')
                ADVANCE(276);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 305:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 306:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'a')
                ADVANCE(332);
            if(lookahead == 'e')
                ADVANCE(342);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 307:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'a')
                ADVANCE(355);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 308:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'a')
                ADVANCE(326);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 309:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'a')
                ADVANCE(360);
            if(lookahead == 'i')
                ADVANCE(341);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 310:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'a')
                ADVANCE(358);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 311:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'a')
                ADVANCE(361);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 312:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'b')
                ADVANCE(317);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 313:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'c')
                ADVANCE(329);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 314:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'c')
                ADVANCE(464);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 315:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'c')
                ADVANCE(347);
            if(lookahead == 'm')
                ADVANCE(308);
            if(lookahead == 'r')
                ADVANCE(314);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 316:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'c')
                ADVANCE(333);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 317:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'd')
                ADVANCE(77);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 318:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'e')
                ADVANCE(324);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 319:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'e')
                ADVANCE(458);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 320:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'e')
                ADVANCE(366);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 321:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'e')
                ADVANCE(83);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 322:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'e')
                ADVANCE(107);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 323:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'e')
                ADVANCE(325);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 324:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'f')
                ADVANCE(486);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 325:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'f')
                ADVANCE(110);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 326:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'g')
                ADVANCE(321);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 327:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'h')
                ADVANCE(104);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 328:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'h')
                ADVANCE(101);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 329:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'h')
                ADVANCE(346);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 330:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'i')
                ADVANCE(335);
            if(lookahead == 'o')
                ADVANCE(349);
            if(lookahead == 't')
                ADVANCE(350);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 331:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'i')
                ADVANCE(337);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 332:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'i')
                ADVANCE(336);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 333:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'i')
                ADVANCE(331);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 334:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'k')
                ADVANCE(92);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 335:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'l')
                ADVANCE(319);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 336:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'l')
                ADVANCE(363);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 337:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'm')
                ADVANCE(310);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 338:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'm')
                ADVANCE(311);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 339:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'n')
                ADVANCE(313);
            if(lookahead == 's')
                ADVANCE(316);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 340:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'n')
                ADVANCE(80);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 341:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'n')
                ADVANCE(334);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 342:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'n')
                ADVANCE(365);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 343:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'n')
                ADVANCE(86);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 344:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'n')
                ADVANCE(348);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 345:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'o')
                ADVANCE(95);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 346:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'o')
                ADVANCE(353);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 347:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'o')
                ADVANCE(343);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 348:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'o')
                ADVANCE(364);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 349:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'o')
                ADVANCE(362);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 350:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'p')
                ADVANCE(461);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 351:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'p')
                ADVANCE(452);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 352:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'r')
                ADVANCE(318);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 353:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'r')
                ADVANCE(444);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 354:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 's')
                ADVANCE(89);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 355:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 's')
                ADVANCE(354);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 356:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 357:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(351);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 358:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(327);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 359:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(357);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 360:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(320);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 361:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(328);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 362:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(344);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 363:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(345);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 364:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(322);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 365:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'u')
                ADVANCE(98);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 366:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'x')
                ADVANCE(338);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 367:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 368:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(438);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(439);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 369:
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
                ADVANCE(369);
            END_STATE();
        case 370:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(370);
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
                ADVANCE(439);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(437);
            END_STATE();
        case 371:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(371);
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
        case 372:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 373:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 374:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 375:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(56);
            if(lookahead == '\\')
                ADVANCE(71);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(11);
            END_STATE();
        case 376:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(228);
            if(lookahead == '\\')
                ADVANCE(236);
            if(lookahead == '}')
                ADVANCE(11);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(133);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 377:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(534);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 378:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(535);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('$' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 379:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(472);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 380:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(473);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 381:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 382:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 383:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 384:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 385:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 386:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 387:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 388:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 389:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 390:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 391:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '*')
                ADVANCE(499);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 392:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '*')
                ADVANCE(500);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 393:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 394:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '+')
                ADVANCE(15);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(32);
            END_STATE();
        case 395:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '+')
                ADVANCE(135);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 396:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 397:
            ACCEPT_TOKEN(anon_sym_COMMA);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 398:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 399:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 400:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 401:
            ACCEPT_TOKEN(anon_sym_DOT);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 402:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 403:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 404:
            ACCEPT_TOKEN(anon_sym_COLON2);
            END_STATE();
        case 405:
            ACCEPT_TOKEN(anon_sym_COLON2);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 406:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 407:
            ACCEPT_TOKEN(anon_sym_SEMI);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 408:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(474);
            END_STATE();
        case 409:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(475);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 410:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 411:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 412:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 413:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 414:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 415:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 416:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 417:
            ACCEPT_TOKEN(anon_sym_AT);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 418:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            END_STATE();
        case 419:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 420:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 421:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 422:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(514);
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
                ADVANCE(439);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(437);
            END_STATE();
        case 423:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(512);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 424:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(515);
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
        case 425:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(513);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 426:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(517);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 427:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(516);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 428:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '`')
                ADVANCE(525);
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
        case 429:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '`')
                ADVANCE(526);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 430:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 431:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 432:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 433:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 434:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            END_STATE();
        case 435:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 436:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 437:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(439);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(437);
            END_STATE();
        case 438:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '_')
                ADVANCE(438);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(439);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 439:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(439);
            END_STATE();
        case 440:
            ACCEPT_TOKEN(aux_sym_anchor_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(440);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(441);
            END_STATE();
        case 441:
            ACCEPT_TOKEN(aux_sym_anchor_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ' ||
               ('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(441);
            END_STATE();
        case 442:
            ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
            END_STATE();
        case 443:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 444:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 445:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 446:
            ACCEPT_TOKEN(aux_sym_anchor_token3);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(446);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(447);
            END_STATE();
        case 447:
            ACCEPT_TOKEN(aux_sym_anchor_token3);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(447);
            END_STATE();
        case 448:
            ACCEPT_TOKEN(sym_email);
            END_STATE();
        case 449:
            ACCEPT_TOKEN(sym_email);
            if(lookahead == '-')
                ADVANCE(22);
            if(lookahead == '.')
                ADVANCE(69);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(449);
            END_STATE();
        case 450:
            ACCEPT_TOKEN(sym_email);
            if(lookahead == '\\')
                ADVANCE(60);
            if(lookahead == ']')
                ADVANCE(450);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(59);
            END_STATE();
        case 451:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(lookahead == 's')
                ADVANCE(454);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(305);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 452:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 's')
                ADVANCE(455);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 453:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == 's')
                ADVANCE(456);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(sym__link_component);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '.' &&
               lookahead != '>' &&
               lookahead != '[')
                ADVANCE(467);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(234);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            if(lookahead == ',')
                ADVANCE(479);
            if(lookahead == '>')
                ADVANCE(480);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            if(lookahead == '\\')
                ADVANCE(477);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(478);
            if(lookahead != 0 &&
               lookahead != ',' &&
               lookahead != '>')
                ADVANCE(476);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(anon_sym_BSLASH_COMMA);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(anon_sym_BSLASH_GT);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            if(lookahead == '>')
                ADVANCE(480);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            if(lookahead == '\\')
                ADVANCE(482);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(483);
            if(lookahead != 0 &&
               lookahead != '>')
                ADVANCE(481);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(anon_sym_STAR2);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == ' ')
                ADVANCE(490);
            if(lookahead == '#')
                ADVANCE(527);
            if(lookahead == '\\')
                ADVANCE(493);
            if(lookahead == '_')
                ADVANCE(501);
            if(lookahead == '`')
                ADVANCE(518);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(491);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(489);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == ' ')
                ADVANCE(490);
            if(lookahead == '#')
                ADVANCE(492);
            if(lookahead == '\\')
                ADVANCE(493);
            if(lookahead == '_')
                ADVANCE(494);
            if(lookahead == '`')
                ADVANCE(495);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(491);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(489);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '#')
                ADVANCE(533);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '*')
                ADVANCE(496);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '_')
                ADVANCE(511);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '`')
                ADVANCE(524);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_BSLASH_STAR);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_STAR3);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym__2);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == ' ')
                ADVANCE(503);
            if(lookahead == '#')
                ADVANCE(527);
            if(lookahead == '*')
                ADVANCE(488);
            if(lookahead == '\\')
                ADVANCE(507);
            if(lookahead == '`')
                ADVANCE(518);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(504);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_' &&
               lookahead != '`')
                ADVANCE(502);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == ' ')
                ADVANCE(503);
            if(lookahead == '#')
                ADVANCE(505);
            if(lookahead == '*')
                ADVANCE(506);
            if(lookahead == '\\')
                ADVANCE(507);
            if(lookahead == '`')
                ADVANCE(508);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(504);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_' &&
               lookahead != '`')
                ADVANCE(502);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '#')
                ADVANCE(533);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '*')
                ADVANCE(498);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '_')
                ADVANCE(509);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '`')
                ADVANCE(524);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_BSLASH_);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym__3);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym___);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(437);
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
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(369);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(367);
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
                ADVANCE(369);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(439);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(437);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '_')
                ADVANCE(207);
            if(lookahead == '}')
                ADVANCE(32);
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
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(230);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(anon_sym_BQUOTE2);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '\\')
                ADVANCE(521);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(520);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '`')
                ADVANCE(519);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '`')
                ADVANCE(522);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_BSLASH_BQUOTE);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_BQUOTE3);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_POUND2);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '#')
                ADVANCE(531);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '\\')
                ADVANCE(529);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(530);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '#')
                ADVANCE(528);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(anon_sym_BSLASH_POUND);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_POUND3);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead == '.')
                ADVANCE(70);
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
                ADVANCE(32);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead == '.')
                ADVANCE(231);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                ADVANCE(235);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(209);
            if(lookahead != 0)
                ADVANCE(234);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 73 },
    [2] = { .lex_state = 73 },
    [3] = { .lex_state = 73 },
    [4] = { .lex_state = 73 },
    [5] = { .lex_state = 73 },
    [6] = { .lex_state = 74 },
    [7] = { .lex_state = 73 },
    [8] = { .lex_state = 72 },
    [9] = { .lex_state = 73 },
    [10] = { .lex_state = 73 },
    [11] = { .lex_state = 73 },
    [12] = { .lex_state = 73 },
    [13] = { .lex_state = 73 },
    [14] = { .lex_state = 73 },
    [15] = { .lex_state = 73 },
    [16] = { .lex_state = 73 },
    [17] = { .lex_state = 73 },
    [18] = { .lex_state = 73 },
    [19] = { .lex_state = 73 },
    [20] = { .lex_state = 73 },
    [21] = { .lex_state = 73 },
    [22] = { .lex_state = 73 },
    [23] = { .lex_state = 73 },
    [24] = { .lex_state = 73 },
    [25] = { .lex_state = 73 },
    [26] = { .lex_state = 73 },
    [27] = { .lex_state = 73 },
    [28] = { .lex_state = 73 },
    [29] = { .lex_state = 73 },
    [30] = { .lex_state = 73 },
    [31] = { .lex_state = 73 },
    [32] = { .lex_state = 73 },
    [33] = { .lex_state = 73 },
    [34] = { .lex_state = 73 },
    [35] = { .lex_state = 73 },
    [36] = { .lex_state = 73 },
    [37] = { .lex_state = 73 },
    [38] = { .lex_state = 73 },
    [39] = { .lex_state = 73 },
    [40] = { .lex_state = 5 },
    [41] = { .lex_state = 7 },
    [42] = { .lex_state = 5 },
    [43] = { .lex_state = 7 },
    [44] = { .lex_state = 7 },
    [45] = { .lex_state = 7 },
    [46] = { .lex_state = 5 },
    [47] = { .lex_state = 7 },
    [48] = { .lex_state = 5 },
    [49] = { .lex_state = 5 },
    [50] = { .lex_state = 7 },
    [51] = { .lex_state = 7 },
    [52] = { .lex_state = 7 },
    [53] = { .lex_state = 5 },
    [54] = { .lex_state = 5 },
    [55] = { .lex_state = 5 },
    [56] = { .lex_state = 5 },
    [57] = { .lex_state = 7 },
    [58] = { .lex_state = 5 },
    [59] = { .lex_state = 7 },
    [60] = { .lex_state = 7 },
    [61] = { .lex_state = 7 },
    [62] = { .lex_state = 7 },
    [63] = { .lex_state = 5 },
    [64] = { .lex_state = 5 },
    [65] = { .lex_state = 5 },
    [66] = { .lex_state = 7 },
    [67] = { .lex_state = 5 },
    [68] = { .lex_state = 5 },
    [69] = { .lex_state = 7 },
    [70] = { .lex_state = 19 },
    [71] = { .lex_state = 19 },
    [72] = { .lex_state = 65 },
    [73] = { .lex_state = 65 },
    [74] = { .lex_state = 65 },
    [75] = { .lex_state = 63 },
    [76] = { .lex_state = 13 },
    [77] = { .lex_state = 65 },
    [78] = { .lex_state = 19 },
    [79] = { .lex_state = 64 },
    [80] = { .lex_state = 58 },
    [81] = { .lex_state = 64 },
    [82] = { .lex_state = 58 },
    [83] = { .lex_state = 13 },
    [84] = { .lex_state = 13 },
    [85] = { .lex_state = 63 },
    [86] = { .lex_state = 63 },
    [87] = { .lex_state = 13 },
    [88] = { .lex_state = 19 },
    [89] = { .lex_state = 63 },
    [90] = { .lex_state = 54 },
    [91] = { .lex_state = 13 },
    [92] = { .lex_state = 64 },
    [93] = { .lex_state = 64 },
    [94] = { .lex_state = 63 },
    [95] = { .lex_state = 58 },
    [96] = { .lex_state = 64 },
    [97] = { .lex_state = 64 },
    [98] = { .lex_state = 63 },
    [99] = { .lex_state = 64 },
    [100] = { .lex_state = 63 },
    [101] = { .lex_state = 13 },
    [102] = { .lex_state = 13 },
    [103] = { .lex_state = 63 },
    [104] = { .lex_state = 63 },
    [105] = { .lex_state = 64 },
    [106] = { .lex_state = 13 },
    [107] = { .lex_state = 54 },
    [108] = { .lex_state = 13 },
    [109] = { .lex_state = 13 },
    [110] = { .lex_state = 64 },
    [111] = { .lex_state = 63 },
    [112] = { .lex_state = 63 },
    [113] = { .lex_state = 58 },
    [114] = { .lex_state = 63 },
    [115] = { .lex_state = 13 },
    [116] = { .lex_state = 13 },
    [117] = { .lex_state = 63 },
    [118] = { .lex_state = 13 },
    [119] = { .lex_state = 12 },
    [120] = { .lex_state = 12 },
    [121] = { .lex_state = 12 },
    [122] = { .lex_state = 58 },
    [123] = { .lex_state = 12 },
    [124] = { .lex_state = 65 },
    [125] = { .lex_state = 58 },
    [126] = { .lex_state = 54 },
    [127] = { .lex_state = 54 },
    [128] = { .lex_state = 64 },
    [129] = { .lex_state = 12 },
    [130] = { .lex_state = 12 },
    [131] = { .lex_state = 12 },
    [132] = { .lex_state = 12 },
    [133] = { .lex_state = 12 },
    [134] = { .lex_state = 12 },
    [135] = { .lex_state = 12 },
    [136] = { .lex_state = 0 },
    [137] = { .lex_state = 12 },
    [138] = { .lex_state = 12 },
    [139] = { .lex_state = 68 },
    [140] = { .lex_state = 12 },
    [141] = { .lex_state = 68 },
    [142] = { .lex_state = 12 },
    [143] = { .lex_state = 16 },
    [144] = { .lex_state = 12 },
    [145] = { .lex_state = 12 },
    [146] = { .lex_state = 16 },
    [147] = { .lex_state = 12 },
    [148] = { .lex_state = 16 },
    [149] = { .lex_state = 53 },
    [150] = { .lex_state = 68 },
    [151] = { .lex_state = 12 },
    [152] = { .lex_state = 62 },
    [153] = { .lex_state = 53 },
    [154] = { .lex_state = 16 },
    [155] = { .lex_state = 68 },
    [156] = { .lex_state = 446 },
    [157] = { .lex_state = 12 },
    [158] = { .lex_state = 16 },
    [159] = { .lex_state = 16 },
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
        [anon_sym_anchor] = ACTIONS(1),
        [sym_email] = ACTIONS(1),
        [anon_sym_http] = ACTIONS(1),
        [anon_sym_https] = ACTIONS(1),
        [anon_sym_file] = ACTIONS(1),
        [anon_sym_ftp] = ACTIONS(1),
        [anon_sym_irc] = ACTIONS(1),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
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
        [sym_inline] = STATE(136),
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
        [anon_sym_anchor] = ACTIONS(15),
        [sym_email] = ACTIONS(5),
        [anon_sym_http] = ACTIONS(17),
        [anon_sym_https] = ACTIONS(17),
        [anon_sym_file] = ACTIONS(17),
        [anon_sym_ftp] = ACTIONS(17),
        [anon_sym_irc] = ACTIONS(17),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(19),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(21),
        [anon_sym_LT_LT] = ACTIONS(23),
        [anon_sym_xref] = ACTIONS(25),
        [anon_sym_STAR2] = ACTIONS(27),
        [anon_sym_STAR_STAR] = ACTIONS(29),
        [anon_sym__2] = ACTIONS(31),
        [anon_sym___] = ACTIONS(33),
        [anon_sym_BQUOTE2] = ACTIONS(35),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(37),
        [anon_sym_POUND2] = ACTIONS(39),
        [anon_sym_POUND_POUND] = ACTIONS(41),
    },
    [2] = {
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
        [anon_sym_anchor] = ACTIONS(63),
        [sym_email] = ACTIONS(48),
        [anon_sym_http] = ACTIONS(66),
        [anon_sym_https] = ACTIONS(66),
        [anon_sym_file] = ACTIONS(66),
        [anon_sym_ftp] = ACTIONS(66),
        [anon_sym_irc] = ACTIONS(66),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(69),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(72),
        [anon_sym_LT_LT] = ACTIONS(75),
        [anon_sym_xref] = ACTIONS(78),
        [anon_sym_STAR2] = ACTIONS(81),
        [anon_sym_STAR_STAR] = ACTIONS(84),
        [anon_sym__2] = ACTIONS(87),
        [anon_sym___] = ACTIONS(90),
        [anon_sym_BQUOTE2] = ACTIONS(93),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(96),
        [anon_sym_POUND2] = ACTIONS(99),
        [anon_sym_POUND_POUND] = ACTIONS(102),
    },
    [3] = {
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
        [ts_builtin_sym_end] = ACTIONS(105),
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
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_RBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(7),
        [anon_sym_RBRACE] = ACTIONS(107),
        [sym__word_no_digit] = ACTIONS(107),
        [sym__digits] = ACTIONS(107),
        [anon_sym_BANG] = ACTIONS(107),
        [anon_sym_DQUOTE] = ACTIONS(9),
        [anon_sym_POUND] = ACTIONS(107),
        [anon_sym_DOLLAR] = ACTIONS(107),
        [anon_sym_PERCENT] = ACTIONS(107),
        [anon_sym_AMP] = ACTIONS(107),
        [anon_sym_SQUOTE] = ACTIONS(107),
        [anon_sym_LPAREN] = ACTIONS(107),
        [anon_sym_RPAREN] = ACTIONS(107),
        [anon_sym_STAR] = ACTIONS(107),
        [anon_sym_PLUS] = ACTIONS(11),
        [anon_sym_COMMA] = ACTIONS(107),
        [anon_sym_DASH] = ACTIONS(107),
        [anon_sym_DOT] = ACTIONS(107),
        [anon_sym_SLASH] = ACTIONS(107),
        [anon_sym_COLON2] = ACTIONS(107),
        [anon_sym_SEMI] = ACTIONS(107),
        [anon_sym_LT] = ACTIONS(107),
        [anon_sym_EQ] = ACTIONS(107),
        [anon_sym_GT] = ACTIONS(107),
        [anon_sym_QMARK] = ACTIONS(107),
        [anon_sym_AT] = ACTIONS(107),
        [anon_sym_BSLASH] = ACTIONS(107),
        [anon_sym_CARET] = ACTIONS(107),
        [anon_sym__] = ACTIONS(107),
        [anon_sym_BQUOTE] = ACTIONS(107),
        [anon_sym_PIPE] = ACTIONS(107),
        [anon_sym_TILDE] = ACTIONS(107),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(13),
        [anon_sym_anchor] = ACTIONS(15),
        [sym_email] = ACTIONS(107),
        [anon_sym_http] = ACTIONS(17),
        [anon_sym_https] = ACTIONS(17),
        [anon_sym_file] = ACTIONS(17),
        [anon_sym_ftp] = ACTIONS(17),
        [anon_sym_irc] = ACTIONS(17),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(19),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(21),
        [anon_sym_LT_LT] = ACTIONS(23),
        [anon_sym_xref] = ACTIONS(25),
        [anon_sym_STAR2] = ACTIONS(27),
        [anon_sym_STAR_STAR] = ACTIONS(29),
        [anon_sym__2] = ACTIONS(31),
        [anon_sym___] = ACTIONS(33),
        [anon_sym_BQUOTE2] = ACTIONS(35),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(37),
        [anon_sym_POUND2] = ACTIONS(39),
        [anon_sym_POUND_POUND] = ACTIONS(41),
    },
    [4] = {
        [aux_sym_link_url_repeat1] = STATE(5),
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
        [anon_sym_anchor] = ACTIONS(111),
        [sym_email] = ACTIONS(111),
        [anon_sym_http] = ACTIONS(111),
        [anon_sym_https] = ACTIONS(111),
        [anon_sym_file] = ACTIONS(111),
        [anon_sym_ftp] = ACTIONS(111),
        [anon_sym_irc] = ACTIONS(111),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(111),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(111),
        [anon_sym_LT_LT] = ACTIONS(111),
        [anon_sym_xref] = ACTIONS(111),
        [anon_sym_STAR2] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(111),
        [anon_sym__2] = ACTIONS(111),
        [anon_sym___] = ACTIONS(111),
        [anon_sym_BQUOTE2] = ACTIONS(111),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(111),
        [anon_sym_POUND2] = ACTIONS(111),
        [anon_sym_POUND_POUND] = ACTIONS(111),
    },
    [5] = {
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
        [anon_sym_anchor] = ACTIONS(117),
        [sym_email] = ACTIONS(117),
        [anon_sym_http] = ACTIONS(117),
        [anon_sym_https] = ACTIONS(117),
        [anon_sym_file] = ACTIONS(117),
        [anon_sym_ftp] = ACTIONS(117),
        [anon_sym_irc] = ACTIONS(117),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(117),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(117),
        [anon_sym_LT_LT] = ACTIONS(117),
        [anon_sym_xref] = ACTIONS(117),
        [anon_sym_STAR2] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(117),
        [anon_sym__2] = ACTIONS(117),
        [anon_sym___] = ACTIONS(117),
        [anon_sym_BQUOTE2] = ACTIONS(117),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(117),
        [anon_sym_POUND2] = ACTIONS(117),
        [anon_sym_POUND_POUND] = ACTIONS(117),
    },
    [6] = {
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
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_RBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(121),
        [aux_sym_replacement_token1] = ACTIONS(123),
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
        [anon_sym_anchor] = ACTIONS(121),
        [sym_email] = ACTIONS(121),
        [anon_sym_http] = ACTIONS(121),
        [anon_sym_https] = ACTIONS(121),
        [anon_sym_file] = ACTIONS(121),
        [anon_sym_ftp] = ACTIONS(121),
        [anon_sym_irc] = ACTIONS(121),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(121),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(121),
        [anon_sym_LT_LT] = ACTIONS(121),
        [anon_sym_xref] = ACTIONS(121),
        [anon_sym_STAR2] = ACTIONS(121),
        [anon_sym_STAR_STAR] = ACTIONS(121),
        [anon_sym__2] = ACTIONS(121),
        [anon_sym___] = ACTIONS(121),
        [anon_sym_BQUOTE2] = ACTIONS(121),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(121),
        [anon_sym_POUND2] = ACTIONS(121),
        [anon_sym_POUND_POUND] = ACTIONS(121),
    },
    [7] = {
        [sym_link_url] = STATE(129),
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
        [anon_sym_anchor] = ACTIONS(121),
        [sym_email] = ACTIONS(121),
        [anon_sym_http] = ACTIONS(125),
        [anon_sym_https] = ACTIONS(125),
        [anon_sym_file] = ACTIONS(125),
        [anon_sym_ftp] = ACTIONS(125),
        [anon_sym_irc] = ACTIONS(125),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(121),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(121),
        [anon_sym_LT_LT] = ACTIONS(121),
        [anon_sym_xref] = ACTIONS(121),
        [anon_sym_STAR2] = ACTIONS(121),
        [anon_sym_STAR_STAR] = ACTIONS(121),
        [anon_sym__2] = ACTIONS(121),
        [anon_sym___] = ACTIONS(121),
        [anon_sym_BQUOTE2] = ACTIONS(121),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(121),
        [anon_sym_POUND2] = ACTIONS(121),
        [anon_sym_POUND_POUND] = ACTIONS(121),
    },
    [8] = {
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
        [aux_sym_anchor_token1] = ACTIONS(127),
        [anon_sym_anchor] = ACTIONS(121),
        [sym_email] = ACTIONS(121),
        [anon_sym_http] = ACTIONS(121),
        [anon_sym_https] = ACTIONS(121),
        [anon_sym_file] = ACTIONS(121),
        [anon_sym_ftp] = ACTIONS(121),
        [anon_sym_irc] = ACTIONS(121),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(121),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(121),
        [anon_sym_LT_LT] = ACTIONS(121),
        [anon_sym_xref] = ACTIONS(121),
        [anon_sym_STAR2] = ACTIONS(121),
        [anon_sym_STAR_STAR] = ACTIONS(121),
        [anon_sym__2] = ACTIONS(121),
        [anon_sym___] = ACTIONS(121),
        [anon_sym_BQUOTE2] = ACTIONS(121),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(121),
        [anon_sym_POUND2] = ACTIONS(121),
        [anon_sym_POUND_POUND] = ACTIONS(121),
    },
    [9] = {
        [aux_sym_link_url_repeat1] = STATE(9),
        [ts_builtin_sym_end] = ACTIONS(129),
        [anon_sym_kbd] = ACTIONS(131),
        [anon_sym_btn] = ACTIONS(131),
        [anon_sym_image] = ACTIONS(131),
        [anon_sym_icon] = ACTIONS(131),
        [anon_sym_pass] = ACTIONS(131),
        [anon_sym_link] = ACTIONS(131),
        [anon_sym_mailto] = ACTIONS(131),
        [anon_sym_menu] = ACTIONS(131),
        [anon_sym_latexmath] = ACTIONS(131),
        [anon_sym_asciimath] = ACTIONS(131),
        [anon_sym_footnote] = ACTIONS(131),
        [anon_sym_footnoteref] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(131),
        [anon_sym_RBRACK] = ACTIONS(131),
        [anon_sym_LBRACE] = ACTIONS(131),
        [anon_sym_RBRACE] = ACTIONS(131),
        [sym__word_no_digit] = ACTIONS(131),
        [sym__digits] = ACTIONS(131),
        [anon_sym_BANG] = ACTIONS(131),
        [anon_sym_DQUOTE] = ACTIONS(131),
        [anon_sym_POUND] = ACTIONS(131),
        [anon_sym_DOLLAR] = ACTIONS(131),
        [anon_sym_PERCENT] = ACTIONS(131),
        [anon_sym_AMP] = ACTIONS(131),
        [anon_sym_SQUOTE] = ACTIONS(131),
        [anon_sym_LPAREN] = ACTIONS(131),
        [anon_sym_RPAREN] = ACTIONS(131),
        [anon_sym_STAR] = ACTIONS(131),
        [anon_sym_PLUS] = ACTIONS(131),
        [anon_sym_COMMA] = ACTIONS(131),
        [anon_sym_DASH] = ACTIONS(131),
        [anon_sym_DOT] = ACTIONS(133),
        [anon_sym_SLASH] = ACTIONS(131),
        [anon_sym_COLON2] = ACTIONS(131),
        [anon_sym_SEMI] = ACTIONS(131),
        [anon_sym_LT] = ACTIONS(131),
        [anon_sym_EQ] = ACTIONS(131),
        [anon_sym_GT] = ACTIONS(131),
        [anon_sym_QMARK] = ACTIONS(131),
        [anon_sym_AT] = ACTIONS(131),
        [anon_sym_BSLASH] = ACTIONS(131),
        [anon_sym_CARET] = ACTIONS(131),
        [anon_sym__] = ACTIONS(131),
        [anon_sym_BQUOTE] = ACTIONS(131),
        [anon_sym_PIPE] = ACTIONS(131),
        [anon_sym_TILDE] = ACTIONS(131),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(131),
        [anon_sym_anchor] = ACTIONS(131),
        [sym_email] = ACTIONS(131),
        [anon_sym_http] = ACTIONS(131),
        [anon_sym_https] = ACTIONS(131),
        [anon_sym_file] = ACTIONS(131),
        [anon_sym_ftp] = ACTIONS(131),
        [anon_sym_irc] = ACTIONS(131),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(131),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(131),
        [anon_sym_LT_LT] = ACTIONS(131),
        [anon_sym_xref] = ACTIONS(131),
        [anon_sym_STAR2] = ACTIONS(131),
        [anon_sym_STAR_STAR] = ACTIONS(131),
        [anon_sym__2] = ACTIONS(131),
        [anon_sym___] = ACTIONS(131),
        [anon_sym_BQUOTE2] = ACTIONS(131),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(131),
        [anon_sym_POUND2] = ACTIONS(131),
        [anon_sym_POUND_POUND] = ACTIONS(131),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(136),
        [anon_sym_kbd] = ACTIONS(138),
        [anon_sym_btn] = ACTIONS(138),
        [anon_sym_image] = ACTIONS(138),
        [anon_sym_icon] = ACTIONS(138),
        [anon_sym_pass] = ACTIONS(138),
        [anon_sym_link] = ACTIONS(138),
        [anon_sym_mailto] = ACTIONS(138),
        [anon_sym_menu] = ACTIONS(138),
        [anon_sym_latexmath] = ACTIONS(138),
        [anon_sym_asciimath] = ACTIONS(138),
        [anon_sym_footnote] = ACTIONS(138),
        [anon_sym_footnoteref] = ACTIONS(138),
        [anon_sym_LBRACK] = ACTIONS(138),
        [anon_sym_RBRACK] = ACTIONS(138),
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
        [anon_sym_COLON2] = ACTIONS(138),
        [anon_sym_SEMI] = ACTIONS(138),
        [anon_sym_LT] = ACTIONS(138),
        [anon_sym_EQ] = ACTIONS(138),
        [anon_sym_GT] = ACTIONS(138),
        [anon_sym_QMARK] = ACTIONS(138),
        [anon_sym_AT] = ACTIONS(138),
        [anon_sym_BSLASH] = ACTIONS(138),
        [anon_sym_CARET] = ACTIONS(138),
        [anon_sym__] = ACTIONS(138),
        [anon_sym_BQUOTE] = ACTIONS(138),
        [anon_sym_PIPE] = ACTIONS(138),
        [anon_sym_TILDE] = ACTIONS(138),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(138),
        [anon_sym_anchor] = ACTIONS(138),
        [sym_email] = ACTIONS(138),
        [anon_sym_http] = ACTIONS(138),
        [anon_sym_https] = ACTIONS(138),
        [anon_sym_file] = ACTIONS(138),
        [anon_sym_ftp] = ACTIONS(138),
        [anon_sym_irc] = ACTIONS(138),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(138),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(138),
        [anon_sym_LT_LT] = ACTIONS(138),
        [anon_sym_xref] = ACTIONS(138),
        [anon_sym_STAR2] = ACTIONS(138),
        [anon_sym_STAR_STAR] = ACTIONS(138),
        [anon_sym__2] = ACTIONS(138),
        [anon_sym___] = ACTIONS(138),
        [anon_sym_BQUOTE2] = ACTIONS(138),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(138),
        [anon_sym_POUND2] = ACTIONS(138),
        [anon_sym_POUND_POUND] = ACTIONS(138),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(140),
        [anon_sym_kbd] = ACTIONS(142),
        [anon_sym_btn] = ACTIONS(142),
        [anon_sym_image] = ACTIONS(142),
        [anon_sym_icon] = ACTIONS(142),
        [anon_sym_pass] = ACTIONS(142),
        [anon_sym_link] = ACTIONS(142),
        [anon_sym_mailto] = ACTIONS(142),
        [anon_sym_menu] = ACTIONS(142),
        [anon_sym_latexmath] = ACTIONS(142),
        [anon_sym_asciimath] = ACTIONS(142),
        [anon_sym_footnote] = ACTIONS(142),
        [anon_sym_footnoteref] = ACTIONS(142),
        [anon_sym_LBRACK] = ACTIONS(142),
        [anon_sym_RBRACK] = ACTIONS(142),
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
        [anon_sym_COLON2] = ACTIONS(142),
        [anon_sym_SEMI] = ACTIONS(142),
        [anon_sym_LT] = ACTIONS(142),
        [anon_sym_EQ] = ACTIONS(142),
        [anon_sym_GT] = ACTIONS(142),
        [anon_sym_QMARK] = ACTIONS(142),
        [anon_sym_AT] = ACTIONS(142),
        [anon_sym_BSLASH] = ACTIONS(142),
        [anon_sym_CARET] = ACTIONS(142),
        [anon_sym__] = ACTIONS(142),
        [anon_sym_BQUOTE] = ACTIONS(142),
        [anon_sym_PIPE] = ACTIONS(142),
        [anon_sym_TILDE] = ACTIONS(142),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(142),
        [anon_sym_anchor] = ACTIONS(142),
        [sym_email] = ACTIONS(142),
        [anon_sym_http] = ACTIONS(142),
        [anon_sym_https] = ACTIONS(142),
        [anon_sym_file] = ACTIONS(142),
        [anon_sym_ftp] = ACTIONS(142),
        [anon_sym_irc] = ACTIONS(142),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(142),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(142),
        [anon_sym_LT_LT] = ACTIONS(142),
        [anon_sym_xref] = ACTIONS(142),
        [anon_sym_STAR2] = ACTIONS(142),
        [anon_sym_STAR_STAR] = ACTIONS(142),
        [anon_sym__2] = ACTIONS(142),
        [anon_sym___] = ACTIONS(142),
        [anon_sym_BQUOTE2] = ACTIONS(142),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(142),
        [anon_sym_POUND2] = ACTIONS(142),
        [anon_sym_POUND_POUND] = ACTIONS(142),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(144),
        [anon_sym_kbd] = ACTIONS(146),
        [anon_sym_btn] = ACTIONS(146),
        [anon_sym_image] = ACTIONS(146),
        [anon_sym_icon] = ACTIONS(146),
        [anon_sym_pass] = ACTIONS(146),
        [anon_sym_link] = ACTIONS(146),
        [anon_sym_mailto] = ACTIONS(146),
        [anon_sym_menu] = ACTIONS(146),
        [anon_sym_latexmath] = ACTIONS(146),
        [anon_sym_asciimath] = ACTIONS(146),
        [anon_sym_footnote] = ACTIONS(146),
        [anon_sym_footnoteref] = ACTIONS(146),
        [anon_sym_LBRACK] = ACTIONS(146),
        [anon_sym_RBRACK] = ACTIONS(146),
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
        [anon_sym_COLON2] = ACTIONS(146),
        [anon_sym_SEMI] = ACTIONS(146),
        [anon_sym_LT] = ACTIONS(146),
        [anon_sym_EQ] = ACTIONS(146),
        [anon_sym_GT] = ACTIONS(146),
        [anon_sym_QMARK] = ACTIONS(146),
        [anon_sym_AT] = ACTIONS(146),
        [anon_sym_BSLASH] = ACTIONS(146),
        [anon_sym_CARET] = ACTIONS(146),
        [anon_sym__] = ACTIONS(146),
        [anon_sym_BQUOTE] = ACTIONS(146),
        [anon_sym_PIPE] = ACTIONS(146),
        [anon_sym_TILDE] = ACTIONS(146),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(146),
        [anon_sym_anchor] = ACTIONS(146),
        [sym_email] = ACTIONS(146),
        [anon_sym_http] = ACTIONS(146),
        [anon_sym_https] = ACTIONS(146),
        [anon_sym_file] = ACTIONS(146),
        [anon_sym_ftp] = ACTIONS(146),
        [anon_sym_irc] = ACTIONS(146),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(146),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(146),
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
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(148),
        [anon_sym_kbd] = ACTIONS(150),
        [anon_sym_btn] = ACTIONS(150),
        [anon_sym_image] = ACTIONS(150),
        [anon_sym_icon] = ACTIONS(150),
        [anon_sym_pass] = ACTIONS(150),
        [anon_sym_link] = ACTIONS(150),
        [anon_sym_mailto] = ACTIONS(150),
        [anon_sym_menu] = ACTIONS(150),
        [anon_sym_latexmath] = ACTIONS(150),
        [anon_sym_asciimath] = ACTIONS(150),
        [anon_sym_footnote] = ACTIONS(150),
        [anon_sym_footnoteref] = ACTIONS(150),
        [anon_sym_LBRACK] = ACTIONS(150),
        [anon_sym_RBRACK] = ACTIONS(150),
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
        [anon_sym_COLON2] = ACTIONS(150),
        [anon_sym_SEMI] = ACTIONS(150),
        [anon_sym_LT] = ACTIONS(150),
        [anon_sym_EQ] = ACTIONS(150),
        [anon_sym_GT] = ACTIONS(150),
        [anon_sym_QMARK] = ACTIONS(150),
        [anon_sym_AT] = ACTIONS(150),
        [anon_sym_BSLASH] = ACTIONS(150),
        [anon_sym_CARET] = ACTIONS(150),
        [anon_sym__] = ACTIONS(150),
        [anon_sym_BQUOTE] = ACTIONS(150),
        [anon_sym_PIPE] = ACTIONS(150),
        [anon_sym_TILDE] = ACTIONS(150),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(150),
        [anon_sym_anchor] = ACTIONS(150),
        [sym_email] = ACTIONS(150),
        [anon_sym_http] = ACTIONS(150),
        [anon_sym_https] = ACTIONS(150),
        [anon_sym_file] = ACTIONS(150),
        [anon_sym_ftp] = ACTIONS(150),
        [anon_sym_irc] = ACTIONS(150),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(150),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
        [anon_sym_LT_LT] = ACTIONS(150),
        [anon_sym_xref] = ACTIONS(150),
        [anon_sym_STAR2] = ACTIONS(150),
        [anon_sym_STAR_STAR] = ACTIONS(150),
        [anon_sym__2] = ACTIONS(150),
        [anon_sym___] = ACTIONS(150),
        [anon_sym_BQUOTE2] = ACTIONS(150),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(150),
        [anon_sym_POUND2] = ACTIONS(150),
        [anon_sym_POUND_POUND] = ACTIONS(150),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(152),
        [anon_sym_kbd] = ACTIONS(154),
        [anon_sym_btn] = ACTIONS(154),
        [anon_sym_image] = ACTIONS(154),
        [anon_sym_icon] = ACTIONS(154),
        [anon_sym_pass] = ACTIONS(154),
        [anon_sym_link] = ACTIONS(154),
        [anon_sym_mailto] = ACTIONS(154),
        [anon_sym_menu] = ACTIONS(154),
        [anon_sym_latexmath] = ACTIONS(154),
        [anon_sym_asciimath] = ACTIONS(154),
        [anon_sym_footnote] = ACTIONS(154),
        [anon_sym_footnoteref] = ACTIONS(154),
        [anon_sym_LBRACK] = ACTIONS(154),
        [anon_sym_RBRACK] = ACTIONS(154),
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
        [anon_sym_COLON2] = ACTIONS(154),
        [anon_sym_SEMI] = ACTIONS(154),
        [anon_sym_LT] = ACTIONS(154),
        [anon_sym_EQ] = ACTIONS(154),
        [anon_sym_GT] = ACTIONS(154),
        [anon_sym_QMARK] = ACTIONS(154),
        [anon_sym_AT] = ACTIONS(154),
        [anon_sym_BSLASH] = ACTIONS(154),
        [anon_sym_CARET] = ACTIONS(154),
        [anon_sym__] = ACTIONS(154),
        [anon_sym_BQUOTE] = ACTIONS(154),
        [anon_sym_PIPE] = ACTIONS(154),
        [anon_sym_TILDE] = ACTIONS(154),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(154),
        [anon_sym_anchor] = ACTIONS(154),
        [sym_email] = ACTIONS(154),
        [anon_sym_http] = ACTIONS(154),
        [anon_sym_https] = ACTIONS(154),
        [anon_sym_file] = ACTIONS(154),
        [anon_sym_ftp] = ACTIONS(154),
        [anon_sym_irc] = ACTIONS(154),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(154),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(154),
        [anon_sym_LT_LT] = ACTIONS(154),
        [anon_sym_xref] = ACTIONS(154),
        [anon_sym_STAR2] = ACTIONS(154),
        [anon_sym_STAR_STAR] = ACTIONS(154),
        [anon_sym__2] = ACTIONS(154),
        [anon_sym___] = ACTIONS(154),
        [anon_sym_BQUOTE2] = ACTIONS(154),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(154),
        [anon_sym_POUND2] = ACTIONS(154),
        [anon_sym_POUND_POUND] = ACTIONS(154),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(156),
        [anon_sym_kbd] = ACTIONS(158),
        [anon_sym_btn] = ACTIONS(158),
        [anon_sym_image] = ACTIONS(158),
        [anon_sym_icon] = ACTIONS(158),
        [anon_sym_pass] = ACTIONS(158),
        [anon_sym_link] = ACTIONS(158),
        [anon_sym_mailto] = ACTIONS(158),
        [anon_sym_menu] = ACTIONS(158),
        [anon_sym_latexmath] = ACTIONS(158),
        [anon_sym_asciimath] = ACTIONS(158),
        [anon_sym_footnote] = ACTIONS(158),
        [anon_sym_footnoteref] = ACTIONS(158),
        [anon_sym_LBRACK] = ACTIONS(158),
        [anon_sym_RBRACK] = ACTIONS(158),
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
        [anon_sym_COLON2] = ACTIONS(158),
        [anon_sym_SEMI] = ACTIONS(158),
        [anon_sym_LT] = ACTIONS(158),
        [anon_sym_EQ] = ACTIONS(158),
        [anon_sym_GT] = ACTIONS(158),
        [anon_sym_QMARK] = ACTIONS(158),
        [anon_sym_AT] = ACTIONS(158),
        [anon_sym_BSLASH] = ACTIONS(158),
        [anon_sym_CARET] = ACTIONS(158),
        [anon_sym__] = ACTIONS(158),
        [anon_sym_BQUOTE] = ACTIONS(158),
        [anon_sym_PIPE] = ACTIONS(158),
        [anon_sym_TILDE] = ACTIONS(158),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(158),
        [anon_sym_anchor] = ACTIONS(158),
        [sym_email] = ACTIONS(158),
        [anon_sym_http] = ACTIONS(158),
        [anon_sym_https] = ACTIONS(158),
        [anon_sym_file] = ACTIONS(158),
        [anon_sym_ftp] = ACTIONS(158),
        [anon_sym_irc] = ACTIONS(158),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(158),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(158),
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
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(160),
        [anon_sym_kbd] = ACTIONS(162),
        [anon_sym_btn] = ACTIONS(162),
        [anon_sym_image] = ACTIONS(162),
        [anon_sym_icon] = ACTIONS(162),
        [anon_sym_pass] = ACTIONS(162),
        [anon_sym_link] = ACTIONS(162),
        [anon_sym_mailto] = ACTIONS(162),
        [anon_sym_menu] = ACTIONS(162),
        [anon_sym_latexmath] = ACTIONS(162),
        [anon_sym_asciimath] = ACTIONS(162),
        [anon_sym_footnote] = ACTIONS(162),
        [anon_sym_footnoteref] = ACTIONS(162),
        [anon_sym_LBRACK] = ACTIONS(162),
        [anon_sym_RBRACK] = ACTIONS(162),
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
        [anon_sym_COLON2] = ACTIONS(162),
        [anon_sym_SEMI] = ACTIONS(162),
        [anon_sym_LT] = ACTIONS(162),
        [anon_sym_EQ] = ACTIONS(162),
        [anon_sym_GT] = ACTIONS(162),
        [anon_sym_QMARK] = ACTIONS(162),
        [anon_sym_AT] = ACTIONS(162),
        [anon_sym_BSLASH] = ACTIONS(162),
        [anon_sym_CARET] = ACTIONS(162),
        [anon_sym__] = ACTIONS(162),
        [anon_sym_BQUOTE] = ACTIONS(162),
        [anon_sym_PIPE] = ACTIONS(162),
        [anon_sym_TILDE] = ACTIONS(162),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(162),
        [anon_sym_anchor] = ACTIONS(162),
        [sym_email] = ACTIONS(162),
        [anon_sym_http] = ACTIONS(162),
        [anon_sym_https] = ACTIONS(162),
        [anon_sym_file] = ACTIONS(162),
        [anon_sym_ftp] = ACTIONS(162),
        [anon_sym_irc] = ACTIONS(162),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(162),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(162),
        [anon_sym_LT_LT] = ACTIONS(162),
        [anon_sym_xref] = ACTIONS(162),
        [anon_sym_STAR2] = ACTIONS(162),
        [anon_sym_STAR_STAR] = ACTIONS(162),
        [anon_sym__2] = ACTIONS(162),
        [anon_sym___] = ACTIONS(162),
        [anon_sym_BQUOTE2] = ACTIONS(162),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(162),
        [anon_sym_POUND2] = ACTIONS(162),
        [anon_sym_POUND_POUND] = ACTIONS(162),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(164),
        [anon_sym_kbd] = ACTIONS(166),
        [anon_sym_btn] = ACTIONS(166),
        [anon_sym_image] = ACTIONS(166),
        [anon_sym_icon] = ACTIONS(166),
        [anon_sym_pass] = ACTIONS(166),
        [anon_sym_link] = ACTIONS(166),
        [anon_sym_mailto] = ACTIONS(166),
        [anon_sym_menu] = ACTIONS(166),
        [anon_sym_latexmath] = ACTIONS(166),
        [anon_sym_asciimath] = ACTIONS(166),
        [anon_sym_footnote] = ACTIONS(166),
        [anon_sym_footnoteref] = ACTIONS(166),
        [anon_sym_LBRACK] = ACTIONS(166),
        [anon_sym_RBRACK] = ACTIONS(166),
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
        [anon_sym_COLON2] = ACTIONS(166),
        [anon_sym_SEMI] = ACTIONS(166),
        [anon_sym_LT] = ACTIONS(166),
        [anon_sym_EQ] = ACTIONS(166),
        [anon_sym_GT] = ACTIONS(166),
        [anon_sym_QMARK] = ACTIONS(166),
        [anon_sym_AT] = ACTIONS(166),
        [anon_sym_BSLASH] = ACTIONS(166),
        [anon_sym_CARET] = ACTIONS(166),
        [anon_sym__] = ACTIONS(166),
        [anon_sym_BQUOTE] = ACTIONS(166),
        [anon_sym_PIPE] = ACTIONS(166),
        [anon_sym_TILDE] = ACTIONS(166),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(166),
        [anon_sym_anchor] = ACTIONS(166),
        [sym_email] = ACTIONS(166),
        [anon_sym_http] = ACTIONS(166),
        [anon_sym_https] = ACTIONS(166),
        [anon_sym_file] = ACTIONS(166),
        [anon_sym_ftp] = ACTIONS(166),
        [anon_sym_irc] = ACTIONS(166),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(166),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(166),
        [anon_sym_LT_LT] = ACTIONS(166),
        [anon_sym_xref] = ACTIONS(166),
        [anon_sym_STAR2] = ACTIONS(166),
        [anon_sym_STAR_STAR] = ACTIONS(166),
        [anon_sym__2] = ACTIONS(166),
        [anon_sym___] = ACTIONS(166),
        [anon_sym_BQUOTE2] = ACTIONS(166),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(166),
        [anon_sym_POUND2] = ACTIONS(166),
        [anon_sym_POUND_POUND] = ACTIONS(166),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(168),
        [anon_sym_kbd] = ACTIONS(170),
        [anon_sym_btn] = ACTIONS(170),
        [anon_sym_image] = ACTIONS(170),
        [anon_sym_icon] = ACTIONS(170),
        [anon_sym_pass] = ACTIONS(170),
        [anon_sym_link] = ACTIONS(170),
        [anon_sym_mailto] = ACTIONS(170),
        [anon_sym_menu] = ACTIONS(170),
        [anon_sym_latexmath] = ACTIONS(170),
        [anon_sym_asciimath] = ACTIONS(170),
        [anon_sym_footnote] = ACTIONS(170),
        [anon_sym_footnoteref] = ACTIONS(170),
        [anon_sym_LBRACK] = ACTIONS(170),
        [anon_sym_RBRACK] = ACTIONS(170),
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
        [anon_sym_COLON2] = ACTIONS(170),
        [anon_sym_SEMI] = ACTIONS(170),
        [anon_sym_LT] = ACTIONS(170),
        [anon_sym_EQ] = ACTIONS(170),
        [anon_sym_GT] = ACTIONS(170),
        [anon_sym_QMARK] = ACTIONS(170),
        [anon_sym_AT] = ACTIONS(170),
        [anon_sym_BSLASH] = ACTIONS(170),
        [anon_sym_CARET] = ACTIONS(170),
        [anon_sym__] = ACTIONS(170),
        [anon_sym_BQUOTE] = ACTIONS(170),
        [anon_sym_PIPE] = ACTIONS(170),
        [anon_sym_TILDE] = ACTIONS(170),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(170),
        [anon_sym_anchor] = ACTIONS(170),
        [sym_email] = ACTIONS(170),
        [anon_sym_http] = ACTIONS(170),
        [anon_sym_https] = ACTIONS(170),
        [anon_sym_file] = ACTIONS(170),
        [anon_sym_ftp] = ACTIONS(170),
        [anon_sym_irc] = ACTIONS(170),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(170),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(170),
        [anon_sym_LT_LT] = ACTIONS(170),
        [anon_sym_xref] = ACTIONS(170),
        [anon_sym_STAR2] = ACTIONS(170),
        [anon_sym_STAR_STAR] = ACTIONS(170),
        [anon_sym__2] = ACTIONS(170),
        [anon_sym___] = ACTIONS(170),
        [anon_sym_BQUOTE2] = ACTIONS(170),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(170),
        [anon_sym_POUND2] = ACTIONS(170),
        [anon_sym_POUND_POUND] = ACTIONS(170),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(172),
        [anon_sym_kbd] = ACTIONS(174),
        [anon_sym_btn] = ACTIONS(174),
        [anon_sym_image] = ACTIONS(174),
        [anon_sym_icon] = ACTIONS(174),
        [anon_sym_pass] = ACTIONS(174),
        [anon_sym_link] = ACTIONS(174),
        [anon_sym_mailto] = ACTIONS(174),
        [anon_sym_menu] = ACTIONS(174),
        [anon_sym_latexmath] = ACTIONS(174),
        [anon_sym_asciimath] = ACTIONS(174),
        [anon_sym_footnote] = ACTIONS(174),
        [anon_sym_footnoteref] = ACTIONS(174),
        [anon_sym_LBRACK] = ACTIONS(174),
        [anon_sym_RBRACK] = ACTIONS(174),
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
        [anon_sym_COLON2] = ACTIONS(174),
        [anon_sym_SEMI] = ACTIONS(174),
        [anon_sym_LT] = ACTIONS(174),
        [anon_sym_EQ] = ACTIONS(174),
        [anon_sym_GT] = ACTIONS(174),
        [anon_sym_QMARK] = ACTIONS(174),
        [anon_sym_AT] = ACTIONS(174),
        [anon_sym_BSLASH] = ACTIONS(174),
        [anon_sym_CARET] = ACTIONS(174),
        [anon_sym__] = ACTIONS(174),
        [anon_sym_BQUOTE] = ACTIONS(174),
        [anon_sym_PIPE] = ACTIONS(174),
        [anon_sym_TILDE] = ACTIONS(174),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(174),
        [anon_sym_anchor] = ACTIONS(174),
        [sym_email] = ACTIONS(174),
        [anon_sym_http] = ACTIONS(174),
        [anon_sym_https] = ACTIONS(174),
        [anon_sym_file] = ACTIONS(174),
        [anon_sym_ftp] = ACTIONS(174),
        [anon_sym_irc] = ACTIONS(174),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(174),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(174),
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
    [20] = {
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
        [anon_sym_anchor] = ACTIONS(178),
        [sym_email] = ACTIONS(178),
        [anon_sym_http] = ACTIONS(178),
        [anon_sym_https] = ACTIONS(178),
        [anon_sym_file] = ACTIONS(178),
        [anon_sym_ftp] = ACTIONS(178),
        [anon_sym_irc] = ACTIONS(178),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(178),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(178),
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
    [21] = {
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
        [anon_sym_anchor] = ACTIONS(182),
        [sym_email] = ACTIONS(182),
        [anon_sym_http] = ACTIONS(182),
        [anon_sym_https] = ACTIONS(182),
        [anon_sym_file] = ACTIONS(182),
        [anon_sym_ftp] = ACTIONS(182),
        [anon_sym_irc] = ACTIONS(182),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(182),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(182),
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
    [22] = {
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
        [anon_sym_LBRACK] = ACTIONS(188),
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
        [anon_sym_anchor] = ACTIONS(186),
        [sym_email] = ACTIONS(186),
        [anon_sym_http] = ACTIONS(186),
        [anon_sym_https] = ACTIONS(186),
        [anon_sym_file] = ACTIONS(186),
        [anon_sym_ftp] = ACTIONS(186),
        [anon_sym_irc] = ACTIONS(186),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(186),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(186),
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
    [23] = {
        [ts_builtin_sym_end] = ACTIONS(190),
        [anon_sym_kbd] = ACTIONS(192),
        [anon_sym_btn] = ACTIONS(192),
        [anon_sym_image] = ACTIONS(192),
        [anon_sym_icon] = ACTIONS(192),
        [anon_sym_pass] = ACTIONS(192),
        [anon_sym_link] = ACTIONS(192),
        [anon_sym_mailto] = ACTIONS(192),
        [anon_sym_menu] = ACTIONS(192),
        [anon_sym_latexmath] = ACTIONS(192),
        [anon_sym_asciimath] = ACTIONS(192),
        [anon_sym_footnote] = ACTIONS(192),
        [anon_sym_footnoteref] = ACTIONS(192),
        [anon_sym_LBRACK] = ACTIONS(192),
        [anon_sym_RBRACK] = ACTIONS(192),
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
        [anon_sym_COLON2] = ACTIONS(192),
        [anon_sym_SEMI] = ACTIONS(192),
        [anon_sym_LT] = ACTIONS(192),
        [anon_sym_EQ] = ACTIONS(192),
        [anon_sym_GT] = ACTIONS(192),
        [anon_sym_QMARK] = ACTIONS(192),
        [anon_sym_AT] = ACTIONS(192),
        [anon_sym_BSLASH] = ACTIONS(192),
        [anon_sym_CARET] = ACTIONS(192),
        [anon_sym__] = ACTIONS(192),
        [anon_sym_BQUOTE] = ACTIONS(192),
        [anon_sym_PIPE] = ACTIONS(192),
        [anon_sym_TILDE] = ACTIONS(192),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(192),
        [anon_sym_anchor] = ACTIONS(192),
        [sym_email] = ACTIONS(192),
        [anon_sym_http] = ACTIONS(192),
        [anon_sym_https] = ACTIONS(192),
        [anon_sym_file] = ACTIONS(192),
        [anon_sym_ftp] = ACTIONS(192),
        [anon_sym_irc] = ACTIONS(192),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(192),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(192),
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
    [24] = {
        [ts_builtin_sym_end] = ACTIONS(194),
        [anon_sym_kbd] = ACTIONS(196),
        [anon_sym_btn] = ACTIONS(196),
        [anon_sym_image] = ACTIONS(196),
        [anon_sym_icon] = ACTIONS(196),
        [anon_sym_pass] = ACTIONS(196),
        [anon_sym_link] = ACTIONS(196),
        [anon_sym_mailto] = ACTIONS(196),
        [anon_sym_menu] = ACTIONS(196),
        [anon_sym_latexmath] = ACTIONS(196),
        [anon_sym_asciimath] = ACTIONS(196),
        [anon_sym_footnote] = ACTIONS(196),
        [anon_sym_footnoteref] = ACTIONS(196),
        [anon_sym_LBRACK] = ACTIONS(196),
        [anon_sym_RBRACK] = ACTIONS(196),
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
        [anon_sym_COLON2] = ACTIONS(196),
        [anon_sym_SEMI] = ACTIONS(196),
        [anon_sym_LT] = ACTIONS(196),
        [anon_sym_EQ] = ACTIONS(196),
        [anon_sym_GT] = ACTIONS(196),
        [anon_sym_QMARK] = ACTIONS(196),
        [anon_sym_AT] = ACTIONS(196),
        [anon_sym_BSLASH] = ACTIONS(196),
        [anon_sym_CARET] = ACTIONS(196),
        [anon_sym__] = ACTIONS(196),
        [anon_sym_BQUOTE] = ACTIONS(196),
        [anon_sym_PIPE] = ACTIONS(196),
        [anon_sym_TILDE] = ACTIONS(196),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(196),
        [anon_sym_anchor] = ACTIONS(196),
        [sym_email] = ACTIONS(196),
        [anon_sym_http] = ACTIONS(196),
        [anon_sym_https] = ACTIONS(196),
        [anon_sym_file] = ACTIONS(196),
        [anon_sym_ftp] = ACTIONS(196),
        [anon_sym_irc] = ACTIONS(196),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(196),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(196),
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
    [25] = {
        [ts_builtin_sym_end] = ACTIONS(198),
        [anon_sym_kbd] = ACTIONS(200),
        [anon_sym_btn] = ACTIONS(200),
        [anon_sym_image] = ACTIONS(200),
        [anon_sym_icon] = ACTIONS(200),
        [anon_sym_pass] = ACTIONS(200),
        [anon_sym_link] = ACTIONS(200),
        [anon_sym_mailto] = ACTIONS(200),
        [anon_sym_menu] = ACTIONS(200),
        [anon_sym_latexmath] = ACTIONS(200),
        [anon_sym_asciimath] = ACTIONS(200),
        [anon_sym_footnote] = ACTIONS(200),
        [anon_sym_footnoteref] = ACTIONS(200),
        [anon_sym_LBRACK] = ACTIONS(200),
        [anon_sym_RBRACK] = ACTIONS(200),
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
        [anon_sym_COLON2] = ACTIONS(200),
        [anon_sym_SEMI] = ACTIONS(200),
        [anon_sym_LT] = ACTIONS(200),
        [anon_sym_EQ] = ACTIONS(200),
        [anon_sym_GT] = ACTIONS(200),
        [anon_sym_QMARK] = ACTIONS(200),
        [anon_sym_AT] = ACTIONS(200),
        [anon_sym_BSLASH] = ACTIONS(200),
        [anon_sym_CARET] = ACTIONS(200),
        [anon_sym__] = ACTIONS(200),
        [anon_sym_BQUOTE] = ACTIONS(200),
        [anon_sym_PIPE] = ACTIONS(200),
        [anon_sym_TILDE] = ACTIONS(200),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(200),
        [anon_sym_anchor] = ACTIONS(200),
        [sym_email] = ACTIONS(200),
        [anon_sym_http] = ACTIONS(200),
        [anon_sym_https] = ACTIONS(200),
        [anon_sym_file] = ACTIONS(200),
        [anon_sym_ftp] = ACTIONS(200),
        [anon_sym_irc] = ACTIONS(200),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(200),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(200),
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
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(202),
        [anon_sym_kbd] = ACTIONS(204),
        [anon_sym_btn] = ACTIONS(204),
        [anon_sym_image] = ACTIONS(204),
        [anon_sym_icon] = ACTIONS(204),
        [anon_sym_pass] = ACTIONS(204),
        [anon_sym_link] = ACTIONS(204),
        [anon_sym_mailto] = ACTIONS(204),
        [anon_sym_menu] = ACTIONS(204),
        [anon_sym_latexmath] = ACTIONS(204),
        [anon_sym_asciimath] = ACTIONS(204),
        [anon_sym_footnote] = ACTIONS(204),
        [anon_sym_footnoteref] = ACTIONS(204),
        [anon_sym_LBRACK] = ACTIONS(204),
        [anon_sym_RBRACK] = ACTIONS(204),
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
        [anon_sym_COLON2] = ACTIONS(204),
        [anon_sym_SEMI] = ACTIONS(204),
        [anon_sym_LT] = ACTIONS(204),
        [anon_sym_EQ] = ACTIONS(204),
        [anon_sym_GT] = ACTIONS(204),
        [anon_sym_QMARK] = ACTIONS(204),
        [anon_sym_AT] = ACTIONS(204),
        [anon_sym_BSLASH] = ACTIONS(204),
        [anon_sym_CARET] = ACTIONS(204),
        [anon_sym__] = ACTIONS(204),
        [anon_sym_BQUOTE] = ACTIONS(204),
        [anon_sym_PIPE] = ACTIONS(204),
        [anon_sym_TILDE] = ACTIONS(204),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(204),
        [anon_sym_anchor] = ACTIONS(204),
        [sym_email] = ACTIONS(204),
        [anon_sym_http] = ACTIONS(204),
        [anon_sym_https] = ACTIONS(204),
        [anon_sym_file] = ACTIONS(204),
        [anon_sym_ftp] = ACTIONS(204),
        [anon_sym_irc] = ACTIONS(204),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(204),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(204),
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
    [27] = {
        [ts_builtin_sym_end] = ACTIONS(206),
        [anon_sym_kbd] = ACTIONS(208),
        [anon_sym_btn] = ACTIONS(208),
        [anon_sym_image] = ACTIONS(208),
        [anon_sym_icon] = ACTIONS(208),
        [anon_sym_pass] = ACTIONS(208),
        [anon_sym_link] = ACTIONS(208),
        [anon_sym_mailto] = ACTIONS(208),
        [anon_sym_menu] = ACTIONS(208),
        [anon_sym_latexmath] = ACTIONS(208),
        [anon_sym_asciimath] = ACTIONS(208),
        [anon_sym_footnote] = ACTIONS(208),
        [anon_sym_footnoteref] = ACTIONS(208),
        [anon_sym_LBRACK] = ACTIONS(208),
        [anon_sym_RBRACK] = ACTIONS(208),
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
        [anon_sym_COLON2] = ACTIONS(208),
        [anon_sym_SEMI] = ACTIONS(208),
        [anon_sym_LT] = ACTIONS(208),
        [anon_sym_EQ] = ACTIONS(208),
        [anon_sym_GT] = ACTIONS(208),
        [anon_sym_QMARK] = ACTIONS(208),
        [anon_sym_AT] = ACTIONS(208),
        [anon_sym_BSLASH] = ACTIONS(208),
        [anon_sym_CARET] = ACTIONS(208),
        [anon_sym__] = ACTIONS(208),
        [anon_sym_BQUOTE] = ACTIONS(208),
        [anon_sym_PIPE] = ACTIONS(208),
        [anon_sym_TILDE] = ACTIONS(208),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(208),
        [anon_sym_anchor] = ACTIONS(208),
        [sym_email] = ACTIONS(208),
        [anon_sym_http] = ACTIONS(208),
        [anon_sym_https] = ACTIONS(208),
        [anon_sym_file] = ACTIONS(208),
        [anon_sym_ftp] = ACTIONS(208),
        [anon_sym_irc] = ACTIONS(208),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(208),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(208),
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
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(129),
        [anon_sym_kbd] = ACTIONS(131),
        [anon_sym_btn] = ACTIONS(131),
        [anon_sym_image] = ACTIONS(131),
        [anon_sym_icon] = ACTIONS(131),
        [anon_sym_pass] = ACTIONS(131),
        [anon_sym_link] = ACTIONS(131),
        [anon_sym_mailto] = ACTIONS(131),
        [anon_sym_menu] = ACTIONS(131),
        [anon_sym_latexmath] = ACTIONS(131),
        [anon_sym_asciimath] = ACTIONS(131),
        [anon_sym_footnote] = ACTIONS(131),
        [anon_sym_footnoteref] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(131),
        [anon_sym_RBRACK] = ACTIONS(131),
        [anon_sym_LBRACE] = ACTIONS(131),
        [anon_sym_RBRACE] = ACTIONS(131),
        [sym__word_no_digit] = ACTIONS(131),
        [sym__digits] = ACTIONS(131),
        [anon_sym_BANG] = ACTIONS(131),
        [anon_sym_DQUOTE] = ACTIONS(131),
        [anon_sym_POUND] = ACTIONS(131),
        [anon_sym_DOLLAR] = ACTIONS(131),
        [anon_sym_PERCENT] = ACTIONS(131),
        [anon_sym_AMP] = ACTIONS(131),
        [anon_sym_SQUOTE] = ACTIONS(131),
        [anon_sym_LPAREN] = ACTIONS(131),
        [anon_sym_RPAREN] = ACTIONS(131),
        [anon_sym_STAR] = ACTIONS(131),
        [anon_sym_PLUS] = ACTIONS(131),
        [anon_sym_COMMA] = ACTIONS(131),
        [anon_sym_DASH] = ACTIONS(131),
        [anon_sym_DOT] = ACTIONS(131),
        [anon_sym_SLASH] = ACTIONS(131),
        [anon_sym_COLON2] = ACTIONS(131),
        [anon_sym_SEMI] = ACTIONS(131),
        [anon_sym_LT] = ACTIONS(131),
        [anon_sym_EQ] = ACTIONS(131),
        [anon_sym_GT] = ACTIONS(131),
        [anon_sym_QMARK] = ACTIONS(131),
        [anon_sym_AT] = ACTIONS(131),
        [anon_sym_BSLASH] = ACTIONS(131),
        [anon_sym_CARET] = ACTIONS(131),
        [anon_sym__] = ACTIONS(131),
        [anon_sym_BQUOTE] = ACTIONS(131),
        [anon_sym_PIPE] = ACTIONS(131),
        [anon_sym_TILDE] = ACTIONS(131),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(131),
        [anon_sym_anchor] = ACTIONS(131),
        [sym_email] = ACTIONS(131),
        [anon_sym_http] = ACTIONS(131),
        [anon_sym_https] = ACTIONS(131),
        [anon_sym_file] = ACTIONS(131),
        [anon_sym_ftp] = ACTIONS(131),
        [anon_sym_irc] = ACTIONS(131),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(131),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(131),
        [anon_sym_LT_LT] = ACTIONS(131),
        [anon_sym_xref] = ACTIONS(131),
        [anon_sym_STAR2] = ACTIONS(131),
        [anon_sym_STAR_STAR] = ACTIONS(131),
        [anon_sym__2] = ACTIONS(131),
        [anon_sym___] = ACTIONS(131),
        [anon_sym_BQUOTE2] = ACTIONS(131),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(131),
        [anon_sym_POUND2] = ACTIONS(131),
        [anon_sym_POUND_POUND] = ACTIONS(131),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(210),
        [anon_sym_kbd] = ACTIONS(212),
        [anon_sym_btn] = ACTIONS(212),
        [anon_sym_image] = ACTIONS(212),
        [anon_sym_icon] = ACTIONS(212),
        [anon_sym_pass] = ACTIONS(212),
        [anon_sym_link] = ACTIONS(212),
        [anon_sym_mailto] = ACTIONS(212),
        [anon_sym_menu] = ACTIONS(212),
        [anon_sym_latexmath] = ACTIONS(212),
        [anon_sym_asciimath] = ACTIONS(212),
        [anon_sym_footnote] = ACTIONS(212),
        [anon_sym_footnoteref] = ACTIONS(212),
        [anon_sym_LBRACK] = ACTIONS(212),
        [anon_sym_RBRACK] = ACTIONS(212),
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
        [anon_sym_COLON2] = ACTIONS(212),
        [anon_sym_SEMI] = ACTIONS(212),
        [anon_sym_LT] = ACTIONS(212),
        [anon_sym_EQ] = ACTIONS(212),
        [anon_sym_GT] = ACTIONS(212),
        [anon_sym_QMARK] = ACTIONS(212),
        [anon_sym_AT] = ACTIONS(212),
        [anon_sym_BSLASH] = ACTIONS(212),
        [anon_sym_CARET] = ACTIONS(212),
        [anon_sym__] = ACTIONS(212),
        [anon_sym_BQUOTE] = ACTIONS(212),
        [anon_sym_PIPE] = ACTIONS(212),
        [anon_sym_TILDE] = ACTIONS(212),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(212),
        [anon_sym_anchor] = ACTIONS(212),
        [sym_email] = ACTIONS(212),
        [anon_sym_http] = ACTIONS(212),
        [anon_sym_https] = ACTIONS(212),
        [anon_sym_file] = ACTIONS(212),
        [anon_sym_ftp] = ACTIONS(212),
        [anon_sym_irc] = ACTIONS(212),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(212),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(212),
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
    [30] = {
        [ts_builtin_sym_end] = ACTIONS(140),
        [anon_sym_kbd] = ACTIONS(142),
        [anon_sym_btn] = ACTIONS(142),
        [anon_sym_image] = ACTIONS(142),
        [anon_sym_icon] = ACTIONS(142),
        [anon_sym_pass] = ACTIONS(142),
        [anon_sym_link] = ACTIONS(142),
        [anon_sym_mailto] = ACTIONS(142),
        [anon_sym_menu] = ACTIONS(142),
        [anon_sym_latexmath] = ACTIONS(142),
        [anon_sym_asciimath] = ACTIONS(142),
        [anon_sym_footnote] = ACTIONS(142),
        [anon_sym_footnoteref] = ACTIONS(142),
        [anon_sym_LBRACK] = ACTIONS(142),
        [anon_sym_RBRACK] = ACTIONS(142),
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
        [anon_sym_COLON2] = ACTIONS(142),
        [anon_sym_SEMI] = ACTIONS(142),
        [anon_sym_LT] = ACTIONS(142),
        [anon_sym_EQ] = ACTIONS(142),
        [anon_sym_GT] = ACTIONS(142),
        [anon_sym_QMARK] = ACTIONS(142),
        [anon_sym_AT] = ACTIONS(142),
        [anon_sym_BSLASH] = ACTIONS(142),
        [anon_sym_CARET] = ACTIONS(142),
        [anon_sym__] = ACTIONS(142),
        [anon_sym_BQUOTE] = ACTIONS(142),
        [anon_sym_PIPE] = ACTIONS(142),
        [anon_sym_TILDE] = ACTIONS(142),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(142),
        [anon_sym_anchor] = ACTIONS(142),
        [sym_email] = ACTIONS(142),
        [anon_sym_http] = ACTIONS(142),
        [anon_sym_https] = ACTIONS(142),
        [anon_sym_file] = ACTIONS(142),
        [anon_sym_ftp] = ACTIONS(142),
        [anon_sym_irc] = ACTIONS(142),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(142),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(142),
        [anon_sym_LT_LT] = ACTIONS(142),
        [anon_sym_xref] = ACTIONS(142),
        [anon_sym_STAR2] = ACTIONS(142),
        [anon_sym_STAR_STAR] = ACTIONS(142),
        [anon_sym__2] = ACTIONS(142),
        [anon_sym___] = ACTIONS(142),
        [anon_sym_BQUOTE2] = ACTIONS(142),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(142),
        [anon_sym_POUND2] = ACTIONS(142),
        [anon_sym_POUND_POUND] = ACTIONS(142),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(214),
        [anon_sym_kbd] = ACTIONS(216),
        [anon_sym_btn] = ACTIONS(216),
        [anon_sym_image] = ACTIONS(216),
        [anon_sym_icon] = ACTIONS(216),
        [anon_sym_pass] = ACTIONS(216),
        [anon_sym_link] = ACTIONS(216),
        [anon_sym_mailto] = ACTIONS(216),
        [anon_sym_menu] = ACTIONS(216),
        [anon_sym_latexmath] = ACTIONS(216),
        [anon_sym_asciimath] = ACTIONS(216),
        [anon_sym_footnote] = ACTIONS(216),
        [anon_sym_footnoteref] = ACTIONS(216),
        [anon_sym_LBRACK] = ACTIONS(216),
        [anon_sym_RBRACK] = ACTIONS(216),
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
        [anon_sym_COLON2] = ACTIONS(216),
        [anon_sym_SEMI] = ACTIONS(216),
        [anon_sym_LT] = ACTIONS(216),
        [anon_sym_EQ] = ACTIONS(216),
        [anon_sym_GT] = ACTIONS(216),
        [anon_sym_QMARK] = ACTIONS(216),
        [anon_sym_AT] = ACTIONS(216),
        [anon_sym_BSLASH] = ACTIONS(216),
        [anon_sym_CARET] = ACTIONS(216),
        [anon_sym__] = ACTIONS(216),
        [anon_sym_BQUOTE] = ACTIONS(216),
        [anon_sym_PIPE] = ACTIONS(216),
        [anon_sym_TILDE] = ACTIONS(216),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(216),
        [anon_sym_anchor] = ACTIONS(216),
        [sym_email] = ACTIONS(216),
        [anon_sym_http] = ACTIONS(216),
        [anon_sym_https] = ACTIONS(216),
        [anon_sym_file] = ACTIONS(216),
        [anon_sym_ftp] = ACTIONS(216),
        [anon_sym_irc] = ACTIONS(216),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(216),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(216),
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
    [32] = {
        [ts_builtin_sym_end] = ACTIONS(218),
        [anon_sym_kbd] = ACTIONS(220),
        [anon_sym_btn] = ACTIONS(220),
        [anon_sym_image] = ACTIONS(220),
        [anon_sym_icon] = ACTIONS(220),
        [anon_sym_pass] = ACTIONS(220),
        [anon_sym_link] = ACTIONS(220),
        [anon_sym_mailto] = ACTIONS(220),
        [anon_sym_menu] = ACTIONS(220),
        [anon_sym_latexmath] = ACTIONS(220),
        [anon_sym_asciimath] = ACTIONS(220),
        [anon_sym_footnote] = ACTIONS(220),
        [anon_sym_footnoteref] = ACTIONS(220),
        [anon_sym_LBRACK] = ACTIONS(220),
        [anon_sym_RBRACK] = ACTIONS(220),
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
        [anon_sym_COLON2] = ACTIONS(220),
        [anon_sym_SEMI] = ACTIONS(220),
        [anon_sym_LT] = ACTIONS(220),
        [anon_sym_EQ] = ACTIONS(220),
        [anon_sym_GT] = ACTIONS(220),
        [anon_sym_QMARK] = ACTIONS(220),
        [anon_sym_AT] = ACTIONS(220),
        [anon_sym_BSLASH] = ACTIONS(220),
        [anon_sym_CARET] = ACTIONS(220),
        [anon_sym__] = ACTIONS(220),
        [anon_sym_BQUOTE] = ACTIONS(220),
        [anon_sym_PIPE] = ACTIONS(220),
        [anon_sym_TILDE] = ACTIONS(220),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(220),
        [anon_sym_anchor] = ACTIONS(220),
        [sym_email] = ACTIONS(220),
        [anon_sym_http] = ACTIONS(220),
        [anon_sym_https] = ACTIONS(220),
        [anon_sym_file] = ACTIONS(220),
        [anon_sym_ftp] = ACTIONS(220),
        [anon_sym_irc] = ACTIONS(220),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(220),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(220),
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
    [33] = {
        [ts_builtin_sym_end] = ACTIONS(222),
        [anon_sym_kbd] = ACTIONS(224),
        [anon_sym_btn] = ACTIONS(224),
        [anon_sym_image] = ACTIONS(224),
        [anon_sym_icon] = ACTIONS(224),
        [anon_sym_pass] = ACTIONS(224),
        [anon_sym_link] = ACTIONS(224),
        [anon_sym_mailto] = ACTIONS(224),
        [anon_sym_menu] = ACTIONS(224),
        [anon_sym_latexmath] = ACTIONS(224),
        [anon_sym_asciimath] = ACTIONS(224),
        [anon_sym_footnote] = ACTIONS(224),
        [anon_sym_footnoteref] = ACTIONS(224),
        [anon_sym_LBRACK] = ACTIONS(224),
        [anon_sym_RBRACK] = ACTIONS(224),
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
        [anon_sym_COLON2] = ACTIONS(224),
        [anon_sym_SEMI] = ACTIONS(224),
        [anon_sym_LT] = ACTIONS(224),
        [anon_sym_EQ] = ACTIONS(224),
        [anon_sym_GT] = ACTIONS(224),
        [anon_sym_QMARK] = ACTIONS(224),
        [anon_sym_AT] = ACTIONS(224),
        [anon_sym_BSLASH] = ACTIONS(224),
        [anon_sym_CARET] = ACTIONS(224),
        [anon_sym__] = ACTIONS(224),
        [anon_sym_BQUOTE] = ACTIONS(224),
        [anon_sym_PIPE] = ACTIONS(224),
        [anon_sym_TILDE] = ACTIONS(224),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(224),
        [anon_sym_anchor] = ACTIONS(224),
        [sym_email] = ACTIONS(224),
        [anon_sym_http] = ACTIONS(224),
        [anon_sym_https] = ACTIONS(224),
        [anon_sym_file] = ACTIONS(224),
        [anon_sym_ftp] = ACTIONS(224),
        [anon_sym_irc] = ACTIONS(224),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(224),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(224),
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
    [34] = {
        [ts_builtin_sym_end] = ACTIONS(226),
        [anon_sym_kbd] = ACTIONS(228),
        [anon_sym_btn] = ACTIONS(228),
        [anon_sym_image] = ACTIONS(228),
        [anon_sym_icon] = ACTIONS(228),
        [anon_sym_pass] = ACTIONS(228),
        [anon_sym_link] = ACTIONS(228),
        [anon_sym_mailto] = ACTIONS(228),
        [anon_sym_menu] = ACTIONS(228),
        [anon_sym_latexmath] = ACTIONS(228),
        [anon_sym_asciimath] = ACTIONS(228),
        [anon_sym_footnote] = ACTIONS(228),
        [anon_sym_footnoteref] = ACTIONS(228),
        [anon_sym_LBRACK] = ACTIONS(228),
        [anon_sym_RBRACK] = ACTIONS(228),
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
        [anon_sym_COLON2] = ACTIONS(228),
        [anon_sym_SEMI] = ACTIONS(228),
        [anon_sym_LT] = ACTIONS(228),
        [anon_sym_EQ] = ACTIONS(228),
        [anon_sym_GT] = ACTIONS(228),
        [anon_sym_QMARK] = ACTIONS(228),
        [anon_sym_AT] = ACTIONS(228),
        [anon_sym_BSLASH] = ACTIONS(228),
        [anon_sym_CARET] = ACTIONS(228),
        [anon_sym__] = ACTIONS(228),
        [anon_sym_BQUOTE] = ACTIONS(228),
        [anon_sym_PIPE] = ACTIONS(228),
        [anon_sym_TILDE] = ACTIONS(228),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(228),
        [anon_sym_anchor] = ACTIONS(228),
        [sym_email] = ACTIONS(228),
        [anon_sym_http] = ACTIONS(228),
        [anon_sym_https] = ACTIONS(228),
        [anon_sym_file] = ACTIONS(228),
        [anon_sym_ftp] = ACTIONS(228),
        [anon_sym_irc] = ACTIONS(228),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(228),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(228),
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
    [35] = {
        [ts_builtin_sym_end] = ACTIONS(230),
        [anon_sym_kbd] = ACTIONS(232),
        [anon_sym_btn] = ACTIONS(232),
        [anon_sym_image] = ACTIONS(232),
        [anon_sym_icon] = ACTIONS(232),
        [anon_sym_pass] = ACTIONS(232),
        [anon_sym_link] = ACTIONS(232),
        [anon_sym_mailto] = ACTIONS(232),
        [anon_sym_menu] = ACTIONS(232),
        [anon_sym_latexmath] = ACTIONS(232),
        [anon_sym_asciimath] = ACTIONS(232),
        [anon_sym_footnote] = ACTIONS(232),
        [anon_sym_footnoteref] = ACTIONS(232),
        [anon_sym_LBRACK] = ACTIONS(232),
        [anon_sym_RBRACK] = ACTIONS(232),
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
        [anon_sym_COLON2] = ACTIONS(232),
        [anon_sym_SEMI] = ACTIONS(232),
        [anon_sym_LT] = ACTIONS(232),
        [anon_sym_EQ] = ACTIONS(232),
        [anon_sym_GT] = ACTIONS(232),
        [anon_sym_QMARK] = ACTIONS(232),
        [anon_sym_AT] = ACTIONS(232),
        [anon_sym_BSLASH] = ACTIONS(232),
        [anon_sym_CARET] = ACTIONS(232),
        [anon_sym__] = ACTIONS(232),
        [anon_sym_BQUOTE] = ACTIONS(232),
        [anon_sym_PIPE] = ACTIONS(232),
        [anon_sym_TILDE] = ACTIONS(232),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(232),
        [anon_sym_anchor] = ACTIONS(232),
        [sym_email] = ACTIONS(232),
        [anon_sym_http] = ACTIONS(232),
        [anon_sym_https] = ACTIONS(232),
        [anon_sym_file] = ACTIONS(232),
        [anon_sym_ftp] = ACTIONS(232),
        [anon_sym_irc] = ACTIONS(232),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(232),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(232),
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
    [36] = {
        [ts_builtin_sym_end] = ACTIONS(234),
        [anon_sym_kbd] = ACTIONS(236),
        [anon_sym_btn] = ACTIONS(236),
        [anon_sym_image] = ACTIONS(236),
        [anon_sym_icon] = ACTIONS(236),
        [anon_sym_pass] = ACTIONS(236),
        [anon_sym_link] = ACTIONS(236),
        [anon_sym_mailto] = ACTIONS(236),
        [anon_sym_menu] = ACTIONS(236),
        [anon_sym_latexmath] = ACTIONS(236),
        [anon_sym_asciimath] = ACTIONS(236),
        [anon_sym_footnote] = ACTIONS(236),
        [anon_sym_footnoteref] = ACTIONS(236),
        [anon_sym_LBRACK] = ACTIONS(236),
        [anon_sym_RBRACK] = ACTIONS(236),
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
        [anon_sym_COLON2] = ACTIONS(236),
        [anon_sym_SEMI] = ACTIONS(236),
        [anon_sym_LT] = ACTIONS(236),
        [anon_sym_EQ] = ACTIONS(236),
        [anon_sym_GT] = ACTIONS(236),
        [anon_sym_QMARK] = ACTIONS(236),
        [anon_sym_AT] = ACTIONS(236),
        [anon_sym_BSLASH] = ACTIONS(236),
        [anon_sym_CARET] = ACTIONS(236),
        [anon_sym__] = ACTIONS(236),
        [anon_sym_BQUOTE] = ACTIONS(236),
        [anon_sym_PIPE] = ACTIONS(236),
        [anon_sym_TILDE] = ACTIONS(236),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(236),
        [anon_sym_anchor] = ACTIONS(236),
        [sym_email] = ACTIONS(236),
        [anon_sym_http] = ACTIONS(236),
        [anon_sym_https] = ACTIONS(236),
        [anon_sym_file] = ACTIONS(236),
        [anon_sym_ftp] = ACTIONS(236),
        [anon_sym_irc] = ACTIONS(236),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(236),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(236),
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
    [37] = {
        [ts_builtin_sym_end] = ACTIONS(238),
        [anon_sym_kbd] = ACTIONS(240),
        [anon_sym_btn] = ACTIONS(240),
        [anon_sym_image] = ACTIONS(240),
        [anon_sym_icon] = ACTIONS(240),
        [anon_sym_pass] = ACTIONS(240),
        [anon_sym_link] = ACTIONS(240),
        [anon_sym_mailto] = ACTIONS(240),
        [anon_sym_menu] = ACTIONS(240),
        [anon_sym_latexmath] = ACTIONS(240),
        [anon_sym_asciimath] = ACTIONS(240),
        [anon_sym_footnote] = ACTIONS(240),
        [anon_sym_footnoteref] = ACTIONS(240),
        [anon_sym_LBRACK] = ACTIONS(240),
        [anon_sym_RBRACK] = ACTIONS(240),
        [anon_sym_LBRACE] = ACTIONS(240),
        [anon_sym_RBRACE] = ACTIONS(240),
        [sym__word_no_digit] = ACTIONS(240),
        [sym__digits] = ACTIONS(240),
        [anon_sym_BANG] = ACTIONS(240),
        [anon_sym_DQUOTE] = ACTIONS(240),
        [anon_sym_POUND] = ACTIONS(240),
        [anon_sym_DOLLAR] = ACTIONS(240),
        [anon_sym_PERCENT] = ACTIONS(240),
        [anon_sym_AMP] = ACTIONS(240),
        [anon_sym_SQUOTE] = ACTIONS(240),
        [anon_sym_LPAREN] = ACTIONS(240),
        [anon_sym_RPAREN] = ACTIONS(240),
        [anon_sym_STAR] = ACTIONS(240),
        [anon_sym_PLUS] = ACTIONS(240),
        [anon_sym_COMMA] = ACTIONS(240),
        [anon_sym_DASH] = ACTIONS(240),
        [anon_sym_DOT] = ACTIONS(240),
        [anon_sym_SLASH] = ACTIONS(240),
        [anon_sym_COLON2] = ACTIONS(240),
        [anon_sym_SEMI] = ACTIONS(240),
        [anon_sym_LT] = ACTIONS(240),
        [anon_sym_EQ] = ACTIONS(240),
        [anon_sym_GT] = ACTIONS(240),
        [anon_sym_QMARK] = ACTIONS(240),
        [anon_sym_AT] = ACTIONS(240),
        [anon_sym_BSLASH] = ACTIONS(240),
        [anon_sym_CARET] = ACTIONS(240),
        [anon_sym__] = ACTIONS(240),
        [anon_sym_BQUOTE] = ACTIONS(240),
        [anon_sym_PIPE] = ACTIONS(240),
        [anon_sym_TILDE] = ACTIONS(240),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(240),
        [anon_sym_anchor] = ACTIONS(240),
        [sym_email] = ACTIONS(240),
        [anon_sym_http] = ACTIONS(240),
        [anon_sym_https] = ACTIONS(240),
        [anon_sym_file] = ACTIONS(240),
        [anon_sym_ftp] = ACTIONS(240),
        [anon_sym_irc] = ACTIONS(240),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(240),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(240),
        [anon_sym_LT_LT] = ACTIONS(240),
        [anon_sym_xref] = ACTIONS(240),
        [anon_sym_STAR2] = ACTIONS(240),
        [anon_sym_STAR_STAR] = ACTIONS(240),
        [anon_sym__2] = ACTIONS(240),
        [anon_sym___] = ACTIONS(240),
        [anon_sym_BQUOTE2] = ACTIONS(240),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(240),
        [anon_sym_POUND2] = ACTIONS(240),
        [anon_sym_POUND_POUND] = ACTIONS(240),
    },
    [38] = {
        [ts_builtin_sym_end] = ACTIONS(242),
        [anon_sym_kbd] = ACTIONS(244),
        [anon_sym_btn] = ACTIONS(244),
        [anon_sym_image] = ACTIONS(244),
        [anon_sym_icon] = ACTIONS(244),
        [anon_sym_pass] = ACTIONS(244),
        [anon_sym_link] = ACTIONS(244),
        [anon_sym_mailto] = ACTIONS(244),
        [anon_sym_menu] = ACTIONS(244),
        [anon_sym_latexmath] = ACTIONS(244),
        [anon_sym_asciimath] = ACTIONS(244),
        [anon_sym_footnote] = ACTIONS(244),
        [anon_sym_footnoteref] = ACTIONS(244),
        [anon_sym_LBRACK] = ACTIONS(244),
        [anon_sym_RBRACK] = ACTIONS(244),
        [anon_sym_LBRACE] = ACTIONS(244),
        [anon_sym_RBRACE] = ACTIONS(244),
        [sym__word_no_digit] = ACTIONS(244),
        [sym__digits] = ACTIONS(244),
        [anon_sym_BANG] = ACTIONS(244),
        [anon_sym_DQUOTE] = ACTIONS(244),
        [anon_sym_POUND] = ACTIONS(244),
        [anon_sym_DOLLAR] = ACTIONS(244),
        [anon_sym_PERCENT] = ACTIONS(244),
        [anon_sym_AMP] = ACTIONS(244),
        [anon_sym_SQUOTE] = ACTIONS(244),
        [anon_sym_LPAREN] = ACTIONS(244),
        [anon_sym_RPAREN] = ACTIONS(244),
        [anon_sym_STAR] = ACTIONS(244),
        [anon_sym_PLUS] = ACTIONS(244),
        [anon_sym_COMMA] = ACTIONS(244),
        [anon_sym_DASH] = ACTIONS(244),
        [anon_sym_DOT] = ACTIONS(244),
        [anon_sym_SLASH] = ACTIONS(244),
        [anon_sym_COLON2] = ACTIONS(244),
        [anon_sym_SEMI] = ACTIONS(244),
        [anon_sym_LT] = ACTIONS(244),
        [anon_sym_EQ] = ACTIONS(244),
        [anon_sym_GT] = ACTIONS(244),
        [anon_sym_QMARK] = ACTIONS(244),
        [anon_sym_AT] = ACTIONS(244),
        [anon_sym_BSLASH] = ACTIONS(244),
        [anon_sym_CARET] = ACTIONS(244),
        [anon_sym__] = ACTIONS(244),
        [anon_sym_BQUOTE] = ACTIONS(244),
        [anon_sym_PIPE] = ACTIONS(244),
        [anon_sym_TILDE] = ACTIONS(244),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(244),
        [anon_sym_anchor] = ACTIONS(244),
        [sym_email] = ACTIONS(244),
        [anon_sym_http] = ACTIONS(244),
        [anon_sym_https] = ACTIONS(244),
        [anon_sym_file] = ACTIONS(244),
        [anon_sym_ftp] = ACTIONS(244),
        [anon_sym_irc] = ACTIONS(244),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(244),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(244),
        [anon_sym_LT_LT] = ACTIONS(244),
        [anon_sym_xref] = ACTIONS(244),
        [anon_sym_STAR2] = ACTIONS(244),
        [anon_sym_STAR_STAR] = ACTIONS(244),
        [anon_sym__2] = ACTIONS(244),
        [anon_sym___] = ACTIONS(244),
        [anon_sym_BQUOTE2] = ACTIONS(244),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(244),
        [anon_sym_POUND2] = ACTIONS(244),
        [anon_sym_POUND_POUND] = ACTIONS(244),
    },
    [39] = {
        [ts_builtin_sym_end] = ACTIONS(246),
        [anon_sym_kbd] = ACTIONS(248),
        [anon_sym_btn] = ACTIONS(248),
        [anon_sym_image] = ACTIONS(248),
        [anon_sym_icon] = ACTIONS(248),
        [anon_sym_pass] = ACTIONS(248),
        [anon_sym_link] = ACTIONS(248),
        [anon_sym_mailto] = ACTIONS(248),
        [anon_sym_menu] = ACTIONS(248),
        [anon_sym_latexmath] = ACTIONS(248),
        [anon_sym_asciimath] = ACTIONS(248),
        [anon_sym_footnote] = ACTIONS(248),
        [anon_sym_footnoteref] = ACTIONS(248),
        [anon_sym_LBRACK] = ACTIONS(248),
        [anon_sym_RBRACK] = ACTIONS(248),
        [anon_sym_LBRACE] = ACTIONS(248),
        [anon_sym_RBRACE] = ACTIONS(248),
        [sym__word_no_digit] = ACTIONS(248),
        [sym__digits] = ACTIONS(248),
        [anon_sym_BANG] = ACTIONS(248),
        [anon_sym_DQUOTE] = ACTIONS(248),
        [anon_sym_POUND] = ACTIONS(248),
        [anon_sym_DOLLAR] = ACTIONS(248),
        [anon_sym_PERCENT] = ACTIONS(248),
        [anon_sym_AMP] = ACTIONS(248),
        [anon_sym_SQUOTE] = ACTIONS(248),
        [anon_sym_LPAREN] = ACTIONS(248),
        [anon_sym_RPAREN] = ACTIONS(248),
        [anon_sym_STAR] = ACTIONS(248),
        [anon_sym_PLUS] = ACTIONS(248),
        [anon_sym_COMMA] = ACTIONS(248),
        [anon_sym_DASH] = ACTIONS(248),
        [anon_sym_DOT] = ACTIONS(248),
        [anon_sym_SLASH] = ACTIONS(248),
        [anon_sym_COLON2] = ACTIONS(248),
        [anon_sym_SEMI] = ACTIONS(248),
        [anon_sym_LT] = ACTIONS(248),
        [anon_sym_EQ] = ACTIONS(248),
        [anon_sym_GT] = ACTIONS(248),
        [anon_sym_QMARK] = ACTIONS(248),
        [anon_sym_AT] = ACTIONS(248),
        [anon_sym_BSLASH] = ACTIONS(248),
        [anon_sym_CARET] = ACTIONS(248),
        [anon_sym__] = ACTIONS(248),
        [anon_sym_BQUOTE] = ACTIONS(248),
        [anon_sym_PIPE] = ACTIONS(248),
        [anon_sym_TILDE] = ACTIONS(248),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(248),
        [anon_sym_anchor] = ACTIONS(248),
        [sym_email] = ACTIONS(248),
        [anon_sym_http] = ACTIONS(248),
        [anon_sym_https] = ACTIONS(248),
        [anon_sym_file] = ACTIONS(248),
        [anon_sym_ftp] = ACTIONS(248),
        [anon_sym_irc] = ACTIONS(248),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(248),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(248),
        [anon_sym_LT_LT] = ACTIONS(248),
        [anon_sym_xref] = ACTIONS(248),
        [anon_sym_STAR2] = ACTIONS(248),
        [anon_sym_STAR_STAR] = ACTIONS(248),
        [anon_sym__2] = ACTIONS(248),
        [anon_sym___] = ACTIONS(248),
        [anon_sym_BQUOTE2] = ACTIONS(248),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(248),
        [anon_sym_POUND2] = ACTIONS(248),
        [anon_sym_POUND_POUND] = ACTIONS(248),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 9,
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
    STATE(40),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [33] = 9,
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
    STATE(41),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [66] = 9,
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
    ACTIONS(296),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(40),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [98] = 9,
    ACTIONS(312),
    1,
    anon_sym_STAR2,
    ACTIONS(314),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(318),
    1,
    anon_sym___,
    ACTIONS(320),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(322),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(324),
    1,
    anon_sym_POUND2,
    ACTIONS(326),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(316),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(52),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [130] = 9,
    ACTIONS(312),
    1,
    anon_sym_STAR2,
    ACTIONS(314),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(320),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(322),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(324),
    1,
    anon_sym_POUND2,
    ACTIONS(326),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(330),
    1,
    anon_sym__3,
    ACTIONS(328),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(41),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [162] = 9,
    ACTIONS(312),
    1,
    anon_sym_STAR2,
    ACTIONS(314),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(320),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(322),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(324),
    1,
    anon_sym_POUND2,
    ACTIONS(326),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(332),
    1,
    anon_sym___,
    ACTIONS(328),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(41),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [194] = 9,
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
    STATE(40),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [226] = 9,
    ACTIONS(312),
    1,
    anon_sym_STAR2,
    ACTIONS(314),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(320),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(322),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(324),
    1,
    anon_sym_POUND2,
    ACTIONS(326),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(332),
    1,
    anon_sym__3,
    ACTIONS(328),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(41),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [258] = 9,
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
    ACTIONS(334),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(296),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(40),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [290] = 9,
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
    ACTIONS(334),
    1,
    anon_sym_STAR3,
    ACTIONS(296),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(40),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [322] = 9,
    ACTIONS(312),
    1,
    anon_sym_STAR2,
    ACTIONS(314),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(320),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(322),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(324),
    1,
    anon_sym_POUND2,
    ACTIONS(326),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(338),
    1,
    anon_sym___,
    ACTIONS(336),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(45),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [354] = 9,
    ACTIONS(312),
    1,
    anon_sym_STAR2,
    ACTIONS(314),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(320),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(322),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(324),
    1,
    anon_sym_POUND2,
    ACTIONS(326),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(338),
    1,
    anon_sym__3,
    ACTIONS(340),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(47),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [386] = 9,
    ACTIONS(312),
    1,
    anon_sym_STAR2,
    ACTIONS(314),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(320),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(322),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(324),
    1,
    anon_sym_POUND2,
    ACTIONS(326),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(330),
    1,
    anon_sym___,
    ACTIONS(328),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(41),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [418] = 9,
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
    STATE(48),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [450] = 9,
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
    ACTIONS(346),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(49),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [482] = 9,
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
    ACTIONS(350),
    1,
    anon_sym_STAR3,
    ACTIONS(348),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(42),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [514] = 9,
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
    ACTIONS(350),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(352),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(46),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [546] = 9,
    ACTIONS(312),
    1,
    anon_sym_STAR2,
    ACTIONS(314),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(318),
    1,
    anon_sym__3,
    ACTIONS(320),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(322),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(324),
    1,
    anon_sym_POUND2,
    ACTIONS(326),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(354),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(44),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [578] = 1,
    ACTIONS(154),
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
    ACTIONS(154),
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
    ACTIONS(244),
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
    ACTIONS(138),
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
    ACTIONS(212),
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
    ACTIONS(212),
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
    [656] = 1,
    ACTIONS(138),
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
    ACTIONS(150),
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
    ACTIONS(158),
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
    [695] = 1,
    ACTIONS(244),
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
    ACTIONS(248),
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
    ACTIONS(236),
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
    STATE(70),
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
    [747] = 4,
    ACTIONS(361),
    1,
    anon_sym_COMMA,
    ACTIONS(365),
    1,
    anon_sym_GT_GT,
    STATE(70),
    1,
    aux_sym_xref_repeat1,
    ACTIONS(363),
    3,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    [762] = 5,
    ACTIONS(367),
    1,
    aux_sym_inline_macro_token2,
    ACTIONS(369),
    1,
    anon_sym_RBRACK,
    ACTIONS(371),
    1,
    anon_sym_LBRACE,
    STATE(158),
    1,
    sym_link_label,
    STATE(77),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [779] = 5,
    ACTIONS(367),
    1,
    aux_sym_inline_macro_token2,
    ACTIONS(371),
    1,
    anon_sym_LBRACE,
    ACTIONS(373),
    1,
    anon_sym_RBRACK,
    STATE(154),
    1,
    sym_link_label,
    STATE(77),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [796] = 4,
    ACTIONS(375),
    1,
    aux_sym_inline_macro_token2,
    ACTIONS(378),
    1,
    anon_sym_RBRACK,
    ACTIONS(380),
    1,
    anon_sym_LBRACE,
    STATE(74),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [810] = 3,
    STATE(75),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(383),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    ACTIONS(386),
    2,
    anon_sym_BQUOTE3,
    anon_sym_BQUOTE_BQUOTE,
    [822] = 3,
    STATE(76),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(388),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    ACTIONS(391),
    2,
    anon_sym_POUND3,
    anon_sym_POUND_POUND,
    [834] = 4,
    ACTIONS(371),
    1,
    anon_sym_LBRACE,
    ACTIONS(393),
    1,
    aux_sym_inline_macro_token2,
    ACTIONS(395),
    1,
    anon_sym_RBRACK,
    STATE(74),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [848] = 1,
    ACTIONS(397),
    5,
    anon_sym_COMMA,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    anon_sym_GT_GT,
    [856] = 3,
    ACTIONS(401),
    1,
    anon_sym_RBRACK,
    STATE(97),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(399),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [867] = 3,
    ACTIONS(405),
    1,
    anon_sym_LBRACK,
    STATE(82),
    1,
    aux_sym_inline_macro_repeat1,
    ACTIONS(403),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [878] = 3,
    ACTIONS(407),
    1,
    anon_sym_RBRACK,
    STATE(99),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(399),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [889] = 3,
    ACTIONS(412),
    1,
    anon_sym_LBRACK,
    STATE(82),
    1,
    aux_sym_inline_macro_repeat1,
    ACTIONS(409),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [900] = 3,
    ACTIONS(416),
    1,
    anon_sym_POUND_POUND,
    STATE(76),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(414),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [911] = 3,
    ACTIONS(416),
    1,
    anon_sym_POUND3,
    STATE(76),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(414),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [922] = 3,
    ACTIONS(420),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(75),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(418),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [933] = 3,
    ACTIONS(420),
    1,
    anon_sym_BQUOTE3,
    STATE(75),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(418),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [944] = 3,
    ACTIONS(424),
    1,
    anon_sym_POUND_POUND,
    STATE(83),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(422),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [955] = 2,
    STATE(71),
    1,
    aux_sym_xref_repeat1,
    ACTIONS(363),
    3,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    [964] = 3,
    ACTIONS(428),
    1,
    anon_sym_BQUOTE3,
    STATE(112),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(426),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [975] = 3,
    ACTIONS(432),
    1,
    anon_sym_GT_GT,
    STATE(107),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(430),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [986] = 3,
    ACTIONS(424),
    1,
    anon_sym_POUND3,
    STATE(84),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(434),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [997] = 3,
    ACTIONS(436),
    1,
    anon_sym_RBRACK,
    STATE(97),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(399),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [1008] = 3,
    ACTIONS(438),
    1,
    anon_sym_RBRACK,
    STATE(110),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(399),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [1019] = 3,
    ACTIONS(442),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(85),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(440),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1030] = 3,
    ACTIONS(444),
    1,
    anon_sym_LBRACK,
    STATE(82),
    1,
    aux_sym_inline_macro_repeat1,
    ACTIONS(403),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1041] = 3,
    ACTIONS(446),
    1,
    anon_sym_RBRACK,
    STATE(92),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(399),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [1052] = 3,
    ACTIONS(451),
    1,
    anon_sym_RBRACK,
    STATE(97),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(448),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [1063] = 3,
    ACTIONS(428),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(111),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(453),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1074] = 3,
    ACTIONS(455),
    1,
    anon_sym_RBRACK,
    STATE(97),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(399),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [1085] = 3,
    ACTIONS(442),
    1,
    anon_sym_BQUOTE3,
    STATE(86),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(457),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1096] = 3,
    ACTIONS(459),
    1,
    anon_sym_POUND_POUND,
    STATE(76),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(414),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1107] = 3,
    ACTIONS(459),
    1,
    anon_sym_POUND3,
    STATE(76),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(414),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1118] = 3,
    ACTIONS(461),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(75),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(418),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1129] = 3,
    ACTIONS(465),
    1,
    anon_sym_BQUOTE3,
    STATE(114),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(463),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1140] = 3,
    ACTIONS(467),
    1,
    anon_sym_RBRACK,
    STATE(79),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(399),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [1151] = 3,
    ACTIONS(471),
    1,
    anon_sym_POUND3,
    STATE(109),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(469),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1162] = 3,
    ACTIONS(476),
    1,
    anon_sym_GT_GT,
    STATE(107),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(473),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [1173] = 3,
    ACTIONS(478),
    1,
    anon_sym_POUND_POUND,
    STATE(76),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(414),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1184] = 3,
    ACTIONS(478),
    1,
    anon_sym_POUND3,
    STATE(76),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(414),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1195] = 3,
    ACTIONS(480),
    1,
    anon_sym_RBRACK,
    STATE(97),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(399),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [1206] = 3,
    ACTIONS(482),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(75),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(418),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1217] = 3,
    ACTIONS(482),
    1,
    anon_sym_BQUOTE3,
    STATE(75),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(418),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1228] = 3,
    ACTIONS(484),
    1,
    anon_sym_LBRACK,
    STATE(95),
    1,
    aux_sym_inline_macro_repeat1,
    ACTIONS(403),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1239] = 3,
    ACTIONS(461),
    1,
    anon_sym_BQUOTE3,
    STATE(75),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(418),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1250] = 3,
    ACTIONS(488),
    1,
    anon_sym_POUND_POUND,
    STATE(101),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(486),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1261] = 3,
    ACTIONS(488),
    1,
    anon_sym_POUND3,
    STATE(102),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(490),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1272] = 3,
    ACTIONS(465),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(103),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(492),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1283] = 3,
    ACTIONS(471),
    1,
    anon_sym_POUND_POUND,
    STATE(108),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(494),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1294] = 3,
    ACTIONS(496),
    1,
    anon_sym_DOT,
    STATE(119),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(129),
    2,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    [1305] = 3,
    ACTIONS(499),
    1,
    anon_sym_DOT,
    STATE(121),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(109),
    2,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    [1316] = 3,
    ACTIONS(499),
    1,
    anon_sym_DOT,
    STATE(119),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(115),
    2,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    [1327] = 3,
    ACTIONS(501),
    1,
    anon_sym_LBRACK,
    STATE(80),
    1,
    aux_sym_inline_macro_repeat1,
    ACTIONS(403),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1338] = 1,
    ACTIONS(129),
    3,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    anon_sym_DOT,
    [1344] = 1,
    ACTIONS(204),
    3,
    aux_sym_inline_macro_token2,
    anon_sym_RBRACK,
    anon_sym_LBRACE,
    [1350] = 1,
    ACTIONS(503),
    3,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    anon_sym_LBRACK,
    [1356] = 2,
    STATE(90),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(430),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [1364] = 1,
    ACTIONS(505),
    3,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    anon_sym_GT_GT,
    [1370] = 1,
    ACTIONS(507),
    3,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    [1376] = 2,
    ACTIONS(509),
    1,
    anon_sym_LBRACK,
    ACTIONS(511),
    1,
    anon_sym_DQUOTE,
    [1383] = 2,
    ACTIONS(513),
    1,
    anon_sym_COMMA,
    ACTIONS(515),
    1,
    anon_sym_RBRACK_RBRACK,
    [1390] = 1,
    ACTIONS(517),
    1,
    anon_sym_LBRACK,
    [1394] = 1,
    ACTIONS(519),
    1,
    anon_sym_PLUS,
    [1398] = 1,
    ACTIONS(521),
    1,
    anon_sym_COLON2,
    [1402] = 1,
    ACTIONS(523),
    1,
    anon_sym_RBRACE,
    [1406] = 1,
    ACTIONS(525),
    1,
    aux_sym_anchor_token1,
    [1410] = 1,
    ACTIONS(527),
    1,
    ts_builtin_sym_end,
    [1414] = 1,
    ACTIONS(529),
    1,
    anon_sym_DQUOTE,
    [1418] = 1,
    ACTIONS(531),
    1,
    aux_sym_anchor_token1,
    [1422] = 1,
    ACTIONS(533),
    1,
    sym__link_component,
    [1426] = 1,
    ACTIONS(535),
    1,
    anon_sym_RBRACE,
    [1430] = 1,
    ACTIONS(537),
    1,
    sym__link_component,
    [1434] = 1,
    ACTIONS(539),
    1,
    aux_sym_anchor_token1,
    [1438] = 1,
    ACTIONS(541),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [1442] = 1,
    ACTIONS(543),
    1,
    anon_sym_COLON2,
    [1446] = 1,
    ACTIONS(545),
    1,
    aux_sym_anchor_token1,
    [1450] = 1,
    ACTIONS(519),
    1,
    anon_sym_PLUS_PLUS_PLUS,
    [1454] = 1,
    ACTIONS(519),
    1,
    anon_sym_DOLLAR_DOLLAR,
    [1458] = 1,
    ACTIONS(547),
    1,
    anon_sym_RBRACK,
    [1462] = 1,
    ACTIONS(549),
    1,
    aux_sym_anchor_token2,
    [1466] = 1,
    ACTIONS(551),
    1,
    sym__link_component,
    [1470] = 1,
    ACTIONS(553),
    1,
    anon_sym_DQUOTE,
    [1474] = 1,
    ACTIONS(555),
    1,
    aux_sym_replacement_token1,
    [1478] = 1,
    ACTIONS(557),
    1,
    anon_sym_COLON,
    [1482] = 1,
    ACTIONS(559),
    1,
    anon_sym_RBRACK,
    [1486] = 1,
    ACTIONS(561),
    1,
    sym__link_component,
    [1490] = 1,
    ACTIONS(563),
    1,
    aux_sym_anchor_token3,
    [1494] = 1,
    ACTIONS(565),
    1,
    anon_sym_RBRACK_RBRACK,
    [1498] = 1,
    ACTIONS(567),
    1,
    anon_sym_RBRACK,
    [1502] = 1,
    ACTIONS(569),
    1,
    anon_sym_COLON_SLASH_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(40)] = 0,
    [SMALL_STATE(41)] = 33,
    [SMALL_STATE(42)] = 66,
    [SMALL_STATE(43)] = 98,
    [SMALL_STATE(44)] = 130,
    [SMALL_STATE(45)] = 162,
    [SMALL_STATE(46)] = 194,
    [SMALL_STATE(47)] = 226,
    [SMALL_STATE(48)] = 258,
    [SMALL_STATE(49)] = 290,
    [SMALL_STATE(50)] = 322,
    [SMALL_STATE(51)] = 354,
    [SMALL_STATE(52)] = 386,
    [SMALL_STATE(53)] = 418,
    [SMALL_STATE(54)] = 450,
    [SMALL_STATE(55)] = 482,
    [SMALL_STATE(56)] = 514,
    [SMALL_STATE(57)] = 546,
    [SMALL_STATE(58)] = 578,
    [SMALL_STATE(59)] = 591,
    [SMALL_STATE(60)] = 604,
    [SMALL_STATE(61)] = 617,
    [SMALL_STATE(62)] = 630,
    [SMALL_STATE(63)] = 643,
    [SMALL_STATE(64)] = 656,
    [SMALL_STATE(65)] = 669,
    [SMALL_STATE(66)] = 682,
    [SMALL_STATE(67)] = 695,
    [SMALL_STATE(68)] = 708,
    [SMALL_STATE(69)] = 721,
    [SMALL_STATE(70)] = 734,
    [SMALL_STATE(71)] = 747,
    [SMALL_STATE(72)] = 762,
    [SMALL_STATE(73)] = 779,
    [SMALL_STATE(74)] = 796,
    [SMALL_STATE(75)] = 810,
    [SMALL_STATE(76)] = 822,
    [SMALL_STATE(77)] = 834,
    [SMALL_STATE(78)] = 848,
    [SMALL_STATE(79)] = 856,
    [SMALL_STATE(80)] = 867,
    [SMALL_STATE(81)] = 878,
    [SMALL_STATE(82)] = 889,
    [SMALL_STATE(83)] = 900,
    [SMALL_STATE(84)] = 911,
    [SMALL_STATE(85)] = 922,
    [SMALL_STATE(86)] = 933,
    [SMALL_STATE(87)] = 944,
    [SMALL_STATE(88)] = 955,
    [SMALL_STATE(89)] = 964,
    [SMALL_STATE(90)] = 975,
    [SMALL_STATE(91)] = 986,
    [SMALL_STATE(92)] = 997,
    [SMALL_STATE(93)] = 1008,
    [SMALL_STATE(94)] = 1019,
    [SMALL_STATE(95)] = 1030,
    [SMALL_STATE(96)] = 1041,
    [SMALL_STATE(97)] = 1052,
    [SMALL_STATE(98)] = 1063,
    [SMALL_STATE(99)] = 1074,
    [SMALL_STATE(100)] = 1085,
    [SMALL_STATE(101)] = 1096,
    [SMALL_STATE(102)] = 1107,
    [SMALL_STATE(103)] = 1118,
    [SMALL_STATE(104)] = 1129,
    [SMALL_STATE(105)] = 1140,
    [SMALL_STATE(106)] = 1151,
    [SMALL_STATE(107)] = 1162,
    [SMALL_STATE(108)] = 1173,
    [SMALL_STATE(109)] = 1184,
    [SMALL_STATE(110)] = 1195,
    [SMALL_STATE(111)] = 1206,
    [SMALL_STATE(112)] = 1217,
    [SMALL_STATE(113)] = 1228,
    [SMALL_STATE(114)] = 1239,
    [SMALL_STATE(115)] = 1250,
    [SMALL_STATE(116)] = 1261,
    [SMALL_STATE(117)] = 1272,
    [SMALL_STATE(118)] = 1283,
    [SMALL_STATE(119)] = 1294,
    [SMALL_STATE(120)] = 1305,
    [SMALL_STATE(121)] = 1316,
    [SMALL_STATE(122)] = 1327,
    [SMALL_STATE(123)] = 1338,
    [SMALL_STATE(124)] = 1344,
    [SMALL_STATE(125)] = 1350,
    [SMALL_STATE(126)] = 1356,
    [SMALL_STATE(127)] = 1364,
    [SMALL_STATE(128)] = 1370,
    [SMALL_STATE(129)] = 1376,
    [SMALL_STATE(130)] = 1383,
    [SMALL_STATE(131)] = 1390,
    [SMALL_STATE(132)] = 1394,
    [SMALL_STATE(133)] = 1398,
    [SMALL_STATE(134)] = 1402,
    [SMALL_STATE(135)] = 1406,
    [SMALL_STATE(136)] = 1410,
    [SMALL_STATE(137)] = 1414,
    [SMALL_STATE(138)] = 1418,
    [SMALL_STATE(139)] = 1422,
    [SMALL_STATE(140)] = 1426,
    [SMALL_STATE(141)] = 1430,
    [SMALL_STATE(142)] = 1434,
    [SMALL_STATE(143)] = 1438,
    [SMALL_STATE(144)] = 1442,
    [SMALL_STATE(145)] = 1446,
    [SMALL_STATE(146)] = 1450,
    [SMALL_STATE(147)] = 1454,
    [SMALL_STATE(148)] = 1458,
    [SMALL_STATE(149)] = 1462,
    [SMALL_STATE(150)] = 1466,
    [SMALL_STATE(151)] = 1470,
    [SMALL_STATE(152)] = 1474,
    [SMALL_STATE(153)] = 1478,
    [SMALL_STATE(154)] = 1482,
    [SMALL_STATE(155)] = 1486,
    [SMALL_STATE(156)] = 1490,
    [SMALL_STATE(157)] = 1494,
    [SMALL_STATE(158)] = 1498,
    [SMALL_STATE(159)] = 1502,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(153),
    [5] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(3),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(6),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(7),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(8),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(145),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(144),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(143),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(142),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(135),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(88),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(133),
    [27] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(55),
    [29] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(56),
    [31] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(57),
    [33] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(43),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(89),
    [37] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(98),
    [39] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(106),
    [41] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(118),
    [43] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    [45] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(153),
    [48] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(2),
    [51] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(6),
    [54] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(7),
    [57] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(8),
    [60] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(145),
    [63] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(144),
    [66] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(143),
    [69] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(142),
    [72] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(135),
    [75] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(88),
    [78] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(133),
    [81] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(55),
    [84] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(56),
    [87] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(57),
    [90] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(43),
    [93] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(89),
    [96] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(98),
    [99] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(106),
    [102] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(118),
    [105] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [107] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(2),
    [109] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 3, 0, 0),
    [111] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 3, 0, 0),
    [113] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(155),
    [115] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 4, 0, 0),
    [117] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 4, 0, 0),
    [119] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__punctuation, 1, 0, 0),
    [121] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__punctuation, 1, 0, 0),
    [123] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(134),
    [125] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(159),
    [127] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(132),
    [129] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [131] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [133] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(155),
    [136] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 3, 0, 0),
    [138] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 3, 0, 0),
    [140] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [142] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [144] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 6, 0, 7),
    [146] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 6, 0, 7),
    [148] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [150] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [152] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 2, 0, 0),
    [154] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 2, 0, 0),
    [156] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [158] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [160] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [162] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [164] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 3, 0, 1),
    [166] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 3, 0, 1),
    [168] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 5, 0, 2),
    [170] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 5, 0, 2),
    [172] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 5, 0, 3),
    [174] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 5, 0, 3),
    [176] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 3, 0, 1),
    [178] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 3, 0, 1),
    [180] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 5, 0, 0),
    [182] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 5, 0, 0),
    [184] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [186] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [188] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(73),
    [190] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 4, 0, 0),
    [192] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 4, 0, 0),
    [194] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [196] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [198] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 5, 0, 6),
    [200] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 5, 0, 6),
    [202] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 0),
    [204] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 0),
    [206] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 5, 0, 1),
    [208] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 5, 0, 1),
    [210] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 3, 0, 0),
    [212] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 3, 0, 0),
    [214] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 6, 0, 8),
    [216] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 6, 0, 8),
    [218] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 6, 0, 6),
    [220] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 6, 0, 6),
    [222] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 5, 0, 4),
    [224] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 5, 0, 4),
    [226] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 5, 0, 5),
    [228] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 5, 0, 5),
    [230] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [232] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [234] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [236] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [238] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 4, 0, 0),
    [240] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 4, 0, 0),
    [242] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 2, 0, 0),
    [244] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 2, 0, 0),
    [246] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [248] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [250] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(40),
    [253] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    [255] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(51),
    [258] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(50),
    [261] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(104),
    [264] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(117),
    [267] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(116),
    [270] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(115),
    [273] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(54),
    [276] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(53),
    [279] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(41),
    [282] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    [284] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(100),
    [287] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(94),
    [290] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(91),
    [293] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(87),
    [296] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(40),
    [298] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(15),
    [300] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(51),
    [302] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(50),
    [304] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(104),
    [306] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(117),
    [308] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(116),
    [310] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(115),
    [312] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(54),
    [314] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(53),
    [316] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(52),
    [318] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(39),
    [320] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(100),
    [322] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(94),
    [324] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(91),
    [326] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(87),
    [328] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(41),
    [330] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(13),
    [332] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(65),
    [334] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(66),
    [336] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(45),
    [338] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(68),
    [340] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(47),
    [342] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(48),
    [344] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(69),
    [346] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(49),
    [348] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(42),
    [350] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(36),
    [352] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(46),
    [354] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(44),
    [356] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 2, 0, 0),
    [358] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 2, 0, 0),
    SHIFT_REPEAT(78),
    [361] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(126),
    [363] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(78),
    [365] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(17),
    [367] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(77),
    [369] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(137),
    [371] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(152),
    [373] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(30),
    [375] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    SHIFT_REPEAT(74),
    [378] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    [380] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    SHIFT_REPEAT(152),
    [383] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    SHIFT_REPEAT(75),
    [386] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    [388] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    SHIFT_REPEAT(76),
    [391] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    [393] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(74),
    [395] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_label, 1, 0, 0),
    [397] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 1, 0, 0),
    [399] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(128),
    [401] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(18),
    [403] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(125),
    [405] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(81),
    [407] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(19),
    [409] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(125),
    [412] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 2, 0, 0),
    [414] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(76),
    [416] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [418] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(75),
    [420] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(61),
    [422] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(83),
    [424] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(60),
    [426] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(112),
    [428] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(14),
    [430] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(127),
    [432] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(33),
    [434] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(84),
    [436] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(34),
    [438] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(25),
    [440] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(85),
    [442] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(59),
    [444] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(93),
    [446] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(37),
    [448] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(128),
    [451] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0),
    [453] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(111),
    [455] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(12),
    [457] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(86),
    [459] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(63),
    [461] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(64),
    [463] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(114),
    [465] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(58),
    [467] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(23),
    [469] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(109),
    [471] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(38),
    [473] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 2, 0, 0),
    SHIFT_REPEAT(127),
    [476] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 2, 0, 0),
    [478] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(29),
    [480] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(31),
    [482] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(10),
    [484] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(96),
    [486] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(101),
    [488] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(67),
    [490] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(102),
    [492] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(103),
    [494] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(108),
    [496] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(150),
    [499] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(150),
    [501] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(105),
    [503] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 1, 0, 0),
    [505] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 1, 0, 0),
    [507] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 1, 0, 0),
    [509] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [511] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [513] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(149),
    [515] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [517] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(156),
    [519] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [521] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(113),
    [523] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [525] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(147),
    [527] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [529] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [531] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(131),
    [533] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [535] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(124),
    [537] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(120),
    [539] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(146),
    [541] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(139),
    [543] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(138),
    [545] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(130),
    [547] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [549] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(157),
    [551] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(123),
    [553] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [555] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(140),
    [557] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(122),
    [559] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [561] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [563] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(148),
    [565] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [567] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(151),
    [569] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(141),
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
