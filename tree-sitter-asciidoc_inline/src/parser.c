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
#define STATE_COUNT 242
#define LARGE_STATE_COUNT 50
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 3
#define TOKEN_COUNT 107
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 9

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
    anon_sym_GT_GT = 74,
    anon_sym_xref = 75,
    aux_sym_xref_token2 = 76,
    anon_sym_STAR2 = 77,
    aux_sym_emphasis_token1 = 78,
    anon_sym_BSLASH_STAR = 79,
    anon_sym_STAR3 = 80,
    anon_sym_STAR_STAR = 81,
    anon_sym__2 = 82,
    aux_sym_ltalic_token1 = 83,
    anon_sym_BSLASH_ = 84,
    anon_sym__3 = 85,
    anon_sym___ = 86,
    anon_sym_BQUOTE2 = 87,
    aux_sym_monospace_token1 = 88,
    anon_sym_BSLASH_BQUOTE = 89,
    anon_sym_BQUOTE3 = 90,
    anon_sym_BQUOTE_BQUOTE = 91,
    anon_sym_POUND2 = 92,
    aux_sym_highlight_token1 = 93,
    anon_sym_BSLASH_POUND = 94,
    anon_sym_POUND3 = 95,
    anon_sym_POUND_POUND = 96,
    anon_sym_pass = 97,
    anon_sym_c = 98,
    anon_sym_a = 99,
    anon_sym_r = 100,
    anon_sym_m = 101,
    anon_sym_p = 102,
    anon_sym_n = 103,
    anon_sym_v = 104,
    anon_sym_quotes = 105,
    anon_sym_q = 106,
    sym_inline = 107,
    sym_replacement = 108,
    sym__word = 109,
    sym__punctuation = 110,
    sym_anchor = 111,
    sym_footnote_macro = 112,
    sym_image_macro = 113,
    sym_kbd_macro = 114,
    sym_key = 115,
    sym_auto_link = 116,
    sym_link_label = 117,
    sym_link_url = 118,
    sym_link_macro = 119,
    sym_math_macro = 120,
    sym_menu_macro = 121,
    sym_passthrough = 122,
    sym_xref = 123,
    sym_emphasis = 124,
    sym_ltalic = 125,
    sym_monospace = 126,
    sym_highlight = 127,
    sym_pass_macro = 128,
    sym_pass_macro_attr = 129,
    aux_sym__macro_rule = 130,
    aux_sym_inline_repeat1 = 131,
    aux_sym_image_macro_repeat1 = 132,
    aux_sym_kbd_macro_repeat1 = 133,
    aux_sym_kbd_macro_repeat2 = 134,
    aux_sym_link_label_repeat1 = 135,
    aux_sym_link_url_repeat1 = 136,
    aux_sym_emphasis_repeat1 = 137,
    aux_sym_ltalic_repeat1 = 138,
    aux_sym_monospace_repeat1 = 139,
    aux_sym_highlight_repeat1 = 140,
    aux_sym_pass_macro_repeat1 = 141,
    alias_sym_keys = 142,
    alias_sym_math = 143,
    alias_sym_pass_value = 144,
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
        [3] = alias_sym_pass_value,
    },
    [5] = {
        [2] = aux_sym_footnote_macro_token1,
    },
    [6] = {
        [2] = aux_sym_footnote_macro_token1,
        [4] = alias_sym_keys,
    },
    [7] = {
        [4] = alias_sym_pass_value,
    },
    [8] = {
        [5] = alias_sym_pass_value,
    },
};

