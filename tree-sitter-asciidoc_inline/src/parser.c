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
#define STATE_COUNT 173
#define LARGE_STATE_COUNT 40
#define SYMBOL_COUNT 123
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
    aux_sym_xref_repeat3 = 118,
    aux_sym_emphasis_repeat1 = 119,
    aux_sym_ltalic_repeat1 = 120,
    aux_sym_monospace_repeat1 = 121,
    aux_sym_highlight_repeat1 = 122,
    alias_sym_attr = 123,
    alias_sym_id = 124,
    alias_sym_target = 125,
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
    [aux_sym_xref_repeat3] = "xref_repeat3",
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
    [aux_sym_xref_repeat3] = aux_sym_xref_repeat3,
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
    [aux_sym_xref_repeat3] = {
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
    aux_sym_xref_repeat3,
    2,
    aux_sym_xref_repeat3,
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
    [42] = 40,
    [43] = 43,
    [44] = 43,
    [45] = 41,
    [46] = 46,
    [47] = 46,
    [48] = 48,
    [49] = 33,
    [50] = 17,
    [51] = 51,
    [52] = 31,
    [53] = 37,
    [54] = 54,
    [55] = 55,
    [56] = 56,
    [57] = 56,
    [58] = 58,
    [59] = 59,
    [60] = 60,
    [61] = 61,
    [62] = 62,
    [63] = 63,
    [64] = 63,
    [65] = 62,
    [66] = 66,
    [67] = 61,
    [68] = 66,
    [69] = 60,
    [70] = 59,
    [71] = 58,
    [72] = 13,
    [73] = 13,
    [74] = 36,
    [75] = 11,
    [76] = 38,
    [77] = 15,
    [78] = 14,
    [79] = 10,
    [80] = 39,
    [81] = 11,
    [82] = 38,
    [83] = 10,
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
    [94] = 93,
    [95] = 95,
    [96] = 96,
    [97] = 97,
    [98] = 98,
    [99] = 99,
    [100] = 100,
    [101] = 101,
    [102] = 93,
    [103] = 103,
    [104] = 104,
    [105] = 105,
    [106] = 106,
    [107] = 107,
    [108] = 108,
    [109] = 97,
    [110] = 110,
    [111] = 98,
    [112] = 112,
    [113] = 113,
    [114] = 114,
    [115] = 100,
    [116] = 116,
    [117] = 117,
    [118] = 95,
    [119] = 107,
    [120] = 97,
    [121] = 103,
    [122] = 9,
    [123] = 98,
    [124] = 100,
    [125] = 125,
    [126] = 104,
    [127] = 105,
    [128] = 4,
    [129] = 107,
    [130] = 105,
    [131] = 104,
    [132] = 8,
    [133] = 103,
    [134] = 96,
    [135] = 135,
    [136] = 136,
    [137] = 137,
    [138] = 138,
    [139] = 22,
    [140] = 32,
    [141] = 141,
    [142] = 142,
    [143] = 143,
    [144] = 144,
    [145] = 145,
    [146] = 146,
    [147] = 147,
    [148] = 145,
    [149] = 149,
    [150] = 150,
    [151] = 151,
    [152] = 152,
    [153] = 147,
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
    [167] = 159,
    [168] = 168,
    [169] = 157,
    [170] = 170,
    [171] = 171,
    [172] = 161,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(115);
            ADVANCE_MAP(
                ' ', 2,
                '!', 433,
                '"', 436,
                '#', 438,
                '$', 440,
                '%', 442,
                '&', 444,
                '\'', 446,
                '(', 448,
                ')', 450,
                '*', 452,
                '+', 455,
                ',', 457,
                '-', 459,
                '.', 461,
                '/', 463,
                ':', 164,
                ';', 467,
                '<', 469,
                '=', 471,
                '>', 473,
                '?', 475,
                '@', 477,
                '[', 170,
                '\\', 479,
                ']', 186,
                '^', 481,
                '_', 483,
                '`', 489,
                'a', 338,
                'b', 355,
                'f', 329,
                'h', 358,
                'i', 314,
                'k', 311,
                'l', 308,
                'm', 305,
                'p', 306,
                'x', 351,
                '{', 189,
                '|', 491,
                '}', 302,
                '~', 493,
                0x0b, 303,
                '\f', 303,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(112);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(431);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0)
                ADVANCE(430);
            END_STATE();
        case 1:
            ADVANCE_MAP(
                ' ', 2,
                '!', 433,
                '"', 436,
                '#', 438,
                '$', 440,
                '%', 442,
                '&', 444,
                '\'', 446,
                '(', 448,
                ')', 450,
                '*', 452,
                '+', 455,
                ',', 457,
                '-', 459,
                '.', 461,
                '/', 463,
                ':', 465,
                ';', 467,
                '<', 469,
                '=', 471,
                '>', 473,
                '?', 475,
                '@', 477,
                '[', 170,
                '\\', 479,
                ']', 186,
                '^', 481,
                '_', 483,
                '`', 489,
                'a', 338,
                'b', 355,
                'f', 329,
                'h', 358,
                'i', 314,
                'k', 311,
                'l', 308,
                'm', 305,
                'p', 306,
                'x', 351,
                '{', 189,
                '|', 491,
                '}', 302,
                '~', 493,
                0x0b, 303,
                '\f', 303,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(1);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(431);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0)
                ADVANCE(430);
            END_STATE();
        case 2:
            ADVANCE_MAP(
                ' ', 2,
                '!', 433,
                '"', 436,
                '#', 588,
                '$', 440,
                '%', 442,
                '&', 444,
                '\'', 446,
                '(', 448,
                ')', 450,
                '*', 549,
                '+', 455,
                ',', 457,
                '-', 459,
                '.', 461,
                '/', 463,
                ':', 465,
                ';', 467,
                '<', 469,
                '=', 471,
                '>', 473,
                '?', 475,
                '@', 477,
                '[', 170,
                '\\', 479,
                ']', 186,
                '^', 481,
                '_', 562,
                '`', 579,
                'a', 338,
                'b', 355,
                'f', 329,
                'h', 358,
                'i', 314,
                'k', 311,
                'l', 308,
                'm', 305,
                'p', 306,
                'x', 351,
                '{', 189,
                '|', 491,
                '}', 302,
                '~', 493,
                0x0b, 303,
                '\f', 303,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(1);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(431);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0)
                ADVANCE(430);
            END_STATE();
        case 3:
            ADVANCE_MAP(
                ' ', 4,
                '!', 433,
                '"', 436,
                '#', 438,
                '$', 440,
                '%', 442,
                '&', 444,
                '\'', 446,
                '(', 448,
                ')', 450,
                '*', 452,
                '+', 455,
                ',', 457,
                '-', 459,
                '.', 461,
                '/', 463,
                ':', 465,
                ';', 467,
                '<', 469,
                '=', 471,
                '>', 473,
                '?', 475,
                '@', 477,
                '[', 170,
                '\\', 479,
                ']', 186,
                '^', 481,
                '_', 485,
                '`', 489,
                'a', 400,
                'b', 417,
                'f', 391,
                'h', 420,
                'i', 376,
                'k', 373,
                'l', 370,
                'm', 367,
                'p', 368,
                'x', 413,
                '{', 189,
                '|', 491,
                '}', 302,
                '~', 493,
                0x0b, 304,
                '\f', 304,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(3);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(432);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
            if(lookahead != 0)
                ADVANCE(430);
            END_STATE();
        case 4:
            ADVANCE_MAP(
                ' ', 4,
                '!', 433,
                '"', 436,
                '#', 588,
                '$', 440,
                '%', 442,
                '&', 444,
                '\'', 446,
                '(', 448,
                ')', 450,
                '*', 549,
                '+', 455,
                ',', 457,
                '-', 459,
                '.', 461,
                '/', 463,
                ':', 465,
                ';', 467,
                '<', 469,
                '=', 471,
                '>', 473,
                '?', 475,
                '@', 477,
                '[', 170,
                '\\', 479,
                ']', 186,
                '^', 481,
                '_', 562,
                '`', 579,
                'a', 400,
                'b', 417,
                'f', 391,
                'h', 420,
                'i', 376,
                'k', 373,
                'l', 370,
                'm', 367,
                'p', 368,
                'x', 413,
                '{', 189,
                '|', 491,
                '}', 302,
                '~', 493,
                0x0b, 304,
                '\f', 304,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(3);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(432);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
            if(lookahead != 0)
                ADVANCE(430);
            END_STATE();
        case 5:
            if(lookahead == ' ')
                ADVANCE(564);
            if(lookahead == '#')
                ADVANCE(566);
            if(lookahead == '*')
                ADVANCE(567);
            if(lookahead == '\\')
                ADVANCE(568);
            if(lookahead == '_')
                ADVANCE(6);
            if(lookahead == '`')
                ADVANCE(569);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(5);
            if(('\t' <= lookahead && lookahead <= '\f'))
                ADVANCE(565);
            if(lookahead != 0)
                ADVANCE(563);
            END_STATE();
        case 6:
            if(lookahead == ' ')
                ADVANCE(571);
            if(lookahead == '_')
                ADVANCE(572);
            END_STATE();
        case 7:
            if(lookahead == ' ')
                ADVANCE(551);
            if(lookahead == '#')
                ADVANCE(553);
            if(lookahead == '*')
                ADVANCE(8);
            if(lookahead == '\\')
                ADVANCE(554);
            if(lookahead == '_')
                ADVANCE(555);
            if(lookahead == '`')
                ADVANCE(556);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(7);
            if(('\t' <= lookahead && lookahead <= '\f'))
                ADVANCE(552);
            if(lookahead != 0)
                ADVANCE(550);
            END_STATE();
        case 8:
            if(lookahead == ' ')
                ADVANCE(558);
            if(lookahead == '*')
                ADVANCE(559);
            END_STATE();
        case 9:
            if(lookahead == ' ')
                ADVANCE(593);
            if(lookahead == '#')
                ADVANCE(594);
            END_STATE();
        case 10:
            if(lookahead == ' ')
                ADVANCE(584);
            if(lookahead == '`')
                ADVANCE(585);
            END_STATE();
        case 11:
            if(lookahead == '"')
                ADVANCE(56);
            if(lookahead == '\\')
                ADVANCE(111);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(11);
            END_STATE();
        case 12:
            ADVANCE_MAP(
                '"', 435,
                '$', 14,
                '+', 18,
                ',', 457,
                '.', 461,
                ':', 465,
                '[', 169,
                ']', 67,
                '}', 301,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(12);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(500);
            END_STATE();
        case 13:
            if(lookahead == '#')
                ADVANCE(9);
            if(lookahead == '\\')
                ADVANCE(590);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(13);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(591);
            if(lookahead != 0)
                ADVANCE(589);
            END_STATE();
        case 14:
            if(lookahead == '$')
                ADVANCE(532);
            END_STATE();
        case 15:
            if(lookahead == '+')
                ADVANCE(530);
            if(lookahead == '.')
                ADVANCE(110);
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
                ADVANCE(529);
            END_STATE();
        case 17:
            if(lookahead == '+')
                ADVANCE(454);
            if(lookahead == ':')
                ADVANCE(49);
            if(lookahead == ']')
                ADVANCE(186);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(17);
            END_STATE();
        case 18:
            if(lookahead == '+')
                ADVANCE(16);
            END_STATE();
        case 19:
            if(lookahead == ',')
                ADVANCE(457);
            if(lookahead == '>')
                ADVANCE(55);
            if(lookahead == '\\')
                ADVANCE(538);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(539);
            if(lookahead != 0)
                ADVANCE(537);
            END_STATE();
        case 20:
            if(lookahead == '-')
                ADVANCE(21);
            if(lookahead == '.')
                ADVANCE(109);
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
                ADVANCE(510);
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
                ADVANCE(509);
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
                ADVANCE(509);
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
                ADVANCE(509);
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
                ADVANCE(509);
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
                ADVANCE(509);
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
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 32:
            if(lookahead == '.')
                ADVANCE(110);
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
                ADVANCE(527);
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
                ADVANCE(164);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(501);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(502);
            END_STATE();
        case 54:
            if(lookahead == '>')
                ADVANCE(55);
            if(lookahead == '\\')
                ADVANCE(543);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(544);
            if(lookahead != 0)
                ADVANCE(542);
            END_STATE();
        case 55:
            if(lookahead == '>')
                ADVANCE(545);
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
                ADVANCE(169);
            if(lookahead == '\\')
                ADVANCE(166);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(167);
            if(lookahead != 0)
                ADVANCE(165);
            END_STATE();
        case 59:
            if(lookahead == '\\')
                ADVANCE(60);
            if(lookahead == ']')
                ADVANCE(511);
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
                ADVANCE(511);
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
                ADVANCE(296);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(293);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 63:
            ADVANCE_MAP(
                '\\', 175,
                ']', 186,
                'a', 182,
                'b', 183,
                'f', 181,
                'i', 180,
                'k', 179,
                'l', 176,
                'm', 177,
                'p', 178,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(173);
            if(lookahead != 0)
                ADVANCE(172);
            END_STATE();
        case 64:
            if(lookahead == '\\')
                ADVANCE(175);
            if(lookahead == ']')
                ADVANCE(186);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(172);
            END_STATE();
        case 65:
            if(lookahead == '\\')
                ADVANCE(582);
            if(lookahead == '`')
                ADVANCE(10);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(65);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(581);
            if(lookahead != 0)
                ADVANCE(580);
            END_STATE();
        case 66:
            if(lookahead == ']')
                ADVANCE(186);
            if(lookahead == '{')
                ADVANCE(188);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(184);
            if(lookahead != 0)
                ADVANCE(172);
            END_STATE();
        case 67:
            if(lookahead == ']')
                ADVANCE(503);
            END_STATE();
        case 68:
            if(lookahead == '_')
                ADVANCE(68);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 69:
            if(lookahead == 'a')
                ADVANCE(79);
            END_STATE();
        case 70:
            if(lookahead == 'a')
                ADVANCE(101);
            END_STATE();
        case 71:
            if(lookahead == 'a')
                ADVANCE(102);
            END_STATE();
        case 72:
            if(lookahead == 'c')
                ADVANCE(84);
            END_STATE();
        case 73:
            if(lookahead == 'd')
                ADVANCE(116);
            END_STATE();
        case 74:
            if(lookahead == 'e')
                ADVANCE(107);
            END_STATE();
        case 75:
            if(lookahead == 'e')
                ADVANCE(124);
            END_STATE();
        case 76:
            if(lookahead == 'e')
                ADVANCE(159);
            END_STATE();
        case 77:
            if(lookahead == 'e')
                ADVANCE(78);
            END_STATE();
        case 78:
            if(lookahead == 'f')
                ADVANCE(160);
            END_STATE();
        case 79:
            if(lookahead == 'g')
                ADVANCE(75);
            END_STATE();
        case 80:
            if(lookahead == 'h')
                ADVANCE(152);
            END_STATE();
        case 81:
            if(lookahead == 'h')
                ADVANCE(148);
            END_STATE();
        case 82:
            if(lookahead == 'i')
                ADVANCE(86);
            END_STATE();
        case 83:
            if(lookahead == 'i')
                ADVANCE(87);
            END_STATE();
        case 84:
            if(lookahead == 'i')
                ADVANCE(83);
            END_STATE();
        case 85:
            if(lookahead == 'k')
                ADVANCE(136);
            END_STATE();
        case 86:
            if(lookahead == 'l')
                ADVANCE(103);
            END_STATE();
        case 87:
            if(lookahead == 'm')
                ADVANCE(70);
            END_STATE();
        case 88:
            if(lookahead == 'm')
                ADVANCE(71);
            END_STATE();
        case 89:
            if(lookahead == 'n')
                ADVANCE(120);
            END_STATE();
        case 90:
            if(lookahead == 'n')
                ADVANCE(85);
            END_STATE();
        case 91:
            if(lookahead == 'n')
                ADVANCE(106);
            END_STATE();
        case 92:
            if(lookahead == 'n')
                ADVANCE(128);
            END_STATE();
        case 93:
            if(lookahead == 'n')
                ADVANCE(97);
            END_STATE();
        case 94:
            if(lookahead == 'o')
                ADVANCE(140);
            END_STATE();
        case 95:
            if(lookahead == 'o')
                ADVANCE(105);
            END_STATE();
        case 96:
            if(lookahead == 'o')
                ADVANCE(92);
            END_STATE();
        case 97:
            if(lookahead == 'o')
                ADVANCE(104);
            END_STATE();
        case 98:
            if(lookahead == 's')
                ADVANCE(132);
            END_STATE();
        case 99:
            if(lookahead == 's')
                ADVANCE(98);
            END_STATE();
        case 100:
            if(lookahead == 't')
                ADVANCE(74);
            END_STATE();
        case 101:
            if(lookahead == 't')
                ADVANCE(80);
            END_STATE();
        case 102:
            if(lookahead == 't')
                ADVANCE(81);
            END_STATE();
        case 103:
            if(lookahead == 't')
                ADVANCE(94);
            END_STATE();
        case 104:
            if(lookahead == 't')
                ADVANCE(76);
            END_STATE();
        case 105:
            if(lookahead == 't')
                ADVANCE(93);
            END_STATE();
        case 106:
            if(lookahead == 'u')
                ADVANCE(144);
            END_STATE();
        case 107:
            if(lookahead == 'x')
                ADVANCE(88);
            END_STATE();
        case 108:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(108);
            if(lookahead != 0 &&
               lookahead != '.' &&
               lookahead != '>' &&
               lookahead != '[')
                ADVANCE(528);
            END_STATE();
        case 109:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(510);
            END_STATE();
        case 110:
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
        case 111:
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(11);
            END_STATE();
        case 112:
            if(eof)
                ADVANCE(115);
            ADVANCE_MAP(
                ' ', 2,
                '!', 433,
                '"', 436,
                '#', 438,
                '$', 440,
                '%', 442,
                '&', 444,
                '\'', 446,
                '(', 448,
                ')', 450,
                '*', 452,
                '+', 455,
                ',', 457,
                '-', 459,
                '.', 461,
                '/', 463,
                ':', 465,
                ';', 467,
                '<', 469,
                '=', 471,
                '>', 473,
                '?', 475,
                '@', 477,
                '[', 170,
                '\\', 479,
                ']', 186,
                '^', 481,
                '_', 483,
                '`', 489,
                'a', 338,
                'b', 355,
                'f', 329,
                'h', 358,
                'i', 314,
                'k', 311,
                'l', 308,
                'm', 305,
                'p', 306,
                'x', 351,
                '{', 189,
                '|', 491,
                '}', 302,
                '~', 493,
                0x0b, 303,
                '\f', 303,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(112);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(431);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0)
                ADVANCE(430);
            END_STATE();
        case 113:
            if(eof)
                ADVANCE(115);
            ADVANCE_MAP(
                ' ', 4,
                '!', 433,
                '"', 436,
                '#', 438,
                '$', 440,
                '%', 442,
                '&', 444,
                '\'', 446,
                '(', 448,
                ')', 450,
                '*', 452,
                '+', 455,
                ',', 457,
                '-', 459,
                '.', 461,
                '/', 463,
                ':', 465,
                ';', 467,
                '<', 469,
                '=', 471,
                '>', 473,
                '?', 475,
                '@', 477,
                '[', 170,
                '\\', 479,
                ']', 186,
                '^', 481,
                '_', 485,
                '`', 489,
                'a', 400,
                'b', 417,
                'f', 391,
                'h', 420,
                'i', 376,
                'k', 373,
                'l', 370,
                'm', 367,
                'p', 368,
                'x', 413,
                '{', 189,
                '|', 491,
                '}', 302,
                '~', 493,
                0x0b, 304,
                '\f', 304,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(432);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
            if(lookahead != 0)
                ADVANCE(430);
            END_STATE();
        case 114:
            if(eof)
                ADVANCE(115);
            ADVANCE_MAP(
                ' ', 191,
                '!', 434,
                '"', 437,
                '#', 439,
                '$', 441,
                '%', 443,
                '&', 445,
                '\'', 447,
                '(', 449,
                ')', 451,
                '*', 453,
                '+', 456,
                ',', 458,
                '-', 460,
                '.', 462,
                '/', 464,
                ':', 466,
                ';', 468,
                '<', 470,
                '=', 472,
                '>', 474,
                '?', 476,
                '@', 478,
                '[', 171,
                '\\', 480,
                ']', 187,
                '^', 482,
                '_', 487,
                '`', 490,
                'a', 240,
                'b', 257,
                'f', 231,
                'h', 260,
                'i', 216,
                'k', 213,
                'l', 210,
                'm', 207,
                'p', 208,
                'x', 253,
                '{', 190,
                '|', 492,
                '}', 302,
                '~', 494,
                0x0b, 193,
                '\f', 193,
                '\t', 192,
                '\n', 192,
                '\r', 192,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(269);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 115:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 116:
            ACCEPT_TOKEN(anon_sym_kbd);
            END_STATE();
        case 117:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 118:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 119:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 120:
            ACCEPT_TOKEN(anon_sym_btn);
            END_STATE();
        case 121:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 122:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 123:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 124:
            ACCEPT_TOKEN(anon_sym_image);
            END_STATE();
        case 125:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 126:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 127:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 128:
            ACCEPT_TOKEN(anon_sym_icon);
            END_STATE();
        case 129:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 130:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 131:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 132:
            ACCEPT_TOKEN(anon_sym_pass);
            END_STATE();
        case 133:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 134:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 135:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 136:
            ACCEPT_TOKEN(anon_sym_link);
            END_STATE();
        case 137:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 138:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 139:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 140:
            ACCEPT_TOKEN(anon_sym_mailto);
            END_STATE();
        case 141:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 142:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 143:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 144:
            ACCEPT_TOKEN(anon_sym_menu);
            END_STATE();
        case 145:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 146:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 147:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 148:
            ACCEPT_TOKEN(anon_sym_latexmath);
            END_STATE();
        case 149:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 150:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 151:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 152:
            ACCEPT_TOKEN(anon_sym_asciimath);
            END_STATE();
        case 153:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 154:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 155:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 156:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'r')
                ADVANCE(322);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 157:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'r')
                ADVANCE(384);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 158:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'r')
                ADVANCE(224);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 159:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == 'r')
                ADVANCE(77);
            END_STATE();
        case 160:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            END_STATE();
        case 161:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 162:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 163:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 164:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 165:
            ACCEPT_TOKEN(aux_sym_inline_macro_token1);
            END_STATE();
        case 166:
            ACCEPT_TOKEN(aux_sym_inline_macro_token1);
            if(lookahead == '[')
                ADVANCE(168);
            END_STATE();
        case 167:
            ACCEPT_TOKEN(aux_sym_inline_macro_token1);
            if(lookahead == '\\')
                ADVANCE(166);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(167);
            if(lookahead != 0 &&
               lookahead != '[' &&
               lookahead != '\\')
                ADVANCE(165);
            END_STATE();
        case 168:
            ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
            END_STATE();
        case 169:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 170:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(495);
            END_STATE();
        case 171:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(496);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 172:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            END_STATE();
        case 173:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            ADVANCE_MAP(
                '\\', 175,
                'a', 182,
                'b', 183,
                'f', 181,
                'i', 180,
                'k', 179,
                'l', 176,
                'm', 177,
                'p', 178,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(173);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(172);
            END_STATE();
        case 174:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == '\\')
                ADVANCE(175);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(174);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(172);
            END_STATE();
        case 175:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == ']')
                ADVANCE(185);
            END_STATE();
        case 176:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'a')
                ADVANCE(100);
            if(lookahead == 'i')
                ADVANCE(90);
            END_STATE();
        case 177:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'a')
                ADVANCE(82);
            if(lookahead == 'e')
                ADVANCE(91);
            END_STATE();
        case 178:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'a')
                ADVANCE(99);
            END_STATE();
        case 179:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'b')
                ADVANCE(73);
            END_STATE();
        case 180:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'c')
                ADVANCE(96);
            if(lookahead == 'm')
                ADVANCE(69);
            END_STATE();
        case 181:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'o')
                ADVANCE(95);
            END_STATE();
        case 182:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 's')
                ADVANCE(72);
            END_STATE();
        case 183:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 't')
                ADVANCE(89);
            END_STATE();
        case 184:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == '{')
                ADVANCE(188);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(184);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(172);
            END_STATE();
        case 185:
            ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
            END_STATE();
        case 186:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 187:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 188:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 189:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 190:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 191:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 191,
                '!', 434,
                '"', 437,
                '#', 588,
                '$', 441,
                '%', 443,
                '&', 445,
                '\'', 447,
                '(', 449,
                ')', 451,
                '*', 549,
                '+', 456,
                ',', 458,
                '-', 460,
                '.', 462,
                '/', 464,
                ':', 466,
                ';', 468,
                '<', 470,
                '=', 472,
                '>', 474,
                '?', 476,
                '@', 478,
                '[', 171,
                '\\', 480,
                ']', 187,
                '^', 482,
                '_', 562,
                '`', 579,
                'a', 240,
                'b', 257,
                'f', 231,
                'h', 260,
                'i', 216,
                'k', 213,
                'l', 210,
                'm', 207,
                'p', 208,
                'x', 253,
                '{', 190,
                '|', 492,
                '~', 494,
                0x0b, 193,
                '\f', 193,
                '\t', 192,
                '\n', 192,
                '\r', 192,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(269);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(291);
            END_STATE();
        case 192:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 191,
                '!', 434,
                '"', 437,
                '#', 439,
                '$', 441,
                '%', 443,
                '&', 445,
                '\'', 447,
                '(', 449,
                ')', 451,
                '*', 453,
                '+', 456,
                ',', 458,
                '-', 460,
                '.', 462,
                '/', 464,
                ':', 466,
                ';', 468,
                '<', 470,
                '=', 472,
                '>', 474,
                '?', 476,
                '@', 478,
                '[', 171,
                '\\', 480,
                ']', 187,
                '^', 482,
                '_', 487,
                '`', 490,
                'a', 240,
                'b', 257,
                'f', 231,
                'h', 260,
                'i', 216,
                'k', 213,
                'l', 210,
                'm', 207,
                'p', 208,
                'x', 253,
                '{', 190,
                '|', 492,
                '~', 494,
                0x0b, 193,
                '\f', 193,
                '\t', 192,
                '\n', 192,
                '\r', 192,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(269);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(291);
            END_STATE();
        case 193:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 191,
                '!', 434,
                '"', 437,
                '#', 439,
                '$', 441,
                '%', 443,
                '&', 445,
                '\'', 447,
                '(', 449,
                ')', 451,
                '*', 453,
                '+', 456,
                ',', 458,
                '-', 460,
                '.', 462,
                '/', 464,
                ':', 466,
                ';', 468,
                '<', 470,
                '=', 472,
                '>', 474,
                '?', 476,
                '@', 478,
                '[', 171,
                '\\', 480,
                ']', 187,
                '^', 482,
                '_', 488,
                '`', 490,
                'a', 240,
                'b', 257,
                'f', 231,
                'h', 260,
                'i', 216,
                'k', 213,
                'l', 210,
                'm', 207,
                'p', 208,
                'x', 253,
                '{', 190,
                '|', 492,
                '~', 494,
                0x0b, 193,
                '\f', 193,
                '\t', 192,
                '\n', 192,
                '\r', 192,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(269);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(291);
            END_STATE();
        case 194:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '"')
                ADVANCE(289);
            if(lookahead == '\\')
                ADVANCE(297);
            if(lookahead == '}')
                ADVANCE(11);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(194);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 195:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '"')
                ADVANCE(289);
            if(lookahead == '\\')
                ADVANCE(297);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(194);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 196:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '+')
                ADVANCE(531);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 197:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(198);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 198:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(198);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 199:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(206);
            if(lookahead == '0')
                ADVANCE(204);
            if(lookahead == '1')
                ADVANCE(203);
            if(lookahead == '2')
                ADVANCE(200);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(202);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 200:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(206);
            if(lookahead == '5')
                ADVANCE(201);
            if(lookahead == ':')
                ADVANCE(300);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == ']')
                ADVANCE(295);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(202);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 201:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(206);
            if(lookahead == ':')
                ADVANCE(300);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == ']')
                ADVANCE(295);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(204);
            if(('6' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 202:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(206);
            if(lookahead == ':')
                ADVANCE(300);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == ']')
                ADVANCE(295);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 203:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(206);
            if(lookahead == ':')
                ADVANCE(300);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == ']')
                ADVANCE(295);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(202);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 204:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(206);
            if(lookahead == ':')
                ADVANCE(300);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == ']')
                ADVANCE(295);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 205:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(206);
            if(lookahead == ':')
                ADVANCE(300);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 206:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(206);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 207:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'a')
                ADVANCE(233);
            if(lookahead == 'e')
                ADVANCE(243);
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
                ADVANCE(295);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 208:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'a')
                ADVANCE(256);
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
                ADVANCE(295);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 209:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'a')
                ADVANCE(227);
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
                ADVANCE(295);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 210:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'a')
                ADVANCE(261);
            if(lookahead == 'i')
                ADVANCE(242);
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
                ADVANCE(295);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 211:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'a')
                ADVANCE(259);
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
                ADVANCE(295);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 212:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'a')
                ADVANCE(262);
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
                ADVANCE(295);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 213:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'b')
                ADVANCE(218);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 214:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'c')
                ADVANCE(230);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 215:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'c')
                ADVANCE(526);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 216:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                '.', 292,
                '@', 290,
                '\\', 296,
                '_', 268,
                'c', 248,
                'm', 209,
                'r', 215,
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 217:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'c')
                ADVANCE(234);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 218:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'd')
                ADVANCE(119);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 219:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'e')
                ADVANCE(225);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 220:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'e')
                ADVANCE(520);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 221:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'e')
                ADVANCE(267);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 222:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'e')
                ADVANCE(127);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 223:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'e')
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 224:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'e')
                ADVANCE(226);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 225:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'f')
                ADVANCE(548);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 226:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'f')
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 227:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'g')
                ADVANCE(222);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 228:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'h')
                ADVANCE(155);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 229:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'h')
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 230:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'h')
                ADVANCE(247);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 231:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                '.', 292,
                '@', 290,
                '\\', 296,
                '_', 268,
                'i', 236,
                'o', 250,
                't', 251,
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 232:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'i')
                ADVANCE(238);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 233:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'i')
                ADVANCE(237);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 234:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'i')
                ADVANCE(232);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 235:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'k')
                ADVANCE(139);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 236:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'l')
                ADVANCE(220);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 237:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'l')
                ADVANCE(264);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 238:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'm')
                ADVANCE(211);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 239:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'm')
                ADVANCE(212);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 240:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'n')
                ADVANCE(214);
            if(lookahead == 's')
                ADVANCE(217);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 241:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'n')
                ADVANCE(123);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 242:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'n')
                ADVANCE(235);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 243:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'n')
                ADVANCE(266);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 244:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'n')
                ADVANCE(131);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 245:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'n')
                ADVANCE(249);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 246:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'o')
                ADVANCE(143);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 247:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'o')
                ADVANCE(254);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 248:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'o')
                ADVANCE(244);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 249:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'o')
                ADVANCE(265);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 250:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'o')
                ADVANCE(263);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 251:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'p')
                ADVANCE(523);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 252:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'p')
                ADVANCE(514);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 253:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'r')
                ADVANCE(219);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 254:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'r')
                ADVANCE(506);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 255:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 's')
                ADVANCE(135);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 256:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 's')
                ADVANCE(255);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 257:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 't')
                ADVANCE(241);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 258:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 't')
                ADVANCE(252);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 259:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 't')
                ADVANCE(228);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 260:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 't')
                ADVANCE(258);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 261:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 't')
                ADVANCE(221);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 262:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 't')
                ADVANCE(229);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 263:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 't')
                ADVANCE(245);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 264:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 't')
                ADVANCE(246);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 265:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 't')
                ADVANCE(223);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 266:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'u')
                ADVANCE(147);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 267:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 'x')
                ADVANCE(239);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 268:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 269:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '}')
                ADVANCE(32);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(269);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 270:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 271:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(199);
            if(lookahead == '5')
                ADVANCE(272);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(275);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(273);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 272:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(199);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(275);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 273:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(199);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(275);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 274:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(199);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(273);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 275:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(199);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 276:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(287);
            if(lookahead == '5')
                ADVANCE(277);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(280);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(278);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 277:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(287);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(280);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 278:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(287);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(280);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 279:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(287);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(278);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 280:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(287);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 281:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(288);
            if(lookahead == '5')
                ADVANCE(282);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(285);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(283);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 282:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(288);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(285);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 283:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(288);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(285);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 284:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(288);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(283);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 285:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(288);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 286:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(285);
            if(lookahead == '1')
                ADVANCE(284);
            if(lookahead == '2')
                ADVANCE(281);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(283);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 287:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(275);
            if(lookahead == '1')
                ADVANCE(274);
            if(lookahead == '2')
                ADVANCE(271);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(273);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 288:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(280);
            if(lookahead == '1')
                ADVANCE(279);
            if(lookahead == '2')
                ADVANCE(276);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(278);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 289:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 290:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '[')
                ADVANCE(286);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 291:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(291);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               (' ' <= lookahead && lookahead <= '@') ||
               ('[' <= lookahead && lookahead <= '`') ||
               lookahead == '{' ||
               lookahead == '|' ||
               lookahead == '~')
                ADVANCE(295);
            if(lookahead != 0 &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(291);
            END_STATE();
        case 292:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 293:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(293);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 294:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(296);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(197);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 295:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 296:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 297:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(195);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(194);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 298:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(299);
            if(lookahead == ']')
                ADVANCE(298);
            if(lookahead == '}')
                ADVANCE(59);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(298);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 299:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(299);
            if(lookahead == ']')
                ADVANCE(298);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(298);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 300:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(299);
            if(lookahead == '}')
                ADVANCE(59);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(298);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 301:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 302:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 303:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                ' ', 2,
                '_', 484,
                'a', 338,
                'b', 355,
                'f', 329,
                'h', 358,
                'i', 314,
                'k', 311,
                'l', 308,
                'm', 305,
                'p', 306,
                'x', 351,
                0x0b, 303,
                '\f', 303,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 304:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                ' ', 4,
                '_', 486,
                'a', 400,
                'b', 417,
                'f', 391,
                'h', 420,
                'i', 376,
                'k', 373,
                'l', 370,
                'm', 367,
                'p', 368,
                'x', 413,
                0x0b, 304,
                '\f', 304,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 305:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'a')
                ADVANCE(331);
            if(lookahead == 'e')
                ADVANCE(341);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 306:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'a')
                ADVANCE(354);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 307:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'a')
                ADVANCE(325);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 308:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'a')
                ADVANCE(359);
            if(lookahead == 'i')
                ADVANCE(340);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 309:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'a')
                ADVANCE(357);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 310:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'a')
                ADVANCE(360);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 311:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'b')
                ADVANCE(316);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 312:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'c')
                ADVANCE(328);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 313:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'c')
                ADVANCE(524);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 314:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'c')
                ADVANCE(346);
            if(lookahead == 'm')
                ADVANCE(307);
            if(lookahead == 'r')
                ADVANCE(313);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 315:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'c')
                ADVANCE(332);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 316:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'd')
                ADVANCE(117);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 317:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'e')
                ADVANCE(323);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 318:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'e')
                ADVANCE(518);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 319:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'e')
                ADVANCE(365);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 320:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'e')
                ADVANCE(125);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 321:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'e')
                ADVANCE(156);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 322:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'e')
                ADVANCE(324);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 323:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'f')
                ADVANCE(546);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 324:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'f')
                ADVANCE(161);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 325:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'g')
                ADVANCE(320);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 326:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'h')
                ADVANCE(153);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 327:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'h')
                ADVANCE(149);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 328:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'h')
                ADVANCE(345);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 329:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'i')
                ADVANCE(334);
            if(lookahead == 'o')
                ADVANCE(348);
            if(lookahead == 't')
                ADVANCE(349);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 330:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'i')
                ADVANCE(336);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 331:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'i')
                ADVANCE(335);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 332:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'i')
                ADVANCE(330);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 333:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'k')
                ADVANCE(137);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 334:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'l')
                ADVANCE(318);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 335:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'l')
                ADVANCE(362);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 336:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'm')
                ADVANCE(309);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 337:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'm')
                ADVANCE(310);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 338:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'n')
                ADVANCE(312);
            if(lookahead == 's')
                ADVANCE(315);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 339:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'n')
                ADVANCE(121);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 340:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'n')
                ADVANCE(333);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 341:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'n')
                ADVANCE(364);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 342:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'n')
                ADVANCE(129);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 343:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'n')
                ADVANCE(347);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 344:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'o')
                ADVANCE(141);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 345:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'o')
                ADVANCE(352);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 346:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'o')
                ADVANCE(342);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 347:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'o')
                ADVANCE(363);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 348:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'o')
                ADVANCE(361);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 349:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'p')
                ADVANCE(521);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 350:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'p')
                ADVANCE(512);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 351:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'r')
                ADVANCE(317);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 352:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'r')
                ADVANCE(504);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 353:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 's')
                ADVANCE(133);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 354:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 's')
                ADVANCE(353);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 355:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 't')
                ADVANCE(339);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 356:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 't')
                ADVANCE(350);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 357:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 't')
                ADVANCE(326);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 358:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 't')
                ADVANCE(356);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 359:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 't')
                ADVANCE(319);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 360:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 't')
                ADVANCE(327);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 361:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 't')
                ADVANCE(343);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 362:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 't')
                ADVANCE(344);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 363:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 't')
                ADVANCE(321);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 364:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'u')
                ADVANCE(145);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 365:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 'x')
                ADVANCE(337);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 366:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 367:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'a')
                ADVANCE(393);
            if(lookahead == 'e')
                ADVANCE(403);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 368:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'a')
                ADVANCE(416);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 369:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'a')
                ADVANCE(387);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 370:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'a')
                ADVANCE(421);
            if(lookahead == 'i')
                ADVANCE(402);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 371:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'a')
                ADVANCE(419);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 372:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'a')
                ADVANCE(422);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 373:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'b')
                ADVANCE(378);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 374:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'c')
                ADVANCE(390);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 375:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'c')
                ADVANCE(525);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 376:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'c')
                ADVANCE(408);
            if(lookahead == 'm')
                ADVANCE(369);
            if(lookahead == 'r')
                ADVANCE(375);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 377:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'c')
                ADVANCE(394);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 378:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'd')
                ADVANCE(118);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 379:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'e')
                ADVANCE(385);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 380:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'e')
                ADVANCE(519);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 381:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'e')
                ADVANCE(427);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 382:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'e')
                ADVANCE(126);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 383:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'e')
                ADVANCE(157);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 384:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'e')
                ADVANCE(386);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 385:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'f')
                ADVANCE(547);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 386:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'f')
                ADVANCE(162);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 387:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'g')
                ADVANCE(382);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 388:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'h')
                ADVANCE(154);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 389:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'h')
                ADVANCE(150);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 390:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'h')
                ADVANCE(407);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 391:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'i')
                ADVANCE(396);
            if(lookahead == 'o')
                ADVANCE(410);
            if(lookahead == 't')
                ADVANCE(411);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 392:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'i')
                ADVANCE(398);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 393:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'i')
                ADVANCE(397);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 394:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'i')
                ADVANCE(392);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 395:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'k')
                ADVANCE(138);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 396:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'l')
                ADVANCE(380);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 397:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'l')
                ADVANCE(424);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 398:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'm')
                ADVANCE(371);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 399:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'm')
                ADVANCE(372);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 400:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'n')
                ADVANCE(374);
            if(lookahead == 's')
                ADVANCE(377);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 401:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'n')
                ADVANCE(122);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 402:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'n')
                ADVANCE(395);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 403:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'n')
                ADVANCE(426);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 404:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'n')
                ADVANCE(130);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 405:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'n')
                ADVANCE(409);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 406:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'o')
                ADVANCE(142);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 407:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'o')
                ADVANCE(414);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 408:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'o')
                ADVANCE(404);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 409:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'o')
                ADVANCE(425);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 410:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'o')
                ADVANCE(423);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 411:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'p')
                ADVANCE(522);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 412:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'p')
                ADVANCE(513);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 413:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'r')
                ADVANCE(379);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 414:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'r')
                ADVANCE(505);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 415:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 's')
                ADVANCE(134);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 416:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 's')
                ADVANCE(415);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 417:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(401);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 418:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(412);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 419:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(388);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 420:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(418);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 421:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(381);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 422:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(389);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 423:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(405);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 424:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(406);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 425:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(383);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 426:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'u')
                ADVANCE(146);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 427:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'x')
                ADVANCE(399);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 428:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 429:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 430:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(68);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 431:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(431);
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
                ADVANCE(500);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(498);
            END_STATE();
        case 432:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(432);
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
        case 433:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 434:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 435:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 436:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(56);
            if(lookahead == '\\')
                ADVANCE(111);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(11);
            END_STATE();
        case 437:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(289);
            if(lookahead == '\\')
                ADVANCE(297);
            if(lookahead == '}')
                ADVANCE(11);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(194);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 438:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(595);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 439:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(596);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 440:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(533);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 441:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(534);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 442:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 443:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 444:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 445:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 446:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 447:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 448:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 449:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 450:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 451:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 452:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '*')
                ADVANCE(560);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 453:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '*')
                ADVANCE(561);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '+')
                ADVANCE(15);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 456:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '+')
                ADVANCE(196);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(anon_sym_COMMA);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 460:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(anon_sym_DOT);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 464:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(anon_sym_COLON2);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(anon_sym_COLON2);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(anon_sym_SEMI);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(535);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(536);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 472:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 476:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(anon_sym_AT);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 482:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(575);
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
                ADVANCE(500);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(498);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(573);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(576);
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
        case 486:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(574);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(578);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(577);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '`')
                ADVANCE(586);
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
        case 490:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '`')
                ADVANCE(587);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 492:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 494:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(110);
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
                ADVANCE(500);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(498);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(500);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(aux_sym_anchor_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(501);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(502);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(aux_sym_anchor_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ' ||
               ('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(502);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(aux_sym_anchor_token3);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(507);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(508);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(aux_sym_anchor_token3);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(508);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(sym_email);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(sym_email);
            if(lookahead == '-')
                ADVANCE(22);
            if(lookahead == '.')
                ADVANCE(109);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(510);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(sym_email);
            if(lookahead == '\\')
                ADVANCE(60);
            if(lookahead == ']')
                ADVANCE(511);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(59);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(lookahead == 's')
                ADVANCE(515);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(366);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(429);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 's')
                ADVANCE(516);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
            if(lookahead == 's')
                ADVANCE(517);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(sym__link_component);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '.' &&
               lookahead != '>' &&
               lookahead != '[')
                ADVANCE(528);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 531:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 534:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(295);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            if(lookahead == ',')
                ADVANCE(540);
            if(lookahead == '>')
                ADVANCE(541);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            if(lookahead == '\\')
                ADVANCE(538);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(539);
            if(lookahead != 0 &&
               lookahead != ',' &&
               lookahead != '>')
                ADVANCE(537);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(anon_sym_BSLASH_COMMA);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(anon_sym_BSLASH_GT);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            if(lookahead == '>')
                ADVANCE(541);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            if(lookahead == '\\')
                ADVANCE(543);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(544);
            if(lookahead != 0 &&
               lookahead != '>')
                ADVANCE(542);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(anon_sym_STAR2);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == ' ')
                ADVANCE(551);
            if(lookahead == '#')
                ADVANCE(588);
            if(lookahead == '\\')
                ADVANCE(554);
            if(lookahead == '_')
                ADVANCE(562);
            if(lookahead == '`')
                ADVANCE(579);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(552);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(550);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == ' ')
                ADVANCE(551);
            if(lookahead == '#')
                ADVANCE(553);
            if(lookahead == '\\')
                ADVANCE(554);
            if(lookahead == '_')
                ADVANCE(555);
            if(lookahead == '`')
                ADVANCE(556);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(552);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(550);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '#')
                ADVANCE(594);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '*')
                ADVANCE(557);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '_')
                ADVANCE(572);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '`')
                ADVANCE(585);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(anon_sym_BSLASH_STAR);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(anon_sym_STAR3);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 561:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(anon_sym__2);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == ' ')
                ADVANCE(564);
            if(lookahead == '#')
                ADVANCE(588);
            if(lookahead == '*')
                ADVANCE(549);
            if(lookahead == '\\')
                ADVANCE(568);
            if(lookahead == '`')
                ADVANCE(579);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(565);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_' &&
               lookahead != '`')
                ADVANCE(563);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == ' ')
                ADVANCE(564);
            if(lookahead == '#')
                ADVANCE(566);
            if(lookahead == '*')
                ADVANCE(567);
            if(lookahead == '\\')
                ADVANCE(568);
            if(lookahead == '`')
                ADVANCE(569);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(565);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_' &&
               lookahead != '`')
                ADVANCE(563);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '#')
                ADVANCE(594);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '*')
                ADVANCE(559);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '_')
                ADVANCE(570);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '`')
                ADVANCE(585);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(anon_sym_BSLASH_);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(anon_sym__3);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(anon_sym___);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(498);
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
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(366);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(430);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(110);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(428);
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
                ADVANCE(430);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(110);
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
                ADVANCE(500);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(498);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 577:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
            if(lookahead == '_')
                ADVANCE(268);
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
                ADVANCE(295);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(268);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(291);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(anon_sym_BQUOTE2);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '\\')
                ADVANCE(582);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(581);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '`')
                ADVANCE(580);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '`')
                ADVANCE(583);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(anon_sym_BSLASH_BQUOTE);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(anon_sym_BQUOTE3);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 587:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(anon_sym_POUND2);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '#')
                ADVANCE(592);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '\\')
                ADVANCE(590);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(591);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '#')
                ADVANCE(589);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(anon_sym_BSLASH_POUND);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(anon_sym_POUND3);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead == '.')
                ADVANCE(110);
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
        case 596:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead == '.')
                ADVANCE(292);
            if(lookahead == '@')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(296);
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
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(295);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 113 },
    [2] = { .lex_state = 113 },
    [3] = { .lex_state = 113 },
    [4] = { .lex_state = 113 },
    [5] = { .lex_state = 114 },
    [6] = { .lex_state = 113 },
    [7] = { .lex_state = 112 },
    [8] = { .lex_state = 113 },
    [9] = { .lex_state = 113 },
    [10] = { .lex_state = 113 },
    [11] = { .lex_state = 113 },
    [12] = { .lex_state = 113 },
    [13] = { .lex_state = 113 },
    [14] = { .lex_state = 113 },
    [15] = { .lex_state = 113 },
    [16] = { .lex_state = 113 },
    [17] = { .lex_state = 113 },
    [18] = { .lex_state = 113 },
    [19] = { .lex_state = 113 },
    [20] = { .lex_state = 113 },
    [21] = { .lex_state = 113 },
    [22] = { .lex_state = 113 },
    [23] = { .lex_state = 113 },
    [24] = { .lex_state = 113 },
    [25] = { .lex_state = 113 },
    [26] = { .lex_state = 113 },
    [27] = { .lex_state = 113 },
    [28] = { .lex_state = 113 },
    [29] = { .lex_state = 113 },
    [30] = { .lex_state = 113 },
    [31] = { .lex_state = 113 },
    [32] = { .lex_state = 113 },
    [33] = { .lex_state = 113 },
    [34] = { .lex_state = 113 },
    [35] = { .lex_state = 113 },
    [36] = { .lex_state = 113 },
    [37] = { .lex_state = 113 },
    [38] = { .lex_state = 113 },
    [39] = { .lex_state = 113 },
    [40] = { .lex_state = 63 },
    [41] = { .lex_state = 63 },
    [42] = { .lex_state = 63 },
    [43] = { .lex_state = 63 },
    [44] = { .lex_state = 63 },
    [45] = { .lex_state = 63 },
    [46] = { .lex_state = 63 },
    [47] = { .lex_state = 63 },
    [48] = { .lex_state = 63 },
    [49] = { .lex_state = 63 },
    [50] = { .lex_state = 63 },
    [51] = { .lex_state = 63 },
    [52] = { .lex_state = 63 },
    [53] = { .lex_state = 63 },
    [54] = { .lex_state = 5 },
    [55] = { .lex_state = 7 },
    [56] = { .lex_state = 7 },
    [57] = { .lex_state = 7 },
    [58] = { .lex_state = 7 },
    [59] = { .lex_state = 7 },
    [60] = { .lex_state = 5 },
    [61] = { .lex_state = 7 },
    [62] = { .lex_state = 5 },
    [63] = { .lex_state = 5 },
    [64] = { .lex_state = 5 },
    [65] = { .lex_state = 5 },
    [66] = { .lex_state = 5 },
    [67] = { .lex_state = 7 },
    [68] = { .lex_state = 5 },
    [69] = { .lex_state = 5 },
    [70] = { .lex_state = 7 },
    [71] = { .lex_state = 7 },
    [72] = { .lex_state = 7 },
    [73] = { .lex_state = 5 },
    [74] = { .lex_state = 5 },
    [75] = { .lex_state = 7 },
    [76] = { .lex_state = 7 },
    [77] = { .lex_state = 5 },
    [78] = { .lex_state = 7 },
    [79] = { .lex_state = 7 },
    [80] = { .lex_state = 7 },
    [81] = { .lex_state = 5 },
    [82] = { .lex_state = 5 },
    [83] = { .lex_state = 5 },
    [84] = { .lex_state = 19 },
    [85] = { .lex_state = 66 },
    [86] = { .lex_state = 66 },
    [87] = { .lex_state = 19 },
    [88] = { .lex_state = 13 },
    [89] = { .lex_state = 65 },
    [90] = { .lex_state = 66 },
    [91] = { .lex_state = 66 },
    [92] = { .lex_state = 19 },
    [93] = { .lex_state = 65 },
    [94] = { .lex_state = 65 },
    [95] = { .lex_state = 58 },
    [96] = { .lex_state = 58 },
    [97] = { .lex_state = 13 },
    [98] = { .lex_state = 13 },
    [99] = { .lex_state = 58 },
    [100] = { .lex_state = 65 },
    [101] = { .lex_state = 54 },
    [102] = { .lex_state = 65 },
    [103] = { .lex_state = 13 },
    [104] = { .lex_state = 13 },
    [105] = { .lex_state = 65 },
    [106] = { .lex_state = 64 },
    [107] = { .lex_state = 65 },
    [108] = { .lex_state = 54 },
    [109] = { .lex_state = 13 },
    [110] = { .lex_state = 64 },
    [111] = { .lex_state = 13 },
    [112] = { .lex_state = 64 },
    [113] = { .lex_state = 58 },
    [114] = { .lex_state = 64 },
    [115] = { .lex_state = 65 },
    [116] = { .lex_state = 64 },
    [117] = { .lex_state = 19 },
    [118] = { .lex_state = 58 },
    [119] = { .lex_state = 65 },
    [120] = { .lex_state = 13 },
    [121] = { .lex_state = 13 },
    [122] = { .lex_state = 12 },
    [123] = { .lex_state = 13 },
    [124] = { .lex_state = 65 },
    [125] = { .lex_state = 58 },
    [126] = { .lex_state = 13 },
    [127] = { .lex_state = 65 },
    [128] = { .lex_state = 12 },
    [129] = { .lex_state = 65 },
    [130] = { .lex_state = 65 },
    [131] = { .lex_state = 13 },
    [132] = { .lex_state = 12 },
    [133] = { .lex_state = 13 },
    [134] = { .lex_state = 58 },
    [135] = { .lex_state = 58 },
    [136] = { .lex_state = 54 },
    [137] = { .lex_state = 64 },
    [138] = { .lex_state = 54 },
    [139] = { .lex_state = 12 },
    [140] = { .lex_state = 66 },
    [141] = { .lex_state = 12 },
    [142] = { .lex_state = 12 },
    [143] = { .lex_state = 12 },
    [144] = { .lex_state = 12 },
    [145] = { .lex_state = 108 },
    [146] = { .lex_state = 12 },
    [147] = { .lex_state = 12 },
    [148] = { .lex_state = 108 },
    [149] = { .lex_state = 12 },
    [150] = { .lex_state = 53 },
    [151] = { .lex_state = 12 },
    [152] = { .lex_state = 12 },
    [153] = { .lex_state = 12 },
    [154] = { .lex_state = 62 },
    [155] = { .lex_state = 17 },
    [156] = { .lex_state = 12 },
    [157] = { .lex_state = 17 },
    [158] = { .lex_state = 12 },
    [159] = { .lex_state = 108 },
    [160] = { .lex_state = 12 },
    [161] = { .lex_state = 53 },
    [162] = { .lex_state = 12 },
    [163] = { .lex_state = 17 },
    [164] = { .lex_state = 0 },
    [165] = { .lex_state = 12 },
    [166] = { .lex_state = 17 },
    [167] = { .lex_state = 108 },
    [168] = { .lex_state = 507 },
    [169] = { .lex_state = 17 },
    [170] = { .lex_state = 12 },
    [171] = { .lex_state = 17 },
    [172] = { .lex_state = 53 },
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
        [sym_inline] = STATE(164),
        [sym_inline_macro] = STATE(2),
        [sym_replacement] = STATE(2),
        [sym__word] = STATE(2),
        [sym__punctuation] = STATE(2),
        [sym_anchor] = STATE(2),
        [sym_auto_link] = STATE(2),
        [sym_link_url] = STATE(23),
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
        [sym_inline_macro] = STATE(3),
        [sym_replacement] = STATE(3),
        [sym__word] = STATE(3),
        [sym__punctuation] = STATE(3),
        [sym_anchor] = STATE(3),
        [sym_auto_link] = STATE(3),
        [sym_link_url] = STATE(23),
        [sym_passthrough] = STATE(3),
        [sym_xref] = STATE(3),
        [sym_emphasis] = STATE(3),
        [sym_ltalic] = STATE(3),
        [sym_monospace] = STATE(3),
        [sym_highlight] = STATE(3),
        [aux_sym_inline_repeat1] = STATE(3),
        [ts_builtin_sym_end] = ACTIONS(43),
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
        [anon_sym_LBRACK] = ACTIONS(45),
        [anon_sym_RBRACK] = ACTIONS(45),
        [anon_sym_LBRACE] = ACTIONS(7),
        [anon_sym_RBRACE] = ACTIONS(45),
        [sym__word_no_digit] = ACTIONS(45),
        [sym__digits] = ACTIONS(45),
        [anon_sym_BANG] = ACTIONS(45),
        [anon_sym_DQUOTE] = ACTIONS(9),
        [anon_sym_POUND] = ACTIONS(45),
        [anon_sym_DOLLAR] = ACTIONS(45),
        [anon_sym_PERCENT] = ACTIONS(45),
        [anon_sym_AMP] = ACTIONS(45),
        [anon_sym_SQUOTE] = ACTIONS(45),
        [anon_sym_LPAREN] = ACTIONS(45),
        [anon_sym_RPAREN] = ACTIONS(45),
        [anon_sym_STAR] = ACTIONS(45),
        [anon_sym_PLUS] = ACTIONS(11),
        [anon_sym_COMMA] = ACTIONS(45),
        [anon_sym_DASH] = ACTIONS(45),
        [anon_sym_DOT] = ACTIONS(45),
        [anon_sym_SLASH] = ACTIONS(45),
        [anon_sym_COLON2] = ACTIONS(45),
        [anon_sym_SEMI] = ACTIONS(45),
        [anon_sym_LT] = ACTIONS(45),
        [anon_sym_EQ] = ACTIONS(45),
        [anon_sym_GT] = ACTIONS(45),
        [anon_sym_QMARK] = ACTIONS(45),
        [anon_sym_AT] = ACTIONS(45),
        [anon_sym_BSLASH] = ACTIONS(45),
        [anon_sym_CARET] = ACTIONS(45),
        [anon_sym__] = ACTIONS(45),
        [anon_sym_BQUOTE] = ACTIONS(45),
        [anon_sym_PIPE] = ACTIONS(45),
        [anon_sym_TILDE] = ACTIONS(45),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(13),
        [anon_sym_anchor] = ACTIONS(15),
        [sym_email] = ACTIONS(45),
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
    [3] = {
        [sym_inline_macro] = STATE(3),
        [sym_replacement] = STATE(3),
        [sym__word] = STATE(3),
        [sym__punctuation] = STATE(3),
        [sym_anchor] = STATE(3),
        [sym_auto_link] = STATE(3),
        [sym_link_url] = STATE(23),
        [sym_passthrough] = STATE(3),
        [sym_xref] = STATE(3),
        [sym_emphasis] = STATE(3),
        [sym_ltalic] = STATE(3),
        [sym_monospace] = STATE(3),
        [sym_highlight] = STATE(3),
        [aux_sym_inline_repeat1] = STATE(3),
        [ts_builtin_sym_end] = ACTIONS(47),
        [anon_sym_kbd] = ACTIONS(49),
        [anon_sym_btn] = ACTIONS(49),
        [anon_sym_image] = ACTIONS(49),
        [anon_sym_icon] = ACTIONS(49),
        [anon_sym_pass] = ACTIONS(49),
        [anon_sym_link] = ACTIONS(49),
        [anon_sym_mailto] = ACTIONS(49),
        [anon_sym_menu] = ACTIONS(49),
        [anon_sym_latexmath] = ACTIONS(49),
        [anon_sym_asciimath] = ACTIONS(49),
        [anon_sym_footnote] = ACTIONS(49),
        [anon_sym_footnoteref] = ACTIONS(49),
        [anon_sym_LBRACK] = ACTIONS(52),
        [anon_sym_RBRACK] = ACTIONS(52),
        [anon_sym_LBRACE] = ACTIONS(55),
        [anon_sym_RBRACE] = ACTIONS(52),
        [sym__word_no_digit] = ACTIONS(52),
        [sym__digits] = ACTIONS(52),
        [anon_sym_BANG] = ACTIONS(52),
        [anon_sym_DQUOTE] = ACTIONS(58),
        [anon_sym_POUND] = ACTIONS(52),
        [anon_sym_DOLLAR] = ACTIONS(52),
        [anon_sym_PERCENT] = ACTIONS(52),
        [anon_sym_AMP] = ACTIONS(52),
        [anon_sym_SQUOTE] = ACTIONS(52),
        [anon_sym_LPAREN] = ACTIONS(52),
        [anon_sym_RPAREN] = ACTIONS(52),
        [anon_sym_STAR] = ACTIONS(52),
        [anon_sym_PLUS] = ACTIONS(61),
        [anon_sym_COMMA] = ACTIONS(52),
        [anon_sym_DASH] = ACTIONS(52),
        [anon_sym_DOT] = ACTIONS(52),
        [anon_sym_SLASH] = ACTIONS(52),
        [anon_sym_COLON2] = ACTIONS(52),
        [anon_sym_SEMI] = ACTIONS(52),
        [anon_sym_LT] = ACTIONS(52),
        [anon_sym_EQ] = ACTIONS(52),
        [anon_sym_GT] = ACTIONS(52),
        [anon_sym_QMARK] = ACTIONS(52),
        [anon_sym_AT] = ACTIONS(52),
        [anon_sym_BSLASH] = ACTIONS(52),
        [anon_sym_CARET] = ACTIONS(52),
        [anon_sym__] = ACTIONS(52),
        [anon_sym_BQUOTE] = ACTIONS(52),
        [anon_sym_PIPE] = ACTIONS(52),
        [anon_sym_TILDE] = ACTIONS(52),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(64),
        [anon_sym_anchor] = ACTIONS(67),
        [sym_email] = ACTIONS(52),
        [anon_sym_http] = ACTIONS(70),
        [anon_sym_https] = ACTIONS(70),
        [anon_sym_file] = ACTIONS(70),
        [anon_sym_ftp] = ACTIONS(70),
        [anon_sym_irc] = ACTIONS(70),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(73),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(76),
        [anon_sym_LT_LT] = ACTIONS(79),
        [anon_sym_xref] = ACTIONS(82),
        [anon_sym_STAR2] = ACTIONS(85),
        [anon_sym_STAR_STAR] = ACTIONS(88),
        [anon_sym__2] = ACTIONS(91),
        [anon_sym___] = ACTIONS(94),
        [anon_sym_BQUOTE2] = ACTIONS(97),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(100),
        [anon_sym_POUND2] = ACTIONS(103),
        [anon_sym_POUND_POUND] = ACTIONS(106),
    },
    [4] = {
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
        [aux_sym_replacement_token1] = ACTIONS(119),
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
        [sym_link_url] = STATE(142),
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
        [anon_sym_DOT] = ACTIONS(117),
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
        [anon_sym_http] = ACTIONS(121),
        [anon_sym_https] = ACTIONS(121),
        [anon_sym_file] = ACTIONS(121),
        [anon_sym_ftp] = ACTIONS(121),
        [anon_sym_irc] = ACTIONS(121),
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
    [7] = {
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
        [anon_sym_DOT] = ACTIONS(117),
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
        [aux_sym_anchor_token1] = ACTIONS(123),
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
    [8] = {
        [aux_sym_link_url_repeat1] = STATE(8),
        [ts_builtin_sym_end] = ACTIONS(125),
        [anon_sym_kbd] = ACTIONS(127),
        [anon_sym_btn] = ACTIONS(127),
        [anon_sym_image] = ACTIONS(127),
        [anon_sym_icon] = ACTIONS(127),
        [anon_sym_pass] = ACTIONS(127),
        [anon_sym_link] = ACTIONS(127),
        [anon_sym_mailto] = ACTIONS(127),
        [anon_sym_menu] = ACTIONS(127),
        [anon_sym_latexmath] = ACTIONS(127),
        [anon_sym_asciimath] = ACTIONS(127),
        [anon_sym_footnote] = ACTIONS(127),
        [anon_sym_footnoteref] = ACTIONS(127),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_RBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(127),
        [anon_sym_RBRACE] = ACTIONS(127),
        [sym__word_no_digit] = ACTIONS(127),
        [sym__digits] = ACTIONS(127),
        [anon_sym_BANG] = ACTIONS(127),
        [anon_sym_DQUOTE] = ACTIONS(127),
        [anon_sym_POUND] = ACTIONS(127),
        [anon_sym_DOLLAR] = ACTIONS(127),
        [anon_sym_PERCENT] = ACTIONS(127),
        [anon_sym_AMP] = ACTIONS(127),
        [anon_sym_SQUOTE] = ACTIONS(127),
        [anon_sym_LPAREN] = ACTIONS(127),
        [anon_sym_RPAREN] = ACTIONS(127),
        [anon_sym_STAR] = ACTIONS(127),
        [anon_sym_PLUS] = ACTIONS(127),
        [anon_sym_COMMA] = ACTIONS(127),
        [anon_sym_DASH] = ACTIONS(127),
        [anon_sym_DOT] = ACTIONS(129),
        [anon_sym_SLASH] = ACTIONS(127),
        [anon_sym_COLON2] = ACTIONS(127),
        [anon_sym_SEMI] = ACTIONS(127),
        [anon_sym_LT] = ACTIONS(127),
        [anon_sym_EQ] = ACTIONS(127),
        [anon_sym_GT] = ACTIONS(127),
        [anon_sym_QMARK] = ACTIONS(127),
        [anon_sym_AT] = ACTIONS(127),
        [anon_sym_BSLASH] = ACTIONS(127),
        [anon_sym_CARET] = ACTIONS(127),
        [anon_sym__] = ACTIONS(127),
        [anon_sym_BQUOTE] = ACTIONS(127),
        [anon_sym_PIPE] = ACTIONS(127),
        [anon_sym_TILDE] = ACTIONS(127),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(127),
        [anon_sym_anchor] = ACTIONS(127),
        [sym_email] = ACTIONS(127),
        [anon_sym_http] = ACTIONS(127),
        [anon_sym_https] = ACTIONS(127),
        [anon_sym_file] = ACTIONS(127),
        [anon_sym_ftp] = ACTIONS(127),
        [anon_sym_irc] = ACTIONS(127),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(127),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(127),
        [anon_sym_LT_LT] = ACTIONS(127),
        [anon_sym_xref] = ACTIONS(127),
        [anon_sym_STAR2] = ACTIONS(127),
        [anon_sym_STAR_STAR] = ACTIONS(127),
        [anon_sym__2] = ACTIONS(127),
        [anon_sym___] = ACTIONS(127),
        [anon_sym_BQUOTE2] = ACTIONS(127),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(127),
        [anon_sym_POUND2] = ACTIONS(127),
        [anon_sym_POUND_POUND] = ACTIONS(127),
    },
    [9] = {
        [aux_sym_link_url_repeat1] = STATE(4),
        [ts_builtin_sym_end] = ACTIONS(132),
        [anon_sym_kbd] = ACTIONS(134),
        [anon_sym_btn] = ACTIONS(134),
        [anon_sym_image] = ACTIONS(134),
        [anon_sym_icon] = ACTIONS(134),
        [anon_sym_pass] = ACTIONS(134),
        [anon_sym_link] = ACTIONS(134),
        [anon_sym_mailto] = ACTIONS(134),
        [anon_sym_menu] = ACTIONS(134),
        [anon_sym_latexmath] = ACTIONS(134),
        [anon_sym_asciimath] = ACTIONS(134),
        [anon_sym_footnote] = ACTIONS(134),
        [anon_sym_footnoteref] = ACTIONS(134),
        [anon_sym_LBRACK] = ACTIONS(134),
        [anon_sym_RBRACK] = ACTIONS(134),
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
        [anon_sym_DOT] = ACTIONS(113),
        [anon_sym_SLASH] = ACTIONS(134),
        [anon_sym_COLON2] = ACTIONS(134),
        [anon_sym_SEMI] = ACTIONS(134),
        [anon_sym_LT] = ACTIONS(134),
        [anon_sym_EQ] = ACTIONS(134),
        [anon_sym_GT] = ACTIONS(134),
        [anon_sym_QMARK] = ACTIONS(134),
        [anon_sym_AT] = ACTIONS(134),
        [anon_sym_BSLASH] = ACTIONS(134),
        [anon_sym_CARET] = ACTIONS(134),
        [anon_sym__] = ACTIONS(134),
        [anon_sym_BQUOTE] = ACTIONS(134),
        [anon_sym_PIPE] = ACTIONS(134),
        [anon_sym_TILDE] = ACTIONS(134),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(134),
        [anon_sym_anchor] = ACTIONS(134),
        [sym_email] = ACTIONS(134),
        [anon_sym_http] = ACTIONS(134),
        [anon_sym_https] = ACTIONS(134),
        [anon_sym_file] = ACTIONS(134),
        [anon_sym_ftp] = ACTIONS(134),
        [anon_sym_irc] = ACTIONS(134),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(134),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(134),
        [anon_sym_LT_LT] = ACTIONS(134),
        [anon_sym_xref] = ACTIONS(134),
        [anon_sym_STAR2] = ACTIONS(134),
        [anon_sym_STAR_STAR] = ACTIONS(134),
        [anon_sym__2] = ACTIONS(134),
        [anon_sym___] = ACTIONS(134),
        [anon_sym_BQUOTE2] = ACTIONS(134),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(134),
        [anon_sym_POUND2] = ACTIONS(134),
        [anon_sym_POUND_POUND] = ACTIONS(134),
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
        [ts_builtin_sym_end] = ACTIONS(125),
        [anon_sym_kbd] = ACTIONS(127),
        [anon_sym_btn] = ACTIONS(127),
        [anon_sym_image] = ACTIONS(127),
        [anon_sym_icon] = ACTIONS(127),
        [anon_sym_pass] = ACTIONS(127),
        [anon_sym_link] = ACTIONS(127),
        [anon_sym_mailto] = ACTIONS(127),
        [anon_sym_menu] = ACTIONS(127),
        [anon_sym_latexmath] = ACTIONS(127),
        [anon_sym_asciimath] = ACTIONS(127),
        [anon_sym_footnote] = ACTIONS(127),
        [anon_sym_footnoteref] = ACTIONS(127),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_RBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(127),
        [anon_sym_RBRACE] = ACTIONS(127),
        [sym__word_no_digit] = ACTIONS(127),
        [sym__digits] = ACTIONS(127),
        [anon_sym_BANG] = ACTIONS(127),
        [anon_sym_DQUOTE] = ACTIONS(127),
        [anon_sym_POUND] = ACTIONS(127),
        [anon_sym_DOLLAR] = ACTIONS(127),
        [anon_sym_PERCENT] = ACTIONS(127),
        [anon_sym_AMP] = ACTIONS(127),
        [anon_sym_SQUOTE] = ACTIONS(127),
        [anon_sym_LPAREN] = ACTIONS(127),
        [anon_sym_RPAREN] = ACTIONS(127),
        [anon_sym_STAR] = ACTIONS(127),
        [anon_sym_PLUS] = ACTIONS(127),
        [anon_sym_COMMA] = ACTIONS(127),
        [anon_sym_DASH] = ACTIONS(127),
        [anon_sym_DOT] = ACTIONS(127),
        [anon_sym_SLASH] = ACTIONS(127),
        [anon_sym_COLON2] = ACTIONS(127),
        [anon_sym_SEMI] = ACTIONS(127),
        [anon_sym_LT] = ACTIONS(127),
        [anon_sym_EQ] = ACTIONS(127),
        [anon_sym_GT] = ACTIONS(127),
        [anon_sym_QMARK] = ACTIONS(127),
        [anon_sym_AT] = ACTIONS(127),
        [anon_sym_BSLASH] = ACTIONS(127),
        [anon_sym_CARET] = ACTIONS(127),
        [anon_sym__] = ACTIONS(127),
        [anon_sym_BQUOTE] = ACTIONS(127),
        [anon_sym_PIPE] = ACTIONS(127),
        [anon_sym_TILDE] = ACTIONS(127),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(127),
        [anon_sym_anchor] = ACTIONS(127),
        [sym_email] = ACTIONS(127),
        [anon_sym_http] = ACTIONS(127),
        [anon_sym_https] = ACTIONS(127),
        [anon_sym_file] = ACTIONS(127),
        [anon_sym_ftp] = ACTIONS(127),
        [anon_sym_irc] = ACTIONS(127),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(127),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(127),
        [anon_sym_LT_LT] = ACTIONS(127),
        [anon_sym_xref] = ACTIONS(127),
        [anon_sym_STAR2] = ACTIONS(127),
        [anon_sym_STAR_STAR] = ACTIONS(127),
        [anon_sym__2] = ACTIONS(127),
        [anon_sym___] = ACTIONS(127),
        [anon_sym_BQUOTE2] = ACTIONS(127),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(127),
        [anon_sym_POUND2] = ACTIONS(127),
        [anon_sym_POUND_POUND] = ACTIONS(127),
    },
    [23] = {
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
    [24] = {
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
    [25] = {
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
    [26] = {
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
    [27] = {
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
    [28] = {
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
    [29] = {
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
    [30] = {
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
    [0] = 5,
    ACTIONS(254),
    1,
    anon_sym_RBRACK,
    STATE(48),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(51),
    1,
    sym_inline_macro,
    ACTIONS(252),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    ACTIONS(250),
    12,
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
    [28] = 5,
    ACTIONS(256),
    1,
    anon_sym_RBRACK,
    STATE(48),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(51),
    1,
    sym_inline_macro,
    ACTIONS(252),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    ACTIONS(250),
    12,
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
    [56] = 5,
    ACTIONS(258),
    1,
    anon_sym_RBRACK,
    STATE(48),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(51),
    1,
    sym_inline_macro,
    ACTIONS(252),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    ACTIONS(250),
    12,
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
    [84] = 5,
    ACTIONS(260),
    1,
    anon_sym_RBRACK,
    STATE(42),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(51),
    1,
    sym_inline_macro,
    ACTIONS(252),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    ACTIONS(250),
    12,
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
    [112] = 5,
    ACTIONS(262),
    1,
    anon_sym_RBRACK,
    STATE(40),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(51),
    1,
    sym_inline_macro,
    ACTIONS(252),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    ACTIONS(250),
    12,
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
    [140] = 5,
    ACTIONS(264),
    1,
    anon_sym_RBRACK,
    STATE(48),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(51),
    1,
    sym_inline_macro,
    ACTIONS(252),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    ACTIONS(250),
    12,
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
    [168] = 5,
    ACTIONS(266),
    1,
    anon_sym_RBRACK,
    STATE(41),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(51),
    1,
    sym_inline_macro,
    ACTIONS(252),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    ACTIONS(250),
    12,
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
    [196] = 5,
    ACTIONS(268),
    1,
    anon_sym_RBRACK,
    STATE(45),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(51),
    1,
    sym_inline_macro,
    ACTIONS(252),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    ACTIONS(250),
    12,
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
    [224] = 5,
    ACTIONS(276),
    1,
    anon_sym_RBRACK,
    STATE(48),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(51),
    1,
    sym_inline_macro,
    ACTIONS(273),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    ACTIONS(270),
    12,
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
    [252] = 1,
    ACTIONS(224),
    15,
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
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    [270] = 1,
    ACTIONS(166),
    15,
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
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    [288] = 1,
    ACTIONS(278),
    15,
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
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    [306] = 1,
    ACTIONS(216),
    15,
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
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    [324] = 1,
    ACTIONS(240),
    15,
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
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    [342] = 9,
    ACTIONS(280),
    1,
    anon_sym_STAR2,
    ACTIONS(283),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(291),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(294),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(297),
    1,
    anon_sym_POUND2,
    ACTIONS(300),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(286),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    ACTIONS(289),
    2,
    anon_sym__3,
    anon_sym___,
    STATE(54),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [375] = 9,
    ACTIONS(308),
    1,
    anon_sym__2,
    ACTIONS(311),
    1,
    anon_sym___,
    ACTIONS(314),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(317),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(320),
    1,
    anon_sym_POUND2,
    ACTIONS(323),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(303),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    ACTIONS(306),
    2,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    STATE(55),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [408] = 9,
    ACTIONS(328),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(330),
    1,
    anon_sym__2,
    ACTIONS(332),
    1,
    anon_sym___,
    ACTIONS(334),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(336),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(338),
    1,
    anon_sym_POUND2,
    ACTIONS(340),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(326),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(55),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [440] = 9,
    ACTIONS(330),
    1,
    anon_sym__2,
    ACTIONS(332),
    1,
    anon_sym___,
    ACTIONS(334),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(336),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(338),
    1,
    anon_sym_POUND2,
    ACTIONS(340),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(342),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(326),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(55),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [472] = 9,
    ACTIONS(328),
    1,
    anon_sym_STAR3,
    ACTIONS(330),
    1,
    anon_sym__2,
    ACTIONS(332),
    1,
    anon_sym___,
    ACTIONS(334),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(336),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(338),
    1,
    anon_sym_POUND2,
    ACTIONS(340),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(326),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(55),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [504] = 9,
    ACTIONS(330),
    1,
    anon_sym__2,
    ACTIONS(332),
    1,
    anon_sym___,
    ACTIONS(334),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(336),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(338),
    1,
    anon_sym_POUND2,
    ACTIONS(340),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(346),
    1,
    anon_sym_STAR3,
    ACTIONS(344),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(71),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [536] = 9,
    ACTIONS(348),
    1,
    anon_sym_STAR2,
    ACTIONS(350),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(354),
    1,
    anon_sym__3,
    ACTIONS(356),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(358),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(360),
    1,
    anon_sym_POUND2,
    ACTIONS(362),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(352),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(54),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [568] = 9,
    ACTIONS(330),
    1,
    anon_sym__2,
    ACTIONS(332),
    1,
    anon_sym___,
    ACTIONS(334),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(336),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(338),
    1,
    anon_sym_POUND2,
    ACTIONS(340),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(346),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(364),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(57),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [600] = 9,
    ACTIONS(348),
    1,
    anon_sym_STAR2,
    ACTIONS(350),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(356),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(358),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(360),
    1,
    anon_sym_POUND2,
    ACTIONS(362),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(368),
    1,
    anon_sym__3,
    ACTIONS(366),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(60),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [632] = 9,
    ACTIONS(348),
    1,
    anon_sym_STAR2,
    ACTIONS(350),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(356),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(358),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(360),
    1,
    anon_sym_POUND2,
    ACTIONS(362),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(368),
    1,
    anon_sym___,
    ACTIONS(370),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(66),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [664] = 9,
    ACTIONS(348),
    1,
    anon_sym_STAR2,
    ACTIONS(350),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(356),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(358),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(360),
    1,
    anon_sym_POUND2,
    ACTIONS(362),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(374),
    1,
    anon_sym___,
    ACTIONS(372),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(68),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [696] = 9,
    ACTIONS(348),
    1,
    anon_sym_STAR2,
    ACTIONS(350),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(356),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(358),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(360),
    1,
    anon_sym_POUND2,
    ACTIONS(362),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(374),
    1,
    anon_sym__3,
    ACTIONS(376),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(69),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [728] = 9,
    ACTIONS(348),
    1,
    anon_sym_STAR2,
    ACTIONS(350),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(354),
    1,
    anon_sym___,
    ACTIONS(356),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(358),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(360),
    1,
    anon_sym_POUND2,
    ACTIONS(362),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(352),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(54),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [760] = 9,
    ACTIONS(330),
    1,
    anon_sym__2,
    ACTIONS(332),
    1,
    anon_sym___,
    ACTIONS(334),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(336),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(338),
    1,
    anon_sym_POUND2,
    ACTIONS(340),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(380),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(378),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(56),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [792] = 9,
    ACTIONS(348),
    1,
    anon_sym_STAR2,
    ACTIONS(350),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(356),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(358),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(360),
    1,
    anon_sym_POUND2,
    ACTIONS(362),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(382),
    1,
    anon_sym___,
    ACTIONS(352),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(54),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [824] = 9,
    ACTIONS(348),
    1,
    anon_sym_STAR2,
    ACTIONS(350),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(356),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(358),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(360),
    1,
    anon_sym_POUND2,
    ACTIONS(362),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(382),
    1,
    anon_sym__3,
    ACTIONS(352),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(54),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [856] = 9,
    ACTIONS(330),
    1,
    anon_sym__2,
    ACTIONS(332),
    1,
    anon_sym___,
    ACTIONS(334),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(336),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(338),
    1,
    anon_sym_POUND2,
    ACTIONS(340),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(380),
    1,
    anon_sym_STAR3,
    ACTIONS(384),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(58),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [888] = 9,
    ACTIONS(330),
    1,
    anon_sym__2,
    ACTIONS(332),
    1,
    anon_sym___,
    ACTIONS(334),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(336),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(338),
    1,
    anon_sym_POUND2,
    ACTIONS(340),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(342),
    1,
    anon_sym_STAR3,
    ACTIONS(326),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(55),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [920] = 1,
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
    [933] = 1,
    ACTIONS(150),
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
    [946] = 1,
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
    [959] = 1,
    ACTIONS(142),
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
    [972] = 1,
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
    [985] = 1,
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
    [998] = 1,
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
    [1011] = 1,
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
    [1024] = 1,
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
    [1037] = 1,
    ACTIONS(142),
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
    [1050] = 1,
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
    [1063] = 1,
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
    [1076] = 3,
    STATE(84),
    1,
    aux_sym_xref_repeat1,
    ACTIONS(386),
    2,
    anon_sym_COMMA,
    anon_sym_GT_GT,
    ACTIONS(388),
    3,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    [1089] = 5,
    ACTIONS(391),
    1,
    aux_sym_inline_macro_token2,
    ACTIONS(393),
    1,
    anon_sym_RBRACK,
    ACTIONS(395),
    1,
    anon_sym_LBRACE,
    STATE(171),
    1,
    sym_link_label,
    STATE(90),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1106] = 5,
    ACTIONS(391),
    1,
    aux_sym_inline_macro_token2,
    ACTIONS(395),
    1,
    anon_sym_LBRACE,
    ACTIONS(397),
    1,
    anon_sym_RBRACK,
    STATE(155),
    1,
    sym_link_label,
    STATE(90),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1123] = 4,
    ACTIONS(399),
    1,
    anon_sym_COMMA,
    ACTIONS(403),
    1,
    anon_sym_GT_GT,
    STATE(84),
    1,
    aux_sym_xref_repeat1,
    ACTIONS(401),
    3,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    [1138] = 3,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(405),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    ACTIONS(408),
    2,
    anon_sym_POUND3,
    anon_sym_POUND_POUND,
    [1150] = 3,
    STATE(89),
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
    [1162] = 4,
    ACTIONS(395),
    1,
    anon_sym_LBRACE,
    ACTIONS(415),
    1,
    aux_sym_inline_macro_token2,
    ACTIONS(417),
    1,
    anon_sym_RBRACK,
    STATE(91),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1176] = 4,
    ACTIONS(419),
    1,
    aux_sym_inline_macro_token2,
    ACTIONS(422),
    1,
    anon_sym_RBRACK,
    ACTIONS(424),
    1,
    anon_sym_LBRACE,
    STATE(91),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1190] = 1,
    ACTIONS(427),
    5,
    anon_sym_COMMA,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    anon_sym_GT_GT,
    [1198] = 3,
    ACTIONS(431),
    1,
    anon_sym_BQUOTE3,
    STATE(89),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(429),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1209] = 3,
    ACTIONS(433),
    1,
    anon_sym_BQUOTE3,
    STATE(89),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(429),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1220] = 3,
    ACTIONS(437),
    1,
    anon_sym_LBRACK,
    STATE(99),
    1,
    aux_sym_inline_macro_repeat1,
    ACTIONS(435),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1231] = 3,
    ACTIONS(439),
    1,
    anon_sym_LBRACK,
    STATE(95),
    1,
    aux_sym_inline_macro_repeat1,
    ACTIONS(435),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1242] = 3,
    ACTIONS(443),
    1,
    anon_sym_POUND_POUND,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(441),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1253] = 3,
    ACTIONS(443),
    1,
    anon_sym_POUND3,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(441),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1264] = 3,
    ACTIONS(448),
    1,
    anon_sym_LBRACK,
    STATE(99),
    1,
    aux_sym_inline_macro_repeat1,
    ACTIONS(445),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1275] = 3,
    ACTIONS(450),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(89),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(429),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1286] = 3,
    ACTIONS(454),
    1,
    anon_sym_GT_GT,
    STATE(108),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(452),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [1297] = 3,
    ACTIONS(450),
    1,
    anon_sym_BQUOTE3,
    STATE(89),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(429),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1308] = 3,
    ACTIONS(458),
    1,
    anon_sym_POUND_POUND,
    STATE(97),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(456),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1319] = 3,
    ACTIONS(458),
    1,
    anon_sym_POUND3,
    STATE(98),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(460),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1330] = 3,
    ACTIONS(464),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(100),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(462),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1341] = 3,
    ACTIONS(468),
    1,
    anon_sym_RBRACK,
    STATE(110),
    1,
    aux_sym_xref_repeat3,
    ACTIONS(466),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [1352] = 3,
    ACTIONS(464),
    1,
    anon_sym_BQUOTE3,
    STATE(102),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(470),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1363] = 3,
    ACTIONS(475),
    1,
    anon_sym_GT_GT,
    STATE(108),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(472),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [1374] = 3,
    ACTIONS(477),
    1,
    anon_sym_POUND_POUND,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(441),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1385] = 3,
    ACTIONS(482),
    1,
    anon_sym_RBRACK,
    STATE(110),
    1,
    aux_sym_xref_repeat3,
    ACTIONS(479),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [1396] = 3,
    ACTIONS(477),
    1,
    anon_sym_POUND3,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(441),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1407] = 3,
    ACTIONS(484),
    1,
    anon_sym_RBRACK,
    STATE(110),
    1,
    aux_sym_xref_repeat3,
    ACTIONS(466),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [1418] = 3,
    ACTIONS(486),
    1,
    anon_sym_LBRACK,
    STATE(99),
    1,
    aux_sym_inline_macro_repeat1,
    ACTIONS(435),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1429] = 3,
    ACTIONS(488),
    1,
    anon_sym_RBRACK,
    STATE(106),
    1,
    aux_sym_xref_repeat3,
    ACTIONS(466),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [1440] = 3,
    ACTIONS(433),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(89),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(429),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1451] = 3,
    ACTIONS(490),
    1,
    anon_sym_RBRACK,
    STATE(112),
    1,
    aux_sym_xref_repeat3,
    ACTIONS(466),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [1462] = 2,
    STATE(87),
    1,
    aux_sym_xref_repeat1,
    ACTIONS(401),
    3,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    [1471] = 3,
    ACTIONS(492),
    1,
    anon_sym_LBRACK,
    STATE(99),
    1,
    aux_sym_inline_macro_repeat1,
    ACTIONS(435),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1482] = 3,
    ACTIONS(496),
    1,
    anon_sym_BQUOTE3,
    STATE(93),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(494),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1493] = 3,
    ACTIONS(498),
    1,
    anon_sym_POUND_POUND,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(441),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1504] = 3,
    ACTIONS(502),
    1,
    anon_sym_POUND_POUND,
    STATE(109),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(500),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1515] = 3,
    ACTIONS(504),
    1,
    anon_sym_DOT,
    STATE(128),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(132),
    2,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    [1526] = 3,
    ACTIONS(498),
    1,
    anon_sym_POUND3,
    STATE(88),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(441),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1537] = 3,
    ACTIONS(431),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(89),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(429),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1548] = 3,
    ACTIONS(506),
    1,
    anon_sym_LBRACK,
    STATE(113),
    1,
    aux_sym_inline_macro_repeat1,
    ACTIONS(435),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1559] = 3,
    ACTIONS(502),
    1,
    anon_sym_POUND3,
    STATE(111),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(508),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1570] = 3,
    ACTIONS(512),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(115),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(510),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1581] = 3,
    ACTIONS(504),
    1,
    anon_sym_DOT,
    STATE(132),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(109),
    2,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    [1592] = 3,
    ACTIONS(512),
    1,
    anon_sym_BQUOTE3,
    STATE(94),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(514),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1603] = 3,
    ACTIONS(496),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(124),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(516),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1614] = 3,
    ACTIONS(520),
    1,
    anon_sym_POUND3,
    STATE(123),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(518),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1625] = 3,
    ACTIONS(522),
    1,
    anon_sym_DOT,
    STATE(132),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(125),
    2,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    [1636] = 3,
    ACTIONS(520),
    1,
    anon_sym_POUND_POUND,
    STATE(120),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(525),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1647] = 3,
    ACTIONS(527),
    1,
    anon_sym_LBRACK,
    STATE(118),
    1,
    aux_sym_inline_macro_repeat1,
    ACTIONS(435),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1658] = 1,
    ACTIONS(529),
    3,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    anon_sym_LBRACK,
    [1664] = 1,
    ACTIONS(531),
    3,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    anon_sym_GT_GT,
    [1670] = 1,
    ACTIONS(533),
    3,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    [1676] = 2,
    STATE(101),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(452),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [1684] = 1,
    ACTIONS(125),
    3,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    anon_sym_DOT,
    [1690] = 1,
    ACTIONS(220),
    3,
    aux_sym_inline_macro_token2,
    anon_sym_RBRACK,
    anon_sym_LBRACE,
    [1696] = 2,
    ACTIONS(535),
    1,
    anon_sym_COMMA,
    ACTIONS(537),
    1,
    anon_sym_RBRACK_RBRACK,
    [1703] = 2,
    ACTIONS(539),
    1,
    anon_sym_LBRACK,
    ACTIONS(541),
    1,
    anon_sym_DQUOTE,
    [1710] = 1,
    ACTIONS(543),
    1,
    anon_sym_DOLLAR_DOLLAR,
    [1714] = 1,
    ACTIONS(545),
    1,
    anon_sym_COLON2,
    [1718] = 1,
    ACTIONS(547),
    1,
    sym__link_component,
    [1722] = 1,
    ACTIONS(543),
    1,
    anon_sym_PLUS_PLUS_PLUS,
    [1726] = 1,
    ACTIONS(549),
    1,
    anon_sym_RBRACE,
    [1730] = 1,
    ACTIONS(551),
    1,
    sym__link_component,
    [1734] = 1,
    ACTIONS(553),
    1,
    anon_sym_COLON2,
    [1738] = 1,
    ACTIONS(555),
    1,
    aux_sym_anchor_token2,
    [1742] = 1,
    ACTIONS(557),
    1,
    aux_sym_anchor_token1,
    [1746] = 1,
    ACTIONS(559),
    1,
    anon_sym_LBRACK,
    [1750] = 1,
    ACTIONS(561),
    1,
    anon_sym_RBRACE,
    [1754] = 1,
    ACTIONS(563),
    1,
    aux_sym_replacement_token1,
    [1758] = 1,
    ACTIONS(565),
    1,
    anon_sym_RBRACK,
    [1762] = 1,
    ACTIONS(567),
    1,
    aux_sym_anchor_token1,
    [1766] = 1,
    ACTIONS(569),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [1770] = 1,
    ACTIONS(571),
    1,
    aux_sym_anchor_token1,
    [1774] = 1,
    ACTIONS(573),
    1,
    sym__link_component,
    [1778] = 1,
    ACTIONS(575),
    1,
    aux_sym_anchor_token1,
    [1782] = 1,
    ACTIONS(577),
    1,
    anon_sym_COLON,
    [1786] = 1,
    ACTIONS(579),
    1,
    anon_sym_DQUOTE,
    [1790] = 1,
    ACTIONS(581),
    1,
    anon_sym_RBRACK,
    [1794] = 1,
    ACTIONS(583),
    1,
    ts_builtin_sym_end,
    [1798] = 1,
    ACTIONS(585),
    1,
    anon_sym_DQUOTE,
    [1802] = 1,
    ACTIONS(543),
    1,
    anon_sym_PLUS,
    [1806] = 1,
    ACTIONS(587),
    1,
    sym__link_component,
    [1810] = 1,
    ACTIONS(589),
    1,
    aux_sym_anchor_token3,
    [1814] = 1,
    ACTIONS(591),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [1818] = 1,
    ACTIONS(593),
    1,
    anon_sym_RBRACK_RBRACK,
    [1822] = 1,
    ACTIONS(595),
    1,
    anon_sym_RBRACK,
    [1826] = 1,
    ACTIONS(597),
    1,
    anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(40)] = 0,
    [SMALL_STATE(41)] = 28,
    [SMALL_STATE(42)] = 56,
    [SMALL_STATE(43)] = 84,
    [SMALL_STATE(44)] = 112,
    [SMALL_STATE(45)] = 140,
    [SMALL_STATE(46)] = 168,
    [SMALL_STATE(47)] = 196,
    [SMALL_STATE(48)] = 224,
    [SMALL_STATE(49)] = 252,
    [SMALL_STATE(50)] = 270,
    [SMALL_STATE(51)] = 288,
    [SMALL_STATE(52)] = 306,
    [SMALL_STATE(53)] = 324,
    [SMALL_STATE(54)] = 342,
    [SMALL_STATE(55)] = 375,
    [SMALL_STATE(56)] = 408,
    [SMALL_STATE(57)] = 440,
    [SMALL_STATE(58)] = 472,
    [SMALL_STATE(59)] = 504,
    [SMALL_STATE(60)] = 536,
    [SMALL_STATE(61)] = 568,
    [SMALL_STATE(62)] = 600,
    [SMALL_STATE(63)] = 632,
    [SMALL_STATE(64)] = 664,
    [SMALL_STATE(65)] = 696,
    [SMALL_STATE(66)] = 728,
    [SMALL_STATE(67)] = 760,
    [SMALL_STATE(68)] = 792,
    [SMALL_STATE(69)] = 824,
    [SMALL_STATE(70)] = 856,
    [SMALL_STATE(71)] = 888,
    [SMALL_STATE(72)] = 920,
    [SMALL_STATE(73)] = 933,
    [SMALL_STATE(74)] = 946,
    [SMALL_STATE(75)] = 959,
    [SMALL_STATE(76)] = 972,
    [SMALL_STATE(77)] = 985,
    [SMALL_STATE(78)] = 998,
    [SMALL_STATE(79)] = 1011,
    [SMALL_STATE(80)] = 1024,
    [SMALL_STATE(81)] = 1037,
    [SMALL_STATE(82)] = 1050,
    [SMALL_STATE(83)] = 1063,
    [SMALL_STATE(84)] = 1076,
    [SMALL_STATE(85)] = 1089,
    [SMALL_STATE(86)] = 1106,
    [SMALL_STATE(87)] = 1123,
    [SMALL_STATE(88)] = 1138,
    [SMALL_STATE(89)] = 1150,
    [SMALL_STATE(90)] = 1162,
    [SMALL_STATE(91)] = 1176,
    [SMALL_STATE(92)] = 1190,
    [SMALL_STATE(93)] = 1198,
    [SMALL_STATE(94)] = 1209,
    [SMALL_STATE(95)] = 1220,
    [SMALL_STATE(96)] = 1231,
    [SMALL_STATE(97)] = 1242,
    [SMALL_STATE(98)] = 1253,
    [SMALL_STATE(99)] = 1264,
    [SMALL_STATE(100)] = 1275,
    [SMALL_STATE(101)] = 1286,
    [SMALL_STATE(102)] = 1297,
    [SMALL_STATE(103)] = 1308,
    [SMALL_STATE(104)] = 1319,
    [SMALL_STATE(105)] = 1330,
    [SMALL_STATE(106)] = 1341,
    [SMALL_STATE(107)] = 1352,
    [SMALL_STATE(108)] = 1363,
    [SMALL_STATE(109)] = 1374,
    [SMALL_STATE(110)] = 1385,
    [SMALL_STATE(111)] = 1396,
    [SMALL_STATE(112)] = 1407,
    [SMALL_STATE(113)] = 1418,
    [SMALL_STATE(114)] = 1429,
    [SMALL_STATE(115)] = 1440,
    [SMALL_STATE(116)] = 1451,
    [SMALL_STATE(117)] = 1462,
    [SMALL_STATE(118)] = 1471,
    [SMALL_STATE(119)] = 1482,
    [SMALL_STATE(120)] = 1493,
    [SMALL_STATE(121)] = 1504,
    [SMALL_STATE(122)] = 1515,
    [SMALL_STATE(123)] = 1526,
    [SMALL_STATE(124)] = 1537,
    [SMALL_STATE(125)] = 1548,
    [SMALL_STATE(126)] = 1559,
    [SMALL_STATE(127)] = 1570,
    [SMALL_STATE(128)] = 1581,
    [SMALL_STATE(129)] = 1592,
    [SMALL_STATE(130)] = 1603,
    [SMALL_STATE(131)] = 1614,
    [SMALL_STATE(132)] = 1625,
    [SMALL_STATE(133)] = 1636,
    [SMALL_STATE(134)] = 1647,
    [SMALL_STATE(135)] = 1658,
    [SMALL_STATE(136)] = 1664,
    [SMALL_STATE(137)] = 1670,
    [SMALL_STATE(138)] = 1676,
    [SMALL_STATE(139)] = 1684,
    [SMALL_STATE(140)] = 1690,
    [SMALL_STATE(141)] = 1696,
    [SMALL_STATE(142)] = 1703,
    [SMALL_STATE(143)] = 1710,
    [SMALL_STATE(144)] = 1714,
    [SMALL_STATE(145)] = 1718,
    [SMALL_STATE(146)] = 1722,
    [SMALL_STATE(147)] = 1726,
    [SMALL_STATE(148)] = 1730,
    [SMALL_STATE(149)] = 1734,
    [SMALL_STATE(150)] = 1738,
    [SMALL_STATE(151)] = 1742,
    [SMALL_STATE(152)] = 1746,
    [SMALL_STATE(153)] = 1750,
    [SMALL_STATE(154)] = 1754,
    [SMALL_STATE(155)] = 1758,
    [SMALL_STATE(156)] = 1762,
    [SMALL_STATE(157)] = 1766,
    [SMALL_STATE(158)] = 1770,
    [SMALL_STATE(159)] = 1774,
    [SMALL_STATE(160)] = 1778,
    [SMALL_STATE(161)] = 1782,
    [SMALL_STATE(162)] = 1786,
    [SMALL_STATE(163)] = 1790,
    [SMALL_STATE(164)] = 1794,
    [SMALL_STATE(165)] = 1798,
    [SMALL_STATE(166)] = 1802,
    [SMALL_STATE(167)] = 1806,
    [SMALL_STATE(168)] = 1810,
    [SMALL_STATE(169)] = 1814,
    [SMALL_STATE(170)] = 1818,
    [SMALL_STATE(171)] = 1822,
    [SMALL_STATE(172)] = 1826,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(161),
    [5] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(2),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(5),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(6),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(7),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(160),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(144),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(157),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(156),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(151),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(117),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(149),
    [27] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(70),
    [29] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(67),
    [31] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(65),
    [33] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(64),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(119),
    [37] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(130),
    [39] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(131),
    [41] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(133),
    [43] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [45] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(3),
    [47] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    [49] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(161),
    [52] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(3),
    [55] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(5),
    [58] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(6),
    [61] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(7),
    [64] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(160),
    [67] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(144),
    [70] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(157),
    [73] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(156),
    [76] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(151),
    [79] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(117),
    [82] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(149),
    [85] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(70),
    [88] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(67),
    [91] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(65),
    [94] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(64),
    [97] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(119),
    [100] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(130),
    [103] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(131),
    [106] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(133),
    [109] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 4, 0, 0),
    [111] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 4, 0, 0),
    [113] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(167),
    [115] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__punctuation, 1, 0, 0),
    [117] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__punctuation, 1, 0, 0),
    [119] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(153),
    [121] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(169),
    [123] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(166),
    [125] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [127] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [129] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(167),
    [132] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 3, 0, 0),
    [134] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 3, 0, 0),
    [136] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 3, 0, 0),
    [138] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 3, 0, 0),
    [140] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 2, 0, 0),
    [142] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 2, 0, 0),
    [144] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [146] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [148] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 3, 0, 0),
    [150] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 3, 0, 0),
    [152] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [154] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [156] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [158] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [160] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 5, 0, 6),
    [162] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 5, 0, 6),
    [164] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 6, 0, 7),
    [166] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 6, 0, 7),
    [168] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 3, 0, 1),
    [170] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 3, 0, 1),
    [172] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [174] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [176] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 6, 0, 6),
    [178] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 6, 0, 6),
    [180] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 3, 0, 1),
    [182] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 3, 0, 1),
    [184] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [186] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [188] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(86),
    [190] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 5, 0, 1),
    [192] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 5, 0, 1),
    [194] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 5, 0, 0),
    [196] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 5, 0, 0),
    [198] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 5, 0, 5),
    [200] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 5, 0, 5),
    [202] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 6, 0, 8),
    [204] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 6, 0, 8),
    [206] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [208] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [210] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 5, 0, 4),
    [212] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 5, 0, 4),
    [214] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 5, 0, 3),
    [216] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 5, 0, 3),
    [218] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 0),
    [220] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 0),
    [222] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 5, 0, 2),
    [224] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 5, 0, 2),
    [226] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [228] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [230] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 4, 0, 0),
    [232] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 4, 0, 0),
    [234] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [236] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [238] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 4, 0, 0),
    [240] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 4, 0, 0),
    [242] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 2, 0, 0),
    [244] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 2, 0, 0),
    [246] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [248] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [250] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(172),
    [252] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(51),
    [254] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(17),
    [256] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(49),
    [258] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(50),
    [260] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(52),
    [262] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(31),
    [264] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(33),
    [266] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(53),
    [268] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(37),
    [270] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(172),
    [273] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(51),
    [276] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0),
    [278] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 1, 0, 0),
    [280] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(59),
    [283] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(61),
    [286] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(54),
    [289] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    [291] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(107),
    [294] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(105),
    [297] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(104),
    [300] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(103),
    [303] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(55),
    [306] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    [308] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(62),
    [311] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(63),
    [314] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(129),
    [317] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(127),
    [320] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(126),
    [323] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(121),
    [326] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(55),
    [328] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(15),
    [330] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [332] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(63),
    [334] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(129),
    [336] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(127),
    [338] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(126),
    [340] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(121),
    [342] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(77),
    [344] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(71),
    [346] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(74),
    [348] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(59),
    [350] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(61),
    [352] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(54),
    [354] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(78),
    [356] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(107),
    [358] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(105),
    [360] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(104),
    [362] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(103),
    [364] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(57),
    [366] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(60),
    [368] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(80),
    [370] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(66),
    [372] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(68),
    [374] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(39),
    [376] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(69),
    [378] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(56),
    [380] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(36),
    [382] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(14),
    [384] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(58),
    [386] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 2, 0, 0),
    [388] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 2, 0, 0),
    SHIFT_REPEAT(92),
    [391] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(90),
    [393] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(162),
    [395] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(154),
    [397] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(12),
    [399] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(138),
    [401] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(92),
    [403] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(18),
    [405] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    SHIFT_REPEAT(88),
    [408] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    [410] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    SHIFT_REPEAT(89),
    [413] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    [415] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(91),
    [417] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_label, 1, 0, 0),
    [419] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    SHIFT_REPEAT(91),
    [422] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    [424] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    SHIFT_REPEAT(154),
    [427] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 1, 0, 0),
    [429] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(89),
    [431] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(10),
    [433] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(79),
    [435] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(135),
    [437] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(43),
    [439] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(46),
    [441] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(88),
    [443] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(73),
    [445] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(135),
    [448] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 2, 0, 0),
    [450] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(83),
    [452] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(136),
    [454] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(30),
    [456] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(97),
    [458] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(82),
    [460] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(98),
    [462] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(100),
    [464] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(81),
    [466] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(137),
    [468] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(26),
    [470] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(102),
    [472] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 2, 0, 0),
    SHIFT_REPEAT(136),
    [475] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 2, 0, 0),
    [477] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(72),
    [479] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_xref_repeat3, 2, 0, 0),
    SHIFT_REPEAT(137),
    [482] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat3, 2, 0, 0),
    [484] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(27),
    [486] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(116),
    [488] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(35),
    [490] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(16),
    [492] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(44),
    [494] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(93),
    [496] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(11),
    [498] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(13),
    [500] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(109),
    [502] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(76),
    [504] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(159),
    [506] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(114),
    [508] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(111),
    [510] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(115),
    [512] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(75),
    [514] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(94),
    [516] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(124),
    [518] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(123),
    [520] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(38),
    [522] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(159),
    [525] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(120),
    [527] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(47),
    [529] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 1, 0, 0),
    [531] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 1, 0, 0),
    [533] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat3, 1, 0, 0),
    [535] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(150),
    [537] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [539] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [541] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(29),
    [543] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [545] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(158),
    [547] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [549] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(140),
    [551] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(122),
    [553] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(125),
    [555] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(170),
    [557] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(143),
    [559] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(168),
    [561] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [563] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(147),
    [565] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [567] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(146),
    [569] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(145),
    [571] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(152),
    [573] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(139),
    [575] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(141),
    [577] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(134),
    [579] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [581] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [583] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [585] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [587] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [589] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(163),
    [591] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(148),
    [593] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [595] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(165),
    [597] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
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
