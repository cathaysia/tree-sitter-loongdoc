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
#define STATE_COUNT 257
#define LARGE_STATE_COUNT 54
#define SYMBOL_COUNT 149
#define ALIAS_COUNT 3
#define TOKEN_COUNT 110
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
    anon_sym_LT_LT = 72,
    aux_sym_xref_token1 = 73,
    anon_sym_BSLASH_COMMA = 74,
    anon_sym_BSLASH_GT = 75,
    aux_sym_xref_token2 = 76,
    anon_sym_GT_GT = 77,
    anon_sym_xref = 78,
    aux_sym_xref_token3 = 79,
    anon_sym_STAR2 = 80,
    aux_sym_emphasis_token1 = 81,
    anon_sym_BSLASH_STAR = 82,
    anon_sym_STAR3 = 83,
    anon_sym_STAR_STAR = 84,
    anon_sym__2 = 85,
    aux_sym_ltalic_token1 = 86,
    anon_sym_BSLASH_ = 87,
    anon_sym__3 = 88,
    anon_sym___ = 89,
    anon_sym_BQUOTE2 = 90,
    aux_sym_monospace_token1 = 91,
    anon_sym_BSLASH_BQUOTE = 92,
    anon_sym_BQUOTE3 = 93,
    anon_sym_BQUOTE_BQUOTE = 94,
    anon_sym_POUND2 = 95,
    aux_sym_highlight_token1 = 96,
    anon_sym_BSLASH_POUND = 97,
    anon_sym_POUND3 = 98,
    anon_sym_POUND_POUND = 99,
    anon_sym_pass = 100,
    anon_sym_c = 101,
    anon_sym_a = 102,
    anon_sym_r = 103,
    anon_sym_m = 104,
    anon_sym_p = 105,
    anon_sym_n = 106,
    anon_sym_v = 107,
    anon_sym_quotes = 108,
    anon_sym_q = 109,
    sym_inline = 110,
    sym_replacement = 111,
    sym__word = 112,
    sym__punctuation = 113,
    sym_anchor = 114,
    sym_footnote_macro = 115,
    sym_image_macro = 116,
    sym_kbd_macro = 117,
    sym_key = 118,
    sym_auto_link = 119,
    sym_link_label = 120,
    sym_link_url = 121,
    sym_link_macro = 122,
    sym_math_macro = 123,
    sym_menu_macro = 124,
    sym_passthrough = 125,
    sym_xref = 126,
    sym_emphasis = 127,
    sym_ltalic = 128,
    sym_monospace = 129,
    sym_highlight = 130,
    sym_pass_macro = 131,
    sym_pass_macro_attr = 132,
    aux_sym__macro_rule = 133,
    aux_sym_inline_repeat1 = 134,
    aux_sym_image_macro_repeat1 = 135,
    aux_sym_kbd_macro_repeat1 = 136,
    aux_sym_kbd_macro_repeat2 = 137,
    aux_sym_link_label_repeat1 = 138,
    aux_sym_link_url_repeat1 = 139,
    aux_sym_xref_repeat1 = 140,
    aux_sym_xref_repeat2 = 141,
    aux_sym_xref_repeat3 = 142,
    aux_sym_xref_repeat4 = 143,
    aux_sym_emphasis_repeat1 = 144,
    aux_sym_ltalic_repeat1 = 145,
    aux_sym_monospace_repeat1 = 146,
    aux_sym_highlight_repeat1 = 147,
    aux_sym_pass_macro_repeat1 = 148,
    alias_sym_keys = 149,
    alias_sym_math = 150,
    alias_sym_pass_value = 151,
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
    [aux_sym_anchor_token3] = "reftext",
    [sym_email] = "email",
    [anon_sym_footnote] = "footnote",
    [anon_sym_footnoteref] = "footnoteref",
    [aux_sym_footnote_macro_token1] = "id",
    [aux_sym_footnote_macro_token2] = "reftext",
    [anon_sym_image] = "image",
    [anon_sym_icon] = "icon",
    [aux_sym_image_macro_token1] = "link_url",
    [aux_sym_image_macro_token2] = "image_macro_token2",
    [anon_sym_BSLASH_LBRACK] = "\\[",
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
    [anon_sym_LT_LT] = "<<",
    [aux_sym_xref_token1] = "xref_token1",
    [anon_sym_BSLASH_COMMA] = "\\,",
    [anon_sym_BSLASH_GT] = "\\>",
    [aux_sym_xref_token2] = "xref_token2",
    [anon_sym_GT_GT] = ">>",
    [anon_sym_xref] = "xref",
    [aux_sym_xref_token3] = "xref_token3",
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
    [anon_sym_pass] = "pass",
    [anon_sym_c] = "c",
    [anon_sym_a] = "a",
    [anon_sym_r] = "r",
    [anon_sym_m] = "m",
    [anon_sym_p] = "p",
    [anon_sym_n] = "n",
    [anon_sym_v] = "v",
    [anon_sym_quotes] = "quotes",
    [anon_sym_q] = "q",
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
    [sym_pass_macro_attr] = "pass_macro_attr",
    [aux_sym__macro_rule] = "_macro_rule",
    [aux_sym_inline_repeat1] = "inline_repeat1",
    [aux_sym_image_macro_repeat1] = "image_macro_repeat1",
    [aux_sym_kbd_macro_repeat1] = "kbd_macro_repeat1",
    [aux_sym_kbd_macro_repeat2] = "kbd_macro_repeat2",
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
    [aux_sym_pass_macro_repeat1] = "pass_macro_repeat1",
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
    [aux_sym_anchor_token3] = aux_sym_anchor_token2,
    [sym_email] = sym_email,
    [anon_sym_footnote] = anon_sym_footnote,
    [anon_sym_footnoteref] = anon_sym_footnoteref,
    [aux_sym_footnote_macro_token1] = aux_sym_footnote_macro_token1,
    [aux_sym_footnote_macro_token2] = aux_sym_anchor_token2,
    [anon_sym_image] = anon_sym_image,
    [anon_sym_icon] = anon_sym_icon,
    [aux_sym_image_macro_token1] = sym_link_url,
    [aux_sym_image_macro_token2] = aux_sym_image_macro_token2,
    [anon_sym_BSLASH_LBRACK] = anon_sym_BSLASH_LBRACK,
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
    [anon_sym_LT_LT] = anon_sym_LT_LT,
    [aux_sym_xref_token1] = aux_sym_xref_token1,
    [anon_sym_BSLASH_COMMA] = anon_sym_BSLASH_COMMA,
    [anon_sym_BSLASH_GT] = anon_sym_BSLASH_GT,
    [aux_sym_xref_token2] = aux_sym_xref_token2,
    [anon_sym_GT_GT] = anon_sym_GT_GT,
    [anon_sym_xref] = anon_sym_xref,
    [aux_sym_xref_token3] = aux_sym_xref_token3,
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
    [anon_sym_pass] = anon_sym_pass,
    [anon_sym_c] = anon_sym_c,
    [anon_sym_a] = anon_sym_a,
    [anon_sym_r] = anon_sym_r,
    [anon_sym_m] = anon_sym_m,
    [anon_sym_p] = anon_sym_p,
    [anon_sym_n] = anon_sym_n,
    [anon_sym_v] = anon_sym_v,
    [anon_sym_quotes] = anon_sym_quotes,
    [anon_sym_q] = anon_sym_q,
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
    [sym_pass_macro_attr] = sym_pass_macro_attr,
    [aux_sym__macro_rule] = aux_sym__macro_rule,
    [aux_sym_inline_repeat1] = aux_sym_inline_repeat1,
    [aux_sym_image_macro_repeat1] = aux_sym_image_macro_repeat1,
    [aux_sym_kbd_macro_repeat1] = aux_sym_kbd_macro_repeat1,
    [aux_sym_kbd_macro_repeat2] = aux_sym_kbd_macro_repeat2,
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
    [aux_sym_pass_macro_repeat1] = aux_sym_pass_macro_repeat1,
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
        .visible = true,
        .named = true,
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
    [aux_sym_xref_token3] = {
        .visible = false,
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
    [anon_sym_pass] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_c] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_a] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_r] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_m] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_p] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_n] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_v] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_quotes] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_q] = {
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
    [sym_pass_macro_attr] = {
        .visible = true,
        .named = true,
    },
    [aux_sym__macro_rule] = {
        .visible = false,
        .named = false,
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
    [aux_sym_pass_macro_repeat1] = {
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
        [0] = aux_sym_footnote_macro_token1,
    },
    [3] = {
        [3] = alias_sym_math,
    },
    [4] = {
        [1] = aux_sym_footnote_macro_token1,
        [3] = aux_sym_anchor_token2,
    },
    [5] = {
        [3] = aux_sym_anchor_token2,
    },
    [6] = {
        [2] = aux_sym_footnote_macro_token1,
    },
    [7] = {
        [3] = alias_sym_pass_value,
    },
    [8] = {
        [2] = aux_sym_footnote_macro_token1,
        [4] = alias_sym_keys,
    },
    [9] = {
        [2] = aux_sym_footnote_macro_token1,
        [4] = aux_sym_anchor_token2,
    },
    [10] = {
        [4] = alias_sym_pass_value,
    },
    [11] = {
        [5] = alias_sym_pass_value,
    },
};

static const uint16_t ts_non_terminal_alias_map[] = {
    aux_sym__macro_rule,
    2,
    aux_sym__macro_rule,
    alias_sym_pass_value,
    aux_sym_xref_repeat1,
    2,
    aux_sym_xref_repeat1,
    aux_sym_footnote_macro_token1,
    aux_sym_xref_repeat2,
    2,
    aux_sym_xref_repeat2,
    aux_sym_anchor_token2,
    aux_sym_xref_repeat3,
    2,
    aux_sym_xref_repeat3,
    aux_sym_footnote_macro_token1,
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
    [61] = 61,
    [62] = 62,
    [63] = 63,
    [64] = 64,
    [65] = 64,
    [66] = 64,
    [67] = 67,
    [68] = 68,
    [69] = 69,
    [70] = 68,
    [71] = 69,
    [72] = 72,
    [73] = 73,
    [74] = 74,
    [75] = 63,
    [76] = 67,
    [77] = 67,
    [78] = 68,
    [79] = 74,
    [80] = 73,
    [81] = 72,
    [82] = 73,
    [83] = 74,
    [84] = 63,
    [85] = 72,
    [86] = 69,
    [87] = 15,
    [88] = 17,
    [89] = 48,
    [90] = 51,
    [91] = 10,
    [92] = 21,
    [93] = 18,
    [94] = 94,
    [95] = 50,
    [96] = 47,
    [97] = 97,
    [98] = 10,
    [99] = 50,
    [100] = 15,
    [101] = 17,
    [102] = 102,
    [103] = 48,
    [104] = 51,
    [105] = 15,
    [106] = 17,
    [107] = 21,
    [108] = 48,
    [109] = 51,
    [110] = 47,
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
    [130] = 4,
    [131] = 131,
    [132] = 132,
    [133] = 133,
    [134] = 134,
    [135] = 126,
    [136] = 136,
    [137] = 137,
    [138] = 9,
    [139] = 8,
    [140] = 126,
    [141] = 136,
    [142] = 142,
    [143] = 137,
    [144] = 144,
    [145] = 144,
    [146] = 144,
    [147] = 129,
    [148] = 131,
    [149] = 132,
    [150] = 133,
    [151] = 151,
    [152] = 137,
    [153] = 153,
    [154] = 126,
    [155] = 155,
    [156] = 136,
    [157] = 137,
    [158] = 158,
    [159] = 144,
    [160] = 129,
    [161] = 131,
    [162] = 136,
    [163] = 163,
    [164] = 129,
    [165] = 132,
    [166] = 131,
    [167] = 133,
    [168] = 132,
    [169] = 169,
    [170] = 170,
    [171] = 133,
    [172] = 18,
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
    [184] = 184,
    [185] = 28,
    [186] = 186,
    [187] = 187,
    [188] = 188,
    [189] = 189,
    [190] = 190,
    [191] = 191,
    [192] = 192,
    [193] = 193,
    [194] = 194,
    [195] = 195,
    [196] = 196,
    [197] = 197,
    [198] = 198,
    [199] = 199,
    [200] = 200,
    [201] = 201,
    [202] = 202,
    [203] = 203,
    [204] = 204,
    [205] = 205,
    [206] = 206,
    [207] = 207,
    [208] = 208,
    [209] = 209,
    [210] = 210,
    [211] = 211,
    [212] = 212,
    [213] = 213,
    [214] = 214,
    [215] = 215,
    [216] = 216,
    [217] = 217,
    [218] = 218,
    [219] = 219,
    [220] = 220,
    [221] = 210,
    [222] = 213,
    [223] = 223,
    [224] = 224,
    [225] = 225,
    [226] = 226,
    [227] = 227,
    [228] = 228,
    [229] = 201,
    [230] = 230,
    [231] = 231,
    [232] = 232,
    [233] = 233,
    [234] = 234,
    [235] = 235,
    [236] = 236,
    [237] = 237,
    [238] = 210,
    [239] = 239,
    [240] = 240,
    [241] = 241,
    [242] = 242,
    [243] = 243,
    [244] = 244,
    [245] = 245,
    [246] = 246,
    [247] = 247,
    [248] = 248,
    [249] = 249,
    [250] = 250,
    [251] = 251,
    [252] = 252,
    [253] = 253,
    [254] = 254,
    [255] = 233,
    [256] = 228,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(88);
            ADVANCE_MAP(
                ' ', 2,
                '!', 343,
                '"', 346,
                '#', 348,
                '$', 350,
                '%', 352,
                '&', 354,
                '\'', 356,
                '(', 358,
                ')', 360,
                '*', 362,
                '+', 365,
                ',', 367,
                '-', 369,
                '.', 371,
                '/', 373,
                ':', 375,
                ';', 377,
                '<', 379,
                '=', 381,
                '>', 383,
                '?', 385,
                '@', 387,
                '[', 390,
                '\\', 392,
                ']', 394,
                '^', 396,
                '_', 398,
                '`', 404,
                'a', 663,
                'b', 465,
                'c', 661,
                'f', 437,
                'h', 470,
                'i', 420,
                'k', 417,
                'l', 414,
                'm', 667,
                'n', 671,
                'p', 669,
                'q', 676,
                'r', 665,
                's', 466,
                'v', 673,
                'x', 461,
                '{', 90,
                '|', 406,
                '}', 206,
                '~', 408,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(0);
            if(('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(341);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            END_STATE();
        case 1:
            ADVANCE_MAP(
                ' ', 2,
                '!', 343,
                '"', 346,
                '#', 348,
                '$', 350,
                '%', 352,
                '&', 354,
                '\'', 356,
                '(', 358,
                ')', 360,
                '*', 362,
                '+', 365,
                ',', 367,
                '-', 369,
                '.', 371,
                '/', 373,
                ':', 375,
                ';', 377,
                '<', 379,
                '=', 381,
                '>', 383,
                '?', 385,
                '@', 387,
                '[', 390,
                '\\', 392,
                ']', 394,
                '^', 396,
                '_', 398,
                '`', 404,
                'a', 663,
                'b', 465,
                'c', 661,
                'f', 437,
                'h', 470,
                'i', 420,
                'k', 417,
                'l', 414,
                'm', 667,
                'n', 671,
                'p', 669,
                'q', 676,
                'r', 665,
                's', 466,
                'v', 673,
                'x', 461,
                '{', 90,
                '|', 406,
                '}', 206,
                '~', 408,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(1);
            if(('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(341);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            END_STATE();
        case 2:
            ADVANCE_MAP(
                ' ', 2,
                '!', 343,
                '"', 346,
                '#', 647,
                '$', 350,
                '%', 352,
                '&', 354,
                '\'', 356,
                '(', 358,
                ')', 360,
                '*', 608,
                '+', 365,
                ',', 367,
                '-', 369,
                '.', 371,
                '/', 373,
                ':', 375,
                ';', 377,
                '<', 379,
                '=', 381,
                '>', 383,
                '?', 385,
                '@', 387,
                '[', 390,
                '\\', 392,
                ']', 394,
                '^', 396,
                '_', 621,
                '`', 638,
                'a', 663,
                'b', 465,
                'c', 661,
                'f', 437,
                'h', 470,
                'i', 420,
                'k', 417,
                'l', 414,
                'm', 667,
                'n', 671,
                'p', 669,
                'q', 676,
                'r', 665,
                's', 466,
                'v', 673,
                'x', 461,
                '{', 90,
                '|', 406,
                '}', 206,
                '~', 408,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(1);
            if(('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(341);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            END_STATE();
        case 3:
            ADVANCE_MAP(
                ' ', 4,
                '!', 343,
                '"', 346,
                '#', 348,
                '$', 350,
                '%', 352,
                '&', 354,
                '\'', 356,
                '(', 358,
                ')', 360,
                '*', 362,
                '+', 365,
                ',', 367,
                '-', 369,
                '.', 371,
                '/', 373,
                ':', 375,
                ';', 377,
                '<', 379,
                '=', 381,
                '>', 383,
                '?', 385,
                '@', 387,
                '[', 390,
                '\\', 392,
                ']', 394,
                '^', 396,
                '_', 399,
                '`', 404,
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
                '{', 90,
                '|', 406,
                '}', 206,
                '~', 408,
                0x0b, 207,
                '\f', 207,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(3);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(342);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
            if(lookahead != 0)
                ADVANCE(339);
            END_STATE();
        case 4:
            ADVANCE_MAP(
                ' ', 4,
                '!', 343,
                '"', 346,
                '#', 647,
                '$', 350,
                '%', 352,
                '&', 354,
                '\'', 356,
                '(', 358,
                ')', 360,
                '*', 608,
                '+', 365,
                ',', 367,
                '-', 369,
                '.', 371,
                '/', 373,
                ':', 375,
                ';', 377,
                '<', 379,
                '=', 381,
                '>', 383,
                '?', 385,
                '@', 387,
                '[', 390,
                '\\', 392,
                ']', 394,
                '^', 396,
                '_', 621,
                '`', 638,
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
                '{', 90,
                '|', 406,
                '}', 206,
                '~', 408,
                0x0b, 207,
                '\f', 207,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(3);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(342);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
            if(lookahead != 0)
                ADVANCE(339);
            END_STATE();
        case 5:
            ADVANCE_MAP(
                ' ', 6,
                '!', 343,
                '"', 346,
                '#', 348,
                '$', 350,
                '%', 352,
                '&', 354,
                '\'', 356,
                '(', 358,
                ')', 360,
                '*', 362,
                '+', 365,
                ',', 367,
                '-', 369,
                '.', 371,
                '/', 373,
                ':', 375,
                ';', 377,
                '<', 379,
                '=', 381,
                '>', 383,
                '?', 385,
                '@', 387,
                '[', 390,
                '\\', 392,
                ']', 394,
                '^', 396,
                '_', 398,
                '`', 404,
                'a', 309,
                'b', 326,
                'f', 299,
                'h', 331,
                'i', 283,
                'k', 280,
                'l', 277,
                'm', 274,
                'p', 275,
                's', 327,
                'x', 323,
                '{', 90,
                '|', 406,
                '}', 206,
                '~', 408,
                0x0b, 208,
                '\f', 208,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(5);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(341);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0)
                ADVANCE(339);
            END_STATE();
        case 6:
            ADVANCE_MAP(
                ' ', 6,
                '!', 343,
                '"', 346,
                '#', 647,
                '$', 350,
                '%', 352,
                '&', 354,
                '\'', 356,
                '(', 358,
                ')', 360,
                '*', 608,
                '+', 365,
                ',', 367,
                '-', 369,
                '.', 371,
                '/', 373,
                ':', 375,
                ';', 377,
                '<', 379,
                '=', 381,
                '>', 383,
                '?', 385,
                '@', 387,
                '[', 390,
                '\\', 392,
                ']', 394,
                '^', 396,
                '_', 621,
                '`', 638,
                'a', 309,
                'b', 326,
                'f', 299,
                'h', 331,
                'i', 283,
                'k', 280,
                'l', 277,
                'm', 274,
                'p', 275,
                's', 327,
                'x', 323,
                '{', 90,
                '|', 406,
                '}', 206,
                '~', 408,
                0x0b, 208,
                '\f', 208,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(5);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(341);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0)
                ADVANCE(339);
            END_STATE();
        case 7:
            ADVANCE_MAP(
                ' ', 515,
                '#', 517,
                '*', 518,
                '\\', 522,
                ']', 394,
                '_', 523,
                '`', 524,
                '{', 89,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                ADVANCE(516);
            if(lookahead != 0)
                ADVANCE(514);
            END_STATE();
        case 8:
            if(lookahead == ' ')
                ADVANCE(610);
            if(lookahead == '#')
                ADVANCE(612);
            if(lookahead == '*')
                ADVANCE(9);
            if(lookahead == '\\')
                ADVANCE(613);
            if(lookahead == '_')
                ADVANCE(614);
            if(lookahead == '`')
                ADVANCE(615);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(8);
            if(('\t' <= lookahead && lookahead <= '\f'))
                ADVANCE(611);
            if(lookahead != 0)
                ADVANCE(609);
            END_STATE();
        case 9:
            if(lookahead == ' ')
                ADVANCE(617);
            if(lookahead == '*')
                ADVANCE(618);
            END_STATE();
        case 10:
            if(lookahead == ' ')
                ADVANCE(623);
            if(lookahead == '#')
                ADVANCE(625);
            if(lookahead == '*')
                ADVANCE(626);
            if(lookahead == '\\')
                ADVANCE(627);
            if(lookahead == '_')
                ADVANCE(11);
            if(lookahead == '`')
                ADVANCE(628);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(10);
            if(('\t' <= lookahead && lookahead <= '\f'))
                ADVANCE(624);
            if(lookahead != 0)
                ADVANCE(622);
            END_STATE();
        case 11:
            if(lookahead == ' ')
                ADVANCE(630);
            if(lookahead == '_')
                ADVANCE(631);
            END_STATE();
        case 12:
            if(lookahead == ' ')
                ADVANCE(643);
            if(lookahead == '`')
                ADVANCE(644);
            END_STATE();
        case 13:
            if(lookahead == ' ')
                ADVANCE(652);
            if(lookahead == '#')
                ADVANCE(653);
            END_STATE();
        case 14:
            if(lookahead == '"')
                ADVANCE(58);
            if(lookahead == '\\')
                ADVANCE(84);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(14);
            END_STATE();
        case 15:
            ADVANCE_MAP(
                '"', 345,
                '$', 17,
                '+', 364,
                ',', 367,
                '.', 371,
                ':', 52,
                '[', 389,
                ']', 394,
                'a', 662,
                'c', 660,
                'm', 666,
                'n', 670,
                'p', 668,
                'q', 677,
                'r', 664,
                'v', 672,
                '}', 205,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(15);
            END_STATE();
        case 16:
            if(lookahead == '#')
                ADVANCE(13);
            if(lookahead == '\\')
                ADVANCE(649);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(16);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(650);
            if(lookahead != 0)
                ADVANCE(648);
            END_STATE();
        case 17:
            if(lookahead == '$')
                ADVANCE(587);
            END_STATE();
        case 18:
            if(lookahead == '+')
                ADVANCE(585);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            END_STATE();
        case 19:
            if(lookahead == '+')
                ADVANCE(21);
            if(lookahead == ',')
                ADVANCE(367);
            if(lookahead == '\\')
                ADVANCE(70);
            if(lookahead == ']')
                ADVANCE(71);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(19);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(536);
            END_STATE();
        case 20:
            if(lookahead == '+')
                ADVANCE(584);
            END_STATE();
        case 21:
            if(lookahead == '+')
                ADVANCE(20);
            END_STATE();
        case 22:
            if(lookahead == ',')
                ADVANCE(367);
            if(lookahead == '>')
                ADVANCE(57);
            if(lookahead == '\\')
                ADVANCE(593);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(594);
            if(lookahead != 0)
                ADVANCE(592);
            END_STATE();
        case 23:
            if(lookahead == '-')
                ADVANCE(24);
            if(lookahead == '.')
                ADVANCE(82);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            END_STATE();
        case 24:
            if(lookahead == '-')
                ADVANCE(24);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            END_STATE();
        case 25:
            if(lookahead == '-')
                ADVANCE(25);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(492);
            END_STATE();
        case 26:
            if(lookahead == '-')
                ADVANCE(33);
            if(lookahead == '0')
                ADVANCE(31);
            if(lookahead == '1')
                ADVANCE(30);
            if(lookahead == '2')
                ADVANCE(27);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(29);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(32);
            END_STATE();
        case 27:
            if(lookahead == '-')
                ADVANCE(33);
            if(lookahead == '5')
                ADVANCE(28);
            if(lookahead == ':')
                ADVANCE(64);
            if(lookahead == ']')
                ADVANCE(491);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(31);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(29);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(32);
            END_STATE();
        case 28:
            if(lookahead == '-')
                ADVANCE(33);
            if(lookahead == ':')
                ADVANCE(64);
            if(lookahead == ']')
                ADVANCE(491);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(31);
            if(('6' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(32);
            END_STATE();
        case 29:
            if(lookahead == '-')
                ADVANCE(33);
            if(lookahead == ':')
                ADVANCE(64);
            if(lookahead == ']')
                ADVANCE(491);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(32);
            END_STATE();
        case 30:
            if(lookahead == '-')
                ADVANCE(33);
            if(lookahead == ':')
                ADVANCE(64);
            if(lookahead == ']')
                ADVANCE(491);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(29);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(32);
            END_STATE();
        case 31:
            if(lookahead == '-')
                ADVANCE(33);
            if(lookahead == ':')
                ADVANCE(64);
            if(lookahead == ']')
                ADVANCE(491);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(32);
            END_STATE();
        case 32:
            if(lookahead == '-')
                ADVANCE(33);
            if(lookahead == ':')
                ADVANCE(64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(32);
            END_STATE();
        case 33:
            if(lookahead == '-')
                ADVANCE(33);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(32);
            END_STATE();
        case 34:
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 35:
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 36:
            if(lookahead == '.')
                ADVANCE(26);
            END_STATE();
        case 37:
            if(lookahead == '.')
                ADVANCE(26);
            if(lookahead == '5')
                ADVANCE(38);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(36);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(39);
            END_STATE();
        case 38:
            if(lookahead == '.')
                ADVANCE(26);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(36);
            END_STATE();
        case 39:
            if(lookahead == '.')
                ADVANCE(26);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(36);
            END_STATE();
        case 40:
            if(lookahead == '.')
                ADVANCE(26);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(39);
            END_STATE();
        case 41:
            if(lookahead == '.')
                ADVANCE(54);
            END_STATE();
        case 42:
            if(lookahead == '.')
                ADVANCE(54);
            if(lookahead == '5')
                ADVANCE(43);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(41);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(44);
            END_STATE();
        case 43:
            if(lookahead == '.')
                ADVANCE(54);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(41);
            END_STATE();
        case 44:
            if(lookahead == '.')
                ADVANCE(54);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(41);
            END_STATE();
        case 45:
            if(lookahead == '.')
                ADVANCE(54);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(44);
            END_STATE();
        case 46:
            if(lookahead == '.')
                ADVANCE(55);
            END_STATE();
        case 47:
            if(lookahead == '.')
                ADVANCE(55);
            if(lookahead == '5')
                ADVANCE(48);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(46);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(49);
            END_STATE();
        case 48:
            if(lookahead == '.')
                ADVANCE(55);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(46);
            END_STATE();
        case 49:
            if(lookahead == '.')
                ADVANCE(55);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(46);
            END_STATE();
        case 50:
            if(lookahead == '.')
                ADVANCE(55);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(49);
            END_STATE();
        case 51:
            if(lookahead == '/')
                ADVANCE(557);
            END_STATE();
        case 52:
            if(lookahead == '/')
                ADVANCE(51);
            END_STATE();
        case 53:
            if(lookahead == '0')
                ADVANCE(46);
            if(lookahead == '1')
                ADVANCE(50);
            if(lookahead == '2')
                ADVANCE(47);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(49);
            END_STATE();
        case 54:
            if(lookahead == '0')
                ADVANCE(36);
            if(lookahead == '1')
                ADVANCE(40);
            if(lookahead == '2')
                ADVANCE(37);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(39);
            END_STATE();
        case 55:
            if(lookahead == '0')
                ADVANCE(41);
            if(lookahead == '1')
                ADVANCE(45);
            if(lookahead == '2')
                ADVANCE(42);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(44);
            END_STATE();
        case 56:
            if(lookahead == '>')
                ADVANCE(57);
            if(lookahead == '\\')
                ADVANCE(598);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(599);
            if(lookahead != 0)
                ADVANCE(597);
            END_STATE();
        case 57:
            if(lookahead == '>')
                ADVANCE(600);
            END_STATE();
        case 58:
            if(lookahead == '@')
                ADVANCE(59);
            END_STATE();
        case 59:
            if(lookahead == '[')
                ADVANCE(53);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            END_STATE();
        case 60:
            if(lookahead == '[')
                ADVANCE(389);
            if(lookahead == '\\')
                ADVANCE(606);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(607);
            if(lookahead != 0)
                ADVANCE(605);
            END_STATE();
        case 61:
            if(lookahead == '[')
                ADVANCE(389);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(61);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(480);
            END_STATE();
        case 62:
            if(lookahead == '\\')
                ADVANCE(63);
            if(lookahead == ']')
                ADVANCE(493);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(62);
            END_STATE();
        case 63:
            if(lookahead == '\\')
                ADVANCE(63);
            if(lookahead == ']')
                ADVANCE(493);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(62);
            END_STATE();
        case 64:
            if(lookahead == '\\')
                ADVANCE(63);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(62);
            END_STATE();
        case 65:
            if(lookahead == '\\')
                ADVANCE(200);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(197);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 66:
            if(lookahead == '\\')
                ADVANCE(522);
            if(lookahead == ']')
                ADVANCE(394);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(520);
            if(lookahead != 0)
                ADVANCE(514);
            END_STATE();
        case 67:
            if(lookahead == '\\')
                ADVANCE(641);
            if(lookahead == '`')
                ADVANCE(12);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(67);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(640);
            if(lookahead != 0)
                ADVANCE(639);
            END_STATE();
        case 68:
            if(lookahead == '\\')
                ADVANCE(519);
            if(lookahead == ']')
                ADVANCE(394);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(521);
            if(lookahead != 0)
                ADVANCE(514);
            END_STATE();
        case 69:
            if(lookahead == ']')
                ADVANCE(394);
            if(lookahead == '{')
                ADVANCE(89);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(525);
            if(lookahead != 0)
                ADVANCE(514);
            END_STATE();
        case 70:
            if(lookahead == ']')
                ADVANCE(527);
            END_STATE();
        case 71:
            if(lookahead == ']')
                ADVANCE(483);
            END_STATE();
        case 72:
            if(lookahead == '_')
                ADVANCE(72);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 73:
            if(lookahead == 'e')
                ADVANCE(75);
            END_STATE();
        case 74:
            if(lookahead == 'o')
                ADVANCE(76);
            END_STATE();
        case 75:
            if(lookahead == 's')
                ADVANCE(674);
            END_STATE();
        case 76:
            if(lookahead == 't')
                ADVANCE(73);
            END_STATE();
        case 77:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(77);
            if(lookahead != 0 &&
               lookahead != '.' &&
               lookahead != '>' &&
               lookahead != '[')
                ADVANCE(558);
            END_STATE();
        case 78:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(512);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(513);
            END_STATE();
        case 79:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(79);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(567);
            END_STATE();
        case 80:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(502);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(503);
            END_STATE();
        case 81:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(481);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(482);
            END_STATE();
        case 82:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(492);
            END_STATE();
        case 83:
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               lookahead == '-' ||
               ('/' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            END_STATE();
        case 84:
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(14);
            END_STATE();
        case 85:
            if(eof)
                ADVANCE(88);
            ADVANCE_MAP(
                ' ', 4,
                '!', 343,
                '"', 346,
                '#', 348,
                '$', 350,
                '%', 352,
                '&', 354,
                '\'', 356,
                '(', 358,
                ')', 360,
                '*', 362,
                '+', 365,
                ',', 367,
                '-', 369,
                '.', 371,
                '/', 373,
                ':', 375,
                ';', 377,
                '<', 379,
                '=', 381,
                '>', 383,
                '?', 385,
                '@', 387,
                '[', 390,
                '\\', 392,
                ']', 394,
                '^', 396,
                '_', 399,
                '`', 404,
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
                '{', 90,
                '|', 406,
                '}', 206,
                '~', 408,
                0x0b, 207,
                '\f', 207,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(85);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(342);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
            if(lookahead != 0)
                ADVANCE(339);
            END_STATE();
        case 86:
            if(eof)
                ADVANCE(88);
            ADVANCE_MAP(
                ' ', 92,
                '!', 344,
                '"', 347,
                '#', 349,
                '$', 351,
                '%', 353,
                '&', 355,
                '\'', 357,
                '(', 359,
                ')', 361,
                '*', 363,
                '+', 366,
                ',', 368,
                '-', 370,
                '.', 372,
                '/', 374,
                ':', 376,
                ';', 378,
                '<', 380,
                '=', 382,
                '>', 384,
                '?', 386,
                '@', 388,
                '[', 391,
                '\\', 393,
                ']', 395,
                '^', 397,
                '_', 402,
                '`', 405,
                'a', 143,
                'b', 160,
                'f', 133,
                'h', 165,
                'i', 117,
                'k', 114,
                'l', 111,
                'm', 108,
                'p', 109,
                's', 161,
                'x', 157,
                '{', 91,
                '|', 407,
                '}', 206,
                '~', 409,
                0x0b, 94,
                '\f', 94,
                '\t', 93,
                '\n', 93,
                '\r', 93,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(173);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 87:
            if(eof)
                ADVANCE(88);
            ADVANCE_MAP(
                ' ', 6,
                '!', 343,
                '"', 346,
                '#', 348,
                '$', 350,
                '%', 352,
                '&', 354,
                '\'', 356,
                '(', 358,
                ')', 360,
                '*', 362,
                '+', 365,
                ',', 367,
                '-', 369,
                '.', 371,
                '/', 373,
                ':', 375,
                ';', 377,
                '<', 379,
                '=', 381,
                '>', 383,
                '?', 385,
                '@', 387,
                '[', 390,
                '\\', 392,
                ']', 394,
                '^', 396,
                '_', 398,
                '`', 404,
                'a', 309,
                'b', 326,
                'f', 299,
                'h', 331,
                'i', 283,
                'k', 280,
                'l', 277,
                'm', 274,
                'p', 275,
                's', 327,
                'x', 323,
                '{', 90,
                '|', 406,
                '}', 206,
                '~', 408,
                0x0b, 208,
                '\f', 208,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(87);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(341);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0)
                ADVANCE(339);
            END_STATE();
        case 88:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 89:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 90:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 91:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 92:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 92,
                '!', 344,
                '"', 347,
                '#', 647,
                '$', 351,
                '%', 353,
                '&', 355,
                '\'', 357,
                '(', 359,
                ')', 361,
                '*', 608,
                '+', 366,
                ',', 368,
                '-', 370,
                '.', 372,
                '/', 374,
                ':', 376,
                ';', 378,
                '<', 380,
                '=', 382,
                '>', 384,
                '?', 386,
                '@', 388,
                '[', 391,
                '\\', 393,
                ']', 395,
                '^', 397,
                '_', 621,
                '`', 638,
                'a', 143,
                'b', 160,
                'f', 133,
                'h', 165,
                'i', 117,
                'k', 114,
                'l', 111,
                'm', 108,
                'p', 109,
                's', 161,
                'x', 157,
                '{', 91,
                '|', 407,
                '~', 409,
                0x0b, 94,
                '\f', 94,
                '\t', 93,
                '\n', 93,
                '\r', 93,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(173);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(195);
            END_STATE();
        case 93:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 92,
                '!', 344,
                '"', 347,
                '#', 349,
                '$', 351,
                '%', 353,
                '&', 355,
                '\'', 357,
                '(', 359,
                ')', 361,
                '*', 363,
                '+', 366,
                ',', 368,
                '-', 370,
                '.', 372,
                '/', 374,
                ':', 376,
                ';', 378,
                '<', 380,
                '=', 382,
                '>', 384,
                '?', 386,
                '@', 388,
                '[', 391,
                '\\', 393,
                ']', 395,
                '^', 397,
                '_', 402,
                '`', 405,
                'a', 143,
                'b', 160,
                'f', 133,
                'h', 165,
                'i', 117,
                'k', 114,
                'l', 111,
                'm', 108,
                'p', 109,
                's', 161,
                'x', 157,
                '{', 91,
                '|', 407,
                '~', 409,
                0x0b, 94,
                '\f', 94,
                '\t', 93,
                '\n', 93,
                '\r', 93,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(173);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(195);
            END_STATE();
        case 94:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 92,
                '!', 344,
                '"', 347,
                '#', 349,
                '$', 351,
                '%', 353,
                '&', 355,
                '\'', 357,
                '(', 359,
                ')', 361,
                '*', 363,
                '+', 366,
                ',', 368,
                '-', 370,
                '.', 372,
                '/', 374,
                ':', 376,
                ';', 378,
                '<', 380,
                '=', 382,
                '>', 384,
                '?', 386,
                '@', 388,
                '[', 391,
                '\\', 393,
                ']', 395,
                '^', 397,
                '_', 403,
                '`', 405,
                'a', 143,
                'b', 160,
                'f', 133,
                'h', 165,
                'i', 117,
                'k', 114,
                'l', 111,
                'm', 108,
                'p', 109,
                's', 161,
                'x', 157,
                '{', 91,
                '|', 407,
                '~', 409,
                0x0b, 94,
                '\f', 94,
                '\t', 93,
                '\n', 93,
                '\r', 93,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(173);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(195);
            END_STATE();
        case 95:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '"')
                ADVANCE(193);
            if(lookahead == '\\')
                ADVANCE(201);
            if(lookahead == '}')
                ADVANCE(14);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(95);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 96:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '"')
                ADVANCE(193);
            if(lookahead == '\\')
                ADVANCE(201);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(95);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 97:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '+')
                ADVANCE(586);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 98:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(99);
            if(lookahead == '.')
                ADVANCE(198);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(98);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 99:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(99);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(98);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 100:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(107);
            if(lookahead == '0')
                ADVANCE(105);
            if(lookahead == '1')
                ADVANCE(104);
            if(lookahead == '2')
                ADVANCE(101);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(103);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 101:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(107);
            if(lookahead == '5')
                ADVANCE(102);
            if(lookahead == ':')
                ADVANCE(204);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == ']')
                ADVANCE(199);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(103);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 102:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(107);
            if(lookahead == ':')
                ADVANCE(204);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == ']')
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(105);
            if(('6' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 103:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(107);
            if(lookahead == ':')
                ADVANCE(204);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == ']')
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(105);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 104:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(107);
            if(lookahead == ':')
                ADVANCE(204);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == ']')
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(103);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 105:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(107);
            if(lookahead == ':')
                ADVANCE(204);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == ']')
                ADVANCE(199);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 106:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(107);
            if(lookahead == ':')
                ADVANCE(204);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 107:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(107);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(106);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 108:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'a')
                ADVANCE(134);
            if(lookahead == 'e')
                ADVANCE(146);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 109:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'a')
                ADVANCE(159);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 110:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'a')
                ADVANCE(129);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 111:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'a')
                ADVANCE(166);
            if(lookahead == 'i')
                ADVANCE(145);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 112:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'a')
                ADVANCE(163);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 113:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'a')
                ADVANCE(164);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 114:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'b')
                ADVANCE(119);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 115:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'c')
                ADVANCE(132);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 116:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'c')
                ADVANCE(556);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 117:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                '.', 196,
                '@', 194,
                '\\', 200,
                '_', 172,
                'c', 151,
                'm', 110,
                'r', 116,
                '}', 35,
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
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 118:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'c')
                ADVANCE(136);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 119:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'd')
                ADVANCE(531);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 120:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'e')
                ADVANCE(140);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 121:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'e')
                ADVANCE(127);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 122:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'e')
                ADVANCE(548);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 123:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'e')
                ADVANCE(171);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 124:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'e')
                ADVANCE(507);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 125:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'e')
                ADVANCE(497);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 126:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'e')
                ADVANCE(128);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 127:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'f')
                ADVANCE(604);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 128:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'f')
                ADVANCE(501);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 129:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'g')
                ADVANCE(124);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 130:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'h')
                ADVANCE(579);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 131:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'h')
                ADVANCE(575);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 132:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'h')
                ADVANCE(150);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 133:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                '.', 196,
                '@', 194,
                '\\', 200,
                '_', 172,
                'i', 138,
                'o', 153,
                't', 154,
                '}', 35,
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
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 134:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'i')
                ADVANCE(139);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 135:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'i')
                ADVANCE(141);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 136:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'i')
                ADVANCE(135);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 137:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'k')
                ADVANCE(562);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 138:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'l')
                ADVANCE(122);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 139:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'l')
                ADVANCE(168);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 140:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'm')
                ADVANCE(571);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 141:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'm')
                ADVANCE(112);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 142:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'm')
                ADVANCE(113);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 143:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'n')
                ADVANCE(115);
            if(lookahead == 's')
                ADVANCE(118);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 144:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'n')
                ADVANCE(535);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 145:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'n')
                ADVANCE(137);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 146:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'n')
                ADVANCE(170);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 147:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'n')
                ADVANCE(511);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 148:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'n')
                ADVANCE(152);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 149:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'o')
                ADVANCE(566);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 150:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'o')
                ADVANCE(156);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 151:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'o')
                ADVANCE(147);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 152:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'o')
                ADVANCE(169);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 153:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'o')
                ADVANCE(167);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 154:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'p')
                ADVANCE(552);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 155:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'p')
                ADVANCE(540);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 156:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'r')
                ADVANCE(487);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 157:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'r')
                ADVANCE(121);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 158:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 's')
                ADVANCE(659);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 159:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 's')
                ADVANCE(158);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 160:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 't')
                ADVANCE(144);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 161:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 't')
                ADVANCE(120);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 162:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 't')
                ADVANCE(155);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 163:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 't')
                ADVANCE(130);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 164:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 't')
                ADVANCE(131);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 165:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 't')
                ADVANCE(162);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 166:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 't')
                ADVANCE(123);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 167:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 't')
                ADVANCE(148);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 168:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 't')
                ADVANCE(149);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 169:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 't')
                ADVANCE(125);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 170:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'u')
                ADVANCE(583);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 171:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'x')
                ADVANCE(142);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 172:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 173:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(173);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 174:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 175:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(100);
            if(lookahead == '5')
                ADVANCE(176);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(179);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(177);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 176:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(100);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(179);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 177:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(100);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(179);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 178:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(100);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(177);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 179:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(100);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 180:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(191);
            if(lookahead == '5')
                ADVANCE(181);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(184);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(182);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 181:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(191);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(184);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 182:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(191);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(184);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 183:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(191);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(182);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 184:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(191);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 185:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '5')
                ADVANCE(186);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(189);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(187);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 186:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(189);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 187:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(189);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 188:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(187);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 189:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 190:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(189);
            if(lookahead == '1')
                ADVANCE(188);
            if(lookahead == '2')
                ADVANCE(185);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(187);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 191:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(179);
            if(lookahead == '1')
                ADVANCE(178);
            if(lookahead == '2')
                ADVANCE(175);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(177);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 192:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(184);
            if(lookahead == '1')
                ADVANCE(183);
            if(lookahead == '2')
                ADVANCE(180);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(182);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 193:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 194:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '[')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(98);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 195:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(195);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               (' ' <= lookahead && lookahead <= '@') ||
               ('[' <= lookahead && lookahead <= '`') ||
               lookahead == '{' ||
               lookahead == '|' ||
               lookahead == '~')
                ADVANCE(199);
            if(lookahead != 0 &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(195);
            END_STATE();
        case 196:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               lookahead == '-' ||
               ('/' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 197:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(197);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 198:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(200);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(98);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 199:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 200:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 201:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(96);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(95);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 202:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(203);
            if(lookahead == ']')
                ADVANCE(202);
            if(lookahead == '}')
                ADVANCE(62);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(202);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 203:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(203);
            if(lookahead == ']')
                ADVANCE(202);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(202);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 204:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(203);
            if(lookahead == '}')
                ADVANCE(62);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(202);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 205:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 206:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 207:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                ' ', 4,
                '_', 400,
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
                0x0b, 207,
                '\f', 207,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(273);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 208:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                ' ', 6,
                '_', 401,
                'a', 309,
                'b', 326,
                'f', 299,
                'h', 331,
                'i', 283,
                'k', 280,
                'l', 277,
                'm', 274,
                'p', 275,
                's', 327,
                'x', 323,
                0x0b, 208,
                '\f', 208,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 209:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 210:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 211:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 212:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 213:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 214:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 215:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 216:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 217:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'c')
                ADVANCE(553);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 218:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 219:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 220:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'd')
                ADVANCE(528);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 221:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 222:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 223:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'e')
                ADVANCE(545);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 224:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 225:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'e')
                ADVANCE(504);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 226:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'e')
                ADVANCE(494);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 227:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 228:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'f')
                ADVANCE(601);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 229:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'f')
                ADVANCE(498);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 230:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 231:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'h')
                ADVANCE(576);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 232:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'h')
                ADVANCE(572);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 233:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 234:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 235:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 236:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 237:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 238:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'k')
                ADVANCE(559);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 239:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 240:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 241:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'm')
                ADVANCE(568);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 242:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 243:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 244:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 245:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'n')
                ADVANCE(532);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 246:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 247:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 248:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'n')
                ADVANCE(508);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 249:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 250:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'o')
                ADVANCE(563);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 251:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 252:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 253:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 254:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 255:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'p')
                ADVANCE(549);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 256:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'p')
                ADVANCE(537);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 257:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'r')
                ADVANCE(484);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 258:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 259:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 's')
                ADVANCE(656);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 260:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 261:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 262:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 263:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 264:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 265:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 266:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 267:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 268:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 269:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 270:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 271:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'u')
                ADVANCE(580);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 272:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 273:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 274:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'a')
                ADVANCE(300);
            if(lookahead == 'e')
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
                ADVANCE(35);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 275:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 276:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'a')
                ADVANCE(295);
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
                ADVANCE(35);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 277:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'a')
                ADVANCE(332);
            if(lookahead == 'i')
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
                ADVANCE(35);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 278:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'a')
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
                ADVANCE(35);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 279:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'a')
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
                ADVANCE(35);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 280:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'b')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 281:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 282:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'c')
                ADVANCE(554);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 283:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'c')
                ADVANCE(317);
            if(lookahead == 'm')
                ADVANCE(276);
            if(lookahead == 'r')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 284:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'c')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 285:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'd')
                ADVANCE(529);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 286:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'e')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 287:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'e')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 288:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'e')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 289:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'e')
                ADVANCE(337);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 290:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 291:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 292:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'e')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 293:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'f')
                ADVANCE(602);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 294:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 295:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'g')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 296:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'h')
                ADVANCE(577);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 297:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'h')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 298:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'h')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 299:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'i')
                ADVANCE(304);
            if(lookahead == 'o')
                ADVANCE(319);
            if(lookahead == 't')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 300:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'i')
                ADVANCE(305);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 301:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 302:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 303:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'k')
                ADVANCE(560);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 304:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'l')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 305:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'l')
                ADVANCE(334);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 306:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'm')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 307:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'm')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 308:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'm')
                ADVANCE(279);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 309:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'n')
                ADVANCE(281);
            if(lookahead == 's')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 310:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'n')
                ADVANCE(533);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 311:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'n')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 312:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'n')
                ADVANCE(336);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 313:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 314:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'n')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 315:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'o')
                ADVANCE(564);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 316:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'o')
                ADVANCE(322);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 317:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'o')
                ADVANCE(313);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 318:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'o')
                ADVANCE(335);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 319:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'o')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 320:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'p')
                ADVANCE(550);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 321:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'p')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 322:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 323:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'r')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 324:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 's')
                ADVANCE(657);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 325:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 's')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 326:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 327:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 't')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 328:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 't')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 329:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 't')
                ADVANCE(296);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 330:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 't')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 331:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 't')
                ADVANCE(328);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 332:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 't')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 333:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 't')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 334:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 't')
                ADVANCE(315);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 335:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 't')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 336:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'u')
                ADVANCE(581);
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 337:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'x')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 338:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 339:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(72);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 340:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(479);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(480);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 341:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(341);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 342:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(342);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            END_STATE();
        case 343:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 344:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 345:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 346:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(58);
            if(lookahead == '\\')
                ADVANCE(84);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(14);
            END_STATE();
        case 347:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(193);
            if(lookahead == '\\')
                ADVANCE(201);
            if(lookahead == '}')
                ADVANCE(14);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(95);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 348:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(654);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 349:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(655);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('$' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 350:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(588);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 351:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(589);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 352:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 353:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 354:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 355:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 356:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 357:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 358:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 359:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 360:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 361:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 362:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '*')
                ADVANCE(619);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            END_STATE();
        case 363:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '*')
                ADVANCE(620);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 364:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 365:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '+')
                ADVANCE(18);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            END_STATE();
        case 366:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '+')
                ADVANCE(97);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 367:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 368:
            ACCEPT_TOKEN(anon_sym_COMMA);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 369:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 370:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 371:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 372:
            ACCEPT_TOKEN(anon_sym_DOT);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 373:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 374:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 375:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 376:
            ACCEPT_TOKEN(anon_sym_COLON);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 377:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 378:
            ACCEPT_TOKEN(anon_sym_SEMI);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 379:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(590);
            END_STATE();
        case 380:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(591);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 381:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 382:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 383:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 384:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 385:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 386:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 387:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 388:
            ACCEPT_TOKEN(anon_sym_AT);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 389:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 390:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(410);
            END_STATE();
        case 391:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(411);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 392:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            END_STATE();
        case 393:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 394:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 395:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 396:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 397:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 398:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(634);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 399:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(635);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            END_STATE();
        case 400:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(632);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 401:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(633);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 402:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(637);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 403:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(636);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 404:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '`')
                ADVANCE(645);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            END_STATE();
        case 405:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '`')
                ADVANCE(646);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 406:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 407:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 408:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 409:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 410:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            END_STATE();
        case 411:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 412:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 413:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'a')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 414:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'a')
                ADVANCE(471);
            if(lookahead == 'i')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 415:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 416:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'a')
                ADVANCE(469);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 417:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'b')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 418:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'c')
                ADVANCE(436);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 419:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'c')
                ADVANCE(555);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 420:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'c')
                ADVANCE(454);
            if(lookahead == 'm')
                ADVANCE(413);
            if(lookahead == 'r')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 421:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'c')
                ADVANCE(440);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 422:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'd')
                ADVANCE(530);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 423:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'e')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 424:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'e')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 425:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'e')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 426:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 427:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 428:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 429:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'e')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 430:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'e')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 431:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'f')
                ADVANCE(603);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 432:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 433:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'g')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 434:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'h')
                ADVANCE(578);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 435:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'h')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 436:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'h')
                ADVANCE(453);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 437:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'i')
                ADVANCE(442);
            if(lookahead == 'o')
                ADVANCE(456);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 438:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 439:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'i')
                ADVANCE(445);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 440:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'i')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 441:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'k')
                ADVANCE(561);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 442:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'l')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 443:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'l')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 444:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'm')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 445:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'm')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 446:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'm')
                ADVANCE(416);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 447:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'n')
                ADVANCE(534);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 448:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'n')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 449:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'n')
                ADVANCE(476);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 450:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 451:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'n')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 452:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'o')
                ADVANCE(565);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 453:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'o')
                ADVANCE(460);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'o')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'o')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'o')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'p')
                ADVANCE(551);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'p')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'r')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 's')
                ADVANCE(658);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 's')
                ADVANCE(675);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 's')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 't')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 't')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 't')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 't')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 't')
                ADVANCE(435);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 't')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 't')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 't')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'u')
                ADVANCE(582);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'x')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
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
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
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
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
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
                ADVANCE(25);
            if(lookahead == '.')
                ADVANCE(82);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(492);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(sym_email);
            if(lookahead == '\\')
                ADVANCE(63);
            if(lookahead == ']')
                ADVANCE(493);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(62);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 'r')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'r')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 'r')
                ADVANCE(126);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
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
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
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
            if(lookahead == ' ')
                ADVANCE(515);
            if(lookahead == '#')
                ADVANCE(647);
            if(lookahead == '*')
                ADVANCE(608);
            if(lookahead == '\\')
                ADVANCE(522);
            if(lookahead == '_')
                ADVANCE(621);
            if(lookahead == '`')
                ADVANCE(638);
            if(lookahead == '{')
                ADVANCE(89);
            if(('\t' <= lookahead && lookahead <= '\r'))
                ADVANCE(516);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(514);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == ' ')
                ADVANCE(515);
            if(lookahead == '#')
                ADVANCE(517);
            if(lookahead == '*')
                ADVANCE(518);
            if(lookahead == '\\')
                ADVANCE(522);
            if(lookahead == '_')
                ADVANCE(523);
            if(lookahead == '`')
                ADVANCE(524);
            if(lookahead == '{')
                ADVANCE(89);
            if(('\t' <= lookahead && lookahead <= '\r'))
                ADVANCE(516);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(514);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == '#')
                ADVANCE(653);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == '*')
                ADVANCE(618);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == '[')
                ADVANCE(526);
            if(lookahead == ']')
                ADVANCE(527);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == '\\')
                ADVANCE(522);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(520);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(514);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == '\\')
                ADVANCE(519);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(521);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(514);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == ']')
                ADVANCE(527);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == '_')
                ADVANCE(631);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == '`')
                ADVANCE(644);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == '{')
                ADVANCE(89);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(525);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(514);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(aux_sym_key_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(536);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 's')
                ADVANCE(541);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
            if(lookahead == 's')
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
                ADVANCE(35);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 's')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == 's')
                ADVANCE(544);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(sym__link_component);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '.' &&
               lookahead != '>' &&
               lookahead != '[')
                ADVANCE(558);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(aux_sym_link_macro_token1);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '[')
                ADVANCE(567);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(199);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            if(lookahead == ',')
                ADVANCE(595);
            if(lookahead == '>')
                ADVANCE(596);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            if(lookahead == '\\')
                ADVANCE(593);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(594);
            if(lookahead != 0 &&
               lookahead != ',' &&
               lookahead != '>')
                ADVANCE(592);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(anon_sym_BSLASH_COMMA);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(anon_sym_BSLASH_GT);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            if(lookahead == '>')
                ADVANCE(596);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            if(lookahead == '\\')
                ADVANCE(598);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(599);
            if(lookahead != 0 &&
               lookahead != '>')
                ADVANCE(597);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(aux_sym_xref_token3);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(aux_sym_xref_token3);
            if(lookahead == '[')
                ADVANCE(526);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(aux_sym_xref_token3);
            if(lookahead == '\\')
                ADVANCE(606);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(607);
            if(lookahead != 0 &&
               lookahead != '[' &&
               lookahead != '\\')
                ADVANCE(605);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(anon_sym_STAR2);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == ' ')
                ADVANCE(610);
            if(lookahead == '#')
                ADVANCE(647);
            if(lookahead == '\\')
                ADVANCE(613);
            if(lookahead == '_')
                ADVANCE(621);
            if(lookahead == '`')
                ADVANCE(638);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(611);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(609);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == ' ')
                ADVANCE(610);
            if(lookahead == '#')
                ADVANCE(612);
            if(lookahead == '\\')
                ADVANCE(613);
            if(lookahead == '_')
                ADVANCE(614);
            if(lookahead == '`')
                ADVANCE(615);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(611);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(609);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '#')
                ADVANCE(653);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '*')
                ADVANCE(616);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '_')
                ADVANCE(631);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '`')
                ADVANCE(644);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(anon_sym_BSLASH_STAR);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(anon_sym_STAR3);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym__2);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == ' ')
                ADVANCE(623);
            if(lookahead == '#')
                ADVANCE(647);
            if(lookahead == '*')
                ADVANCE(608);
            if(lookahead == '\\')
                ADVANCE(627);
            if(lookahead == '`')
                ADVANCE(638);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(624);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_' &&
               lookahead != '`')
                ADVANCE(622);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == ' ')
                ADVANCE(623);
            if(lookahead == '#')
                ADVANCE(625);
            if(lookahead == '*')
                ADVANCE(626);
            if(lookahead == '\\')
                ADVANCE(627);
            if(lookahead == '`')
                ADVANCE(628);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(624);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_' &&
               lookahead != '`')
                ADVANCE(622);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '#')
                ADVANCE(653);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '*')
                ADVANCE(618);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '_')
                ADVANCE(629);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '`')
                ADVANCE(644);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(anon_sym_BSLASH_);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(anon_sym__3);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(anon_sym___);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(anon_sym_BQUOTE2);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '\\')
                ADVANCE(641);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(640);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '`')
                ADVANCE(639);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '`')
                ADVANCE(642);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(anon_sym_BSLASH_BQUOTE);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(anon_sym_BQUOTE3);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(anon_sym_POUND2);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '#')
                ADVANCE(651);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '\\')
                ADVANCE(649);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(650);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '#')
                ADVANCE(648);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(anon_sym_BSLASH_POUND);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(anon_sym_POUND3);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead == '.')
                ADVANCE(83);
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
                ADVANCE(35);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(199);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(34);
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
                ADVANCE(35);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '_')
                ADVANCE(412);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(340);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '~' < lookahead))
                ADVANCE(339);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(196);
            if(lookahead == '@')
                ADVANCE(194);
            if(lookahead == '\\')
                ADVANCE(200);
            if(lookahead == '_')
                ADVANCE(172);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               lookahead == ' ' ||
               lookahead == '"' ||
               lookahead == '(' ||
               lookahead == ')' ||
               lookahead == ',' ||
               (':' <= lookahead && lookahead <= '<') ||
               lookahead == '>' ||
               ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(199);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(172);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(174);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(anon_sym_c);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(anon_sym_c);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(anon_sym_a);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(anon_sym_a);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'n')
                ADVANCE(418);
            if(lookahead == 's')
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(anon_sym_r);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(anon_sym_r);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(anon_sym_m);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(anon_sym_m);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'a')
                ADVANCE(438);
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
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(anon_sym_p);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(anon_sym_p);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'a')
                ADVANCE(464);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(anon_sym_n);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(anon_sym_n);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(anon_sym_v);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(anon_sym_v);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(anon_sym_quotes);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(anon_sym_quotes);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(anon_sym_q);
            if(lookahead == '.')
                ADVANCE(83);
            if(lookahead == '@')
                ADVANCE(59);
            if(lookahead == 'u')
                ADVANCE(455);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(anon_sym_q);
            if(lookahead == 'u')
                ADVANCE(74);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 85 },
    [2] = { .lex_state = 85 },
    [3] = { .lex_state = 85 },
    [4] = { .lex_state = 85 },
    [5] = { .lex_state = 86 },
    [6] = { .lex_state = 85 },
    [7] = { .lex_state = 87 },
    [8] = { .lex_state = 85 },
    [9] = { .lex_state = 85 },
    [10] = { .lex_state = 85 },
    [11] = { .lex_state = 85 },
    [12] = { .lex_state = 85 },
    [13] = { .lex_state = 85 },
    [14] = { .lex_state = 85 },
    [15] = { .lex_state = 85 },
    [16] = { .lex_state = 85 },
    [17] = { .lex_state = 85 },
    [18] = { .lex_state = 85 },
    [19] = { .lex_state = 85 },
    [20] = { .lex_state = 85 },
    [21] = { .lex_state = 85 },
    [22] = { .lex_state = 85 },
    [23] = { .lex_state = 85 },
    [24] = { .lex_state = 85 },
    [25] = { .lex_state = 85 },
    [26] = { .lex_state = 85 },
    [27] = { .lex_state = 85 },
    [28] = { .lex_state = 85 },
    [29] = { .lex_state = 85 },
    [30] = { .lex_state = 85 },
    [31] = { .lex_state = 85 },
    [32] = { .lex_state = 85 },
    [33] = { .lex_state = 85 },
    [34] = { .lex_state = 85 },
    [35] = { .lex_state = 85 },
    [36] = { .lex_state = 85 },
    [37] = { .lex_state = 85 },
    [38] = { .lex_state = 85 },
    [39] = { .lex_state = 85 },
    [40] = { .lex_state = 85 },
    [41] = { .lex_state = 85 },
    [42] = { .lex_state = 85 },
    [43] = { .lex_state = 85 },
    [44] = { .lex_state = 85 },
    [45] = { .lex_state = 85 },
    [46] = { .lex_state = 85 },
    [47] = { .lex_state = 85 },
    [48] = { .lex_state = 85 },
    [49] = { .lex_state = 85 },
    [50] = { .lex_state = 85 },
    [51] = { .lex_state = 85 },
    [52] = { .lex_state = 85 },
    [53] = { .lex_state = 85 },
    [54] = { .lex_state = 7 },
    [55] = { .lex_state = 7 },
    [56] = { .lex_state = 7 },
    [57] = { .lex_state = 7 },
    [58] = { .lex_state = 7 },
    [59] = { .lex_state = 7 },
    [60] = { .lex_state = 7 },
    [61] = { .lex_state = 8 },
    [62] = { .lex_state = 10 },
    [63] = { .lex_state = 8 },
    [64] = { .lex_state = 10 },
    [65] = { .lex_state = 10 },
    [66] = { .lex_state = 10 },
    [67] = { .lex_state = 10 },
    [68] = { .lex_state = 8 },
    [69] = { .lex_state = 8 },
    [70] = { .lex_state = 8 },
    [71] = { .lex_state = 8 },
    [72] = { .lex_state = 10 },
    [73] = { .lex_state = 10 },
    [74] = { .lex_state = 8 },
    [75] = { .lex_state = 8 },
    [76] = { .lex_state = 10 },
    [77] = { .lex_state = 10 },
    [78] = { .lex_state = 8 },
    [79] = { .lex_state = 8 },
    [80] = { .lex_state = 10 },
    [81] = { .lex_state = 10 },
    [82] = { .lex_state = 10 },
    [83] = { .lex_state = 8 },
    [84] = { .lex_state = 8 },
    [85] = { .lex_state = 10 },
    [86] = { .lex_state = 8 },
    [87] = { .lex_state = 7 },
    [88] = { .lex_state = 7 },
    [89] = { .lex_state = 7 },
    [90] = { .lex_state = 7 },
    [91] = { .lex_state = 7 },
    [92] = { .lex_state = 7 },
    [93] = { .lex_state = 7 },
    [94] = { .lex_state = 7 },
    [95] = { .lex_state = 7 },
    [96] = { .lex_state = 7 },
    [97] = { .lex_state = 15 },
    [98] = { .lex_state = 8 },
    [99] = { .lex_state = 8 },
    [100] = { .lex_state = 10 },
    [101] = { .lex_state = 10 },
    [102] = { .lex_state = 15 },
    [103] = { .lex_state = 10 },
    [104] = { .lex_state = 10 },
    [105] = { .lex_state = 8 },
    [106] = { .lex_state = 8 },
    [107] = { .lex_state = 10 },
    [108] = { .lex_state = 8 },
    [109] = { .lex_state = 8 },
    [110] = { .lex_state = 10 },
    [111] = { .lex_state = 69 },
    [112] = { .lex_state = 22 },
    [113] = { .lex_state = 69 },
    [114] = { .lex_state = 69 },
    [115] = { .lex_state = 22 },
    [116] = { .lex_state = 67 },
    [117] = { .lex_state = 15 },
    [118] = { .lex_state = 68 },
    [119] = { .lex_state = 22 },
    [120] = { .lex_state = 68 },
    [121] = { .lex_state = 69 },
    [122] = { .lex_state = 16 },
    [123] = { .lex_state = 69 },
    [124] = { .lex_state = 68 },
    [125] = { .lex_state = 68 },
    [126] = { .lex_state = 16 },
    [127] = { .lex_state = 66 },
    [128] = { .lex_state = 60 },
    [129] = { .lex_state = 16 },
    [130] = { .lex_state = 15 },
    [131] = { .lex_state = 16 },
    [132] = { .lex_state = 67 },
    [133] = { .lex_state = 67 },
    [134] = { .lex_state = 60 },
    [135] = { .lex_state = 16 },
    [136] = { .lex_state = 16 },
    [137] = { .lex_state = 67 },
    [138] = { .lex_state = 15 },
    [139] = { .lex_state = 15 },
    [140] = { .lex_state = 16 },
    [141] = { .lex_state = 16 },
    [142] = { .lex_state = 66 },
    [143] = { .lex_state = 67 },
    [144] = { .lex_state = 67 },
    [145] = { .lex_state = 67 },
    [146] = { .lex_state = 67 },
    [147] = { .lex_state = 16 },
    [148] = { .lex_state = 16 },
    [149] = { .lex_state = 67 },
    [150] = { .lex_state = 67 },
    [151] = { .lex_state = 56 },
    [152] = { .lex_state = 67 },
    [153] = { .lex_state = 66 },
    [154] = { .lex_state = 16 },
    [155] = { .lex_state = 66 },
    [156] = { .lex_state = 16 },
    [157] = { .lex_state = 67 },
    [158] = { .lex_state = 66 },
    [159] = { .lex_state = 67 },
    [160] = { .lex_state = 16 },
    [161] = { .lex_state = 16 },
    [162] = { .lex_state = 16 },
    [163] = { .lex_state = 60 },
    [164] = { .lex_state = 16 },
    [165] = { .lex_state = 67 },
    [166] = { .lex_state = 16 },
    [167] = { .lex_state = 67 },
    [168] = { .lex_state = 67 },
    [169] = { .lex_state = 56 },
    [170] = { .lex_state = 22 },
    [171] = { .lex_state = 67 },
    [172] = { .lex_state = 69 },
    [173] = { .lex_state = 15 },
    [174] = { .lex_state = 0 },
    [175] = { .lex_state = 66 },
    [176] = { .lex_state = 56 },
    [177] = { .lex_state = 15 },
    [178] = { .lex_state = 19 },
    [179] = { .lex_state = 56 },
    [180] = { .lex_state = 0 },
    [181] = { .lex_state = 15 },
    [182] = { .lex_state = 19 },
    [183] = { .lex_state = 19 },
    [184] = { .lex_state = 15 },
    [185] = { .lex_state = 15 },
    [186] = { .lex_state = 60 },
    [187] = { .lex_state = 15 },
    [188] = { .lex_state = 15 },
    [189] = { .lex_state = 15 },
    [190] = { .lex_state = 15 },
    [191] = { .lex_state = 0 },
    [192] = { .lex_state = 15 },
    [193] = { .lex_state = 0 },
    [194] = { .lex_state = 488 },
    [195] = { .lex_state = 15 },
    [196] = { .lex_state = 0 },
    [197] = { .lex_state = 488 },
    [198] = { .lex_state = 19 },
    [199] = { .lex_state = 61 },
    [200] = { .lex_state = 0 },
    [201] = { .lex_state = 77 },
    [202] = { .lex_state = 0 },
    [203] = { .lex_state = 78 },
    [204] = { .lex_state = 19 },
    [205] = { .lex_state = 0 },
    [206] = { .lex_state = 61 },
    [207] = { .lex_state = 15 },
    [208] = { .lex_state = 15 },
    [209] = { .lex_state = 0 },
    [210] = { .lex_state = 15 },
    [211] = { .lex_state = 0 },
    [212] = { .lex_state = 0 },
    [213] = { .lex_state = 77 },
    [214] = { .lex_state = 79 },
    [215] = { .lex_state = 0 },
    [216] = { .lex_state = 15 },
    [217] = { .lex_state = 61 },
    [218] = { .lex_state = 19 },
    [219] = { .lex_state = 15 },
    [220] = { .lex_state = 488 },
    [221] = { .lex_state = 15 },
    [222] = { .lex_state = 77 },
    [223] = { .lex_state = 61 },
    [224] = { .lex_state = 61 },
    [225] = { .lex_state = 15 },
    [226] = { .lex_state = 80 },
    [227] = { .lex_state = 0 },
    [228] = { .lex_state = 65 },
    [229] = { .lex_state = 77 },
    [230] = { .lex_state = 0 },
    [231] = { .lex_state = 0 },
    [232] = { .lex_state = 0 },
    [233] = { .lex_state = 15 },
    [234] = { .lex_state = 81 },
    [235] = { .lex_state = 15 },
    [236] = { .lex_state = 61 },
    [237] = { .lex_state = 15 },
    [238] = { .lex_state = 15 },
    [239] = { .lex_state = 0 },
    [240] = { .lex_state = 0 },
    [241] = { .lex_state = 0 },
    [242] = { .lex_state = 0 },
    [243] = { .lex_state = 15 },
    [244] = { .lex_state = 15 },
    [245] = { .lex_state = 0 },
    [246] = { .lex_state = 488 },
    [247] = { .lex_state = 0 },
    [248] = { .lex_state = 15 },
    [249] = { .lex_state = 488 },
    [250] = { .lex_state = 0 },
    [251] = { .lex_state = 80 },
    [252] = { .lex_state = 0 },
    [253] = { .lex_state = 15 },
    [254] = { .lex_state = 0 },
    [255] = { .lex_state = 15 },
    [256] = { .lex_state = 65 },
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
        [anon_sym_pass] = ACTIONS(1),
        [anon_sym_c] = ACTIONS(1),
        [anon_sym_a] = ACTIONS(1),
        [anon_sym_r] = ACTIONS(1),
        [anon_sym_m] = ACTIONS(1),
        [anon_sym_p] = ACTIONS(1),
        [anon_sym_n] = ACTIONS(1),
        [anon_sym_v] = ACTIONS(1),
        [anon_sym_quotes] = ACTIONS(1),
        [anon_sym_q] = ACTIONS(1),
    },
    [1] = {
        [sym_inline] = STATE(211),
        [sym_replacement] = STATE(3),
        [sym__word] = STATE(3),
        [sym__punctuation] = STATE(3),
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
        [anon_sym_LT_LT] = ACTIONS(33),
        [anon_sym_xref] = ACTIONS(35),
        [anon_sym_STAR2] = ACTIONS(37),
        [anon_sym_STAR_STAR] = ACTIONS(39),
        [anon_sym__2] = ACTIONS(41),
        [anon_sym___] = ACTIONS(43),
        [anon_sym_BQUOTE2] = ACTIONS(45),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(47),
        [anon_sym_POUND2] = ACTIONS(49),
        [anon_sym_POUND_POUND] = ACTIONS(51),
        [anon_sym_pass] = ACTIONS(53),
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
        [anon_sym_LT_LT] = ACTIONS(102),
        [anon_sym_xref] = ACTIONS(105),
        [anon_sym_STAR2] = ACTIONS(108),
        [anon_sym_STAR_STAR] = ACTIONS(111),
        [anon_sym__2] = ACTIONS(114),
        [anon_sym___] = ACTIONS(117),
        [anon_sym_BQUOTE2] = ACTIONS(120),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(123),
        [anon_sym_POUND2] = ACTIONS(126),
        [anon_sym_POUND_POUND] = ACTIONS(129),
        [anon_sym_pass] = ACTIONS(132),
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
        [anon_sym_LT_LT] = ACTIONS(33),
        [anon_sym_xref] = ACTIONS(35),
        [anon_sym_STAR2] = ACTIONS(37),
        [anon_sym_STAR_STAR] = ACTIONS(39),
        [anon_sym__2] = ACTIONS(41),
        [anon_sym___] = ACTIONS(43),
        [anon_sym_BQUOTE2] = ACTIONS(45),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(47),
        [anon_sym_POUND2] = ACTIONS(49),
        [anon_sym_POUND_POUND] = ACTIONS(51),
        [anon_sym_pass] = ACTIONS(53),
    },
    [4] = {
        [aux_sym_link_url_repeat1] = STATE(9),
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
        [anon_sym_pass] = ACTIONS(141),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [aux_sym_replacement_token1] = ACTIONS(149),
        [anon_sym_RBRACE] = ACTIONS(147),
        [sym__word_no_digit] = ACTIONS(147),
        [sym__digits] = ACTIONS(147),
        [anon_sym_BANG] = ACTIONS(147),
        [anon_sym_DQUOTE] = ACTIONS(147),
        [anon_sym_POUND] = ACTIONS(147),
        [anon_sym_DOLLAR] = ACTIONS(147),
        [anon_sym_PERCENT] = ACTIONS(147),
        [anon_sym_AMP] = ACTIONS(147),
        [anon_sym_SQUOTE] = ACTIONS(147),
        [anon_sym_LPAREN] = ACTIONS(147),
        [anon_sym_RPAREN] = ACTIONS(147),
        [anon_sym_STAR] = ACTIONS(147),
        [anon_sym_PLUS] = ACTIONS(147),
        [anon_sym_COMMA] = ACTIONS(147),
        [anon_sym_DASH] = ACTIONS(147),
        [anon_sym_DOT] = ACTIONS(147),
        [anon_sym_SLASH] = ACTIONS(147),
        [anon_sym_COLON] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_LT] = ACTIONS(147),
        [anon_sym_EQ] = ACTIONS(147),
        [anon_sym_GT] = ACTIONS(147),
        [anon_sym_QMARK] = ACTIONS(147),
        [anon_sym_AT] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(147),
        [anon_sym_BSLASH] = ACTIONS(147),
        [anon_sym_RBRACK] = ACTIONS(147),
        [anon_sym_CARET] = ACTIONS(147),
        [anon_sym__] = ACTIONS(147),
        [anon_sym_BQUOTE] = ACTIONS(147),
        [anon_sym_PIPE] = ACTIONS(147),
        [anon_sym_TILDE] = ACTIONS(147),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(147),
        [anon_sym_anchor] = ACTIONS(147),
        [sym_email] = ACTIONS(147),
        [anon_sym_footnote] = ACTIONS(147),
        [anon_sym_footnoteref] = ACTIONS(147),
        [anon_sym_image] = ACTIONS(147),
        [anon_sym_icon] = ACTIONS(147),
        [anon_sym_kbd] = ACTIONS(147),
        [anon_sym_btn] = ACTIONS(147),
        [anon_sym_http] = ACTIONS(147),
        [anon_sym_https] = ACTIONS(147),
        [anon_sym_file] = ACTIONS(147),
        [anon_sym_ftp] = ACTIONS(147),
        [anon_sym_irc] = ACTIONS(147),
        [anon_sym_link] = ACTIONS(147),
        [anon_sym_mailto] = ACTIONS(147),
        [anon_sym_stem] = ACTIONS(147),
        [anon_sym_latexmath] = ACTIONS(147),
        [anon_sym_asciimath] = ACTIONS(147),
        [anon_sym_menu] = ACTIONS(147),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(147),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(147),
        [anon_sym_LT_LT] = ACTIONS(147),
        [anon_sym_xref] = ACTIONS(147),
        [anon_sym_STAR2] = ACTIONS(147),
        [anon_sym_STAR_STAR] = ACTIONS(147),
        [anon_sym__2] = ACTIONS(147),
        [anon_sym___] = ACTIONS(147),
        [anon_sym_BQUOTE2] = ACTIONS(147),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(147),
        [anon_sym_POUND2] = ACTIONS(147),
        [anon_sym_POUND_POUND] = ACTIONS(147),
        [anon_sym_pass] = ACTIONS(147),
    },
    [6] = {
        [sym_link_url] = STATE(190),
        [ts_builtin_sym_end] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [anon_sym_RBRACE] = ACTIONS(147),
        [sym__word_no_digit] = ACTIONS(147),
        [sym__digits] = ACTIONS(147),
        [anon_sym_BANG] = ACTIONS(147),
        [anon_sym_DQUOTE] = ACTIONS(147),
        [anon_sym_POUND] = ACTIONS(147),
        [anon_sym_DOLLAR] = ACTIONS(147),
        [anon_sym_PERCENT] = ACTIONS(147),
        [anon_sym_AMP] = ACTIONS(147),
        [anon_sym_SQUOTE] = ACTIONS(147),
        [anon_sym_LPAREN] = ACTIONS(147),
        [anon_sym_RPAREN] = ACTIONS(147),
        [anon_sym_STAR] = ACTIONS(147),
        [anon_sym_PLUS] = ACTIONS(147),
        [anon_sym_COMMA] = ACTIONS(147),
        [anon_sym_DASH] = ACTIONS(147),
        [anon_sym_DOT] = ACTIONS(147),
        [anon_sym_SLASH] = ACTIONS(147),
        [anon_sym_COLON] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_LT] = ACTIONS(147),
        [anon_sym_EQ] = ACTIONS(147),
        [anon_sym_GT] = ACTIONS(147),
        [anon_sym_QMARK] = ACTIONS(147),
        [anon_sym_AT] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(147),
        [anon_sym_BSLASH] = ACTIONS(147),
        [anon_sym_RBRACK] = ACTIONS(147),
        [anon_sym_CARET] = ACTIONS(147),
        [anon_sym__] = ACTIONS(147),
        [anon_sym_BQUOTE] = ACTIONS(147),
        [anon_sym_PIPE] = ACTIONS(147),
        [anon_sym_TILDE] = ACTIONS(147),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(147),
        [anon_sym_anchor] = ACTIONS(147),
        [sym_email] = ACTIONS(147),
        [anon_sym_footnote] = ACTIONS(147),
        [anon_sym_footnoteref] = ACTIONS(147),
        [anon_sym_image] = ACTIONS(147),
        [anon_sym_icon] = ACTIONS(147),
        [anon_sym_kbd] = ACTIONS(147),
        [anon_sym_btn] = ACTIONS(147),
        [anon_sym_http] = ACTIONS(151),
        [anon_sym_https] = ACTIONS(151),
        [anon_sym_file] = ACTIONS(151),
        [anon_sym_ftp] = ACTIONS(151),
        [anon_sym_irc] = ACTIONS(151),
        [anon_sym_link] = ACTIONS(147),
        [anon_sym_mailto] = ACTIONS(147),
        [anon_sym_stem] = ACTIONS(147),
        [anon_sym_latexmath] = ACTIONS(147),
        [anon_sym_asciimath] = ACTIONS(147),
        [anon_sym_menu] = ACTIONS(147),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(147),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(147),
        [anon_sym_LT_LT] = ACTIONS(147),
        [anon_sym_xref] = ACTIONS(147),
        [anon_sym_STAR2] = ACTIONS(147),
        [anon_sym_STAR_STAR] = ACTIONS(147),
        [anon_sym__2] = ACTIONS(147),
        [anon_sym___] = ACTIONS(147),
        [anon_sym_BQUOTE2] = ACTIONS(147),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(147),
        [anon_sym_POUND2] = ACTIONS(147),
        [anon_sym_POUND_POUND] = ACTIONS(147),
        [anon_sym_pass] = ACTIONS(147),
    },
    [7] = {
        [ts_builtin_sym_end] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [anon_sym_RBRACE] = ACTIONS(147),
        [sym__word_no_digit] = ACTIONS(147),
        [sym__digits] = ACTIONS(147),
        [anon_sym_BANG] = ACTIONS(147),
        [anon_sym_DQUOTE] = ACTIONS(147),
        [anon_sym_POUND] = ACTIONS(147),
        [anon_sym_DOLLAR] = ACTIONS(147),
        [anon_sym_PERCENT] = ACTIONS(147),
        [anon_sym_AMP] = ACTIONS(147),
        [anon_sym_SQUOTE] = ACTIONS(147),
        [anon_sym_LPAREN] = ACTIONS(147),
        [anon_sym_RPAREN] = ACTIONS(147),
        [anon_sym_STAR] = ACTIONS(147),
        [anon_sym_PLUS] = ACTIONS(147),
        [anon_sym_COMMA] = ACTIONS(147),
        [anon_sym_DASH] = ACTIONS(147),
        [anon_sym_DOT] = ACTIONS(147),
        [anon_sym_SLASH] = ACTIONS(147),
        [anon_sym_COLON] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_LT] = ACTIONS(147),
        [anon_sym_EQ] = ACTIONS(147),
        [anon_sym_GT] = ACTIONS(147),
        [anon_sym_QMARK] = ACTIONS(147),
        [anon_sym_AT] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(147),
        [anon_sym_BSLASH] = ACTIONS(147),
        [anon_sym_RBRACK] = ACTIONS(147),
        [anon_sym_CARET] = ACTIONS(147),
        [anon_sym__] = ACTIONS(147),
        [anon_sym_BQUOTE] = ACTIONS(147),
        [anon_sym_PIPE] = ACTIONS(147),
        [anon_sym_TILDE] = ACTIONS(147),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(147),
        [aux_sym_anchor_token1] = ACTIONS(153),
        [anon_sym_anchor] = ACTIONS(147),
        [sym_email] = ACTIONS(147),
        [anon_sym_footnote] = ACTIONS(147),
        [anon_sym_footnoteref] = ACTIONS(147),
        [anon_sym_image] = ACTIONS(147),
        [anon_sym_icon] = ACTIONS(147),
        [anon_sym_kbd] = ACTIONS(147),
        [anon_sym_btn] = ACTIONS(147),
        [anon_sym_http] = ACTIONS(147),
        [anon_sym_https] = ACTIONS(147),
        [anon_sym_file] = ACTIONS(147),
        [anon_sym_ftp] = ACTIONS(147),
        [anon_sym_irc] = ACTIONS(147),
        [anon_sym_link] = ACTIONS(147),
        [anon_sym_mailto] = ACTIONS(147),
        [anon_sym_stem] = ACTIONS(147),
        [anon_sym_latexmath] = ACTIONS(147),
        [anon_sym_asciimath] = ACTIONS(147),
        [anon_sym_menu] = ACTIONS(147),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(147),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(147),
        [anon_sym_LT_LT] = ACTIONS(147),
        [anon_sym_xref] = ACTIONS(147),
        [anon_sym_STAR2] = ACTIONS(147),
        [anon_sym_STAR_STAR] = ACTIONS(147),
        [anon_sym__2] = ACTIONS(147),
        [anon_sym___] = ACTIONS(147),
        [anon_sym_BQUOTE2] = ACTIONS(147),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(147),
        [anon_sym_POUND2] = ACTIONS(147),
        [anon_sym_POUND_POUND] = ACTIONS(147),
        [anon_sym_pass] = ACTIONS(147),
    },
    [8] = {
        [aux_sym_link_url_repeat1] = STATE(8),
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
        [anon_sym_DOT] = ACTIONS(159),
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
        [anon_sym_pass] = ACTIONS(157),
    },
    [9] = {
        [aux_sym_link_url_repeat1] = STATE(8),
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
        [anon_sym_DOT] = ACTIONS(143),
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
        [anon_sym_pass] = ACTIONS(164),
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
        [anon_sym_pass] = ACTIONS(168),
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
        [anon_sym_pass] = ACTIONS(172),
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
        [anon_sym_pass] = ACTIONS(176),
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
        [anon_sym_pass] = ACTIONS(180),
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
        [anon_sym_pass] = ACTIONS(184),
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
        [anon_sym_pass] = ACTIONS(188),
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
        [anon_sym_pass] = ACTIONS(192),
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
        [anon_sym_pass] = ACTIONS(196),
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
        [anon_sym_pass] = ACTIONS(200),
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
        [anon_sym_pass] = ACTIONS(204),
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
        [anon_sym_pass] = ACTIONS(208),
    },
    [21] = {
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
        [anon_sym_pass] = ACTIONS(212),
    },
    [22] = {
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
        [anon_sym_pass] = ACTIONS(216),
    },
    [23] = {
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
        [anon_sym_pass] = ACTIONS(220),
    },
    [24] = {
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
        [anon_sym_pass] = ACTIONS(224),
    },
    [25] = {
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
        [anon_sym_pass] = ACTIONS(228),
    },
    [26] = {
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
        [anon_sym_pass] = ACTIONS(232),
    },
    [27] = {
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
        [anon_sym_LBRACK] = ACTIONS(236),
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
        [anon_sym_pass] = ACTIONS(236),
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
        [anon_sym_pass] = ACTIONS(157),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(238),
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
        [anon_sym_COLON] = ACTIONS(240),
        [anon_sym_SEMI] = ACTIONS(240),
        [anon_sym_LT] = ACTIONS(240),
        [anon_sym_EQ] = ACTIONS(240),
        [anon_sym_GT] = ACTIONS(240),
        [anon_sym_QMARK] = ACTIONS(240),
        [anon_sym_AT] = ACTIONS(240),
        [anon_sym_LBRACK] = ACTIONS(240),
        [anon_sym_BSLASH] = ACTIONS(240),
        [anon_sym_RBRACK] = ACTIONS(240),
        [anon_sym_CARET] = ACTIONS(240),
        [anon_sym__] = ACTIONS(240),
        [anon_sym_BQUOTE] = ACTIONS(240),
        [anon_sym_PIPE] = ACTIONS(240),
        [anon_sym_TILDE] = ACTIONS(240),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(240),
        [anon_sym_anchor] = ACTIONS(240),
        [sym_email] = ACTIONS(240),
        [anon_sym_footnote] = ACTIONS(240),
        [anon_sym_footnoteref] = ACTIONS(240),
        [anon_sym_image] = ACTIONS(240),
        [anon_sym_icon] = ACTIONS(240),
        [anon_sym_kbd] = ACTIONS(240),
        [anon_sym_btn] = ACTIONS(240),
        [anon_sym_http] = ACTIONS(240),
        [anon_sym_https] = ACTIONS(240),
        [anon_sym_file] = ACTIONS(240),
        [anon_sym_ftp] = ACTIONS(240),
        [anon_sym_irc] = ACTIONS(240),
        [anon_sym_link] = ACTIONS(240),
        [anon_sym_mailto] = ACTIONS(240),
        [anon_sym_stem] = ACTIONS(240),
        [anon_sym_latexmath] = ACTIONS(240),
        [anon_sym_asciimath] = ACTIONS(240),
        [anon_sym_menu] = ACTIONS(240),
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
        [anon_sym_pass] = ACTIONS(240),
    },
    [30] = {
        [ts_builtin_sym_end] = ACTIONS(242),
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
        [anon_sym_COLON] = ACTIONS(244),
        [anon_sym_SEMI] = ACTIONS(244),
        [anon_sym_LT] = ACTIONS(244),
        [anon_sym_EQ] = ACTIONS(244),
        [anon_sym_GT] = ACTIONS(244),
        [anon_sym_QMARK] = ACTIONS(244),
        [anon_sym_AT] = ACTIONS(244),
        [anon_sym_LBRACK] = ACTIONS(246),
        [anon_sym_BSLASH] = ACTIONS(244),
        [anon_sym_RBRACK] = ACTIONS(244),
        [anon_sym_CARET] = ACTIONS(244),
        [anon_sym__] = ACTIONS(244),
        [anon_sym_BQUOTE] = ACTIONS(244),
        [anon_sym_PIPE] = ACTIONS(244),
        [anon_sym_TILDE] = ACTIONS(244),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(244),
        [anon_sym_anchor] = ACTIONS(244),
        [sym_email] = ACTIONS(244),
        [anon_sym_footnote] = ACTIONS(244),
        [anon_sym_footnoteref] = ACTIONS(244),
        [anon_sym_image] = ACTIONS(244),
        [anon_sym_icon] = ACTIONS(244),
        [anon_sym_kbd] = ACTIONS(244),
        [anon_sym_btn] = ACTIONS(244),
        [anon_sym_http] = ACTIONS(244),
        [anon_sym_https] = ACTIONS(244),
        [anon_sym_file] = ACTIONS(244),
        [anon_sym_ftp] = ACTIONS(244),
        [anon_sym_irc] = ACTIONS(244),
        [anon_sym_link] = ACTIONS(244),
        [anon_sym_mailto] = ACTIONS(244),
        [anon_sym_stem] = ACTIONS(244),
        [anon_sym_latexmath] = ACTIONS(244),
        [anon_sym_asciimath] = ACTIONS(244),
        [anon_sym_menu] = ACTIONS(244),
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
        [anon_sym_pass] = ACTIONS(244),
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
        [anon_sym_pass] = ACTIONS(250),
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
        [anon_sym_pass] = ACTIONS(254),
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
        [anon_sym_pass] = ACTIONS(258),
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
        [anon_sym_pass] = ACTIONS(262),
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
        [anon_sym_pass] = ACTIONS(266),
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
        [anon_sym_pass] = ACTIONS(270),
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
        [anon_sym_pass] = ACTIONS(274),
    },
    [38] = {
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
        [anon_sym_pass] = ACTIONS(180),
    },
    [39] = {
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
        [anon_sym_pass] = ACTIONS(278),
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
        [anon_sym_pass] = ACTIONS(282),
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
        [anon_sym_pass] = ACTIONS(286),
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
        [anon_sym_pass] = ACTIONS(290),
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
        [anon_sym_pass] = ACTIONS(294),
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
        [anon_sym_pass] = ACTIONS(298),
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
        [anon_sym_pass] = ACTIONS(302),
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
        [anon_sym_pass] = ACTIONS(306),
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
        [anon_sym_pass] = ACTIONS(310),
    },
    [48] = {
        [ts_builtin_sym_end] = ACTIONS(312),
        [anon_sym_LBRACE] = ACTIONS(314),
        [anon_sym_RBRACE] = ACTIONS(314),
        [sym__word_no_digit] = ACTIONS(314),
        [sym__digits] = ACTIONS(314),
        [anon_sym_BANG] = ACTIONS(314),
        [anon_sym_DQUOTE] = ACTIONS(314),
        [anon_sym_POUND] = ACTIONS(314),
        [anon_sym_DOLLAR] = ACTIONS(314),
        [anon_sym_PERCENT] = ACTIONS(314),
        [anon_sym_AMP] = ACTIONS(314),
        [anon_sym_SQUOTE] = ACTIONS(314),
        [anon_sym_LPAREN] = ACTIONS(314),
        [anon_sym_RPAREN] = ACTIONS(314),
        [anon_sym_STAR] = ACTIONS(314),
        [anon_sym_PLUS] = ACTIONS(314),
        [anon_sym_COMMA] = ACTIONS(314),
        [anon_sym_DASH] = ACTIONS(314),
        [anon_sym_DOT] = ACTIONS(314),
        [anon_sym_SLASH] = ACTIONS(314),
        [anon_sym_COLON] = ACTIONS(314),
        [anon_sym_SEMI] = ACTIONS(314),
        [anon_sym_LT] = ACTIONS(314),
        [anon_sym_EQ] = ACTIONS(314),
        [anon_sym_GT] = ACTIONS(314),
        [anon_sym_QMARK] = ACTIONS(314),
        [anon_sym_AT] = ACTIONS(314),
        [anon_sym_LBRACK] = ACTIONS(314),
        [anon_sym_BSLASH] = ACTIONS(314),
        [anon_sym_RBRACK] = ACTIONS(314),
        [anon_sym_CARET] = ACTIONS(314),
        [anon_sym__] = ACTIONS(314),
        [anon_sym_BQUOTE] = ACTIONS(314),
        [anon_sym_PIPE] = ACTIONS(314),
        [anon_sym_TILDE] = ACTIONS(314),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(314),
        [anon_sym_anchor] = ACTIONS(314),
        [sym_email] = ACTIONS(314),
        [anon_sym_footnote] = ACTIONS(314),
        [anon_sym_footnoteref] = ACTIONS(314),
        [anon_sym_image] = ACTIONS(314),
        [anon_sym_icon] = ACTIONS(314),
        [anon_sym_kbd] = ACTIONS(314),
        [anon_sym_btn] = ACTIONS(314),
        [anon_sym_http] = ACTIONS(314),
        [anon_sym_https] = ACTIONS(314),
        [anon_sym_file] = ACTIONS(314),
        [anon_sym_ftp] = ACTIONS(314),
        [anon_sym_irc] = ACTIONS(314),
        [anon_sym_link] = ACTIONS(314),
        [anon_sym_mailto] = ACTIONS(314),
        [anon_sym_stem] = ACTIONS(314),
        [anon_sym_latexmath] = ACTIONS(314),
        [anon_sym_asciimath] = ACTIONS(314),
        [anon_sym_menu] = ACTIONS(314),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(314),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(314),
        [anon_sym_LT_LT] = ACTIONS(314),
        [anon_sym_xref] = ACTIONS(314),
        [anon_sym_STAR2] = ACTIONS(314),
        [anon_sym_STAR_STAR] = ACTIONS(314),
        [anon_sym__2] = ACTIONS(314),
        [anon_sym___] = ACTIONS(314),
        [anon_sym_BQUOTE2] = ACTIONS(314),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(314),
        [anon_sym_POUND2] = ACTIONS(314),
        [anon_sym_POUND_POUND] = ACTIONS(314),
        [anon_sym_pass] = ACTIONS(314),
    },
    [49] = {
        [ts_builtin_sym_end] = ACTIONS(316),
        [anon_sym_LBRACE] = ACTIONS(318),
        [anon_sym_RBRACE] = ACTIONS(318),
        [sym__word_no_digit] = ACTIONS(318),
        [sym__digits] = ACTIONS(318),
        [anon_sym_BANG] = ACTIONS(318),
        [anon_sym_DQUOTE] = ACTIONS(318),
        [anon_sym_POUND] = ACTIONS(318),
        [anon_sym_DOLLAR] = ACTIONS(318),
        [anon_sym_PERCENT] = ACTIONS(318),
        [anon_sym_AMP] = ACTIONS(318),
        [anon_sym_SQUOTE] = ACTIONS(318),
        [anon_sym_LPAREN] = ACTIONS(318),
        [anon_sym_RPAREN] = ACTIONS(318),
        [anon_sym_STAR] = ACTIONS(318),
        [anon_sym_PLUS] = ACTIONS(318),
        [anon_sym_COMMA] = ACTIONS(318),
        [anon_sym_DASH] = ACTIONS(318),
        [anon_sym_DOT] = ACTIONS(318),
        [anon_sym_SLASH] = ACTIONS(318),
        [anon_sym_COLON] = ACTIONS(318),
        [anon_sym_SEMI] = ACTIONS(318),
        [anon_sym_LT] = ACTIONS(318),
        [anon_sym_EQ] = ACTIONS(318),
        [anon_sym_GT] = ACTIONS(318),
        [anon_sym_QMARK] = ACTIONS(318),
        [anon_sym_AT] = ACTIONS(318),
        [anon_sym_LBRACK] = ACTIONS(318),
        [anon_sym_BSLASH] = ACTIONS(318),
        [anon_sym_RBRACK] = ACTIONS(318),
        [anon_sym_CARET] = ACTIONS(318),
        [anon_sym__] = ACTIONS(318),
        [anon_sym_BQUOTE] = ACTIONS(318),
        [anon_sym_PIPE] = ACTIONS(318),
        [anon_sym_TILDE] = ACTIONS(318),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(318),
        [anon_sym_anchor] = ACTIONS(318),
        [sym_email] = ACTIONS(318),
        [anon_sym_footnote] = ACTIONS(318),
        [anon_sym_footnoteref] = ACTIONS(318),
        [anon_sym_image] = ACTIONS(318),
        [anon_sym_icon] = ACTIONS(318),
        [anon_sym_kbd] = ACTIONS(318),
        [anon_sym_btn] = ACTIONS(318),
        [anon_sym_http] = ACTIONS(318),
        [anon_sym_https] = ACTIONS(318),
        [anon_sym_file] = ACTIONS(318),
        [anon_sym_ftp] = ACTIONS(318),
        [anon_sym_irc] = ACTIONS(318),
        [anon_sym_link] = ACTIONS(318),
        [anon_sym_mailto] = ACTIONS(318),
        [anon_sym_stem] = ACTIONS(318),
        [anon_sym_latexmath] = ACTIONS(318),
        [anon_sym_asciimath] = ACTIONS(318),
        [anon_sym_menu] = ACTIONS(318),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(318),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(318),
        [anon_sym_LT_LT] = ACTIONS(318),
        [anon_sym_xref] = ACTIONS(318),
        [anon_sym_STAR2] = ACTIONS(318),
        [anon_sym_STAR_STAR] = ACTIONS(318),
        [anon_sym__2] = ACTIONS(318),
        [anon_sym___] = ACTIONS(318),
        [anon_sym_BQUOTE2] = ACTIONS(318),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(318),
        [anon_sym_POUND2] = ACTIONS(318),
        [anon_sym_POUND_POUND] = ACTIONS(318),
        [anon_sym_pass] = ACTIONS(318),
    },
    [50] = {
        [ts_builtin_sym_end] = ACTIONS(320),
        [anon_sym_LBRACE] = ACTIONS(322),
        [anon_sym_RBRACE] = ACTIONS(322),
        [sym__word_no_digit] = ACTIONS(322),
        [sym__digits] = ACTIONS(322),
        [anon_sym_BANG] = ACTIONS(322),
        [anon_sym_DQUOTE] = ACTIONS(322),
        [anon_sym_POUND] = ACTIONS(322),
        [anon_sym_DOLLAR] = ACTIONS(322),
        [anon_sym_PERCENT] = ACTIONS(322),
        [anon_sym_AMP] = ACTIONS(322),
        [anon_sym_SQUOTE] = ACTIONS(322),
        [anon_sym_LPAREN] = ACTIONS(322),
        [anon_sym_RPAREN] = ACTIONS(322),
        [anon_sym_STAR] = ACTIONS(322),
        [anon_sym_PLUS] = ACTIONS(322),
        [anon_sym_COMMA] = ACTIONS(322),
        [anon_sym_DASH] = ACTIONS(322),
        [anon_sym_DOT] = ACTIONS(322),
        [anon_sym_SLASH] = ACTIONS(322),
        [anon_sym_COLON] = ACTIONS(322),
        [anon_sym_SEMI] = ACTIONS(322),
        [anon_sym_LT] = ACTIONS(322),
        [anon_sym_EQ] = ACTIONS(322),
        [anon_sym_GT] = ACTIONS(322),
        [anon_sym_QMARK] = ACTIONS(322),
        [anon_sym_AT] = ACTIONS(322),
        [anon_sym_LBRACK] = ACTIONS(322),
        [anon_sym_BSLASH] = ACTIONS(322),
        [anon_sym_RBRACK] = ACTIONS(322),
        [anon_sym_CARET] = ACTIONS(322),
        [anon_sym__] = ACTIONS(322),
        [anon_sym_BQUOTE] = ACTIONS(322),
        [anon_sym_PIPE] = ACTIONS(322),
        [anon_sym_TILDE] = ACTIONS(322),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(322),
        [anon_sym_anchor] = ACTIONS(322),
        [sym_email] = ACTIONS(322),
        [anon_sym_footnote] = ACTIONS(322),
        [anon_sym_footnoteref] = ACTIONS(322),
        [anon_sym_image] = ACTIONS(322),
        [anon_sym_icon] = ACTIONS(322),
        [anon_sym_kbd] = ACTIONS(322),
        [anon_sym_btn] = ACTIONS(322),
        [anon_sym_http] = ACTIONS(322),
        [anon_sym_https] = ACTIONS(322),
        [anon_sym_file] = ACTIONS(322),
        [anon_sym_ftp] = ACTIONS(322),
        [anon_sym_irc] = ACTIONS(322),
        [anon_sym_link] = ACTIONS(322),
        [anon_sym_mailto] = ACTIONS(322),
        [anon_sym_stem] = ACTIONS(322),
        [anon_sym_latexmath] = ACTIONS(322),
        [anon_sym_asciimath] = ACTIONS(322),
        [anon_sym_menu] = ACTIONS(322),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(322),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(322),
        [anon_sym_LT_LT] = ACTIONS(322),
        [anon_sym_xref] = ACTIONS(322),
        [anon_sym_STAR2] = ACTIONS(322),
        [anon_sym_STAR_STAR] = ACTIONS(322),
        [anon_sym__2] = ACTIONS(322),
        [anon_sym___] = ACTIONS(322),
        [anon_sym_BQUOTE2] = ACTIONS(322),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(322),
        [anon_sym_POUND2] = ACTIONS(322),
        [anon_sym_POUND_POUND] = ACTIONS(322),
        [anon_sym_pass] = ACTIONS(322),
    },
    [51] = {
        [ts_builtin_sym_end] = ACTIONS(324),
        [anon_sym_LBRACE] = ACTIONS(326),
        [anon_sym_RBRACE] = ACTIONS(326),
        [sym__word_no_digit] = ACTIONS(326),
        [sym__digits] = ACTIONS(326),
        [anon_sym_BANG] = ACTIONS(326),
        [anon_sym_DQUOTE] = ACTIONS(326),
        [anon_sym_POUND] = ACTIONS(326),
        [anon_sym_DOLLAR] = ACTIONS(326),
        [anon_sym_PERCENT] = ACTIONS(326),
        [anon_sym_AMP] = ACTIONS(326),
        [anon_sym_SQUOTE] = ACTIONS(326),
        [anon_sym_LPAREN] = ACTIONS(326),
        [anon_sym_RPAREN] = ACTIONS(326),
        [anon_sym_STAR] = ACTIONS(326),
        [anon_sym_PLUS] = ACTIONS(326),
        [anon_sym_COMMA] = ACTIONS(326),
        [anon_sym_DASH] = ACTIONS(326),
        [anon_sym_DOT] = ACTIONS(326),
        [anon_sym_SLASH] = ACTIONS(326),
        [anon_sym_COLON] = ACTIONS(326),
        [anon_sym_SEMI] = ACTIONS(326),
        [anon_sym_LT] = ACTIONS(326),
        [anon_sym_EQ] = ACTIONS(326),
        [anon_sym_GT] = ACTIONS(326),
        [anon_sym_QMARK] = ACTIONS(326),
        [anon_sym_AT] = ACTIONS(326),
        [anon_sym_LBRACK] = ACTIONS(326),
        [anon_sym_BSLASH] = ACTIONS(326),
        [anon_sym_RBRACK] = ACTIONS(326),
        [anon_sym_CARET] = ACTIONS(326),
        [anon_sym__] = ACTIONS(326),
        [anon_sym_BQUOTE] = ACTIONS(326),
        [anon_sym_PIPE] = ACTIONS(326),
        [anon_sym_TILDE] = ACTIONS(326),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(326),
        [anon_sym_anchor] = ACTIONS(326),
        [sym_email] = ACTIONS(326),
        [anon_sym_footnote] = ACTIONS(326),
        [anon_sym_footnoteref] = ACTIONS(326),
        [anon_sym_image] = ACTIONS(326),
        [anon_sym_icon] = ACTIONS(326),
        [anon_sym_kbd] = ACTIONS(326),
        [anon_sym_btn] = ACTIONS(326),
        [anon_sym_http] = ACTIONS(326),
        [anon_sym_https] = ACTIONS(326),
        [anon_sym_file] = ACTIONS(326),
        [anon_sym_ftp] = ACTIONS(326),
        [anon_sym_irc] = ACTIONS(326),
        [anon_sym_link] = ACTIONS(326),
        [anon_sym_mailto] = ACTIONS(326),
        [anon_sym_stem] = ACTIONS(326),
        [anon_sym_latexmath] = ACTIONS(326),
        [anon_sym_asciimath] = ACTIONS(326),
        [anon_sym_menu] = ACTIONS(326),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(326),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(326),
        [anon_sym_LT_LT] = ACTIONS(326),
        [anon_sym_xref] = ACTIONS(326),
        [anon_sym_STAR2] = ACTIONS(326),
        [anon_sym_STAR_STAR] = ACTIONS(326),
        [anon_sym__2] = ACTIONS(326),
        [anon_sym___] = ACTIONS(326),
        [anon_sym_BQUOTE2] = ACTIONS(326),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(326),
        [anon_sym_POUND2] = ACTIONS(326),
        [anon_sym_POUND_POUND] = ACTIONS(326),
        [anon_sym_pass] = ACTIONS(326),
    },
    [52] = {
        [ts_builtin_sym_end] = ACTIONS(328),
        [anon_sym_LBRACE] = ACTIONS(330),
        [anon_sym_RBRACE] = ACTIONS(330),
        [sym__word_no_digit] = ACTIONS(330),
        [sym__digits] = ACTIONS(330),
        [anon_sym_BANG] = ACTIONS(330),
        [anon_sym_DQUOTE] = ACTIONS(330),
        [anon_sym_POUND] = ACTIONS(330),
        [anon_sym_DOLLAR] = ACTIONS(330),
        [anon_sym_PERCENT] = ACTIONS(330),
        [anon_sym_AMP] = ACTIONS(330),
        [anon_sym_SQUOTE] = ACTIONS(330),
        [anon_sym_LPAREN] = ACTIONS(330),
        [anon_sym_RPAREN] = ACTIONS(330),
        [anon_sym_STAR] = ACTIONS(330),
        [anon_sym_PLUS] = ACTIONS(330),
        [anon_sym_COMMA] = ACTIONS(330),
        [anon_sym_DASH] = ACTIONS(330),
        [anon_sym_DOT] = ACTIONS(330),
        [anon_sym_SLASH] = ACTIONS(330),
        [anon_sym_COLON] = ACTIONS(330),
        [anon_sym_SEMI] = ACTIONS(330),
        [anon_sym_LT] = ACTIONS(330),
        [anon_sym_EQ] = ACTIONS(330),
        [anon_sym_GT] = ACTIONS(330),
        [anon_sym_QMARK] = ACTIONS(330),
        [anon_sym_AT] = ACTIONS(330),
        [anon_sym_LBRACK] = ACTIONS(330),
        [anon_sym_BSLASH] = ACTIONS(330),
        [anon_sym_RBRACK] = ACTIONS(330),
        [anon_sym_CARET] = ACTIONS(330),
        [anon_sym__] = ACTIONS(330),
        [anon_sym_BQUOTE] = ACTIONS(330),
        [anon_sym_PIPE] = ACTIONS(330),
        [anon_sym_TILDE] = ACTIONS(330),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(330),
        [anon_sym_anchor] = ACTIONS(330),
        [sym_email] = ACTIONS(330),
        [anon_sym_footnote] = ACTIONS(330),
        [anon_sym_footnoteref] = ACTIONS(330),
        [anon_sym_image] = ACTIONS(330),
        [anon_sym_icon] = ACTIONS(330),
        [anon_sym_kbd] = ACTIONS(330),
        [anon_sym_btn] = ACTIONS(330),
        [anon_sym_http] = ACTIONS(330),
        [anon_sym_https] = ACTIONS(330),
        [anon_sym_file] = ACTIONS(330),
        [anon_sym_ftp] = ACTIONS(330),
        [anon_sym_irc] = ACTIONS(330),
        [anon_sym_link] = ACTIONS(330),
        [anon_sym_mailto] = ACTIONS(330),
        [anon_sym_stem] = ACTIONS(330),
        [anon_sym_latexmath] = ACTIONS(330),
        [anon_sym_asciimath] = ACTIONS(330),
        [anon_sym_menu] = ACTIONS(330),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(330),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(330),
        [anon_sym_LT_LT] = ACTIONS(330),
        [anon_sym_xref] = ACTIONS(330),
        [anon_sym_STAR2] = ACTIONS(330),
        [anon_sym_STAR_STAR] = ACTIONS(330),
        [anon_sym__2] = ACTIONS(330),
        [anon_sym___] = ACTIONS(330),
        [anon_sym_BQUOTE2] = ACTIONS(330),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(330),
        [anon_sym_POUND2] = ACTIONS(330),
        [anon_sym_POUND_POUND] = ACTIONS(330),
        [anon_sym_pass] = ACTIONS(330),
    },
    [53] = {
        [ts_builtin_sym_end] = ACTIONS(332),
        [anon_sym_LBRACE] = ACTIONS(334),
        [anon_sym_RBRACE] = ACTIONS(334),
        [sym__word_no_digit] = ACTIONS(334),
        [sym__digits] = ACTIONS(334),
        [anon_sym_BANG] = ACTIONS(334),
        [anon_sym_DQUOTE] = ACTIONS(334),
        [anon_sym_POUND] = ACTIONS(334),
        [anon_sym_DOLLAR] = ACTIONS(334),
        [anon_sym_PERCENT] = ACTIONS(334),
        [anon_sym_AMP] = ACTIONS(334),
        [anon_sym_SQUOTE] = ACTIONS(334),
        [anon_sym_LPAREN] = ACTIONS(334),
        [anon_sym_RPAREN] = ACTIONS(334),
        [anon_sym_STAR] = ACTIONS(334),
        [anon_sym_PLUS] = ACTIONS(334),
        [anon_sym_COMMA] = ACTIONS(334),
        [anon_sym_DASH] = ACTIONS(334),
        [anon_sym_DOT] = ACTIONS(334),
        [anon_sym_SLASH] = ACTIONS(334),
        [anon_sym_COLON] = ACTIONS(334),
        [anon_sym_SEMI] = ACTIONS(334),
        [anon_sym_LT] = ACTIONS(334),
        [anon_sym_EQ] = ACTIONS(334),
        [anon_sym_GT] = ACTIONS(334),
        [anon_sym_QMARK] = ACTIONS(334),
        [anon_sym_AT] = ACTIONS(334),
        [anon_sym_LBRACK] = ACTIONS(334),
        [anon_sym_BSLASH] = ACTIONS(334),
        [anon_sym_RBRACK] = ACTIONS(334),
        [anon_sym_CARET] = ACTIONS(334),
        [anon_sym__] = ACTIONS(334),
        [anon_sym_BQUOTE] = ACTIONS(334),
        [anon_sym_PIPE] = ACTIONS(334),
        [anon_sym_TILDE] = ACTIONS(334),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(334),
        [anon_sym_anchor] = ACTIONS(334),
        [sym_email] = ACTIONS(334),
        [anon_sym_footnote] = ACTIONS(334),
        [anon_sym_footnoteref] = ACTIONS(334),
        [anon_sym_image] = ACTIONS(334),
        [anon_sym_icon] = ACTIONS(334),
        [anon_sym_kbd] = ACTIONS(334),
        [anon_sym_btn] = ACTIONS(334),
        [anon_sym_http] = ACTIONS(334),
        [anon_sym_https] = ACTIONS(334),
        [anon_sym_file] = ACTIONS(334),
        [anon_sym_ftp] = ACTIONS(334),
        [anon_sym_irc] = ACTIONS(334),
        [anon_sym_link] = ACTIONS(334),
        [anon_sym_mailto] = ACTIONS(334),
        [anon_sym_stem] = ACTIONS(334),
        [anon_sym_latexmath] = ACTIONS(334),
        [anon_sym_asciimath] = ACTIONS(334),
        [anon_sym_menu] = ACTIONS(334),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(334),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(334),
        [anon_sym_LT_LT] = ACTIONS(334),
        [anon_sym_xref] = ACTIONS(334),
        [anon_sym_STAR2] = ACTIONS(334),
        [anon_sym_STAR_STAR] = ACTIONS(334),
        [anon_sym__2] = ACTIONS(334),
        [anon_sym___] = ACTIONS(334),
        [anon_sym_BQUOTE2] = ACTIONS(334),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(334),
        [anon_sym_POUND2] = ACTIONS(334),
        [anon_sym_POUND_POUND] = ACTIONS(334),
        [anon_sym_pass] = ACTIONS(334),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 13,
    ACTIONS(336),
    1,
    anon_sym_LBRACE,
    ACTIONS(339),
    1,
    anon_sym_RBRACK,
    ACTIONS(344),
    1,
    anon_sym_STAR2,
    ACTIONS(347),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(350),
    1,
    anon_sym__2,
    ACTIONS(353),
    1,
    anon_sym___,
    ACTIONS(356),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(359),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(362),
    1,
    anon_sym_POUND2,
    ACTIONS(365),
    1,
    anon_sym_POUND_POUND,
    STATE(54),
    1,
    aux_sym__macro_rule,
    ACTIONS(341),
    2,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(94),
    5,
    sym_replacement,
    sym_emphasis,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    [45] = 13,
    ACTIONS(368),
    1,
    anon_sym_LBRACE,
    ACTIONS(370),
    1,
    anon_sym_RBRACK,
    ACTIONS(374),
    1,
    anon_sym_STAR2,
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
    STATE(54),
    1,
    aux_sym__macro_rule,
    ACTIONS(372),
    2,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(94),
    5,
    sym_replacement,
    sym_emphasis,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    [90] = 13,
    ACTIONS(368),
    1,
    anon_sym_LBRACE,
    ACTIONS(374),
    1,
    anon_sym_STAR2,
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
    ACTIONS(390),
    1,
    anon_sym_RBRACK,
    STATE(54),
    1,
    aux_sym__macro_rule,
    ACTIONS(372),
    2,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(94),
    5,
    sym_replacement,
    sym_emphasis,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    [135] = 13,
    ACTIONS(368),
    1,
    anon_sym_LBRACE,
    ACTIONS(374),
    1,
    anon_sym_STAR2,
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
    ACTIONS(392),
    1,
    anon_sym_RBRACK,
    STATE(55),
    1,
    aux_sym__macro_rule,
    ACTIONS(372),
    2,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(94),
    5,
    sym_replacement,
    sym_emphasis,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    [180] = 13,
    ACTIONS(368),
    1,
    anon_sym_LBRACE,
    ACTIONS(374),
    1,
    anon_sym_STAR2,
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
    ACTIONS(394),
    1,
    anon_sym_RBRACK,
    STATE(56),
    1,
    aux_sym__macro_rule,
    ACTIONS(372),
    2,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(94),
    5,
    sym_replacement,
    sym_emphasis,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    [225] = 13,
    ACTIONS(368),
    1,
    anon_sym_LBRACE,
    ACTIONS(374),
    1,
    anon_sym_STAR2,
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
    ACTIONS(396),
    1,
    anon_sym_RBRACK,
    STATE(54),
    1,
    aux_sym__macro_rule,
    ACTIONS(372),
    2,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(94),
    5,
    sym_replacement,
    sym_emphasis,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    [270] = 13,
    ACTIONS(368),
    1,
    anon_sym_LBRACE,
    ACTIONS(374),
    1,
    anon_sym_STAR2,
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
    ACTIONS(398),
    1,
    anon_sym_RBRACK,
    STATE(59),
    1,
    aux_sym__macro_rule,
    ACTIONS(372),
    2,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(94),
    5,
    sym_replacement,
    sym_emphasis,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    [315] = 9,
    ACTIONS(405),
    1,
    anon_sym__2,
    ACTIONS(408),
    1,
    anon_sym___,
    ACTIONS(411),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(414),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(417),
    1,
    anon_sym_POUND2,
    ACTIONS(420),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(400),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    ACTIONS(403),
    2,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    STATE(61),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [348] = 9,
    ACTIONS(423),
    1,
    anon_sym_STAR2,
    ACTIONS(426),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(434),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(437),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(440),
    1,
    anon_sym_POUND2,
    ACTIONS(443),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(429),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    ACTIONS(432),
    2,
    anon_sym__3,
    anon_sym___,
    STATE(62),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [381] = 9,
    ACTIONS(448),
    1,
    anon_sym_STAR3,
    ACTIONS(450),
    1,
    anon_sym__2,
    ACTIONS(452),
    1,
    anon_sym___,
    ACTIONS(454),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(456),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(458),
    1,
    anon_sym_POUND2,
    ACTIONS(460),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(446),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(86),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [413] = 9,
    ACTIONS(462),
    1,
    anon_sym_STAR2,
    ACTIONS(464),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(468),
    1,
    anon_sym__3,
    ACTIONS(470),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(472),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(474),
    1,
    anon_sym_POUND2,
    ACTIONS(476),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(466),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(62),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [445] = 9,
    ACTIONS(462),
    1,
    anon_sym_STAR2,
    ACTIONS(464),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(470),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(472),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(474),
    1,
    anon_sym_POUND2,
    ACTIONS(476),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(478),
    1,
    anon_sym__3,
    ACTIONS(466),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(62),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [477] = 9,
    ACTIONS(462),
    1,
    anon_sym_STAR2,
    ACTIONS(464),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(470),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(472),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(474),
    1,
    anon_sym_POUND2,
    ACTIONS(476),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(480),
    1,
    anon_sym__3,
    ACTIONS(466),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(62),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [509] = 9,
    ACTIONS(462),
    1,
    anon_sym_STAR2,
    ACTIONS(464),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(470),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(472),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(474),
    1,
    anon_sym_POUND2,
    ACTIONS(476),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(478),
    1,
    anon_sym___,
    ACTIONS(466),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(62),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [541] = 9,
    ACTIONS(450),
    1,
    anon_sym__2,
    ACTIONS(452),
    1,
    anon_sym___,
    ACTIONS(454),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(456),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(458),
    1,
    anon_sym_POUND2,
    ACTIONS(460),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(484),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(482),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(61),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [573] = 9,
    ACTIONS(450),
    1,
    anon_sym__2,
    ACTIONS(452),
    1,
    anon_sym___,
    ACTIONS(454),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(456),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(458),
    1,
    anon_sym_POUND2,
    ACTIONS(460),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(484),
    1,
    anon_sym_STAR3,
    ACTIONS(482),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(61),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [605] = 9,
    ACTIONS(450),
    1,
    anon_sym__2,
    ACTIONS(452),
    1,
    anon_sym___,
    ACTIONS(454),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(456),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(458),
    1,
    anon_sym_POUND2,
    ACTIONS(460),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(486),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(482),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(61),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [637] = 9,
    ACTIONS(450),
    1,
    anon_sym__2,
    ACTIONS(452),
    1,
    anon_sym___,
    ACTIONS(454),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(456),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(458),
    1,
    anon_sym_POUND2,
    ACTIONS(460),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(486),
    1,
    anon_sym_STAR3,
    ACTIONS(482),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(61),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [669] = 9,
    ACTIONS(462),
    1,
    anon_sym_STAR2,
    ACTIONS(464),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(470),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(472),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(474),
    1,
    anon_sym_POUND2,
    ACTIONS(476),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(490),
    1,
    anon_sym___,
    ACTIONS(488),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(67),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [701] = 9,
    ACTIONS(462),
    1,
    anon_sym_STAR2,
    ACTIONS(464),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(470),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(472),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(474),
    1,
    anon_sym_POUND2,
    ACTIONS(476),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(490),
    1,
    anon_sym__3,
    ACTIONS(492),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(65),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [733] = 9,
    ACTIONS(450),
    1,
    anon_sym__2,
    ACTIONS(452),
    1,
    anon_sym___,
    ACTIONS(454),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(456),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(458),
    1,
    anon_sym_POUND2,
    ACTIONS(460),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(496),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(494),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(70),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [765] = 9,
    ACTIONS(450),
    1,
    anon_sym__2,
    ACTIONS(452),
    1,
    anon_sym___,
    ACTIONS(454),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(456),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(458),
    1,
    anon_sym_POUND2,
    ACTIONS(460),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(496),
    1,
    anon_sym_STAR3,
    ACTIONS(498),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(71),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [797] = 9,
    ACTIONS(462),
    1,
    anon_sym_STAR2,
    ACTIONS(464),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(468),
    1,
    anon_sym___,
    ACTIONS(470),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(472),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(474),
    1,
    anon_sym_POUND2,
    ACTIONS(476),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(466),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(62),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [829] = 9,
    ACTIONS(462),
    1,
    anon_sym_STAR2,
    ACTIONS(464),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(470),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(472),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(474),
    1,
    anon_sym_POUND2,
    ACTIONS(476),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(480),
    1,
    anon_sym___,
    ACTIONS(466),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(62),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [861] = 9,
    ACTIONS(450),
    1,
    anon_sym__2,
    ACTIONS(452),
    1,
    anon_sym___,
    ACTIONS(454),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(456),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(458),
    1,
    anon_sym_POUND2,
    ACTIONS(460),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(500),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(482),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(61),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [893] = 9,
    ACTIONS(448),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(450),
    1,
    anon_sym__2,
    ACTIONS(452),
    1,
    anon_sym___,
    ACTIONS(454),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(456),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(458),
    1,
    anon_sym_POUND2,
    ACTIONS(460),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(502),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(78),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [925] = 9,
    ACTIONS(462),
    1,
    anon_sym_STAR2,
    ACTIONS(464),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(470),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(472),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(474),
    1,
    anon_sym_POUND2,
    ACTIONS(476),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(506),
    1,
    anon_sym__3,
    ACTIONS(504),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(64),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [957] = 9,
    ACTIONS(462),
    1,
    anon_sym_STAR2,
    ACTIONS(464),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(470),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(472),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(474),
    1,
    anon_sym_POUND2,
    ACTIONS(476),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(510),
    1,
    anon_sym___,
    ACTIONS(508),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(77),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [989] = 9,
    ACTIONS(462),
    1,
    anon_sym_STAR2,
    ACTIONS(464),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(470),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(472),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(474),
    1,
    anon_sym_POUND2,
    ACTIONS(476),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(510),
    1,
    anon_sym__3,
    ACTIONS(512),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(66),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [1021] = 9,
    ACTIONS(450),
    1,
    anon_sym__2,
    ACTIONS(452),
    1,
    anon_sym___,
    ACTIONS(454),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(456),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(458),
    1,
    anon_sym_POUND2,
    ACTIONS(460),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(516),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(514),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(68),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [1053] = 9,
    ACTIONS(450),
    1,
    anon_sym__2,
    ACTIONS(452),
    1,
    anon_sym___,
    ACTIONS(454),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(456),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(458),
    1,
    anon_sym_POUND2,
    ACTIONS(460),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(516),
    1,
    anon_sym_STAR3,
    ACTIONS(518),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(69),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [1085] = 9,
    ACTIONS(462),
    1,
    anon_sym_STAR2,
    ACTIONS(464),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(470),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(472),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(474),
    1,
    anon_sym_POUND2,
    ACTIONS(476),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(506),
    1,
    anon_sym___,
    ACTIONS(520),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(76),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [1117] = 9,
    ACTIONS(450),
    1,
    anon_sym__2,
    ACTIONS(452),
    1,
    anon_sym___,
    ACTIONS(454),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(456),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(458),
    1,
    anon_sym_POUND2,
    ACTIONS(460),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(500),
    1,
    anon_sym_STAR3,
    ACTIONS(482),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(61),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [1149] = 1,
    ACTIONS(188),
    12,
    anon_sym_LBRACE,
    anon_sym_RBRACK,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1164] = 1,
    ACTIONS(196),
    12,
    anon_sym_LBRACE,
    anon_sym_RBRACK,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1179] = 1,
    ACTIONS(314),
    12,
    anon_sym_LBRACE,
    anon_sym_RBRACK,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1194] = 1,
    ACTIONS(326),
    12,
    anon_sym_LBRACE,
    anon_sym_RBRACK,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1209] = 1,
    ACTIONS(168),
    12,
    anon_sym_LBRACE,
    anon_sym_RBRACK,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1224] = 1,
    ACTIONS(212),
    12,
    anon_sym_LBRACE,
    anon_sym_RBRACK,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1239] = 1,
    ACTIONS(200),
    12,
    anon_sym_LBRACE,
    anon_sym_RBRACK,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1254] = 1,
    ACTIONS(522),
    12,
    anon_sym_LBRACE,
    anon_sym_RBRACK,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1269] = 1,
    ACTIONS(322),
    12,
    anon_sym_LBRACE,
    anon_sym_RBRACK,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1284] = 1,
    ACTIONS(310),
    12,
    anon_sym_LBRACE,
    anon_sym_RBRACK,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1299] = 4,
    ACTIONS(524),
    1,
    anon_sym_LBRACK,
    ACTIONS(528),
    1,
    anon_sym_q,
    STATE(184),
    1,
    sym_pass_macro_attr,
    ACTIONS(526),
    8,
    anon_sym_c,
    anon_sym_a,
    anon_sym_r,
    anon_sym_m,
    anon_sym_p,
    anon_sym_n,
    anon_sym_v,
    anon_sym_quotes,
    [1319] = 1,
    ACTIONS(168),
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
    [1332] = 1,
    ACTIONS(322),
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
    [1345] = 1,
    ACTIONS(188),
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
    [1358] = 1,
    ACTIONS(196),
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
    [1371] = 3,
    ACTIONS(528),
    1,
    anon_sym_q,
    STATE(189),
    1,
    sym_pass_macro_attr,
    ACTIONS(526),
    8,
    anon_sym_c,
    anon_sym_a,
    anon_sym_r,
    anon_sym_m,
    anon_sym_p,
    anon_sym_n,
    anon_sym_v,
    anon_sym_quotes,
    [1388] = 1,
    ACTIONS(314),
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
    [1401] = 1,
    ACTIONS(326),
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
    [1414] = 1,
    ACTIONS(188),
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
    [1427] = 1,
    ACTIONS(196),
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
    [1440] = 1,
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
    [1453] = 1,
    ACTIONS(314),
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
    [1466] = 1,
    ACTIONS(326),
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
    [1479] = 1,
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
    [1492] = 5,
    ACTIONS(530),
    1,
    anon_sym_LBRACE,
    ACTIONS(532),
    1,
    anon_sym_RBRACK,
    ACTIONS(534),
    1,
    aux_sym_image_macro_token2,
    STATE(247),
    1,
    sym_link_label,
    STATE(123),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1509] = 4,
    ACTIONS(536),
    1,
    anon_sym_COMMA,
    ACTIONS(540),
    1,
    anon_sym_GT_GT,
    STATE(115),
    1,
    aux_sym_xref_repeat1,
    ACTIONS(538),
    3,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    [1524] = 5,
    ACTIONS(530),
    1,
    anon_sym_LBRACE,
    ACTIONS(534),
    1,
    aux_sym_image_macro_token2,
    ACTIONS(542),
    1,
    anon_sym_RBRACK,
    STATE(209),
    1,
    sym_link_label,
    STATE(123),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1541] = 5,
    ACTIONS(530),
    1,
    anon_sym_LBRACE,
    ACTIONS(534),
    1,
    aux_sym_image_macro_token2,
    ACTIONS(544),
    1,
    anon_sym_RBRACK,
    STATE(205),
    1,
    sym_link_label,
    STATE(123),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1558] = 3,
    STATE(115),
    1,
    aux_sym_xref_repeat1,
    ACTIONS(546),
    2,
    anon_sym_COMMA,
    anon_sym_GT_GT,
    ACTIONS(548),
    3,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    [1571] = 3,
    STATE(116),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(551),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    ACTIONS(554),
    2,
    anon_sym_BQUOTE3,
    anon_sym_BQUOTE_BQUOTE,
    [1583] = 5,
    ACTIONS(556),
    1,
    anon_sym_PLUS,
    ACTIONS(558),
    1,
    anon_sym_COMMA,
    ACTIONS(560),
    1,
    anon_sym_RBRACK,
    STATE(180),
    1,
    aux_sym_kbd_macro_repeat2,
    STATE(181),
    1,
    aux_sym_kbd_macro_repeat1,
    [1599] = 3,
    ACTIONS(562),
    1,
    anon_sym_RBRACK,
    STATE(124),
    1,
    aux_sym_image_macro_repeat1,
    ACTIONS(564),
    3,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [1611] = 1,
    ACTIONS(566),
    5,
    anon_sym_COMMA,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    anon_sym_GT_GT,
    [1619] = 3,
    ACTIONS(568),
    1,
    anon_sym_RBRACK,
    STATE(120),
    1,
    aux_sym_image_macro_repeat1,
    ACTIONS(570),
    3,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [1631] = 4,
    ACTIONS(573),
    1,
    anon_sym_LBRACE,
    ACTIONS(576),
    1,
    anon_sym_RBRACK,
    ACTIONS(578),
    1,
    aux_sym_image_macro_token2,
    STATE(121),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1645] = 3,
    STATE(122),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(581),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    ACTIONS(584),
    2,
    anon_sym_POUND3,
    anon_sym_POUND_POUND,
    [1657] = 4,
    ACTIONS(530),
    1,
    anon_sym_LBRACE,
    ACTIONS(586),
    1,
    anon_sym_RBRACK,
    ACTIONS(588),
    1,
    aux_sym_image_macro_token2,
    STATE(121),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1671] = 3,
    ACTIONS(590),
    1,
    anon_sym_RBRACK,
    STATE(120),
    1,
    aux_sym_image_macro_repeat1,
    ACTIONS(564),
    3,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [1683] = 1,
    ACTIONS(592),
    4,
    anon_sym_RBRACK,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [1690] = 3,
    ACTIONS(596),
    1,
    anon_sym_POUND_POUND,
    STATE(160),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(594),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1701] = 3,
    ACTIONS(598),
    1,
    anon_sym_RBRACK,
    STATE(155),
    1,
    aux_sym_xref_repeat4,
    ACTIONS(600),
    2,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [1712] = 3,
    ACTIONS(602),
    1,
    anon_sym_LBRACK,
    STATE(128),
    1,
    aux_sym_xref_repeat3,
    ACTIONS(604),
    2,
    anon_sym_BSLASH_LBRACK,
    aux_sym_xref_token3,
    [1723] = 3,
    ACTIONS(609),
    1,
    anon_sym_POUND_POUND,
    STATE(122),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(607),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1734] = 3,
    ACTIONS(611),
    1,
    anon_sym_DOT,
    STATE(138),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(139),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [1745] = 3,
    ACTIONS(609),
    1,
    anon_sym_POUND3,
    STATE(122),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(607),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1756] = 3,
    ACTIONS(615),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(116),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(613),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1767] = 3,
    ACTIONS(615),
    1,
    anon_sym_BQUOTE3,
    STATE(116),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(613),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1778] = 3,
    ACTIONS(617),
    1,
    anon_sym_LBRACK,
    STATE(128),
    1,
    aux_sym_xref_repeat3,
    ACTIONS(619),
    2,
    anon_sym_BSLASH_LBRACK,
    aux_sym_xref_token3,
    [1789] = 3,
    ACTIONS(623),
    1,
    anon_sym_POUND_POUND,
    STATE(129),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(621),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1800] = 3,
    ACTIONS(623),
    1,
    anon_sym_POUND3,
    STATE(131),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(625),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1811] = 3,
    ACTIONS(629),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(132),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(627),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1822] = 3,
    ACTIONS(611),
    1,
    anon_sym_DOT,
    STATE(139),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(162),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [1833] = 3,
    ACTIONS(631),
    1,
    anon_sym_DOT,
    STATE(139),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(155),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [1844] = 3,
    ACTIONS(636),
    1,
    anon_sym_POUND_POUND,
    STATE(164),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(634),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1855] = 3,
    ACTIONS(636),
    1,
    anon_sym_POUND3,
    STATE(166),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(638),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1866] = 3,
    ACTIONS(640),
    1,
    anon_sym_RBRACK,
    STATE(158),
    1,
    aux_sym_xref_repeat4,
    ACTIONS(600),
    2,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [1877] = 3,
    ACTIONS(644),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(168),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(642),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1888] = 3,
    ACTIONS(644),
    1,
    anon_sym_BQUOTE3,
    STATE(171),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(646),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1899] = 3,
    ACTIONS(650),
    1,
    anon_sym_BQUOTE3,
    STATE(167),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(648),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1910] = 3,
    ACTIONS(629),
    1,
    anon_sym_BQUOTE3,
    STATE(133),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(652),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1921] = 3,
    ACTIONS(654),
    1,
    anon_sym_POUND_POUND,
    STATE(122),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(607),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1932] = 3,
    ACTIONS(654),
    1,
    anon_sym_POUND3,
    STATE(122),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(607),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1943] = 3,
    ACTIONS(656),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(116),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(613),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1954] = 3,
    ACTIONS(656),
    1,
    anon_sym_BQUOTE3,
    STATE(116),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(613),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1965] = 3,
    ACTIONS(661),
    1,
    anon_sym_GT_GT,
    STATE(151),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(658),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [1976] = 3,
    ACTIONS(650),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(165),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(663),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1987] = 3,
    ACTIONS(665),
    1,
    anon_sym_RBRACK,
    STATE(153),
    1,
    aux_sym_xref_repeat4,
    ACTIONS(667),
    2,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [1998] = 3,
    ACTIONS(672),
    1,
    anon_sym_POUND_POUND,
    STATE(147),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(670),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [2009] = 3,
    ACTIONS(674),
    1,
    anon_sym_RBRACK,
    STATE(153),
    1,
    aux_sym_xref_repeat4,
    ACTIONS(600),
    2,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [2020] = 3,
    ACTIONS(672),
    1,
    anon_sym_POUND3,
    STATE(148),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(676),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [2031] = 3,
    ACTIONS(680),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(149),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(678),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [2042] = 3,
    ACTIONS(682),
    1,
    anon_sym_RBRACK,
    STATE(153),
    1,
    aux_sym_xref_repeat4,
    ACTIONS(600),
    2,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [2053] = 3,
    ACTIONS(680),
    1,
    anon_sym_BQUOTE3,
    STATE(150),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(684),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [2064] = 3,
    ACTIONS(686),
    1,
    anon_sym_POUND_POUND,
    STATE(122),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(607),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [2075] = 3,
    ACTIONS(686),
    1,
    anon_sym_POUND3,
    STATE(122),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(607),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [2086] = 3,
    ACTIONS(596),
    1,
    anon_sym_POUND3,
    STATE(161),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(688),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [2097] = 3,
    ACTIONS(690),
    1,
    anon_sym_LBRACK,
    STATE(134),
    1,
    aux_sym_xref_repeat3,
    ACTIONS(619),
    2,
    anon_sym_BSLASH_LBRACK,
    aux_sym_xref_token3,
    [2108] = 3,
    ACTIONS(692),
    1,
    anon_sym_POUND_POUND,
    STATE(122),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(607),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [2119] = 3,
    ACTIONS(694),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(116),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(613),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [2130] = 3,
    ACTIONS(692),
    1,
    anon_sym_POUND3,
    STATE(122),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(607),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [2141] = 3,
    ACTIONS(694),
    1,
    anon_sym_BQUOTE3,
    STATE(116),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(613),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [2152] = 3,
    ACTIONS(696),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(116),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(613),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [2163] = 3,
    ACTIONS(700),
    1,
    anon_sym_GT_GT,
    STATE(151),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(698),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [2174] = 2,
    STATE(112),
    1,
    aux_sym_xref_repeat1,
    ACTIONS(538),
    3,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    [2183] = 3,
    ACTIONS(696),
    1,
    anon_sym_BQUOTE3,
    STATE(116),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(613),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [2194] = 1,
    ACTIONS(200),
    3,
    anon_sym_LBRACE,
    anon_sym_RBRACK,
    aux_sym_image_macro_token2,
    [2200] = 3,
    ACTIONS(702),
    1,
    anon_sym_PLUS,
    ACTIONS(705),
    1,
    anon_sym_RBRACK,
    STATE(173),
    1,
    aux_sym_kbd_macro_repeat1,
    [2210] = 3,
    ACTIONS(707),
    1,
    anon_sym_COMMA,
    ACTIONS(710),
    1,
    anon_sym_RBRACK,
    STATE(174),
    1,
    aux_sym_kbd_macro_repeat2,
    [2220] = 1,
    ACTIONS(712),
    3,
    anon_sym_RBRACK,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    [2226] = 1,
    ACTIONS(714),
    3,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    anon_sym_GT_GT,
    [2232] = 3,
    ACTIONS(716),
    1,
    anon_sym_COMMA,
    ACTIONS(719),
    1,
    anon_sym_LBRACK,
    STATE(177),
    1,
    aux_sym_pass_macro_repeat1,
    [2242] = 2,
    STATE(117),
    1,
    sym_key,
    ACTIONS(721),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [2250] = 2,
    STATE(169),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(698),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [2258] = 3,
    ACTIONS(558),
    1,
    anon_sym_COMMA,
    ACTIONS(723),
    1,
    anon_sym_RBRACK,
    STATE(174),
    1,
    aux_sym_kbd_macro_repeat2,
    [2268] = 3,
    ACTIONS(556),
    1,
    anon_sym_PLUS,
    ACTIONS(723),
    1,
    anon_sym_RBRACK,
    STATE(173),
    1,
    aux_sym_kbd_macro_repeat1,
    [2278] = 2,
    STATE(196),
    1,
    sym_key,
    ACTIONS(721),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [2286] = 2,
    STATE(195),
    1,
    sym_key,
    ACTIONS(721),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [2294] = 3,
    ACTIONS(725),
    1,
    anon_sym_COMMA,
    ACTIONS(727),
    1,
    anon_sym_LBRACK,
    STATE(188),
    1,
    aux_sym_pass_macro_repeat1,
    [2304] = 1,
    ACTIONS(155),
    3,
    anon_sym_DQUOTE,
    anon_sym_DOT,
    anon_sym_LBRACK,
    [2310] = 1,
    ACTIONS(729),
    3,
    anon_sym_LBRACK,
    anon_sym_BSLASH_LBRACK,
    aux_sym_xref_token3,
    [2316] = 1,
    ACTIONS(731),
    3,
    anon_sym_PLUS,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [2322] = 3,
    ACTIONS(725),
    1,
    anon_sym_COMMA,
    ACTIONS(733),
    1,
    anon_sym_LBRACK,
    STATE(177),
    1,
    aux_sym_pass_macro_repeat1,
    [2332] = 1,
    ACTIONS(719),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACK,
    [2337] = 2,
    ACTIONS(735),
    1,
    anon_sym_DQUOTE,
    ACTIONS(737),
    1,
    anon_sym_LBRACK,
    [2344] = 2,
    ACTIONS(739),
    1,
    anon_sym_COMMA,
    ACTIONS(741),
    1,
    anon_sym_RBRACK,
    [2351] = 1,
    ACTIONS(743),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACK,
    [2356] = 2,
    ACTIONS(745),
    1,
    anon_sym_COMMA,
    ACTIONS(747),
    1,
    anon_sym_RBRACK,
    [2363] = 2,
    ACTIONS(749),
    1,
    aux_sym_anchor_token3,
    ACTIONS(751),
    1,
    aux_sym_footnote_macro_token1,
    [2370] = 1,
    ACTIONS(705),
    2,
    anon_sym_PLUS,
    anon_sym_RBRACK,
    [2375] = 1,
    ACTIONS(710),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [2380] = 2,
    ACTIONS(753),
    1,
    aux_sym_anchor_token3,
    ACTIONS(755),
    1,
    aux_sym_footnote_macro_token1,
    [2387] = 2,
    ACTIONS(757),
    1,
    anon_sym_COMMA,
    ACTIONS(759),
    1,
    anon_sym_RBRACK_RBRACK,
    [2394] = 2,
    ACTIONS(761),
    1,
    anon_sym_LBRACK,
    ACTIONS(763),
    1,
    aux_sym_anchor_token1,
    [2401] = 1,
    ACTIONS(765),
    1,
    anon_sym_COLON,
    [2405] = 1,
    ACTIONS(767),
    1,
    sym__link_component,
    [2409] = 1,
    ACTIONS(769),
    1,
    anon_sym_RBRACK,
    [2413] = 1,
    ACTIONS(771),
    1,
    aux_sym_image_macro_token1,
    [2417] = 1,
    ACTIONS(773),
    1,
    anon_sym_RBRACK_RBRACK,
    [2421] = 1,
    ACTIONS(775),
    1,
    anon_sym_RBRACK,
    [2425] = 1,
    ACTIONS(777),
    1,
    aux_sym_anchor_token1,
    [2429] = 1,
    ACTIONS(779),
    1,
    anon_sym_PLUS,
    [2433] = 1,
    ACTIONS(781),
    1,
    anon_sym_DQUOTE,
    [2437] = 1,
    ACTIONS(783),
    1,
    anon_sym_RBRACK,
    [2441] = 1,
    ACTIONS(785),
    1,
    anon_sym_RBRACE,
    [2445] = 1,
    ACTIONS(787),
    1,
    ts_builtin_sym_end,
    [2449] = 1,
    ACTIONS(789),
    1,
    anon_sym_COLON,
    [2453] = 1,
    ACTIONS(791),
    1,
    sym__link_component,
    [2457] = 1,
    ACTIONS(793),
    1,
    aux_sym_link_macro_token1,
    [2461] = 1,
    ACTIONS(795),
    1,
    anon_sym_RBRACK,
    [2465] = 1,
    ACTIONS(797),
    1,
    anon_sym_LBRACK,
    [2469] = 1,
    ACTIONS(799),
    1,
    aux_sym_anchor_token1,
    [2473] = 1,
    ACTIONS(779),
    1,
    anon_sym_PLUS_PLUS_PLUS,
    [2477] = 1,
    ACTIONS(779),
    1,
    anon_sym_DOLLAR_DOLLAR,
    [2481] = 1,
    ACTIONS(801),
    1,
    aux_sym_anchor_token3,
    [2485] = 1,
    ACTIONS(803),
    1,
    anon_sym_RBRACE,
    [2489] = 1,
    ACTIONS(805),
    1,
    sym__link_component,
    [2493] = 1,
    ACTIONS(807),
    1,
    aux_sym_anchor_token1,
    [2497] = 1,
    ACTIONS(809),
    1,
    aux_sym_anchor_token1,
    [2501] = 1,
    ACTIONS(811),
    1,
    anon_sym_LBRACK,
    [2505] = 1,
    ACTIONS(813),
    1,
    aux_sym_footnote_macro_token2,
    [2509] = 1,
    ACTIONS(815),
    1,
    anon_sym_RBRACK,
    [2513] = 1,
    ACTIONS(817),
    1,
    aux_sym_replacement_token1,
    [2517] = 1,
    ACTIONS(819),
    1,
    sym__link_component,
    [2521] = 1,
    ACTIONS(821),
    1,
    anon_sym_COLON,
    [2525] = 1,
    ACTIONS(823),
    1,
    anon_sym_COLON,
    [2529] = 1,
    ACTIONS(825),
    1,
    anon_sym_COLON,
    [2533] = 1,
    ACTIONS(827),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [2537] = 1,
    ACTIONS(829),
    1,
    aux_sym_anchor_token2,
    [2541] = 1,
    ACTIONS(831),
    1,
    anon_sym_LBRACK,
    [2545] = 1,
    ACTIONS(833),
    1,
    aux_sym_anchor_token1,
    [2549] = 1,
    ACTIONS(835),
    1,
    anon_sym_LBRACK,
    [2553] = 1,
    ACTIONS(837),
    1,
    anon_sym_RBRACE,
    [2557] = 1,
    ACTIONS(839),
    1,
    anon_sym_COLON,
    [2561] = 1,
    ACTIONS(841),
    1,
    anon_sym_COLON,
    [2565] = 1,
    ACTIONS(843),
    1,
    anon_sym_COLON,
    [2569] = 1,
    ACTIONS(845),
    1,
    anon_sym_COLON,
    [2573] = 1,
    ACTIONS(847),
    1,
    anon_sym_LBRACK,
    [2577] = 1,
    ACTIONS(849),
    1,
    anon_sym_LBRACK,
    [2581] = 1,
    ACTIONS(851),
    1,
    anon_sym_RBRACK,
    [2585] = 1,
    ACTIONS(853),
    1,
    aux_sym_anchor_token3,
    [2589] = 1,
    ACTIONS(855),
    1,
    anon_sym_RBRACK,
    [2593] = 1,
    ACTIONS(857),
    1,
    anon_sym_LBRACK,
    [2597] = 1,
    ACTIONS(859),
    1,
    aux_sym_anchor_token3,
    [2601] = 1,
    ACTIONS(747),
    1,
    anon_sym_RBRACK,
    [2605] = 1,
    ACTIONS(861),
    1,
    aux_sym_footnote_macro_token2,
    [2609] = 1,
    ACTIONS(863),
    1,
    anon_sym_RBRACK,
    [2613] = 1,
    ACTIONS(865),
    1,
    anon_sym_DQUOTE,
    [2617] = 1,
    ACTIONS(741),
    1,
    anon_sym_RBRACK,
    [2621] = 1,
    ACTIONS(867),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [2625] = 1,
    ACTIONS(869),
    1,
    aux_sym_replacement_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(54)] = 0,
    [SMALL_STATE(55)] = 45,
    [SMALL_STATE(56)] = 90,
    [SMALL_STATE(57)] = 135,
    [SMALL_STATE(58)] = 180,
    [SMALL_STATE(59)] = 225,
    [SMALL_STATE(60)] = 270,
    [SMALL_STATE(61)] = 315,
    [SMALL_STATE(62)] = 348,
    [SMALL_STATE(63)] = 381,
    [SMALL_STATE(64)] = 413,
    [SMALL_STATE(65)] = 445,
    [SMALL_STATE(66)] = 477,
    [SMALL_STATE(67)] = 509,
    [SMALL_STATE(68)] = 541,
    [SMALL_STATE(69)] = 573,
    [SMALL_STATE(70)] = 605,
    [SMALL_STATE(71)] = 637,
    [SMALL_STATE(72)] = 669,
    [SMALL_STATE(73)] = 701,
    [SMALL_STATE(74)] = 733,
    [SMALL_STATE(75)] = 765,
    [SMALL_STATE(76)] = 797,
    [SMALL_STATE(77)] = 829,
    [SMALL_STATE(78)] = 861,
    [SMALL_STATE(79)] = 893,
    [SMALL_STATE(80)] = 925,
    [SMALL_STATE(81)] = 957,
    [SMALL_STATE(82)] = 989,
    [SMALL_STATE(83)] = 1021,
    [SMALL_STATE(84)] = 1053,
    [SMALL_STATE(85)] = 1085,
    [SMALL_STATE(86)] = 1117,
    [SMALL_STATE(87)] = 1149,
    [SMALL_STATE(88)] = 1164,
    [SMALL_STATE(89)] = 1179,
    [SMALL_STATE(90)] = 1194,
    [SMALL_STATE(91)] = 1209,
    [SMALL_STATE(92)] = 1224,
    [SMALL_STATE(93)] = 1239,
    [SMALL_STATE(94)] = 1254,
    [SMALL_STATE(95)] = 1269,
    [SMALL_STATE(96)] = 1284,
    [SMALL_STATE(97)] = 1299,
    [SMALL_STATE(98)] = 1319,
    [SMALL_STATE(99)] = 1332,
    [SMALL_STATE(100)] = 1345,
    [SMALL_STATE(101)] = 1358,
    [SMALL_STATE(102)] = 1371,
    [SMALL_STATE(103)] = 1388,
    [SMALL_STATE(104)] = 1401,
    [SMALL_STATE(105)] = 1414,
    [SMALL_STATE(106)] = 1427,
    [SMALL_STATE(107)] = 1440,
    [SMALL_STATE(108)] = 1453,
    [SMALL_STATE(109)] = 1466,
    [SMALL_STATE(110)] = 1479,
    [SMALL_STATE(111)] = 1492,
    [SMALL_STATE(112)] = 1509,
    [SMALL_STATE(113)] = 1524,
    [SMALL_STATE(114)] = 1541,
    [SMALL_STATE(115)] = 1558,
    [SMALL_STATE(116)] = 1571,
    [SMALL_STATE(117)] = 1583,
    [SMALL_STATE(118)] = 1599,
    [SMALL_STATE(119)] = 1611,
    [SMALL_STATE(120)] = 1619,
    [SMALL_STATE(121)] = 1631,
    [SMALL_STATE(122)] = 1645,
    [SMALL_STATE(123)] = 1657,
    [SMALL_STATE(124)] = 1671,
    [SMALL_STATE(125)] = 1683,
    [SMALL_STATE(126)] = 1690,
    [SMALL_STATE(127)] = 1701,
    [SMALL_STATE(128)] = 1712,
    [SMALL_STATE(129)] = 1723,
    [SMALL_STATE(130)] = 1734,
    [SMALL_STATE(131)] = 1745,
    [SMALL_STATE(132)] = 1756,
    [SMALL_STATE(133)] = 1767,
    [SMALL_STATE(134)] = 1778,
    [SMALL_STATE(135)] = 1789,
    [SMALL_STATE(136)] = 1800,
    [SMALL_STATE(137)] = 1811,
    [SMALL_STATE(138)] = 1822,
    [SMALL_STATE(139)] = 1833,
    [SMALL_STATE(140)] = 1844,
    [SMALL_STATE(141)] = 1855,
    [SMALL_STATE(142)] = 1866,
    [SMALL_STATE(143)] = 1877,
    [SMALL_STATE(144)] = 1888,
    [SMALL_STATE(145)] = 1899,
    [SMALL_STATE(146)] = 1910,
    [SMALL_STATE(147)] = 1921,
    [SMALL_STATE(148)] = 1932,
    [SMALL_STATE(149)] = 1943,
    [SMALL_STATE(150)] = 1954,
    [SMALL_STATE(151)] = 1965,
    [SMALL_STATE(152)] = 1976,
    [SMALL_STATE(153)] = 1987,
    [SMALL_STATE(154)] = 1998,
    [SMALL_STATE(155)] = 2009,
    [SMALL_STATE(156)] = 2020,
    [SMALL_STATE(157)] = 2031,
    [SMALL_STATE(158)] = 2042,
    [SMALL_STATE(159)] = 2053,
    [SMALL_STATE(160)] = 2064,
    [SMALL_STATE(161)] = 2075,
    [SMALL_STATE(162)] = 2086,
    [SMALL_STATE(163)] = 2097,
    [SMALL_STATE(164)] = 2108,
    [SMALL_STATE(165)] = 2119,
    [SMALL_STATE(166)] = 2130,
    [SMALL_STATE(167)] = 2141,
    [SMALL_STATE(168)] = 2152,
    [SMALL_STATE(169)] = 2163,
    [SMALL_STATE(170)] = 2174,
    [SMALL_STATE(171)] = 2183,
    [SMALL_STATE(172)] = 2194,
    [SMALL_STATE(173)] = 2200,
    [SMALL_STATE(174)] = 2210,
    [SMALL_STATE(175)] = 2220,
    [SMALL_STATE(176)] = 2226,
    [SMALL_STATE(177)] = 2232,
    [SMALL_STATE(178)] = 2242,
    [SMALL_STATE(179)] = 2250,
    [SMALL_STATE(180)] = 2258,
    [SMALL_STATE(181)] = 2268,
    [SMALL_STATE(182)] = 2278,
    [SMALL_STATE(183)] = 2286,
    [SMALL_STATE(184)] = 2294,
    [SMALL_STATE(185)] = 2304,
    [SMALL_STATE(186)] = 2310,
    [SMALL_STATE(187)] = 2316,
    [SMALL_STATE(188)] = 2322,
    [SMALL_STATE(189)] = 2332,
    [SMALL_STATE(190)] = 2337,
    [SMALL_STATE(191)] = 2344,
    [SMALL_STATE(192)] = 2351,
    [SMALL_STATE(193)] = 2356,
    [SMALL_STATE(194)] = 2363,
    [SMALL_STATE(195)] = 2370,
    [SMALL_STATE(196)] = 2375,
    [SMALL_STATE(197)] = 2380,
    [SMALL_STATE(198)] = 2387,
    [SMALL_STATE(199)] = 2394,
    [SMALL_STATE(200)] = 2401,
    [SMALL_STATE(201)] = 2405,
    [SMALL_STATE(202)] = 2409,
    [SMALL_STATE(203)] = 2413,
    [SMALL_STATE(204)] = 2417,
    [SMALL_STATE(205)] = 2421,
    [SMALL_STATE(206)] = 2425,
    [SMALL_STATE(207)] = 2429,
    [SMALL_STATE(208)] = 2433,
    [SMALL_STATE(209)] = 2437,
    [SMALL_STATE(210)] = 2441,
    [SMALL_STATE(211)] = 2445,
    [SMALL_STATE(212)] = 2449,
    [SMALL_STATE(213)] = 2453,
    [SMALL_STATE(214)] = 2457,
    [SMALL_STATE(215)] = 2461,
    [SMALL_STATE(216)] = 2465,
    [SMALL_STATE(217)] = 2469,
    [SMALL_STATE(218)] = 2473,
    [SMALL_STATE(219)] = 2477,
    [SMALL_STATE(220)] = 2481,
    [SMALL_STATE(221)] = 2485,
    [SMALL_STATE(222)] = 2489,
    [SMALL_STATE(223)] = 2493,
    [SMALL_STATE(224)] = 2497,
    [SMALL_STATE(225)] = 2501,
    [SMALL_STATE(226)] = 2505,
    [SMALL_STATE(227)] = 2509,
    [SMALL_STATE(228)] = 2513,
    [SMALL_STATE(229)] = 2517,
    [SMALL_STATE(230)] = 2521,
    [SMALL_STATE(231)] = 2525,
    [SMALL_STATE(232)] = 2529,
    [SMALL_STATE(233)] = 2533,
    [SMALL_STATE(234)] = 2537,
    [SMALL_STATE(235)] = 2541,
    [SMALL_STATE(236)] = 2545,
    [SMALL_STATE(237)] = 2549,
    [SMALL_STATE(238)] = 2553,
    [SMALL_STATE(239)] = 2557,
    [SMALL_STATE(240)] = 2561,
    [SMALL_STATE(241)] = 2565,
    [SMALL_STATE(242)] = 2569,
    [SMALL_STATE(243)] = 2573,
    [SMALL_STATE(244)] = 2577,
    [SMALL_STATE(245)] = 2581,
    [SMALL_STATE(246)] = 2585,
    [SMALL_STATE(247)] = 2589,
    [SMALL_STATE(248)] = 2593,
    [SMALL_STATE(249)] = 2597,
    [SMALL_STATE(250)] = 2601,
    [SMALL_STATE(251)] = 2605,
    [SMALL_STATE(252)] = 2609,
    [SMALL_STATE(253)] = 2613,
    [SMALL_STATE(254)] = 2617,
    [SMALL_STATE(255)] = 2621,
    [SMALL_STATE(256)] = 2625,
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
    SHIFT(236),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(242),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(241),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(240),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(239),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(233),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(232),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(231),
    [27] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(230),
    [29] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(224),
    [31] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(223),
    [33] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(170),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(200),
    [37] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(84),
    [39] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(83),
    [41] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(82),
    [43] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(81),
    [45] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(144),
    [47] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(143),
    [49] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(141),
    [51] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(140),
    [53] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(212),
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
    SHIFT_REPEAT(236),
    [72] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(242),
    [75] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(241),
    [78] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(240),
    [81] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(239),
    [84] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(233),
    [87] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(232),
    [90] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(231),
    [93] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(230),
    [96] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(224),
    [99] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(223),
    [102] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(170),
    [105] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(200),
    [108] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(84),
    [111] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(83),
    [114] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(82),
    [117] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(81),
    [120] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(144),
    [123] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(143),
    [126] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(141),
    [129] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(140),
    [132] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(212),
    [135] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [137] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(2),
    [139] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 3, 0, 0),
    [141] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 3, 0, 0),
    [143] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(229),
    [145] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__punctuation, 1, 0, 0),
    [147] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__punctuation, 1, 0, 0),
    [149] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(210),
    [151] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(255),
    [153] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(207),
    [155] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [157] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [159] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(229),
    [162] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 4, 0, 0),
    [164] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 4, 0, 0),
    [166] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [168] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [170] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_pass_macro, 7, 0, 11),
    [172] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_pass_macro, 7, 0, 11),
    [174] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [176] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [178] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [180] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [182] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [184] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [186] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 3, 0, 0),
    [188] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 3, 0, 0),
    [190] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 5, 0, 0),
    [192] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 5, 0, 0),
    [194] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 3, 0, 0),
    [196] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 3, 0, 0),
    [198] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 0),
    [200] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 0),
    [202] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_pass_macro, 5, 0, 0),
    [204] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_pass_macro, 5, 0, 0),
    [206] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 4, 0, 0),
    [208] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 4, 0, 0),
    [210] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [212] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [214] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 5, 0, 1),
    [216] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 5, 0, 1),
    [218] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 5, 0, 0),
    [220] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 5, 0, 0),
    [222] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_image_macro, 5, 0, 0),
    [224] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_image_macro, 5, 0, 0),
    [226] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_kbd_macro, 5, 0, 0),
    [228] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_kbd_macro, 5, 0, 0),
    [230] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 3, 0, 1),
    [232] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 3, 0, 1),
    [234] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_pass_macro, 4, 0, 0),
    [236] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_pass_macro, 4, 0, 0),
    [238] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_macro, 5, 0, 0),
    [240] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_macro, 5, 0, 0),
    [242] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [244] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [246] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(113),
    [248] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_math_macro, 5, 0, 3),
    [250] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_math_macro, 5, 0, 3),
    [252] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 5, 0, 4),
    [254] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 5, 0, 4),
    [256] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 5, 0, 5),
    [258] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 5, 0, 5),
    [260] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 5, 0, 6),
    [262] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 5, 0, 6),
    [264] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_pass_macro, 5, 0, 7),
    [266] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_pass_macro, 5, 0, 7),
    [268] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [270] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [272] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 8, 0, 6),
    [274] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 8, 0, 6),
    [276] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 7, 0, 0),
    [278] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 7, 0, 0),
    [280] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 6, 0, 6),
    [282] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 6, 0, 6),
    [284] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_pass_macro, 6, 0, 0),
    [286] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_pass_macro, 6, 0, 0),
    [288] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_pass_macro, 6, 0, 10),
    [290] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_pass_macro, 6, 0, 10),
    [292] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 6, 0, 9),
    [294] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 6, 0, 9),
    [296] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_menu_macro, 6, 0, 8),
    [298] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_menu_macro, 6, 0, 8),
    [300] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_macro, 6, 0, 0),
    [302] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_macro, 6, 0, 0),
    [304] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_kbd_macro, 6, 0, 0),
    [306] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_kbd_macro, 6, 0, 0),
    [308] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [310] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [312] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 2, 0, 0),
    [314] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 2, 0, 0),
    [316] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 3, 0, 1),
    [318] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 3, 0, 1),
    [320] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [322] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [324] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 2, 0, 0),
    [326] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 2, 0, 0),
    [328] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_image_macro, 6, 0, 0),
    [330] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_image_macro, 6, 0, 0),
    [332] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 6, 0, 6),
    [334] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 6, 0, 6),
    [336] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    SHIFT_REPEAT(256),
    [339] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    [341] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    SHIFT_REPEAT(94),
    [344] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    SHIFT_REPEAT(75),
    [347] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    SHIFT_REPEAT(74),
    [350] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    SHIFT_REPEAT(73),
    [353] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    SHIFT_REPEAT(72),
    [356] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    SHIFT_REPEAT(146),
    [359] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    SHIFT_REPEAT(137),
    [362] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    SHIFT_REPEAT(136),
    [365] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    SHIFT_REPEAT(135),
    [368] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(256),
    [370] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(11),
    [372] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(94),
    [374] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(75),
    [376] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(74),
    [378] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(73),
    [380] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(72),
    [382] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(146),
    [384] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(137),
    [386] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(136),
    [388] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(135),
    [390] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(35),
    [392] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(41),
    [394] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(27),
    [396] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(42),
    [398] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(19),
    [400] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(61),
    [403] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    [405] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(80),
    [408] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(85),
    [411] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(145),
    [414] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(152),
    [417] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(162),
    [420] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(126),
    [423] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(63),
    [426] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(79),
    [429] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(62),
    [432] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    [434] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(159),
    [437] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(157),
    [440] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(156),
    [443] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(154),
    [446] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(86),
    [448] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(110),
    [450] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(80),
    [452] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(85),
    [454] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(145),
    [456] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(152),
    [458] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(162),
    [460] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(126),
    [462] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(63),
    [464] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(79),
    [466] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [468] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(98),
    [470] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(159),
    [472] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(157),
    [474] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(156),
    [476] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(154),
    [478] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(91),
    [480] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(10),
    [482] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(61),
    [484] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(21),
    [486] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(92),
    [488] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(67),
    [490] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(95),
    [492] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(65),
    [494] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(70),
    [496] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(96),
    [498] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(71),
    [500] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(107),
    [502] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(78),
    [504] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(64),
    [506] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(99),
    [508] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(77),
    [510] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(50),
    [512] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(66),
    [514] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(68),
    [516] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(47),
    [518] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(69),
    [520] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(76),
    [522] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 1, 0, 0),
    [524] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [526] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(192),
    [528] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(192),
    [530] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(228),
    [532] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(29),
    [534] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(123),
    [536] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(179),
    [538] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(119),
    [540] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(26),
    [542] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(38),
    [544] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(208),
    [546] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 2, 0, 0),
    [548] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 2, 0, 0),
    SHIFT_REPEAT(119),
    [551] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    SHIFT_REPEAT(116),
    [554] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    [556] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(183),
    [558] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [560] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [562] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(24),
    [564] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(125),
    [566] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 1, 0, 0),
    [568] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_image_macro_repeat1, 2, 0, 0),
    [570] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_image_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(125),
    [573] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    SHIFT_REPEAT(228),
    [576] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    [578] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    SHIFT_REPEAT(121),
    [581] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    SHIFT_REPEAT(122),
    [584] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    [586] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_label, 1, 0, 0),
    [588] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(121),
    [590] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(52),
    [592] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_image_macro_repeat1, 1, 0, 2),
    [594] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(160),
    [596] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(108),
    [598] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(34),
    [600] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(175),
    [602] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat3, 2, 0, 0),
    [604] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_xref_repeat3, 2, 0, 0),
    SHIFT_REPEAT(186),
    [607] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(122),
    [609] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(87),
    [611] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(201),
    [613] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(116),
    [615] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(88),
    [617] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(127),
    [619] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(186),
    [621] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(129),
    [623] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(89),
    [625] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(131),
    [627] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(132),
    [629] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(90),
    [631] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(201),
    [634] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(164),
    [636] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(48),
    [638] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(166),
    [640] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(20),
    [642] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(168),
    [644] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(51),
    [646] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(171),
    [648] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(167),
    [650] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(109),
    [652] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(133),
    [654] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(100),
    [656] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(101),
    [658] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 2, 0, 0),
    SHIFT_REPEAT(176),
    [661] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 2, 0, 0),
    [663] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(165),
    [665] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat4, 2, 0, 0),
    [667] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_xref_repeat4, 2, 0, 0),
    SHIFT_REPEAT(175),
    [670] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(147),
    [672] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(103),
    [674] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(43),
    [676] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(148),
    [678] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(149),
    [680] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(104),
    [682] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(33),
    [684] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(150),
    [686] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(105),
    [688] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(161),
    [690] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(142),
    [692] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(15),
    [694] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(106),
    [696] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(17),
    [698] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(176),
    [700] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(32),
    [702] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(183),
    [705] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat1, 2, 0, 0),
    [707] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(182),
    [710] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat2, 2, 0, 0),
    [712] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat4, 1, 0, 0),
    [714] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 1, 0, 0),
    [716] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_pass_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(102),
    [719] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_pass_macro_repeat1, 2, 0, 0),
    [721] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(187),
    [723] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [725] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(102),
    [727] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [729] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat3, 1, 0, 0),
    [731] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_key, 1, 0, 0),
    [733] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [735] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [737] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(114),
    [739] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(251),
    [741] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [743] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_pass_macro_attr, 1, 0, 0),
    [745] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(226),
    [747] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [749] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(254),
    [751] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(191),
    [753] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(250),
    [755] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(193),
    [757] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(234),
    [759] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [761] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(194),
    [763] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(237),
    [765] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(163),
    [767] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(185),
    [769] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [771] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(243),
    [773] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [775] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(253),
    [777] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(235),
    [779] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [781] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [783] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [785] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [787] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [789] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(97),
    [791] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [793] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(244),
    [795] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [797] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(246),
    [799] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(248),
    [801] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(245),
    [803] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(172),
    [805] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(130),
    [807] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(219),
    [809] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(218),
    [811] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(178),
    [813] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(215),
    [815] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [817] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(221),
    [819] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [821] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(217),
    [823] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(216),
    [825] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(214),
    [827] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(213),
    [829] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(204),
    [831] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(249),
    [833] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(198),
    [835] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(197),
    [837] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [839] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(225),
    [841] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(203),
    [843] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(199),
    [845] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(206),
    [847] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(118),
    [849] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(111),
    [851] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [853] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(202),
    [855] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [857] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(220),
    [859] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(252),
    [861] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(227),
    [863] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [865] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [867] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(222),
    [869] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(238),
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