static const uint16_t ts_non_terminal_alias_map[] = {
    aux_sym__macro_rule,
    2,
    aux_sym__macro_rule,
    alias_sym_pass_value,
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
    [62] = 59,
    [63] = 63,
    [64] = 64,
    [65] = 65,
    [66] = 60,
    [67] = 67,
    [68] = 68,
    [69] = 59,
    [70] = 60,
    [71] = 68,
    [72] = 64,
    [73] = 67,
    [74] = 65,
    [75] = 61,
    [76] = 63,
    [77] = 61,
    [78] = 64,
    [79] = 65,
    [80] = 68,
    [81] = 67,
    [82] = 63,
    [83] = 46,
    [84] = 19,
    [85] = 20,
    [86] = 41,
    [87] = 48,
    [88] = 88,
    [89] = 21,
    [90] = 22,
    [91] = 38,
    [92] = 49,
    [93] = 93,
    [94] = 41,
    [95] = 48,
    [96] = 20,
    [97] = 48,
    [98] = 98,
    [99] = 19,
    [100] = 20,
    [101] = 19,
    [102] = 21,
    [103] = 49,
    [104] = 22,
    [105] = 41,
    [106] = 46,
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
    [118] = 7,
    [119] = 119,
    [120] = 120,
    [121] = 121,
    [122] = 8,
    [123] = 123,
    [124] = 124,
    [125] = 9,
    [126] = 126,
    [127] = 127,
    [128] = 128,
    [129] = 124,
    [130] = 123,
    [131] = 131,
    [132] = 121,
    [133] = 120,
    [134] = 119,
    [135] = 126,
    [136] = 128,
    [137] = 120,
    [138] = 131,
    [139] = 121,
    [140] = 123,
    [141] = 124,
    [142] = 126,
    [143] = 119,
    [144] = 128,
    [145] = 131,
    [146] = 119,
    [147] = 131,
    [148] = 120,
    [149] = 121,
    [150] = 123,
    [151] = 128,
    [152] = 124,
    [153] = 126,
    [154] = 154,
    [155] = 155,
    [156] = 156,
    [157] = 157,
    [158] = 158,
    [159] = 159,
    [160] = 38,
    [161] = 37,
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
    [184] = 184,
    [185] = 185,
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
    [204] = 193,
    [205] = 185,
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
    [221] = 221,
    [222] = 222,
    [223] = 193,
    [224] = 224,
    [225] = 225,
    [226] = 226,
    [227] = 227,
    [228] = 228,
    [229] = 229,
    [230] = 230,
    [231] = 231,
    [232] = 232,
    [233] = 214,
    [234] = 234,
    [235] = 235,
    [236] = 236,
    [237] = 237,
    [238] = 238,
    [239] = 239,
    [240] = 218,
    [241] = 213,
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
                'a', 651,
                'b', 461,
                'c', 649,
                'f', 433,
                'h', 466,
                'i', 416,
                'k', 413,
                'l', 410,
                'm', 655,
                'n', 659,
                'p', 657,
                'q', 664,
                'r', 653,
                's', 462,
                'v', 661,
                'x', 457,
                '{', 86,
                '|', 402,
                '}', 202,
                '~', 404,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(0);
            if(('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(337);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
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
                'a', 651,
                'b', 461,
                'c', 649,
                'f', 433,
                'h', 466,
                'i', 416,
                'k', 413,
                'l', 410,
                'm', 655,
                'n', 659,
                'p', 657,
                'q', 664,
                'r', 653,
                's', 462,
                'v', 661,
                'x', 457,
                '{', 86,
                '|', 402,
                '}', 202,
                '~', 404,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(1);
            if(('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(337);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            END_STATE();
        case 2:
            ADVANCE_MAP(
                ' ', 2,
                '!', 339,
                '"', 342,
                '#', 635,
                '$', 346,
                '%', 348,
                '&', 350,
                '\'', 352,
                '(', 354,
                ')', 356,
                '*', 596,
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
                '_', 609,
                '`', 626,
                'a', 651,
                'b', 461,
                'c', 649,
                'f', 433,
                'h', 466,
                'i', 416,
                'k', 413,
                'l', 410,
                'm', 655,
                'n', 659,
                'p', 657,
                'q', 664,
                'r', 653,
                's', 462,
                'v', 661,
                'x', 457,
                '{', 86,
                '|', 402,
                '}', 202,
                '~', 404,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(1);
            if(('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(337);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
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
                '#', 635,
                '$', 346,
                '%', 348,
                '&', 350,
                '\'', 352,
                '(', 354,
                ')', 356,
                '*', 596,
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
                '_', 609,
                '`', 626,
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
                '#', 635,
                '$', 346,
                '%', 348,
                '&', 350,
                '\'', 352,
                '(', 354,
                ')', 356,
                '*', 596,
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
                '_', 609,
                '`', 626,
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
            ADVANCE_MAP(
                ' ', 511,
                '#', 513,
                '*', 514,
                '\\', 517,
                ']', 390,
                '_', 518,
                '`', 519,
                '{', 85,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                ADVANCE(512);
            if(lookahead != 0)
                ADVANCE(510);
            END_STATE();
        case 8:
            if(lookahead == ' ')
                ADVANCE(611);
            if(lookahead == '#')
                ADVANCE(613);
            if(lookahead == '*')
                ADVANCE(614);
            if(lookahead == '\\')
                ADVANCE(615);
            if(lookahead == '_')
                ADVANCE(9);
            if(lookahead == '`')
                ADVANCE(616);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(8);
            if(('\t' <= lookahead && lookahead <= '\f'))
                ADVANCE(612);
            if(lookahead != 0)
                ADVANCE(610);
            END_STATE();
        case 9:
            if(lookahead == ' ')
                ADVANCE(618);
            if(lookahead == '_')
                ADVANCE(619);
            END_STATE();
        case 10:
            if(lookahead == ' ')
                ADVANCE(598);
            if(lookahead == '#')
                ADVANCE(600);
            if(lookahead == '*')
                ADVANCE(11);
            if(lookahead == '\\')
                ADVANCE(601);
            if(lookahead == '_')
                ADVANCE(602);
            if(lookahead == '`')
                ADVANCE(603);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(10);
            if(('\t' <= lookahead && lookahead <= '\f'))
                ADVANCE(599);
            if(lookahead != 0)
                ADVANCE(597);
            END_STATE();
        case 11:
            if(lookahead == ' ')
                ADVANCE(605);
            if(lookahead == '*')
                ADVANCE(606);
            END_STATE();
        case 12:
            if(lookahead == ' ')
                ADVANCE(640);
            if(lookahead == '#')
                ADVANCE(641);
            END_STATE();
        case 13:
            if(lookahead == ' ')
                ADVANCE(631);
            if(lookahead == '`')
                ADVANCE(632);
            END_STATE();
        case 14:
            if(lookahead == '"')
                ADVANCE(56);
            if(lookahead == '\\')
                ADVANCE(80);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(14);
            END_STATE();
        case 15:
            ADVANCE_MAP(
                '"', 341,
                '$', 17,
                '+', 360,
                ',', 363,
                '.', 367,
                ':', 51,
                '>', 55,
                '[', 385,
                ']', 390,
                'a', 650,
                'c', 648,
                'm', 654,
                'n', 658,
                'p', 656,
                'q', 665,
                'r', 652,
                'v', 660,
                '}', 201,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(15);
            END_STATE();
        case 16:
            if(lookahead == '#')
                ADVANCE(12);
            if(lookahead == '\\')
                ADVANCE(637);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(16);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(638);
            if(lookahead != 0)
                ADVANCE(636);
            END_STATE();
        case 17:
            if(lookahead == '$')
                ADVANCE(582);
            END_STATE();
        case 18:
            if(lookahead == '+')
                ADVANCE(580);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 19:
            if(lookahead == '+')
                ADVANCE(21);
            if(lookahead == ',')
                ADVANCE(363);
            if(lookahead == '\\')
                ADVANCE(66);
            if(lookahead == ']')
                ADVANCE(67);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(19);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(531);
            END_STATE();
        case 20:
            if(lookahead == '+')
                ADVANCE(579);
            END_STATE();
        case 21:
            if(lookahead == '+')
                ADVANCE(20);
            END_STATE();
        case 22:
            if(lookahead == '-')
                ADVANCE(23);
            if(lookahead == '.')
                ADVANCE(78);
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
                ADVANCE(488);
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
                ADVANCE(61);
            if(lookahead == ']')
                ADVANCE(487);
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
                ADVANCE(61);
            if(lookahead == ']')
                ADVANCE(487);
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
                ADVANCE(61);
            if(lookahead == ']')
                ADVANCE(487);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(30);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            END_STATE();
        case 29:
            if(lookahead == '-')
                ADVANCE(32);
            if(lookahead == ':')
                ADVANCE(61);
            if(lookahead == ']')
                ADVANCE(487);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(28);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            END_STATE();
        case 30:
            if(lookahead == '-')
                ADVANCE(32);
            if(lookahead == ':')
                ADVANCE(61);
            if(lookahead == ']')
                ADVANCE(487);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            END_STATE();
        case 31:
            if(lookahead == '-')
                ADVANCE(32);
            if(lookahead == ':')
                ADVANCE(61);
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
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 34:
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(552);
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
            if(lookahead == '>')
                ADVANCE(589);
            END_STATE();
        case 56:
            if(lookahead == '@')
                ADVANCE(57);
            END_STATE();
        case 57:
            if(lookahead == '[')
                ADVANCE(52);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(22);
            END_STATE();
        case 58:
            if(lookahead == '[')
                ADVANCE(385);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(58);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(476);
            END_STATE();
        case 59:
            if(lookahead == '\\')
                ADVANCE(60);
            if(lookahead == ']')
                ADVANCE(489);
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
                ADVANCE(489);
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
                ADVANCE(196);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(193);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 63:
            if(lookahead == '\\')
                ADVANCE(515);
            if(lookahead == ']')
                ADVANCE(390);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(516);
            if(lookahead != 0)
                ADVANCE(510);
            END_STATE();
        case 64:
            if(lookahead == '\\')
                ADVANCE(629);
            if(lookahead == '`')
                ADVANCE(13);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(64);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(628);
            if(lookahead != 0)
                ADVANCE(627);
            END_STATE();
        case 65:
            if(lookahead == ']')
                ADVANCE(390);
            if(lookahead == '{')
                ADVANCE(85);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(520);
            if(lookahead != 0)
                ADVANCE(510);
            END_STATE();
        case 66:
            if(lookahead == ']')
                ADVANCE(522);
            END_STATE();
        case 67:
            if(lookahead == ']')
                ADVANCE(479);
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
                ADVANCE(335);
            END_STATE();
        case 69:
            if(lookahead == 'e')
                ADVANCE(71);
            END_STATE();
        case 70:
            if(lookahead == 'o')
                ADVANCE(72);
            END_STATE();
        case 71:
            if(lookahead == 's')
                ADVANCE(662);
            END_STATE();
        case 72:
            if(lookahead == 't')
                ADVANCE(69);
            END_STATE();
        case 73:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(73);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(562);
            END_STATE();
        case 74:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(74);
            if(lookahead != 0 &&
               lookahead != '.' &&
               lookahead != '>' &&
               lookahead != '[')
                ADVANCE(553);
            END_STATE();
        case 75:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(509);
            END_STATE();
        case 76:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(477);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 77:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(498);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(499);
            END_STATE();
        case 78:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(488);
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
                ADVANCE(34);
            END_STATE();
        case 80:
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(14);
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
                ADVANCE(57);
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
        case 87:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
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
                '#', 635,
                '$', 347,
                '%', 349,
                '&', 351,
                '\'', 353,
                '(', 355,
                ')', 357,
                '*', 596,
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
                '_', 609,
                '`', 626,
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
                ADVANCE(14);
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
                ADVANCE(581);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(34);
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
                ADVANCE(551);
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
                ADVANCE(543);
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
                ADVANCE(503);
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
                ADVANCE(493);
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
                ADVANCE(593);
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
                ADVANCE(497);
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
                ADVANCE(574);
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
                ADVANCE(570);
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
                ADVANCE(557);
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
                ADVANCE(566);
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
                ADVANCE(530);
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
                ADVANCE(507);
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
                ADVANCE(561);
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
                ADVANCE(547);
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
                ADVANCE(535);
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
                ADVANCE(483);
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
                ADVANCE(647);
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
                ADVANCE(578);
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
                ADVANCE(34);
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
                ADVANCE(34);
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
                ADVANCE(59);
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
                ADVANCE(59);
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
                ADVANCE(57);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'c')
                ADVANCE(548);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'd')
                ADVANCE(523);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'e')
                ADVANCE(540);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'e')
                ADVANCE(500);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'e')
                ADVANCE(490);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'f')
                ADVANCE(590);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'f')
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'h')
                ADVANCE(571);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'h')
                ADVANCE(567);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'k')
                ADVANCE(554);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'm')
                ADVANCE(563);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'n')
                ADVANCE(527);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'n')
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'o')
                ADVANCE(558);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'p')
                ADVANCE(544);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'p')
                ADVANCE(532);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'r')
                ADVANCE(480);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 's')
                ADVANCE(644);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 'u')
                ADVANCE(575);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'a')
                ADVANCE(296);
            if(lookahead == 'e')
                ADVANCE(308);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'a')
                ADVANCE(321);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'a')
                ADVANCE(291);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'a')
                ADVANCE(328);
            if(lookahead == 'i')
                ADVANCE(307);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'a')
                ADVANCE(325);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'a')
                ADVANCE(326);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'b')
                ADVANCE(281);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'c')
                ADVANCE(294);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'c')
                ADVANCE(549);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'c')
                ADVANCE(313);
            if(lookahead == 'm')
                ADVANCE(272);
            if(lookahead == 'r')
                ADVANCE(278);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'c')
                ADVANCE(298);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'd')
                ADVANCE(524);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'e')
                ADVANCE(302);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'e')
                ADVANCE(289);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'e')
                ADVANCE(541);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'e')
                ADVANCE(333);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'e')
                ADVANCE(501);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'e')
                ADVANCE(491);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'e')
                ADVANCE(290);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'f')
                ADVANCE(591);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'f')
                ADVANCE(495);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'g')
                ADVANCE(286);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'h')
                ADVANCE(572);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'h')
                ADVANCE(568);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'h')
                ADVANCE(312);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'i')
                ADVANCE(300);
            if(lookahead == 'o')
                ADVANCE(315);
            if(lookahead == 't')
                ADVANCE(316);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'i')
                ADVANCE(301);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'i')
                ADVANCE(303);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'i')
                ADVANCE(297);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'k')
                ADVANCE(555);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'l')
                ADVANCE(284);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'l')
                ADVANCE(330);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'm')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'm')
                ADVANCE(274);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'm')
                ADVANCE(275);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'n')
                ADVANCE(277);
            if(lookahead == 's')
                ADVANCE(280);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'n')
                ADVANCE(528);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'n')
                ADVANCE(299);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'n')
                ADVANCE(332);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'n')
                ADVANCE(505);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'n')
                ADVANCE(314);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'o')
                ADVANCE(559);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'o')
                ADVANCE(318);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'o')
                ADVANCE(309);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'o')
                ADVANCE(331);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'o')
                ADVANCE(329);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'p')
                ADVANCE(545);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'p')
                ADVANCE(533);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'r')
                ADVANCE(481);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'r')
                ADVANCE(283);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 's')
                ADVANCE(645);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 's')
                ADVANCE(320);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(306);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(282);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(317);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(292);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(293);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(324);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(285);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(310);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(311);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(287);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'u')
                ADVANCE(576);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'x')
                ADVANCE(304);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(68);
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
                ADVANCE(475);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(476);
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
                ADVANCE(57);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 338:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
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
                ADVANCE(34);
            END_STATE();
        case 339:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
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
                ADVANCE(34);
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
                ADVANCE(56);
            if(lookahead == '\\')
                ADVANCE(80);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(14);
            END_STATE();
        case 343:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(189);
            if(lookahead == '\\')
                ADVANCE(197);
            if(lookahead == '}')
                ADVANCE(14);
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
                ADVANCE(642);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            END_STATE();
        case 345:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(643);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
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
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 346:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(583);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            END_STATE();
        case 347:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(584);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
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
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 348:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
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
                ADVANCE(34);
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
                ADVANCE(57);
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
        case 351:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
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
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 352:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
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
                ADVANCE(34);
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
                ADVANCE(607);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            END_STATE();
        case 359:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '*')
                ADVANCE(608);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '}')
                ADVANCE(34);
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
                ADVANCE(18);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(34);
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
                ADVANCE(57);
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
        case 366:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
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
                ADVANCE(57);
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
        case 370:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
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
                ADVANCE(585);
            END_STATE();
        case 376:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(586);
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
                ADVANCE(57);
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
        case 378:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
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
                ADVANCE(57);
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
        case 382:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
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
                ADVANCE(57);
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
        case 393:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
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
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 394:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(622);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 395:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(623);
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
        case 396:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(620);
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
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(621);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(625);
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
                ADVANCE(624);
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
                ADVANCE(57);
            if(lookahead == '`')
                ADVANCE(633);
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
        case 401:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead == '`')
                ADVANCE(634);
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
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 402:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
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
                ADVANCE(34);
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
                ADVANCE(57);
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
        case 405:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
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
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
                ADVANCE(57);
            if(lookahead == 'a')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 410:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'a')
                ADVANCE(467);
            if(lookahead == 'i')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 411:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 412:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'a')
                ADVANCE(465);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 413:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'b')
                ADVANCE(418);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 414:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'c')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 415:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'c')
                ADVANCE(550);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 416:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'c')
                ADVANCE(450);
            if(lookahead == 'm')
                ADVANCE(409);
            if(lookahead == 'r')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 417:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 418:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'd')
                ADVANCE(525);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 419:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'e')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 420:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'e')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 421:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'e')
                ADVANCE(542);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 422:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'e')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 423:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'e')
                ADVANCE(502);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 424:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'e')
                ADVANCE(492);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 425:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'e')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 426:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'e')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 427:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'f')
                ADVANCE(592);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 428:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'f')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 429:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'g')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 430:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'h')
                ADVANCE(573);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 431:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'h')
                ADVANCE(569);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 432:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'h')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 433:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'i')
                ADVANCE(438);
            if(lookahead == 'o')
                ADVANCE(452);
            if(lookahead == 't')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 434:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 435:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 436:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'i')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 437:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'k')
                ADVANCE(556);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 438:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'l')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 439:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'l')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 440:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'm')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 441:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'm')
                ADVANCE(411);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 442:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'm')
                ADVANCE(412);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 443:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'n')
                ADVANCE(529);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 444:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'n')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 445:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'n')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 446:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'n')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 447:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'n')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 448:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'o')
                ADVANCE(560);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 449:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'o')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 450:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'o')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 451:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'o')
                ADVANCE(470);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 452:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'o')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 453:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'p')
                ADVANCE(546);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'p')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'r')
                ADVANCE(482);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'r')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 's')
                ADVANCE(646);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 's')
                ADVANCE(663);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 's')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 't')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 't')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 't')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 't')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 't')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 't')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 't')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'u')
                ADVANCE(577);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'x')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(lookahead == '_')
                ADVANCE(475);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(476);
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
        case 476:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(476);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(aux_sym_anchor_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(477);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(aux_sym_anchor_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ' ||
               ('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(478);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
        case 482:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 483:
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
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(aux_sym_anchor_token3);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(484);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(485);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(486);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(aux_sym_anchor_token3);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(485);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(486);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(aux_sym_anchor_token3);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(486);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(sym_email);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(sym_email);
            if(lookahead == '-')
                ADVANCE(24);
            if(lookahead == '.')
                ADVANCE(78);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(488);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(sym_email);
            if(lookahead == '\\')
                ADVANCE(60);
            if(lookahead == ']')
                ADVANCE(489);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(59);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 'r')
                ADVANCE(288);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
        case 492:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'r')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 493:
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
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
        case 496:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 497:
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
            ACCEPT_TOKEN(aux_sym_footnote_macro_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(498);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(499);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(aux_sym_footnote_macro_token2);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(499);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
        case 502:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 503:
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
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 507:
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
            ACCEPT_TOKEN(aux_sym_image_macro_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(509);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(aux_sym_image_macro_token1);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(509);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == ' ')
                ADVANCE(511);
            if(lookahead == '#')
                ADVANCE(635);
            if(lookahead == '*')
                ADVANCE(596);
            if(lookahead == '\\')
                ADVANCE(517);
            if(lookahead == '_')
                ADVANCE(609);
            if(lookahead == '`')
                ADVANCE(626);
            if(lookahead == '{')
                ADVANCE(85);
            if(('\t' <= lookahead && lookahead <= '\r'))
                ADVANCE(512);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(510);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == ' ')
                ADVANCE(511);
            if(lookahead == '#')
                ADVANCE(513);
            if(lookahead == '*')
                ADVANCE(514);
            if(lookahead == '\\')
                ADVANCE(517);
            if(lookahead == '_')
                ADVANCE(518);
            if(lookahead == '`')
                ADVANCE(519);
            if(lookahead == '{')
                ADVANCE(85);
            if(('\t' <= lookahead && lookahead <= '\r'))
                ADVANCE(512);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(510);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == '#')
                ADVANCE(641);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == '*')
                ADVANCE(606);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == '[')
                ADVANCE(521);
            if(lookahead == ']')
                ADVANCE(522);
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
                ADVANCE(510);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == ']')
                ADVANCE(522);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == '_')
                ADVANCE(619);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == '`')
                ADVANCE(632);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(aux_sym_image_macro_token2);
            if(lookahead == '{')
                ADVANCE(85);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(520);
            if(lookahead != 0 &&
               lookahead != ']')
                ADVANCE(510);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
        case 525:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 526:
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
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
        case 529:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 530:
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
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(aux_sym_key_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(531);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
            if(lookahead == 's')
                ADVANCE(536);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(lookahead == 's')
                ADVANCE(537);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
        case 534:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 's')
                ADVANCE(538);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               lookahead == '^' ||
               lookahead == '`' ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 535:
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
                ADVANCE(539);
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
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
        case 538:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 539:
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
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
        case 542:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 543:
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
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
        case 546:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 547:
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
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
        case 550:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 551:
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
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(sym__link_component);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '.' &&
               lookahead != '>' &&
               lookahead != '[')
                ADVANCE(553);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
        case 556:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 557:
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
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
        case 560:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 561:
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
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(aux_sym_link_macro_token1);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '[')
                ADVANCE(562);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
        case 565:
            ACCEPT_TOKEN(anon_sym_stem);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 566:
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
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
        case 569:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 570:
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
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
        case 573:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 574:
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
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
        case 577:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 578:
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
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
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
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
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
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            if(lookahead == '\\')
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(195);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(587);
            if(lookahead != 0 &&
               lookahead != '>')
                ADVANCE(588);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            if(lookahead != 0 &&
               lookahead != '>')
                ADVANCE(588);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
        case 592:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 593:
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
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(594);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(595);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            if(lookahead != 0 &&
               lookahead != '[')
                ADVANCE(595);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(anon_sym_STAR2);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == ' ')
                ADVANCE(598);
            if(lookahead == '#')
                ADVANCE(635);
            if(lookahead == '\\')
                ADVANCE(601);
            if(lookahead == '_')
                ADVANCE(609);
            if(lookahead == '`')
                ADVANCE(626);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(599);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(597);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == ' ')
                ADVANCE(598);
            if(lookahead == '#')
                ADVANCE(600);
            if(lookahead == '\\')
                ADVANCE(601);
            if(lookahead == '_')
                ADVANCE(602);
            if(lookahead == '`')
                ADVANCE(603);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(599);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(597);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '#')
                ADVANCE(641);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '*')
                ADVANCE(604);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '_')
                ADVANCE(619);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '`')
                ADVANCE(632);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(anon_sym_BSLASH_STAR);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(anon_sym_STAR3);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
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
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(anon_sym__2);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == ' ')
                ADVANCE(611);
            if(lookahead == '#')
                ADVANCE(635);
            if(lookahead == '*')
                ADVANCE(596);
            if(lookahead == '\\')
                ADVANCE(615);
            if(lookahead == '`')
                ADVANCE(626);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(612);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_' &&
               lookahead != '`')
                ADVANCE(610);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == ' ')
                ADVANCE(611);
            if(lookahead == '#')
                ADVANCE(613);
            if(lookahead == '*')
                ADVANCE(614);
            if(lookahead == '\\')
                ADVANCE(615);
            if(lookahead == '`')
                ADVANCE(616);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(612);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_' &&
               lookahead != '`')
                ADVANCE(610);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '#')
                ADVANCE(641);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '*')
                ADVANCE(606);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '_')
                ADVANCE(617);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '`')
                ADVANCE(632);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(anon_sym_BSLASH_);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(anon_sym__3);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(anon_sym___);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
        case 622:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            END_STATE();
        case 624:
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
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
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
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(anon_sym_BQUOTE2);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '\\')
                ADVANCE(629);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(628);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '`')
                ADVANCE(627);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '`')
                ADVANCE(630);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(anon_sym_BSLASH_BQUOTE);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(anon_sym_BQUOTE3);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
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
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(anon_sym_POUND2);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '#')
                ADVANCE(639);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '\\')
                ADVANCE(637);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(638);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '#')
                ADVANCE(636);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(anon_sym_BSLASH_POUND);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(anon_sym_POUND3);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead == '.')
                ADVANCE(192);
            if(lookahead == '@')
                ADVANCE(190);
            if(lookahead == '\\')
                ADVANCE(196);
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
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(195);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(33);
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
                ADVANCE(34);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(335);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == '_')
                ADVANCE(408);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(474);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '`') ||
               ('{' <= lookahead && lookahead <= '~'))
                ADVANCE(34);
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
        case 646:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 647:
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
                ADVANCE(195);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(168);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(170);
            if(lookahead != 0)
                ADVANCE(191);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(anon_sym_c);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(anon_sym_c);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(anon_sym_a);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(anon_sym_a);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'n')
                ADVANCE(414);
            if(lookahead == 's')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(anon_sym_r);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(anon_sym_r);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(anon_sym_m);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(anon_sym_m);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'a')
                ADVANCE(434);
            if(lookahead == 'e')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(anon_sym_p);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(anon_sym_p);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'a')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(anon_sym_n);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(anon_sym_n);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(anon_sym_v);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(anon_sym_v);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(anon_sym_quotes);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(anon_sym_quotes);
            if(lookahead == '.')
                ADVANCE(79);
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(anon_sym_q);
            if(lookahead == '.')
                ADVANCE(79);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'u')
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
                ADVANCE(34);
            if(('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('_' <= lookahead && lookahead <= 'z'))
                ADVANCE(474);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(anon_sym_q);
            if(lookahead == 'u')
                ADVANCE(70);
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
    [4] = { .lex_state = 82 },
    [5] = { .lex_state = 81 },
    [6] = { .lex_state = 83 },
    [7] = { .lex_state = 81 },
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
    [48] = { .lex_state = 81 },
    [49] = { .lex_state = 81 },
    [50] = { .lex_state = 7 },
    [51] = { .lex_state = 7 },
    [52] = { .lex_state = 7 },
    [53] = { .lex_state = 7 },
    [54] = { .lex_state = 7 },
    [55] = { .lex_state = 7 },
    [56] = { .lex_state = 7 },
    [57] = { .lex_state = 8 },
    [58] = { .lex_state = 10 },
    [59] = { .lex_state = 8 },
    [60] = { .lex_state = 10 },
    [61] = { .lex_state = 8 },
    [62] = { .lex_state = 8 },
    [63] = { .lex_state = 8 },
    [64] = { .lex_state = 10 },
    [65] = { .lex_state = 10 },
    [66] = { .lex_state = 10 },
    [67] = { .lex_state = 10 },
    [68] = { .lex_state = 8 },
    [69] = { .lex_state = 8 },
    [70] = { .lex_state = 10 },
    [71] = { .lex_state = 8 },
    [72] = { .lex_state = 10 },
    [73] = { .lex_state = 10 },
    [74] = { .lex_state = 10 },
    [75] = { .lex_state = 8 },
    [76] = { .lex_state = 8 },
    [77] = { .lex_state = 8 },
    [78] = { .lex_state = 10 },
    [79] = { .lex_state = 10 },
    [80] = { .lex_state = 8 },
    [81] = { .lex_state = 10 },
    [82] = { .lex_state = 8 },
    [83] = { .lex_state = 7 },
    [84] = { .lex_state = 7 },
    [85] = { .lex_state = 7 },
    [86] = { .lex_state = 7 },
    [87] = { .lex_state = 7 },
    [88] = { .lex_state = 7 },
    [89] = { .lex_state = 7 },
    [90] = { .lex_state = 7 },
    [91] = { .lex_state = 7 },
    [92] = { .lex_state = 7 },
    [93] = { .lex_state = 15 },
    [94] = { .lex_state = 8 },
    [95] = { .lex_state = 10 },
    [96] = { .lex_state = 8 },
    [97] = { .lex_state = 8 },
    [98] = { .lex_state = 15 },
    [99] = { .lex_state = 8 },
    [100] = { .lex_state = 10 },
    [101] = { .lex_state = 10 },
    [102] = { .lex_state = 10 },
    [103] = { .lex_state = 10 },
    [104] = { .lex_state = 8 },
    [105] = { .lex_state = 10 },
    [106] = { .lex_state = 8 },
    [107] = { .lex_state = 65 },
    [108] = { .lex_state = 65 },
    [109] = { .lex_state = 65 },
    [110] = { .lex_state = 63 },
    [111] = { .lex_state = 65 },
    [112] = { .lex_state = 16 },
    [113] = { .lex_state = 15 },
    [114] = { .lex_state = 63 },
    [115] = { .lex_state = 63 },
    [116] = { .lex_state = 64 },
    [117] = { .lex_state = 65 },
    [118] = { .lex_state = 15 },
    [119] = { .lex_state = 64 },
    [120] = { .lex_state = 16 },
    [121] = { .lex_state = 16 },
    [122] = { .lex_state = 15 },
    [123] = { .lex_state = 64 },
    [124] = { .lex_state = 64 },
    [125] = { .lex_state = 15 },
    [126] = { .lex_state = 16 },
    [127] = { .lex_state = 63 },
    [128] = { .lex_state = 16 },
    [129] = { .lex_state = 64 },
    [130] = { .lex_state = 64 },
    [131] = { .lex_state = 64 },
    [132] = { .lex_state = 16 },
    [133] = { .lex_state = 16 },
    [134] = { .lex_state = 64 },
    [135] = { .lex_state = 16 },
    [136] = { .lex_state = 16 },
    [137] = { .lex_state = 16 },
    [138] = { .lex_state = 64 },
    [139] = { .lex_state = 16 },
    [140] = { .lex_state = 64 },
    [141] = { .lex_state = 64 },
    [142] = { .lex_state = 16 },
    [143] = { .lex_state = 64 },
    [144] = { .lex_state = 16 },
    [145] = { .lex_state = 64 },
    [146] = { .lex_state = 64 },
    [147] = { .lex_state = 64 },
    [148] = { .lex_state = 16 },
    [149] = { .lex_state = 16 },
    [150] = { .lex_state = 64 },
    [151] = { .lex_state = 16 },
    [152] = { .lex_state = 64 },
    [153] = { .lex_state = 16 },
    [154] = { .lex_state = 19 },
    [155] = { .lex_state = 15 },
    [156] = { .lex_state = 15 },
    [157] = { .lex_state = 15 },
    [158] = { .lex_state = 15 },
    [159] = { .lex_state = 0 },
    [160] = { .lex_state = 65 },
    [161] = { .lex_state = 15 },
    [162] = { .lex_state = 19 },
    [163] = { .lex_state = 19 },
    [164] = { .lex_state = 15 },
    [165] = { .lex_state = 15 },
    [166] = { .lex_state = 0 },
    [167] = { .lex_state = 484 },
    [168] = { .lex_state = 15 },
    [169] = { .lex_state = 19 },
    [170] = { .lex_state = 484 },
    [171] = { .lex_state = 0 },
    [172] = { .lex_state = 15 },
    [173] = { .lex_state = 15 },
    [174] = { .lex_state = 15 },
    [175] = { .lex_state = 0 },
    [176] = { .lex_state = 58 },
    [177] = { .lex_state = 0 },
    [178] = { .lex_state = 19 },
    [179] = { .lex_state = 58 },
    [180] = { .lex_state = 58 },
    [181] = { .lex_state = 58 },
    [182] = { .lex_state = 15 },
    [183] = { .lex_state = 15 },
    [184] = { .lex_state = 73 },
    [185] = { .lex_state = 74 },
    [186] = { .lex_state = 15 },
    [187] = { .lex_state = 75 },
    [188] = { .lex_state = 587 },
    [189] = { .lex_state = 58 },
    [190] = { .lex_state = 594 },
    [191] = { .lex_state = 15 },
    [192] = { .lex_state = 76 },
    [193] = { .lex_state = 15 },
    [194] = { .lex_state = 0 },
    [195] = { .lex_state = 0 },
    [196] = { .lex_state = 15 },
    [197] = { .lex_state = 0 },
    [198] = { .lex_state = 15 },
    [199] = { .lex_state = 15 },
    [200] = { .lex_state = 15 },
    [201] = { .lex_state = 484 },
    [202] = { .lex_state = 15 },
    [203] = { .lex_state = 15 },
    [204] = { .lex_state = 15 },
    [205] = { .lex_state = 74 },
    [206] = { .lex_state = 0 },
    [207] = { .lex_state = 58 },
    [208] = { .lex_state = 58 },
    [209] = { .lex_state = 15 },
    [210] = { .lex_state = 15 },
    [211] = { .lex_state = 77 },
    [212] = { .lex_state = 0 },
    [213] = { .lex_state = 62 },
    [214] = { .lex_state = 74 },
    [215] = { .lex_state = 0 },
    [216] = { .lex_state = 0 },
    [217] = { .lex_state = 0 },
    [218] = { .lex_state = 15 },
    [219] = { .lex_state = 0 },
    [220] = { .lex_state = 15 },
    [221] = { .lex_state = 0 },
    [222] = { .lex_state = 19 },
    [223] = { .lex_state = 15 },
    [224] = { .lex_state = 0 },
    [225] = { .lex_state = 0 },
    [226] = { .lex_state = 0 },
    [227] = { .lex_state = 0 },
    [228] = { .lex_state = 484 },
    [229] = { .lex_state = 0 },
    [230] = { .lex_state = 0 },
    [231] = { .lex_state = 0 },
    [232] = { .lex_state = 0 },
    [233] = { .lex_state = 74 },
    [234] = { .lex_state = 0 },
    [235] = { .lex_state = 484 },
    [236] = { .lex_state = 484 },
    [237] = { .lex_state = 0 },
    [238] = { .lex_state = 77 },
    [239] = { .lex_state = 0 },
    [240] = { .lex_state = 15 },
    [241] = { .lex_state = 62 },
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
        [sym_inline] = STATE(194),
        [sym_replacement] = STATE(3),
        [sym__word] = STATE(3),
        [sym__punctuation] = STATE(3),
        [sym_anchor] = STATE(3),
        [sym_footnote_macro] = STATE(3),
        [sym_image_macro] = STATE(3),
        [sym_kbd_macro] = STATE(3),
        [sym_auto_link] = STATE(3),
        [sym_link_url] = STATE(36),
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
        [sym_link_url] = STATE(36),
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
        [sym_link_url] = STATE(36),
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
        [ts_builtin_sym_end] = ACTIONS(139),
        [anon_sym_LBRACE] = ACTIONS(141),
        [aux_sym_replacement_token1] = ACTIONS(143),
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
        [sym_link_url] = STATE(168),
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
        [anon_sym_http] = ACTIONS(145),
        [anon_sym_https] = ACTIONS(145),
        [anon_sym_file] = ACTIONS(145),
        [anon_sym_ftp] = ACTIONS(145),
        [anon_sym_irc] = ACTIONS(145),
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
    [6] = {
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
        [aux_sym_anchor_token1] = ACTIONS(147),
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
    [7] = {
        [aux_sym_link_url_repeat1] = STATE(8),
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
        [anon_sym_pass] = ACTIONS(151),
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
        [aux_sym_link_url_repeat1] = STATE(7),
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
        [anon_sym_DOT] = ACTIONS(153),
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
    [29] = {
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
        [anon_sym_LBRACK] = ACTIONS(244),
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
    [30] = {
        [ts_builtin_sym_end] = ACTIONS(246),
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
        [anon_sym_COLON] = ACTIONS(248),
        [anon_sym_SEMI] = ACTIONS(248),
        [anon_sym_LT] = ACTIONS(248),
        [anon_sym_EQ] = ACTIONS(248),
        [anon_sym_GT] = ACTIONS(248),
        [anon_sym_QMARK] = ACTIONS(248),
        [anon_sym_AT] = ACTIONS(248),
        [anon_sym_LBRACK] = ACTIONS(248),
        [anon_sym_BSLASH] = ACTIONS(248),
        [anon_sym_RBRACK] = ACTIONS(248),
        [anon_sym_CARET] = ACTIONS(248),
        [anon_sym__] = ACTIONS(248),
        [anon_sym_BQUOTE] = ACTIONS(248),
        [anon_sym_PIPE] = ACTIONS(248),
        [anon_sym_TILDE] = ACTIONS(248),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(248),
        [anon_sym_anchor] = ACTIONS(248),
        [sym_email] = ACTIONS(248),
        [anon_sym_footnote] = ACTIONS(248),
        [anon_sym_footnoteref] = ACTIONS(248),
        [anon_sym_image] = ACTIONS(248),
        [anon_sym_icon] = ACTIONS(248),
        [anon_sym_kbd] = ACTIONS(248),
        [anon_sym_btn] = ACTIONS(248),
        [anon_sym_http] = ACTIONS(248),
        [anon_sym_https] = ACTIONS(248),
        [anon_sym_file] = ACTIONS(248),
        [anon_sym_ftp] = ACTIONS(248),
        [anon_sym_irc] = ACTIONS(248),
        [anon_sym_link] = ACTIONS(248),
        [anon_sym_mailto] = ACTIONS(248),
        [anon_sym_stem] = ACTIONS(248),
        [anon_sym_latexmath] = ACTIONS(248),
        [anon_sym_asciimath] = ACTIONS(248),
        [anon_sym_menu] = ACTIONS(248),
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
        [anon_sym_pass] = ACTIONS(248),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(250),
        [anon_sym_LBRACE] = ACTIONS(252),
        [anon_sym_RBRACE] = ACTIONS(252),
        [sym__word_no_digit] = ACTIONS(252),
        [sym__digits] = ACTIONS(252),
        [anon_sym_BANG] = ACTIONS(252),
        [anon_sym_DQUOTE] = ACTIONS(252),
        [anon_sym_POUND] = ACTIONS(252),
        [anon_sym_DOLLAR] = ACTIONS(252),
        [anon_sym_PERCENT] = ACTIONS(252),
        [anon_sym_AMP] = ACTIONS(252),
        [anon_sym_SQUOTE] = ACTIONS(252),
        [anon_sym_LPAREN] = ACTIONS(252),
        [anon_sym_RPAREN] = ACTIONS(252),
        [anon_sym_STAR] = ACTIONS(252),
        [anon_sym_PLUS] = ACTIONS(252),
        [anon_sym_COMMA] = ACTIONS(252),
        [anon_sym_DASH] = ACTIONS(252),
        [anon_sym_DOT] = ACTIONS(252),
        [anon_sym_SLASH] = ACTIONS(252),
        [anon_sym_COLON] = ACTIONS(252),
        [anon_sym_SEMI] = ACTIONS(252),
        [anon_sym_LT] = ACTIONS(252),
        [anon_sym_EQ] = ACTIONS(252),
        [anon_sym_GT] = ACTIONS(252),
        [anon_sym_QMARK] = ACTIONS(252),
        [anon_sym_AT] = ACTIONS(252),
        [anon_sym_LBRACK] = ACTIONS(252),
        [anon_sym_BSLASH] = ACTIONS(252),
        [anon_sym_RBRACK] = ACTIONS(252),
        [anon_sym_CARET] = ACTIONS(252),
        [anon_sym__] = ACTIONS(252),
        [anon_sym_BQUOTE] = ACTIONS(252),
        [anon_sym_PIPE] = ACTIONS(252),
        [anon_sym_TILDE] = ACTIONS(252),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(252),
        [anon_sym_anchor] = ACTIONS(252),
        [sym_email] = ACTIONS(252),
        [anon_sym_footnote] = ACTIONS(252),
        [anon_sym_footnoteref] = ACTIONS(252),
        [anon_sym_image] = ACTIONS(252),
        [anon_sym_icon] = ACTIONS(252),
        [anon_sym_kbd] = ACTIONS(252),
        [anon_sym_btn] = ACTIONS(252),
        [anon_sym_http] = ACTIONS(252),
        [anon_sym_https] = ACTIONS(252),
        [anon_sym_file] = ACTIONS(252),
        [anon_sym_ftp] = ACTIONS(252),
        [anon_sym_irc] = ACTIONS(252),
        [anon_sym_link] = ACTIONS(252),
        [anon_sym_mailto] = ACTIONS(252),
        [anon_sym_stem] = ACTIONS(252),
        [anon_sym_latexmath] = ACTIONS(252),
        [anon_sym_asciimath] = ACTIONS(252),
        [anon_sym_menu] = ACTIONS(252),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(252),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(252),
        [anon_sym_LT_LT] = ACTIONS(252),
        [anon_sym_xref] = ACTIONS(252),
        [anon_sym_STAR2] = ACTIONS(252),
        [anon_sym_STAR_STAR] = ACTIONS(252),
        [anon_sym__2] = ACTIONS(252),
        [anon_sym___] = ACTIONS(252),
        [anon_sym_BQUOTE2] = ACTIONS(252),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(252),
        [anon_sym_POUND2] = ACTIONS(252),
        [anon_sym_POUND_POUND] = ACTIONS(252),
        [anon_sym_pass] = ACTIONS(252),
    },
    [32] = {
        [ts_builtin_sym_end] = ACTIONS(254),
        [anon_sym_LBRACE] = ACTIONS(256),
        [anon_sym_RBRACE] = ACTIONS(256),
        [sym__word_no_digit] = ACTIONS(256),
        [sym__digits] = ACTIONS(256),
        [anon_sym_BANG] = ACTIONS(256),
        [anon_sym_DQUOTE] = ACTIONS(256),
        [anon_sym_POUND] = ACTIONS(256),
        [anon_sym_DOLLAR] = ACTIONS(256),
        [anon_sym_PERCENT] = ACTIONS(256),
        [anon_sym_AMP] = ACTIONS(256),
        [anon_sym_SQUOTE] = ACTIONS(256),
        [anon_sym_LPAREN] = ACTIONS(256),
        [anon_sym_RPAREN] = ACTIONS(256),
        [anon_sym_STAR] = ACTIONS(256),
        [anon_sym_PLUS] = ACTIONS(256),
        [anon_sym_COMMA] = ACTIONS(256),
        [anon_sym_DASH] = ACTIONS(256),
        [anon_sym_DOT] = ACTIONS(256),
        [anon_sym_SLASH] = ACTIONS(256),
        [anon_sym_COLON] = ACTIONS(256),
        [anon_sym_SEMI] = ACTIONS(256),
        [anon_sym_LT] = ACTIONS(256),
        [anon_sym_EQ] = ACTIONS(256),
        [anon_sym_GT] = ACTIONS(256),
        [anon_sym_QMARK] = ACTIONS(256),
        [anon_sym_AT] = ACTIONS(256),
        [anon_sym_LBRACK] = ACTIONS(256),
        [anon_sym_BSLASH] = ACTIONS(256),
        [anon_sym_RBRACK] = ACTIONS(256),
        [anon_sym_CARET] = ACTIONS(256),
        [anon_sym__] = ACTIONS(256),
        [anon_sym_BQUOTE] = ACTIONS(256),
        [anon_sym_PIPE] = ACTIONS(256),
        [anon_sym_TILDE] = ACTIONS(256),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(256),
        [anon_sym_anchor] = ACTIONS(256),
        [sym_email] = ACTIONS(256),
        [anon_sym_footnote] = ACTIONS(256),
        [anon_sym_footnoteref] = ACTIONS(256),
        [anon_sym_image] = ACTIONS(256),
        [anon_sym_icon] = ACTIONS(256),
        [anon_sym_kbd] = ACTIONS(256),
        [anon_sym_btn] = ACTIONS(256),
        [anon_sym_http] = ACTIONS(256),
        [anon_sym_https] = ACTIONS(256),
        [anon_sym_file] = ACTIONS(256),
        [anon_sym_ftp] = ACTIONS(256),
        [anon_sym_irc] = ACTIONS(256),
        [anon_sym_link] = ACTIONS(256),
        [anon_sym_mailto] = ACTIONS(256),
        [anon_sym_stem] = ACTIONS(256),
        [anon_sym_latexmath] = ACTIONS(256),
        [anon_sym_asciimath] = ACTIONS(256),
        [anon_sym_menu] = ACTIONS(256),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(256),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(256),
        [anon_sym_LT_LT] = ACTIONS(256),
        [anon_sym_xref] = ACTIONS(256),
        [anon_sym_STAR2] = ACTIONS(256),
        [anon_sym_STAR_STAR] = ACTIONS(256),
        [anon_sym__2] = ACTIONS(256),
        [anon_sym___] = ACTIONS(256),
        [anon_sym_BQUOTE2] = ACTIONS(256),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(256),
        [anon_sym_POUND2] = ACTIONS(256),
        [anon_sym_POUND_POUND] = ACTIONS(256),
        [anon_sym_pass] = ACTIONS(256),
    },
    [33] = {
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
        [anon_sym_pass] = ACTIONS(260),
    },
    [34] = {
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
        [anon_sym_pass] = ACTIONS(264),
    },
    [35] = {
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
        [anon_sym_pass] = ACTIONS(268),
    },
    [36] = {
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
        [anon_sym_LBRACK] = ACTIONS(274),
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
        [anon_sym_pass] = ACTIONS(272),
    },
    [37] = {
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
    [42] = {
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
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 13,
    ACTIONS(320),
    1,
    anon_sym_LBRACE,
    ACTIONS(322),
    1,
    anon_sym_RBRACK,
    ACTIONS(326),
    1,
    anon_sym_STAR2,
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
    STATE(55),
    1,
    aux_sym__macro_rule,
    ACTIONS(324),
    2,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(88),
    5,
    sym_replacement,
    sym_emphasis,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    [45] = 13,
    ACTIONS(320),
    1,
    anon_sym_LBRACE,
    ACTIONS(326),
    1,
    anon_sym_STAR2,
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
    ACTIONS(342),
    1,
    anon_sym_RBRACK,
    STATE(53),
    1,
    aux_sym__macro_rule,
    ACTIONS(324),
    2,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(88),
    5,
    sym_replacement,
    sym_emphasis,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    [90] = 13,
    ACTIONS(344),
    1,
    anon_sym_LBRACE,
    ACTIONS(347),
    1,
    anon_sym_RBRACK,
    ACTIONS(352),
    1,
    anon_sym_STAR2,
    ACTIONS(355),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(358),
    1,
    anon_sym__2,
    ACTIONS(361),
    1,
    anon_sym___,
    ACTIONS(364),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(367),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(370),
    1,
    anon_sym_POUND2,
    ACTIONS(373),
    1,
    anon_sym_POUND_POUND,
    STATE(52),
    1,
    aux_sym__macro_rule,
    ACTIONS(349),
    2,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(88),
    5,
    sym_replacement,
    sym_emphasis,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    [135] = 13,
    ACTIONS(320),
    1,
    anon_sym_LBRACE,
    ACTIONS(326),
    1,
    anon_sym_STAR2,
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
    ACTIONS(376),
    1,
    anon_sym_RBRACK,
    STATE(52),
    1,
    aux_sym__macro_rule,
    ACTIONS(324),
    2,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(88),
    5,
    sym_replacement,
    sym_emphasis,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    [180] = 13,
    ACTIONS(320),
    1,
    anon_sym_LBRACE,
    ACTIONS(326),
    1,
    anon_sym_STAR2,
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
    ACTIONS(378),
    1,
    anon_sym_RBRACK,
    STATE(56),
    1,
    aux_sym__macro_rule,
    ACTIONS(324),
    2,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(88),
    5,
    sym_replacement,
    sym_emphasis,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    [225] = 13,
    ACTIONS(320),
    1,
    anon_sym_LBRACE,
    ACTIONS(326),
    1,
    anon_sym_STAR2,
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
    ACTIONS(380),
    1,
    anon_sym_RBRACK,
    STATE(52),
    1,
    aux_sym__macro_rule,
    ACTIONS(324),
    2,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(88),
    5,
    sym_replacement,
    sym_emphasis,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    [270] = 13,
    ACTIONS(320),
    1,
    anon_sym_LBRACE,
    ACTIONS(326),
    1,
    anon_sym_STAR2,
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
    1,
    anon_sym_RBRACK,
    STATE(52),
    1,
    aux_sym__macro_rule,
    ACTIONS(324),
    2,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(88),
    5,
    sym_replacement,
    sym_emphasis,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    [315] = 9,
    ACTIONS(384),
    1,
    anon_sym_STAR2,
    ACTIONS(387),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(395),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(398),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(401),
    1,
    anon_sym_POUND2,
    ACTIONS(404),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(390),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    ACTIONS(393),
    2,
    anon_sym__3,
    anon_sym___,
    STATE(57),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [348] = 9,
    ACTIONS(412),
    1,
    anon_sym__2,
    ACTIONS(415),
    1,
    anon_sym___,
    ACTIONS(418),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(421),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(424),
    1,
    anon_sym_POUND2,
    ACTIONS(427),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(407),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    ACTIONS(410),
    2,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    STATE(58),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [381] = 9,
    ACTIONS(430),
    1,
    anon_sym_STAR2,
    ACTIONS(432),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(436),
    1,
    anon_sym___,
    ACTIONS(438),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(440),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(442),
    1,
    anon_sym_POUND2,
    ACTIONS(444),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(434),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(57),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [413] = 9,
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
    STATE(58),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [445] = 9,
    ACTIONS(430),
    1,
    anon_sym_STAR2,
    ACTIONS(432),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(438),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(440),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(442),
    1,
    anon_sym_POUND2,
    ACTIONS(444),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(464),
    1,
    anon_sym__3,
    ACTIONS(462),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(68),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [477] = 9,
    ACTIONS(430),
    1,
    anon_sym_STAR2,
    ACTIONS(432),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(438),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(440),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(442),
    1,
    anon_sym_POUND2,
    ACTIONS(444),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(466),
    1,
    anon_sym___,
    ACTIONS(434),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(57),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [509] = 9,
    ACTIONS(430),
    1,
    anon_sym_STAR2,
    ACTIONS(432),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(438),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(440),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(442),
    1,
    anon_sym_POUND2,
    ACTIONS(444),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(464),
    1,
    anon_sym___,
    ACTIONS(468),
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
    ACTIONS(470),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(446),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(58),
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
    ACTIONS(474),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(472),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(64),
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
    ACTIONS(476),
    1,
    anon_sym_STAR3,
    ACTIONS(446),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(58),
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
    ACTIONS(474),
    1,
    anon_sym_STAR3,
    ACTIONS(478),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(70),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [669] = 9,
    ACTIONS(430),
    1,
    anon_sym_STAR2,
    ACTIONS(432),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(438),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(440),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(442),
    1,
    anon_sym_POUND2,
    ACTIONS(444),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(466),
    1,
    anon_sym__3,
    ACTIONS(434),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(57),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [701] = 9,
    ACTIONS(430),
    1,
    anon_sym_STAR2,
    ACTIONS(432),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(438),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(440),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(442),
    1,
    anon_sym_POUND2,
    ACTIONS(444),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(480),
    1,
    anon_sym___,
    ACTIONS(434),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(57),
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
    ACTIONS(470),
    1,
    anon_sym_STAR3,
    ACTIONS(446),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(58),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [765] = 9,
    ACTIONS(430),
    1,
    anon_sym_STAR2,
    ACTIONS(432),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(438),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(440),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(442),
    1,
    anon_sym_POUND2,
    ACTIONS(444),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(480),
    1,
    anon_sym__3,
    ACTIONS(434),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(57),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [797] = 9,
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
    ACTIONS(446),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(58),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [829] = 9,
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
    STATE(60),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
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
    ACTIONS(484),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(486),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(72),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [893] = 9,
    ACTIONS(430),
    1,
    anon_sym_STAR2,
    ACTIONS(432),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(438),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(440),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(442),
    1,
    anon_sym_POUND2,
    ACTIONS(444),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(490),
    1,
    anon_sym__3,
    ACTIONS(488),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(71),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [925] = 9,
    ACTIONS(430),
    1,
    anon_sym_STAR2,
    ACTIONS(432),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(438),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(440),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(442),
    1,
    anon_sym_POUND2,
    ACTIONS(444),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(494),
    1,
    anon_sym___,
    ACTIONS(492),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(59),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [957] = 9,
    ACTIONS(430),
    1,
    anon_sym_STAR2,
    ACTIONS(432),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(438),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(440),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(442),
    1,
    anon_sym_POUND2,
    ACTIONS(444),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(494),
    1,
    anon_sym__3,
    ACTIONS(496),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(80),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [989] = 9,
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
    ACTIONS(476),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(446),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(58),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
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
    ACTIONS(500),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(498),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(78),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [1053] = 9,
    ACTIONS(430),
    1,
    anon_sym_STAR2,
    ACTIONS(432),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(436),
    1,
    anon_sym__3,
    ACTIONS(438),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(440),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(442),
    1,
    anon_sym_POUND2,
    ACTIONS(444),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(434),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(57),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [1085] = 9,
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
    ACTIONS(502),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR,
    STATE(66),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [1117] = 9,
    ACTIONS(430),
    1,
    anon_sym_STAR2,
    ACTIONS(432),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(438),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(440),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(442),
    1,
    anon_sym_POUND2,
    ACTIONS(444),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(490),
    1,
    anon_sym___,
    ACTIONS(504),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_,
    STATE(69),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [1149] = 1,
    ACTIONS(306),
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
    ACTIONS(204),
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
    ACTIONS(208),
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
    ACTIONS(290),
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
    [1224] = 1,
    ACTIONS(506),
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
    [1254] = 1,
    ACTIONS(216),
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
    ACTIONS(278),
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
    ACTIONS(318),
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
    ACTIONS(508),
    1,
    anon_sym_LBRACK,
    ACTIONS(512),
    1,
    anon_sym_q,
    STATE(157),
    1,
    sym_pass_macro_attr,
    ACTIONS(510),
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
    ACTIONS(290),
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
    [1332] = 1,
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
    [1345] = 1,
    ACTIONS(208),
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
    [1371] = 3,
    ACTIONS(512),
    1,
    anon_sym_q,
    STATE(174),
    1,
    sym_pass_macro_attr,
    ACTIONS(510),
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
    ACTIONS(204),
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
    ACTIONS(208),
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
    [1414] = 1,
    ACTIONS(204),
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
    [1440] = 1,
    ACTIONS(318),
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
    [1453] = 1,
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
    [1466] = 1,
    ACTIONS(290),
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
    ACTIONS(306),
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
    ACTIONS(514),
    1,
    anon_sym_LBRACE,
    ACTIONS(516),
    1,
    anon_sym_RBRACK,
    ACTIONS(518),
    1,
    aux_sym_image_macro_token2,
    STATE(232),
    1,
    sym_link_label,
    STATE(111),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1509] = 5,
    ACTIONS(514),
    1,
    anon_sym_LBRACE,
    ACTIONS(518),
    1,
    aux_sym_image_macro_token2,
    ACTIONS(520),
    1,
    anon_sym_RBRACK,
    STATE(219),
    1,
    sym_link_label,
    STATE(111),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1526] = 5,
    ACTIONS(514),
    1,
    anon_sym_LBRACE,
    ACTIONS(518),
    1,
    aux_sym_image_macro_token2,
    ACTIONS(522),
    1,
    anon_sym_RBRACK,
    STATE(221),
    1,
    sym_link_label,
    STATE(111),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1543] = 3,
    ACTIONS(524),
    1,
    anon_sym_RBRACK,
    STATE(115),
    1,
    aux_sym_image_macro_repeat1,
    ACTIONS(526),
    3,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [1555] = 4,
    ACTIONS(514),
    1,
    anon_sym_LBRACE,
    ACTIONS(528),
    1,
    anon_sym_RBRACK,
    ACTIONS(530),
    1,
    aux_sym_image_macro_token2,
    STATE(117),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1569] = 3,
    STATE(112),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(532),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    ACTIONS(535),
    2,
    anon_sym_POUND3,
    anon_sym_POUND_POUND,
    [1581] = 5,
    ACTIONS(537),
    1,
    anon_sym_PLUS,
    ACTIONS(539),
    1,
    anon_sym_COMMA,
    ACTIONS(541),
    1,
    anon_sym_RBRACK,
    STATE(164),
    1,
    aux_sym_kbd_macro_repeat1,
    STATE(166),
    1,
    aux_sym_kbd_macro_repeat2,
    [1597] = 3,
    ACTIONS(543),
    1,
    anon_sym_RBRACK,
    STATE(110),
    1,
    aux_sym_image_macro_repeat1,
    ACTIONS(526),
    3,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [1609] = 3,
    ACTIONS(545),
    1,
    anon_sym_RBRACK,
    STATE(115),
    1,
    aux_sym_image_macro_repeat1,
    ACTIONS(547),
    3,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [1621] = 3,
    STATE(116),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(550),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    ACTIONS(553),
    2,
    anon_sym_BQUOTE3,
    anon_sym_BQUOTE_BQUOTE,
    [1633] = 4,
    ACTIONS(555),
    1,
    anon_sym_LBRACE,
    ACTIONS(558),
    1,
    anon_sym_RBRACK,
    ACTIONS(560),
    1,
    aux_sym_image_macro_token2,
    STATE(117),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1647] = 3,
    ACTIONS(563),
    1,
    anon_sym_DOT,
    STATE(122),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(149),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [1658] = 3,
    ACTIONS(567),
    1,
    anon_sym_BQUOTE3,
    STATE(152),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(565),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1669] = 3,
    ACTIONS(571),
    1,
    anon_sym_POUND_POUND,
    STATE(112),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(569),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1680] = 3,
    ACTIONS(571),
    1,
    anon_sym_POUND3,
    STATE(112),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(569),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1691] = 3,
    ACTIONS(573),
    1,
    anon_sym_DOT,
    STATE(122),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(155),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [1702] = 3,
    ACTIONS(578),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(116),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(576),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1713] = 3,
    ACTIONS(578),
    1,
    anon_sym_BQUOTE3,
    STATE(116),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(576),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1724] = 3,
    ACTIONS(563),
    1,
    anon_sym_DOT,
    STATE(118),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(162),
    2,
    anon_sym_DQUOTE,
    anon_sym_LBRACK,
    [1735] = 3,
    ACTIONS(582),
    1,
    anon_sym_POUND_POUND,
    STATE(120),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(580),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1746] = 1,
    ACTIONS(584),
    4,
    anon_sym_RBRACK,
    aux_sym_image_macro_token2,
    anon_sym_BSLASH_LBRACK,
    anon_sym_BSLASH_RBRACK,
    [1753] = 3,
    ACTIONS(582),
    1,
    anon_sym_POUND3,
    STATE(121),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(586),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1764] = 3,
    ACTIONS(588),
    1,
    anon_sym_BQUOTE3,
    STATE(116),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(576),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1775] = 3,
    ACTIONS(588),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(116),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(576),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1786] = 3,
    ACTIONS(592),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(123),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(590),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1797] = 3,
    ACTIONS(594),
    1,
    anon_sym_POUND3,
    STATE(112),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(569),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1808] = 3,
    ACTIONS(594),
    1,
    anon_sym_POUND_POUND,
    STATE(112),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(569),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1819] = 3,
    ACTIONS(592),
    1,
    anon_sym_BQUOTE3,
    STATE(124),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(596),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1830] = 3,
    ACTIONS(600),
    1,
    anon_sym_POUND_POUND,
    STATE(133),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(598),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1841] = 3,
    ACTIONS(600),
    1,
    anon_sym_POUND3,
    STATE(132),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(602),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1852] = 3,
    ACTIONS(604),
    1,
    anon_sym_POUND_POUND,
    STATE(112),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(569),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1863] = 3,
    ACTIONS(608),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(130),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(606),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1874] = 3,
    ACTIONS(604),
    1,
    anon_sym_POUND3,
    STATE(112),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(569),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1885] = 3,
    ACTIONS(610),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(116),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(576),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1896] = 3,
    ACTIONS(610),
    1,
    anon_sym_BQUOTE3,
    STATE(116),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(576),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1907] = 3,
    ACTIONS(614),
    1,
    anon_sym_POUND_POUND,
    STATE(137),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(612),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1918] = 3,
    ACTIONS(608),
    1,
    anon_sym_BQUOTE3,
    STATE(129),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(616),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1929] = 3,
    ACTIONS(614),
    1,
    anon_sym_POUND3,
    STATE(139),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(618),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1940] = 3,
    ACTIONS(622),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(140),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(620),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1951] = 3,
    ACTIONS(622),
    1,
    anon_sym_BQUOTE3,
    STATE(141),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(624),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1962] = 3,
    ACTIONS(567),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(150),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(626),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [1973] = 3,
    ACTIONS(628),
    1,
    anon_sym_POUND_POUND,
    STATE(112),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(569),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1984] = 3,
    ACTIONS(628),
    1,
    anon_sym_POUND3,
    STATE(112),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(569),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [1995] = 3,
    ACTIONS(630),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(116),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(576),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [2006] = 3,
    ACTIONS(634),
    1,
    anon_sym_POUND3,
    STATE(149),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(632),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [2017] = 3,
    ACTIONS(630),
    1,
    anon_sym_BQUOTE3,
    STATE(116),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(576),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE,
    [2028] = 3,
    ACTIONS(634),
    1,
    anon_sym_POUND_POUND,
    STATE(148),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(636),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND,
    [2039] = 2,
    STATE(171),
    1,
    sym_key,
    ACTIONS(638),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [2047] = 1,
    ACTIONS(640),
    3,
    anon_sym_PLUS,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [2053] = 3,
    ACTIONS(642),
    1,
    anon_sym_COMMA,
    ACTIONS(644),
    1,
    anon_sym_LBRACK,
    STATE(165),
    1,
    aux_sym_pass_macro_repeat1,
    [2063] = 3,
    ACTIONS(642),
    1,
    anon_sym_COMMA,
    ACTIONS(646),
    1,
    anon_sym_LBRACK,
    STATE(156),
    1,
    aux_sym_pass_macro_repeat1,
    [2073] = 3,
    ACTIONS(648),
    1,
    anon_sym_PLUS,
    ACTIONS(651),
    1,
    anon_sym_RBRACK,
    STATE(158),
    1,
    aux_sym_kbd_macro_repeat1,
    [2083] = 3,
    ACTIONS(653),
    1,
    anon_sym_COMMA,
    ACTIONS(656),
    1,
    anon_sym_RBRACK,
    STATE(159),
    1,
    aux_sym_kbd_macro_repeat2,
    [2093] = 1,
    ACTIONS(278),
    3,
    anon_sym_LBRACE,
    anon_sym_RBRACK,
    aux_sym_image_macro_token2,
    [2099] = 1,
    ACTIONS(155),
    3,
    anon_sym_DQUOTE,
    anon_sym_DOT,
    anon_sym_LBRACK,
    [2105] = 2,
    STATE(173),
    1,
    sym_key,
    ACTIONS(638),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [2113] = 2,
    STATE(113),
    1,
    sym_key,
    ACTIONS(638),
    2,
    anon_sym_BSLASH_RBRACK,
    aux_sym_key_token1,
    [2121] = 3,
    ACTIONS(537),
    1,
    anon_sym_PLUS,
    ACTIONS(658),
    1,
    anon_sym_RBRACK,
    STATE(158),
    1,
    aux_sym_kbd_macro_repeat1,
    [2131] = 3,
    ACTIONS(660),
    1,
    anon_sym_COMMA,
    ACTIONS(663),
    1,
    anon_sym_LBRACK,
    STATE(165),
    1,
    aux_sym_pass_macro_repeat1,
    [2141] = 3,
    ACTIONS(539),
    1,
    anon_sym_COMMA,
    ACTIONS(658),
    1,
    anon_sym_RBRACK,
    STATE(159),
    1,
    aux_sym_kbd_macro_repeat2,
    [2151] = 2,
    ACTIONS(665),
    1,
    aux_sym_anchor_token3,
    ACTIONS(667),
    1,
    aux_sym_footnote_macro_token1,
    [2158] = 2,
    ACTIONS(669),
    1,
    anon_sym_DQUOTE,
    ACTIONS(671),
    1,
    anon_sym_LBRACK,
    [2165] = 2,
    ACTIONS(673),
    1,
    anon_sym_COMMA,
    ACTIONS(675),
    1,
    anon_sym_RBRACK_RBRACK,
    [2172] = 2,
    ACTIONS(677),
    1,
    aux_sym_anchor_token3,
    ACTIONS(679),
    1,
    aux_sym_footnote_macro_token1,
    [2179] = 1,
    ACTIONS(656),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [2184] = 1,
    ACTIONS(681),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACK,
    [2189] = 1,
    ACTIONS(651),
    2,
    anon_sym_PLUS,
    anon_sym_RBRACK,
    [2194] = 1,
    ACTIONS(663),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACK,
    [2199] = 2,
    ACTIONS(683),
    1,
    anon_sym_COMMA,
    ACTIONS(685),
    1,
    anon_sym_RBRACK,
    [2206] = 2,
    ACTIONS(687),
    1,
    anon_sym_LBRACK,
    ACTIONS(689),
    1,
    aux_sym_anchor_token1,
    [2213] = 2,
    ACTIONS(691),
    1,
    anon_sym_COMMA,
    ACTIONS(693),
    1,
    anon_sym_RBRACK,
    [2220] = 1,
    ACTIONS(695),
    1,
    anon_sym_PLUS_PLUS_PLUS,
    [2224] = 1,
    ACTIONS(697),
    1,
    aux_sym_anchor_token1,
    [2228] = 1,
    ACTIONS(699),
    1,
    aux_sym_anchor_token1,
    [2232] = 1,
    ACTIONS(701),
    1,
    aux_sym_anchor_token1,
    [2236] = 1,
    ACTIONS(695),
    1,
    anon_sym_DOLLAR_DOLLAR,
    [2240] = 1,
    ACTIONS(703),
    1,
    anon_sym_LBRACK,
    [2244] = 1,
    ACTIONS(705),
    1,
    aux_sym_link_macro_token1,
    [2248] = 1,
    ACTIONS(707),
    1,
    sym__link_component,
    [2252] = 1,
    ACTIONS(709),
    1,
    anon_sym_LBRACK,
    [2256] = 1,
    ACTIONS(711),
    1,
    aux_sym_image_macro_token1,
    [2260] = 1,
    ACTIONS(713),
    1,
    aux_sym_xref_token1,
    [2264] = 1,
    ACTIONS(715),
    1,
    aux_sym_anchor_token1,
    [2268] = 1,
    ACTIONS(717),
    1,
    aux_sym_xref_token2,
    [2272] = 1,
    ACTIONS(695),
    1,
    anon_sym_PLUS,
    [2276] = 1,
    ACTIONS(719),
    1,
    aux_sym_anchor_token2,
    [2280] = 1,
    ACTIONS(721),
    1,
    anon_sym_RBRACE,
    [2284] = 1,
    ACTIONS(723),
    1,
    ts_builtin_sym_end,
    [2288] = 1,
    ACTIONS(725),
    1,
    anon_sym_COLON,
    [2292] = 1,
    ACTIONS(727),
    1,
    anon_sym_LBRACK,
    [2296] = 1,
    ACTIONS(729),
    1,
    anon_sym_RBRACK,
    [2300] = 1,
    ACTIONS(731),
    1,
    anon_sym_LBRACK,
    [2304] = 1,
    ACTIONS(733),
    1,
    anon_sym_LBRACK,
    [2308] = 1,
    ACTIONS(735),
    1,
    anon_sym_LBRACK,
    [2312] = 1,
    ACTIONS(737),
    1,
    aux_sym_anchor_token3,
    [2316] = 1,
    ACTIONS(739),
    1,
    anon_sym_LBRACK,
    [2320] = 1,
    ACTIONS(741),
    1,
    anon_sym_GT_GT,
    [2324] = 1,
    ACTIONS(743),
    1,
    anon_sym_RBRACE,
    [2328] = 1,
    ACTIONS(745),
    1,
    sym__link_component,
    [2332] = 1,
    ACTIONS(747),
    1,
    anon_sym_COLON,
    [2336] = 1,
    ACTIONS(749),
    1,
    aux_sym_anchor_token1,
    [2340] = 1,
    ACTIONS(751),
    1,
    aux_sym_anchor_token1,
    [2344] = 1,
    ACTIONS(753),
    1,
    anon_sym_DQUOTE,
    [2348] = 1,
    ACTIONS(755),
    1,
    anon_sym_LBRACK,
    [2352] = 1,
    ACTIONS(757),
    1,
    aux_sym_footnote_macro_token2,
    [2356] = 1,
    ACTIONS(759),
    1,
    anon_sym_RBRACK,
    [2360] = 1,
    ACTIONS(761),
    1,
    aux_sym_replacement_token1,
    [2364] = 1,
    ACTIONS(763),
    1,
    sym__link_component,
    [2368] = 1,
    ACTIONS(765),
    1,
    anon_sym_COLON,
    [2372] = 1,
    ACTIONS(767),
    1,
    anon_sym_COLON,
    [2376] = 1,
    ACTIONS(769),
    1,
    anon_sym_COLON,
    [2380] = 1,
    ACTIONS(771),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [2384] = 1,
    ACTIONS(773),
    1,
    anon_sym_RBRACK,
    [2388] = 1,
    ACTIONS(775),
    1,
    anon_sym_DQUOTE,
    [2392] = 1,
    ACTIONS(777),
    1,
    anon_sym_RBRACK,
    [2396] = 1,
    ACTIONS(779),
    1,
    anon_sym_RBRACK_RBRACK,
    [2400] = 1,
    ACTIONS(781),
    1,
    anon_sym_RBRACE,
    [2404] = 1,
    ACTIONS(783),
    1,
    anon_sym_COLON,
    [2408] = 1,
    ACTIONS(785),
    1,
    anon_sym_COLON,
    [2412] = 1,
    ACTIONS(787),
    1,
    anon_sym_COLON,
    [2416] = 1,
    ACTIONS(789),
    1,
    anon_sym_COLON,
    [2420] = 1,
    ACTIONS(791),
    1,
    aux_sym_anchor_token3,
    [2424] = 1,
    ACTIONS(693),
    1,
    anon_sym_RBRACK,
    [2428] = 1,
    ACTIONS(793),
    1,
    anon_sym_RBRACK,
    [2432] = 1,
    ACTIONS(795),
    1,
    anon_sym_RBRACK,
    [2436] = 1,
    ACTIONS(797),
    1,
    anon_sym_RBRACK,
    [2440] = 1,
    ACTIONS(799),
    1,
    sym__link_component,
    [2444] = 1,
    ACTIONS(801),
    1,
    anon_sym_RBRACK,
    [2448] = 1,
    ACTIONS(803),
    1,
    aux_sym_anchor_token3,
    [2452] = 1,
    ACTIONS(805),
    1,
    aux_sym_anchor_token3,
    [2456] = 1,
    ACTIONS(685),
    1,
    anon_sym_RBRACK,
    [2460] = 1,
    ACTIONS(807),
    1,
    aux_sym_footnote_macro_token2,
    [2464] = 1,
    ACTIONS(809),
    1,
    anon_sym_RBRACK,
    [2468] = 1,
    ACTIONS(811),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [2472] = 1,
    ACTIONS(813),
    1,
    aux_sym_replacement_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(50)] = 0,
    [SMALL_STATE(51)] = 45,
    [SMALL_STATE(52)] = 90,
    [SMALL_STATE(53)] = 135,
    [SMALL_STATE(54)] = 180,
    [SMALL_STATE(55)] = 225,
    [SMALL_STATE(56)] = 270,
    [SMALL_STATE(57)] = 315,
    [SMALL_STATE(58)] = 348,
    [SMALL_STATE(59)] = 381,
    [SMALL_STATE(60)] = 413,
    [SMALL_STATE(61)] = 445,
    [SMALL_STATE(62)] = 477,
    [SMALL_STATE(63)] = 509,
    [SMALL_STATE(64)] = 541,
    [SMALL_STATE(65)] = 573,
    [SMALL_STATE(66)] = 605,
    [SMALL_STATE(67)] = 637,
    [SMALL_STATE(68)] = 669,
    [SMALL_STATE(69)] = 701,
    [SMALL_STATE(70)] = 733,
    [SMALL_STATE(71)] = 765,
    [SMALL_STATE(72)] = 797,
    [SMALL_STATE(73)] = 829,
    [SMALL_STATE(74)] = 861,
    [SMALL_STATE(75)] = 893,
    [SMALL_STATE(76)] = 925,
    [SMALL_STATE(77)] = 957,
    [SMALL_STATE(78)] = 989,
    [SMALL_STATE(79)] = 1021,
    [SMALL_STATE(80)] = 1053,
    [SMALL_STATE(81)] = 1085,
    [SMALL_STATE(82)] = 1117,
    [SMALL_STATE(83)] = 1149,
    [SMALL_STATE(84)] = 1164,
    [SMALL_STATE(85)] = 1179,
    [SMALL_STATE(86)] = 1194,
    [SMALL_STATE(87)] = 1209,
    [SMALL_STATE(88)] = 1224,
    [SMALL_STATE(89)] = 1239,
    [SMALL_STATE(90)] = 1254,
    [SMALL_STATE(91)] = 1269,
    [SMALL_STATE(92)] = 1284,
    [SMALL_STATE(93)] = 1299,
    [SMALL_STATE(94)] = 1319,
    [SMALL_STATE(95)] = 1332,
    [SMALL_STATE(96)] = 1345,
    [SMALL_STATE(97)] = 1358,
    [SMALL_STATE(98)] = 1371,
    [SMALL_STATE(99)] = 1388,
    [SMALL_STATE(100)] = 1401,
    [SMALL_STATE(101)] = 1414,
    [SMALL_STATE(102)] = 1427,
    [SMALL_STATE(103)] = 1440,
    [SMALL_STATE(104)] = 1453,
    [SMALL_STATE(105)] = 1466,
    [SMALL_STATE(106)] = 1479,
    [SMALL_STATE(107)] = 1492,
    [SMALL_STATE(108)] = 1509,
    [SMALL_STATE(109)] = 1526,
    [SMALL_STATE(110)] = 1543,
    [SMALL_STATE(111)] = 1555,
    [SMALL_STATE(112)] = 1569,
    [SMALL_STATE(113)] = 1581,
    [SMALL_STATE(114)] = 1597,
    [SMALL_STATE(115)] = 1609,
    [SMALL_STATE(116)] = 1621,
    [SMALL_STATE(117)] = 1633,
    [SMALL_STATE(118)] = 1647,
    [SMALL_STATE(119)] = 1658,
    [SMALL_STATE(120)] = 1669,
    [SMALL_STATE(121)] = 1680,
    [SMALL_STATE(122)] = 1691,
    [SMALL_STATE(123)] = 1702,
    [SMALL_STATE(124)] = 1713,
    [SMALL_STATE(125)] = 1724,
    [SMALL_STATE(126)] = 1735,
    [SMALL_STATE(127)] = 1746,
    [SMALL_STATE(128)] = 1753,
    [SMALL_STATE(129)] = 1764,
    [SMALL_STATE(130)] = 1775,
    [SMALL_STATE(131)] = 1786,
    [SMALL_STATE(132)] = 1797,
    [SMALL_STATE(133)] = 1808,
    [SMALL_STATE(134)] = 1819,
    [SMALL_STATE(135)] = 1830,
    [SMALL_STATE(136)] = 1841,
    [SMALL_STATE(137)] = 1852,
    [SMALL_STATE(138)] = 1863,
    [SMALL_STATE(139)] = 1874,
    [SMALL_STATE(140)] = 1885,
    [SMALL_STATE(141)] = 1896,
    [SMALL_STATE(142)] = 1907,
    [SMALL_STATE(143)] = 1918,
    [SMALL_STATE(144)] = 1929,
    [SMALL_STATE(145)] = 1940,
    [SMALL_STATE(146)] = 1951,
    [SMALL_STATE(147)] = 1962,
    [SMALL_STATE(148)] = 1973,
    [SMALL_STATE(149)] = 1984,
    [SMALL_STATE(150)] = 1995,
    [SMALL_STATE(151)] = 2006,
    [SMALL_STATE(152)] = 2017,
    [SMALL_STATE(153)] = 2028,
    [SMALL_STATE(154)] = 2039,
    [SMALL_STATE(155)] = 2047,
    [SMALL_STATE(156)] = 2053,
    [SMALL_STATE(157)] = 2063,
    [SMALL_STATE(158)] = 2073,
    [SMALL_STATE(159)] = 2083,
    [SMALL_STATE(160)] = 2093,
    [SMALL_STATE(161)] = 2099,
    [SMALL_STATE(162)] = 2105,
    [SMALL_STATE(163)] = 2113,
    [SMALL_STATE(164)] = 2121,
    [SMALL_STATE(165)] = 2131,
    [SMALL_STATE(166)] = 2141,
    [SMALL_STATE(167)] = 2151,
    [SMALL_STATE(168)] = 2158,
    [SMALL_STATE(169)] = 2165,
    [SMALL_STATE(170)] = 2172,
    [SMALL_STATE(171)] = 2179,
    [SMALL_STATE(172)] = 2184,
    [SMALL_STATE(173)] = 2189,
    [SMALL_STATE(174)] = 2194,
    [SMALL_STATE(175)] = 2199,
    [SMALL_STATE(176)] = 2206,
    [SMALL_STATE(177)] = 2213,
    [SMALL_STATE(178)] = 2220,
    [SMALL_STATE(179)] = 2224,
    [SMALL_STATE(180)] = 2228,
    [SMALL_STATE(181)] = 2232,
    [SMALL_STATE(182)] = 2236,
    [SMALL_STATE(183)] = 2240,
    [SMALL_STATE(184)] = 2244,
    [SMALL_STATE(185)] = 2248,
    [SMALL_STATE(186)] = 2252,
    [SMALL_STATE(187)] = 2256,
    [SMALL_STATE(188)] = 2260,
    [SMALL_STATE(189)] = 2264,
    [SMALL_STATE(190)] = 2268,
    [SMALL_STATE(191)] = 2272,
    [SMALL_STATE(192)] = 2276,
    [SMALL_STATE(193)] = 2280,
    [SMALL_STATE(194)] = 2284,
    [SMALL_STATE(195)] = 2288,
    [SMALL_STATE(196)] = 2292,
    [SMALL_STATE(197)] = 2296,
    [SMALL_STATE(198)] = 2300,
    [SMALL_STATE(199)] = 2304,
    [SMALL_STATE(200)] = 2308,
    [SMALL_STATE(201)] = 2312,
    [SMALL_STATE(202)] = 2316,
    [SMALL_STATE(203)] = 2320,
    [SMALL_STATE(204)] = 2324,
    [SMALL_STATE(205)] = 2328,
    [SMALL_STATE(206)] = 2332,
    [SMALL_STATE(207)] = 2336,
    [SMALL_STATE(208)] = 2340,
    [SMALL_STATE(209)] = 2344,
    [SMALL_STATE(210)] = 2348,
    [SMALL_STATE(211)] = 2352,
    [SMALL_STATE(212)] = 2356,
    [SMALL_STATE(213)] = 2360,
    [SMALL_STATE(214)] = 2364,
    [SMALL_STATE(215)] = 2368,
    [SMALL_STATE(216)] = 2372,
    [SMALL_STATE(217)] = 2376,
    [SMALL_STATE(218)] = 2380,
    [SMALL_STATE(219)] = 2384,
    [SMALL_STATE(220)] = 2388,
    [SMALL_STATE(221)] = 2392,
    [SMALL_STATE(222)] = 2396,
    [SMALL_STATE(223)] = 2400,
    [SMALL_STATE(224)] = 2404,
    [SMALL_STATE(225)] = 2408,
    [SMALL_STATE(226)] = 2412,
    [SMALL_STATE(227)] = 2416,
    [SMALL_STATE(228)] = 2420,
    [SMALL_STATE(229)] = 2424,
    [SMALL_STATE(230)] = 2428,
    [SMALL_STATE(231)] = 2432,
    [SMALL_STATE(232)] = 2436,
    [SMALL_STATE(233)] = 2440,
    [SMALL_STATE(234)] = 2444,
    [SMALL_STATE(235)] = 2448,
    [SMALL_STATE(236)] = 2452,
    [SMALL_STATE(237)] = 2456,
    [SMALL_STATE(238)] = 2460,
    [SMALL_STATE(239)] = 2464,
    [SMALL_STATE(240)] = 2468,
    [SMALL_STATE(241)] = 2472,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(4),
    [5] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(3),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(5),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(6),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(181),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(227),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(226),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(225),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(224),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(218),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(217),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(216),
    [27] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(215),
    [29] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(179),
    [31] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(208),
    [33] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(207),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(206),
    [37] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(81),
    [39] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(79),
    [41] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(77),
    [43] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(76),
    [45] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(143),
    [47] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(138),
    [49] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(136),
    [51] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(135),
    [53] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(195),
    [55] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    [57] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(4),
    [60] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(2),
    [63] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(5),
    [66] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(6),
    [69] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(181),
    [72] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(227),
    [75] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(226),
    [78] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(225),
    [81] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(224),
    [84] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(218),
    [87] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(217),
    [90] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(216),
    [93] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(215),
    [96] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(179),
    [99] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(208),
    [102] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(207),
    [105] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(206),
    [108] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(81),
    [111] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(79),
    [114] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(77),
    [117] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(76),
    [120] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(143),
    [123] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(138),
    [126] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(136),
    [129] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(135),
    [132] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(195),
    [135] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [137] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(2),
    [139] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__punctuation, 1, 0, 0),
    [141] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__punctuation, 1, 0, 0),
    [143] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(193),
    [145] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(240),
    [147] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(191),
    [149] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 4, 0, 0),
    [151] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 4, 0, 0),
    [153] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(233),
    [155] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [157] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [159] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(233),
    [162] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 3, 0, 0),
    [164] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 3, 0, 0),
    [166] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 6, 0, 5),
    [168] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 6, 0, 5),
    [170] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 6, 0, 0),
    [172] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 6, 0, 0),
    [174] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_math_macro, 5, 0, 3),
    [176] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_math_macro, 5, 0, 3),
    [178] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_pass_macro, 5, 0, 4),
    [180] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_pass_macro, 5, 0, 4),
    [182] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_pass_macro, 5, 0, 0),
    [184] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_pass_macro, 5, 0, 0),
    [186] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [188] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [190] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [192] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [194] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 5, 0, 0),
    [196] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 5, 0, 0),
    [198] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 6, 0, 5),
    [200] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 6, 0, 5),
    [202] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 3, 0, 0),
    [204] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 3, 0, 0),
    [206] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 3, 0, 0),
    [208] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 3, 0, 0),
    [210] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [212] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [214] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [216] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [218] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_image_macro, 6, 0, 0),
    [220] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_image_macro, 6, 0, 0),
    [222] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_kbd_macro, 6, 0, 0),
    [224] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_kbd_macro, 6, 0, 0),
    [226] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_macro, 6, 0, 0),
    [228] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_macro, 6, 0, 0),
    [230] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_menu_macro, 6, 0, 6),
    [232] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_menu_macro, 6, 0, 6),
    [234] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_macro, 5, 0, 0),
    [236] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_macro, 5, 0, 0),
    [238] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_pass_macro, 6, 0, 7),
    [240] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_pass_macro, 6, 0, 7),
    [242] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_pass_macro, 6, 0, 0),
    [244] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_pass_macro, 6, 0, 0),
    [246] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [248] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [250] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 7, 0, 0),
    [252] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 7, 0, 0),
    [254] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [256] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [258] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 5, 0, 1),
    [260] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 5, 0, 1),
    [262] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 3, 0, 1),
    [264] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 3, 0, 1),
    [266] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_pass_macro, 7, 0, 8),
    [268] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_pass_macro, 7, 0, 8),
    [270] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [272] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [274] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(108),
    [276] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 0),
    [278] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 0),
    [280] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_kbd_macro, 5, 0, 0),
    [282] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_kbd_macro, 5, 0, 0),
    [284] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 8, 0, 5),
    [286] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 8, 0, 5),
    [288] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 2, 0, 0),
    [290] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 2, 0, 0),
    [292] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_pass_macro, 4, 0, 0),
    [294] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_pass_macro, 4, 0, 0),
    [296] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_footnote_macro, 5, 0, 0),
    [298] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_footnote_macro, 5, 0, 0),
    [300] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 4, 0, 1),
    [302] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 4, 0, 1),
    [304] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [306] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [308] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_image_macro, 5, 0, 0),
    [310] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_image_macro, 5, 0, 0),
    [312] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 2, 0, 0),
    [314] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 2, 0, 0),
    [316] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [318] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [320] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(241),
    [322] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(43),
    [324] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(88),
    [326] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(67),
    [328] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(65),
    [330] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(61),
    [332] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(63),
    [334] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(134),
    [336] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(131),
    [338] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(128),
    [340] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(126),
    [342] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(14),
    [344] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    SHIFT_REPEAT(241),
    [347] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    [349] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    SHIFT_REPEAT(88),
    [352] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    SHIFT_REPEAT(67),
    [355] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    SHIFT_REPEAT(65),
    [358] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    SHIFT_REPEAT(61),
    [361] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    SHIFT_REPEAT(63),
    [364] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    SHIFT_REPEAT(134),
    [367] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    SHIFT_REPEAT(131),
    [370] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    SHIFT_REPEAT(128),
    [373] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 2, 0, 0),
    SHIFT_REPEAT(126),
    [376] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(28),
    [378] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(29),
    [380] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(13),
    [382] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(35),
    [384] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(73),
    [387] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(74),
    [390] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(57),
    [393] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    [395] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(146),
    [398] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(145),
    [401] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(144),
    [404] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(142),
    [407] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(58),
    [410] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    [412] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(75),
    [415] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(82),
    [418] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(119),
    [421] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(147),
    [424] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(151),
    [427] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(153),
    [430] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(73),
    [432] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(74),
    [434] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(57),
    [436] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(21),
    [438] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(146),
    [440] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(145),
    [442] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(144),
    [444] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(142),
    [446] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(58),
    [448] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(104),
    [450] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(75),
    [452] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(82),
    [454] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(119),
    [456] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(147),
    [458] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(151),
    [460] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(153),
    [462] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(68),
    [464] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(92),
    [466] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(89),
    [468] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [470] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(90),
    [472] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(64),
    [474] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(83),
    [476] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(22),
    [478] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(70),
    [480] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(102),
    [482] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(60),
    [484] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(106),
    [486] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(72),
    [488] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(71),
    [490] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(103),
    [492] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(59),
    [494] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(49),
    [496] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(80),
    [498] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(78),
    [500] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(46),
    [502] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(66),
    [504] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(69),
    [506] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym__macro_rule, 1, 0, 0),
    [508] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [510] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(172),
    [512] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(172),
    [514] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(213),
    [516] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(27),
    [518] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(111),
    [520] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(15),
    [522] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(220),
    [524] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(23),
    [526] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(127),
    [528] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_label, 1, 0, 0),
    [530] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(117),
    [532] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    SHIFT_REPEAT(112),
    [535] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    [537] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(162),
    [539] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(154),
    [541] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [543] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(47),
    [545] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_image_macro_repeat1, 2, 0, 0),
    [547] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_image_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(127),
    [550] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    SHIFT_REPEAT(116),
    [553] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    [555] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    SHIFT_REPEAT(213),
    [558] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    [560] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    SHIFT_REPEAT(117),
    [563] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(214),
    [565] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(152),
    [567] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(95),
    [569] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(112),
    [571] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(84),
    [573] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(214),
    [576] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(116),
    [578] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(85),
    [580] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(120),
    [582] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(86),
    [584] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_image_macro_repeat1, 1, 0, 2),
    [586] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(121),
    [588] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(20),
    [590] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(123),
    [592] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(87),
    [594] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(19),
    [596] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(124),
    [598] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(133),
    [600] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(41),
    [602] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(132),
    [604] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(99),
    [606] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(130),
    [608] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(48),
    [610] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(96),
    [612] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(137),
    [614] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(94),
    [616] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(129),
    [618] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(139),
    [620] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(140),
    [622] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(97),
    [624] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(141),
    [626] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(150),
    [628] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(101),
    [630] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(100),
    [632] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(149),
    [634] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(105),
    [636] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(148),
    [638] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(155),
    [640] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_key, 1, 0, 0),
    [642] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(98),
    [644] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [646] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [648] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(162),
    [651] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat1, 2, 0, 0),
    [653] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(154),
    [656] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_kbd_macro_repeat2, 2, 0, 0),
    [658] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [660] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_pass_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(98),
    [663] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_pass_macro_repeat1, 2, 0, 0),
    [665] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(237),
    [667] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(175),
    [669] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [671] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(109),
    [673] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(192),
    [675] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [677] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(229),
    [679] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(177),
    [681] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_pass_macro_attr, 1, 0, 0),
    [683] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(211),
    [685] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [687] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(170),
    [689] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(198),
    [691] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(238),
    [693] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [695] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [697] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(178),
    [699] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(202),
    [701] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(169),
    [703] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(201),
    [705] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(200),
    [707] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [709] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(163),
    [711] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(199),
    [713] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(203),
    [715] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(196),
    [717] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(210),
    [719] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(222),
    [721] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [723] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [725] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [727] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(228),
    [729] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [731] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(167),
    [733] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(114),
    [735] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(107),
    [737] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(234),
    [739] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(235),
    [741] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [743] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(160),
    [745] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(125),
    [747] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(190),
    [749] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(188),
    [751] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [753] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [755] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(236),
    [757] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(197),
    [759] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [761] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(204),
    [763] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(161),
    [765] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(180),
    [767] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(183),
    [769] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(184),
    [771] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(185),
    [773] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [775] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [777] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(209),
    [779] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(33),
    [781] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [783] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(186),
    [785] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(187),
    [787] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [789] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(189),
    [791] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(239),
    [793] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [795] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [797] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [799] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [801] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [803] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(231),
    [805] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(230),
    [807] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(212),
    [809] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [811] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(205),
    [813] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(223),
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
