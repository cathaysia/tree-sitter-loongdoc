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
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 35
#define SYMBOL_COUNT 137
#define ALIAS_COUNT 2
#define TOKEN_COUNT 108
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
    anon_sym_kbd = 1,
    anon_sym_btn = 2,
    anon_sym_image = 3,
    anon_sym_audio = 4,
    anon_sym_video = 5,
    anon_sym_icon = 6,
    anon_sym_pass = 7,
    anon_sym_link = 8,
    anon_sym_mailto = 9,
    anon_sym_menu = 10,
    anon_sym_latexmath = 11,
    anon_sym_asciimath = 12,
    anon_sym_footnote = 13,
    anon_sym_footnoteref = 14,
    anon_sym_anchor = 15,
    anon_sym_xref = 16,
    anon_sym_ifdef = 17,
    anon_sym_ifndef = 18,
    anon_sym_ifeval = 19,
    anon_sym_endif = 20,
    anon_sym_COLON = 21,
    aux_sym_inline_macro_token1 = 22,
    anon_sym_BSLASH_LBRACK = 23,
    anon_sym_LBRACK = 24,
    aux_sym_inline_macro_token2 = 25,
    anon_sym_BSLASH_RBRACK = 26,
    anon_sym_RBRACK = 27,
    anon_sym_LBRACE = 28,
    aux_sym_replacement_token1 = 29,
    anon_sym_RBRACE = 30,
    sym__word_no_digit = 31,
    sym__digits = 32,
    anon_sym_BANG = 33,
    anon_sym_DQUOTE = 34,
    anon_sym_POUND = 35,
    anon_sym_DOLLAR = 36,
    anon_sym_PERCENT = 37,
    anon_sym_AMP = 38,
    anon_sym_SQUOTE = 39,
    anon_sym_LPAREN = 40,
    anon_sym_RPAREN = 41,
    anon_sym_STAR = 42,
    anon_sym_PLUS = 43,
    anon_sym_COMMA = 44,
    anon_sym_DASH = 45,
    anon_sym_DOT = 46,
    anon_sym_SLASH = 47,
    anon_sym_COLON2 = 48,
    anon_sym_SEMI = 49,
    anon_sym_LT = 50,
    anon_sym_EQ = 51,
    anon_sym_GT = 52,
    anon_sym_QMARK = 53,
    anon_sym_AT = 54,
    anon_sym_BSLASH = 55,
    anon_sym_CARET = 56,
    anon_sym__ = 57,
    anon_sym_BQUOTE = 58,
    anon_sym_PIPE = 59,
    anon_sym_TILDE = 60,
    anon_sym_LBRACK_LBRACK = 61,
    aux_sym_anchor_token1 = 62,
    aux_sym_anchor_token2 = 63,
    anon_sym_RBRACK_RBRACK = 64,
    sym_email = 65,
    anon_sym_http = 66,
    anon_sym_https = 67,
    anon_sym_file = 68,
    anon_sym_ftp = 69,
    anon_sym_irc = 70,
    anon_sym_COLON_SLASH_SLASH = 71,
    sym__link_component = 72,
    aux_sym_passthrough_token1 = 73,
    anon_sym_BSLASH_PLUS = 74,
    anon_sym_PLUS_PLUS_PLUS = 75,
    anon_sym_BSLASH_PLUS_PLUS_PLUS = 76,
    anon_sym_DOLLAR_DOLLAR = 77,
    aux_sym_passthrough_token2 = 78,
    anon_sym_BSLASH_DOLLAR = 79,
    anon_sym_BSLASH_DOLLAR_DOLLAR = 80,
    anon_sym_LT_LT = 81,
    aux_sym_xref_token1 = 82,
    anon_sym_BSLASH_COMMA = 83,
    anon_sym_BSLASH_GT = 84,
    aux_sym_xref_token2 = 85,
    anon_sym_GT_GT = 86,
    anon_sym_STAR2 = 87,
    aux_sym_emphasis_token1 = 88,
    anon_sym_BSLASH_STAR = 89,
    anon_sym_STAR3 = 90,
    anon_sym_STAR_STAR = 91,
    anon_sym__2 = 92,
    aux_sym_ltalic_token1 = 93,
    anon_sym_BSLASH_ = 94,
    anon_sym__3 = 95,
    anon_sym___ = 96,
    anon_sym_BQUOTE2 = 97,
    aux_sym_monospace_token1 = 98,
    anon_sym_BSLASH_BQUOTE = 99,
    anon_sym_BQUOTE3 = 100,
    anon_sym_BQUOTE_BQUOTE = 101,
    anon_sym_POUND2 = 102,
    aux_sym_highlight_token1 = 103,
    anon_sym_BSLASH_POUND = 104,
    anon_sym_POUND3 = 105,
    anon_sym_POUND_POUND = 106,
    sym__eof = 107,
    sym_inline = 108,
    sym_inline_macro = 109,
    sym_replacement = 110,
    sym__word = 111,
    sym__punctuation = 112,
    sym_anchor = 113,
    sym_auto_link = 114,
    sym_link_label = 115,
    sym_link_url = 116,
    sym_passthrough = 117,
    sym_xref = 118,
    sym_emphasis = 119,
    sym_ltalic = 120,
    sym_monospace = 121,
    sym_highlight = 122,
    aux_sym_inline_repeat1 = 123,
    aux_sym_inline_macro_repeat1 = 124,
    aux_sym_inline_macro_repeat2 = 125,
    aux_sym_link_label_repeat1 = 126,
    aux_sym_link_url_repeat1 = 127,
    aux_sym_passthrough_repeat1 = 128,
    aux_sym_passthrough_repeat2 = 129,
    aux_sym_passthrough_repeat3 = 130,
    aux_sym_xref_repeat1 = 131,
    aux_sym_xref_repeat2 = 132,
    aux_sym_emphasis_repeat1 = 133,
    aux_sym_ltalic_repeat1 = 134,
    aux_sym_monospace_repeat1 = 135,
    aux_sym_highlight_repeat1 = 136,
    alias_sym_attr = 137,
    alias_sym_target = 138,
};

static const char *const ts_symbol_names[] = {
    [ts_builtin_sym_end] = "end",
    [anon_sym_kbd] = "kbd",
    [anon_sym_btn] = "btn",
    [anon_sym_image] = "image",
    [anon_sym_audio] = "audio",
    [anon_sym_video] = "video",
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
    [anon_sym_ifdef] = "ifdef",
    [anon_sym_ifndef] = "ifndef",
    [anon_sym_ifeval] = "ifeval",
    [anon_sym_endif] = "endif",
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
    [aux_sym_anchor_token1] = "id",
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
    [aux_sym_passthrough_token1] = "passthrough_token1",
    [anon_sym_BSLASH_PLUS] = "\\+",
    [anon_sym_PLUS_PLUS_PLUS] = "+++",
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = "\\+++",
    [anon_sym_DOLLAR_DOLLAR] = "$$",
    [aux_sym_passthrough_token2] = "passthrough_token2",
    [anon_sym_BSLASH_DOLLAR] = "\\$",
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = "\\$$",
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
    [sym__eof] = "_eof",
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
    [aux_sym_passthrough_repeat1] = "passthrough_repeat1",
    [aux_sym_passthrough_repeat2] = "passthrough_repeat2",
    [aux_sym_passthrough_repeat3] = "passthrough_repeat3",
    [aux_sym_xref_repeat1] = "xref_repeat1",
    [aux_sym_xref_repeat2] = "xref_repeat2",
    [aux_sym_emphasis_repeat1] = "emphasis_repeat1",
    [aux_sym_ltalic_repeat1] = "ltalic_repeat1",
    [aux_sym_monospace_repeat1] = "monospace_repeat1",
    [aux_sym_highlight_repeat1] = "highlight_repeat1",
    [alias_sym_attr] = "attr",
    [alias_sym_target] = "target",
};

