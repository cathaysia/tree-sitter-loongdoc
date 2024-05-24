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
#define STATE_COUNT 178
#define LARGE_STATE_COUNT 40
#define SYMBOL_COUNT 124
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
    aux_sym_xref_repeat4 = 119,
    aux_sym_emphasis_repeat1 = 120,
    aux_sym_ltalic_repeat1 = 121,
    aux_sym_monospace_repeat1 = 122,
    aux_sym_highlight_repeat1 = 123,
    alias_sym_attr = 124,
    alias_sym_id = 125,
    alias_sym_target = 126,
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
    [aux_sym_xref_repeat4] = "xref_repeat4",
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
    [aux_sym_xref_repeat4] = aux_sym_xref_repeat4,
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
    [aux_sym_xref_repeat4] = {
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
    aux_sym_xref_repeat3,
    2,
    aux_sym_xref_repeat3,
    alias_sym_id,
    aux_sym_xref_repeat4,
    2,
    aux_sym_xref_repeat4,
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
    [44] = 40,
    [45] = 45,
    [46] = 43,
    [47] = 41,
    [48] = 42,
    [49] = 27,
    [50] = 16,
    [51] = 14,
    [52] = 10,
    [53] = 53,
    [54] = 54,
    [55] = 55,
    [56] = 56,
    [57] = 57,
    [58] = 58,
    [59] = 59,
    [60] = 56,
    [61] = 61,
    [62] = 62,
    [63] = 63,
    [64] = 57,
    [65] = 65,
    [66] = 63,
    [67] = 62,
    [68] = 61,
    [69] = 65,
    [70] = 58,
    [71] = 59,
    [72] = 38,
    [73] = 35,
    [74] = 32,
    [75] = 39,
    [76] = 36,
    [77] = 31,
    [78] = 37,
    [79] = 35,
    [80] = 31,
    [81] = 37,
    [82] = 34,
    [83] = 34,
    [84] = 84,
    [85] = 85,
    [86] = 86,
    [87] = 87,
    [88] = 86,
    [89] = 89,
    [90] = 90,
    [91] = 91,
    [92] = 84,
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
    [106] = 99,
    [107] = 98,
    [108] = 108,
    [109] = 109,
    [110] = 110,
    [111] = 111,
    [112] = 112,
    [113] = 113,
    [114] = 114,
    [115] = 115,
    [116] = 104,
    [117] = 117,
    [118] = 118,
    [119] = 105,
    [120] = 98,
    [121] = 113,
    [122] = 111,
    [123] = 24,
    [124] = 5,
    [125] = 109,
    [126] = 126,
    [127] = 104,
    [128] = 105,
    [129] = 99,
    [130] = 4,
    [131] = 131,
    [132] = 108,
    [133] = 109,
    [134] = 9,
    [135] = 111,
    [136] = 113,
    [137] = 108,
    [138] = 138,
    [139] = 139,
    [140] = 24,
    [141] = 141,
    [142] = 142,
    [143] = 19,
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
    [161] = 151,
    [162] = 162,
    [163] = 163,
    [164] = 164,
    [165] = 165,
    [166] = 166,
    [167] = 162,
    [168] = 150,
    [169] = 169,
    [170] = 170,
    [171] = 150,
    [172] = 172,
    [173] = 163,
    [174] = 174,
    [175] = 152,
    [176] = 176,
    [177] = 169,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(116);
            ADVANCE_MAP(
                ' ', 2,
                '!', 435,
                '"', 438,
                '#', 440,
                '$', 442,
                '%', 444,
                '&', 446,
                '\'', 448,
                '(', 450,
                ')', 452,
                '*', 454,
                '+', 457,
                ',', 459,
                '-', 461,
                '.', 463,
                '/', 465,
                ':', 165,
                ';', 469,
                '<', 471,
                '=', 473,
                '>', 475,
                '?', 477,
                '@', 479,
                '[', 172,
                '\\', 481,
                ']', 188,
                '^', 483,
                '_', 485,
                '`', 491,
                'a', 340,
                'b', 357,
                'f', 331,
                'h', 360,
                'i', 316,
                'k', 313,
                'l', 310,
                'm', 307,
                'p', 308,
                'x', 353,
                '{', 191,
                '|', 493,
                '}', 304,
                '~', 495,
                0x0b, 305,
                '\f', 305,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(433);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0)
                ADVANCE(432);
            END_STATE();
        case 1:
            ADVANCE_MAP(
                ' ', 2,
                '!', 435,
                '"', 438,
                '#', 440,
                '$', 442,
                '%', 444,
                '&', 446,
                '\'', 448,
                '(', 450,
                ')', 452,
                '*', 454,
                '+', 457,
                ',', 459,
                '-', 461,
                '.', 463,
                '/', 465,
                ':', 467,
                ';', 469,
                '<', 471,
                '=', 473,
                '>', 475,
                '?', 477,
                '@', 479,
                '[', 172,
                '\\', 481,
                ']', 188,
                '^', 483,
                '_', 485,
                '`', 491,
                'a', 340,
                'b', 357,
                'f', 331,
                'h', 360,
                'i', 316,
                'k', 313,
                'l', 310,
                'm', 307,
                'p', 308,
                'x', 353,
                '{', 191,
                '|', 493,
                '}', 304,
                '~', 495,
                0x0b, 305,
                '\f', 305,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(1);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(433);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0)
                ADVANCE(432);
            END_STATE();
        case 2:
            ADVANCE_MAP(
                ' ', 2,
                '!', 435,
                '"', 438,
                '#', 590,
                '$', 442,
                '%', 444,
                '&', 446,
                '\'', 448,
                '(', 450,
                ')', 452,
                '*', 551,
                '+', 457,
                ',', 459,
                '-', 461,
                '.', 463,
                '/', 465,
                ':', 467,
                ';', 469,
                '<', 471,
                '=', 473,
                '>', 475,
                '?', 477,
                '@', 479,
                '[', 172,
                '\\', 481,
                ']', 188,
                '^', 483,
                '_', 564,
                '`', 581,
                'a', 340,
                'b', 357,
                'f', 331,
                'h', 360,
                'i', 316,
                'k', 313,
                'l', 310,
                'm', 307,
                'p', 308,
                'x', 353,
                '{', 191,
                '|', 493,
                '}', 304,
                '~', 495,
                0x0b, 305,
                '\f', 305,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(1);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(433);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0)
                ADVANCE(432);
            END_STATE();
        case 3:
            ADVANCE_MAP(
                ' ', 4,
                '!', 435,
                '"', 438,
                '#', 440,
                '$', 442,
                '%', 444,
                '&', 446,
                '\'', 448,
                '(', 450,
                ')', 452,
                '*', 454,
                '+', 457,
                ',', 459,
                '-', 461,
                '.', 463,
                '/', 465,
                ':', 467,
                ';', 469,
                '<', 471,
                '=', 473,
                '>', 475,
                '?', 477,
                '@', 479,
                '[', 172,
                '\\', 481,
                ']', 188,
                '^', 483,
                '_', 487,
                '`', 491,
                'a', 402,
                'b', 419,
                'f', 393,
                'h', 422,
                'i', 378,
                'k', 375,
                'l', 372,
                'm', 369,
                'p', 370,
                'x', 415,
                '{', 191,
                '|', 493,
                '}', 304,
                '~', 495,
                0x0b, 306,
                '\f', 306,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(3);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(434);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
            if(lookahead != 0)
                ADVANCE(432);
            END_STATE();
        case 4:
            ADVANCE_MAP(
                ' ', 4,
                '!', 435,
                '"', 438,
                '#', 590,
                '$', 442,
                '%', 444,
                '&', 446,
                '\'', 448,
                '(', 450,
                ')', 452,
                '*', 551,
                '+', 457,
                ',', 459,
                '-', 461,
                '.', 463,
                '/', 465,
                ':', 467,
                ';', 469,
                '<', 471,
                '=', 473,
                '>', 475,
                '?', 477,
                '@', 479,
                '[', 172,
                '\\', 481,
                ']', 188,
                '^', 483,
                '_', 564,
                '`', 581,
                'a', 402,
                'b', 419,
                'f', 393,
                'h', 422,
                'i', 378,
                'k', 375,
                'l', 372,
                'm', 369,
                'p', 370,
                'x', 415,
                '{', 191,
                '|', 493,
                '}', 304,
                '~', 495,
                0x0b, 306,
                '\f', 306,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(3);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(434);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
            if(lookahead != 0)
                ADVANCE(432);
            END_STATE();
        case 5:
            if(lookahead == ' ')
                ADVANCE(566);
            if(lookahead == '#')
                ADVANCE(568);
            if(lookahead == '*')
                ADVANCE(569);
            if(lookahead == '\\')
                ADVANCE(570);
            if(lookahead == '_')
                ADVANCE(6);
            if(lookahead == '`')
                ADVANCE(571);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(5);
            if(('\t' <= lookahead && lookahead <= '\f'))
                ADVANCE(567);
            if(lookahead != 0)
                ADVANCE(565);
            END_STATE();
        case 6:
            if(lookahead == ' ')
                ADVANCE(573);
            if(lookahead == '_')
                ADVANCE(574);
            END_STATE();
        case 7:
            if(lookahead == ' ')
                ADVANCE(553);
            if(lookahead == '#')
                ADVANCE(555);
            if(lookahead == '*')
                ADVANCE(8);
            if(lookahead == '\\')
                ADVANCE(556);
            if(lookahead == '_')
                ADVANCE(557);
            if(lookahead == '`')
                ADVANCE(558);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(7);
            if(('\t' <= lookahead && lookahead <= '\f'))
                ADVANCE(554);
            if(lookahead != 0)
                ADVANCE(552);
            END_STATE();
        case 8:
            if(lookahead == ' ')
                ADVANCE(560);
            if(lookahead == '*')
                ADVANCE(561);
            END_STATE();
        case 9:
            if(lookahead == ' ')
                ADVANCE(595);
            if(lookahead == '#')
                ADVANCE(596);
            END_STATE();
        case 10:
            if(lookahead == ' ')
                ADVANCE(586);
            if(lookahead == '`')
                ADVANCE(587);
            END_STATE();
        case 11:
            if(lookahead == '"')
                ADVANCE(56);
            if(lookahead == '\\')
                ADVANCE(112);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(11);
            END_STATE();
        case 12:
            ADVANCE_MAP(
                '"', 437,
                '$', 14,
                '+', 18,
                ',', 459,
                '.', 463,
                ':', 467,
                '[', 171,
                ']', 68,
                '}', 303,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(12);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(502);
            END_STATE();
        case 13:
            if(lookahead == '#')
                ADVANCE(9);
            if(lookahead == '\\')
                ADVANCE(592);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(13);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(593);
            if(lookahead != 0)
                ADVANCE(591);
            END_STATE();
        case 14:
            if(lookahead == '$')
                ADVANCE(534);
            END_STATE();
        case 15:
            if(lookahead == '+')
                ADVANCE(532);
            if(lookahead == '.')
                ADVANCE(111);
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
                ADVANCE(531);
            END_STATE();
        case 17:
            if(lookahead == '+')
                ADVANCE(456);
            if(lookahead == ':')
                ADVANCE(49);
            if(lookahead == ']')
                ADVANCE(188);
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
                ADVANCE(459);
            if(lookahead == '>')
                ADVANCE(55);
            if(lookahead == '\\')
                ADVANCE(540);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(541);
            if(lookahead != 0)
                ADVANCE(539);
            END_STATE();
        case 20:
            if(lookahead == '-')
                ADVANCE(21);
            if(lookahead == '.')
                ADVANCE(110);
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
                ADVANCE(512);
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
                ADVANCE(62);
            if(lookahead == ']')
                ADVANCE(511);
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
                ADVANCE(62);
            if(lookahead == ']')
                ADVANCE(511);
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
                ADVANCE(62);
            if(lookahead == ']')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(28);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            END_STATE();
        case 27:
            if(lookahead == '-')
                ADVANCE(30);
            if(lookahead == ':')
                ADVANCE(62);
            if(lookahead == ']')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(26);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            END_STATE();
        case 28:
            if(lookahead == '-')
                ADVANCE(30);
            if(lookahead == ':')
                ADVANCE(62);
            if(lookahead == ']')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            END_STATE();
        case 29:
            if(lookahead == '-')
                ADVANCE(30);
            if(lookahead == ':')
                ADVANCE(62);
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
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 32:
            if(lookahead == '.')
                ADVANCE(111);
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
                ADVANCE(529);
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
                ADVANCE(165);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(503);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(504);
            END_STATE();
        case 54:
            if(lookahead == '>')
                ADVANCE(55);
            if(lookahead == '\\')
                ADVANCE(545);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(546);
            if(lookahead != 0)
                ADVANCE(544);
            END_STATE();
        case 55:
            if(lookahead == '>')
                ADVANCE(547);
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
                ADVANCE(171);
            if(lookahead == '\\')
                ADVANCE(167);
            if(lookahead == '{')
                ADVANCE(190);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(168);
            if(lookahead != 0)
                ADVANCE(166);
            END_STATE();
        case 59:
            if(lookahead == '[')
                ADVANCE(171);
            if(lookahead == '\\')
                ADVANCE(167);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(169);
            if(lookahead != 0)
                ADVANCE(166);
            END_STATE();
        case 60:
            if(lookahead == '\\')
                ADVANCE(61);
            if(lookahead == ']')
                ADVANCE(513);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(60);
            END_STATE();
        case 61:
            if(lookahead == '\\')
                ADVANCE(61);
            if(lookahead == ']')
                ADVANCE(513);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(60);
            END_STATE();
        case 62:
            if(lookahead == '\\')
                ADVANCE(61);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(60);
            END_STATE();
        case 63:
            if(lookahead == '\\')
                ADVANCE(298);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(295);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 64:
            ADVANCE_MAP(
                '\\', 177,
                ']', 188,
                'a', 184,
                'b', 185,
                'f', 183,
                'i', 182,
                'k', 181,
                'l', 178,
                'm', 179,
                'p', 180,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(175);
            if(lookahead != 0)
                ADVANCE(174);
            END_STATE();
        case 65:
            if(lookahead == '\\')
                ADVANCE(177);
            if(lookahead == ']')
                ADVANCE(188);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(176);
            if(lookahead != 0)
                ADVANCE(174);
            END_STATE();
        case 66:
            if(lookahead == '\\')
                ADVANCE(584);
            if(lookahead == '`')
                ADVANCE(10);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(66);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(583);
            if(lookahead != 0)
                ADVANCE(582);
            END_STATE();
        case 67:
            if(lookahead == ']')
                ADVANCE(188);
            if(lookahead == '{')
                ADVANCE(190);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(186);
            if(lookahead != 0)
                ADVANCE(174);
            END_STATE();
        case 68:
            if(lookahead == ']')
                ADVANCE(505);
            END_STATE();
        case 69:
            if(lookahead == '_')
                ADVANCE(69);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 70:
            if(lookahead == 'a')
                ADVANCE(80);
            END_STATE();
        case 71:
            if(lookahead == 'a')
                ADVANCE(102);
            END_STATE();
        case 72:
            if(lookahead == 'a')
                ADVANCE(103);
            END_STATE();
        case 73:
            if(lookahead == 'c')
                ADVANCE(85);
            END_STATE();
        case 74:
            if(lookahead == 'd')
                ADVANCE(117);
            END_STATE();
        case 75:
            if(lookahead == 'e')
                ADVANCE(108);
            END_STATE();
        case 76:
            if(lookahead == 'e')
                ADVANCE(125);
            END_STATE();
        case 77:
            if(lookahead == 'e')
                ADVANCE(160);
            END_STATE();
        case 78:
            if(lookahead == 'e')
                ADVANCE(79);
            END_STATE();
        case 79:
            if(lookahead == 'f')
                ADVANCE(161);
            END_STATE();
        case 80:
            if(lookahead == 'g')
                ADVANCE(76);
            END_STATE();
        case 81:
            if(lookahead == 'h')
                ADVANCE(153);
            END_STATE();
        case 82:
            if(lookahead == 'h')
                ADVANCE(149);
            END_STATE();
        case 83:
            if(lookahead == 'i')
                ADVANCE(87);
            END_STATE();
        case 84:
            if(lookahead == 'i')
                ADVANCE(88);
            END_STATE();
        case 85:
            if(lookahead == 'i')
                ADVANCE(84);
            END_STATE();
        case 86:
            if(lookahead == 'k')
                ADVANCE(137);
            END_STATE();
        case 87:
            if(lookahead == 'l')
                ADVANCE(104);
            END_STATE();
        case 88:
            if(lookahead == 'm')
                ADVANCE(71);
            END_STATE();
        case 89:
            if(lookahead == 'm')
                ADVANCE(72);
            END_STATE();
        case 90:
            if(lookahead == 'n')
                ADVANCE(121);
            END_STATE();
        case 91:
            if(lookahead == 'n')
                ADVANCE(86);
            END_STATE();
        case 92:
            if(lookahead == 'n')
                ADVANCE(107);
            END_STATE();
        case 93:
            if(lookahead == 'n')
                ADVANCE(129);
            END_STATE();
        case 94:
            if(lookahead == 'n')
                ADVANCE(98);
            END_STATE();
        case 95:
            if(lookahead == 'o')
                ADVANCE(141);
            END_STATE();
        case 96:
            if(lookahead == 'o')
                ADVANCE(106);
            END_STATE();
        case 97:
            if(lookahead == 'o')
                ADVANCE(93);
            END_STATE();
        case 98:
            if(lookahead == 'o')
                ADVANCE(105);
            END_STATE();
        case 99:
            if(lookahead == 's')
                ADVANCE(133);
            END_STATE();
        case 100:
            if(lookahead == 's')
                ADVANCE(99);
            END_STATE();
        case 101:
            if(lookahead == 't')
                ADVANCE(75);
            END_STATE();
        case 102:
            if(lookahead == 't')
                ADVANCE(81);
            END_STATE();
        case 103:
            if(lookahead == 't')
                ADVANCE(82);
            END_STATE();
        case 104:
            if(lookahead == 't')
                ADVANCE(95);
            END_STATE();
        case 105:
            if(lookahead == 't')
                ADVANCE(77);
            END_STATE();
        case 106:
            if(lookahead == 't')
                ADVANCE(94);
            END_STATE();
        case 107:
            if(lookahead == 'u')
                ADVANCE(145);
            END_STATE();
        case 108:
            if(lookahead == 'x')
                ADVANCE(89);
            END_STATE();
        case 109:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(109);
            if(lookahead != 0 &&
               lookahead != '.' &&
               lookahead != '>' &&
               lookahead != '[')
                ADVANCE(530);
            END_STATE();
        case 110:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(512);
            END_STATE();
        case 111:
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
        case 112:
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(11);
            END_STATE();
        case 113:
            if(eof)
                ADVANCE(116);
            ADVANCE_MAP(
                ' ', 2,
                '!', 435,
                '"', 438,
                '#', 440,
                '$', 442,
                '%', 444,
                '&', 446,
                '\'', 448,
                '(', 450,
                ')', 452,
                '*', 454,
                '+', 457,
                ',', 459,
                '-', 461,
                '.', 463,
                '/', 465,
                ':', 467,
                ';', 469,
                '<', 471,
                '=', 473,
                '>', 475,
                '?', 477,
                '@', 479,
                '[', 172,
                '\\', 481,
                ']', 188,
                '^', 483,
                '_', 485,
                '`', 491,
                'a', 340,
                'b', 357,
                'f', 331,
                'h', 360,
                'i', 316,
                'k', 313,
                'l', 310,
                'm', 307,
                'p', 308,
                'x', 353,
                '{', 191,
                '|', 493,
                '}', 304,
                '~', 495,
                0x0b, 305,
                '\f', 305,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(113);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(433);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0)
                ADVANCE(432);
            END_STATE();
        case 114:
            if(eof)
                ADVANCE(116);
            ADVANCE_MAP(
                ' ', 4,
                '!', 435,
                '"', 438,
                '#', 440,
                '$', 442,
                '%', 444,
                '&', 446,
                '\'', 448,
                '(', 450,
                ')', 452,
                '*', 454,
                '+', 457,
                ',', 459,
                '-', 461,
                '.', 463,
                '/', 465,
                ':', 467,
                ';', 469,
                '<', 471,
                '=', 473,
                '>', 475,
                '?', 477,
                '@', 479,
                '[', 172,
                '\\', 481,
                ']', 188,
                '^', 483,
                '_', 487,
                '`', 491,
                'a', 402,
                'b', 419,
                'f', 393,
                'h', 422,
                'i', 378,
                'k', 375,
                'l', 372,
                'm', 369,
                'p', 370,
                'x', 415,
                '{', 191,
                '|', 493,
                '}', 304,
                '~', 495,
                0x0b, 306,
                '\f', 306,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(114);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(434);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
            if(lookahead != 0)
                ADVANCE(432);
            END_STATE();
        case 115:
            if(eof)
                ADVANCE(116);
            ADVANCE_MAP(
                ' ', 193,
                '!', 436,
                '"', 439,
                '#', 441,
                '$', 443,
                '%', 445,
                '&', 447,
                '\'', 449,
                '(', 451,
                ')', 453,
                '*', 455,
                '+', 458,
                ',', 460,
                '-', 462,
                '.', 464,
                '/', 466,
                ':', 468,
                ';', 470,
                '<', 472,
                '=', 474,
                '>', 476,
                '?', 478,
                '@', 480,
                '[', 173,
                '\\', 482,
                ']', 189,
                '^', 484,
                '_', 489,
                '`', 492,
                'a', 242,
                'b', 259,
                'f', 233,
                'h', 262,
                'i', 218,
                'k', 215,
                'l', 212,
                'm', 209,
                'p', 210,
                'x', 255,
                '{', 192,
                '|', 494,
                '}', 304,
                '~', 496,
                0x0b, 195,
                '\f', 195,
                '\t', 194,
                '\n', 194,
                '\r', 194,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(271);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 116:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 117:
            ACCEPT_TOKEN(anon_sym_kbd);
            END_STATE();
        case 118:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 119:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 120:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 121:
            ACCEPT_TOKEN(anon_sym_btn);
            END_STATE();
        case 122:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 123:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 124:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 125:
            ACCEPT_TOKEN(anon_sym_image);
            END_STATE();
        case 126:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 127:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 128:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 129:
            ACCEPT_TOKEN(anon_sym_icon);
            END_STATE();
        case 130:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 131:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 132:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 133:
            ACCEPT_TOKEN(anon_sym_pass);
            END_STATE();
        case 134:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 135:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 136:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 137:
            ACCEPT_TOKEN(anon_sym_link);
            END_STATE();
        case 138:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 139:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 140:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 141:
            ACCEPT_TOKEN(anon_sym_mailto);
            END_STATE();
        case 142:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 143:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 144:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 145:
            ACCEPT_TOKEN(anon_sym_menu);
            END_STATE();
        case 146:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 147:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 148:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 149:
            ACCEPT_TOKEN(anon_sym_latexmath);
            END_STATE();
        case 150:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 151:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 152:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 153:
            ACCEPT_TOKEN(anon_sym_asciimath);
            END_STATE();
        case 154:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 155:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 156:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 157:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'r')
                ADVANCE(324);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 158:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'r')
                ADVANCE(386);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 159:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'r')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 160:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == 'r')
                ADVANCE(78);
            END_STATE();
        case 161:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            END_STATE();
        case 162:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 163:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 164:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 165:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 166:
            ACCEPT_TOKEN(aux_sym_inline_macro_token1);
            END_STATE();
        case 167:
            ACCEPT_TOKEN(aux_sym_inline_macro_token1);
            if(lookahead == '[')
                ADVANCE(170);
            END_STATE();
        case 168:
            ACCEPT_TOKEN(aux_sym_inline_macro_token1);
            if(lookahead == '\\')
                ADVANCE(167);
            if(lookahead == '{')
                ADVANCE(190);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(168);
            if(lookahead != 0 &&
               lookahead != '[' &&
               lookahead != '\\')
                ADVANCE(166);
            END_STATE();
        case 169:
            ACCEPT_TOKEN(aux_sym_inline_macro_token1);
            if(lookahead == '\\')
                ADVANCE(167);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(169);
            if(lookahead != 0 &&
               lookahead != '[' &&
               lookahead != '\\')
                ADVANCE(166);
            END_STATE();
        case 170:
            ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
            END_STATE();
        case 171:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 172:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(497);
            END_STATE();
        case 173:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(498);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 174:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            END_STATE();
        case 175:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            ADVANCE_MAP(
                '\\', 177,
                'a', 184,
                'b', 185,
                'f', 183,
                'i', 182,
                'k', 181,
                'l', 178,
                'm', 179,
                'p', 180,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(175);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(174);
            END_STATE();
        case 176:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == '\\')
                ADVANCE(177);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(176);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(174);
            END_STATE();
        case 177:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == ']')
                ADVANCE(187);
            END_STATE();
        case 178:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'a')
                ADVANCE(101);
            if(lookahead == 'i')
                ADVANCE(91);
            END_STATE();
        case 179:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'a')
                ADVANCE(83);
            if(lookahead == 'e')
                ADVANCE(92);
            END_STATE();
        case 180:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'a')
                ADVANCE(100);
            END_STATE();
        case 181:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'b')
                ADVANCE(74);
            END_STATE();
        case 182:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'c')
                ADVANCE(97);
            if(lookahead == 'm')
                ADVANCE(70);
            END_STATE();
        case 183:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'o')
                ADVANCE(96);
            END_STATE();
        case 184:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 's')
                ADVANCE(73);
            END_STATE();
        case 185:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 't')
                ADVANCE(90);
            END_STATE();
        case 186:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == '{')
                ADVANCE(190);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(186);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(174);
            END_STATE();
        case 187:
            ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
            END_STATE();
        case 188:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 189:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 190:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 191:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(111);
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
        case 192:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 193:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 193,
                '!', 436,
                '"', 439,
                '#', 590,
                '$', 443,
                '%', 445,
                '&', 447,
                '\'', 449,
                '(', 451,
                ')', 453,
                '*', 551,
                '+', 458,
                ',', 460,
                '-', 462,
                '.', 464,
                '/', 466,
                ':', 468,
                ';', 470,
                '<', 472,
                '=', 474,
                '>', 476,
                '?', 478,
                '@', 480,
                '[', 173,
                '\\', 482,
                ']', 189,
                '^', 484,
                '_', 564,
                '`', 581,
                'a', 242,
                'b', 259,
                'f', 233,
                'h', 262,
                'i', 218,
                'k', 215,
                'l', 212,
                'm', 209,
                'p', 210,
                'x', 255,
                '{', 192,
                '|', 494,
                '~', 496,
                0x0b, 195,
                '\f', 195,
                '\t', 194,
                '\n', 194,
                '\r', 194,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(271);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(293);
            END_STATE();
        case 194:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 193,
                '!', 436,
                '"', 439,
                '#', 441,
                '$', 443,
                '%', 445,
                '&', 447,
                '\'', 449,
                '(', 451,
                ')', 453,
                '*', 455,
                '+', 458,
                ',', 460,
                '-', 462,
                '.', 464,
                '/', 466,
                ':', 468,
                ';', 470,
                '<', 472,
                '=', 474,
                '>', 476,
                '?', 478,
                '@', 480,
                '[', 173,
                '\\', 482,
                ']', 189,
                '^', 484,
                '_', 489,
                '`', 492,
                'a', 242,
                'b', 259,
                'f', 233,
                'h', 262,
                'i', 218,
                'k', 215,
                'l', 212,
                'm', 209,
                'p', 210,
                'x', 255,
                '{', 192,
                '|', 494,
                '~', 496,
                0x0b, 195,
                '\f', 195,
                '\t', 194,
                '\n', 194,
                '\r', 194,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(271);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(293);
            END_STATE();
        case 195:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 193,
                '!', 436,
                '"', 439,
                '#', 441,
                '$', 443,
                '%', 445,
                '&', 447,
                '\'', 449,
                '(', 451,
                ')', 453,
                '*', 455,
                '+', 458,
                ',', 460,
                '-', 462,
                '.', 464,
                '/', 466,
                ':', 468,
                ';', 470,
                '<', 472,
                '=', 474,
                '>', 476,
                '?', 478,
                '@', 480,
                '[', 173,
                '\\', 482,
                ']', 189,
                '^', 484,
                '_', 490,
                '`', 492,
                'a', 242,
                'b', 259,
                'f', 233,
                'h', 262,
                'i', 218,
                'k', 215,
                'l', 212,
                'm', 209,
                'p', 210,
                'x', 255,
                '{', 192,
                '|', 494,
                '~', 496,
                0x0b, 195,
                '\f', 195,
                '\t', 194,
                '\n', 194,
                '\r', 194,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(271);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(293);
            END_STATE();
        case 196:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '"')
                ADVANCE(291);
            if(lookahead == '\\')
                ADVANCE(299);
            if(lookahead == '}')
                ADVANCE(11);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(196);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 197:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '"')
                ADVANCE(291);
            if(lookahead == '\\')
                ADVANCE(299);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(196);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 198:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '+')
                ADVANCE(533);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 199:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(200);
            if(lookahead == '.')
                ADVANCE(296);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(199);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 200:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(200);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(199);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 201:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(208);
            if(lookahead == '0')
                ADVANCE(206);
            if(lookahead == '1')
                ADVANCE(205);
            if(lookahead == '2')
                ADVANCE(202);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 202:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(208);
            if(lookahead == '5')
                ADVANCE(203);
            if(lookahead == ':')
                ADVANCE(302);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == ']')
                ADVANCE(297);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(206);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(204);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 203:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(208);
            if(lookahead == ':')
                ADVANCE(302);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == ']')
                ADVANCE(297);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(206);
            if(('6' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 204:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(208);
            if(lookahead == ':')
                ADVANCE(302);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == ']')
                ADVANCE(297);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(206);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 205:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(208);
            if(lookahead == ':')
                ADVANCE(302);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == ']')
                ADVANCE(297);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(204);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 206:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(208);
            if(lookahead == ':')
                ADVANCE(302);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == ']')
                ADVANCE(297);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 207:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(208);
            if(lookahead == ':')
                ADVANCE(302);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 208:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(208);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(207);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 209:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'a')
                ADVANCE(235);
            if(lookahead == 'e')
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
                ADVANCE(297);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 210:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'a')
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
                ADVANCE(297);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 211:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'a')
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
                ADVANCE(297);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 212:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'a')
                ADVANCE(263);
            if(lookahead == 'i')
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
                ADVANCE(297);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 213:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'a')
                ADVANCE(261);
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
                ADVANCE(297);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 214:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'a')
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
                ADVANCE(297);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 215:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'b')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 216:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'c')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 217:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'c')
                ADVANCE(528);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 218:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                '.', 294,
                '@', 292,
                '\\', 298,
                '_', 270,
                'c', 250,
                'm', 211,
                'r', 217,
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 219:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'c')
                ADVANCE(236);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 220:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'd')
                ADVANCE(120);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 221:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'e')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 222:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'e')
                ADVANCE(522);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 223:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'e')
                ADVANCE(269);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 224:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'e')
                ADVANCE(128);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 225:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'e')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 226:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'e')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 227:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'f')
                ADVANCE(550);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 228:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'f')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 229:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'g')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 230:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'h')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 231:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'h')
                ADVANCE(152);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 232:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'h')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 233:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                '.', 294,
                '@', 292,
                '\\', 298,
                '_', 270,
                'i', 238,
                'o', 252,
                't', 253,
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 234:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'i')
                ADVANCE(240);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 235:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'i')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 236:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'i')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 237:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'k')
                ADVANCE(140);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 238:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'l')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 239:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'l')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 240:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'm')
                ADVANCE(213);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 241:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'm')
                ADVANCE(214);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 242:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'n')
                ADVANCE(216);
            if(lookahead == 's')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 243:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'n')
                ADVANCE(124);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 244:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'n')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 245:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'n')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 246:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'n')
                ADVANCE(132);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 247:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'n')
                ADVANCE(251);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 248:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'o')
                ADVANCE(144);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 249:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'o')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 250:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'o')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 251:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'o')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 252:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 253:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'p')
                ADVANCE(525);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 254:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'p')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 255:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'r')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 256:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'r')
                ADVANCE(508);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 257:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 's')
                ADVANCE(136);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 258:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 's')
                ADVANCE(257);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 259:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 't')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 260:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 't')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 261:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 't')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 262:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 't')
                ADVANCE(260);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 263:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 264:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 't')
                ADVANCE(231);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 265:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 't')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 266:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 't')
                ADVANCE(248);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 267:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 't')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 268:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'u')
                ADVANCE(148);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 269:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 'x')
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 270:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 271:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '}')
                ADVANCE(32);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(271);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 272:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 273:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(201);
            if(lookahead == '5')
                ADVANCE(274);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(277);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(275);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 274:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(201);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(277);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 275:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(201);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(277);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 276:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(201);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(275);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 277:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(201);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 278:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(289);
            if(lookahead == '5')
                ADVANCE(279);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(282);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(280);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 279:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(289);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(282);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 280:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(289);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(282);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 281:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(289);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(280);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 282:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(289);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 283:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(290);
            if(lookahead == '5')
                ADVANCE(284);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(287);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(285);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 284:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(287);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 285:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(287);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 286:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(285);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 287:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(290);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 288:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(287);
            if(lookahead == '1')
                ADVANCE(286);
            if(lookahead == '2')
                ADVANCE(283);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(285);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 289:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(277);
            if(lookahead == '1')
                ADVANCE(276);
            if(lookahead == '2')
                ADVANCE(273);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(275);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 290:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(282);
            if(lookahead == '1')
                ADVANCE(281);
            if(lookahead == '2')
                ADVANCE(278);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(280);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 291:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 292:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '[')
                ADVANCE(288);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(199);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 293:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(293);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               (' ' <= lookahead && lookahead <= '@') ||
               ('[' <= lookahead && lookahead <= '`') ||
               lookahead == '{' ||
               lookahead == '|' ||
               lookahead == '~')
                ADVANCE(297);
            if(lookahead != 0 &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(293);
            END_STATE();
        case 294:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 295:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(295);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 296:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(298);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(199);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 297:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 298:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 299:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(197);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(196);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 300:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(301);
            if(lookahead == ']')
                ADVANCE(300);
            if(lookahead == '}')
                ADVANCE(60);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(300);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 301:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(301);
            if(lookahead == ']')
                ADVANCE(300);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(300);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 302:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(301);
            if(lookahead == '}')
                ADVANCE(60);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(300);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 303:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 304:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            if(lookahead == '.')
                ADVANCE(111);
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
        case 305:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                ' ', 2,
                '_', 486,
                'a', 340,
                'b', 357,
                'f', 331,
                'h', 360,
                'i', 316,
                'k', 313,
                'l', 310,
                'm', 307,
                'p', 308,
                'x', 353,
                0x0b, 305,
                '\f', 305,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 306:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                ' ', 4,
                '_', 488,
                'a', 402,
                'b', 419,
                'f', 393,
                'h', 422,
                'i', 378,
                'k', 375,
                'l', 372,
                'm', 369,
                'p', 370,
                'x', 415,
                0x0b, 306,
                '\f', 306,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 307:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'a')
                ADVANCE(333);
            if(lookahead == 'e')
                ADVANCE(343);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 308:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'a')
                ADVANCE(356);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 309:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'a')
                ADVANCE(327);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 310:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'a')
                ADVANCE(361);
            if(lookahead == 'i')
                ADVANCE(342);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 311:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'a')
                ADVANCE(359);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 312:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'a')
                ADVANCE(362);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 313:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'b')
                ADVANCE(318);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 314:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'c')
                ADVANCE(330);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 315:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'c')
                ADVANCE(526);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 316:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'c')
                ADVANCE(348);
            if(lookahead == 'm')
                ADVANCE(309);
            if(lookahead == 'r')
                ADVANCE(315);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 317:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'c')
                ADVANCE(334);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 318:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'd')
                ADVANCE(118);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 319:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'e')
                ADVANCE(325);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 320:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'e')
                ADVANCE(520);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 321:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'e')
                ADVANCE(367);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 322:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'e')
                ADVANCE(126);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 323:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'e')
                ADVANCE(157);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 324:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'e')
                ADVANCE(326);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 325:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'f')
                ADVANCE(548);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 326:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'f')
                ADVANCE(162);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 327:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'g')
                ADVANCE(322);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 328:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'h')
                ADVANCE(154);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 329:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'h')
                ADVANCE(150);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 330:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'h')
                ADVANCE(347);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 331:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'i')
                ADVANCE(336);
            if(lookahead == 'o')
                ADVANCE(350);
            if(lookahead == 't')
                ADVANCE(351);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 332:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'i')
                ADVANCE(338);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 333:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'i')
                ADVANCE(337);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 334:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'i')
                ADVANCE(332);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 335:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'k')
                ADVANCE(138);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 336:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'l')
                ADVANCE(320);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 337:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'l')
                ADVANCE(364);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 338:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'm')
                ADVANCE(311);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 339:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'm')
                ADVANCE(312);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 340:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'n')
                ADVANCE(314);
            if(lookahead == 's')
                ADVANCE(317);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 341:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'n')
                ADVANCE(122);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 342:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'n')
                ADVANCE(335);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 343:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'n')
                ADVANCE(366);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 344:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'n')
                ADVANCE(130);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 345:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'n')
                ADVANCE(349);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 346:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'o')
                ADVANCE(142);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 347:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'o')
                ADVANCE(354);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 348:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'o')
                ADVANCE(344);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 349:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'o')
                ADVANCE(365);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 350:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'o')
                ADVANCE(363);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 351:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'p')
                ADVANCE(523);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 352:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'p')
                ADVANCE(514);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 353:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'r')
                ADVANCE(319);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 354:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'r')
                ADVANCE(506);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 355:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 's')
                ADVANCE(134);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 356:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 's')
                ADVANCE(355);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 357:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 't')
                ADVANCE(341);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 358:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 't')
                ADVANCE(352);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 359:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 't')
                ADVANCE(328);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 360:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 't')
                ADVANCE(358);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 361:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 't')
                ADVANCE(321);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 362:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 't')
                ADVANCE(329);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 363:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 't')
                ADVANCE(345);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 364:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 't')
                ADVANCE(346);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 365:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 't')
                ADVANCE(323);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 366:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'u')
                ADVANCE(146);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 367:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 'x')
                ADVANCE(339);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 368:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 369:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'a')
                ADVANCE(395);
            if(lookahead == 'e')
                ADVANCE(405);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 370:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'a')
                ADVANCE(418);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 371:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'a')
                ADVANCE(389);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 372:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'a')
                ADVANCE(423);
            if(lookahead == 'i')
                ADVANCE(404);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 373:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'a')
                ADVANCE(421);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 374:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'a')
                ADVANCE(424);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 375:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'b')
                ADVANCE(380);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 376:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'c')
                ADVANCE(392);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 377:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'c')
                ADVANCE(527);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 378:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'c')
                ADVANCE(410);
            if(lookahead == 'm')
                ADVANCE(371);
            if(lookahead == 'r')
                ADVANCE(377);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 379:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'c')
                ADVANCE(396);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 380:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'd')
                ADVANCE(119);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 381:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'e')
                ADVANCE(387);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 382:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'e')
                ADVANCE(521);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 383:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'e')
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 384:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'e')
                ADVANCE(127);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 385:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'e')
                ADVANCE(158);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 386:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'e')
                ADVANCE(388);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 387:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'f')
                ADVANCE(549);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 388:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'f')
                ADVANCE(163);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 389:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'g')
                ADVANCE(384);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 390:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'h')
                ADVANCE(155);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 391:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'h')
                ADVANCE(151);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 392:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'h')
                ADVANCE(409);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 393:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'i')
                ADVANCE(398);
            if(lookahead == 'o')
                ADVANCE(412);
            if(lookahead == 't')
                ADVANCE(413);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 394:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'i')
                ADVANCE(400);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 395:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'i')
                ADVANCE(399);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 396:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'i')
                ADVANCE(394);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 397:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'k')
                ADVANCE(139);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 398:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'l')
                ADVANCE(382);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 399:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'l')
                ADVANCE(426);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 400:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'm')
                ADVANCE(373);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 401:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'm')
                ADVANCE(374);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 402:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'n')
                ADVANCE(376);
            if(lookahead == 's')
                ADVANCE(379);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 403:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'n')
                ADVANCE(123);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 404:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'n')
                ADVANCE(397);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 405:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'n')
                ADVANCE(428);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 406:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'n')
                ADVANCE(131);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 407:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'n')
                ADVANCE(411);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 408:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'o')
                ADVANCE(143);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 409:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'o')
                ADVANCE(416);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 410:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'o')
                ADVANCE(406);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 411:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'o')
                ADVANCE(427);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 412:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'o')
                ADVANCE(425);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 413:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'p')
                ADVANCE(524);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 414:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'p')
                ADVANCE(515);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 415:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'r')
                ADVANCE(381);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 416:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'r')
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 417:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 's')
                ADVANCE(135);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 418:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 's')
                ADVANCE(417);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 419:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(403);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 420:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(414);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 421:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(390);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 422:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(420);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 423:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(383);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 424:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(391);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 425:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(407);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 426:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(408);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 427:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 't')
                ADVANCE(385);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 428:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'u')
                ADVANCE(147);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 429:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 'x')
                ADVANCE(401);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 430:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 431:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(501);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(502);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 432:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(69);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 433:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(433);
            if(lookahead == '!' ||
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
                ADVANCE(502);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(500);
            END_STATE();
        case 434:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(434);
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
        case 435:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(111);
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
        case 436:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 437:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 438:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(56);
            if(lookahead == '\\')
                ADVANCE(112);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(11);
            END_STATE();
        case 439:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(291);
            if(lookahead == '\\')
                ADVANCE(299);
            if(lookahead == '}')
                ADVANCE(11);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(196);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 440:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(597);
            if(lookahead == '.')
                ADVANCE(111);
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
        case 441:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(598);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 442:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(535);
            if(lookahead == '.')
                ADVANCE(111);
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
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(536);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 444:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(111);
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
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 446:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(111);
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
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 448:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(111);
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
        case 449:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 450:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 451:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 452:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 453:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '*')
                ADVANCE(562);
            if(lookahead == '.')
                ADVANCE(111);
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
        case 455:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '*')
                ADVANCE(563);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '+')
                ADVANCE(15);
            if(lookahead == '.')
                ADVANCE(111);
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
        case 458:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '+')
                ADVANCE(198);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '}')
                ADVANCE(32);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(anon_sym_COMMA);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(111);
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
        case 462:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(anon_sym_DOT);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(111);
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
        case 466:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(anon_sym_COLON2);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(anon_sym_COLON2);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(anon_sym_SEMI);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(537);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(538);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(111);
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
        case 474:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(111);
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
        case 478:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(anon_sym_AT);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(111);
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
        case 484:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(577);
            if(lookahead == '!' ||
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
                ADVANCE(502);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(500);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(575);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(578);
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
        case 488:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(576);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(580);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(579);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '`')
                ADVANCE(588);
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
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '`')
                ADVANCE(589);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(111);
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
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(111);
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
        case 496:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(111);
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
                ADVANCE(502);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(500);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '_')
                ADVANCE(501);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(502);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(502);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(aux_sym_anchor_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(503);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(504);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(aux_sym_anchor_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ' ||
               ('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(504);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(aux_sym_anchor_token3);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(509);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(510);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(aux_sym_anchor_token3);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(510);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(sym_email);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(sym_email);
            if(lookahead == '-')
                ADVANCE(22);
            if(lookahead == '.')
                ADVANCE(110);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(512);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(sym_email);
            if(lookahead == '\\')
                ADVANCE(61);
            if(lookahead == ']')
                ADVANCE(513);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(60);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(lookahead == 's')
                ADVANCE(517);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(368);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(lookahead == 's')
                ADVANCE(518);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
            if(lookahead == 's')
                ADVANCE(519);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(sym__link_component);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '.' &&
               lookahead != '>' &&
               lookahead != '[')
                ADVANCE(530);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(111);
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
        case 533:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(111);
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
        case 536:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(297);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            if(lookahead == ',')
                ADVANCE(542);
            if(lookahead == '>')
                ADVANCE(543);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            if(lookahead == '\\')
                ADVANCE(540);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(541);
            if(lookahead != 0 &&
               lookahead != ',' &&
               lookahead != '>')
                ADVANCE(539);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(anon_sym_BSLASH_COMMA);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(anon_sym_BSLASH_GT);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            if(lookahead == '>')
                ADVANCE(543);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            if(lookahead == '\\')
                ADVANCE(545);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(546);
            if(lookahead != 0 &&
               lookahead != '>')
                ADVANCE(544);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(anon_sym_STAR2);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == ' ')
                ADVANCE(553);
            if(lookahead == '#')
                ADVANCE(590);
            if(lookahead == '\\')
                ADVANCE(556);
            if(lookahead == '_')
                ADVANCE(564);
            if(lookahead == '`')
                ADVANCE(581);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(554);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(552);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == ' ')
                ADVANCE(553);
            if(lookahead == '#')
                ADVANCE(555);
            if(lookahead == '\\')
                ADVANCE(556);
            if(lookahead == '_')
                ADVANCE(557);
            if(lookahead == '`')
                ADVANCE(558);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(554);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(552);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '#')
                ADVANCE(596);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '*')
                ADVANCE(559);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '_')
                ADVANCE(574);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '`')
                ADVANCE(587);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(anon_sym_BSLASH_STAR);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(anon_sym_STAR3);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            if(lookahead == '.')
                ADVANCE(111);
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
        case 563:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(anon_sym__2);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == ' ')
                ADVANCE(566);
            if(lookahead == '#')
                ADVANCE(590);
            if(lookahead == '*')
                ADVANCE(551);
            if(lookahead == '\\')
                ADVANCE(570);
            if(lookahead == '`')
                ADVANCE(581);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(567);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_' &&
               lookahead != '`')
                ADVANCE(565);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == ' ')
                ADVANCE(566);
            if(lookahead == '#')
                ADVANCE(568);
            if(lookahead == '*')
                ADVANCE(569);
            if(lookahead == '\\')
                ADVANCE(570);
            if(lookahead == '`')
                ADVANCE(571);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(567);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_' &&
               lookahead != '`')
                ADVANCE(565);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '#')
                ADVANCE(596);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '*')
                ADVANCE(561);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '_')
                ADVANCE(572);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '`')
                ADVANCE(587);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(anon_sym_BSLASH_);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(anon_sym__3);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(anon_sym___);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(500);
            if(lookahead == '!' ||
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
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(368);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(432);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(111);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(430);
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
                ADVANCE(432);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(111);
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
                ADVANCE(502);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(500);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(111);
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
        case 579:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
            if(lookahead == '_')
                ADVANCE(270);
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
                ADVANCE(297);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(270);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(293);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(anon_sym_BQUOTE2);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '\\')
                ADVANCE(584);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(583);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '`')
                ADVANCE(582);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '`')
                ADVANCE(585);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(anon_sym_BSLASH_BQUOTE);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(anon_sym_BQUOTE3);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            if(lookahead == '.')
                ADVANCE(111);
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
        case 589:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(anon_sym_POUND2);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '#')
                ADVANCE(594);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '\\')
                ADVANCE(592);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(593);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '#')
                ADVANCE(591);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(anon_sym_BSLASH_POUND);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(anon_sym_POUND3);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead == '.')
                ADVANCE(111);
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
        case 598:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead == '.')
                ADVANCE(294);
            if(lookahead == '@')
                ADVANCE(292);
            if(lookahead == '\\')
                ADVANCE(298);
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
                ADVANCE(272);
            if(lookahead != 0)
                ADVANCE(297);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 114 },
    [2] = { .lex_state = 114 },
    [3] = { .lex_state = 114 },
    [4] = { .lex_state = 114 },
    [5] = { .lex_state = 114 },
    [6] = { .lex_state = 115 },
    [7] = { .lex_state = 114 },
    [8] = { .lex_state = 113 },
    [9] = { .lex_state = 114 },
    [10] = { .lex_state = 114 },
    [11] = { .lex_state = 114 },
    [12] = { .lex_state = 114 },
    [13] = { .lex_state = 114 },
    [14] = { .lex_state = 114 },
    [15] = { .lex_state = 114 },
    [16] = { .lex_state = 114 },
    [17] = { .lex_state = 114 },
    [18] = { .lex_state = 114 },
    [19] = { .lex_state = 114 },
    [20] = { .lex_state = 114 },
    [21] = { .lex_state = 114 },
    [22] = { .lex_state = 114 },
    [23] = { .lex_state = 114 },
    [24] = { .lex_state = 114 },
    [25] = { .lex_state = 114 },
    [26] = { .lex_state = 114 },
    [27] = { .lex_state = 114 },
    [28] = { .lex_state = 114 },
    [29] = { .lex_state = 114 },
    [30] = { .lex_state = 114 },
    [31] = { .lex_state = 114 },
    [32] = { .lex_state = 114 },
    [33] = { .lex_state = 114 },
    [34] = { .lex_state = 114 },
    [35] = { .lex_state = 114 },
    [36] = { .lex_state = 114 },
    [37] = { .lex_state = 114 },
    [38] = { .lex_state = 114 },
    [39] = { .lex_state = 114 },
    [40] = { .lex_state = 64 },
    [41] = { .lex_state = 64 },
    [42] = { .lex_state = 64 },
    [43] = { .lex_state = 64 },
    [44] = { .lex_state = 64 },
    [45] = { .lex_state = 64 },
    [46] = { .lex_state = 64 },
    [47] = { .lex_state = 64 },
    [48] = { .lex_state = 64 },
    [49] = { .lex_state = 64 },
    [50] = { .lex_state = 64 },
    [51] = { .lex_state = 64 },
    [52] = { .lex_state = 64 },
    [53] = { .lex_state = 64 },
    [54] = { .lex_state = 5 },
    [55] = { .lex_state = 7 },
    [56] = { .lex_state = 7 },
    [57] = { .lex_state = 7 },
    [58] = { .lex_state = 5 },
    [59] = { .lex_state = 5 },
    [60] = { .lex_state = 7 },
    [61] = { .lex_state = 7 },
    [62] = { .lex_state = 5 },
    [63] = { .lex_state = 5 },
    [64] = { .lex_state = 7 },
    [65] = { .lex_state = 7 },
    [66] = { .lex_state = 5 },
    [67] = { .lex_state = 5 },
    [68] = { .lex_state = 7 },
    [69] = { .lex_state = 7 },
    [70] = { .lex_state = 5 },
    [71] = { .lex_state = 5 },
    [72] = { .lex_state = 7 },
    [73] = { .lex_state = 7 },
    [74] = { .lex_state = 5 },
    [75] = { .lex_state = 7 },
    [76] = { .lex_state = 5 },
    [77] = { .lex_state = 7 },
    [78] = { .lex_state = 7 },
    [79] = { .lex_state = 5 },
    [80] = { .lex_state = 5 },
    [81] = { .lex_state = 5 },
    [82] = { .lex_state = 5 },
    [83] = { .lex_state = 7 },
    [84] = { .lex_state = 58 },
    [85] = { .lex_state = 58 },
    [86] = { .lex_state = 58 },
    [87] = { .lex_state = 67 },
    [88] = { .lex_state = 58 },
    [89] = { .lex_state = 19 },
    [90] = { .lex_state = 19 },
    [91] = { .lex_state = 67 },
    [92] = { .lex_state = 58 },
    [93] = { .lex_state = 67 },
    [94] = { .lex_state = 19 },
    [95] = { .lex_state = 67 },
    [96] = { .lex_state = 13 },
    [97] = { .lex_state = 66 },
    [98] = { .lex_state = 66 },
    [99] = { .lex_state = 66 },
    [100] = { .lex_state = 65 },
    [101] = { .lex_state = 65 },
    [102] = { .lex_state = 59 },
    [103] = { .lex_state = 54 },
    [104] = { .lex_state = 13 },
    [105] = { .lex_state = 13 },
    [106] = { .lex_state = 66 },
    [107] = { .lex_state = 66 },
    [108] = { .lex_state = 13 },
    [109] = { .lex_state = 13 },
    [110] = { .lex_state = 54 },
    [111] = { .lex_state = 66 },
    [112] = { .lex_state = 65 },
    [113] = { .lex_state = 66 },
    [114] = { .lex_state = 65 },
    [115] = { .lex_state = 19 },
    [116] = { .lex_state = 13 },
    [117] = { .lex_state = 59 },
    [118] = { .lex_state = 65 },
    [119] = { .lex_state = 13 },
    [120] = { .lex_state = 66 },
    [121] = { .lex_state = 66 },
    [122] = { .lex_state = 66 },
    [123] = { .lex_state = 58 },
    [124] = { .lex_state = 12 },
    [125] = { .lex_state = 13 },
    [126] = { .lex_state = 58 },
    [127] = { .lex_state = 13 },
    [128] = { .lex_state = 13 },
    [129] = { .lex_state = 66 },
    [130] = { .lex_state = 12 },
    [131] = { .lex_state = 59 },
    [132] = { .lex_state = 13 },
    [133] = { .lex_state = 13 },
    [134] = { .lex_state = 12 },
    [135] = { .lex_state = 66 },
    [136] = { .lex_state = 66 },
    [137] = { .lex_state = 13 },
    [138] = { .lex_state = 54 },
    [139] = { .lex_state = 65 },
    [140] = { .lex_state = 67 },
    [141] = { .lex_state = 59 },
    [142] = { .lex_state = 54 },
    [143] = { .lex_state = 12 },
    [144] = { .lex_state = 12 },
    [145] = { .lex_state = 12 },
    [146] = { .lex_state = 17 },
    [147] = { .lex_state = 12 },
    [148] = { .lex_state = 12 },
    [149] = { .lex_state = 12 },
    [150] = { .lex_state = 12 },
    [151] = { .lex_state = 109 },
    [152] = { .lex_state = 63 },
    [153] = { .lex_state = 53 },
    [154] = { .lex_state = 12 },
    [155] = { .lex_state = 12 },
    [156] = { .lex_state = 17 },
    [157] = { .lex_state = 12 },
    [158] = { .lex_state = 0 },
    [159] = { .lex_state = 12 },
    [160] = { .lex_state = 12 },
    [161] = { .lex_state = 109 },
    [162] = { .lex_state = 109 },
    [163] = { .lex_state = 17 },
    [164] = { .lex_state = 17 },
    [165] = { .lex_state = 12 },
    [166] = { .lex_state = 509 },
    [167] = { .lex_state = 109 },
    [168] = { .lex_state = 12 },
    [169] = { .lex_state = 53 },
    [170] = { .lex_state = 17 },
    [171] = { .lex_state = 12 },
    [172] = { .lex_state = 12 },
    [173] = { .lex_state = 17 },
    [174] = { .lex_state = 12 },
    [175] = { .lex_state = 63 },
    [176] = { .lex_state = 12 },
    [177] = { .lex_state = 53 },
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
        [sym_inline] = STATE(158),
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
        [sym_link_url] = STATE(23),
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
        [sym_link_url] = STATE(23),
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
        [aux_sym_link_url_repeat1] = STATE(9),
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
        [aux_sym_link_url_repeat1] = STATE(4),
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
        [sym_link_url] = STATE(145),
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
    [16] = {
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
    [17] = {
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
    [18] = {
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
    [19] = {
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
    [20] = {
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
    [21] = {
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
    [22] = {
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
    [23] = {
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
        [anon_sym_LBRACK] = ACTIONS(184),
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
    [24] = {
        [ts_builtin_sym_end] = ACTIONS(186),
        [anon_sym_kbd] = ACTIONS(188),
        [anon_sym_btn] = ACTIONS(188),
        [anon_sym_image] = ACTIONS(188),
        [anon_sym_icon] = ACTIONS(188),
        [anon_sym_pass] = ACTIONS(188),
        [anon_sym_link] = ACTIONS(188),
        [anon_sym_mailto] = ACTIONS(188),
        [anon_sym_menu] = ACTIONS(188),
        [anon_sym_latexmath] = ACTIONS(188),
        [anon_sym_asciimath] = ACTIONS(188),
        [anon_sym_footnote] = ACTIONS(188),
        [anon_sym_footnoteref] = ACTIONS(188),
        [anon_sym_LBRACK] = ACTIONS(188),
        [anon_sym_RBRACK] = ACTIONS(188),
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
        [anon_sym_COLON2] = ACTIONS(188),
        [anon_sym_SEMI] = ACTIONS(188),
        [anon_sym_LT] = ACTIONS(188),
        [anon_sym_EQ] = ACTIONS(188),
        [anon_sym_GT] = ACTIONS(188),
        [anon_sym_QMARK] = ACTIONS(188),
        [anon_sym_AT] = ACTIONS(188),
        [anon_sym_BSLASH] = ACTIONS(188),
        [anon_sym_CARET] = ACTIONS(188),
        [anon_sym__] = ACTIONS(188),
        [anon_sym_BQUOTE] = ACTIONS(188),
        [anon_sym_PIPE] = ACTIONS(188),
        [anon_sym_TILDE] = ACTIONS(188),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(188),
        [anon_sym_anchor] = ACTIONS(188),
        [sym_email] = ACTIONS(188),
        [anon_sym_http] = ACTIONS(188),
        [anon_sym_https] = ACTIONS(188),
        [anon_sym_file] = ACTIONS(188),
        [anon_sym_ftp] = ACTIONS(188),
        [anon_sym_irc] = ACTIONS(188),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(188),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(188),
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
    [25] = {
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
    [26] = {
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
    [27] = {
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
    [28] = {
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
    [29] = {
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
    STATE(42),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(53),
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
    STATE(45),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(53),
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
    STATE(45),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(53),
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
    STATE(41),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(53),
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
    STATE(48),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(53),
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
    ACTIONS(270),
    1,
    anon_sym_RBRACK,
    STATE(45),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(53),
    1,
    sym_inline_macro,
    ACTIONS(267),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    ACTIONS(264),
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
    ACTIONS(272),
    1,
    anon_sym_RBRACK,
    STATE(47),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(53),
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
    ACTIONS(274),
    1,
    anon_sym_RBRACK,
    STATE(45),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(53),
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
    STATE(45),
    1,
    aux_sym_inline_macro_repeat2,
    STATE(53),
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
    [252] = 1,
    ACTIONS(200),
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
    ACTIONS(158),
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
    ACTIONS(154),
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
    ACTIONS(138),
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
    STATE(65),
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
    ACTIONS(344),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(342),
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
    ACTIONS(346),
    1,
    anon_sym_STAR2,
    ACTIONS(348),
    1,
    anon_sym_STAR_STAR,
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
    ACTIONS(350),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(54),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [504] = 9,
    ACTIONS(346),
    1,
    anon_sym_STAR2,
    ACTIONS(348),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(352),
    1,
    anon_sym__3,
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
    ACTIONS(350),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(54),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [536] = 9,
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
    ACTIONS(364),
    1,
    anon_sym_STAR3,
    ACTIONS(362),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(69),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
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
    ACTIONS(364),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(366),
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
    ACTIONS(346),
    1,
    anon_sym_STAR2,
    ACTIONS(348),
    1,
    anon_sym_STAR_STAR,
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
    ACTIONS(370),
    1,
    anon_sym__3,
    ACTIONS(368),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(71),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [632] = 9,
    ACTIONS(346),
    1,
    anon_sym_STAR2,
    ACTIONS(348),
    1,
    anon_sym_STAR_STAR,
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
    ACTIONS(370),
    1,
    anon_sym___,
    ACTIONS(372),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(70),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [664] = 9,
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
    ACTIONS(374),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(342),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(55),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [696] = 9,
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
    ACTIONS(374),
    1,
    anon_sym_STAR3,
    ACTIONS(342),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(55),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [728] = 9,
    ACTIONS(346),
    1,
    anon_sym_STAR2,
    ACTIONS(348),
    1,
    anon_sym_STAR_STAR,
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
    ACTIONS(378),
    1,
    anon_sym___,
    ACTIONS(376),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(58),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [760] = 9,
    ACTIONS(346),
    1,
    anon_sym_STAR2,
    ACTIONS(348),
    1,
    anon_sym_STAR_STAR,
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
    ACTIONS(378),
    1,
    anon_sym__3,
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
    [792] = 9,
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
    ACTIONS(382),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(64),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [824] = 9,
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
    ACTIONS(344),
    1,
    anon_sym_STAR3,
    ACTIONS(342),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(55),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [856] = 9,
    ACTIONS(346),
    1,
    anon_sym_STAR2,
    ACTIONS(348),
    1,
    anon_sym_STAR_STAR,
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
    anon_sym___,
    ACTIONS(350),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(54),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [888] = 9,
    ACTIONS(346),
    1,
    anon_sym_STAR2,
    ACTIONS(348),
    1,
    anon_sym_STAR_STAR,
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
    anon_sym__3,
    ACTIONS(350),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(54),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [920] = 1,
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
    [933] = 1,
    ACTIONS(232),
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
    [946] = 1,
    ACTIONS(220),
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
    [972] = 1,
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
    [985] = 1,
    ACTIONS(216),
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
    [998] = 1,
    ACTIONS(240),
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
    ACTIONS(232),
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
    [1024] = 1,
    ACTIONS(216),
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
    [1037] = 1,
    ACTIONS(240),
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
    ACTIONS(228),
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
    ACTIONS(228),
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
    [1076] = 5,
    ACTIONS(388),
    1,
    anon_sym_LBRACK,
    ACTIONS(390),
    1,
    anon_sym_LBRACE,
    STATE(86),
    1,
    aux_sym_inline_macro_repeat1,
    STATE(126),
    1,
    sym_replacement,
    ACTIONS(386),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1093] = 5,
    ACTIONS(395),
    1,
    anon_sym_LBRACK,
    ACTIONS(397),
    1,
    anon_sym_LBRACE,
    STATE(85),
    1,
    aux_sym_inline_macro_repeat1,
    STATE(126),
    1,
    sym_replacement,
    ACTIONS(392),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1110] = 5,
    ACTIONS(390),
    1,
    anon_sym_LBRACE,
    ACTIONS(400),
    1,
    anon_sym_LBRACK,
    STATE(85),
    1,
    aux_sym_inline_macro_repeat1,
    STATE(126),
    1,
    sym_replacement,
    ACTIONS(386),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1127] = 5,
    ACTIONS(402),
    1,
    aux_sym_inline_macro_token2,
    ACTIONS(404),
    1,
    anon_sym_RBRACK,
    ACTIONS(406),
    1,
    anon_sym_LBRACE,
    STATE(146),
    1,
    sym_link_label,
    STATE(93),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1144] = 5,
    ACTIONS(390),
    1,
    anon_sym_LBRACE,
    ACTIONS(408),
    1,
    anon_sym_LBRACK,
    STATE(85),
    1,
    aux_sym_inline_macro_repeat1,
    STATE(126),
    1,
    sym_replacement,
    ACTIONS(386),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1161] = 3,
    STATE(89),
    1,
    aux_sym_xref_repeat1,
    ACTIONS(410),
    2,
    anon_sym_COMMA,
    anon_sym_GT_GT,
    ACTIONS(412),
    3,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    [1174] = 4,
    ACTIONS(415),
    1,
    anon_sym_COMMA,
    ACTIONS(419),
    1,
    anon_sym_GT_GT,
    STATE(89),
    1,
    aux_sym_xref_repeat1,
    ACTIONS(417),
    3,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    [1189] = 5,
    ACTIONS(402),
    1,
    aux_sym_inline_macro_token2,
    ACTIONS(406),
    1,
    anon_sym_LBRACE,
    ACTIONS(421),
    1,
    anon_sym_RBRACK,
    STATE(164),
    1,
    sym_link_label,
    STATE(93),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1206] = 5,
    ACTIONS(390),
    1,
    anon_sym_LBRACE,
    ACTIONS(423),
    1,
    anon_sym_LBRACK,
    STATE(88),
    1,
    aux_sym_inline_macro_repeat1,
    STATE(126),
    1,
    sym_replacement,
    ACTIONS(386),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1223] = 4,
    ACTIONS(406),
    1,
    anon_sym_LBRACE,
    ACTIONS(425),
    1,
    aux_sym_inline_macro_token2,
    ACTIONS(427),
    1,
    anon_sym_RBRACK,
    STATE(95),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1237] = 1,
    ACTIONS(429),
    5,
    anon_sym_COMMA,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    anon_sym_GT_GT,
    [1245] = 4,
    ACTIONS(431),
    1,
    aux_sym_inline_macro_token2,
    ACTIONS(434),
    1,
    anon_sym_RBRACK,
    ACTIONS(436),
    1,
    anon_sym_LBRACE,
    STATE(95),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1259] = 3,
    STATE(96),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(439),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    ACTIONS(442),
    2,
    anon_sym_POUND3,
    anon_sym_POUND_POUND,
    [1271] = 3,
    STATE(97),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(444),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    ACTIONS(447),
    2,
    anon_sym_BQUOTE3,
    anon_sym_BQUOTE_BQUOTE,
    [1283] = 3,
    ACTIONS(451),
    1,
    anon_sym_BQUOTE3,
    STATE(97),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(449),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1294] = 3,
    ACTIONS(453),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(97),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(449),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1305] = 3,
    ACTIONS(457),
    1,
    anon_sym_RBRACK,
    STATE(112),
    1,
    aux_sym_xref_repeat4,
    ACTIONS(455),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [1316] = 3,
    ACTIONS(459),
    1,
    anon_sym_RBRACK,
    STATE(114),
    1,
    aux_sym_xref_repeat4,
    ACTIONS(455),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [1327] = 3,
    ACTIONS(464),
    1,
    anon_sym_LBRACK,
    STATE(102),
    1,
    aux_sym_xref_repeat3,
    ACTIONS(461),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1338] = 3,
    ACTIONS(468),
    1,
    anon_sym_GT_GT,
    STATE(110),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(466),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [1349] = 3,
    ACTIONS(472),
    1,
    anon_sym_POUND_POUND,
    STATE(96),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(470),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1360] = 3,
    ACTIONS(472),
    1,
    anon_sym_POUND3,
    STATE(96),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(470),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1371] = 3,
    ACTIONS(474),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(97),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(449),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1382] = 3,
    ACTIONS(474),
    1,
    anon_sym_BQUOTE3,
    STATE(97),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(449),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1393] = 3,
    ACTIONS(478),
    1,
    anon_sym_POUND_POUND,
    STATE(104),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(476),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1404] = 3,
    ACTIONS(478),
    1,
    anon_sym_POUND3,
    STATE(105),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(480),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1415] = 3,
    ACTIONS(485),
    1,
    anon_sym_GT_GT,
    STATE(110),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(482),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [1426] = 3,
    ACTIONS(489),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(106),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(487),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1437] = 3,
    ACTIONS(494),
    1,
    anon_sym_RBRACK,
    STATE(112),
    1,
    aux_sym_xref_repeat4,
    ACTIONS(491),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [1448] = 3,
    ACTIONS(489),
    1,
    anon_sym_BQUOTE3,
    STATE(107),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(496),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1459] = 3,
    ACTIONS(498),
    1,
    anon_sym_RBRACK,
    STATE(112),
    1,
    aux_sym_xref_repeat4,
    ACTIONS(455),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [1470] = 2,
    STATE(90),
    1,
    aux_sym_xref_repeat1,
    ACTIONS(417),
    3,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    [1479] = 3,
    ACTIONS(500),
    1,
    anon_sym_POUND_POUND,
    STATE(96),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(470),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1490] = 3,
    ACTIONS(504),
    1,
    anon_sym_LBRACK,
    STATE(102),
    1,
    aux_sym_xref_repeat3,
    ACTIONS(502),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1501] = 3,
    ACTIONS(506),
    1,
    anon_sym_RBRACK,
    STATE(100),
    1,
    aux_sym_xref_repeat4,
    ACTIONS(455),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [1512] = 3,
    ACTIONS(500),
    1,
    anon_sym_POUND3,
    STATE(96),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(470),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1523] = 3,
    ACTIONS(453),
    1,
    anon_sym_BQUOTE3,
    STATE(97),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(449),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1534] = 3,
    ACTIONS(510),
    1,
    anon_sym_BQUOTE3,
    STATE(98),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(508),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1545] = 3,
    ACTIONS(510),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(129),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(512),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1556] = 1,
    ACTIONS(188),
    4,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    anon_sym_LBRACK,
    anon_sym_LBRACE,
    [1563] = 3,
    ACTIONS(514),
    1,
    anon_sym_DOT,
    STATE(130),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(115),
    2,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    [1574] = 3,
    ACTIONS(518),
    1,
    anon_sym_POUND3,
    STATE(128),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(516),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1585] = 1,
    ACTIONS(520),
    4,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    anon_sym_LBRACK,
    anon_sym_LBRACE,
    [1592] = 3,
    ACTIONS(522),
    1,
    anon_sym_POUND_POUND,
    STATE(96),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(470),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1603] = 3,
    ACTIONS(522),
    1,
    anon_sym_POUND3,
    STATE(96),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(470),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1614] = 3,
    ACTIONS(451),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(97),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(449),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1625] = 3,
    ACTIONS(514),
    1,
    anon_sym_DOT,
    STATE(134),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(109),
    2,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    [1636] = 3,
    ACTIONS(524),
    1,
    anon_sym_LBRACK,
    STATE(117),
    1,
    aux_sym_xref_repeat3,
    ACTIONS(502),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1647] = 3,
    ACTIONS(528),
    1,
    anon_sym_POUND_POUND,
    STATE(116),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(526),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1658] = 3,
    ACTIONS(528),
    1,
    anon_sym_POUND3,
    STATE(119),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(530),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1669] = 3,
    ACTIONS(532),
    1,
    anon_sym_DOT,
    STATE(134),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(129),
    2,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    [1680] = 3,
    ACTIONS(537),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(99),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(535),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1691] = 3,
    ACTIONS(537),
    1,
    anon_sym_BQUOTE3,
    STATE(120),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(539),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1702] = 3,
    ACTIONS(518),
    1,
    anon_sym_POUND_POUND,
    STATE(127),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(541),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1713] = 2,
    STATE(103),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(466),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [1721] = 1,
    ACTIONS(543),
    3,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    [1727] = 1,
    ACTIONS(188),
    3,
    aux_sym_inline_macro_token2,
    anon_sym_RBRACK,
    anon_sym_LBRACE,
    [1733] = 1,
    ACTIONS(545),
    3,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    anon_sym_LBRACK,
    [1739] = 1,
    ACTIONS(547),
    3,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    anon_sym_GT_GT,
    [1745] = 1,
    ACTIONS(129),
    3,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    anon_sym_DOT,
    [1751] = 2,
    ACTIONS(549),
    1,
    anon_sym_COMMA,
    ACTIONS(551),
    1,
    anon_sym_RBRACK_RBRACK,
    [1758] = 2,
    ACTIONS(553),
    1,
    anon_sym_LBRACK,
    ACTIONS(555),
    1,
    anon_sym_DQUOTE,
    [1765] = 1,
    ACTIONS(557),
    1,
    anon_sym_RBRACK,
    [1769] = 1,
    ACTIONS(559),
    1,
    aux_sym_anchor_token1,
    [1773] = 1,
    ACTIONS(561),
    1,
    anon_sym_PLUS_PLUS_PLUS,
    [1777] = 1,
    ACTIONS(561),
    1,
    anon_sym_DOLLAR_DOLLAR,
    [1781] = 1,
    ACTIONS(563),
    1,
    anon_sym_RBRACE,
    [1785] = 1,
    ACTIONS(565),
    1,
    sym__link_component,
    [1789] = 1,
    ACTIONS(567),
    1,
    aux_sym_replacement_token1,
    [1793] = 1,
    ACTIONS(569),
    1,
    aux_sym_anchor_token2,
    [1797] = 1,
    ACTIONS(571),
    1,
    anon_sym_LBRACK,
    [1801] = 1,
    ACTIONS(573),
    1,
    anon_sym_COLON2,
    [1805] = 1,
    ACTIONS(561),
    1,
    anon_sym_PLUS,
    [1809] = 1,
    ACTIONS(575),
    1,
    aux_sym_anchor_token1,
    [1813] = 1,
    ACTIONS(577),
    1,
    ts_builtin_sym_end,
    [1817] = 1,
    ACTIONS(579),
    1,
    anon_sym_DQUOTE,
    [1821] = 1,
    ACTIONS(581),
    1,
    aux_sym_anchor_token1,
    [1825] = 1,
    ACTIONS(583),
    1,
    sym__link_component,
    [1829] = 1,
    ACTIONS(585),
    1,
    sym__link_component,
    [1833] = 1,
    ACTIONS(587),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [1837] = 1,
    ACTIONS(589),
    1,
    anon_sym_RBRACK,
    [1841] = 1,
    ACTIONS(591),
    1,
    anon_sym_RBRACK_RBRACK,
    [1845] = 1,
    ACTIONS(593),
    1,
    aux_sym_anchor_token3,
    [1849] = 1,
    ACTIONS(595),
    1,
    sym__link_component,
    [1853] = 1,
    ACTIONS(597),
    1,
    anon_sym_RBRACE,
    [1857] = 1,
    ACTIONS(599),
    1,
    anon_sym_COLON,
    [1861] = 1,
    ACTIONS(601),
    1,
    anon_sym_RBRACK,
    [1865] = 1,
    ACTIONS(603),
    1,
    anon_sym_RBRACE,
    [1869] = 1,
    ACTIONS(605),
    1,
    anon_sym_DQUOTE,
    [1873] = 1,
    ACTIONS(607),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [1877] = 1,
    ACTIONS(609),
    1,
    anon_sym_COLON2,
    [1881] = 1,
    ACTIONS(611),
    1,
    aux_sym_replacement_token1,
    [1885] = 1,
    ACTIONS(613),
    1,
    aux_sym_anchor_token1,
    [1889] = 1,
    ACTIONS(615),
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
    [SMALL_STATE(85)] = 1093,
    [SMALL_STATE(86)] = 1110,
    [SMALL_STATE(87)] = 1127,
    [SMALL_STATE(88)] = 1144,
    [SMALL_STATE(89)] = 1161,
    [SMALL_STATE(90)] = 1174,
    [SMALL_STATE(91)] = 1189,
    [SMALL_STATE(92)] = 1206,
    [SMALL_STATE(93)] = 1223,
    [SMALL_STATE(94)] = 1237,
    [SMALL_STATE(95)] = 1245,
    [SMALL_STATE(96)] = 1259,
    [SMALL_STATE(97)] = 1271,
    [SMALL_STATE(98)] = 1283,
    [SMALL_STATE(99)] = 1294,
    [SMALL_STATE(100)] = 1305,
    [SMALL_STATE(101)] = 1316,
    [SMALL_STATE(102)] = 1327,
    [SMALL_STATE(103)] = 1338,
    [SMALL_STATE(104)] = 1349,
    [SMALL_STATE(105)] = 1360,
    [SMALL_STATE(106)] = 1371,
    [SMALL_STATE(107)] = 1382,
    [SMALL_STATE(108)] = 1393,
    [SMALL_STATE(109)] = 1404,
    [SMALL_STATE(110)] = 1415,
    [SMALL_STATE(111)] = 1426,
    [SMALL_STATE(112)] = 1437,
    [SMALL_STATE(113)] = 1448,
    [SMALL_STATE(114)] = 1459,
    [SMALL_STATE(115)] = 1470,
    [SMALL_STATE(116)] = 1479,
    [SMALL_STATE(117)] = 1490,
    [SMALL_STATE(118)] = 1501,
    [SMALL_STATE(119)] = 1512,
    [SMALL_STATE(120)] = 1523,
    [SMALL_STATE(121)] = 1534,
    [SMALL_STATE(122)] = 1545,
    [SMALL_STATE(123)] = 1556,
    [SMALL_STATE(124)] = 1563,
    [SMALL_STATE(125)] = 1574,
    [SMALL_STATE(126)] = 1585,
    [SMALL_STATE(127)] = 1592,
    [SMALL_STATE(128)] = 1603,
    [SMALL_STATE(129)] = 1614,
    [SMALL_STATE(130)] = 1625,
    [SMALL_STATE(131)] = 1636,
    [SMALL_STATE(132)] = 1647,
    [SMALL_STATE(133)] = 1658,
    [SMALL_STATE(134)] = 1669,
    [SMALL_STATE(135)] = 1680,
    [SMALL_STATE(136)] = 1691,
    [SMALL_STATE(137)] = 1702,
    [SMALL_STATE(138)] = 1713,
    [SMALL_STATE(139)] = 1721,
    [SMALL_STATE(140)] = 1727,
    [SMALL_STATE(141)] = 1733,
    [SMALL_STATE(142)] = 1739,
    [SMALL_STATE(143)] = 1745,
    [SMALL_STATE(144)] = 1751,
    [SMALL_STATE(145)] = 1758,
    [SMALL_STATE(146)] = 1765,
    [SMALL_STATE(147)] = 1769,
    [SMALL_STATE(148)] = 1773,
    [SMALL_STATE(149)] = 1777,
    [SMALL_STATE(150)] = 1781,
    [SMALL_STATE(151)] = 1785,
    [SMALL_STATE(152)] = 1789,
    [SMALL_STATE(153)] = 1793,
    [SMALL_STATE(154)] = 1797,
    [SMALL_STATE(155)] = 1801,
    [SMALL_STATE(156)] = 1805,
    [SMALL_STATE(157)] = 1809,
    [SMALL_STATE(158)] = 1813,
    [SMALL_STATE(159)] = 1817,
    [SMALL_STATE(160)] = 1821,
    [SMALL_STATE(161)] = 1825,
    [SMALL_STATE(162)] = 1829,
    [SMALL_STATE(163)] = 1833,
    [SMALL_STATE(164)] = 1837,
    [SMALL_STATE(165)] = 1841,
    [SMALL_STATE(166)] = 1845,
    [SMALL_STATE(167)] = 1849,
    [SMALL_STATE(168)] = 1853,
    [SMALL_STATE(169)] = 1857,
    [SMALL_STATE(170)] = 1861,
    [SMALL_STATE(171)] = 1865,
    [SMALL_STATE(172)] = 1869,
    [SMALL_STATE(173)] = 1873,
    [SMALL_STATE(174)] = 1877,
    [SMALL_STATE(175)] = 1881,
    [SMALL_STATE(176)] = 1885,
    [SMALL_STATE(177)] = 1889,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(169),
    [5] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(3),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(6),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(7),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(8),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(176),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(174),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(163),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(147),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(160),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(115),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(155),
    [27] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(60),
    [29] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(61),
    [31] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [33] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(63),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(121),
    [37] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(122),
    [39] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(125),
    [41] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(137),
    [43] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    [45] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(169),
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
    SHIFT_REPEAT(176),
    [63] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(174),
    [66] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(163),
    [69] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(147),
    [72] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(160),
    [75] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(115),
    [78] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(155),
    [81] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(60),
    [84] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(61),
    [87] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(62),
    [90] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(63),
    [93] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(121),
    [96] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(122),
    [99] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(125),
    [102] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(137),
    [105] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [107] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(2),
    [109] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 4, 0, 0),
    [111] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 4, 0, 0),
    [113] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(167),
    [115] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 3, 0, 0),
    [117] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 3, 0, 0),
    [119] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__punctuation, 1, 0, 0),
    [121] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__punctuation, 1, 0, 0),
    [123] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(171),
    [125] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(173),
    [127] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(156),
    [129] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [131] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [133] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(167),
    [136] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 6, 0, 7),
    [138] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 6, 0, 7),
    [140] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [142] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [144] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 3, 0, 1),
    [146] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 3, 0, 1),
    [148] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [150] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [152] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 5, 0, 3),
    [154] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 5, 0, 3),
    [156] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 5, 0, 2),
    [158] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 5, 0, 2),
    [160] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [162] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [164] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 4, 0, 0),
    [166] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 4, 0, 0),
    [168] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 5, 0, 4),
    [170] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 5, 0, 4),
    [172] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 5, 0, 5),
    [174] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 5, 0, 5),
    [176] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 5, 0, 6),
    [178] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 5, 0, 6),
    [180] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [182] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [184] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(87),
    [186] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 0),
    [188] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 0),
    [190] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 5, 0, 1),
    [192] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 5, 0, 1),
    [194] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 6, 0, 8),
    [196] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 6, 0, 8),
    [198] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 4, 0, 0),
    [200] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 4, 0, 0),
    [202] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 6, 0, 6),
    [204] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 6, 0, 6),
    [206] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 3, 0, 1),
    [208] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 3, 0, 1),
    [210] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [212] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [214] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 2, 0, 0),
    [216] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 2, 0, 0),
    [218] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [220] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [222] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 5, 0, 0),
    [224] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 5, 0, 0),
    [226] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 3, 0, 0),
    [228] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 3, 0, 0),
    [230] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 2, 0, 0),
    [232] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 2, 0, 0),
    [234] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [236] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [238] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 3, 0, 0),
    [240] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 3, 0, 0),
    [242] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [244] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [246] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [248] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [250] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(177),
    [252] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(53),
    [254] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(51),
    [256] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(16),
    [258] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(52),
    [260] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(27),
    [262] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(14),
    [264] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(177),
    [267] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(53),
    [270] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0),
    [272] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(49),
    [274] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(50),
    [276] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(10),
    [278] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 1, 0, 0),
    [280] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(56),
    [283] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(68),
    [286] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(54),
    [289] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    [291] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(113),
    [294] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(111),
    [297] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(109),
    [300] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(108),
    [303] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(55),
    [306] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    [308] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(67),
    [311] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(66),
    [314] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(136),
    [317] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(135),
    [320] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(133),
    [323] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(132),
    [326] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(65),
    [328] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(76),
    [330] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(67),
    [332] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(66),
    [334] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(136),
    [336] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(135),
    [338] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(133),
    [340] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(132),
    [342] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(55),
    [344] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(32),
    [346] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(56),
    [348] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(68),
    [350] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(54),
    [352] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(72),
    [354] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(113),
    [356] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(111),
    [358] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(109),
    [360] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(108),
    [362] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(69),
    [364] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(36),
    [366] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(57),
    [368] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(71),
    [370] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(39),
    [372] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(70),
    [374] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(74),
    [376] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(58),
    [378] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(75),
    [380] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(59),
    [382] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(64),
    [384] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(38),
    [386] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(126),
    [388] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(43),
    [390] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(152),
    [392] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(126),
    [395] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 2, 0, 0),
    [397] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(152),
    [400] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(44),
    [402] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(93),
    [404] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(11),
    [406] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(175),
    [408] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(40),
    [410] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 2, 0, 0),
    [412] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 2, 0, 0),
    SHIFT_REPEAT(94),
    [415] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(138),
    [417] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(94),
    [419] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(29),
    [421] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(159),
    [423] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(46),
    [425] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(95),
    [427] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_label, 1, 0, 0),
    [429] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 1, 0, 0),
    [431] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    SHIFT_REPEAT(95),
    [434] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    [436] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    SHIFT_REPEAT(175),
    [439] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    SHIFT_REPEAT(96),
    [442] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    [444] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    SHIFT_REPEAT(97),
    [447] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    [449] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(97),
    [451] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(37),
    [453] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(78),
    [455] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(139),
    [457] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(21),
    [459] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(22),
    [461] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_xref_repeat3, 2, 0, 0),
    SHIFT_REPEAT(141),
    [464] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat3, 2, 0, 0),
    [466] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(142),
    [468] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(20),
    [470] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(96),
    [472] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(82),
    [474] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(81),
    [476] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(104),
    [478] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(80),
    [480] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(105),
    [482] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 2, 0, 0),
    SHIFT_REPEAT(142),
    [485] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 2, 0, 0),
    [487] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(106),
    [489] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(79),
    [491] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_xref_repeat4, 2, 0, 0),
    SHIFT_REPEAT(139),
    [494] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat4, 2, 0, 0),
    [496] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(107),
    [498] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(26),
    [500] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(83),
    [502] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(141),
    [504] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(101),
    [506] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(18),
    [508] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(98),
    [510] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(35),
    [512] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(129),
    [514] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(162),
    [516] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(128),
    [518] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(31),
    [520] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 1, 0, 0),
    [522] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(34),
    [524] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(118),
    [526] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(116),
    [528] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(77),
    [530] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(119),
    [532] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(162),
    [535] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(99),
    [537] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(73),
    [539] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(120),
    [541] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(127),
    [543] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat4, 1, 0, 0),
    [545] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat3, 1, 0, 0),
    [547] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 1, 0, 0),
    [549] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(153),
    [551] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [553] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [555] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [557] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [559] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(148),
    [561] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [563] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(123),
    [565] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(124),
    [567] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(150),
    [569] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(165),
    [571] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(166),
    [573] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(131),
    [575] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(154),
    [577] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [579] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(33),
    [581] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(149),
    [583] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [585] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(143),
    [587] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(161),
    [589] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(172),
    [591] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [593] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(170),
    [595] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [597] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(140),
    [599] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [601] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [603] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [605] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [607] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(151),
    [609] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(157),
    [611] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(168),
    [613] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(144),
    [615] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
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