static const TSSymbol ts_symbol_map[] = {
    [ts_builtin_sym_end] = ts_builtin_sym_end,
    [anon_sym_kbd] = anon_sym_kbd,
    [anon_sym_btn] = anon_sym_btn,
    [anon_sym_image] = anon_sym_image,
    [anon_sym_audio] = anon_sym_audio,
    [anon_sym_video] = anon_sym_video,
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
    [anon_sym_ifdef] = anon_sym_ifdef,
    [anon_sym_ifndef] = anon_sym_ifndef,
    [anon_sym_ifeval] = anon_sym_ifeval,
    [anon_sym_endif] = anon_sym_endif,
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
    [aux_sym_passthrough_token1] = aux_sym_passthrough_token1,
    [anon_sym_BSLASH_PLUS] = anon_sym_BSLASH_PLUS,
    [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = anon_sym_BSLASH_PLUS_PLUS_PLUS,
    [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
    [aux_sym_passthrough_token2] = aux_sym_passthrough_token2,
    [anon_sym_BSLASH_DOLLAR] = anon_sym_BSLASH_DOLLAR,
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = anon_sym_BSLASH_DOLLAR_DOLLAR,
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
    [sym__eof] = sym__eof,
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
    [aux_sym_passthrough_repeat1] = aux_sym_passthrough_repeat1,
    [aux_sym_passthrough_repeat2] = aux_sym_passthrough_repeat2,
    [aux_sym_passthrough_repeat3] = aux_sym_passthrough_repeat3,
    [aux_sym_xref_repeat1] = aux_sym_xref_repeat1,
    [aux_sym_xref_repeat2] = aux_sym_xref_repeat2,
    [aux_sym_emphasis_repeat1] = aux_sym_emphasis_repeat1,
    [aux_sym_ltalic_repeat1] = aux_sym_ltalic_repeat1,
    [aux_sym_monospace_repeat1] = aux_sym_monospace_repeat1,
    [aux_sym_highlight_repeat1] = aux_sym_highlight_repeat1,
    [alias_sym_attr] = alias_sym_attr,
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
    [anon_sym_audio] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_video] = {
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
    [anon_sym_ifdef] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ifndef] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ifeval] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_endif] = {
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
        .visible = true,
        .named = true,
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
    [aux_sym_passthrough_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_BSLASH_PLUS] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_PLUS_PLUS_PLUS] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_DOLLAR_DOLLAR] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_passthrough_token2] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_BSLASH_DOLLAR] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = {
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
    [sym__eof] = {
        .visible = false,
        .named = true,
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
    [aux_sym_passthrough_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_passthrough_repeat2] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_passthrough_repeat3] = {
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
    [alias_sym_target] = {
        .visible = true,
        .named = true,
    },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
    [0] = { 0 },
    [1] = {
        [1] = aux_sym_anchor_token1,
    },
    [2] = {
        [3] = alias_sym_attr,
    },
    [3] = {
        [2] = alias_sym_target,
    },
    [4] = {
        [1] = aux_sym_anchor_token1,
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
    aux_sym_anchor_token1,
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
    [38] = 35,
    [39] = 39,
    [40] = 40,
    [41] = 37,
    [42] = 40,
    [43] = 36,
    [44] = 21,
    [45] = 45,
    [46] = 18,
    [47] = 27,
    [48] = 20,
    [49] = 19,
    [50] = 50,
    [51] = 51,
    [52] = 52,
    [53] = 53,
    [54] = 54,
    [55] = 52,
    [56] = 56,
    [57] = 57,
    [58] = 58,
    [59] = 59,
    [60] = 60,
    [61] = 57,
    [62] = 56,
    [63] = 54,
    [64] = 58,
    [65] = 59,
    [66] = 60,
    [67] = 53,
    [68] = 25,
    [69] = 10,
    [70] = 33,
    [71] = 11,
    [72] = 10,
    [73] = 32,
    [74] = 30,
    [75] = 30,
    [76] = 11,
    [77] = 34,
    [78] = 31,
    [79] = 25,
    [80] = 80,
    [81] = 81,
    [82] = 82,
    [83] = 83,
    [84] = 84,
    [85] = 85,
    [86] = 86,
    [87] = 87,
    [88] = 84,
    [89] = 89,
    [90] = 87,
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
    [105] = 18,
    [106] = 7,
    [107] = 98,
    [108] = 99,
    [109] = 109,
    [110] = 110,
    [111] = 111,
    [112] = 8,
    [113] = 113,
    [114] = 114,
    [115] = 115,
    [116] = 9,
    [117] = 117,
    [118] = 118,
    [119] = 101,
    [120] = 18,
    [121] = 102,
    [122] = 103,
    [123] = 111,
    [124] = 101,
    [125] = 125,
    [126] = 102,
    [127] = 103,
    [128] = 111,
    [129] = 110,
    [130] = 109,
    [131] = 98,
    [132] = 110,
    [133] = 109,
    [134] = 99,
    [135] = 135,
    [136] = 136,
    [137] = 15,
    [138] = 138,
    [139] = 139,
    [140] = 140,
    [141] = 141,
    [142] = 141,
    [143] = 143,
    [144] = 144,
    [145] = 145,
    [146] = 146,
    [147] = 143,
    [148] = 148,
    [149] = 149,
    [150] = 150,
    [151] = 151,
    [152] = 152,
    [153] = 141,
    [154] = 154,
    [155] = 145,
    [156] = 141,
    [157] = 157,
    [158] = 157,
    [159] = 144,
    [160] = 160,
    [161] = 144,
    [162] = 152,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(141);
            ADVANCE_MAP(
                '\t', 532,
                ' ', 533,
                '!', 449,
                '"', 452,
                '#', 454,
                '$', 456,
                '%', 458,
                '&', 460,
                '\'', 462,
                '(', 464,
                ')', 466,
                '*', 468,
                '+', 471,
                ',', 473,
                '-', 475,
                '.', 477,
                '/', 479,
                ':', 202,
                ';', 483,
                '<', 485,
                '=', 487,
                '>', 489,
                '?', 491,
                '@', 493,
                '[', 208,
                '\\', 496,
                ']', 226,
                '^', 498,
                '_', 500,
                '`', 504,
                'a', 414,
                'b', 434,
                'e', 420,
                'f', 401,
                'h', 437,
                'i', 375,
                'k', 372,
                'l', 369,
                'm', 367,
                'p', 365,
                'v', 405,
                'x', 430,
                '{', 229,
                '|', 506,
                '}', 362,
                '~', 508,
            );
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(138);
            if(lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(363);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(448);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead != 0)
                ADVANCE(447);
            END_STATE();
        case 1:
            ADVANCE_MAP(
                ' ', 2,
                '!', 449,
                '"', 452,
                '#', 454,
                '$', 456,
                '%', 458,
                '&', 460,
                '\'', 462,
                '(', 464,
                ')', 466,
                '*', 468,
                '+', 471,
                ',', 473,
                '-', 475,
                '.', 477,
                '/', 479,
                ':', 481,
                ';', 483,
                '<', 485,
                '=', 487,
                '>', 489,
                '?', 491,
                '@', 493,
                '[', 208,
                '\\', 495,
                ']', 226,
                '^', 498,
                '_', 500,
                '`', 504,
                'a', 414,
                'b', 434,
                'e', 420,
                'f', 401,
                'h', 437,
                'i', 375,
                'k', 372,
                'l', 369,
                'm', 367,
                'p', 365,
                'v', 405,
                'x', 430,
                '{', 229,
                '|', 506,
                '}', 362,
                '~', 508,
                0x0b, 364,
                '\f', 364,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(1);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(448);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead != 0)
                ADVANCE(447);
            END_STATE();
        case 2:
            ADVANCE_MAP(
                ' ', 2,
                '!', 449,
                '"', 452,
                '#', 600,
                '$', 456,
                '%', 458,
                '&', 460,
                '\'', 462,
                '(', 464,
                ')', 466,
                '*', 563,
                '+', 471,
                ',', 473,
                '-', 475,
                '.', 477,
                '/', 479,
                ':', 481,
                ';', 483,
                '<', 485,
                '=', 487,
                '>', 489,
                '?', 491,
                '@', 493,
                '[', 208,
                '\\', 495,
                ']', 226,
                '^', 498,
                '_', 576,
                '`', 591,
                'a', 414,
                'b', 434,
                'e', 420,
                'f', 401,
                'h', 437,
                'i', 375,
                'k', 372,
                'l', 369,
                'm', 367,
                'p', 365,
                'v', 405,
                'x', 430,
                '{', 229,
                '|', 506,
                '}', 362,
                '~', 508,
                0x0b, 364,
                '\f', 364,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(1);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(448);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead != 0)
                ADVANCE(447);
            END_STATE();
        case 3:
            if(lookahead == ' ')
                ADVANCE(578);
            if(lookahead == '#')
                ADVANCE(580);
            if(lookahead == '*')
                ADVANCE(581);
            if(lookahead == '\\')
                ADVANCE(582);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == '`')
                ADVANCE(583);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(3);
            if(('\t' <= lookahead && lookahead <= '\f'))
                ADVANCE(579);
            if(lookahead != 0)
                ADVANCE(577);
            END_STATE();
        case 4:
            if(lookahead == ' ')
                ADVANCE(585);
            if(lookahead == '_')
                ADVANCE(586);
            END_STATE();
        case 5:
            if(lookahead == ' ')
                ADVANCE(565);
            if(lookahead == '#')
                ADVANCE(567);
            if(lookahead == '*')
                ADVANCE(6);
            if(lookahead == '\\')
                ADVANCE(568);
            if(lookahead == '_')
                ADVANCE(569);
            if(lookahead == '`')
                ADVANCE(570);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(5);
            if(('\t' <= lookahead && lookahead <= '\f'))
                ADVANCE(566);
            if(lookahead != 0)
                ADVANCE(564);
            END_STATE();
        case 6:
            if(lookahead == ' ')
                ADVANCE(572);
            if(lookahead == '*')
                ADVANCE(573);
            END_STATE();
        case 7:
            if(lookahead == ' ')
                ADVANCE(605);
            if(lookahead == '#')
                ADVANCE(606);
            END_STATE();
        case 8:
            if(lookahead == ' ')
                ADVANCE(596);
            if(lookahead == '`')
                ADVANCE(597);
            END_STATE();
        case 9:
            if(lookahead == '"')
                ADVANCE(58);
            if(lookahead == '\\')
                ADVANCE(137);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(9);
            END_STATE();
        case 10:
            if(lookahead == '"')
                ADVANCE(451);
            if(lookahead == ',')
                ADVANCE(473);
            if(lookahead == '.')
                ADVANCE(477);
            if(lookahead == ':')
                ADVANCE(202);
            if(lookahead == '[')
                ADVANCE(207);
            if(lookahead == ']')
                ADVANCE(68);
            if(lookahead == '}')
                ADVANCE(361);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(11);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(512);
            END_STATE();
        case 11:
            if(lookahead == '"')
                ADVANCE(451);
            if(lookahead == ',')
                ADVANCE(473);
            if(lookahead == '.')
                ADVANCE(477);
            if(lookahead == '[')
                ADVANCE(207);
            if(lookahead == ']')
                ADVANCE(68);
            if(lookahead == '}')
                ADVANCE(361);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(11);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(512);
            END_STATE();
        case 12:
            if(lookahead == '#')
                ADVANCE(7);
            if(lookahead == '\\')
                ADVANCE(602);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(12);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(603);
            if(lookahead != 0)
                ADVANCE(601);
            END_STATE();
        case 13:
            if(lookahead == '$')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(548);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(13);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(549);
            if(lookahead != 0)
                ADVANCE(547);
            END_STATE();
        case 14:
            if(lookahead == '$')
                ADVANCE(544);
            END_STATE();
        case 15:
            if(lookahead == '+')
                ADVANCE(541);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 16:
            if(lookahead == '+')
                ADVANCE(20);
            if(lookahead == '\\')
                ADVANCE(535);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(16);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(536);
            if(lookahead != 0)
                ADVANCE(531);
            END_STATE();
        case 17:
            if(lookahead == '+')
                ADVANCE(540);
            END_STATE();
        case 18:
            if(lookahead == '+')
                ADVANCE(543);
            END_STATE();
        case 19:
            if(lookahead == '+')
                ADVANCE(470);
            if(lookahead == '\\')
                ADVANCE(534);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(19);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(537);
            if(lookahead != 0)
                ADVANCE(531);
            END_STATE();
        case 20:
            if(lookahead == '+')
                ADVANCE(17);
            END_STATE();
        case 21:
            if(lookahead == ',')
                ADVANCE(473);
            if(lookahead == '>')
                ADVANCE(57);
            if(lookahead == '\\')
                ADVANCE(555);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(556);
            if(lookahead != 0)
                ADVANCE(554);
            END_STATE();
        case 22:
            if(lookahead == '-')
                ADVANCE(23);
            if(lookahead == '.')
                ADVANCE(135);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(22);
            END_STATE();
        case 23:
            if(lookahead == '-')
                ADVANCE(23);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(22);
            END_STATE();
        case 24:
            if(lookahead == '-')
                ADVANCE(24);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(517);
            END_STATE();
        case 25:
            if(lookahead == '-')
                ADVANCE(32);
            if(lookahead == '0')
                ADVANCE(30);
            if(lookahead == '1')
                ADVANCE(29);
            if(lookahead == '2')
                ADVANCE(26);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(28);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            END_STATE();
        case 26:
            if(lookahead == '-')
                ADVANCE(32);
            if(lookahead == '5')
                ADVANCE(27);
            if(lookahead == ':')
                ADVANCE(63);
            if(lookahead == ']')
                ADVANCE(516);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(30);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(28);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            END_STATE();
        case 27:
            if(lookahead == '-')
                ADVANCE(32);
            if(lookahead == ':')
                ADVANCE(63);
            if(lookahead == ']')
                ADVANCE(516);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(30);
            if(('6' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            END_STATE();
        case 28:
            if(lookahead == '-')
                ADVANCE(32);
            if(lookahead == ':')
                ADVANCE(63);
            if(lookahead == ']')
                ADVANCE(516);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(30);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            END_STATE();
        case 29:
            if(lookahead == '-')
                ADVANCE(32);
            if(lookahead == ':')
                ADVANCE(63);
            if(lookahead == ']')
                ADVANCE(516);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(28);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            END_STATE();
        case 30:
            if(lookahead == '-')
                ADVANCE(32);
            if(lookahead == ':')
                ADVANCE(63);
            if(lookahead == ']')
                ADVANCE(516);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            END_STATE();
        case 31:
            if(lookahead == '-')
                ADVANCE(32);
            if(lookahead == ':')
                ADVANCE(63);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            END_STATE();
        case 32:
            if(lookahead == '-')
                ADVANCE(32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            END_STATE();
        case 33:
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 34:
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 35:
            if(lookahead == '.')
                ADVANCE(25);
            END_STATE();
        case 36:
            if(lookahead == '.')
                ADVANCE(25);
            if(lookahead == '5')
                ADVANCE(37);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(35);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(38);
            END_STATE();
        case 37:
            if(lookahead == '.')
                ADVANCE(25);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(35);
            END_STATE();
        case 38:
            if(lookahead == '.')
                ADVANCE(25);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(35);
            END_STATE();
        case 39:
            if(lookahead == '.')
                ADVANCE(25);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(38);
            END_STATE();
        case 40:
            if(lookahead == '.')
                ADVANCE(53);
            END_STATE();
        case 41:
            if(lookahead == '.')
                ADVANCE(53);
            if(lookahead == '5')
                ADVANCE(42);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(40);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(43);
            END_STATE();
        case 42:
            if(lookahead == '.')
                ADVANCE(53);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(40);
            END_STATE();
        case 43:
            if(lookahead == '.')
                ADVANCE(53);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(40);
            END_STATE();
        case 44:
            if(lookahead == '.')
                ADVANCE(53);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(43);
            END_STATE();
        case 45:
            if(lookahead == '.')
                ADVANCE(54);
            END_STATE();
        case 46:
            if(lookahead == '.')
                ADVANCE(54);
            if(lookahead == '5')
                ADVANCE(47);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(45);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(48);
            END_STATE();
        case 47:
            if(lookahead == '.')
                ADVANCE(54);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(45);
            END_STATE();
        case 48:
            if(lookahead == '.')
                ADVANCE(54);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(45);
            END_STATE();
        case 49:
            if(lookahead == '.')
                ADVANCE(54);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(48);
            END_STATE();
        case 50:
            if(lookahead == '/')
                ADVANCE(529);
            END_STATE();
        case 51:
            if(lookahead == '/')
                ADVANCE(50);
            END_STATE();
        case 52:
            if(lookahead == '0')
                ADVANCE(45);
            if(lookahead == '1')
                ADVANCE(49);
            if(lookahead == '2')
                ADVANCE(46);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(48);
            END_STATE();
        case 53:
            if(lookahead == '0')
                ADVANCE(35);
            if(lookahead == '1')
                ADVANCE(39);
            if(lookahead == '2')
                ADVANCE(36);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(38);
            END_STATE();
        case 54:
            if(lookahead == '0')
                ADVANCE(40);
            if(lookahead == '1')
                ADVANCE(44);
            if(lookahead == '2')
                ADVANCE(41);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(43);
            END_STATE();
        case 55:
            if(lookahead == ':')
                ADVANCE(51);
            if(lookahead == ']')
                ADVANCE(226);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(55);
            END_STATE();
        case 56:
            if(lookahead == '>')
                ADVANCE(57);
            if(lookahead == '\\')
                ADVANCE(560);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(561);
            if(lookahead != 0)
                ADVANCE(559);
            END_STATE();
        case 57:
            if(lookahead == '>')
                ADVANCE(562);
            END_STATE();
        case 58:
            if(lookahead == '@')
                ADVANCE(59);
            END_STATE();
        case 59:
            if(lookahead == '[')
                ADVANCE(52);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(22);
            END_STATE();
        case 60:
            if(lookahead == '[')
                ADVANCE(207);
            if(lookahead == '\\')
                ADVANCE(204);
            if(lookahead == '{')
                ADVANCE(228);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(205);
            if(lookahead != 0)
                ADVANCE(203);
            END_STATE();
        case 61:
            if(lookahead == '\\')
                ADVANCE(62);
            if(lookahead == ']')
                ADVANCE(518);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(61);
            END_STATE();
        case 62:
            if(lookahead == '\\')
                ADVANCE(62);
            if(lookahead == ']')
                ADVANCE(518);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(61);
            END_STATE();
        case 63:
            if(lookahead == '\\')
                ADVANCE(62);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(61);
            END_STATE();
        case 64:
            if(lookahead == '\\')
                ADVANCE(356);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(353);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 65:
            ADVANCE_MAP(
                '\\', 213,
                ']', 226,
                'a', 220,
                'b', 224,
                'e', 221,
                'f', 222,
                'i', 218,
                'k', 217,
                'l', 214,
                'm', 215,
                'p', 216,
                'v', 219,
                'x', 223,
                '{', 228,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(211);
            if(lookahead != 0)
                ADVANCE(210);
            END_STATE();
        case 66:
            if(lookahead == '\\')
                ADVANCE(213);
            if(lookahead == ']')
                ADVANCE(226);
            if(lookahead == '{')
                ADVANCE(228);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(212);
            if(lookahead != 0)
                ADVANCE(210);
            END_STATE();
        case 67:
            if(lookahead == '\\')
                ADVANCE(594);
            if(lookahead == '`')
                ADVANCE(8);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(67);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(593);
            if(lookahead != 0)
                ADVANCE(592);
            END_STATE();
        case 68:
            if(lookahead == ']')
                ADVANCE(515);
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
                ADVANCE(447);
            END_STATE();
        case 70:
            if(lookahead == 'a')
                ADVANCE(95);
            END_STATE();
        case 71:
            if(lookahead == 'a')
                ADVANCE(105);
            END_STATE();
        case 72:
            if(lookahead == 'a')
                ADVANCE(125);
            END_STATE();
        case 73:
            if(lookahead == 'a')
                ADVANCE(126);
            END_STATE();
        case 74:
            if(lookahead == 'c')
                ADVANCE(98);
            END_STATE();
        case 75:
            if(lookahead == 'c')
                ADVANCE(103);
            END_STATE();
        case 76:
            if(lookahead == 'd')
                ADVANCE(142);
            END_STATE();
        case 77:
            if(lookahead == 'd')
                ADVANCE(102);
            END_STATE();
        case 78:
            if(lookahead == 'd')
                ADVANCE(88);
            END_STATE();
        case 79:
            if(lookahead == 'd')
                ADVANCE(101);
            END_STATE();
        case 80:
            if(lookahead == 'd')
                ADVANCE(86);
            if(lookahead == 'e')
                ADVANCE(131);
            if(lookahead == 'n')
                ADVANCE(81);
            END_STATE();
        case 81:
            if(lookahead == 'd')
                ADVANCE(87);
            END_STATE();
        case 82:
            if(lookahead == 'e')
                ADVANCE(90);
            END_STATE();
        case 83:
            if(lookahead == 'e')
                ADVANCE(132);
            END_STATE();
        case 84:
            if(lookahead == 'e')
                ADVANCE(148);
            END_STATE();
        case 85:
            if(lookahead == 'e')
                ADVANCE(180);
            END_STATE();
        case 86:
            if(lookahead == 'e')
                ADVANCE(92);
            END_STATE();
        case 87:
            if(lookahead == 'e')
                ADVANCE(93);
            END_STATE();
        case 88:
            if(lookahead == 'e')
                ADVANCE(116);
            END_STATE();
        case 89:
            if(lookahead == 'e')
                ADVANCE(94);
            END_STATE();
        case 90:
            if(lookahead == 'f')
                ADVANCE(187);
            END_STATE();
        case 91:
            if(lookahead == 'f')
                ADVANCE(199);
            END_STATE();
        case 92:
            if(lookahead == 'f')
                ADVANCE(190);
            END_STATE();
        case 93:
            if(lookahead == 'f')
                ADVANCE(193);
            END_STATE();
        case 94:
            if(lookahead == 'f')
                ADVANCE(181);
            END_STATE();
        case 95:
            if(lookahead == 'g')
                ADVANCE(84);
            END_STATE();
        case 96:
            if(lookahead == 'h')
                ADVANCE(175);
            END_STATE();
        case 97:
            if(lookahead == 'h')
                ADVANCE(172);
            END_STATE();
        case 98:
            if(lookahead == 'h')
                ADVANCE(114);
            END_STATE();
        case 99:
            if(lookahead == 'i')
                ADVANCE(106);
            END_STATE();
        case 100:
            if(lookahead == 'i')
                ADVANCE(107);
            END_STATE();
        case 101:
            if(lookahead == 'i')
                ADVANCE(91);
            END_STATE();
        case 102:
            if(lookahead == 'i')
                ADVANCE(115);
            END_STATE();
        case 103:
            if(lookahead == 'i')
                ADVANCE(100);
            END_STATE();
        case 104:
            if(lookahead == 'k')
                ADVANCE(163);
            END_STATE();
        case 105:
            if(lookahead == 'l')
                ADVANCE(196);
            END_STATE();
        case 106:
            if(lookahead == 'l')
                ADVANCE(129);
            END_STATE();
        case 107:
            if(lookahead == 'm')
                ADVANCE(72);
            END_STATE();
        case 108:
            if(lookahead == 'm')
                ADVANCE(73);
            END_STATE();
        case 109:
            if(lookahead == 'n')
                ADVANCE(145);
            END_STATE();
        case 110:
            if(lookahead == 'n')
                ADVANCE(104);
            END_STATE();
        case 111:
            if(lookahead == 'n')
                ADVANCE(130);
            END_STATE();
        case 112:
            if(lookahead == 'n')
                ADVANCE(157);
            END_STATE();
        case 113:
            if(lookahead == 'n')
                ADVANCE(120);
            END_STATE();
        case 114:
            if(lookahead == 'o')
                ADVANCE(121);
            END_STATE();
        case 115:
            if(lookahead == 'o')
                ADVANCE(151);
            END_STATE();
        case 116:
            if(lookahead == 'o')
                ADVANCE(154);
            END_STATE();
        case 117:
            if(lookahead == 'o')
                ADVANCE(166);
            END_STATE();
        case 118:
            if(lookahead == 'o')
                ADVANCE(127);
            END_STATE();
        case 119:
            if(lookahead == 'o')
                ADVANCE(112);
            END_STATE();
        case 120:
            if(lookahead == 'o')
                ADVANCE(128);
            END_STATE();
        case 121:
            if(lookahead == 'r')
                ADVANCE(184);
            END_STATE();
        case 122:
            if(lookahead == 's')
                ADVANCE(160);
            END_STATE();
        case 123:
            if(lookahead == 's')
                ADVANCE(122);
            END_STATE();
        case 124:
            if(lookahead == 't')
                ADVANCE(83);
            END_STATE();
        case 125:
            if(lookahead == 't')
                ADVANCE(96);
            END_STATE();
        case 126:
            if(lookahead == 't')
                ADVANCE(97);
            END_STATE();
        case 127:
            if(lookahead == 't')
                ADVANCE(113);
            END_STATE();
        case 128:
            if(lookahead == 't')
                ADVANCE(85);
            END_STATE();
        case 129:
            if(lookahead == 't')
                ADVANCE(117);
            END_STATE();
        case 130:
            if(lookahead == 'u')
                ADVANCE(169);
            END_STATE();
        case 131:
            if(lookahead == 'v')
                ADVANCE(71);
            END_STATE();
        case 132:
            if(lookahead == 'x')
                ADVANCE(108);
            END_STATE();
        case 133:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(133);
            if(lookahead != 0 &&
               lookahead != '.' &&
               lookahead != '>' &&
               lookahead != '[')
                ADVANCE(530);
            END_STATE();
        case 134:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(513);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(514);
            END_STATE();
        case 135:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(517);
            END_STATE();
        case 136:
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               lookahead == '-' ||
               ('/' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 137:
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(9);
            END_STATE();
        case 138:
            if(eof)
                ADVANCE(141);
            ADVANCE_MAP(
                '\t', 532,
                ' ', 533,
                '!', 449,
                '"', 452,
                '#', 454,
                '$', 456,
                '%', 458,
                '&', 460,
                '\'', 462,
                '(', 464,
                ')', 466,
                '*', 468,
                '+', 471,
                ',', 473,
                '-', 475,
                '.', 477,
                '/', 479,
                ':', 481,
                ';', 483,
                '<', 485,
                '=', 487,
                '>', 489,
                '?', 491,
                '@', 493,
                '[', 208,
                '\\', 496,
                ']', 226,
                '^', 498,
                '_', 500,
                '`', 504,
                'a', 414,
                'b', 434,
                'e', 420,
                'f', 401,
                'h', 437,
                'i', 375,
                'k', 372,
                'l', 369,
                'm', 367,
                'p', 365,
                'v', 405,
                'x', 430,
                '{', 229,
                '|', 506,
                '}', 362,
                '~', 508,
            );
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(138);
            if(lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(363);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(448);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead != 0)
                ADVANCE(447);
            END_STATE();
        case 139:
            if(eof)
                ADVANCE(141);
            ADVANCE_MAP(
                ' ', 2,
                '!', 449,
                '"', 452,
                '#', 454,
                '$', 456,
                '%', 458,
                '&', 460,
                '\'', 462,
                '(', 464,
                ')', 466,
                '*', 468,
                '+', 471,
                ',', 473,
                '-', 475,
                '.', 477,
                '/', 479,
                ':', 481,
                ';', 483,
                '<', 485,
                '=', 487,
                '>', 489,
                '?', 491,
                '@', 493,
                '[', 208,
                '\\', 495,
                ']', 226,
                '^', 498,
                '_', 500,
                '`', 504,
                'a', 414,
                'b', 434,
                'e', 420,
                'f', 401,
                'h', 437,
                'i', 375,
                'k', 372,
                'l', 369,
                'm', 367,
                'p', 365,
                'v', 405,
                'x', 430,
                '{', 229,
                '|', 506,
                '}', 362,
                '~', 508,
                0x0b, 364,
                '\f', 364,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(139);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(448);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead != 0)
                ADVANCE(447);
            END_STATE();
        case 140:
            if(eof)
                ADVANCE(141);
            ADVANCE_MAP(
                ' ', 231,
                '!', 450,
                '"', 453,
                '#', 455,
                '$', 457,
                '%', 459,
                '&', 461,
                '\'', 463,
                '(', 465,
                ')', 467,
                '*', 469,
                '+', 472,
                ',', 474,
                '-', 476,
                '.', 478,
                '/', 480,
                ':', 482,
                ';', 484,
                '<', 486,
                '=', 488,
                '>', 490,
                '?', 492,
                '@', 494,
                '[', 209,
                '\\', 497,
                ']', 227,
                '^', 499,
                '_', 502,
                '`', 505,
                'a', 296,
                'b', 316,
                'e', 302,
                'f', 283,
                'h', 319,
                'i', 257,
                'k', 254,
                'l', 251,
                'm', 249,
                'p', 247,
                'v', 287,
                'x', 312,
                '{', 230,
                '|', 507,
                '}', 362,
                '~', 509,
                0x0b, 233,
                '\f', 233,
                '\t', 232,
                '\n', 232,
                '\r', 232,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(329);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 141:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 142:
            ACCEPT_TOKEN(anon_sym_kbd);
            END_STATE();
        case 143:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 144:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 145:
            ACCEPT_TOKEN(anon_sym_btn);
            END_STATE();
        case 146:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 147:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 148:
            ACCEPT_TOKEN(anon_sym_image);
            END_STATE();
        case 149:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 150:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 151:
            ACCEPT_TOKEN(anon_sym_audio);
            END_STATE();
        case 152:
            ACCEPT_TOKEN(anon_sym_audio);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 153:
            ACCEPT_TOKEN(anon_sym_audio);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 154:
            ACCEPT_TOKEN(anon_sym_video);
            END_STATE();
        case 155:
            ACCEPT_TOKEN(anon_sym_video);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 156:
            ACCEPT_TOKEN(anon_sym_video);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 157:
            ACCEPT_TOKEN(anon_sym_icon);
            END_STATE();
        case 158:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 159:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 160:
            ACCEPT_TOKEN(anon_sym_pass);
            END_STATE();
        case 161:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 162:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 163:
            ACCEPT_TOKEN(anon_sym_link);
            END_STATE();
        case 164:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 165:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 166:
            ACCEPT_TOKEN(anon_sym_mailto);
            END_STATE();
        case 167:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 168:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 169:
            ACCEPT_TOKEN(anon_sym_menu);
            END_STATE();
        case 170:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 171:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 172:
            ACCEPT_TOKEN(anon_sym_latexmath);
            END_STATE();
        case 173:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 174:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 175:
            ACCEPT_TOKEN(anon_sym_asciimath);
            END_STATE();
        case 176:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 177:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 178:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'r')
                ADVANCE(391);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 179:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'r')
                ADVANCE(273);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 180:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == 'r')
                ADVANCE(89);
            END_STATE();
        case 181:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            END_STATE();
        case 182:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 183:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 184:
            ACCEPT_TOKEN(anon_sym_anchor);
            END_STATE();
        case 185:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 186:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 187:
            ACCEPT_TOKEN(anon_sym_xref);
            END_STATE();
        case 188:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 189:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 190:
            ACCEPT_TOKEN(anon_sym_ifdef);
            END_STATE();
        case 191:
            ACCEPT_TOKEN(anon_sym_ifdef);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 192:
            ACCEPT_TOKEN(anon_sym_ifdef);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 193:
            ACCEPT_TOKEN(anon_sym_ifndef);
            END_STATE();
        case 194:
            ACCEPT_TOKEN(anon_sym_ifndef);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 195:
            ACCEPT_TOKEN(anon_sym_ifndef);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 196:
            ACCEPT_TOKEN(anon_sym_ifeval);
            END_STATE();
        case 197:
            ACCEPT_TOKEN(anon_sym_ifeval);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 198:
            ACCEPT_TOKEN(anon_sym_ifeval);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 199:
            ACCEPT_TOKEN(anon_sym_endif);
            END_STATE();
        case 200:
            ACCEPT_TOKEN(anon_sym_endif);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 201:
            ACCEPT_TOKEN(anon_sym_endif);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 202:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 203:
            ACCEPT_TOKEN(aux_sym_inline_macro_token1);
            END_STATE();
        case 204:
            ACCEPT_TOKEN(aux_sym_inline_macro_token1);
            if(lookahead == '[')
                ADVANCE(206);
            END_STATE();
        case 205:
            ACCEPT_TOKEN(aux_sym_inline_macro_token1);
            if(lookahead == '\\')
                ADVANCE(204);
            if(lookahead == '{')
                ADVANCE(228);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '[' &&
               lookahead != '\\')
                ADVANCE(203);
            END_STATE();
        case 206:
            ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
            END_STATE();
        case 207:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 208:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(510);
            END_STATE();
        case 209:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(511);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 210:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            END_STATE();
        case 211:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            ADVANCE_MAP(
                '\\', 213,
                'a', 220,
                'b', 224,
                'e', 221,
                'f', 222,
                'i', 218,
                'k', 217,
                'l', 214,
                'm', 215,
                'p', 216,
                'v', 219,
                'x', 223,
                '{', 228,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(211);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(210);
            END_STATE();
        case 212:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == '\\')
                ADVANCE(213);
            if(lookahead == '{')
                ADVANCE(228);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(212);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(210);
            END_STATE();
        case 213:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == ']')
                ADVANCE(225);
            END_STATE();
        case 214:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'a')
                ADVANCE(124);
            if(lookahead == 'i')
                ADVANCE(110);
            END_STATE();
        case 215:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'a')
                ADVANCE(99);
            if(lookahead == 'e')
                ADVANCE(111);
            END_STATE();
        case 216:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'a')
                ADVANCE(123);
            END_STATE();
        case 217:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'b')
                ADVANCE(76);
            END_STATE();
        case 218:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'c')
                ADVANCE(119);
            if(lookahead == 'f')
                ADVANCE(80);
            if(lookahead == 'm')
                ADVANCE(70);
            END_STATE();
        case 219:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'i')
                ADVANCE(78);
            END_STATE();
        case 220:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'n')
                ADVANCE(74);
            if(lookahead == 's')
                ADVANCE(75);
            if(lookahead == 'u')
                ADVANCE(77);
            END_STATE();
        case 221:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'n')
                ADVANCE(79);
            END_STATE();
        case 222:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'o')
                ADVANCE(118);
            END_STATE();
        case 223:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'r')
                ADVANCE(82);
            END_STATE();
        case 224:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 't')
                ADVANCE(109);
            END_STATE();
        case 225:
            ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
            END_STATE();
        case 226:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 227:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 228:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 229:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 230:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 231:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 231,
                '!', 450,
                '"', 453,
                '#', 600,
                '$', 457,
                '%', 459,
                '&', 461,
                '\'', 463,
                '(', 465,
                ')', 467,
                '*', 563,
                '+', 472,
                ',', 474,
                '-', 476,
                '.', 478,
                '/', 480,
                ':', 482,
                ';', 484,
                '<', 486,
                '=', 488,
                '>', 490,
                '?', 492,
                '@', 494,
                '[', 209,
                '\\', 497,
                ']', 227,
                '^', 499,
                '_', 576,
                '`', 591,
                'a', 296,
                'b', 316,
                'e', 302,
                'f', 283,
                'h', 319,
                'i', 257,
                'k', 254,
                'l', 251,
                'm', 249,
                'p', 247,
                'v', 287,
                'x', 312,
                '{', 230,
                '|', 507,
                '~', 509,
                0x0b, 233,
                '\f', 233,
                '\t', 232,
                '\n', 232,
                '\r', 232,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(329);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(351);
            END_STATE();
        case 232:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 231,
                '!', 450,
                '"', 453,
                '#', 455,
                '$', 457,
                '%', 459,
                '&', 461,
                '\'', 463,
                '(', 465,
                ')', 467,
                '*', 469,
                '+', 472,
                ',', 474,
                '-', 476,
                '.', 478,
                '/', 480,
                ':', 482,
                ';', 484,
                '<', 486,
                '=', 488,
                '>', 490,
                '?', 492,
                '@', 494,
                '[', 209,
                '\\', 497,
                ']', 227,
                '^', 499,
                '_', 502,
                '`', 505,
                'a', 296,
                'b', 316,
                'e', 302,
                'f', 283,
                'h', 319,
                'i', 257,
                'k', 254,
                'l', 251,
                'm', 249,
                'p', 247,
                'v', 287,
                'x', 312,
                '{', 230,
                '|', 507,
                '~', 509,
                0x0b, 233,
                '\f', 233,
                '\t', 232,
                '\n', 232,
                '\r', 232,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(329);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(351);
            END_STATE();
        case 233:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 231,
                '!', 450,
                '"', 453,
                '#', 455,
                '$', 457,
                '%', 459,
                '&', 461,
                '\'', 463,
                '(', 465,
                ')', 467,
                '*', 469,
                '+', 472,
                ',', 474,
                '-', 476,
                '.', 478,
                '/', 480,
                ':', 482,
                ';', 484,
                '<', 486,
                '=', 488,
                '>', 490,
                '?', 492,
                '@', 494,
                '[', 209,
                '\\', 497,
                ']', 227,
                '^', 499,
                '_', 503,
                '`', 505,
                'a', 296,
                'b', 316,
                'e', 302,
                'f', 283,
                'h', 319,
                'i', 257,
                'k', 254,
                'l', 251,
                'm', 249,
                'p', 247,
                'v', 287,
                'x', 312,
                '{', 230,
                '|', 507,
                '~', 509,
                0x0b, 233,
                '\f', 233,
                '\t', 232,
                '\n', 232,
                '\r', 232,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(329);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(351);
            END_STATE();
        case 234:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '"')
                ADVANCE(349);
            if(lookahead == '\\')
                ADVANCE(357);
            if(lookahead == '}')
                ADVANCE(9);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(234);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 235:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '"')
                ADVANCE(349);
            if(lookahead == '\\')
                ADVANCE(357);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(234);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 236:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '+')
                ADVANCE(542);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 237:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(238);
            if(lookahead == '.')
                ADVANCE(354);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(237);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 238:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(238);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(237);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 239:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(246);
            if(lookahead == '0')
                ADVANCE(244);
            if(lookahead == '1')
                ADVANCE(243);
            if(lookahead == '2')
                ADVANCE(240);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(242);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(245);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 240:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(246);
            if(lookahead == '5')
                ADVANCE(241);
            if(lookahead == ':')
                ADVANCE(360);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == ']')
                ADVANCE(355);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(244);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(242);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(245);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 241:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(246);
            if(lookahead == ':')
                ADVANCE(360);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == ']')
                ADVANCE(355);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(244);
            if(('6' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(245);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 242:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(246);
            if(lookahead == ':')
                ADVANCE(360);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == ']')
                ADVANCE(355);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(244);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(245);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 243:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(246);
            if(lookahead == ':')
                ADVANCE(360);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == ']')
                ADVANCE(355);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(242);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(245);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 244:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(246);
            if(lookahead == ':')
                ADVANCE(360);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == ']')
                ADVANCE(355);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(245);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 245:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(246);
            if(lookahead == ':')
                ADVANCE(360);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(245);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 246:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(246);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(245);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 247:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'a')
                ADVANCE(315);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 248:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'a')
                ADVANCE(279);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 249:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'a')
                ADVANCE(285);
            if(lookahead == 'e')
                ADVANCE(299);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 250:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'a')
                ADVANCE(291);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 251:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'a')
                ADVANCE(320);
            if(lookahead == 'i')
                ADVANCE(298);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 252:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'a')
                ADVANCE(318);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 253:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'a')
                ADVANCE(321);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 254:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'b')
                ADVANCE(259);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 255:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'c')
                ADVANCE(282);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 256:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'c')
                ADVANCE(528);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 257:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                '.', 352,
                '@', 350,
                '\\', 356,
                '_', 328,
                'c', 307,
                'f', 263,
                'm', 248,
                'r', 256,
                '}', 34,
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
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 258:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'c')
                ADVANCE(289);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 259:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'd')
                ADVANCE(144);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 260:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'd')
                ADVANCE(288);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 261:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'd')
                ADVANCE(272);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 262:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'd')
                ADVANCE(286);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 263:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                '.', 352,
                '@', 350,
                '\\', 356,
                '_', 328,
                'd', 270,
                'e', 326,
                'n', 264,
                '}', 34,
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
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 264:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'd')
                ADVANCE(271);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 265:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'e')
                ADVANCE(274);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 266:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'e')
                ADVANCE(524);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 267:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'e')
                ADVANCE(327);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 268:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'e')
                ADVANCE(150);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 269:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'e')
                ADVANCE(179);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 270:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'e')
                ADVANCE(276);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 271:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'e')
                ADVANCE(277);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 272:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'e')
                ADVANCE(304);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 273:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'e')
                ADVANCE(278);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 274:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'f')
                ADVANCE(189);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 275:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'f')
                ADVANCE(201);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 276:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'f')
                ADVANCE(192);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 277:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'f')
                ADVANCE(195);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 278:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'f')
                ADVANCE(183);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 279:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'g')
                ADVANCE(268);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 280:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'h')
                ADVANCE(177);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 281:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'h')
                ADVANCE(174);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 282:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'h')
                ADVANCE(306);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 283:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                '.', 352,
                '@', 350,
                '\\', 356,
                '_', 328,
                'i', 292,
                'o', 309,
                't', 310,
                '}', 34,
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
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 284:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'i')
                ADVANCE(294);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 285:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'i')
                ADVANCE(293);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 286:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'i')
                ADVANCE(275);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 287:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'i')
                ADVANCE(261);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 288:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'i')
                ADVANCE(303);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 289:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'i')
                ADVANCE(284);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 290:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'k')
                ADVANCE(165);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 291:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'l')
                ADVANCE(198);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 292:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'l')
                ADVANCE(266);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 293:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'l')
                ADVANCE(324);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 294:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'm')
                ADVANCE(252);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 295:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'm')
                ADVANCE(253);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 296:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                '.', 352,
                '@', 350,
                '\\', 356,
                '_', 328,
                'n', 255,
                's', 258,
                'u', 260,
                '}', 34,
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
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 297:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'n')
                ADVANCE(147);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 298:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'n')
                ADVANCE(290);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 299:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'n')
                ADVANCE(325);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 300:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'n')
                ADVANCE(159);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 301:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'n')
                ADVANCE(308);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 302:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'n')
                ADVANCE(262);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 303:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'o')
                ADVANCE(153);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 304:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'o')
                ADVANCE(156);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 305:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'o')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 306:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'o')
                ADVANCE(313);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 307:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'o')
                ADVANCE(300);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 308:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'o')
                ADVANCE(323);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 309:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'o')
                ADVANCE(322);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 310:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'p')
                ADVANCE(526);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 311:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'p')
                ADVANCE(520);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 312:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'r')
                ADVANCE(265);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 313:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'r')
                ADVANCE(186);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 314:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 's')
                ADVANCE(162);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 315:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 's')
                ADVANCE(314);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 316:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 't')
                ADVANCE(297);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 317:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 't')
                ADVANCE(311);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 318:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 't')
                ADVANCE(280);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 319:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 't')
                ADVANCE(317);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 320:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 't')
                ADVANCE(267);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 321:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 't')
                ADVANCE(281);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 322:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 't')
                ADVANCE(301);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 323:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 't')
                ADVANCE(269);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 324:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 't')
                ADVANCE(305);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 325:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'u')
                ADVANCE(171);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 326:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'v')
                ADVANCE(250);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 327:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 'x')
                ADVANCE(295);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 328:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 329:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(329);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 330:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 331:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(239);
            if(lookahead == '5')
                ADVANCE(332);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(335);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(333);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 332:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(239);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(335);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 333:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(239);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(335);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 334:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(239);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(333);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 335:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(239);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 336:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(347);
            if(lookahead == '5')
                ADVANCE(337);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(340);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 337:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(347);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 338:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(347);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 339:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(347);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 340:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(347);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 341:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(348);
            if(lookahead == '5')
                ADVANCE(342);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(345);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(343);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 342:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(348);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(345);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 343:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(348);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(345);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 344:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(348);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(343);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 345:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(348);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 346:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(345);
            if(lookahead == '1')
                ADVANCE(344);
            if(lookahead == '2')
                ADVANCE(341);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(343);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 347:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(335);
            if(lookahead == '1')
                ADVANCE(334);
            if(lookahead == '2')
                ADVANCE(331);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(333);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 348:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(340);
            if(lookahead == '1')
                ADVANCE(339);
            if(lookahead == '2')
                ADVANCE(336);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 349:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 350:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '[')
                ADVANCE(346);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(237);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 351:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(351);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               (' ' <= lookahead && lookahead <= '@') ||
               ('[' <= lookahead && lookahead <= '`') ||
               lookahead == '{' ||
               lookahead == '|' ||
               lookahead == '~')
                ADVANCE(355);
            if(lookahead != 0 &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(351);
            END_STATE();
        case 352:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               lookahead == '-' ||
               ('/' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 353:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(353);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 354:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(356);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(237);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 355:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 356:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 357:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(235);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(234);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 358:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(359);
            if(lookahead == ']')
                ADVANCE(358);
            if(lookahead == '}')
                ADVANCE(61);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(358);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 359:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(359);
            if(lookahead == ']')
                ADVANCE(358);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(358);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 360:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(359);
            if(lookahead == '}')
                ADVANCE(61);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(358);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 361:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 362:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 363:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                '\t', 532,
                ' ', 533,
                '_', 501,
                'a', 414,
                'b', 434,
                'e', 420,
                'f', 401,
                'h', 437,
                'i', 375,
                'k', 372,
                'l', 369,
                'm', 367,
                'p', 365,
                'v', 405,
                'x', 430,
                0x0b, 363,
                '\f', 363,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 364:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                ' ', 2,
                '_', 501,
                'a', 414,
                'b', 434,
                'e', 420,
                'f', 401,
                'h', 437,
                'i', 375,
                'k', 372,
                'l', 369,
                'm', 367,
                'p', 365,
                'v', 405,
                'x', 430,
                0x0b, 364,
                '\f', 364,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 365:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'a')
                ADVANCE(433);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 366:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'a')
                ADVANCE(397);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 367:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'a')
                ADVANCE(403);
            if(lookahead == 'e')
                ADVANCE(417);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 368:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'a')
                ADVANCE(409);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 369:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'a')
                ADVANCE(438);
            if(lookahead == 'i')
                ADVANCE(416);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 370:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'a')
                ADVANCE(436);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 371:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'a')
                ADVANCE(439);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 372:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'b')
                ADVANCE(377);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 373:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'c')
                ADVANCE(400);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 374:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'c')
                ADVANCE(527);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 375:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'c')
                ADVANCE(425);
            if(lookahead == 'f')
                ADVANCE(381);
            if(lookahead == 'm')
                ADVANCE(366);
            if(lookahead == 'r')
                ADVANCE(374);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 376:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'c')
                ADVANCE(407);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 377:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'd')
                ADVANCE(143);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 378:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'd')
                ADVANCE(406);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 379:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'd')
                ADVANCE(390);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 380:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'd')
                ADVANCE(404);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 381:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'd')
                ADVANCE(388);
            if(lookahead == 'e')
                ADVANCE(444);
            if(lookahead == 'n')
                ADVANCE(382);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 382:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'd')
                ADVANCE(389);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 383:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'e')
                ADVANCE(392);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 384:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'e')
                ADVANCE(523);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 385:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'e')
                ADVANCE(445);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 386:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'e')
                ADVANCE(149);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 387:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'e')
                ADVANCE(178);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 388:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'e')
                ADVANCE(394);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 389:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'e')
                ADVANCE(395);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 390:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'e')
                ADVANCE(422);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 391:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'e')
                ADVANCE(396);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 392:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'f')
                ADVANCE(188);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 393:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'f')
                ADVANCE(200);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 394:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'f')
                ADVANCE(191);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 395:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'f')
                ADVANCE(194);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 396:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'f')
                ADVANCE(182);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 397:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'g')
                ADVANCE(386);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 398:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'h')
                ADVANCE(176);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 399:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'h')
                ADVANCE(173);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 400:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'h')
                ADVANCE(424);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 401:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'i')
                ADVANCE(410);
            if(lookahead == 'o')
                ADVANCE(427);
            if(lookahead == 't')
                ADVANCE(428);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 402:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'i')
                ADVANCE(412);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 403:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'i')
                ADVANCE(411);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 404:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'i')
                ADVANCE(393);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 405:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'i')
                ADVANCE(379);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 406:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'i')
                ADVANCE(421);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 407:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'i')
                ADVANCE(402);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 408:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'k')
                ADVANCE(164);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 409:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'l')
                ADVANCE(197);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 410:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'l')
                ADVANCE(384);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 411:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'l')
                ADVANCE(442);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 412:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'm')
                ADVANCE(370);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 413:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'm')
                ADVANCE(371);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 414:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'n')
                ADVANCE(373);
            if(lookahead == 's')
                ADVANCE(376);
            if(lookahead == 'u')
                ADVANCE(378);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 415:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'n')
                ADVANCE(146);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 416:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'n')
                ADVANCE(408);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 417:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'n')
                ADVANCE(443);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 418:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'n')
                ADVANCE(158);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 419:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'n')
                ADVANCE(426);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 420:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'n')
                ADVANCE(380);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 421:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'o')
                ADVANCE(152);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 422:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'o')
                ADVANCE(155);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 423:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'o')
                ADVANCE(167);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 424:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'o')
                ADVANCE(431);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 425:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'o')
                ADVANCE(418);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 426:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'o')
                ADVANCE(441);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 427:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'o')
                ADVANCE(440);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 428:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'p')
                ADVANCE(525);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 429:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'p')
                ADVANCE(519);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 430:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'r')
                ADVANCE(383);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 431:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'r')
                ADVANCE(185);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 432:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 's')
                ADVANCE(161);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 433:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 's')
                ADVANCE(432);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 434:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 't')
                ADVANCE(415);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 435:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 't')
                ADVANCE(429);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 436:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 't')
                ADVANCE(398);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 437:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 't')
                ADVANCE(435);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 438:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 't')
                ADVANCE(385);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 439:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 't')
                ADVANCE(399);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 440:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 't')
                ADVANCE(419);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 441:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 't')
                ADVANCE(387);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 442:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 't')
                ADVANCE(423);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 443:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'u')
                ADVANCE(170);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 444:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'v')
                ADVANCE(368);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 445:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'x')
                ADVANCE(413);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 446:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 447:
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
                ADVANCE(447);
            END_STATE();
        case 448:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(448);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 449:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 450:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 451:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 452:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(58);
            if(lookahead == '\\')
                ADVANCE(137);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(9);
            END_STATE();
        case 453:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(349);
            if(lookahead == '\\')
                ADVANCE(357);
            if(lookahead == '}')
                ADVANCE(9);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(234);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(607);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('$' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(608);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('$' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(545);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(546);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '*')
                ADVANCE(574);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '*')
                ADVANCE(575);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '+')
                ADVANCE(15);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '+')
                ADVANCE(236);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(anon_sym_COMMA);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(anon_sym_DOT);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(anon_sym_COLON2);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(anon_sym_COLON2);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(anon_sym_SEMI);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(552);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(553);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(anon_sym_AT);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            if(lookahead == '+')
                ADVANCE(538);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(588);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(587);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(590);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(589);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '`')
                ADVANCE(598);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '`')
                ADVANCE(599);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(512);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(aux_sym_anchor_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(513);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(514);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(aux_sym_anchor_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ' ||
               ('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(514);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(sym_email);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(sym_email);
            if(lookahead == '-')
                ADVANCE(24);
            if(lookahead == '.')
                ADVANCE(135);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(517);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(sym_email);
            if(lookahead == '\\')
                ADVANCE(62);
            if(lookahead == ']')
                ADVANCE(518);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(61);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 's')
                ADVANCE(521);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == 's')
                ADVANCE(522);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
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
            ACCEPT_TOKEN(aux_sym_passthrough_token1);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(aux_sym_passthrough_token1);
            ADVANCE_MAP(
                '\t', 532,
                ' ', 533,
                '!', 449,
                '"', 452,
                '#', 454,
                '$', 456,
                '%', 458,
                '&', 460,
                '\'', 462,
                '(', 464,
                ')', 466,
                '*', 468,
                ',', 473,
                '-', 475,
                '.', 477,
                '/', 479,
                ':', 481,
                ';', 483,
                '<', 485,
                '=', 487,
                '>', 489,
                '?', 491,
                '@', 493,
                '[', 208,
                '\\', 496,
                ']', 226,
                '^', 498,
                '_', 500,
                '`', 504,
                'a', 414,
                'b', 434,
                'e', 420,
                'f', 401,
                'h', 437,
                'i', 375,
                'k', 372,
                'l', 369,
                'm', 367,
                'p', 365,
                'v', 405,
                'x', 430,
                '{', 229,
                '|', 506,
                '}', 362,
                '~', 508,
                0x0b, 363,
                '\f', 363,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(448);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(aux_sym_passthrough_token1);
            ADVANCE_MAP(
                '\t', 532,
                ' ', 533,
                '!', 449,
                '"', 452,
                '#', 600,
                '$', 456,
                '%', 458,
                '&', 460,
                '\'', 462,
                '(', 464,
                ')', 466,
                '*', 563,
                ',', 473,
                '-', 475,
                '.', 477,
                '/', 479,
                ':', 481,
                ';', 483,
                '<', 485,
                '=', 487,
                '>', 489,
                '?', 491,
                '@', 493,
                '[', 208,
                '\\', 496,
                ']', 226,
                '^', 498,
                '_', 576,
                '`', 591,
                'a', 414,
                'b', 434,
                'e', 420,
                'f', 401,
                'h', 437,
                'i', 375,
                'k', 372,
                'l', 369,
                'm', 367,
                'p', 365,
                'v', 405,
                'x', 430,
                '{', 229,
                '|', 506,
                '}', 362,
                '~', 508,
                0x0b, 363,
                '\f', 363,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(448);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(aux_sym_passthrough_token1);
            if(lookahead == '+')
                ADVANCE(538);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(aux_sym_passthrough_token1);
            if(lookahead == '+')
                ADVANCE(539);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(aux_sym_passthrough_token1);
            if(lookahead == '\\')
                ADVANCE(535);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(536);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '+')
                ADVANCE(531);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(aux_sym_passthrough_token1);
            if(lookahead == '\\')
                ADVANCE(534);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(537);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '+')
                ADVANCE(531);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(anon_sym_BSLASH_PLUS);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(anon_sym_BSLASH_PLUS);
            if(lookahead == '+')
                ADVANCE(18);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(anon_sym_BSLASH_PLUS_PLUS_PLUS);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(aux_sym_passthrough_token2);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(aux_sym_passthrough_token2);
            if(lookahead == '$')
                ADVANCE(550);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(aux_sym_passthrough_token2);
            if(lookahead == '\\')
                ADVANCE(548);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(549);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '$')
                ADVANCE(547);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR);
            if(lookahead == '$')
                ADVANCE(551);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR_DOLLAR);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(355);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            if(lookahead == ',')
                ADVANCE(557);
            if(lookahead == '>')
                ADVANCE(558);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            if(lookahead == '\\')
                ADVANCE(555);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(556);
            if(lookahead != 0 &&
               lookahead != ',' &&
               lookahead != '>')
                ADVANCE(554);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(anon_sym_BSLASH_COMMA);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(anon_sym_BSLASH_GT);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            if(lookahead == '>')
                ADVANCE(558);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            if(lookahead == '\\')
                ADVANCE(560);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(561);
            if(lookahead != 0 &&
               lookahead != '>')
                ADVANCE(559);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(anon_sym_STAR2);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == ' ')
                ADVANCE(565);
            if(lookahead == '#')
                ADVANCE(600);
            if(lookahead == '\\')
                ADVANCE(568);
            if(lookahead == '_')
                ADVANCE(576);
            if(lookahead == '`')
                ADVANCE(591);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(566);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(564);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == ' ')
                ADVANCE(565);
            if(lookahead == '#')
                ADVANCE(567);
            if(lookahead == '\\')
                ADVANCE(568);
            if(lookahead == '_')
                ADVANCE(569);
            if(lookahead == '`')
                ADVANCE(570);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(566);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(564);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '#')
                ADVANCE(606);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '*')
                ADVANCE(571);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '_')
                ADVANCE(586);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '`')
                ADVANCE(597);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(anon_sym_BSLASH_STAR);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(anon_sym_STAR3);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(anon_sym__2);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == ' ')
                ADVANCE(578);
            if(lookahead == '#')
                ADVANCE(600);
            if(lookahead == '*')
                ADVANCE(563);
            if(lookahead == '\\')
                ADVANCE(582);
            if(lookahead == '`')
                ADVANCE(591);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(579);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_' &&
               lookahead != '`')
                ADVANCE(577);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == ' ')
                ADVANCE(578);
            if(lookahead == '#')
                ADVANCE(580);
            if(lookahead == '*')
                ADVANCE(581);
            if(lookahead == '\\')
                ADVANCE(582);
            if(lookahead == '`')
                ADVANCE(583);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(579);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_' &&
               lookahead != '`')
                ADVANCE(577);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '#')
                ADVANCE(606);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '*')
                ADVANCE(573);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '_')
                ADVANCE(584);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '`')
                ADVANCE(597);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(anon_sym_BSLASH_);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(anon_sym__3);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(anon_sym___);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(33);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(446);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(447);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '_')
                ADVANCE(328);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(355);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(351);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(anon_sym_BQUOTE2);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '\\')
                ADVANCE(594);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(593);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '`')
                ADVANCE(592);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '`')
                ADVANCE(595);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(anon_sym_BSLASH_BQUOTE);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(anon_sym_BQUOTE3);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(anon_sym_POUND2);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '#')
                ADVANCE(604);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '\\')
                ADVANCE(602);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(603);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '#')
                ADVANCE(601);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(anon_sym_BSLASH_POUND);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(anon_sym_POUND3);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead == '.')
                ADVANCE(136);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead == '.')
                ADVANCE(352);
            if(lookahead == '@')
                ADVANCE(350);
            if(lookahead == '\\')
                ADVANCE(356);
            if(lookahead == '}')
                ADVANCE(34);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(330);
            if(lookahead != 0)
                ADVANCE(355);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 139 },
    [2] = { .lex_state = 139 },
    [3] = { .lex_state = 139 },
    [4] = { .lex_state = 138 },
    [5] = { .lex_state = 140 },
    [6] = { .lex_state = 139 },
    [7] = { .lex_state = 139 },
    [8] = { .lex_state = 139 },
    [9] = { .lex_state = 139 },
    [10] = { .lex_state = 139 },
    [11] = { .lex_state = 139 },
    [12] = { .lex_state = 139 },
    [13] = { .lex_state = 139 },
    [14] = { .lex_state = 139 },
    [15] = { .lex_state = 139 },
    [16] = { .lex_state = 139 },
    [17] = { .lex_state = 139 },
    [18] = { .lex_state = 139 },
    [19] = { .lex_state = 139 },
    [20] = { .lex_state = 139 },
    [21] = { .lex_state = 139 },
    [22] = { .lex_state = 139 },
    [23] = { .lex_state = 139 },
    [24] = { .lex_state = 139 },
    [25] = { .lex_state = 139 },
    [26] = { .lex_state = 139 },
    [27] = { .lex_state = 139 },
    [28] = { .lex_state = 139 },
    [29] = { .lex_state = 139 },
    [30] = { .lex_state = 139 },
    [31] = { .lex_state = 139 },
    [32] = { .lex_state = 139 },
    [33] = { .lex_state = 139 },
    [34] = { .lex_state = 139 },
    [35] = { .lex_state = 65 },
    [36] = { .lex_state = 65 },
    [37] = { .lex_state = 65 },
    [38] = { .lex_state = 65 },
    [39] = { .lex_state = 65 },
    [40] = { .lex_state = 65 },
    [41] = { .lex_state = 65 },
    [42] = { .lex_state = 65 },
    [43] = { .lex_state = 65 },
    [44] = { .lex_state = 65 },
    [45] = { .lex_state = 65 },
    [46] = { .lex_state = 65 },
    [47] = { .lex_state = 65 },
    [48] = { .lex_state = 65 },
    [49] = { .lex_state = 65 },
    [50] = { .lex_state = 3 },
    [51] = { .lex_state = 5 },
    [52] = { .lex_state = 5 },
    [53] = { .lex_state = 5 },
    [54] = { .lex_state = 5 },
    [55] = { .lex_state = 5 },
    [56] = { .lex_state = 3 },
    [57] = { .lex_state = 3 },
    [58] = { .lex_state = 3 },
    [59] = { .lex_state = 3 },
    [60] = { .lex_state = 5 },
    [61] = { .lex_state = 3 },
    [62] = { .lex_state = 3 },
    [63] = { .lex_state = 5 },
    [64] = { .lex_state = 3 },
    [65] = { .lex_state = 3 },
    [66] = { .lex_state = 5 },
    [67] = { .lex_state = 5 },
    [68] = { .lex_state = 3 },
    [69] = { .lex_state = 5 },
    [70] = { .lex_state = 5 },
    [71] = { .lex_state = 5 },
    [72] = { .lex_state = 3 },
    [73] = { .lex_state = 3 },
    [74] = { .lex_state = 5 },
    [75] = { .lex_state = 3 },
    [76] = { .lex_state = 3 },
    [77] = { .lex_state = 5 },
    [78] = { .lex_state = 3 },
    [79] = { .lex_state = 5 },
    [80] = { .lex_state = 66 },
    [81] = { .lex_state = 66 },
    [82] = { .lex_state = 60 },
    [83] = { .lex_state = 66 },
    [84] = { .lex_state = 60 },
    [85] = { .lex_state = 21 },
    [86] = { .lex_state = 21 },
    [87] = { .lex_state = 60 },
    [88] = { .lex_state = 60 },
    [89] = { .lex_state = 66 },
    [90] = { .lex_state = 60 },
    [91] = { .lex_state = 16 },
    [92] = { .lex_state = 13 },
    [93] = { .lex_state = 16 },
    [94] = { .lex_state = 12 },
    [95] = { .lex_state = 67 },
    [96] = { .lex_state = 13 },
    [97] = { .lex_state = 21 },
    [98] = { .lex_state = 67 },
    [99] = { .lex_state = 12 },
    [100] = { .lex_state = 56 },
    [101] = { .lex_state = 12 },
    [102] = { .lex_state = 12 },
    [103] = { .lex_state = 67 },
    [104] = { .lex_state = 56 },
    [105] = { .lex_state = 60 },
    [106] = { .lex_state = 10 },
    [107] = { .lex_state = 67 },
    [108] = { .lex_state = 12 },
    [109] = { .lex_state = 12 },
    [110] = { .lex_state = 67 },
    [111] = { .lex_state = 67 },
    [112] = { .lex_state = 10 },
    [113] = { .lex_state = 16 },
    [114] = { .lex_state = 19 },
    [115] = { .lex_state = 13 },
    [116] = { .lex_state = 10 },
    [117] = { .lex_state = 21 },
    [118] = { .lex_state = 60 },
    [119] = { .lex_state = 12 },
    [120] = { .lex_state = 66 },
    [121] = { .lex_state = 12 },
    [122] = { .lex_state = 67 },
    [123] = { .lex_state = 67 },
    [124] = { .lex_state = 12 },
    [125] = { .lex_state = 19 },
    [126] = { .lex_state = 12 },
    [127] = { .lex_state = 67 },
    [128] = { .lex_state = 67 },
    [129] = { .lex_state = 67 },
    [130] = { .lex_state = 12 },
    [131] = { .lex_state = 67 },
    [132] = { .lex_state = 67 },
    [133] = { .lex_state = 12 },
    [134] = { .lex_state = 12 },
    [135] = { .lex_state = 56 },
    [136] = { .lex_state = 56 },
    [137] = { .lex_state = 10 },
    [138] = { .lex_state = 10 },
    [139] = { .lex_state = 10 },
    [140] = { .lex_state = 10 },
    [141] = { .lex_state = 10 },
    [142] = { .lex_state = 10 },
    [143] = { .lex_state = 133 },
    [144] = { .lex_state = 64 },
    [145] = { .lex_state = 133 },
    [146] = { .lex_state = 134 },
    [147] = { .lex_state = 133 },
    [148] = { .lex_state = 55 },
    [149] = { .lex_state = 0 },
    [150] = { .lex_state = 55 },
    [151] = { .lex_state = 10 },
    [152] = { .lex_state = 10 },
    [153] = { .lex_state = 10 },
    [154] = { .lex_state = 10 },
    [155] = { .lex_state = 133 },
    [156] = { .lex_state = 10 },
    [157] = { .lex_state = 55 },
    [158] = { .lex_state = 55 },
    [159] = { .lex_state = 64 },
    [160] = { .lex_state = 10 },
    [161] = { .lex_state = 64 },
    [162] = { .lex_state = 10 },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_kbd] = ACTIONS(1),
        [anon_sym_btn] = ACTIONS(1),
        [anon_sym_image] = ACTIONS(1),
        [anon_sym_audio] = ACTIONS(1),
        [anon_sym_video] = ACTIONS(1),
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
        [anon_sym_ifdef] = ACTIONS(1),
        [anon_sym_ifndef] = ACTIONS(1),
        [anon_sym_ifeval] = ACTIONS(1),
        [anon_sym_endif] = ACTIONS(1),
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
        [sym_email] = ACTIONS(1),
        [anon_sym_http] = ACTIONS(1),
        [anon_sym_https] = ACTIONS(1),
        [anon_sym_file] = ACTIONS(1),
        [anon_sym_ftp] = ACTIONS(1),
        [anon_sym_irc] = ACTIONS(1),
        [aux_sym_passthrough_token1] = ACTIONS(1),
        [anon_sym_BSLASH_PLUS] = ACTIONS(1),
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
        [sym__eof] = ACTIONS(1),
    },
    [1] = {
        [sym_inline] = STATE(149),
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
        [anon_sym_audio] = ACTIONS(3),
        [anon_sym_video] = ACTIONS(3),
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
        [anon_sym_ifdef] = ACTIONS(3),
        [anon_sym_ifndef] = ACTIONS(3),
        [anon_sym_ifeval] = ACTIONS(3),
        [anon_sym_endif] = ACTIONS(3),
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
        [anon_sym_audio] = ACTIONS(3),
        [anon_sym_video] = ACTIONS(3),
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
        [anon_sym_ifdef] = ACTIONS(3),
        [anon_sym_ifndef] = ACTIONS(3),
        [anon_sym_ifeval] = ACTIONS(3),
        [anon_sym_endif] = ACTIONS(3),
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
        [anon_sym_audio] = ACTIONS(45),
        [anon_sym_video] = ACTIONS(45),
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
        [anon_sym_ifdef] = ACTIONS(45),
        [anon_sym_ifndef] = ACTIONS(45),
        [anon_sym_ifeval] = ACTIONS(45),
        [anon_sym_endif] = ACTIONS(45),
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
        [aux_sym_passthrough_repeat1] = STATE(125),
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_kbd] = ACTIONS(101),
        [anon_sym_btn] = ACTIONS(101),
        [anon_sym_image] = ACTIONS(101),
        [anon_sym_audio] = ACTIONS(101),
        [anon_sym_video] = ACTIONS(101),
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
        [anon_sym_ifdef] = ACTIONS(101),
        [anon_sym_ifndef] = ACTIONS(101),
        [anon_sym_ifeval] = ACTIONS(101),
        [anon_sym_endif] = ACTIONS(101),
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
        [anon_sym_http] = ACTIONS(101),
        [anon_sym_https] = ACTIONS(101),
        [anon_sym_file] = ACTIONS(101),
        [anon_sym_ftp] = ACTIONS(101),
        [anon_sym_irc] = ACTIONS(101),
        [aux_sym_passthrough_token1] = ACTIONS(103),
        [anon_sym_BSLASH_PLUS] = ACTIONS(103),
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
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_kbd] = ACTIONS(101),
        [anon_sym_btn] = ACTIONS(101),
        [anon_sym_image] = ACTIONS(101),
        [anon_sym_audio] = ACTIONS(101),
        [anon_sym_video] = ACTIONS(101),
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
        [anon_sym_ifdef] = ACTIONS(101),
        [anon_sym_ifndef] = ACTIONS(101),
        [anon_sym_ifeval] = ACTIONS(101),
        [anon_sym_endif] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(101),
        [anon_sym_RBRACK] = ACTIONS(101),
        [anon_sym_LBRACE] = ACTIONS(101),
        [aux_sym_replacement_token1] = ACTIONS(105),
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
    [6] = {
        [sym_link_url] = STATE(138),
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_kbd] = ACTIONS(101),
        [anon_sym_btn] = ACTIONS(101),
        [anon_sym_image] = ACTIONS(101),
        [anon_sym_audio] = ACTIONS(101),
        [anon_sym_video] = ACTIONS(101),
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
        [anon_sym_ifdef] = ACTIONS(101),
        [anon_sym_ifndef] = ACTIONS(101),
        [anon_sym_ifeval] = ACTIONS(101),
        [anon_sym_endif] = ACTIONS(101),
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
        [anon_sym_http] = ACTIONS(107),
        [anon_sym_https] = ACTIONS(107),
        [anon_sym_file] = ACTIONS(107),
        [anon_sym_ftp] = ACTIONS(107),
        [anon_sym_irc] = ACTIONS(107),
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
        [anon_sym_audio] = ACTIONS(111),
        [anon_sym_video] = ACTIONS(111),
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
        [anon_sym_ifdef] = ACTIONS(111),
        [anon_sym_ifndef] = ACTIONS(111),
        [anon_sym_ifeval] = ACTIONS(111),
        [anon_sym_endif] = ACTIONS(111),
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
        [anon_sym_audio] = ACTIONS(117),
        [anon_sym_video] = ACTIONS(117),
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
        [anon_sym_ifdef] = ACTIONS(117),
        [anon_sym_ifndef] = ACTIONS(117),
        [anon_sym_ifeval] = ACTIONS(117),
        [anon_sym_endif] = ACTIONS(117),
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
        [anon_sym_audio] = ACTIONS(121),
        [anon_sym_video] = ACTIONS(121),
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
        [anon_sym_ifdef] = ACTIONS(121),
        [anon_sym_ifndef] = ACTIONS(121),
        [anon_sym_ifeval] = ACTIONS(121),
        [anon_sym_endif] = ACTIONS(121),
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
        [anon_sym_audio] = ACTIONS(128),
        [anon_sym_video] = ACTIONS(128),
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
        [anon_sym_ifdef] = ACTIONS(128),
        [anon_sym_ifndef] = ACTIONS(128),
        [anon_sym_ifeval] = ACTIONS(128),
        [anon_sym_endif] = ACTIONS(128),
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
        [anon_sym_audio] = ACTIONS(132),
        [anon_sym_video] = ACTIONS(132),
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
        [anon_sym_ifdef] = ACTIONS(132),
        [anon_sym_ifndef] = ACTIONS(132),
        [anon_sym_ifeval] = ACTIONS(132),
        [anon_sym_endif] = ACTIONS(132),
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
        [anon_sym_audio] = ACTIONS(136),
        [anon_sym_video] = ACTIONS(136),
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
        [anon_sym_ifdef] = ACTIONS(136),
        [anon_sym_ifndef] = ACTIONS(136),
        [anon_sym_ifeval] = ACTIONS(136),
        [anon_sym_endif] = ACTIONS(136),
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
        [anon_sym_audio] = ACTIONS(140),
        [anon_sym_video] = ACTIONS(140),
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
        [anon_sym_ifdef] = ACTIONS(140),
        [anon_sym_ifndef] = ACTIONS(140),
        [anon_sym_ifeval] = ACTIONS(140),
        [anon_sym_endif] = ACTIONS(140),
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
        [anon_sym_audio] = ACTIONS(144),
        [anon_sym_video] = ACTIONS(144),
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
        [anon_sym_ifdef] = ACTIONS(144),
        [anon_sym_ifndef] = ACTIONS(144),
        [anon_sym_ifeval] = ACTIONS(144),
        [anon_sym_endif] = ACTIONS(144),
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
        [anon_sym_audio] = ACTIONS(121),
        [anon_sym_video] = ACTIONS(121),
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
        [anon_sym_ifdef] = ACTIONS(121),
        [anon_sym_ifndef] = ACTIONS(121),
        [anon_sym_ifeval] = ACTIONS(121),
        [anon_sym_endif] = ACTIONS(121),
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
        [anon_sym_audio] = ACTIONS(148),
        [anon_sym_video] = ACTIONS(148),
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
        [anon_sym_ifdef] = ACTIONS(148),
        [anon_sym_ifndef] = ACTIONS(148),
        [anon_sym_ifeval] = ACTIONS(148),
        [anon_sym_endif] = ACTIONS(148),
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
        [anon_sym_audio] = ACTIONS(152),
        [anon_sym_video] = ACTIONS(152),
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
        [anon_sym_ifdef] = ACTIONS(152),
        [anon_sym_ifndef] = ACTIONS(152),
        [anon_sym_ifeval] = ACTIONS(152),
        [anon_sym_endif] = ACTIONS(152),
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
        [anon_sym_audio] = ACTIONS(156),
        [anon_sym_video] = ACTIONS(156),
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
        [anon_sym_ifdef] = ACTIONS(156),
        [anon_sym_ifndef] = ACTIONS(156),
        [anon_sym_ifeval] = ACTIONS(156),
        [anon_sym_endif] = ACTIONS(156),
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
        [anon_sym_audio] = ACTIONS(160),
        [anon_sym_video] = ACTIONS(160),
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
        [anon_sym_ifdef] = ACTIONS(160),
        [anon_sym_ifndef] = ACTIONS(160),
        [anon_sym_ifeval] = ACTIONS(160),
        [anon_sym_endif] = ACTIONS(160),
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
        [anon_sym_audio] = ACTIONS(164),
        [anon_sym_video] = ACTIONS(164),
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
        [anon_sym_ifdef] = ACTIONS(164),
        [anon_sym_ifndef] = ACTIONS(164),
        [anon_sym_ifeval] = ACTIONS(164),
        [anon_sym_endif] = ACTIONS(164),
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
        [anon_sym_audio] = ACTIONS(168),
        [anon_sym_video] = ACTIONS(168),
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
        [anon_sym_ifdef] = ACTIONS(168),
        [anon_sym_ifndef] = ACTIONS(168),
        [anon_sym_ifeval] = ACTIONS(168),
        [anon_sym_endif] = ACTIONS(168),
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
        [anon_sym_audio] = ACTIONS(172),
        [anon_sym_video] = ACTIONS(172),
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
        [anon_sym_ifdef] = ACTIONS(172),
        [anon_sym_ifndef] = ACTIONS(172),
        [anon_sym_ifeval] = ACTIONS(172),
        [anon_sym_endif] = ACTIONS(172),
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
        [anon_sym_audio] = ACTIONS(178),
        [anon_sym_video] = ACTIONS(178),
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
        [anon_sym_ifdef] = ACTIONS(178),
        [anon_sym_ifndef] = ACTIONS(178),
        [anon_sym_ifeval] = ACTIONS(178),
        [anon_sym_endif] = ACTIONS(178),
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
        [anon_sym_audio] = ACTIONS(182),
        [anon_sym_video] = ACTIONS(182),
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
        [anon_sym_ifdef] = ACTIONS(182),
        [anon_sym_ifndef] = ACTIONS(182),
        [anon_sym_ifeval] = ACTIONS(182),
        [anon_sym_endif] = ACTIONS(182),
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
        [anon_sym_audio] = ACTIONS(186),
        [anon_sym_video] = ACTIONS(186),
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
        [anon_sym_ifdef] = ACTIONS(186),
        [anon_sym_ifndef] = ACTIONS(186),
        [anon_sym_ifeval] = ACTIONS(186),
        [anon_sym_endif] = ACTIONS(186),
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
        [anon_sym_audio] = ACTIONS(190),
        [anon_sym_video] = ACTIONS(190),
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
        [anon_sym_ifdef] = ACTIONS(190),
        [anon_sym_ifndef] = ACTIONS(190),
        [anon_sym_ifeval] = ACTIONS(190),
        [anon_sym_endif] = ACTIONS(190),
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
        [anon_sym_audio] = ACTIONS(194),
        [anon_sym_video] = ACTIONS(194),
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
        [anon_sym_ifdef] = ACTIONS(194),
        [anon_sym_ifndef] = ACTIONS(194),
        [anon_sym_ifeval] = ACTIONS(194),
        [anon_sym_endif] = ACTIONS(194),
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
        [ts_builtin_sym_end] = ACTIONS(196),
        [anon_sym_kbd] = ACTIONS(198),
        [anon_sym_btn] = ACTIONS(198),
        [anon_sym_image] = ACTIONS(198),
        [anon_sym_audio] = ACTIONS(198),
        [anon_sym_video] = ACTIONS(198),
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
        [anon_sym_ifdef] = ACTIONS(198),
        [anon_sym_ifndef] = ACTIONS(198),
        [anon_sym_ifeval] = ACTIONS(198),
        [anon_sym_endif] = ACTIONS(198),
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
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(138),
        [anon_sym_kbd] = ACTIONS(140),
        [anon_sym_btn] = ACTIONS(140),
        [anon_sym_image] = ACTIONS(140),
        [anon_sym_audio] = ACTIONS(140),
        [anon_sym_video] = ACTIONS(140),
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
        [anon_sym_ifdef] = ACTIONS(140),
        [anon_sym_ifndef] = ACTIONS(140),
        [anon_sym_ifeval] = ACTIONS(140),
        [anon_sym_endif] = ACTIONS(140),
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
    [30] = {
        [ts_builtin_sym_end] = ACTIONS(200),
        [anon_sym_kbd] = ACTIONS(202),
        [anon_sym_btn] = ACTIONS(202),
        [anon_sym_image] = ACTIONS(202),
        [anon_sym_audio] = ACTIONS(202),
        [anon_sym_video] = ACTIONS(202),
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
        [anon_sym_ifdef] = ACTIONS(202),
        [anon_sym_ifndef] = ACTIONS(202),
        [anon_sym_ifeval] = ACTIONS(202),
        [anon_sym_endif] = ACTIONS(202),
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
        [anon_sym_audio] = ACTIONS(206),
        [anon_sym_video] = ACTIONS(206),
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
        [anon_sym_ifdef] = ACTIONS(206),
        [anon_sym_ifndef] = ACTIONS(206),
        [anon_sym_ifeval] = ACTIONS(206),
        [anon_sym_endif] = ACTIONS(206),
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
        [anon_sym_audio] = ACTIONS(210),
        [anon_sym_video] = ACTIONS(210),
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
        [anon_sym_ifdef] = ACTIONS(210),
        [anon_sym_ifndef] = ACTIONS(210),
        [anon_sym_ifeval] = ACTIONS(210),
        [anon_sym_endif] = ACTIONS(210),
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
        [anon_sym_audio] = ACTIONS(214),
        [anon_sym_video] = ACTIONS(214),
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
        [anon_sym_ifdef] = ACTIONS(214),
        [anon_sym_ifndef] = ACTIONS(214),
        [anon_sym_ifeval] = ACTIONS(214),
        [anon_sym_endif] = ACTIONS(214),
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
        [anon_sym_audio] = ACTIONS(218),
        [anon_sym_video] = ACTIONS(218),
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
        [anon_sym_ifdef] = ACTIONS(218),
        [anon_sym_ifndef] = ACTIONS(218),
        [anon_sym_ifeval] = ACTIONS(218),
        [anon_sym_endif] = ACTIONS(218),
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
    [0] = 6,
    ACTIONS(224),
    1,
    anon_sym_RBRACK,
    ACTIONS(226),
    1,
    anon_sym_LBRACE,
    STATE(37),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(222),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(45),
    2,
    sym_inline_macro,
    sym_replacement,
    ACTIONS(220),
    20,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_audio,
    anon_sym_video,
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
    anon_sym_ifdef,
    anon_sym_ifndef,
    anon_sym_ifeval,
    anon_sym_endif,
    [40] = 6,
    ACTIONS(226),
    1,
    anon_sym_LBRACE,
    ACTIONS(228),
    1,
    anon_sym_RBRACK,
    STATE(39),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(222),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(45),
    2,
    sym_inline_macro,
    sym_replacement,
    ACTIONS(220),
    20,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_audio,
    anon_sym_video,
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
    anon_sym_ifdef,
    anon_sym_ifndef,
    anon_sym_ifeval,
    anon_sym_endif,
    [80] = 6,
    ACTIONS(226),
    1,
    anon_sym_LBRACE,
    ACTIONS(230),
    1,
    anon_sym_RBRACK,
    STATE(39),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(222),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(45),
    2,
    sym_inline_macro,
    sym_replacement,
    ACTIONS(220),
    20,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_audio,
    anon_sym_video,
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
    anon_sym_ifdef,
    anon_sym_ifndef,
    anon_sym_ifeval,
    anon_sym_endif,
    [120] = 6,
    ACTIONS(226),
    1,
    anon_sym_LBRACE,
    ACTIONS(232),
    1,
    anon_sym_RBRACK,
    STATE(41),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(222),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(45),
    2,
    sym_inline_macro,
    sym_replacement,
    ACTIONS(220),
    20,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_audio,
    anon_sym_video,
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
    anon_sym_ifdef,
    anon_sym_ifndef,
    anon_sym_ifeval,
    anon_sym_endif,
    [160] = 6,
    ACTIONS(240),
    1,
    anon_sym_RBRACK,
    ACTIONS(242),
    1,
    anon_sym_LBRACE,
    STATE(39),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(237),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(45),
    2,
    sym_inline_macro,
    sym_replacement,
    ACTIONS(234),
    20,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_audio,
    anon_sym_video,
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
    anon_sym_ifdef,
    anon_sym_ifndef,
    anon_sym_ifeval,
    anon_sym_endif,
    [200] = 6,
    ACTIONS(226),
    1,
    anon_sym_LBRACE,
    ACTIONS(245),
    1,
    anon_sym_RBRACK,
    STATE(36),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(222),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(45),
    2,
    sym_inline_macro,
    sym_replacement,
    ACTIONS(220),
    20,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_audio,
    anon_sym_video,
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
    anon_sym_ifdef,
    anon_sym_ifndef,
    anon_sym_ifeval,
    anon_sym_endif,
    [240] = 6,
    ACTIONS(226),
    1,
    anon_sym_LBRACE,
    ACTIONS(247),
    1,
    anon_sym_RBRACK,
    STATE(39),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(222),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(45),
    2,
    sym_inline_macro,
    sym_replacement,
    ACTIONS(220),
    20,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_audio,
    anon_sym_video,
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
    anon_sym_ifdef,
    anon_sym_ifndef,
    anon_sym_ifeval,
    anon_sym_endif,
    [280] = 6,
    ACTIONS(226),
    1,
    anon_sym_LBRACE,
    ACTIONS(249),
    1,
    anon_sym_RBRACK,
    STATE(43),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(222),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(45),
    2,
    sym_inline_macro,
    sym_replacement,
    ACTIONS(220),
    20,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_audio,
    anon_sym_video,
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
    anon_sym_ifdef,
    anon_sym_ifndef,
    anon_sym_ifeval,
    anon_sym_endif,
    [320] = 6,
    ACTIONS(226),
    1,
    anon_sym_LBRACE,
    ACTIONS(251),
    1,
    anon_sym_RBRACK,
    STATE(39),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(222),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(45),
    2,
    sym_inline_macro,
    sym_replacement,
    ACTIONS(220),
    20,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_audio,
    anon_sym_video,
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
    anon_sym_ifdef,
    anon_sym_ifndef,
    anon_sym_ifeval,
    anon_sym_endif,
    [360] = 1,
    ACTIONS(168),
    24,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_audio,
    anon_sym_video,
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
    anon_sym_ifdef,
    anon_sym_ifndef,
    anon_sym_ifeval,
    anon_sym_endif,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    anon_sym_LBRACE,
    [387] = 1,
    ACTIONS(253),
    24,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_audio,
    anon_sym_video,
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
    anon_sym_ifdef,
    anon_sym_ifndef,
    anon_sym_ifeval,
    anon_sym_endif,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    anon_sym_LBRACE,
    [414] = 1,
    ACTIONS(156),
    24,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_audio,
    anon_sym_video,
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
    anon_sym_ifdef,
    anon_sym_ifndef,
    anon_sym_ifeval,
    anon_sym_endif,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    anon_sym_LBRACE,
    [441] = 1,
    ACTIONS(194),
    24,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_audio,
    anon_sym_video,
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
    anon_sym_ifdef,
    anon_sym_ifndef,
    anon_sym_ifeval,
    anon_sym_endif,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    anon_sym_LBRACE,
    [468] = 1,
    ACTIONS(164),
    24,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_audio,
    anon_sym_video,
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
    anon_sym_ifdef,
    anon_sym_ifndef,
    anon_sym_ifeval,
    anon_sym_endif,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    anon_sym_LBRACE,
    [495] = 1,
    ACTIONS(160),
    24,
    anon_sym_kbd,
    anon_sym_btn,
    anon_sym_image,
    anon_sym_audio,
    anon_sym_video,
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
    anon_sym_ifdef,
    anon_sym_ifndef,
    anon_sym_ifeval,
    anon_sym_endif,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    anon_sym_LBRACE,
    [522] = 9,
    ACTIONS(255),
    1,
    anon_sym_STAR2,
    ACTIONS(258),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(266),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(269),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(272),
    1,
    anon_sym_POUND2,
    ACTIONS(275),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(261),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    ACTIONS(264),
    2,
    anon_sym__3,
    anon_sym___,
    STATE(50),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [555] = 9,
    ACTIONS(283),
    1,
    anon_sym__2,
    ACTIONS(286),
    1,
    anon_sym___,
    ACTIONS(289),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(292),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(295),
    1,
    anon_sym_POUND2,
    ACTIONS(298),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(278),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    ACTIONS(281),
    2,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    STATE(51),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [588] = 9,
    ACTIONS(303),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(305),
    1,
    anon_sym__2,
    ACTIONS(307),
    1,
    anon_sym___,
    ACTIONS(309),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(311),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(313),
    1,
    anon_sym_POUND2,
    ACTIONS(315),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(301),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(60),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [620] = 9,
    ACTIONS(305),
    1,
    anon_sym__2,
    ACTIONS(307),
    1,
    anon_sym___,
    ACTIONS(309),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(311),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(313),
    1,
    anon_sym_POUND2,
    ACTIONS(315),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(319),
    1,
    anon_sym_STAR3,
    ACTIONS(317),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(51),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [652] = 9,
    ACTIONS(305),
    1,
    anon_sym__2,
    ACTIONS(307),
    1,
    anon_sym___,
    ACTIONS(309),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(311),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(313),
    1,
    anon_sym_POUND2,
    ACTIONS(315),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(323),
    1,
    anon_sym_STAR3,
    ACTIONS(321),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(67),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [684] = 9,
    ACTIONS(305),
    1,
    anon_sym__2,
    ACTIONS(307),
    1,
    anon_sym___,
    ACTIONS(309),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(311),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(313),
    1,
    anon_sym_POUND2,
    ACTIONS(315),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(323),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(325),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(66),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [716] = 9,
    ACTIONS(327),
    1,
    anon_sym_STAR2,
    ACTIONS(329),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(333),
    1,
    anon_sym__3,
    ACTIONS(335),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(337),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(339),
    1,
    anon_sym_POUND2,
    ACTIONS(341),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(331),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(65),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [748] = 9,
    ACTIONS(327),
    1,
    anon_sym_STAR2,
    ACTIONS(329),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(333),
    1,
    anon_sym___,
    ACTIONS(335),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(337),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(339),
    1,
    anon_sym_POUND2,
    ACTIONS(341),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(343),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(64),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [780] = 9,
    ACTIONS(327),
    1,
    anon_sym_STAR2,
    ACTIONS(329),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(335),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(337),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(339),
    1,
    anon_sym_POUND2,
    ACTIONS(341),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(347),
    1,
    anon_sym___,
    ACTIONS(345),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(50),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [812] = 9,
    ACTIONS(327),
    1,
    anon_sym_STAR2,
    ACTIONS(329),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(335),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(337),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(339),
    1,
    anon_sym_POUND2,
    ACTIONS(341),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(347),
    1,
    anon_sym__3,
    ACTIONS(345),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(50),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [844] = 9,
    ACTIONS(305),
    1,
    anon_sym__2,
    ACTIONS(307),
    1,
    anon_sym___,
    ACTIONS(309),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(311),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(313),
    1,
    anon_sym_POUND2,
    ACTIONS(315),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(319),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(317),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(51),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [876] = 9,
    ACTIONS(327),
    1,
    anon_sym_STAR2,
    ACTIONS(329),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(335),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(337),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(339),
    1,
    anon_sym_POUND2,
    ACTIONS(341),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(351),
    1,
    anon_sym___,
    ACTIONS(349),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(58),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [908] = 9,
    ACTIONS(327),
    1,
    anon_sym_STAR2,
    ACTIONS(329),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(335),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(337),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(339),
    1,
    anon_sym_POUND2,
    ACTIONS(341),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(351),
    1,
    anon_sym__3,
    ACTIONS(353),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(59),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [940] = 9,
    ACTIONS(303),
    1,
    anon_sym_STAR3,
    ACTIONS(305),
    1,
    anon_sym__2,
    ACTIONS(307),
    1,
    anon_sym___,
    ACTIONS(309),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(311),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(313),
    1,
    anon_sym_POUND2,
    ACTIONS(315),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(355),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(53),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [972] = 9,
    ACTIONS(327),
    1,
    anon_sym_STAR2,
    ACTIONS(329),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(335),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(337),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(339),
    1,
    anon_sym_POUND2,
    ACTIONS(341),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(357),
    1,
    anon_sym___,
    ACTIONS(345),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(50),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [1004] = 9,
    ACTIONS(327),
    1,
    anon_sym_STAR2,
    ACTIONS(329),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(335),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(337),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(339),
    1,
    anon_sym_POUND2,
    ACTIONS(341),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(357),
    1,
    anon_sym__3,
    ACTIONS(345),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(50),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [1036] = 9,
    ACTIONS(305),
    1,
    anon_sym__2,
    ACTIONS(307),
    1,
    anon_sym___,
    ACTIONS(309),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(311),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(313),
    1,
    anon_sym_POUND2,
    ACTIONS(315),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(359),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(317),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(51),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [1068] = 9,
    ACTIONS(305),
    1,
    anon_sym__2,
    ACTIONS(307),
    1,
    anon_sym___,
    ACTIONS(309),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(311),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(313),
    1,
    anon_sym_POUND2,
    ACTIONS(315),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(359),
    1,
    anon_sym_STAR3,
    ACTIONS(317),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(51),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [1100] = 1,
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
    [1113] = 1,
    ACTIONS(128),
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
    [1126] = 1,
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
    [1139] = 1,
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
    [1152] = 1,
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
    [1165] = 1,
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
    [1178] = 1,
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
    [1191] = 1,
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
    [1204] = 1,
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
    [1217] = 1,
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
    [1230] = 1,
    ACTIONS(206),
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
    [1243] = 1,
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
    [1256] = 5,
    ACTIONS(363),
    1,
    anon_sym_RBRACK,
    ACTIONS(365),
    1,
    anon_sym_LBRACE,
    STATE(148),
    1,
    sym_link_label,
    ACTIONS(361),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(89),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1274] = 5,
    ACTIONS(365),
    1,
    anon_sym_LBRACE,
    ACTIONS(367),
    1,
    anon_sym_RBRACK,
    STATE(150),
    1,
    sym_link_label,
    ACTIONS(361),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(89),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1292] = 5,
    ACTIONS(372),
    1,
    anon_sym_LBRACK,
    ACTIONS(374),
    1,
    anon_sym_LBRACE,
    STATE(82),
    1,
    aux_sym_inline_macro_repeat1,
    STATE(118),
    1,
    sym_replacement,
    ACTIONS(369),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1309] = 4,
    ACTIONS(380),
    1,
    anon_sym_RBRACK,
    ACTIONS(382),
    1,
    anon_sym_LBRACE,
    ACTIONS(377),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(83),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1324] = 5,
    ACTIONS(387),
    1,
    anon_sym_LBRACK,
    ACTIONS(389),
    1,
    anon_sym_LBRACE,
    STATE(87),
    1,
    aux_sym_inline_macro_repeat1,
    STATE(118),
    1,
    sym_replacement,
    ACTIONS(385),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1341] = 3,
    STATE(85),
    1,
    aux_sym_xref_repeat1,
    ACTIONS(391),
    2,
    anon_sym_COMMA,
    anon_sym_GT_GT,
    ACTIONS(393),
    3,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    [1354] = 4,
    ACTIONS(396),
    1,
    anon_sym_COMMA,
    ACTIONS(400),
    1,
    anon_sym_GT_GT,
    STATE(85),
    1,
    aux_sym_xref_repeat1,
    ACTIONS(398),
    3,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    [1369] = 5,
    ACTIONS(389),
    1,
    anon_sym_LBRACE,
    ACTIONS(402),
    1,
    anon_sym_LBRACK,
    STATE(82),
    1,
    aux_sym_inline_macro_repeat1,
    STATE(118),
    1,
    sym_replacement,
    ACTIONS(385),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1386] = 5,
    ACTIONS(389),
    1,
    anon_sym_LBRACE,
    ACTIONS(404),
    1,
    anon_sym_LBRACK,
    STATE(90),
    1,
    aux_sym_inline_macro_repeat1,
    STATE(118),
    1,
    sym_replacement,
    ACTIONS(385),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1403] = 4,
    ACTIONS(365),
    1,
    anon_sym_LBRACE,
    ACTIONS(408),
    1,
    anon_sym_RBRACK,
    ACTIONS(406),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(83),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1418] = 5,
    ACTIONS(389),
    1,
    anon_sym_LBRACE,
    ACTIONS(410),
    1,
    anon_sym_LBRACK,
    STATE(82),
    1,
    aux_sym_inline_macro_repeat1,
    STATE(118),
    1,
    sym_replacement,
    ACTIONS(385),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1435] = 3,
    ACTIONS(414),
    1,
    anon_sym_PLUS_PLUS_PLUS,
    STATE(93),
    1,
    aux_sym_passthrough_repeat2,
    ACTIONS(412),
    3,
    aux_sym_passthrough_token1,
    anon_sym_BSLASH_PLUS,
    anon_sym_BSLASH_PLUS_PLUS_PLUS,
    [1447] = 3,
    ACTIONS(416),
    1,
    anon_sym_DOLLAR_DOLLAR,
    STATE(92),
    1,
    aux_sym_passthrough_repeat3,
    ACTIONS(418),
    3,
    aux_sym_passthrough_token2,
    anon_sym_BSLASH_DOLLAR,
    anon_sym_BSLASH_DOLLAR_DOLLAR,
    [1459] = 3,
    ACTIONS(424),
    1,
    anon_sym_PLUS_PLUS_PLUS,
    STATE(93),
    1,
    aux_sym_passthrough_repeat2,
    ACTIONS(421),
    3,
    aux_sym_passthrough_token1,
    anon_sym_BSLASH_PLUS,
    anon_sym_BSLASH_PLUS_PLUS_PLUS,
    [1471] = 3,
    STATE(94),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(426),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    ACTIONS(429),
    2,
    anon_sym_POUND3,
    anon_sym_POUND_POUND,
    [1483] = 3,
    STATE(95),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(431),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    ACTIONS(434),
    2,
    anon_sym_BQUOTE3,
    anon_sym_BQUOTE_BQUOTE,
    [1495] = 3,
    ACTIONS(414),
    1,
    anon_sym_DOLLAR_DOLLAR,
    STATE(92),
    1,
    aux_sym_passthrough_repeat3,
    ACTIONS(436),
    3,
    aux_sym_passthrough_token2,
    anon_sym_BSLASH_DOLLAR,
    anon_sym_BSLASH_DOLLAR_DOLLAR,
    [1507] = 1,
    ACTIONS(438),
    5,
    anon_sym_COMMA,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    anon_sym_GT_GT,
    [1515] = 3,
    ACTIONS(442),
    1,
    anon_sym_BQUOTE3,
    STATE(95),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(440),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1526] = 3,
    ACTIONS(446),
    1,
    anon_sym_POUND_POUND,
    STATE(124),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(444),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1537] = 3,
    ACTIONS(450),
    1,
    anon_sym_GT_GT,
    STATE(104),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(448),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [1548] = 3,
    ACTIONS(454),
    1,
    anon_sym_POUND_POUND,
    STATE(94),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(452),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1559] = 3,
    ACTIONS(454),
    1,
    anon_sym_POUND3,
    STATE(94),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(452),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1570] = 3,
    ACTIONS(456),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(95),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(440),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1581] = 3,
    ACTIONS(461),
    1,
    anon_sym_GT_GT,
    STATE(104),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(458),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [1592] = 1,
    ACTIONS(156),
    4,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    anon_sym_LBRACK,
    anon_sym_LBRACE,
    [1599] = 3,
    ACTIONS(463),
    1,
    anon_sym_DOT,
    STATE(112),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(109),
    2,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    [1610] = 3,
    ACTIONS(456),
    1,
    anon_sym_BQUOTE3,
    STATE(95),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(440),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1621] = 3,
    ACTIONS(467),
    1,
    anon_sym_POUND_POUND,
    STATE(101),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(465),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1632] = 3,
    ACTIONS(467),
    1,
    anon_sym_POUND3,
    STATE(102),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(469),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1643] = 3,
    ACTIONS(473),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(103),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(471),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1654] = 3,
    ACTIONS(473),
    1,
    anon_sym_BQUOTE3,
    STATE(107),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(475),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1665] = 3,
    ACTIONS(463),
    1,
    anon_sym_DOT,
    STATE(116),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(115),
    2,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    [1676] = 2,
    STATE(91),
    1,
    aux_sym_passthrough_repeat2,
    ACTIONS(477),
    3,
    aux_sym_passthrough_token1,
    anon_sym_BSLASH_PLUS,
    anon_sym_BSLASH_PLUS_PLUS_PLUS,
    [1685] = 3,
    ACTIONS(479),
    1,
    anon_sym_PLUS,
    STATE(114),
    1,
    aux_sym_passthrough_repeat1,
    ACTIONS(481),
    2,
    aux_sym_passthrough_token1,
    anon_sym_BSLASH_PLUS,
    [1696] = 2,
    STATE(96),
    1,
    aux_sym_passthrough_repeat3,
    ACTIONS(484),
    3,
    aux_sym_passthrough_token2,
    anon_sym_BSLASH_DOLLAR,
    anon_sym_BSLASH_DOLLAR_DOLLAR,
    [1705] = 3,
    ACTIONS(486),
    1,
    anon_sym_DOT,
    STATE(116),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(119),
    2,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    [1716] = 2,
    STATE(86),
    1,
    aux_sym_xref_repeat1,
    ACTIONS(398),
    3,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    [1725] = 1,
    ACTIONS(489),
    4,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    anon_sym_LBRACK,
    anon_sym_LBRACE,
    [1732] = 3,
    ACTIONS(491),
    1,
    anon_sym_POUND_POUND,
    STATE(94),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(452),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1743] = 1,
    ACTIONS(156),
    4,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    anon_sym_LBRACE,
    [1750] = 3,
    ACTIONS(491),
    1,
    anon_sym_POUND3,
    STATE(94),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(452),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1761] = 3,
    ACTIONS(442),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(95),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(440),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1772] = 3,
    ACTIONS(495),
    1,
    anon_sym_BQUOTE3,
    STATE(98),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(493),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1783] = 3,
    ACTIONS(497),
    1,
    anon_sym_POUND_POUND,
    STATE(94),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(452),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1794] = 3,
    ACTIONS(414),
    1,
    anon_sym_PLUS,
    STATE(114),
    1,
    aux_sym_passthrough_repeat1,
    ACTIONS(499),
    2,
    aux_sym_passthrough_token1,
    anon_sym_BSLASH_PLUS,
    [1805] = 3,
    ACTIONS(497),
    1,
    anon_sym_POUND3,
    STATE(94),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(452),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1816] = 3,
    ACTIONS(501),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(95),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(440),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1827] = 3,
    ACTIONS(505),
    1,
    anon_sym_BQUOTE3,
    STATE(131),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(503),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1838] = 3,
    ACTIONS(505),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(127),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(507),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1849] = 3,
    ACTIONS(446),
    1,
    anon_sym_POUND3,
    STATE(126),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(509),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1860] = 3,
    ACTIONS(501),
    1,
    anon_sym_BQUOTE3,
    STATE(95),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(440),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1871] = 3,
    ACTIONS(495),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(122),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(511),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1882] = 3,
    ACTIONS(515),
    1,
    anon_sym_POUND3,
    STATE(121),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(513),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1893] = 3,
    ACTIONS(515),
    1,
    anon_sym_POUND_POUND,
    STATE(119),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(517),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1904] = 1,
    ACTIONS(519),
    3,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    anon_sym_GT_GT,
    [1910] = 2,
    STATE(100),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(448),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [1918] = 1,
    ACTIONS(119),
    3,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    anon_sym_DOT,
    [1924] = 2,
    ACTIONS(521),
    1,
    anon_sym_LBRACK,
    ACTIONS(523),
    1,
    anon_sym_DQUOTE,
    [1931] = 2,
    ACTIONS(525),
    1,
    anon_sym_COMMA,
    ACTIONS(527),
    1,
    anon_sym_RBRACK_RBRACK,
    [1938] = 1,
    ACTIONS(529),
    1,
    anon_sym_DQUOTE,
    [1942] = 1,
    ACTIONS(531),
    1,
    anon_sym_RBRACE,
    [1946] = 1,
    ACTIONS(533),
    1,
    anon_sym_RBRACE,
    [1950] = 1,
    ACTIONS(535),
    1,
    sym__link_component,
    [1954] = 1,
    ACTIONS(537),
    1,
    aux_sym_replacement_token1,
    [1958] = 1,
    ACTIONS(539),
    1,
    sym__link_component,
    [1962] = 1,
    ACTIONS(541),
    1,
    aux_sym_anchor_token2,
    [1966] = 1,
    ACTIONS(543),
    1,
    sym__link_component,
    [1970] = 1,
    ACTIONS(545),
    1,
    anon_sym_RBRACK,
    [1974] = 1,
    ACTIONS(547),
    1,
    ts_builtin_sym_end,
    [1978] = 1,
    ACTIONS(549),
    1,
    anon_sym_RBRACK,
    [1982] = 1,
    ACTIONS(551),
    1,
    anon_sym_DQUOTE,
    [1986] = 1,
    ACTIONS(553),
    1,
    anon_sym_COLON,
    [1990] = 1,
    ACTIONS(555),
    1,
    anon_sym_RBRACE,
    [1994] = 1,
    ACTIONS(557),
    1,
    anon_sym_RBRACK_RBRACK,
    [1998] = 1,
    ACTIONS(559),
    1,
    sym__link_component,
    [2002] = 1,
    ACTIONS(561),
    1,
    anon_sym_RBRACE,
    [2006] = 1,
    ACTIONS(563),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [2010] = 1,
    ACTIONS(565),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [2014] = 1,
    ACTIONS(567),
    1,
    aux_sym_replacement_token1,
    [2018] = 1,
    ACTIONS(569),
    1,
    aux_sym_anchor_token1,
    [2022] = 1,
    ACTIONS(571),
    1,
    aux_sym_replacement_token1,
    [2026] = 1,
    ACTIONS(573),
    1,
    anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(35)] = 0,
    [SMALL_STATE(36)] = 40,
    [SMALL_STATE(37)] = 80,
    [SMALL_STATE(38)] = 120,
    [SMALL_STATE(39)] = 160,
    [SMALL_STATE(40)] = 200,
    [SMALL_STATE(41)] = 240,
    [SMALL_STATE(42)] = 280,
    [SMALL_STATE(43)] = 320,
    [SMALL_STATE(44)] = 360,
    [SMALL_STATE(45)] = 387,
    [SMALL_STATE(46)] = 414,
    [SMALL_STATE(47)] = 441,
    [SMALL_STATE(48)] = 468,
    [SMALL_STATE(49)] = 495,
    [SMALL_STATE(50)] = 522,
    [SMALL_STATE(51)] = 555,
    [SMALL_STATE(52)] = 588,
    [SMALL_STATE(53)] = 620,
    [SMALL_STATE(54)] = 652,
    [SMALL_STATE(55)] = 684,
    [SMALL_STATE(56)] = 716,
    [SMALL_STATE(57)] = 748,
    [SMALL_STATE(58)] = 780,
    [SMALL_STATE(59)] = 812,
    [SMALL_STATE(60)] = 844,
    [SMALL_STATE(61)] = 876,
    [SMALL_STATE(62)] = 908,
    [SMALL_STATE(63)] = 940,
    [SMALL_STATE(64)] = 972,
    [SMALL_STATE(65)] = 1004,
    [SMALL_STATE(66)] = 1036,
    [SMALL_STATE(67)] = 1068,
    [SMALL_STATE(68)] = 1100,
    [SMALL_STATE(69)] = 1113,
    [SMALL_STATE(70)] = 1126,
    [SMALL_STATE(71)] = 1139,
    [SMALL_STATE(72)] = 1152,
    [SMALL_STATE(73)] = 1165,
    [SMALL_STATE(74)] = 1178,
    [SMALL_STATE(75)] = 1191,
    [SMALL_STATE(76)] = 1204,
    [SMALL_STATE(77)] = 1217,
    [SMALL_STATE(78)] = 1230,
    [SMALL_STATE(79)] = 1243,
    [SMALL_STATE(80)] = 1256,
    [SMALL_STATE(81)] = 1274,
    [SMALL_STATE(82)] = 1292,
    [SMALL_STATE(83)] = 1309,
    [SMALL_STATE(84)] = 1324,
    [SMALL_STATE(85)] = 1341,
    [SMALL_STATE(86)] = 1354,
    [SMALL_STATE(87)] = 1369,
    [SMALL_STATE(88)] = 1386,
    [SMALL_STATE(89)] = 1403,
    [SMALL_STATE(90)] = 1418,
    [SMALL_STATE(91)] = 1435,
    [SMALL_STATE(92)] = 1447,
    [SMALL_STATE(93)] = 1459,
    [SMALL_STATE(94)] = 1471,
    [SMALL_STATE(95)] = 1483,
    [SMALL_STATE(96)] = 1495,
    [SMALL_STATE(97)] = 1507,
    [SMALL_STATE(98)] = 1515,
    [SMALL_STATE(99)] = 1526,
    [SMALL_STATE(100)] = 1537,
    [SMALL_STATE(101)] = 1548,
    [SMALL_STATE(102)] = 1559,
    [SMALL_STATE(103)] = 1570,
    [SMALL_STATE(104)] = 1581,
    [SMALL_STATE(105)] = 1592,
    [SMALL_STATE(106)] = 1599,
    [SMALL_STATE(107)] = 1610,
    [SMALL_STATE(108)] = 1621,
    [SMALL_STATE(109)] = 1632,
    [SMALL_STATE(110)] = 1643,
    [SMALL_STATE(111)] = 1654,
    [SMALL_STATE(112)] = 1665,
    [SMALL_STATE(113)] = 1676,
    [SMALL_STATE(114)] = 1685,
    [SMALL_STATE(115)] = 1696,
    [SMALL_STATE(116)] = 1705,
    [SMALL_STATE(117)] = 1716,
    [SMALL_STATE(118)] = 1725,
    [SMALL_STATE(119)] = 1732,
    [SMALL_STATE(120)] = 1743,
    [SMALL_STATE(121)] = 1750,
    [SMALL_STATE(122)] = 1761,
    [SMALL_STATE(123)] = 1772,
    [SMALL_STATE(124)] = 1783,
    [SMALL_STATE(125)] = 1794,
    [SMALL_STATE(126)] = 1805,
    [SMALL_STATE(127)] = 1816,
    [SMALL_STATE(128)] = 1827,
    [SMALL_STATE(129)] = 1838,
    [SMALL_STATE(130)] = 1849,
    [SMALL_STATE(131)] = 1860,
    [SMALL_STATE(132)] = 1871,
    [SMALL_STATE(133)] = 1882,
    [SMALL_STATE(134)] = 1893,
    [SMALL_STATE(135)] = 1904,
    [SMALL_STATE(136)] = 1910,
    [SMALL_STATE(137)] = 1918,
    [SMALL_STATE(138)] = 1924,
    [SMALL_STATE(139)] = 1931,
    [SMALL_STATE(140)] = 1938,
    [SMALL_STATE(141)] = 1942,
    [SMALL_STATE(142)] = 1946,
    [SMALL_STATE(143)] = 1950,
    [SMALL_STATE(144)] = 1954,
    [SMALL_STATE(145)] = 1958,
    [SMALL_STATE(146)] = 1962,
    [SMALL_STATE(147)] = 1966,
    [SMALL_STATE(148)] = 1970,
    [SMALL_STATE(149)] = 1974,
    [SMALL_STATE(150)] = 1978,
    [SMALL_STATE(151)] = 1982,
    [SMALL_STATE(152)] = 1986,
    [SMALL_STATE(153)] = 1990,
    [SMALL_STATE(154)] = 1994,
    [SMALL_STATE(155)] = 1998,
    [SMALL_STATE(156)] = 2002,
    [SMALL_STATE(157)] = 2006,
    [SMALL_STATE(158)] = 2010,
    [SMALL_STATE(159)] = 2014,
    [SMALL_STATE(160)] = 2018,
    [SMALL_STATE(161)] = 2022,
    [SMALL_STATE(162)] = 2026,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(152),
    [5] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(2),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(5),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(6),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(4),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(160),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(158),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(113),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(115),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(117),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(54),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(55),
    [27] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(56),
    [29] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(57),
    [31] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(123),
    [33] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(132),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(133),
    [37] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(134),
    [39] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [41] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(3),
    [43] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    [45] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(152),
    [48] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(3),
    [51] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(5),
    [54] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(6),
    [57] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(4),
    [60] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(160),
    [63] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(158),
    [66] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(113),
    [69] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(115),
    [72] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(117),
    [75] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(54),
    [78] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(55),
    [81] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(56),
    [84] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(57),
    [87] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(123),
    [90] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(132),
    [93] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(133),
    [96] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(134),
    [99] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__punctuation, 1, 0, 0),
    [101] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__punctuation, 1, 0, 0),
    [103] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(125),
    [105] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(142),
    [107] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(157),
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
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [121] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [123] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(155),
    [126] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 2, 0, 0),
    [128] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 2, 0, 0),
    [130] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 3, 0, 0),
    [132] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 3, 0, 0),
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
    REDUCE(sym_anchor, 5, 0, 0),
    [148] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 5, 0, 0),
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
    SHIFT(80),
    [176] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [178] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [180] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 3, 0, 0),
    [182] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 3, 0, 0),
    [184] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 2, 0, 0),
    [186] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 2, 0, 0),
    [188] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 3, 0, 1),
    [190] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 3, 0, 1),
    [192] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 4, 0, 0),
    [194] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 4, 0, 0),
    [196] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [198] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [200] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 3, 0, 0),
    [202] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 3, 0, 0),
    [204] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [206] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [208] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [210] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [212] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [214] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [216] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [218] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [220] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(162),
    [222] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(45),
    [224] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(49),
    [226] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(161),
    [228] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(21),
    [230] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(48),
    [232] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(19),
    [234] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(162),
    [237] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(45),
    [240] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0),
    [242] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(161),
    [245] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(27),
    [247] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(20),
    [249] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(47),
    [251] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(44),
    [253] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 1, 0, 0),
    [255] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(63),
    [258] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(52),
    [261] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(50),
    [264] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    [266] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(111),
    [269] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(110),
    [272] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(109),
    [275] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(108),
    [278] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(51),
    [281] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    [283] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(62),
    [286] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(61),
    [289] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(128),
    [292] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(129),
    [295] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(130),
    [298] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(99),
    [301] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(60),
    [303] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(73),
    [305] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [307] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(61),
    [309] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(128),
    [311] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(129),
    [313] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(130),
    [315] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(99),
    [317] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(51),
    [319] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(78),
    [321] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(67),
    [323] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(32),
    [325] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(66),
    [327] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(63),
    [329] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(52),
    [331] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(65),
    [333] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(33),
    [335] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(111),
    [337] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(110),
    [339] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(109),
    [341] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(108),
    [343] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(64),
    [345] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(50),
    [347] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(77),
    [349] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(58),
    [351] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(70),
    [353] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(59),
    [355] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(53),
    [357] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(34),
    [359] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(31),
    [361] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(89),
    [363] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(29),
    [365] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(159),
    [367] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(140),
    [369] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(118),
    [372] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 2, 0, 0),
    [374] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(144),
    [377] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    SHIFT_REPEAT(83),
    [380] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    [382] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    SHIFT_REPEAT(159),
    [385] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(118),
    [387] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(40),
    [389] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(144),
    [391] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 2, 0, 0),
    [393] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 2, 0, 0),
    SHIFT_REPEAT(97),
    [396] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(136),
    [398] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(97),
    [400] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(26),
    [402] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(38),
    [404] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(42),
    [406] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(83),
    [408] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_label, 1, 0, 0),
    [410] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(35),
    [412] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(93),
    [414] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(12),
    [416] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_passthrough_repeat3, 2, 0, 0),
    [418] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_passthrough_repeat3, 2, 0, 0),
    SHIFT_REPEAT(92),
    [421] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_passthrough_repeat2, 2, 0, 0),
    SHIFT_REPEAT(93),
    [424] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_passthrough_repeat2, 2, 0, 0),
    [426] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    SHIFT_REPEAT(94),
    [429] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    [431] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    SHIFT_REPEAT(95),
    [434] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    [436] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(92),
    [438] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 1, 0, 0),
    [440] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(95),
    [442] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(11),
    [444] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(124),
    [446] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(79),
    [448] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(135),
    [450] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(14),
    [452] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(94),
    [454] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(75),
    [456] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(76),
    [458] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 2, 0, 0),
    SHIFT_REPEAT(135),
    [461] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 2, 0, 0),
    [463] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(145),
    [465] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(101),
    [467] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(68),
    [469] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(102),
    [471] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(103),
    [473] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(72),
    [475] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(107),
    [477] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(91),
    [479] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_passthrough_repeat1, 2, 0, 0),
    [481] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_passthrough_repeat1, 2, 0, 0),
    SHIFT_REPEAT(114),
    [484] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(96),
    [486] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(145),
    [489] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 1, 0, 0),
    [491] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(30),
    [493] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(98),
    [495] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(10),
    [497] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(74),
    [499] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(114),
    [501] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(71),
    [503] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(131),
    [505] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(69),
    [507] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(127),
    [509] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(126),
    [511] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(122),
    [513] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(121),
    [515] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(25),
    [517] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(119),
    [519] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 1, 0, 0),
    [521] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(81),
    [523] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [525] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(146),
    [527] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [529] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [531] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(120),
    [533] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [535] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [537] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(153),
    [539] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(137),
    [541] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(154),
    [543] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(106),
    [545] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [547] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [549] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(151),
    [551] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [553] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [555] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(105),
    [557] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [559] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [561] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [563] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(147),
    [565] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(143),
    [567] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(141),
    [569] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(139),
    [571] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(156),
    [573] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
};

enum ts_external_scanner_symbol_identifiers {
    ts_external_token__eof = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
    [ts_external_token__eof] = sym__eof,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
    [1] = {
        [ts_external_token__eof] = true,
    },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_asciidoc_inline_external_scanner_create(void);
void tree_sitter_asciidoc_inline_external_scanner_destroy(void *);
bool tree_sitter_asciidoc_inline_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_asciidoc_inline_external_scanner_serialize(void *, char *);
void tree_sitter_asciidoc_inline_external_scanner_deserialize(void *, const char *, unsigned);

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
        .external_scanner = {
            &ts_external_scanner_states[0][0],
            ts_external_scanner_symbol_map,
            tree_sitter_asciidoc_inline_external_scanner_create,
            tree_sitter_asciidoc_inline_external_scanner_destroy,
            tree_sitter_asciidoc_inline_external_scanner_scan,
            tree_sitter_asciidoc_inline_external_scanner_serialize,
            tree_sitter_asciidoc_inline_external_scanner_deserialize,
        },
        .primary_state_ids = ts_primary_state_ids,
    };
    return &language;
}
#ifdef __cplusplus
}
#endif
