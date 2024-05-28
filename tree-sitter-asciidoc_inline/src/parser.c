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
#define STATE_COUNT 164
#define LARGE_STATE_COUNT 36
#define SYMBOL_COUNT 173
#define ALIAS_COUNT 2
#define TOKEN_COUNT 143
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
    anon_sym_BSLASH_PLUS_PLUS_PLUS = 33,
    anon_sym_BSLASH_PLUS = 34,
    anon_sym_BSLASH_BQUOTE = 35,
    anon_sym_BSLASH_BQUOTE_BQUOTE = 36,
    anon_sym_BSLASH_STAR = 37,
    anon_sym_BSLASH_STAR_STAR = 38,
    anon_sym_BSLASH_DOLLAR = 39,
    anon_sym_BSLASH_DOLLAR_DOLLAR = 40,
    anon_sym_BSLASH_POUND = 41,
    anon_sym_BSLASH_POUND_POUND = 42,
    anon_sym_BSLASH_ = 43,
    anon_sym_BSLASH__ = 44,
    anon_sym_BSLASH_LT_LT = 45,
    anon_sym_BSLASH_LBRACK_LBRACK = 46,
    anon_sym_BSLASH_LBRACK2 = 47,
    anon_sym_BSLASHkbd = 48,
    anon_sym_BSLASHbtn = 49,
    anon_sym_BSLASHimage = 50,
    anon_sym_BSLASHaudio = 51,
    anon_sym_BSLASHvideo = 52,
    anon_sym_BSLASHicon = 53,
    anon_sym_BSLASHpass = 54,
    anon_sym_BSLASHlink = 55,
    anon_sym_BSLASHmailto = 56,
    anon_sym_BSLASHmenu = 57,
    anon_sym_BSLASHlatexmath = 58,
    anon_sym_BSLASHasciimath = 59,
    anon_sym_BSLASHfootnote = 60,
    anon_sym_BSLASHfootnoteref = 61,
    anon_sym_BSLASHanchor = 62,
    anon_sym_BSLASHxref = 63,
    anon_sym_BSLASHifdef = 64,
    anon_sym_BSLASHifndef = 65,
    anon_sym_BSLASHifeval = 66,
    anon_sym_BSLASHendif = 67,
    anon_sym_BANG = 68,
    anon_sym_DQUOTE = 69,
    anon_sym_POUND = 70,
    anon_sym_DOLLAR = 71,
    anon_sym_PERCENT = 72,
    anon_sym_AMP = 73,
    anon_sym_SQUOTE = 74,
    anon_sym_LPAREN = 75,
    anon_sym_RPAREN = 76,
    anon_sym_STAR = 77,
    anon_sym_PLUS = 78,
    anon_sym_COMMA = 79,
    anon_sym_DASH = 80,
    anon_sym_DOT = 81,
    anon_sym_SLASH = 82,
    anon_sym_COLON2 = 83,
    anon_sym_SEMI = 84,
    anon_sym_LT = 85,
    anon_sym_EQ = 86,
    anon_sym_GT = 87,
    anon_sym_QMARK = 88,
    anon_sym_AT = 89,
    anon_sym_BSLASH = 90,
    anon_sym_CARET = 91,
    anon_sym__ = 92,
    anon_sym_BQUOTE = 93,
    anon_sym_PIPE = 94,
    anon_sym_TILDE = 95,
    anon_sym_LBRACK_LBRACK = 96,
    aux_sym_anchor_token1 = 97,
    aux_sym_anchor_token2 = 98,
    anon_sym_RBRACK_RBRACK = 99,
    sym_email = 100,
    anon_sym_http = 101,
    anon_sym_https = 102,
    anon_sym_file = 103,
    anon_sym_ftp = 104,
    anon_sym_irc = 105,
    anon_sym_COLON_SLASH_SLASH = 106,
    sym__link_component = 107,
    aux_sym_passthrough_token1 = 108,
    anon_sym_BSLASH_PLUS2 = 109,
    anon_sym_PLUS_PLUS_PLUS = 110,
    anon_sym_BSLASH_PLUS_PLUS_PLUS2 = 111,
    anon_sym_DOLLAR_DOLLAR = 112,
    aux_sym_passthrough_token2 = 113,
    anon_sym_BSLASH_DOLLAR2 = 114,
    anon_sym_BSLASH_DOLLAR_DOLLAR2 = 115,
    anon_sym_LT_LT = 116,
    aux_sym_xref_token1 = 117,
    anon_sym_BSLASH_COMMA = 118,
    anon_sym_BSLASH_GT = 119,
    aux_sym_xref_token2 = 120,
    anon_sym_GT_GT = 121,
    anon_sym_STAR2 = 122,
    aux_sym_emphasis_token1 = 123,
    anon_sym_BSLASH_STAR2 = 124,
    anon_sym_STAR3 = 125,
    anon_sym_STAR_STAR = 126,
    anon_sym__2 = 127,
    aux_sym_ltalic_token1 = 128,
    anon_sym_BSLASH_2 = 129,
    anon_sym__3 = 130,
    anon_sym___ = 131,
    anon_sym_BQUOTE2 = 132,
    aux_sym_monospace_token1 = 133,
    anon_sym_BSLASH_BQUOTE2 = 134,
    anon_sym_BQUOTE3 = 135,
    anon_sym_BQUOTE_BQUOTE = 136,
    anon_sym_POUND2 = 137,
    aux_sym_highlight_token1 = 138,
    anon_sym_BSLASH_POUND2 = 139,
    anon_sym_POUND3 = 140,
    anon_sym_POUND_POUND = 141,
    sym__eof = 142,
    sym_inline = 143,
    sym_inline_macro = 144,
    sym_replacement = 145,
    sym__word = 146,
    sym_escaped_ch = 147,
    sym__punctuation = 148,
    sym_anchor = 149,
    sym_auto_link = 150,
    sym_link_label = 151,
    sym_link_url = 152,
    sym_passthrough = 153,
    sym_xref = 154,
    sym_emphasis = 155,
    sym_ltalic = 156,
    sym_monospace = 157,
    sym_highlight = 158,
    aux_sym_inline_repeat1 = 159,
    aux_sym_inline_macro_repeat1 = 160,
    aux_sym_inline_macro_repeat2 = 161,
    aux_sym_link_label_repeat1 = 162,
    aux_sym_link_url_repeat1 = 163,
    aux_sym_passthrough_repeat1 = 164,
    aux_sym_passthrough_repeat2 = 165,
    aux_sym_passthrough_repeat3 = 166,
    aux_sym_xref_repeat1 = 167,
    aux_sym_xref_repeat2 = 168,
    aux_sym_emphasis_repeat1 = 169,
    aux_sym_ltalic_repeat1 = 170,
    aux_sym_monospace_repeat1 = 171,
    aux_sym_highlight_repeat1 = 172,
    alias_sym_attr = 173,
    alias_sym_target = 174,
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
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = "\\+++",
    [anon_sym_BSLASH_PLUS] = "\\+",
    [anon_sym_BSLASH_BQUOTE] = "\\`",
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = "\\``",
    [anon_sym_BSLASH_STAR] = "\\*",
    [anon_sym_BSLASH_STAR_STAR] = "\\**",
    [anon_sym_BSLASH_DOLLAR] = "\\$",
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = "\\$$",
    [anon_sym_BSLASH_POUND] = "\\#",
    [anon_sym_BSLASH_POUND_POUND] = "\\##",
    [anon_sym_BSLASH_] = "\\_",
    [anon_sym_BSLASH__] = "\\__",
    [anon_sym_BSLASH_LT_LT] = "\\<<",
    [anon_sym_BSLASH_LBRACK_LBRACK] = "\\[[",
    [anon_sym_BSLASH_LBRACK2] = "\\[",
    [anon_sym_BSLASHkbd] = "\\kbd",
    [anon_sym_BSLASHbtn] = "\\btn",
    [anon_sym_BSLASHimage] = "\\image",
    [anon_sym_BSLASHaudio] = "\\audio",
    [anon_sym_BSLASHvideo] = "\\video",
    [anon_sym_BSLASHicon] = "\\icon",
    [anon_sym_BSLASHpass] = "\\pass",
    [anon_sym_BSLASHlink] = "\\link",
    [anon_sym_BSLASHmailto] = "\\mailto",
    [anon_sym_BSLASHmenu] = "\\menu",
    [anon_sym_BSLASHlatexmath] = "\\latexmath",
    [anon_sym_BSLASHasciimath] = "\\asciimath",
    [anon_sym_BSLASHfootnote] = "\\footnote",
    [anon_sym_BSLASHfootnoteref] = "\\footnoteref",
    [anon_sym_BSLASHanchor] = "\\anchor",
    [anon_sym_BSLASHxref] = "\\xref",
    [anon_sym_BSLASHifdef] = "\\ifdef",
    [anon_sym_BSLASHifndef] = "\\ifndef",
    [anon_sym_BSLASHifeval] = "\\ifeval",
    [anon_sym_BSLASHendif] = "\\endif",
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
    [anon_sym_BSLASH_PLUS2] = "\\+",
    [anon_sym_PLUS_PLUS_PLUS] = "+++",
    [anon_sym_BSLASH_PLUS_PLUS_PLUS2] = "\\+++",
    [anon_sym_DOLLAR_DOLLAR] = "$$",
    [aux_sym_passthrough_token2] = "passthrough_token2",
    [anon_sym_BSLASH_DOLLAR2] = "\\$",
    [anon_sym_BSLASH_DOLLAR_DOLLAR2] = "\\$$",
    [anon_sym_LT_LT] = "<<",
    [aux_sym_xref_token1] = "xref_token1",
    [anon_sym_BSLASH_COMMA] = "\\,",
    [anon_sym_BSLASH_GT] = "\\>",
    [aux_sym_xref_token2] = "xref_token2",
    [anon_sym_GT_GT] = ">>",
    [anon_sym_STAR2] = " *",
    [aux_sym_emphasis_token1] = "emphasis_token1",
    [anon_sym_BSLASH_STAR2] = "\\*",
    [anon_sym_STAR3] = "* ",
    [anon_sym_STAR_STAR] = "**",
    [anon_sym__2] = " _",
    [aux_sym_ltalic_token1] = "ltalic_token1",
    [anon_sym_BSLASH_2] = "\\_",
    [anon_sym__3] = "_ ",
    [anon_sym___] = "__",
    [anon_sym_BQUOTE2] = " `",
    [aux_sym_monospace_token1] = "monospace_token1",
    [anon_sym_BSLASH_BQUOTE2] = "\\`",
    [anon_sym_BQUOTE3] = "` ",
    [anon_sym_BQUOTE_BQUOTE] = "``",
    [anon_sym_POUND2] = " #",
    [aux_sym_highlight_token1] = "highlight_token1",
    [anon_sym_BSLASH_POUND2] = "\\#",
    [anon_sym_POUND3] = "# ",
    [anon_sym_POUND_POUND] = "##",
    [sym__eof] = "_eof",
    [sym_inline] = "inline",
    [sym_inline_macro] = "inline_macro",
    [sym_replacement] = "replacement",
    [sym__word] = "_word",
    [sym_escaped_ch] = "escaped_ch",
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
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = anon_sym_BSLASH_PLUS_PLUS_PLUS,
    [anon_sym_BSLASH_PLUS] = anon_sym_BSLASH_PLUS,
    [anon_sym_BSLASH_BQUOTE] = anon_sym_BSLASH_BQUOTE,
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = anon_sym_BSLASH_BQUOTE_BQUOTE,
    [anon_sym_BSLASH_STAR] = anon_sym_BSLASH_STAR,
    [anon_sym_BSLASH_STAR_STAR] = anon_sym_BSLASH_STAR_STAR,
    [anon_sym_BSLASH_DOLLAR] = anon_sym_BSLASH_DOLLAR,
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = anon_sym_BSLASH_DOLLAR_DOLLAR,
    [anon_sym_BSLASH_POUND] = anon_sym_BSLASH_POUND,
    [anon_sym_BSLASH_POUND_POUND] = anon_sym_BSLASH_POUND_POUND,
    [anon_sym_BSLASH_] = anon_sym_BSLASH_,
    [anon_sym_BSLASH__] = anon_sym_BSLASH__,
    [anon_sym_BSLASH_LT_LT] = anon_sym_BSLASH_LT_LT,
    [anon_sym_BSLASH_LBRACK_LBRACK] = anon_sym_BSLASH_LBRACK_LBRACK,
    [anon_sym_BSLASH_LBRACK2] = anon_sym_BSLASH_LBRACK,
    [anon_sym_BSLASHkbd] = anon_sym_BSLASHkbd,
    [anon_sym_BSLASHbtn] = anon_sym_BSLASHbtn,
    [anon_sym_BSLASHimage] = anon_sym_BSLASHimage,
    [anon_sym_BSLASHaudio] = anon_sym_BSLASHaudio,
    [anon_sym_BSLASHvideo] = anon_sym_BSLASHvideo,
    [anon_sym_BSLASHicon] = anon_sym_BSLASHicon,
    [anon_sym_BSLASHpass] = anon_sym_BSLASHpass,
    [anon_sym_BSLASHlink] = anon_sym_BSLASHlink,
    [anon_sym_BSLASHmailto] = anon_sym_BSLASHmailto,
    [anon_sym_BSLASHmenu] = anon_sym_BSLASHmenu,
    [anon_sym_BSLASHlatexmath] = anon_sym_BSLASHlatexmath,
    [anon_sym_BSLASHasciimath] = anon_sym_BSLASHasciimath,
    [anon_sym_BSLASHfootnote] = anon_sym_BSLASHfootnote,
    [anon_sym_BSLASHfootnoteref] = anon_sym_BSLASHfootnoteref,
    [anon_sym_BSLASHanchor] = anon_sym_BSLASHanchor,
    [anon_sym_BSLASHxref] = anon_sym_BSLASHxref,
    [anon_sym_BSLASHifdef] = anon_sym_BSLASHifdef,
    [anon_sym_BSLASHifndef] = anon_sym_BSLASHifndef,
    [anon_sym_BSLASHifeval] = anon_sym_BSLASHifeval,
    [anon_sym_BSLASHendif] = anon_sym_BSLASHendif,
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
    [anon_sym_BSLASH_PLUS2] = anon_sym_BSLASH_PLUS,
    [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
    [anon_sym_BSLASH_PLUS_PLUS_PLUS2] = anon_sym_BSLASH_PLUS_PLUS_PLUS,
    [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
    [aux_sym_passthrough_token2] = aux_sym_passthrough_token2,
    [anon_sym_BSLASH_DOLLAR2] = anon_sym_BSLASH_DOLLAR,
    [anon_sym_BSLASH_DOLLAR_DOLLAR2] = anon_sym_BSLASH_DOLLAR_DOLLAR,
    [anon_sym_LT_LT] = anon_sym_LT_LT,
    [aux_sym_xref_token1] = aux_sym_xref_token1,
    [anon_sym_BSLASH_COMMA] = anon_sym_BSLASH_COMMA,
    [anon_sym_BSLASH_GT] = anon_sym_BSLASH_GT,
    [aux_sym_xref_token2] = aux_sym_xref_token2,
    [anon_sym_GT_GT] = anon_sym_GT_GT,
    [anon_sym_STAR2] = anon_sym_STAR2,
    [aux_sym_emphasis_token1] = aux_sym_emphasis_token1,
    [anon_sym_BSLASH_STAR2] = anon_sym_BSLASH_STAR,
    [anon_sym_STAR3] = anon_sym_STAR3,
    [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
    [anon_sym__2] = anon_sym__2,
    [aux_sym_ltalic_token1] = aux_sym_ltalic_token1,
    [anon_sym_BSLASH_2] = anon_sym_BSLASH_,
    [anon_sym__3] = anon_sym__3,
    [anon_sym___] = anon_sym___,
    [anon_sym_BQUOTE2] = anon_sym_BQUOTE2,
    [aux_sym_monospace_token1] = aux_sym_monospace_token1,
    [anon_sym_BSLASH_BQUOTE2] = anon_sym_BSLASH_BQUOTE,
    [anon_sym_BQUOTE3] = anon_sym_BQUOTE3,
    [anon_sym_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE,
    [anon_sym_POUND2] = anon_sym_POUND2,
    [aux_sym_highlight_token1] = aux_sym_highlight_token1,
    [anon_sym_BSLASH_POUND2] = anon_sym_BSLASH_POUND,
    [anon_sym_POUND3] = anon_sym_POUND3,
    [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
    [sym__eof] = sym__eof,
    [sym_inline] = sym_inline,
    [sym_inline_macro] = sym_inline_macro,
    [sym_replacement] = sym_replacement,
    [sym__word] = sym__word,
    [sym_escaped_ch] = sym_escaped_ch,
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
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASH_PLUS] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASH_BQUOTE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASH_STAR] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASH_STAR_STAR] = {
        .visible = true,
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
    [anon_sym_BSLASH_POUND] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASH_POUND_POUND] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASH_] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASH__] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASH_LT_LT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASH_LBRACK_LBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASH_LBRACK2] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASHkbd] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASHbtn] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASHimage] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASHaudio] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASHvideo] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASHicon] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASHpass] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASHlink] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASHmailto] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASHmenu] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASHlatexmath] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASHasciimath] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASHfootnote] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASHfootnoteref] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASHanchor] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASHxref] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASHifdef] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASHifndef] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASHifeval] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASHendif] = {
        .visible = true,
        .named = false,
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
    [anon_sym_BSLASH_PLUS2] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_PLUS_PLUS_PLUS] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASH_PLUS_PLUS_PLUS2] = {
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
    [anon_sym_BSLASH_DOLLAR2] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BSLASH_DOLLAR_DOLLAR2] = {
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
    [anon_sym_BSLASH_STAR2] = {
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
    [anon_sym_BSLASH_2] = {
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
    [anon_sym_BSLASH_BQUOTE2] = {
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
    [anon_sym_BSLASH_POUND2] = {
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
    [sym_escaped_ch] = {
        .visible = true,
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
    [38] = 38,
    [39] = 36,
    [40] = 40,
    [41] = 41,
    [42] = 37,
    [43] = 41,
    [44] = 38,
    [45] = 21,
    [46] = 46,
    [47] = 18,
    [48] = 28,
    [49] = 26,
    [50] = 19,
    [51] = 51,
    [52] = 52,
    [53] = 53,
    [54] = 54,
    [55] = 55,
    [56] = 53,
    [57] = 57,
    [58] = 58,
    [59] = 59,
    [60] = 60,
    [61] = 61,
    [62] = 58,
    [63] = 57,
    [64] = 55,
    [65] = 59,
    [66] = 60,
    [67] = 61,
    [68] = 54,
    [69] = 27,
    [70] = 31,
    [71] = 34,
    [72] = 32,
    [73] = 31,
    [74] = 33,
    [75] = 11,
    [76] = 11,
    [77] = 32,
    [78] = 35,
    [79] = 10,
    [80] = 27,
    [81] = 81,
    [82] = 82,
    [83] = 83,
    [84] = 84,
    [85] = 85,
    [86] = 86,
    [87] = 87,
    [88] = 88,
    [89] = 85,
    [90] = 90,
    [91] = 88,
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
    [106] = 18,
    [107] = 6,
    [108] = 99,
    [109] = 100,
    [110] = 110,
    [111] = 111,
    [112] = 112,
    [113] = 8,
    [114] = 114,
    [115] = 115,
    [116] = 116,
    [117] = 9,
    [118] = 118,
    [119] = 119,
    [120] = 102,
    [121] = 18,
    [122] = 103,
    [123] = 104,
    [124] = 112,
    [125] = 102,
    [126] = 126,
    [127] = 103,
    [128] = 104,
    [129] = 112,
    [130] = 111,
    [131] = 110,
    [132] = 99,
    [133] = 111,
    [134] = 110,
    [135] = 100,
    [136] = 136,
    [137] = 137,
    [138] = 15,
    [139] = 139,
    [140] = 140,
    [141] = 141,
    [142] = 142,
    [143] = 142,
    [144] = 144,
    [145] = 145,
    [146] = 146,
    [147] = 147,
    [148] = 144,
    [149] = 149,
    [150] = 150,
    [151] = 151,
    [152] = 152,
    [153] = 153,
    [154] = 142,
    [155] = 155,
    [156] = 146,
    [157] = 142,
    [158] = 158,
    [159] = 158,
    [160] = 145,
    [161] = 161,
    [162] = 145,
    [163] = 153,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(217);
            ADVANCE_MAP(
                '\t', 720,
                ' ', 721,
                '!', 638,
                '"', 641,
                '#', 643,
                '$', 645,
                '%', 647,
                '&', 649,
                '\'', 651,
                '(', 653,
                ')', 655,
                '*', 657,
                '+', 660,
                ',', 662,
                '-', 664,
                '.', 666,
                '/', 668,
                ':', 278,
                ';', 672,
                '<', 674,
                '=', 676,
                '>', 678,
                '?', 680,
                '@', 682,
                '[', 284,
                '\\', 684,
                ']', 302,
                '^', 686,
                '_', 688,
                '`', 692,
                'a', 566,
                'b', 586,
                'e', 572,
                'f', 553,
                'h', 589,
                'i', 527,
                'k', 524,
                'l', 521,
                'm', 519,
                'p', 517,
                'v', 557,
                'x', 582,
                '{', 305,
                '|', 694,
                '}', 514,
                '~', 696,
            );
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(214);
            if(lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(515);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(600);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
            if(lookahead != 0)
                ADVANCE(599);
            END_STATE();
        case 1:
            ADVANCE_MAP(
                ' ', 2,
                '!', 638,
                '"', 641,
                '#', 643,
                '$', 645,
                '%', 647,
                '&', 649,
                '\'', 651,
                '(', 653,
                ')', 655,
                '*', 657,
                '+', 660,
                ',', 662,
                '-', 664,
                '.', 666,
                '/', 668,
                ':', 670,
                ';', 672,
                '<', 674,
                '=', 676,
                '>', 678,
                '?', 680,
                '@', 682,
                '[', 284,
                '\\', 684,
                ']', 302,
                '^', 686,
                '_', 688,
                '`', 692,
                'a', 566,
                'b', 586,
                'e', 572,
                'f', 553,
                'h', 589,
                'i', 527,
                'k', 524,
                'l', 521,
                'm', 519,
                'p', 517,
                'v', 557,
                'x', 582,
                '{', 305,
                '|', 694,
                '}', 514,
                '~', 696,
                0x0b, 516,
                '\f', 516,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(1);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(600);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
            if(lookahead != 0)
                ADVANCE(599);
            END_STATE();
        case 2:
            ADVANCE_MAP(
                ' ', 2,
                '!', 638,
                '"', 641,
                '#', 788,
                '$', 645,
                '%', 647,
                '&', 649,
                '\'', 651,
                '(', 653,
                ')', 655,
                '*', 751,
                '+', 660,
                ',', 662,
                '-', 664,
                '.', 666,
                '/', 668,
                ':', 670,
                ';', 672,
                '<', 674,
                '=', 676,
                '>', 678,
                '?', 680,
                '@', 682,
                '[', 284,
                '\\', 684,
                ']', 302,
                '^', 686,
                '_', 764,
                '`', 779,
                'a', 566,
                'b', 586,
                'e', 572,
                'f', 553,
                'h', 589,
                'i', 527,
                'k', 524,
                'l', 521,
                'm', 519,
                'p', 517,
                'v', 557,
                'x', 582,
                '{', 305,
                '|', 694,
                '}', 514,
                '~', 696,
                0x0b, 516,
                '\f', 516,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(1);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(600);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
            if(lookahead != 0)
                ADVANCE(599);
            END_STATE();
        case 3:
            if(lookahead == ' ')
                ADVANCE(766);
            if(lookahead == '#')
                ADVANCE(768);
            if(lookahead == '*')
                ADVANCE(769);
            if(lookahead == '\\')
                ADVANCE(770);
            if(lookahead == '_')
                ADVANCE(4);
            if(lookahead == '`')
                ADVANCE(771);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(3);
            if(('\t' <= lookahead && lookahead <= '\f'))
                ADVANCE(767);
            if(lookahead != 0)
                ADVANCE(765);
            END_STATE();
        case 4:
            if(lookahead == ' ')
                ADVANCE(773);
            if(lookahead == '_')
                ADVANCE(774);
            END_STATE();
        case 5:
            if(lookahead == ' ')
                ADVANCE(753);
            if(lookahead == '#')
                ADVANCE(755);
            if(lookahead == '*')
                ADVANCE(6);
            if(lookahead == '\\')
                ADVANCE(756);
            if(lookahead == '_')
                ADVANCE(757);
            if(lookahead == '`')
                ADVANCE(758);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(5);
            if(('\t' <= lookahead && lookahead <= '\f'))
                ADVANCE(754);
            if(lookahead != 0)
                ADVANCE(752);
            END_STATE();
        case 6:
            if(lookahead == ' ')
                ADVANCE(760);
            if(lookahead == '*')
                ADVANCE(761);
            END_STATE();
        case 7:
            if(lookahead == ' ')
                ADVANCE(793);
            if(lookahead == '#')
                ADVANCE(794);
            END_STATE();
        case 8:
            if(lookahead == ' ')
                ADVANCE(784);
            if(lookahead == '`')
                ADVANCE(785);
            END_STATE();
        case 9:
            if(lookahead == '"')
                ADVANCE(60);
            if(lookahead == '\\')
                ADVANCE(213);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(9);
            END_STATE();
        case 10:
            if(lookahead == '"')
                ADVANCE(640);
            if(lookahead == ',')
                ADVANCE(662);
            if(lookahead == '.')
                ADVANCE(666);
            if(lookahead == ':')
                ADVANCE(278);
            if(lookahead == '[')
                ADVANCE(283);
            if(lookahead == ']')
                ADVANCE(70);
            if(lookahead == '}')
                ADVANCE(513);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(11);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(700);
            END_STATE();
        case 11:
            if(lookahead == '"')
                ADVANCE(640);
            if(lookahead == ',')
                ADVANCE(662);
            if(lookahead == '.')
                ADVANCE(666);
            if(lookahead == '[')
                ADVANCE(283);
            if(lookahead == ']')
                ADVANCE(70);
            if(lookahead == '}')
                ADVANCE(513);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(11);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(700);
            END_STATE();
        case 12:
            if(lookahead == '#')
                ADVANCE(7);
            if(lookahead == '\\')
                ADVANCE(790);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(12);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(791);
            if(lookahead != 0)
                ADVANCE(789);
            END_STATE();
        case 13:
            if(lookahead == '$')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(736);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(13);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(737);
            if(lookahead != 0)
                ADVANCE(735);
            END_STATE();
        case 14:
            if(lookahead == '$')
                ADVANCE(732);
            END_STATE();
        case 15:
            if(lookahead == '+')
                ADVANCE(729);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            END_STATE();
        case 16:
            if(lookahead == '+')
                ADVANCE(601);
            END_STATE();
        case 17:
            if(lookahead == '+')
                ADVANCE(728);
            END_STATE();
        case 18:
            if(lookahead == '+')
                ADVANCE(731);
            END_STATE();
        case 19:
            if(lookahead == '+')
                ADVANCE(659);
            if(lookahead == '\\')
                ADVANCE(723);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(19);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(725);
            if(lookahead != 0)
                ADVANCE(719);
            END_STATE();
        case 20:
            if(lookahead == '+')
                ADVANCE(21);
            if(lookahead == '\\')
                ADVANCE(722);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(20);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(724);
            if(lookahead != 0)
                ADVANCE(719);
            END_STATE();
        case 21:
            if(lookahead == '+')
                ADVANCE(17);
            END_STATE();
        case 22:
            if(lookahead == ',')
                ADVANCE(662);
            if(lookahead == '>')
                ADVANCE(59);
            if(lookahead == '\\')
                ADVANCE(743);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(744);
            if(lookahead != 0)
                ADVANCE(742);
            END_STATE();
        case 23:
            if(lookahead == '-')
                ADVANCE(24);
            if(lookahead == '.')
                ADVANCE(211);
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
                ADVANCE(705);
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
                ADVANCE(65);
            if(lookahead == ']')
                ADVANCE(704);
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
                ADVANCE(65);
            if(lookahead == ']')
                ADVANCE(704);
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
                ADVANCE(65);
            if(lookahead == ']')
                ADVANCE(704);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(31);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(32);
            END_STATE();
        case 30:
            if(lookahead == '-')
                ADVANCE(33);
            if(lookahead == ':')
                ADVANCE(65);
            if(lookahead == ']')
                ADVANCE(704);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(29);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(32);
            END_STATE();
        case 31:
            if(lookahead == '-')
                ADVANCE(33);
            if(lookahead == ':')
                ADVANCE(65);
            if(lookahead == ']')
                ADVANCE(704);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(32);
            END_STATE();
        case 32:
            if(lookahead == '-')
                ADVANCE(33);
            if(lookahead == ':')
                ADVANCE(65);
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
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 35:
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
                ADVANCE(717);
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
            if(lookahead == ':')
                ADVANCE(52);
            if(lookahead == ']')
                ADVANCE(302);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(56);
            END_STATE();
        case 57:
            if(lookahead == '<')
                ADVANCE(614);
            END_STATE();
        case 58:
            if(lookahead == '>')
                ADVANCE(59);
            if(lookahead == '\\')
                ADVANCE(748);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(749);
            if(lookahead != 0)
                ADVANCE(747);
            END_STATE();
        case 59:
            if(lookahead == '>')
                ADVANCE(750);
            END_STATE();
        case 60:
            if(lookahead == '@')
                ADVANCE(61);
            END_STATE();
        case 61:
            if(lookahead == '[')
                ADVANCE(53);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            END_STATE();
        case 62:
            if(lookahead == '[')
                ADVANCE(283);
            if(lookahead == '\\')
                ADVANCE(280);
            if(lookahead == '{')
                ADVANCE(304);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(281);
            if(lookahead != 0)
                ADVANCE(279);
            END_STATE();
        case 63:
            if(lookahead == '\\')
                ADVANCE(64);
            if(lookahead == ']')
                ADVANCE(706);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(63);
            END_STATE();
        case 64:
            if(lookahead == '\\')
                ADVANCE(64);
            if(lookahead == ']')
                ADVANCE(706);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(63);
            END_STATE();
        case 65:
            if(lookahead == '\\')
                ADVANCE(64);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(63);
            END_STATE();
        case 66:
            if(lookahead == '\\')
                ADVANCE(508);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(505);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 67:
            ADVANCE_MAP(
                '\\', 289,
                ']', 302,
                'a', 297,
                'b', 300,
                'e', 296,
                'f', 298,
                'i', 294,
                'k', 293,
                'l', 292,
                'm', 291,
                'p', 290,
                'v', 295,
                'x', 299,
                '{', 304,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(287);
            if(lookahead != 0)
                ADVANCE(286);
            END_STATE();
        case 68:
            if(lookahead == '\\')
                ADVANCE(289);
            if(lookahead == ']')
                ADVANCE(302);
            if(lookahead == '{')
                ADVANCE(304);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(288);
            if(lookahead != 0)
                ADVANCE(286);
            END_STATE();
        case 69:
            if(lookahead == '\\')
                ADVANCE(782);
            if(lookahead == '`')
                ADVANCE(8);
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(69);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(781);
            if(lookahead != 0)
                ADVANCE(780);
            END_STATE();
        case 70:
            if(lookahead == ']')
                ADVANCE(703);
            END_STATE();
        case 71:
            if(lookahead == '_')
                ADVANCE(71);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(599);
            END_STATE();
        case 72:
            if(lookahead == 'a')
                ADVANCE(188);
            END_STATE();
        case 73:
            if(lookahead == 'a')
                ADVANCE(127);
            END_STATE();
        case 74:
            if(lookahead == 'a')
                ADVANCE(191);
            if(lookahead == 'i')
                ADVANCE(158);
            END_STATE();
        case 75:
            if(lookahead == 'a')
                ADVANCE(135);
            if(lookahead == 'e')
                ADVANCE(159);
            END_STATE();
        case 76:
            if(lookahead == 'a')
                ADVANCE(148);
            END_STATE();
        case 77:
            if(lookahead == 'a')
                ADVANCE(149);
            END_STATE();
        case 78:
            if(lookahead == 'a')
                ADVANCE(192);
            END_STATE();
        case 79:
            if(lookahead == 'a')
                ADVANCE(193);
            END_STATE();
        case 80:
            if(lookahead == 'a')
                ADVANCE(194);
            END_STATE();
        case 81:
            if(lookahead == 'a')
                ADVANCE(196);
            END_STATE();
        case 82:
            if(lookahead == 'a')
                ADVANCE(128);
            END_STATE();
        case 83:
            if(lookahead == 'b')
                ADVANCE(89);
            END_STATE();
        case 84:
            if(lookahead == 'c')
                ADVANCE(133);
            END_STATE();
        case 85:
            if(lookahead == 'c')
                ADVANCE(177);
            if(lookahead == 'f')
                ADVANCE(95);
            if(lookahead == 'm')
                ADVANCE(73);
            END_STATE();
        case 86:
            if(lookahead == 'c')
                ADVANCE(140);
            END_STATE();
        case 87:
            if(lookahead == 'c')
                ADVANCE(134);
            END_STATE();
        case 88:
            if(lookahead == 'c')
                ADVANCE(143);
            END_STATE();
        case 89:
            if(lookahead == 'd')
                ADVANCE(617);
            END_STATE();
        case 90:
            if(lookahead == 'd')
                ADVANCE(218);
            END_STATE();
        case 91:
            if(lookahead == 'd')
                ADVANCE(110);
            END_STATE();
        case 92:
            if(lookahead == 'd')
                ADVANCE(139);
            END_STATE();
        case 93:
            if(lookahead == 'd')
                ADVANCE(137);
            END_STATE();
        case 94:
            if(lookahead == 'd')
                ADVANCE(141);
            END_STATE();
        case 95:
            if(lookahead == 'd')
                ADVANCE(107);
            if(lookahead == 'e')
                ADVANCE(205);
            if(lookahead == 'n')
                ADVANCE(98);
            END_STATE();
        case 96:
            if(lookahead == 'd')
                ADVANCE(115);
            END_STATE();
        case 97:
            if(lookahead == 'd')
                ADVANCE(142);
            END_STATE();
        case 98:
            if(lookahead == 'd')
                ADVANCE(108);
            END_STATE();
        case 99:
            if(lookahead == 'd')
                ADVANCE(112);
            if(lookahead == 'e')
                ADVANCE(206);
            if(lookahead == 'n')
                ADVANCE(100);
            END_STATE();
        case 100:
            if(lookahead == 'd')
                ADVANCE(113);
            END_STATE();
        case 101:
            if(lookahead == 'e')
                ADVANCE(117);
            END_STATE();
        case 102:
            if(lookahead == 'e')
                ADVANCE(207);
            END_STATE();
        case 103:
            if(lookahead == 'e')
                ADVANCE(619);
            END_STATE();
        case 104:
            if(lookahead == 'e')
                ADVANCE(629);
            END_STATE();
        case 105:
            if(lookahead == 'e')
                ADVANCE(224);
            END_STATE();
        case 106:
            if(lookahead == 'e')
                ADVANCE(256);
            END_STATE();
        case 107:
            if(lookahead == 'e')
                ADVANCE(119);
            END_STATE();
        case 108:
            if(lookahead == 'e')
                ADVANCE(120);
            END_STATE();
        case 109:
            if(lookahead == 'e')
                ADVANCE(121);
            END_STATE();
        case 110:
            if(lookahead == 'e')
                ADVANCE(169);
            END_STATE();
        case 111:
            if(lookahead == 'e')
                ADVANCE(122);
            END_STATE();
        case 112:
            if(lookahead == 'e')
                ADVANCE(124);
            END_STATE();
        case 113:
            if(lookahead == 'e')
                ADVANCE(125);
            END_STATE();
        case 114:
            if(lookahead == 'e')
                ADVANCE(126);
            END_STATE();
        case 115:
            if(lookahead == 'e')
                ADVANCE(172);
            END_STATE();
        case 116:
            if(lookahead == 'e')
                ADVANCE(208);
            END_STATE();
        case 117:
            if(lookahead == 'f')
                ADVANCE(633);
            END_STATE();
        case 118:
            if(lookahead == 'f')
                ADVANCE(637);
            END_STATE();
        case 119:
            if(lookahead == 'f')
                ADVANCE(634);
            END_STATE();
        case 120:
            if(lookahead == 'f')
                ADVANCE(635);
            END_STATE();
        case 121:
            if(lookahead == 'f')
                ADVANCE(631);
            END_STATE();
        case 122:
            if(lookahead == 'f')
                ADVANCE(263);
            END_STATE();
        case 123:
            if(lookahead == 'f')
                ADVANCE(275);
            END_STATE();
        case 124:
            if(lookahead == 'f')
                ADVANCE(266);
            END_STATE();
        case 125:
            if(lookahead == 'f')
                ADVANCE(269);
            END_STATE();
        case 126:
            if(lookahead == 'f')
                ADVANCE(257);
            END_STATE();
        case 127:
            if(lookahead == 'g')
                ADVANCE(103);
            END_STATE();
        case 128:
            if(lookahead == 'g')
                ADVANCE(105);
            END_STATE();
        case 129:
            if(lookahead == 'h')
                ADVANCE(628);
            END_STATE();
        case 130:
            if(lookahead == 'h')
                ADVANCE(627);
            END_STATE();
        case 131:
            if(lookahead == 'h')
                ADVANCE(251);
            END_STATE();
        case 132:
            if(lookahead == 'h')
                ADVANCE(248);
            END_STATE();
        case 133:
            if(lookahead == 'h')
                ADVANCE(175);
            END_STATE();
        case 134:
            if(lookahead == 'h')
                ADVANCE(176);
            END_STATE();
        case 135:
            if(lookahead == 'i')
                ADVANCE(150);
            END_STATE();
        case 136:
            if(lookahead == 'i')
                ADVANCE(152);
            END_STATE();
        case 137:
            if(lookahead == 'i')
                ADVANCE(118);
            END_STATE();
        case 138:
            if(lookahead == 'i')
                ADVANCE(91);
            END_STATE();
        case 139:
            if(lookahead == 'i')
                ADVANCE(168);
            END_STATE();
        case 140:
            if(lookahead == 'i')
                ADVANCE(136);
            END_STATE();
        case 141:
            if(lookahead == 'i')
                ADVANCE(123);
            END_STATE();
        case 142:
            if(lookahead == 'i')
                ADVANCE(171);
            END_STATE();
        case 143:
            if(lookahead == 'i')
                ADVANCE(144);
            END_STATE();
        case 144:
            if(lookahead == 'i')
                ADVANCE(154);
            END_STATE();
        case 145:
            if(lookahead == 'i')
                ADVANCE(151);
            END_STATE();
        case 146:
            if(lookahead == 'k')
                ADVANCE(624);
            END_STATE();
        case 147:
            if(lookahead == 'k')
                ADVANCE(239);
            END_STATE();
        case 148:
            if(lookahead == 'l')
                ADVANCE(636);
            END_STATE();
        case 149:
            if(lookahead == 'l')
                ADVANCE(272);
            END_STATE();
        case 150:
            if(lookahead == 'l')
                ADVANCE(199);
            END_STATE();
        case 151:
            if(lookahead == 'l')
                ADVANCE(200);
            END_STATE();
        case 152:
            if(lookahead == 'm')
                ADVANCE(78);
            END_STATE();
        case 153:
            if(lookahead == 'm')
                ADVANCE(79);
            END_STATE();
        case 154:
            if(lookahead == 'm')
                ADVANCE(80);
            END_STATE();
        case 155:
            if(lookahead == 'm')
                ADVANCE(81);
            END_STATE();
        case 156:
            if(lookahead == 'n')
                ADVANCE(84);
            if(lookahead == 's')
                ADVANCE(86);
            if(lookahead == 'u')
                ADVANCE(92);
            END_STATE();
        case 157:
            if(lookahead == 'n')
                ADVANCE(618);
            END_STATE();
        case 158:
            if(lookahead == 'n')
                ADVANCE(146);
            END_STATE();
        case 159:
            if(lookahead == 'n')
                ADVANCE(203);
            END_STATE();
        case 160:
            if(lookahead == 'n')
                ADVANCE(622);
            END_STATE();
        case 161:
            if(lookahead == 'n')
                ADVANCE(221);
            END_STATE();
        case 162:
            if(lookahead == 'n')
                ADVANCE(233);
            END_STATE();
        case 163:
            if(lookahead == 'n')
                ADVANCE(147);
            END_STATE();
        case 164:
            if(lookahead == 'n')
                ADVANCE(204);
            END_STATE();
        case 165:
            if(lookahead == 'n')
                ADVANCE(180);
            END_STATE();
        case 166:
            if(lookahead == 'n')
                ADVANCE(93);
            END_STATE();
        case 167:
            if(lookahead == 'n')
                ADVANCE(181);
            END_STATE();
        case 168:
            if(lookahead == 'o')
                ADVANCE(620);
            END_STATE();
        case 169:
            if(lookahead == 'o')
                ADVANCE(621);
            END_STATE();
        case 170:
            if(lookahead == 'o')
                ADVANCE(625);
            END_STATE();
        case 171:
            if(lookahead == 'o')
                ADVANCE(227);
            END_STATE();
        case 172:
            if(lookahead == 'o')
                ADVANCE(230);
            END_STATE();
        case 173:
            if(lookahead == 'o')
                ADVANCE(242);
            END_STATE();
        case 174:
            if(lookahead == 'o')
                ADVANCE(179);
            END_STATE();
        case 175:
            if(lookahead == 'o')
                ADVANCE(184);
            END_STATE();
        case 176:
            if(lookahead == 'o')
                ADVANCE(185);
            END_STATE();
        case 177:
            if(lookahead == 'o')
                ADVANCE(160);
            END_STATE();
        case 178:
            if(lookahead == 'o')
                ADVANCE(162);
            END_STATE();
        case 179:
            if(lookahead == 'o')
                ADVANCE(197);
            END_STATE();
        case 180:
            if(lookahead == 'o')
                ADVANCE(195);
            END_STATE();
        case 181:
            if(lookahead == 'o')
                ADVANCE(198);
            END_STATE();
        case 182:
            if(lookahead == 'o')
                ADVANCE(202);
            END_STATE();
        case 183:
            if(lookahead == 'r')
                ADVANCE(101);
            END_STATE();
        case 184:
            if(lookahead == 'r')
                ADVANCE(632);
            END_STATE();
        case 185:
            if(lookahead == 'r')
                ADVANCE(260);
            END_STATE();
        case 186:
            if(lookahead == 's')
                ADVANCE(623);
            END_STATE();
        case 187:
            if(lookahead == 's')
                ADVANCE(236);
            END_STATE();
        case 188:
            if(lookahead == 's')
                ADVANCE(186);
            END_STATE();
        case 189:
            if(lookahead == 's')
                ADVANCE(187);
            END_STATE();
        case 190:
            if(lookahead == 't')
                ADVANCE(157);
            END_STATE();
        case 191:
            if(lookahead == 't')
                ADVANCE(102);
            END_STATE();
        case 192:
            if(lookahead == 't')
                ADVANCE(129);
            END_STATE();
        case 193:
            if(lookahead == 't')
                ADVANCE(130);
            END_STATE();
        case 194:
            if(lookahead == 't')
                ADVANCE(131);
            END_STATE();
        case 195:
            if(lookahead == 't')
                ADVANCE(104);
            END_STATE();
        case 196:
            if(lookahead == 't')
                ADVANCE(132);
            END_STATE();
        case 197:
            if(lookahead == 't')
                ADVANCE(165);
            END_STATE();
        case 198:
            if(lookahead == 't')
                ADVANCE(106);
            END_STATE();
        case 199:
            if(lookahead == 't')
                ADVANCE(170);
            END_STATE();
        case 200:
            if(lookahead == 't')
                ADVANCE(173);
            END_STATE();
        case 201:
            if(lookahead == 't')
                ADVANCE(116);
            END_STATE();
        case 202:
            if(lookahead == 't')
                ADVANCE(167);
            END_STATE();
        case 203:
            if(lookahead == 'u')
                ADVANCE(626);
            END_STATE();
        case 204:
            if(lookahead == 'u')
                ADVANCE(245);
            END_STATE();
        case 205:
            if(lookahead == 'v')
                ADVANCE(76);
            END_STATE();
        case 206:
            if(lookahead == 'v')
                ADVANCE(77);
            END_STATE();
        case 207:
            if(lookahead == 'x')
                ADVANCE(153);
            END_STATE();
        case 208:
            if(lookahead == 'x')
                ADVANCE(155);
            END_STATE();
        case 209:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(209);
            if(lookahead != 0 &&
               lookahead != '.' &&
               lookahead != '>' &&
               lookahead != '[')
                ADVANCE(718);
            END_STATE();
        case 210:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(701);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(702);
            END_STATE();
        case 211:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(705);
            END_STATE();
        case 212:
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
        case 213:
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(9);
            END_STATE();
        case 214:
            if(eof)
                ADVANCE(217);
            ADVANCE_MAP(
                '\t', 720,
                ' ', 721,
                '!', 638,
                '"', 641,
                '#', 643,
                '$', 645,
                '%', 647,
                '&', 649,
                '\'', 651,
                '(', 653,
                ')', 655,
                '*', 657,
                '+', 660,
                ',', 662,
                '-', 664,
                '.', 666,
                '/', 668,
                ':', 670,
                ';', 672,
                '<', 674,
                '=', 676,
                '>', 678,
                '?', 680,
                '@', 682,
                '[', 284,
                '\\', 684,
                ']', 302,
                '^', 686,
                '_', 688,
                '`', 692,
                'a', 566,
                'b', 586,
                'e', 572,
                'f', 553,
                'h', 589,
                'i', 527,
                'k', 524,
                'l', 521,
                'm', 519,
                'p', 517,
                'v', 557,
                'x', 582,
                '{', 305,
                '|', 694,
                '}', 514,
                '~', 696,
            );
            if(lookahead == '\n' ||
               lookahead == '\r')
                SKIP(214);
            if(lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(515);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(600);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
            if(lookahead != 0)
                ADVANCE(599);
            END_STATE();
        case 215:
            if(eof)
                ADVANCE(217);
            ADVANCE_MAP(
                ' ', 2,
                '!', 638,
                '"', 641,
                '#', 643,
                '$', 645,
                '%', 647,
                '&', 649,
                '\'', 651,
                '(', 653,
                ')', 655,
                '*', 657,
                '+', 660,
                ',', 662,
                '-', 664,
                '.', 666,
                '/', 668,
                ':', 670,
                ';', 672,
                '<', 674,
                '=', 676,
                '>', 678,
                '?', 680,
                '@', 682,
                '[', 284,
                '\\', 684,
                ']', 302,
                '^', 686,
                '_', 688,
                '`', 692,
                'a', 566,
                'b', 586,
                'e', 572,
                'f', 553,
                'h', 589,
                'i', 527,
                'k', 524,
                'l', 521,
                'm', 519,
                'p', 517,
                'v', 557,
                'x', 582,
                '{', 305,
                '|', 694,
                '}', 514,
                '~', 696,
                0x0b, 516,
                '\f', 516,
            );
            if(('\t' <= lookahead && lookahead <= '\r'))
                SKIP(215);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(600);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
            if(lookahead != 0)
                ADVANCE(599);
            END_STATE();
        case 216:
            if(eof)
                ADVANCE(217);
            ADVANCE_MAP(
                ' ', 307,
                '!', 639,
                '"', 642,
                '#', 644,
                '$', 646,
                '%', 648,
                '&', 650,
                '\'', 652,
                '(', 654,
                ')', 656,
                '*', 658,
                '+', 661,
                ',', 663,
                '-', 665,
                '.', 667,
                '/', 669,
                ':', 671,
                ';', 673,
                '<', 675,
                '=', 677,
                '>', 679,
                '?', 681,
                '@', 683,
                '[', 285,
                '\\', 685,
                ']', 303,
                '^', 687,
                '_', 690,
                '`', 693,
                'a', 373,
                'b', 393,
                'e', 379,
                'f', 360,
                'h', 396,
                'i', 334,
                'k', 331,
                'l', 328,
                'm', 326,
                'p', 324,
                'v', 364,
                'x', 389,
                '{', 306,
                '|', 695,
                '}', 514,
                '~', 697,
                0x0b, 309,
                '\f', 309,
                '\t', 308,
                '\n', 308,
                '\r', 308,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(406);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 217:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 218:
            ACCEPT_TOKEN(anon_sym_kbd);
            END_STATE();
        case 219:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 220:
            ACCEPT_TOKEN(anon_sym_kbd);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 221:
            ACCEPT_TOKEN(anon_sym_btn);
            END_STATE();
        case 222:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 223:
            ACCEPT_TOKEN(anon_sym_btn);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 224:
            ACCEPT_TOKEN(anon_sym_image);
            END_STATE();
        case 225:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 226:
            ACCEPT_TOKEN(anon_sym_image);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 227:
            ACCEPT_TOKEN(anon_sym_audio);
            END_STATE();
        case 228:
            ACCEPT_TOKEN(anon_sym_audio);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 229:
            ACCEPT_TOKEN(anon_sym_audio);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 230:
            ACCEPT_TOKEN(anon_sym_video);
            END_STATE();
        case 231:
            ACCEPT_TOKEN(anon_sym_video);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 232:
            ACCEPT_TOKEN(anon_sym_video);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 233:
            ACCEPT_TOKEN(anon_sym_icon);
            END_STATE();
        case 234:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 235:
            ACCEPT_TOKEN(anon_sym_icon);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 236:
            ACCEPT_TOKEN(anon_sym_pass);
            END_STATE();
        case 237:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 238:
            ACCEPT_TOKEN(anon_sym_pass);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 239:
            ACCEPT_TOKEN(anon_sym_link);
            END_STATE();
        case 240:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 241:
            ACCEPT_TOKEN(anon_sym_link);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 242:
            ACCEPT_TOKEN(anon_sym_mailto);
            END_STATE();
        case 243:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 244:
            ACCEPT_TOKEN(anon_sym_mailto);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 245:
            ACCEPT_TOKEN(anon_sym_menu);
            END_STATE();
        case 246:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 247:
            ACCEPT_TOKEN(anon_sym_menu);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 248:
            ACCEPT_TOKEN(anon_sym_latexmath);
            END_STATE();
        case 249:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 250:
            ACCEPT_TOKEN(anon_sym_latexmath);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 251:
            ACCEPT_TOKEN(anon_sym_asciimath);
            END_STATE();
        case 252:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 253:
            ACCEPT_TOKEN(anon_sym_asciimath);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 254:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'r')
                ADVANCE(543);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 255:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'r')
                ADVANCE(350);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 256:
            ACCEPT_TOKEN(anon_sym_footnote);
            if(lookahead == 'r')
                ADVANCE(114);
            END_STATE();
        case 257:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            END_STATE();
        case 258:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 259:
            ACCEPT_TOKEN(anon_sym_footnoteref);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 260:
            ACCEPT_TOKEN(anon_sym_anchor);
            END_STATE();
        case 261:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 262:
            ACCEPT_TOKEN(anon_sym_anchor);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 263:
            ACCEPT_TOKEN(anon_sym_xref);
            END_STATE();
        case 264:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 265:
            ACCEPT_TOKEN(anon_sym_xref);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 266:
            ACCEPT_TOKEN(anon_sym_ifdef);
            END_STATE();
        case 267:
            ACCEPT_TOKEN(anon_sym_ifdef);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 268:
            ACCEPT_TOKEN(anon_sym_ifdef);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 269:
            ACCEPT_TOKEN(anon_sym_ifndef);
            END_STATE();
        case 270:
            ACCEPT_TOKEN(anon_sym_ifndef);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 271:
            ACCEPT_TOKEN(anon_sym_ifndef);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 272:
            ACCEPT_TOKEN(anon_sym_ifeval);
            END_STATE();
        case 273:
            ACCEPT_TOKEN(anon_sym_ifeval);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 274:
            ACCEPT_TOKEN(anon_sym_ifeval);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 275:
            ACCEPT_TOKEN(anon_sym_endif);
            END_STATE();
        case 276:
            ACCEPT_TOKEN(anon_sym_endif);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 277:
            ACCEPT_TOKEN(anon_sym_endif);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 278:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 279:
            ACCEPT_TOKEN(aux_sym_inline_macro_token1);
            END_STATE();
        case 280:
            ACCEPT_TOKEN(aux_sym_inline_macro_token1);
            if(lookahead == '[')
                ADVANCE(282);
            END_STATE();
        case 281:
            ACCEPT_TOKEN(aux_sym_inline_macro_token1);
            if(lookahead == '\\')
                ADVANCE(280);
            if(lookahead == '{')
                ADVANCE(304);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(281);
            if(lookahead != 0 &&
               lookahead != '[' &&
               lookahead != '\\')
                ADVANCE(279);
            END_STATE();
        case 282:
            ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
            END_STATE();
        case 283:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 284:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(698);
            END_STATE();
        case 285:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            if(lookahead == '[')
                ADVANCE(699);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 286:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            END_STATE();
        case 287:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            ADVANCE_MAP(
                '\\', 289,
                'a', 297,
                'b', 300,
                'e', 296,
                'f', 298,
                'i', 294,
                'k', 293,
                'l', 292,
                'm', 291,
                'p', 290,
                'v', 295,
                'x', 299,
                '{', 304,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(287);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(286);
            END_STATE();
        case 288:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == '\\')
                ADVANCE(289);
            if(lookahead == '{')
                ADVANCE(304);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(288);
            if(lookahead != 0 &&
               lookahead != '\\' &&
               lookahead != ']')
                ADVANCE(286);
            END_STATE();
        case 289:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == ']')
                ADVANCE(301);
            END_STATE();
        case 290:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'a')
                ADVANCE(189);
            END_STATE();
        case 291:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'a')
                ADVANCE(145);
            if(lookahead == 'e')
                ADVANCE(164);
            END_STATE();
        case 292:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'a')
                ADVANCE(201);
            if(lookahead == 'i')
                ADVANCE(163);
            END_STATE();
        case 293:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'b')
                ADVANCE(90);
            END_STATE();
        case 294:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'c')
                ADVANCE(178);
            if(lookahead == 'f')
                ADVANCE(99);
            if(lookahead == 'm')
                ADVANCE(82);
            END_STATE();
        case 295:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'i')
                ADVANCE(96);
            END_STATE();
        case 296:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'n')
                ADVANCE(94);
            END_STATE();
        case 297:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'n')
                ADVANCE(87);
            if(lookahead == 's')
                ADVANCE(88);
            if(lookahead == 'u')
                ADVANCE(97);
            END_STATE();
        case 298:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'o')
                ADVANCE(182);
            END_STATE();
        case 299:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 'r')
                ADVANCE(111);
            END_STATE();
        case 300:
            ACCEPT_TOKEN(aux_sym_inline_macro_token2);
            if(lookahead == 't')
                ADVANCE(161);
            END_STATE();
        case 301:
            ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
            END_STATE();
        case 302:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 303:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 304:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 305:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
        case 306:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 307:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 307,
                '!', 639,
                '"', 642,
                '#', 788,
                '$', 646,
                '%', 648,
                '&', 650,
                '\'', 652,
                '(', 654,
                ')', 656,
                '*', 751,
                '+', 661,
                ',', 663,
                '-', 665,
                '.', 667,
                '/', 669,
                ':', 671,
                ';', 673,
                '<', 675,
                '=', 677,
                '>', 679,
                '?', 681,
                '@', 683,
                '[', 285,
                '\\', 685,
                ']', 303,
                '^', 687,
                '_', 764,
                '`', 779,
                'a', 373,
                'b', 393,
                'e', 379,
                'f', 360,
                'h', 396,
                'i', 334,
                'k', 331,
                'l', 328,
                'm', 326,
                'p', 324,
                'v', 364,
                'x', 389,
                '{', 306,
                '|', 695,
                '~', 697,
                0x0b, 309,
                '\f', 309,
                '\t', 308,
                '\n', 308,
                '\r', 308,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(406);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(429);
            END_STATE();
        case 308:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 307,
                '!', 639,
                '"', 642,
                '#', 644,
                '$', 646,
                '%', 648,
                '&', 650,
                '\'', 652,
                '(', 654,
                ')', 656,
                '*', 658,
                '+', 661,
                ',', 663,
                '-', 665,
                '.', 667,
                '/', 669,
                ':', 671,
                ';', 673,
                '<', 675,
                '=', 677,
                '>', 679,
                '?', 681,
                '@', 683,
                '[', 285,
                '\\', 685,
                ']', 303,
                '^', 687,
                '_', 690,
                '`', 693,
                'a', 373,
                'b', 393,
                'e', 379,
                'f', 360,
                'h', 396,
                'i', 334,
                'k', 331,
                'l', 328,
                'm', 326,
                'p', 324,
                'v', 364,
                'x', 389,
                '{', 306,
                '|', 695,
                '~', 697,
                0x0b, 309,
                '\f', 309,
                '\t', 308,
                '\n', 308,
                '\r', 308,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(406);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(429);
            END_STATE();
        case 309:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                ' ', 307,
                '!', 639,
                '"', 642,
                '#', 644,
                '$', 646,
                '%', 648,
                '&', 650,
                '\'', 652,
                '(', 654,
                ')', 656,
                '*', 658,
                '+', 661,
                ',', 663,
                '-', 665,
                '.', 667,
                '/', 669,
                ':', 671,
                ';', 673,
                '<', 675,
                '=', 677,
                '>', 679,
                '?', 681,
                '@', 683,
                '[', 285,
                '\\', 685,
                ']', 303,
                '^', 687,
                '_', 691,
                '`', 693,
                'a', 373,
                'b', 393,
                'e', 379,
                'f', 360,
                'h', 396,
                'i', 334,
                'k', 331,
                'l', 328,
                'm', 326,
                'p', 324,
                'v', 364,
                'x', 389,
                '{', 306,
                '|', 695,
                '~', 697,
                0x0b, 309,
                '\f', 309,
                '\t', 308,
                '\n', 308,
                '\r', 308,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(406);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(lookahead != 0 &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(429);
            END_STATE();
        case 310:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '"')
                ADVANCE(427);
            if(lookahead == '\\')
                ADVANCE(509);
            if(lookahead == '}')
                ADVANCE(9);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(310);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 311:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '"')
                ADVANCE(427);
            if(lookahead == '\\')
                ADVANCE(509);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(310);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 312:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '+')
                ADVANCE(601);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 313:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '+')
                ADVANCE(730);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 314:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(315);
            if(lookahead == '.')
                ADVANCE(506);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(314);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 315:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(315);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(314);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 316:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(323);
            if(lookahead == '0')
                ADVANCE(321);
            if(lookahead == '1')
                ADVANCE(320);
            if(lookahead == '2')
                ADVANCE(317);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(319);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 317:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(323);
            if(lookahead == '5')
                ADVANCE(318);
            if(lookahead == ':')
                ADVANCE(512);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == ']')
                ADVANCE(507);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(321);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(319);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 318:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(323);
            if(lookahead == ':')
                ADVANCE(512);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == ']')
                ADVANCE(507);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(321);
            if(('6' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 319:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(323);
            if(lookahead == ':')
                ADVANCE(512);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == ']')
                ADVANCE(507);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(321);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 320:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(323);
            if(lookahead == ':')
                ADVANCE(512);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == ']')
                ADVANCE(507);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(319);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 321:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(323);
            if(lookahead == ':')
                ADVANCE(512);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == ']')
                ADVANCE(507);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 322:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(323);
            if(lookahead == ':')
                ADVANCE(512);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 323:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '-')
                ADVANCE(323);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 324:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'a')
                ADVANCE(392);
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
                ADVANCE(507);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 325:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'a')
                ADVANCE(356);
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
                ADVANCE(507);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 326:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'a')
                ADVANCE(362);
            if(lookahead == 'e')
                ADVANCE(376);
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
                ADVANCE(507);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 327:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'a')
                ADVANCE(368);
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
                ADVANCE(507);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 328:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'a')
                ADVANCE(397);
            if(lookahead == 'i')
                ADVANCE(375);
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
                ADVANCE(507);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 329:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'a')
                ADVANCE(395);
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
                ADVANCE(507);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 330:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'a')
                ADVANCE(398);
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
                ADVANCE(507);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 331:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'b')
                ADVANCE(336);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 332:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'c')
                ADVANCE(359);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 333:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'c')
                ADVANCE(716);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 334:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                '.', 504,
                '@', 428,
                '\\', 508,
                '_', 405,
                'c', 384,
                'f', 340,
                'm', 325,
                'r', 333,
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 335:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'c')
                ADVANCE(366);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 336:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'd')
                ADVANCE(220);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 337:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'd')
                ADVANCE(365);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 338:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'd')
                ADVANCE(349);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 339:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'd')
                ADVANCE(363);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 340:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                '.', 504,
                '@', 428,
                '\\', 508,
                '_', 405,
                'd', 347,
                'e', 403,
                'n', 341,
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 341:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'd')
                ADVANCE(348);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 342:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'e')
                ADVANCE(351);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 343:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'e')
                ADVANCE(712);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 344:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'e')
                ADVANCE(404);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 345:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'e')
                ADVANCE(226);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 346:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'e')
                ADVANCE(255);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 347:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'e')
                ADVANCE(353);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 348:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'e')
                ADVANCE(354);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 349:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'e')
                ADVANCE(381);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 350:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'e')
                ADVANCE(355);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 351:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'f')
                ADVANCE(265);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 352:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'f')
                ADVANCE(277);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 353:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'f')
                ADVANCE(268);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 354:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'f')
                ADVANCE(271);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 355:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'f')
                ADVANCE(259);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 356:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'g')
                ADVANCE(345);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 357:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'h')
                ADVANCE(253);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 358:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'h')
                ADVANCE(250);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 359:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'h')
                ADVANCE(383);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 360:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                '.', 504,
                '@', 428,
                '\\', 508,
                '_', 405,
                'i', 369,
                'o', 386,
                't', 387,
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 361:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'i')
                ADVANCE(371);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 362:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'i')
                ADVANCE(370);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 363:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'i')
                ADVANCE(352);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 364:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'i')
                ADVANCE(338);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 365:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'i')
                ADVANCE(380);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 366:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'i')
                ADVANCE(361);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 367:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'k')
                ADVANCE(241);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 368:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'l')
                ADVANCE(274);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 369:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'l')
                ADVANCE(343);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 370:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'l')
                ADVANCE(401);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 371:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'm')
                ADVANCE(329);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 372:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'm')
                ADVANCE(330);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 373:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            ADVANCE_MAP(
                '.', 504,
                '@', 428,
                '\\', 508,
                '_', 405,
                'n', 332,
                's', 335,
                'u', 337,
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 374:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'n')
                ADVANCE(223);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 375:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'n')
                ADVANCE(367);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 376:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'n')
                ADVANCE(402);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 377:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'n')
                ADVANCE(235);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 378:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'n')
                ADVANCE(385);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 379:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'n')
                ADVANCE(339);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 380:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'o')
                ADVANCE(229);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 381:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'o')
                ADVANCE(232);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 382:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'o')
                ADVANCE(244);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 383:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'o')
                ADVANCE(390);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 384:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'o')
                ADVANCE(377);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 385:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'o')
                ADVANCE(400);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 386:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'o')
                ADVANCE(399);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 387:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'p')
                ADVANCE(714);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 388:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'p')
                ADVANCE(708);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 389:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'r')
                ADVANCE(342);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 390:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'r')
                ADVANCE(262);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 391:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 's')
                ADVANCE(238);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 392:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 's')
                ADVANCE(391);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 393:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 't')
                ADVANCE(374);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 394:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 't')
                ADVANCE(388);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 395:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 't')
                ADVANCE(357);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 396:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 't')
                ADVANCE(394);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 397:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 't')
                ADVANCE(344);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 398:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 't')
                ADVANCE(358);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 399:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 't')
                ADVANCE(378);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 400:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 't')
                ADVANCE(346);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 401:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 't')
                ADVANCE(382);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 402:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'u')
                ADVANCE(247);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 403:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'v')
                ADVANCE(327);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 404:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 'x')
                ADVANCE(372);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 405:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 406:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '}')
                ADVANCE(35);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(406);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '/') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 407:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 408:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(316);
            if(lookahead == '5')
                ADVANCE(409);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(412);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(410);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 409:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(316);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(412);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 410:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(316);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(412);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 411:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(316);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(410);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 412:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(316);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 413:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(424);
            if(lookahead == '5')
                ADVANCE(414);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(417);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(415);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 414:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(424);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(417);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 415:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(424);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(417);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 416:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(424);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(415);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 417:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(424);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 418:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(425);
            if(lookahead == '5')
                ADVANCE(419);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('6' <= lookahead && lookahead <= '9'))
                ADVANCE(422);
            if(('0' <= lookahead && lookahead <= '4'))
                ADVANCE(420);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 419:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(425);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '5'))
                ADVANCE(422);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 420:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(425);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(422);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 421:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(425);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(420);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 422:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '.')
                ADVANCE(425);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 423:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(422);
            if(lookahead == '1')
                ADVANCE(421);
            if(lookahead == '2')
                ADVANCE(418);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(420);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 424:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(412);
            if(lookahead == '1')
                ADVANCE(411);
            if(lookahead == '2')
                ADVANCE(408);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(410);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 425:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '0')
                ADVANCE(417);
            if(lookahead == '1')
                ADVANCE(416);
            if(lookahead == '2')
                ADVANCE(413);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('3' <= lookahead && lookahead <= '9'))
                ADVANCE(415);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 426:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '<')
                ADVANCE(614);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 427:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 428:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '[')
                ADVANCE(423);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(314);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 429:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(429);
            if(lookahead == '\t' ||
               lookahead == '\n' ||
               lookahead == '\r' ||
               (' ' <= lookahead && lookahead <= '@') ||
               ('[' <= lookahead && lookahead <= '`') ||
               lookahead == '{' ||
               lookahead == '|' ||
               lookahead == '~')
                ADVANCE(507);
            if(lookahead != 0 &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(429);
            END_STATE();
        case 430:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'a')
                ADVANCE(493);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 431:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'a')
                ADVANCE(460);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 432:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'a')
                ADVANCE(495);
            if(lookahead == 'i')
                ADVANCE(478);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 433:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'a')
                ADVANCE(464);
            if(lookahead == 'e')
                ADVANCE(479);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 434:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'a')
                ADVANCE(471);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 435:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'a')
                ADVANCE(496);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 436:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'a')
                ADVANCE(497);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 437:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'b')
                ADVANCE(441);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 438:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'c')
                ADVANCE(463);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 439:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'c')
                ADVANCE(487);
            if(lookahead == 'f')
                ADVANCE(445);
            if(lookahead == 'm')
                ADVANCE(431);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 440:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'c')
                ADVANCE(469);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 441:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'd')
                ADVANCE(617);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 442:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'd')
                ADVANCE(454);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 443:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'd')
                ADVANCE(468);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 444:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'd')
                ADVANCE(466);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 445:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'd')
                ADVANCE(451);
            if(lookahead == 'e')
                ADVANCE(502);
            if(lookahead == 'n')
                ADVANCE(446);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 446:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'd')
                ADVANCE(452);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 447:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'e')
                ADVANCE(619);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 448:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'e')
                ADVANCE(455);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 449:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'e')
                ADVANCE(503);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 450:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'e')
                ADVANCE(630);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 451:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'e')
                ADVANCE(457);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 452:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'e')
                ADVANCE(458);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 453:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'e')
                ADVANCE(459);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'e')
                ADVANCE(483);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'f')
                ADVANCE(633);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'f')
                ADVANCE(637);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'f')
                ADVANCE(634);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'f')
                ADVANCE(635);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'f')
                ADVANCE(631);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'g')
                ADVANCE(447);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'h')
                ADVANCE(628);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'h')
                ADVANCE(627);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'h')
                ADVANCE(486);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'i')
                ADVANCE(472);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'i')
                ADVANCE(473);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'i')
                ADVANCE(456);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'i')
                ADVANCE(442);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'i')
                ADVANCE(482);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'i')
                ADVANCE(465);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'k')
                ADVANCE(624);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'l')
                ADVANCE(636);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'l')
                ADVANCE(500);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'm')
                ADVANCE(435);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'm')
                ADVANCE(436);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'n')
                ADVANCE(618);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'n')
                ADVANCE(622);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'n')
                ADVANCE(438);
            if(lookahead == 's')
                ADVANCE(440);
            if(lookahead == 'u')
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'n')
                ADVANCE(470);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'n')
                ADVANCE(501);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'n')
                ADVANCE(489);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'n')
                ADVANCE(444);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'o')
                ADVANCE(620);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'o')
                ADVANCE(621);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'o')
                ADVANCE(625);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'o')
                ADVANCE(488);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'o')
                ADVANCE(490);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'o')
                ADVANCE(476);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'o')
                ADVANCE(499);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'o')
                ADVANCE(498);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'r')
                ADVANCE(632);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'r')
                ADVANCE(448);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 's')
                ADVANCE(623);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 's')
                ADVANCE(492);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 't')
                ADVANCE(475);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 't')
                ADVANCE(449);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 't')
                ADVANCE(461);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 't')
                ADVANCE(462);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 't')
                ADVANCE(450);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 't')
                ADVANCE(480);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 't')
                ADVANCE(484);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'u')
                ADVANCE(626);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'v')
                ADVANCE(434);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == 'x')
                ADVANCE(474);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(505);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(314);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(311);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(310);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(511);
            if(lookahead == ']')
                ADVANCE(510);
            if(lookahead == '}')
                ADVANCE(63);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(510);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(511);
            if(lookahead == ']')
                ADVANCE(510);
            if((0x01 <= lookahead && lookahead <= '\t') ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x7f))
                ADVANCE(510);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(aux_sym_replacement_token1);
            if(lookahead == '\\')
                ADVANCE(511);
            if(lookahead == '}')
                ADVANCE(63);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(510);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
        case 515:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                '\t', 720,
                ' ', 721,
                '\\', 684,
                '_', 689,
                'a', 566,
                'b', 586,
                'e', 572,
                'f', 553,
                'h', 589,
                'i', 527,
                'k', 524,
                'l', 521,
                'm', 519,
                'p', 517,
                'v', 557,
                'x', 582,
                0x0b, 515,
                '\f', 515,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(599);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(sym__word_no_digit);
            ADVANCE_MAP(
                ' ', 2,
                '\\', 684,
                '_', 689,
                'a', 566,
                'b', 586,
                'e', 572,
                'f', 553,
                'h', 589,
                'i', 527,
                'k', 524,
                'l', 521,
                'm', 519,
                'p', 517,
                'v', 557,
                'x', 582,
                0x0b, 516,
                '\f', 516,
            );
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '~' < lookahead))
                ADVANCE(599);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'a')
                ADVANCE(585);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'a')
                ADVANCE(549);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'a')
                ADVANCE(555);
            if(lookahead == 'e')
                ADVANCE(569);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'a')
                ADVANCE(561);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'a')
                ADVANCE(590);
            if(lookahead == 'i')
                ADVANCE(568);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'a')
                ADVANCE(588);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'a')
                ADVANCE(591);
            if(('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'b')
                ADVANCE(529);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'c')
                ADVANCE(552);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'c')
                ADVANCE(715);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'c')
                ADVANCE(577);
            if(lookahead == 'f')
                ADVANCE(533);
            if(lookahead == 'm')
                ADVANCE(518);
            if(lookahead == 'r')
                ADVANCE(526);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'c')
                ADVANCE(559);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'd')
                ADVANCE(219);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'd')
                ADVANCE(558);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'd')
                ADVANCE(542);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'd')
                ADVANCE(556);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'd')
                ADVANCE(540);
            if(lookahead == 'e')
                ADVANCE(596);
            if(lookahead == 'n')
                ADVANCE(534);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'd')
                ADVANCE(541);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'e')
                ADVANCE(544);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'e')
                ADVANCE(711);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'e')
                ADVANCE(597);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'e')
                ADVANCE(225);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'e')
                ADVANCE(254);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'e')
                ADVANCE(546);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'e')
                ADVANCE(547);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'e')
                ADVANCE(574);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'e')
                ADVANCE(548);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'f')
                ADVANCE(264);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'f')
                ADVANCE(276);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'f')
                ADVANCE(267);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'f')
                ADVANCE(270);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'f')
                ADVANCE(258);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'g')
                ADVANCE(538);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'h')
                ADVANCE(252);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'h')
                ADVANCE(249);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'h')
                ADVANCE(576);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'i')
                ADVANCE(562);
            if(lookahead == 'o')
                ADVANCE(579);
            if(lookahead == 't')
                ADVANCE(580);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'i')
                ADVANCE(564);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'i')
                ADVANCE(563);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'i')
                ADVANCE(545);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'i')
                ADVANCE(531);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'i')
                ADVANCE(573);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'i')
                ADVANCE(554);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'k')
                ADVANCE(240);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'l')
                ADVANCE(273);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'l')
                ADVANCE(536);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'l')
                ADVANCE(594);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'm')
                ADVANCE(522);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'm')
                ADVANCE(523);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'n')
                ADVANCE(525);
            if(lookahead == 's')
                ADVANCE(528);
            if(lookahead == 'u')
                ADVANCE(530);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'n')
                ADVANCE(222);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'n')
                ADVANCE(560);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'n')
                ADVANCE(595);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'n')
                ADVANCE(234);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'n')
                ADVANCE(578);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'n')
                ADVANCE(532);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'o')
                ADVANCE(228);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'o')
                ADVANCE(231);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'o')
                ADVANCE(243);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'o')
                ADVANCE(583);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'o')
                ADVANCE(570);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'o')
                ADVANCE(593);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'o')
                ADVANCE(592);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'p')
                ADVANCE(713);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'p')
                ADVANCE(707);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'r')
                ADVANCE(535);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'r')
                ADVANCE(261);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 's')
                ADVANCE(237);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 's')
                ADVANCE(584);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 't')
                ADVANCE(567);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 't')
                ADVANCE(581);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 't')
                ADVANCE(550);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 't')
                ADVANCE(587);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 't')
                ADVANCE(537);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 't')
                ADVANCE(551);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 't')
                ADVANCE(571);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 't')
                ADVANCE(539);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 't')
                ADVANCE(575);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'u')
                ADVANCE(246);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'v')
                ADVANCE(520);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 'x')
                ADVANCE(565);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(sym__word_no_digit);
            if(lookahead == '_')
                ADVANCE(71);
            if(lookahead != 0 &&
               lookahead != '\t' &&
               lookahead != '\n' &&
               lookahead != '\r' &&
               (lookahead < ' ' || '@' < lookahead) &&
               (lookahead < '[' || '`' < lookahead) &&
               (lookahead < '{' || '~' < lookahead))
                ADVANCE(599);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(sym__digits);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(600);
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
        case 601:
            ACCEPT_TOKEN(anon_sym_BSLASH_PLUS_PLUS_PLUS);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(anon_sym_BSLASH_PLUS);
            if(lookahead == '+')
                ADVANCE(16);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(anon_sym_BSLASH_PLUS);
            if(lookahead == '+')
                ADVANCE(312);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(anon_sym_BSLASH_BQUOTE);
            if(lookahead == '`')
                ADVANCE(605);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(anon_sym_BSLASH_BQUOTE_BQUOTE);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(anon_sym_BSLASH_STAR);
            if(lookahead == '*')
                ADVANCE(607);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(anon_sym_BSLASH_STAR_STAR);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR);
            if(lookahead == '$')
                ADVANCE(609);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR_DOLLAR);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(anon_sym_BSLASH_POUND);
            if(lookahead == '#')
                ADVANCE(611);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(anon_sym_BSLASH_POUND_POUND);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(anon_sym_BSLASH_);
            if(lookahead == '_')
                ADVANCE(613);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(anon_sym_BSLASH__);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(anon_sym_BSLASH_LT_LT);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK_LBRACK);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK2);
            if(lookahead == '[')
                ADVANCE(615);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(anon_sym_BSLASHkbd);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(anon_sym_BSLASHbtn);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(anon_sym_BSLASHimage);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(anon_sym_BSLASHaudio);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym_BSLASHvideo);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(anon_sym_BSLASHicon);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(anon_sym_BSLASHpass);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(anon_sym_BSLASHlink);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(anon_sym_BSLASHmailto);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(anon_sym_BSLASHmenu);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(anon_sym_BSLASHlatexmath);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(anon_sym_BSLASHasciimath);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(anon_sym_BSLASHfootnote);
            if(lookahead == 'r')
                ADVANCE(109);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(anon_sym_BSLASHfootnote);
            if(lookahead == 'r')
                ADVANCE(453);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(anon_sym_BSLASHfootnoteref);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(anon_sym_BSLASHanchor);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(anon_sym_BSLASHxref);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(anon_sym_BSLASHifdef);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(anon_sym_BSLASHifndef);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(anon_sym_BSLASHifeval);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(anon_sym_BSLASHendif);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
        case 639:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(60);
            if(lookahead == '\\')
                ADVANCE(213);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(9);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            if(lookahead == '"')
                ADVANCE(427);
            if(lookahead == '\\')
                ADVANCE(509);
            if(lookahead == '}')
                ADVANCE(9);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(310);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(795);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
        case 644:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(796);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(733);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            if(lookahead == '$')
                ADVANCE(734);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
        case 648:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
        case 650:
            ACCEPT_TOKEN(anon_sym_AMP);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
        case 652:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '*')
                ADVANCE(762);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '*')
                ADVANCE(763);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '+' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '+')
                ADVANCE(15);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(35);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '+')
                ADVANCE(313);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '}')
                ADVANCE(35);
            if(lookahead == '!' ||
               ('#' <= lookahead && lookahead <= '\'') ||
               lookahead == '*' ||
               ('-' <= lookahead && lookahead <= '9') ||
               lookahead == '=' ||
               lookahead == '?' ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(anon_sym_COMMA);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
        case 665:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(anon_sym_DOT);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
        case 669:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(anon_sym_COLON2);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(anon_sym_COLON2);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(anon_sym_SEMI);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(740);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(741);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
        case 677:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
        case 681:
            ACCEPT_TOKEN(anon_sym_QMARK);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(anon_sym_AT);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            ADVANCE_MAP(
                '#', 610,
                '$', 608,
                '*', 606,
                '+', 602,
                '<', 57,
                '[', 616,
                '_', 612,
                '`', 604,
                'a', 156,
                'b', 190,
                'e', 166,
                'f', 174,
                'i', 85,
                'k', 83,
                'l', 74,
                'm', 75,
                'p', 72,
                'v', 138,
                'x', 183,
            );
            END_STATE();
        case 685:
            ACCEPT_TOKEN(anon_sym_BSLASH);
            ADVANCE_MAP(
                '#', 610,
                '$', 608,
                '*', 606,
                '+', 603,
                '<', 426,
                '[', 616,
                '\\', 508,
                '_', 612,
                '`', 604,
                'a', 477,
                'b', 494,
                'e', 481,
                'f', 485,
                'i', 439,
                'k', 437,
                'l', 432,
                'm', 433,
                'p', 430,
                'v', 467,
                'x', 491,
            );
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
        case 687:
            ACCEPT_TOKEN(anon_sym_CARET);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(776);
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
        case 689:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(775);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(778);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(anon_sym__);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(777);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '`')
                ADVANCE(786);
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
        case 693:
            ACCEPT_TOKEN(anon_sym_BQUOTE);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '`')
                ADVANCE(787);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
        case 695:
            ACCEPT_TOKEN(anon_sym_PIPE);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
        case 697:
            ACCEPT_TOKEN(anon_sym_TILDE);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(aux_sym_anchor_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(700);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(aux_sym_anchor_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(701);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(702);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(aux_sym_anchor_token2);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ' ||
               ('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(702);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_email);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(sym_email);
            if(lookahead == '-')
                ADVANCE(25);
            if(lookahead == '.')
                ADVANCE(211);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(705);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_email);
            if(lookahead == '\\')
                ADVANCE(64);
            if(lookahead == ']')
                ADVANCE(706);
            if((0x01 <= lookahead && lookahead <= 0x08) ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               (0x0e <= lookahead && lookahead <= 0x1f) ||
               ('!' <= lookahead && lookahead <= 0x7f))
                ADVANCE(63);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(lookahead == 's')
                ADVANCE(709);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(anon_sym_http);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
            if(lookahead == 's')
                ADVANCE(710);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(anon_sym_https);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(anon_sym_file);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(anon_sym_ftp);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(anon_sym_irc);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(sym__link_component);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != ' ' &&
               lookahead != '.' &&
               lookahead != '>' &&
               lookahead != '[')
                ADVANCE(718);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(aux_sym_passthrough_token1);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(aux_sym_passthrough_token1);
            ADVANCE_MAP(
                '\t', 720,
                ' ', 721,
                '!', 638,
                '"', 641,
                '#', 643,
                '$', 645,
                '%', 647,
                '&', 649,
                '\'', 651,
                '(', 653,
                ')', 655,
                '*', 657,
                ',', 662,
                '-', 664,
                '.', 666,
                '/', 668,
                ':', 670,
                ';', 672,
                '<', 674,
                '=', 676,
                '>', 678,
                '?', 680,
                '@', 682,
                '[', 284,
                '\\', 684,
                ']', 302,
                '^', 686,
                '_', 688,
                '`', 692,
                'a', 566,
                'b', 586,
                'e', 572,
                'f', 553,
                'h', 589,
                'i', 527,
                'k', 524,
                'l', 521,
                'm', 519,
                'p', 517,
                'v', 557,
                'x', 582,
                '{', 305,
                '|', 694,
                '}', 514,
                '~', 696,
                0x0b, 515,
                '\f', 515,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(600);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead))
                ADVANCE(599);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(aux_sym_passthrough_token1);
            ADVANCE_MAP(
                '\t', 720,
                ' ', 721,
                '!', 638,
                '"', 641,
                '#', 788,
                '$', 645,
                '%', 647,
                '&', 649,
                '\'', 651,
                '(', 653,
                ')', 655,
                '*', 751,
                ',', 662,
                '-', 664,
                '.', 666,
                '/', 668,
                ':', 670,
                ';', 672,
                '<', 674,
                '=', 676,
                '>', 678,
                '?', 680,
                '@', 682,
                '[', 284,
                '\\', 684,
                ']', 302,
                '^', 686,
                '_', 764,
                '`', 779,
                'a', 566,
                'b', 586,
                'e', 572,
                'f', 553,
                'h', 589,
                'i', 527,
                'k', 524,
                'l', 521,
                'm', 519,
                'p', 517,
                'v', 557,
                'x', 582,
                '{', 305,
                '|', 694,
                '}', 514,
                '~', 696,
                0x0b, 515,
                '\f', 515,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(600);
            if(('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               (lookahead < ' ' || '@' < lookahead))
                ADVANCE(599);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(aux_sym_passthrough_token1);
            if(lookahead == '+')
                ADVANCE(727);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(aux_sym_passthrough_token1);
            if(lookahead == '+')
                ADVANCE(726);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(aux_sym_passthrough_token1);
            if(lookahead == '\\')
                ADVANCE(722);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(724);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '+')
                ADVANCE(719);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(aux_sym_passthrough_token1);
            if(lookahead == '\\')
                ADVANCE(723);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(725);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '+')
                ADVANCE(719);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(anon_sym_BSLASH_PLUS2);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(anon_sym_BSLASH_PLUS2);
            if(lookahead == '+')
                ADVANCE(18);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
        case 730:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(anon_sym_BSLASH_PLUS_PLUS_PLUS2);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
        case 734:
            ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(aux_sym_passthrough_token2);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(aux_sym_passthrough_token2);
            if(lookahead == '$')
                ADVANCE(738);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(aux_sym_passthrough_token2);
            if(lookahead == '\\')
                ADVANCE(736);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(737);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '$')
                ADVANCE(735);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR2);
            if(lookahead == '$')
                ADVANCE(739);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR_DOLLAR2);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '}')
                ADVANCE(507);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            if(lookahead == ',')
                ADVANCE(745);
            if(lookahead == '>')
                ADVANCE(746);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(aux_sym_xref_token1);
            if(lookahead == '\\')
                ADVANCE(743);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(744);
            if(lookahead != 0 &&
               lookahead != ',' &&
               lookahead != '>')
                ADVANCE(742);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(anon_sym_BSLASH_COMMA);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(anon_sym_BSLASH_GT);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            if(lookahead == '>')
                ADVANCE(746);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(aux_sym_xref_token2);
            if(lookahead == '\\')
                ADVANCE(748);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(749);
            if(lookahead != 0 &&
               lookahead != '>')
                ADVANCE(747);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(anon_sym_STAR2);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == ' ')
                ADVANCE(753);
            if(lookahead == '#')
                ADVANCE(788);
            if(lookahead == '\\')
                ADVANCE(756);
            if(lookahead == '_')
                ADVANCE(764);
            if(lookahead == '`')
                ADVANCE(779);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(754);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(752);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == ' ')
                ADVANCE(753);
            if(lookahead == '#')
                ADVANCE(755);
            if(lookahead == '\\')
                ADVANCE(756);
            if(lookahead == '_')
                ADVANCE(757);
            if(lookahead == '`')
                ADVANCE(758);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(754);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '*')
                ADVANCE(752);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '#')
                ADVANCE(794);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '*')
                ADVANCE(759);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '_')
                ADVANCE(774);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(aux_sym_emphasis_token1);
            if(lookahead == '`')
                ADVANCE(785);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(anon_sym_BSLASH_STAR2);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(anon_sym_STAR3);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
        case 763:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(anon_sym__2);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == ' ')
                ADVANCE(766);
            if(lookahead == '#')
                ADVANCE(788);
            if(lookahead == '*')
                ADVANCE(751);
            if(lookahead == '\\')
                ADVANCE(770);
            if(lookahead == '`')
                ADVANCE(779);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(767);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_' &&
               lookahead != '`')
                ADVANCE(765);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == ' ')
                ADVANCE(766);
            if(lookahead == '#')
                ADVANCE(768);
            if(lookahead == '*')
                ADVANCE(769);
            if(lookahead == '\\')
                ADVANCE(770);
            if(lookahead == '`')
                ADVANCE(771);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f')
                ADVANCE(767);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '_' &&
               lookahead != '`')
                ADVANCE(765);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '#')
                ADVANCE(794);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '*')
                ADVANCE(761);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '_')
                ADVANCE(772);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(aux_sym_ltalic_token1);
            if(lookahead == '`')
                ADVANCE(785);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(anon_sym_BSLASH_2);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(anon_sym__3);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(anon_sym___);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '_')
                ADVANCE(34);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
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
                ADVANCE(599);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
        case 777:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
            if(lookahead == '_')
                ADVANCE(405);
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
                ADVANCE(507);
            if(('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(405);
            if(('!' <= lookahead && lookahead <= '?') ||
               ('^' <= lookahead && lookahead <= '~'))
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(429);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(anon_sym___);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(anon_sym_BQUOTE2);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '\\')
                ADVANCE(782);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(781);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '`')
                ADVANCE(780);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(aux_sym_monospace_token1);
            if(lookahead == '`')
                ADVANCE(783);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(anon_sym_BSLASH_BQUOTE2);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(anon_sym_BQUOTE3);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
        case 787:
            ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(anon_sym_POUND2);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            END_STATE();
        case 790:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '#')
                ADVANCE(792);
            END_STATE();
        case 791:
            ACCEPT_TOKEN(aux_sym_highlight_token1);
            if(lookahead == '\\')
                ADVANCE(790);
            if(lookahead == '\t' ||
               lookahead == 0x0b ||
               lookahead == '\f' ||
               lookahead == ' ')
                ADVANCE(791);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead) &&
               lookahead != '#')
                ADVANCE(789);
            END_STATE();
        case 792:
            ACCEPT_TOKEN(anon_sym_BSLASH_POUND2);
            END_STATE();
        case 793:
            ACCEPT_TOKEN(anon_sym_POUND3);
            END_STATE();
        case 794:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            END_STATE();
        case 795:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead == '.')
                ADVANCE(212);
            if(lookahead == '@')
                ADVANCE(61);
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
        case 796:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead == '.')
                ADVANCE(504);
            if(lookahead == '@')
                ADVANCE(428);
            if(lookahead == '\\')
                ADVANCE(508);
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
                ADVANCE(407);
            if(lookahead != 0)
                ADVANCE(507);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 215 },
    [2] = { .lex_state = 215 },
    [3] = { .lex_state = 215 },
    [4] = { .lex_state = 214 },
    [5] = { .lex_state = 216 },
    [6] = { .lex_state = 215 },
    [7] = { .lex_state = 215 },
    [8] = { .lex_state = 215 },
    [9] = { .lex_state = 215 },
    [10] = { .lex_state = 215 },
    [11] = { .lex_state = 215 },
    [12] = { .lex_state = 215 },
    [13] = { .lex_state = 215 },
    [14] = { .lex_state = 215 },
    [15] = { .lex_state = 215 },
    [16] = { .lex_state = 215 },
    [17] = { .lex_state = 215 },
    [18] = { .lex_state = 215 },
    [19] = { .lex_state = 215 },
    [20] = { .lex_state = 215 },
    [21] = { .lex_state = 215 },
    [22] = { .lex_state = 215 },
    [23] = { .lex_state = 215 },
    [24] = { .lex_state = 215 },
    [25] = { .lex_state = 215 },
    [26] = { .lex_state = 215 },
    [27] = { .lex_state = 215 },
    [28] = { .lex_state = 215 },
    [29] = { .lex_state = 215 },
    [30] = { .lex_state = 215 },
    [31] = { .lex_state = 215 },
    [32] = { .lex_state = 215 },
    [33] = { .lex_state = 215 },
    [34] = { .lex_state = 215 },
    [35] = { .lex_state = 215 },
    [36] = { .lex_state = 67 },
    [37] = { .lex_state = 67 },
    [38] = { .lex_state = 67 },
    [39] = { .lex_state = 67 },
    [40] = { .lex_state = 67 },
    [41] = { .lex_state = 67 },
    [42] = { .lex_state = 67 },
    [43] = { .lex_state = 67 },
    [44] = { .lex_state = 67 },
    [45] = { .lex_state = 67 },
    [46] = { .lex_state = 67 },
    [47] = { .lex_state = 67 },
    [48] = { .lex_state = 67 },
    [49] = { .lex_state = 67 },
    [50] = { .lex_state = 67 },
    [51] = { .lex_state = 3 },
    [52] = { .lex_state = 5 },
    [53] = { .lex_state = 5 },
    [54] = { .lex_state = 5 },
    [55] = { .lex_state = 5 },
    [56] = { .lex_state = 5 },
    [57] = { .lex_state = 3 },
    [58] = { .lex_state = 3 },
    [59] = { .lex_state = 3 },
    [60] = { .lex_state = 3 },
    [61] = { .lex_state = 5 },
    [62] = { .lex_state = 3 },
    [63] = { .lex_state = 3 },
    [64] = { .lex_state = 5 },
    [65] = { .lex_state = 3 },
    [66] = { .lex_state = 3 },
    [67] = { .lex_state = 5 },
    [68] = { .lex_state = 5 },
    [69] = { .lex_state = 3 },
    [70] = { .lex_state = 5 },
    [71] = { .lex_state = 5 },
    [72] = { .lex_state = 5 },
    [73] = { .lex_state = 3 },
    [74] = { .lex_state = 3 },
    [75] = { .lex_state = 5 },
    [76] = { .lex_state = 3 },
    [77] = { .lex_state = 3 },
    [78] = { .lex_state = 5 },
    [79] = { .lex_state = 3 },
    [80] = { .lex_state = 5 },
    [81] = { .lex_state = 68 },
    [82] = { .lex_state = 68 },
    [83] = { .lex_state = 62 },
    [84] = { .lex_state = 68 },
    [85] = { .lex_state = 62 },
    [86] = { .lex_state = 22 },
    [87] = { .lex_state = 22 },
    [88] = { .lex_state = 62 },
    [89] = { .lex_state = 62 },
    [90] = { .lex_state = 68 },
    [91] = { .lex_state = 62 },
    [92] = { .lex_state = 20 },
    [93] = { .lex_state = 13 },
    [94] = { .lex_state = 20 },
    [95] = { .lex_state = 12 },
    [96] = { .lex_state = 69 },
    [97] = { .lex_state = 13 },
    [98] = { .lex_state = 22 },
    [99] = { .lex_state = 69 },
    [100] = { .lex_state = 12 },
    [101] = { .lex_state = 58 },
    [102] = { .lex_state = 12 },
    [103] = { .lex_state = 12 },
    [104] = { .lex_state = 69 },
    [105] = { .lex_state = 58 },
    [106] = { .lex_state = 62 },
    [107] = { .lex_state = 10 },
    [108] = { .lex_state = 69 },
    [109] = { .lex_state = 12 },
    [110] = { .lex_state = 12 },
    [111] = { .lex_state = 69 },
    [112] = { .lex_state = 69 },
    [113] = { .lex_state = 10 },
    [114] = { .lex_state = 20 },
    [115] = { .lex_state = 19 },
    [116] = { .lex_state = 13 },
    [117] = { .lex_state = 10 },
    [118] = { .lex_state = 22 },
    [119] = { .lex_state = 62 },
    [120] = { .lex_state = 12 },
    [121] = { .lex_state = 68 },
    [122] = { .lex_state = 12 },
    [123] = { .lex_state = 69 },
    [124] = { .lex_state = 69 },
    [125] = { .lex_state = 12 },
    [126] = { .lex_state = 19 },
    [127] = { .lex_state = 12 },
    [128] = { .lex_state = 69 },
    [129] = { .lex_state = 69 },
    [130] = { .lex_state = 69 },
    [131] = { .lex_state = 12 },
    [132] = { .lex_state = 69 },
    [133] = { .lex_state = 69 },
    [134] = { .lex_state = 12 },
    [135] = { .lex_state = 12 },
    [136] = { .lex_state = 58 },
    [137] = { .lex_state = 58 },
    [138] = { .lex_state = 10 },
    [139] = { .lex_state = 10 },
    [140] = { .lex_state = 10 },
    [141] = { .lex_state = 10 },
    [142] = { .lex_state = 10 },
    [143] = { .lex_state = 10 },
    [144] = { .lex_state = 209 },
    [145] = { .lex_state = 66 },
    [146] = { .lex_state = 209 },
    [147] = { .lex_state = 210 },
    [148] = { .lex_state = 209 },
    [149] = { .lex_state = 56 },
    [150] = { .lex_state = 0 },
    [151] = { .lex_state = 56 },
    [152] = { .lex_state = 10 },
    [153] = { .lex_state = 10 },
    [154] = { .lex_state = 10 },
    [155] = { .lex_state = 10 },
    [156] = { .lex_state = 209 },
    [157] = { .lex_state = 10 },
    [158] = { .lex_state = 56 },
    [159] = { .lex_state = 56 },
    [160] = { .lex_state = 66 },
    [161] = { .lex_state = 10 },
    [162] = { .lex_state = 66 },
    [163] = { .lex_state = 10 },
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
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(1),
        [anon_sym_BSLASH_PLUS] = ACTIONS(1),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(1),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(1),
        [anon_sym_BSLASH_STAR] = ACTIONS(1),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(1),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(1),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(1),
        [anon_sym_BSLASH_POUND] = ACTIONS(1),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(1),
        [anon_sym_BSLASH_] = ACTIONS(1),
        [anon_sym_BSLASH__] = ACTIONS(1),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(1),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(1),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(1),
        [anon_sym_BSLASHkbd] = ACTIONS(1),
        [anon_sym_BSLASHbtn] = ACTIONS(1),
        [anon_sym_BSLASHimage] = ACTIONS(1),
        [anon_sym_BSLASHaudio] = ACTIONS(1),
        [anon_sym_BSLASHvideo] = ACTIONS(1),
        [anon_sym_BSLASHicon] = ACTIONS(1),
        [anon_sym_BSLASHpass] = ACTIONS(1),
        [anon_sym_BSLASHlink] = ACTIONS(1),
        [anon_sym_BSLASHmailto] = ACTIONS(1),
        [anon_sym_BSLASHmenu] = ACTIONS(1),
        [anon_sym_BSLASHlatexmath] = ACTIONS(1),
        [anon_sym_BSLASHasciimath] = ACTIONS(1),
        [anon_sym_BSLASHfootnote] = ACTIONS(1),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(1),
        [anon_sym_BSLASHanchor] = ACTIONS(1),
        [anon_sym_BSLASHxref] = ACTIONS(1),
        [anon_sym_BSLASHifdef] = ACTIONS(1),
        [anon_sym_BSLASHifndef] = ACTIONS(1),
        [anon_sym_BSLASHifeval] = ACTIONS(1),
        [anon_sym_BSLASHendif] = ACTIONS(1),
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
        [anon_sym_BSLASH_PLUS2] = ACTIONS(1),
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
        [sym_inline] = STATE(150),
        [sym_inline_macro] = STATE(2),
        [sym_replacement] = STATE(2),
        [sym__word] = STATE(2),
        [sym_escaped_ch] = STATE(2),
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
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(9),
        [anon_sym_BSLASH_PLUS] = ACTIONS(9),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(9),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(9),
        [anon_sym_BSLASH_STAR] = ACTIONS(9),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(9),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(9),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(9),
        [anon_sym_BSLASH_POUND] = ACTIONS(9),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(9),
        [anon_sym_BSLASH_] = ACTIONS(9),
        [anon_sym_BSLASH__] = ACTIONS(9),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(9),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(9),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(9),
        [anon_sym_BSLASHkbd] = ACTIONS(9),
        [anon_sym_BSLASHbtn] = ACTIONS(9),
        [anon_sym_BSLASHimage] = ACTIONS(9),
        [anon_sym_BSLASHaudio] = ACTIONS(9),
        [anon_sym_BSLASHvideo] = ACTIONS(9),
        [anon_sym_BSLASHicon] = ACTIONS(9),
        [anon_sym_BSLASHpass] = ACTIONS(9),
        [anon_sym_BSLASHlink] = ACTIONS(9),
        [anon_sym_BSLASHmailto] = ACTIONS(9),
        [anon_sym_BSLASHmenu] = ACTIONS(9),
        [anon_sym_BSLASHlatexmath] = ACTIONS(9),
        [anon_sym_BSLASHasciimath] = ACTIONS(9),
        [anon_sym_BSLASHfootnote] = ACTIONS(9),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(9),
        [anon_sym_BSLASHanchor] = ACTIONS(9),
        [anon_sym_BSLASHxref] = ACTIONS(9),
        [anon_sym_BSLASHifdef] = ACTIONS(9),
        [anon_sym_BSLASHifndef] = ACTIONS(9),
        [anon_sym_BSLASHifeval] = ACTIONS(9),
        [anon_sym_BSLASHendif] = ACTIONS(9),
        [anon_sym_BANG] = ACTIONS(5),
        [anon_sym_DQUOTE] = ACTIONS(11),
        [anon_sym_POUND] = ACTIONS(5),
        [anon_sym_DOLLAR] = ACTIONS(5),
        [anon_sym_PERCENT] = ACTIONS(5),
        [anon_sym_AMP] = ACTIONS(5),
        [anon_sym_SQUOTE] = ACTIONS(5),
        [anon_sym_LPAREN] = ACTIONS(5),
        [anon_sym_RPAREN] = ACTIONS(5),
        [anon_sym_STAR] = ACTIONS(5),
        [anon_sym_PLUS] = ACTIONS(13),
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
        [anon_sym_LBRACK_LBRACK] = ACTIONS(15),
        [sym_email] = ACTIONS(5),
        [anon_sym_http] = ACTIONS(17),
        [anon_sym_https] = ACTIONS(17),
        [anon_sym_file] = ACTIONS(17),
        [anon_sym_ftp] = ACTIONS(17),
        [anon_sym_irc] = ACTIONS(17),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(19),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(21),
        [anon_sym_LT_LT] = ACTIONS(23),
        [anon_sym_STAR2] = ACTIONS(25),
        [anon_sym_STAR_STAR] = ACTIONS(27),
        [anon_sym__2] = ACTIONS(29),
        [anon_sym___] = ACTIONS(31),
        [anon_sym_BQUOTE2] = ACTIONS(33),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(35),
        [anon_sym_POUND2] = ACTIONS(37),
        [anon_sym_POUND_POUND] = ACTIONS(39),
    },
    [2] = {
        [sym_inline_macro] = STATE(3),
        [sym_replacement] = STATE(3),
        [sym__word] = STATE(3),
        [sym_escaped_ch] = STATE(3),
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
        [ts_builtin_sym_end] = ACTIONS(41),
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
        [anon_sym_LBRACK] = ACTIONS(43),
        [anon_sym_RBRACK] = ACTIONS(43),
        [anon_sym_LBRACE] = ACTIONS(7),
        [anon_sym_RBRACE] = ACTIONS(43),
        [sym__word_no_digit] = ACTIONS(43),
        [sym__digits] = ACTIONS(43),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(9),
        [anon_sym_BSLASH_PLUS] = ACTIONS(9),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(9),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(9),
        [anon_sym_BSLASH_STAR] = ACTIONS(9),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(9),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(9),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(9),
        [anon_sym_BSLASH_POUND] = ACTIONS(9),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(9),
        [anon_sym_BSLASH_] = ACTIONS(9),
        [anon_sym_BSLASH__] = ACTIONS(9),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(9),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(9),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(9),
        [anon_sym_BSLASHkbd] = ACTIONS(9),
        [anon_sym_BSLASHbtn] = ACTIONS(9),
        [anon_sym_BSLASHimage] = ACTIONS(9),
        [anon_sym_BSLASHaudio] = ACTIONS(9),
        [anon_sym_BSLASHvideo] = ACTIONS(9),
        [anon_sym_BSLASHicon] = ACTIONS(9),
        [anon_sym_BSLASHpass] = ACTIONS(9),
        [anon_sym_BSLASHlink] = ACTIONS(9),
        [anon_sym_BSLASHmailto] = ACTIONS(9),
        [anon_sym_BSLASHmenu] = ACTIONS(9),
        [anon_sym_BSLASHlatexmath] = ACTIONS(9),
        [anon_sym_BSLASHasciimath] = ACTIONS(9),
        [anon_sym_BSLASHfootnote] = ACTIONS(9),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(9),
        [anon_sym_BSLASHanchor] = ACTIONS(9),
        [anon_sym_BSLASHxref] = ACTIONS(9),
        [anon_sym_BSLASHifdef] = ACTIONS(9),
        [anon_sym_BSLASHifndef] = ACTIONS(9),
        [anon_sym_BSLASHifeval] = ACTIONS(9),
        [anon_sym_BSLASHendif] = ACTIONS(9),
        [anon_sym_BANG] = ACTIONS(43),
        [anon_sym_DQUOTE] = ACTIONS(11),
        [anon_sym_POUND] = ACTIONS(43),
        [anon_sym_DOLLAR] = ACTIONS(43),
        [anon_sym_PERCENT] = ACTIONS(43),
        [anon_sym_AMP] = ACTIONS(43),
        [anon_sym_SQUOTE] = ACTIONS(43),
        [anon_sym_LPAREN] = ACTIONS(43),
        [anon_sym_RPAREN] = ACTIONS(43),
        [anon_sym_STAR] = ACTIONS(43),
        [anon_sym_PLUS] = ACTIONS(13),
        [anon_sym_COMMA] = ACTIONS(43),
        [anon_sym_DASH] = ACTIONS(43),
        [anon_sym_DOT] = ACTIONS(43),
        [anon_sym_SLASH] = ACTIONS(43),
        [anon_sym_COLON2] = ACTIONS(43),
        [anon_sym_SEMI] = ACTIONS(43),
        [anon_sym_LT] = ACTIONS(43),
        [anon_sym_EQ] = ACTIONS(43),
        [anon_sym_GT] = ACTIONS(43),
        [anon_sym_QMARK] = ACTIONS(43),
        [anon_sym_AT] = ACTIONS(43),
        [anon_sym_BSLASH] = ACTIONS(43),
        [anon_sym_CARET] = ACTIONS(43),
        [anon_sym__] = ACTIONS(43),
        [anon_sym_BQUOTE] = ACTIONS(43),
        [anon_sym_PIPE] = ACTIONS(43),
        [anon_sym_TILDE] = ACTIONS(43),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(15),
        [sym_email] = ACTIONS(43),
        [anon_sym_http] = ACTIONS(17),
        [anon_sym_https] = ACTIONS(17),
        [anon_sym_file] = ACTIONS(17),
        [anon_sym_ftp] = ACTIONS(17),
        [anon_sym_irc] = ACTIONS(17),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(19),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(21),
        [anon_sym_LT_LT] = ACTIONS(23),
        [anon_sym_STAR2] = ACTIONS(25),
        [anon_sym_STAR_STAR] = ACTIONS(27),
        [anon_sym__2] = ACTIONS(29),
        [anon_sym___] = ACTIONS(31),
        [anon_sym_BQUOTE2] = ACTIONS(33),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(35),
        [anon_sym_POUND2] = ACTIONS(37),
        [anon_sym_POUND_POUND] = ACTIONS(39),
    },
    [3] = {
        [sym_inline_macro] = STATE(3),
        [sym_replacement] = STATE(3),
        [sym__word] = STATE(3),
        [sym_escaped_ch] = STATE(3),
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
        [ts_builtin_sym_end] = ACTIONS(45),
        [anon_sym_kbd] = ACTIONS(47),
        [anon_sym_btn] = ACTIONS(47),
        [anon_sym_image] = ACTIONS(47),
        [anon_sym_audio] = ACTIONS(47),
        [anon_sym_video] = ACTIONS(47),
        [anon_sym_icon] = ACTIONS(47),
        [anon_sym_pass] = ACTIONS(47),
        [anon_sym_link] = ACTIONS(47),
        [anon_sym_mailto] = ACTIONS(47),
        [anon_sym_menu] = ACTIONS(47),
        [anon_sym_latexmath] = ACTIONS(47),
        [anon_sym_asciimath] = ACTIONS(47),
        [anon_sym_footnote] = ACTIONS(47),
        [anon_sym_footnoteref] = ACTIONS(47),
        [anon_sym_anchor] = ACTIONS(47),
        [anon_sym_xref] = ACTIONS(47),
        [anon_sym_ifdef] = ACTIONS(47),
        [anon_sym_ifndef] = ACTIONS(47),
        [anon_sym_ifeval] = ACTIONS(47),
        [anon_sym_endif] = ACTIONS(47),
        [anon_sym_LBRACK] = ACTIONS(50),
        [anon_sym_RBRACK] = ACTIONS(50),
        [anon_sym_LBRACE] = ACTIONS(53),
        [anon_sym_RBRACE] = ACTIONS(50),
        [sym__word_no_digit] = ACTIONS(50),
        [sym__digits] = ACTIONS(50),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(56),
        [anon_sym_BSLASH_PLUS] = ACTIONS(56),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(56),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(56),
        [anon_sym_BSLASH_STAR] = ACTIONS(56),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(56),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(56),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(56),
        [anon_sym_BSLASH_POUND] = ACTIONS(56),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(56),
        [anon_sym_BSLASH_] = ACTIONS(56),
        [anon_sym_BSLASH__] = ACTIONS(56),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(56),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(56),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(56),
        [anon_sym_BSLASHkbd] = ACTIONS(56),
        [anon_sym_BSLASHbtn] = ACTIONS(56),
        [anon_sym_BSLASHimage] = ACTIONS(56),
        [anon_sym_BSLASHaudio] = ACTIONS(56),
        [anon_sym_BSLASHvideo] = ACTIONS(56),
        [anon_sym_BSLASHicon] = ACTIONS(56),
        [anon_sym_BSLASHpass] = ACTIONS(56),
        [anon_sym_BSLASHlink] = ACTIONS(56),
        [anon_sym_BSLASHmailto] = ACTIONS(56),
        [anon_sym_BSLASHmenu] = ACTIONS(56),
        [anon_sym_BSLASHlatexmath] = ACTIONS(56),
        [anon_sym_BSLASHasciimath] = ACTIONS(56),
        [anon_sym_BSLASHfootnote] = ACTIONS(56),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(56),
        [anon_sym_BSLASHanchor] = ACTIONS(56),
        [anon_sym_BSLASHxref] = ACTIONS(56),
        [anon_sym_BSLASHifdef] = ACTIONS(56),
        [anon_sym_BSLASHifndef] = ACTIONS(56),
        [anon_sym_BSLASHifeval] = ACTIONS(56),
        [anon_sym_BSLASHendif] = ACTIONS(56),
        [anon_sym_BANG] = ACTIONS(50),
        [anon_sym_DQUOTE] = ACTIONS(59),
        [anon_sym_POUND] = ACTIONS(50),
        [anon_sym_DOLLAR] = ACTIONS(50),
        [anon_sym_PERCENT] = ACTIONS(50),
        [anon_sym_AMP] = ACTIONS(50),
        [anon_sym_SQUOTE] = ACTIONS(50),
        [anon_sym_LPAREN] = ACTIONS(50),
        [anon_sym_RPAREN] = ACTIONS(50),
        [anon_sym_STAR] = ACTIONS(50),
        [anon_sym_PLUS] = ACTIONS(62),
        [anon_sym_COMMA] = ACTIONS(50),
        [anon_sym_DASH] = ACTIONS(50),
        [anon_sym_DOT] = ACTIONS(50),
        [anon_sym_SLASH] = ACTIONS(50),
        [anon_sym_COLON2] = ACTIONS(50),
        [anon_sym_SEMI] = ACTIONS(50),
        [anon_sym_LT] = ACTIONS(50),
        [anon_sym_EQ] = ACTIONS(50),
        [anon_sym_GT] = ACTIONS(50),
        [anon_sym_QMARK] = ACTIONS(50),
        [anon_sym_AT] = ACTIONS(50),
        [anon_sym_BSLASH] = ACTIONS(50),
        [anon_sym_CARET] = ACTIONS(50),
        [anon_sym__] = ACTIONS(50),
        [anon_sym_BQUOTE] = ACTIONS(50),
        [anon_sym_PIPE] = ACTIONS(50),
        [anon_sym_TILDE] = ACTIONS(50),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(65),
        [sym_email] = ACTIONS(50),
        [anon_sym_http] = ACTIONS(68),
        [anon_sym_https] = ACTIONS(68),
        [anon_sym_file] = ACTIONS(68),
        [anon_sym_ftp] = ACTIONS(68),
        [anon_sym_irc] = ACTIONS(68),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(71),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(74),
        [anon_sym_LT_LT] = ACTIONS(77),
        [anon_sym_STAR2] = ACTIONS(80),
        [anon_sym_STAR_STAR] = ACTIONS(83),
        [anon_sym__2] = ACTIONS(86),
        [anon_sym___] = ACTIONS(89),
        [anon_sym_BQUOTE2] = ACTIONS(92),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(95),
        [anon_sym_POUND2] = ACTIONS(98),
        [anon_sym_POUND_POUND] = ACTIONS(101),
    },
    [4] = {
        [aux_sym_passthrough_repeat1] = STATE(126),
        [ts_builtin_sym_end] = ACTIONS(104),
        [anon_sym_kbd] = ACTIONS(106),
        [anon_sym_btn] = ACTIONS(106),
        [anon_sym_image] = ACTIONS(106),
        [anon_sym_audio] = ACTIONS(106),
        [anon_sym_video] = ACTIONS(106),
        [anon_sym_icon] = ACTIONS(106),
        [anon_sym_pass] = ACTIONS(106),
        [anon_sym_link] = ACTIONS(106),
        [anon_sym_mailto] = ACTIONS(106),
        [anon_sym_menu] = ACTIONS(106),
        [anon_sym_latexmath] = ACTIONS(106),
        [anon_sym_asciimath] = ACTIONS(106),
        [anon_sym_footnote] = ACTIONS(106),
        [anon_sym_footnoteref] = ACTIONS(106),
        [anon_sym_anchor] = ACTIONS(106),
        [anon_sym_xref] = ACTIONS(106),
        [anon_sym_ifdef] = ACTIONS(106),
        [anon_sym_ifndef] = ACTIONS(106),
        [anon_sym_ifeval] = ACTIONS(106),
        [anon_sym_endif] = ACTIONS(106),
        [anon_sym_LBRACK] = ACTIONS(106),
        [anon_sym_RBRACK] = ACTIONS(106),
        [anon_sym_LBRACE] = ACTIONS(106),
        [anon_sym_RBRACE] = ACTIONS(106),
        [sym__word_no_digit] = ACTIONS(106),
        [sym__digits] = ACTIONS(106),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(106),
        [anon_sym_BSLASH_PLUS] = ACTIONS(106),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(106),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(106),
        [anon_sym_BSLASH_STAR] = ACTIONS(106),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(106),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(106),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(106),
        [anon_sym_BSLASH_POUND] = ACTIONS(106),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(106),
        [anon_sym_BSLASH_] = ACTIONS(106),
        [anon_sym_BSLASH__] = ACTIONS(106),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(106),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(106),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(106),
        [anon_sym_BSLASHkbd] = ACTIONS(106),
        [anon_sym_BSLASHbtn] = ACTIONS(106),
        [anon_sym_BSLASHimage] = ACTIONS(106),
        [anon_sym_BSLASHaudio] = ACTIONS(106),
        [anon_sym_BSLASHvideo] = ACTIONS(106),
        [anon_sym_BSLASHicon] = ACTIONS(106),
        [anon_sym_BSLASHpass] = ACTIONS(106),
        [anon_sym_BSLASHlink] = ACTIONS(106),
        [anon_sym_BSLASHmailto] = ACTIONS(106),
        [anon_sym_BSLASHmenu] = ACTIONS(106),
        [anon_sym_BSLASHlatexmath] = ACTIONS(106),
        [anon_sym_BSLASHasciimath] = ACTIONS(106),
        [anon_sym_BSLASHfootnote] = ACTIONS(106),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(106),
        [anon_sym_BSLASHanchor] = ACTIONS(106),
        [anon_sym_BSLASHxref] = ACTIONS(106),
        [anon_sym_BSLASHifdef] = ACTIONS(106),
        [anon_sym_BSLASHifndef] = ACTIONS(106),
        [anon_sym_BSLASHifeval] = ACTIONS(106),
        [anon_sym_BSLASHendif] = ACTIONS(106),
        [anon_sym_BANG] = ACTIONS(106),
        [anon_sym_DQUOTE] = ACTIONS(106),
        [anon_sym_POUND] = ACTIONS(106),
        [anon_sym_DOLLAR] = ACTIONS(106),
        [anon_sym_PERCENT] = ACTIONS(106),
        [anon_sym_AMP] = ACTIONS(106),
        [anon_sym_SQUOTE] = ACTIONS(106),
        [anon_sym_LPAREN] = ACTIONS(106),
        [anon_sym_RPAREN] = ACTIONS(106),
        [anon_sym_STAR] = ACTIONS(106),
        [anon_sym_PLUS] = ACTIONS(106),
        [anon_sym_COMMA] = ACTIONS(106),
        [anon_sym_DASH] = ACTIONS(106),
        [anon_sym_DOT] = ACTIONS(106),
        [anon_sym_SLASH] = ACTIONS(106),
        [anon_sym_COLON2] = ACTIONS(106),
        [anon_sym_SEMI] = ACTIONS(106),
        [anon_sym_LT] = ACTIONS(106),
        [anon_sym_EQ] = ACTIONS(106),
        [anon_sym_GT] = ACTIONS(106),
        [anon_sym_QMARK] = ACTIONS(106),
        [anon_sym_AT] = ACTIONS(106),
        [anon_sym_BSLASH] = ACTIONS(106),
        [anon_sym_CARET] = ACTIONS(106),
        [anon_sym__] = ACTIONS(106),
        [anon_sym_BQUOTE] = ACTIONS(106),
        [anon_sym_PIPE] = ACTIONS(106),
        [anon_sym_TILDE] = ACTIONS(106),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(106),
        [sym_email] = ACTIONS(106),
        [anon_sym_http] = ACTIONS(106),
        [anon_sym_https] = ACTIONS(106),
        [anon_sym_file] = ACTIONS(106),
        [anon_sym_ftp] = ACTIONS(106),
        [anon_sym_irc] = ACTIONS(106),
        [aux_sym_passthrough_token1] = ACTIONS(108),
        [anon_sym_BSLASH_PLUS2] = ACTIONS(108),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(106),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(106),
        [anon_sym_LT_LT] = ACTIONS(106),
        [anon_sym_STAR2] = ACTIONS(106),
        [anon_sym_STAR_STAR] = ACTIONS(106),
        [anon_sym__2] = ACTIONS(106),
        [anon_sym___] = ACTIONS(106),
        [anon_sym_BQUOTE2] = ACTIONS(106),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(106),
        [anon_sym_POUND2] = ACTIONS(106),
        [anon_sym_POUND_POUND] = ACTIONS(106),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(104),
        [anon_sym_kbd] = ACTIONS(106),
        [anon_sym_btn] = ACTIONS(106),
        [anon_sym_image] = ACTIONS(106),
        [anon_sym_audio] = ACTIONS(106),
        [anon_sym_video] = ACTIONS(106),
        [anon_sym_icon] = ACTIONS(106),
        [anon_sym_pass] = ACTIONS(106),
        [anon_sym_link] = ACTIONS(106),
        [anon_sym_mailto] = ACTIONS(106),
        [anon_sym_menu] = ACTIONS(106),
        [anon_sym_latexmath] = ACTIONS(106),
        [anon_sym_asciimath] = ACTIONS(106),
        [anon_sym_footnote] = ACTIONS(106),
        [anon_sym_footnoteref] = ACTIONS(106),
        [anon_sym_anchor] = ACTIONS(106),
        [anon_sym_xref] = ACTIONS(106),
        [anon_sym_ifdef] = ACTIONS(106),
        [anon_sym_ifndef] = ACTIONS(106),
        [anon_sym_ifeval] = ACTIONS(106),
        [anon_sym_endif] = ACTIONS(106),
        [anon_sym_LBRACK] = ACTIONS(106),
        [anon_sym_RBRACK] = ACTIONS(106),
        [anon_sym_LBRACE] = ACTIONS(106),
        [aux_sym_replacement_token1] = ACTIONS(110),
        [anon_sym_RBRACE] = ACTIONS(106),
        [sym__word_no_digit] = ACTIONS(106),
        [sym__digits] = ACTIONS(106),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(106),
        [anon_sym_BSLASH_PLUS] = ACTIONS(106),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(106),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(106),
        [anon_sym_BSLASH_STAR] = ACTIONS(106),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(106),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(106),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(106),
        [anon_sym_BSLASH_POUND] = ACTIONS(106),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(106),
        [anon_sym_BSLASH_] = ACTIONS(106),
        [anon_sym_BSLASH__] = ACTIONS(106),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(106),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(106),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(106),
        [anon_sym_BSLASHkbd] = ACTIONS(106),
        [anon_sym_BSLASHbtn] = ACTIONS(106),
        [anon_sym_BSLASHimage] = ACTIONS(106),
        [anon_sym_BSLASHaudio] = ACTIONS(106),
        [anon_sym_BSLASHvideo] = ACTIONS(106),
        [anon_sym_BSLASHicon] = ACTIONS(106),
        [anon_sym_BSLASHpass] = ACTIONS(106),
        [anon_sym_BSLASHlink] = ACTIONS(106),
        [anon_sym_BSLASHmailto] = ACTIONS(106),
        [anon_sym_BSLASHmenu] = ACTIONS(106),
        [anon_sym_BSLASHlatexmath] = ACTIONS(106),
        [anon_sym_BSLASHasciimath] = ACTIONS(106),
        [anon_sym_BSLASHfootnote] = ACTIONS(106),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(106),
        [anon_sym_BSLASHanchor] = ACTIONS(106),
        [anon_sym_BSLASHxref] = ACTIONS(106),
        [anon_sym_BSLASHifdef] = ACTIONS(106),
        [anon_sym_BSLASHifndef] = ACTIONS(106),
        [anon_sym_BSLASHifeval] = ACTIONS(106),
        [anon_sym_BSLASHendif] = ACTIONS(106),
        [anon_sym_BANG] = ACTIONS(106),
        [anon_sym_DQUOTE] = ACTIONS(106),
        [anon_sym_POUND] = ACTIONS(106),
        [anon_sym_DOLLAR] = ACTIONS(106),
        [anon_sym_PERCENT] = ACTIONS(106),
        [anon_sym_AMP] = ACTIONS(106),
        [anon_sym_SQUOTE] = ACTIONS(106),
        [anon_sym_LPAREN] = ACTIONS(106),
        [anon_sym_RPAREN] = ACTIONS(106),
        [anon_sym_STAR] = ACTIONS(106),
        [anon_sym_PLUS] = ACTIONS(106),
        [anon_sym_COMMA] = ACTIONS(106),
        [anon_sym_DASH] = ACTIONS(106),
        [anon_sym_DOT] = ACTIONS(106),
        [anon_sym_SLASH] = ACTIONS(106),
        [anon_sym_COLON2] = ACTIONS(106),
        [anon_sym_SEMI] = ACTIONS(106),
        [anon_sym_LT] = ACTIONS(106),
        [anon_sym_EQ] = ACTIONS(106),
        [anon_sym_GT] = ACTIONS(106),
        [anon_sym_QMARK] = ACTIONS(106),
        [anon_sym_AT] = ACTIONS(106),
        [anon_sym_BSLASH] = ACTIONS(106),
        [anon_sym_CARET] = ACTIONS(106),
        [anon_sym__] = ACTIONS(106),
        [anon_sym_BQUOTE] = ACTIONS(106),
        [anon_sym_PIPE] = ACTIONS(106),
        [anon_sym_TILDE] = ACTIONS(106),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(106),
        [sym_email] = ACTIONS(106),
        [anon_sym_http] = ACTIONS(106),
        [anon_sym_https] = ACTIONS(106),
        [anon_sym_file] = ACTIONS(106),
        [anon_sym_ftp] = ACTIONS(106),
        [anon_sym_irc] = ACTIONS(106),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(106),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(106),
        [anon_sym_LT_LT] = ACTIONS(106),
        [anon_sym_STAR2] = ACTIONS(106),
        [anon_sym_STAR_STAR] = ACTIONS(106),
        [anon_sym__2] = ACTIONS(106),
        [anon_sym___] = ACTIONS(106),
        [anon_sym_BQUOTE2] = ACTIONS(106),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(106),
        [anon_sym_POUND2] = ACTIONS(106),
        [anon_sym_POUND_POUND] = ACTIONS(106),
    },
    [6] = {
        [aux_sym_link_url_repeat1] = STATE(8),
        [ts_builtin_sym_end] = ACTIONS(112),
        [anon_sym_kbd] = ACTIONS(114),
        [anon_sym_btn] = ACTIONS(114),
        [anon_sym_image] = ACTIONS(114),
        [anon_sym_audio] = ACTIONS(114),
        [anon_sym_video] = ACTIONS(114),
        [anon_sym_icon] = ACTIONS(114),
        [anon_sym_pass] = ACTIONS(114),
        [anon_sym_link] = ACTIONS(114),
        [anon_sym_mailto] = ACTIONS(114),
        [anon_sym_menu] = ACTIONS(114),
        [anon_sym_latexmath] = ACTIONS(114),
        [anon_sym_asciimath] = ACTIONS(114),
        [anon_sym_footnote] = ACTIONS(114),
        [anon_sym_footnoteref] = ACTIONS(114),
        [anon_sym_anchor] = ACTIONS(114),
        [anon_sym_xref] = ACTIONS(114),
        [anon_sym_ifdef] = ACTIONS(114),
        [anon_sym_ifndef] = ACTIONS(114),
        [anon_sym_ifeval] = ACTIONS(114),
        [anon_sym_endif] = ACTIONS(114),
        [anon_sym_LBRACK] = ACTIONS(114),
        [anon_sym_RBRACK] = ACTIONS(114),
        [anon_sym_LBRACE] = ACTIONS(114),
        [anon_sym_RBRACE] = ACTIONS(114),
        [sym__word_no_digit] = ACTIONS(114),
        [sym__digits] = ACTIONS(114),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(114),
        [anon_sym_BSLASH_PLUS] = ACTIONS(114),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(114),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(114),
        [anon_sym_BSLASH_STAR] = ACTIONS(114),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(114),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(114),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(114),
        [anon_sym_BSLASH_POUND] = ACTIONS(114),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(114),
        [anon_sym_BSLASH_] = ACTIONS(114),
        [anon_sym_BSLASH__] = ACTIONS(114),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(114),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(114),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(114),
        [anon_sym_BSLASHkbd] = ACTIONS(114),
        [anon_sym_BSLASHbtn] = ACTIONS(114),
        [anon_sym_BSLASHimage] = ACTIONS(114),
        [anon_sym_BSLASHaudio] = ACTIONS(114),
        [anon_sym_BSLASHvideo] = ACTIONS(114),
        [anon_sym_BSLASHicon] = ACTIONS(114),
        [anon_sym_BSLASHpass] = ACTIONS(114),
        [anon_sym_BSLASHlink] = ACTIONS(114),
        [anon_sym_BSLASHmailto] = ACTIONS(114),
        [anon_sym_BSLASHmenu] = ACTIONS(114),
        [anon_sym_BSLASHlatexmath] = ACTIONS(114),
        [anon_sym_BSLASHasciimath] = ACTIONS(114),
        [anon_sym_BSLASHfootnote] = ACTIONS(114),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(114),
        [anon_sym_BSLASHanchor] = ACTIONS(114),
        [anon_sym_BSLASHxref] = ACTIONS(114),
        [anon_sym_BSLASHifdef] = ACTIONS(114),
        [anon_sym_BSLASHifndef] = ACTIONS(114),
        [anon_sym_BSLASHifeval] = ACTIONS(114),
        [anon_sym_BSLASHendif] = ACTIONS(114),
        [anon_sym_BANG] = ACTIONS(114),
        [anon_sym_DQUOTE] = ACTIONS(114),
        [anon_sym_POUND] = ACTIONS(114),
        [anon_sym_DOLLAR] = ACTIONS(114),
        [anon_sym_PERCENT] = ACTIONS(114),
        [anon_sym_AMP] = ACTIONS(114),
        [anon_sym_SQUOTE] = ACTIONS(114),
        [anon_sym_LPAREN] = ACTIONS(114),
        [anon_sym_RPAREN] = ACTIONS(114),
        [anon_sym_STAR] = ACTIONS(114),
        [anon_sym_PLUS] = ACTIONS(114),
        [anon_sym_COMMA] = ACTIONS(114),
        [anon_sym_DASH] = ACTIONS(114),
        [anon_sym_DOT] = ACTIONS(116),
        [anon_sym_SLASH] = ACTIONS(114),
        [anon_sym_COLON2] = ACTIONS(114),
        [anon_sym_SEMI] = ACTIONS(114),
        [anon_sym_LT] = ACTIONS(114),
        [anon_sym_EQ] = ACTIONS(114),
        [anon_sym_GT] = ACTIONS(114),
        [anon_sym_QMARK] = ACTIONS(114),
        [anon_sym_AT] = ACTIONS(114),
        [anon_sym_BSLASH] = ACTIONS(114),
        [anon_sym_CARET] = ACTIONS(114),
        [anon_sym__] = ACTIONS(114),
        [anon_sym_BQUOTE] = ACTIONS(114),
        [anon_sym_PIPE] = ACTIONS(114),
        [anon_sym_TILDE] = ACTIONS(114),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(114),
        [sym_email] = ACTIONS(114),
        [anon_sym_http] = ACTIONS(114),
        [anon_sym_https] = ACTIONS(114),
        [anon_sym_file] = ACTIONS(114),
        [anon_sym_ftp] = ACTIONS(114),
        [anon_sym_irc] = ACTIONS(114),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(114),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(114),
        [anon_sym_LT_LT] = ACTIONS(114),
        [anon_sym_STAR2] = ACTIONS(114),
        [anon_sym_STAR_STAR] = ACTIONS(114),
        [anon_sym__2] = ACTIONS(114),
        [anon_sym___] = ACTIONS(114),
        [anon_sym_BQUOTE2] = ACTIONS(114),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(114),
        [anon_sym_POUND2] = ACTIONS(114),
        [anon_sym_POUND_POUND] = ACTIONS(114),
    },
    [7] = {
        [sym_link_url] = STATE(139),
        [ts_builtin_sym_end] = ACTIONS(104),
        [anon_sym_kbd] = ACTIONS(106),
        [anon_sym_btn] = ACTIONS(106),
        [anon_sym_image] = ACTIONS(106),
        [anon_sym_audio] = ACTIONS(106),
        [anon_sym_video] = ACTIONS(106),
        [anon_sym_icon] = ACTIONS(106),
        [anon_sym_pass] = ACTIONS(106),
        [anon_sym_link] = ACTIONS(106),
        [anon_sym_mailto] = ACTIONS(106),
        [anon_sym_menu] = ACTIONS(106),
        [anon_sym_latexmath] = ACTIONS(106),
        [anon_sym_asciimath] = ACTIONS(106),
        [anon_sym_footnote] = ACTIONS(106),
        [anon_sym_footnoteref] = ACTIONS(106),
        [anon_sym_anchor] = ACTIONS(106),
        [anon_sym_xref] = ACTIONS(106),
        [anon_sym_ifdef] = ACTIONS(106),
        [anon_sym_ifndef] = ACTIONS(106),
        [anon_sym_ifeval] = ACTIONS(106),
        [anon_sym_endif] = ACTIONS(106),
        [anon_sym_LBRACK] = ACTIONS(106),
        [anon_sym_RBRACK] = ACTIONS(106),
        [anon_sym_LBRACE] = ACTIONS(106),
        [anon_sym_RBRACE] = ACTIONS(106),
        [sym__word_no_digit] = ACTIONS(106),
        [sym__digits] = ACTIONS(106),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(106),
        [anon_sym_BSLASH_PLUS] = ACTIONS(106),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(106),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(106),
        [anon_sym_BSLASH_STAR] = ACTIONS(106),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(106),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(106),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(106),
        [anon_sym_BSLASH_POUND] = ACTIONS(106),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(106),
        [anon_sym_BSLASH_] = ACTIONS(106),
        [anon_sym_BSLASH__] = ACTIONS(106),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(106),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(106),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(106),
        [anon_sym_BSLASHkbd] = ACTIONS(106),
        [anon_sym_BSLASHbtn] = ACTIONS(106),
        [anon_sym_BSLASHimage] = ACTIONS(106),
        [anon_sym_BSLASHaudio] = ACTIONS(106),
        [anon_sym_BSLASHvideo] = ACTIONS(106),
        [anon_sym_BSLASHicon] = ACTIONS(106),
        [anon_sym_BSLASHpass] = ACTIONS(106),
        [anon_sym_BSLASHlink] = ACTIONS(106),
        [anon_sym_BSLASHmailto] = ACTIONS(106),
        [anon_sym_BSLASHmenu] = ACTIONS(106),
        [anon_sym_BSLASHlatexmath] = ACTIONS(106),
        [anon_sym_BSLASHasciimath] = ACTIONS(106),
        [anon_sym_BSLASHfootnote] = ACTIONS(106),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(106),
        [anon_sym_BSLASHanchor] = ACTIONS(106),
        [anon_sym_BSLASHxref] = ACTIONS(106),
        [anon_sym_BSLASHifdef] = ACTIONS(106),
        [anon_sym_BSLASHifndef] = ACTIONS(106),
        [anon_sym_BSLASHifeval] = ACTIONS(106),
        [anon_sym_BSLASHendif] = ACTIONS(106),
        [anon_sym_BANG] = ACTIONS(106),
        [anon_sym_DQUOTE] = ACTIONS(106),
        [anon_sym_POUND] = ACTIONS(106),
        [anon_sym_DOLLAR] = ACTIONS(106),
        [anon_sym_PERCENT] = ACTIONS(106),
        [anon_sym_AMP] = ACTIONS(106),
        [anon_sym_SQUOTE] = ACTIONS(106),
        [anon_sym_LPAREN] = ACTIONS(106),
        [anon_sym_RPAREN] = ACTIONS(106),
        [anon_sym_STAR] = ACTIONS(106),
        [anon_sym_PLUS] = ACTIONS(106),
        [anon_sym_COMMA] = ACTIONS(106),
        [anon_sym_DASH] = ACTIONS(106),
        [anon_sym_DOT] = ACTIONS(106),
        [anon_sym_SLASH] = ACTIONS(106),
        [anon_sym_COLON2] = ACTIONS(106),
        [anon_sym_SEMI] = ACTIONS(106),
        [anon_sym_LT] = ACTIONS(106),
        [anon_sym_EQ] = ACTIONS(106),
        [anon_sym_GT] = ACTIONS(106),
        [anon_sym_QMARK] = ACTIONS(106),
        [anon_sym_AT] = ACTIONS(106),
        [anon_sym_BSLASH] = ACTIONS(106),
        [anon_sym_CARET] = ACTIONS(106),
        [anon_sym__] = ACTIONS(106),
        [anon_sym_BQUOTE] = ACTIONS(106),
        [anon_sym_PIPE] = ACTIONS(106),
        [anon_sym_TILDE] = ACTIONS(106),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(106),
        [sym_email] = ACTIONS(106),
        [anon_sym_http] = ACTIONS(118),
        [anon_sym_https] = ACTIONS(118),
        [anon_sym_file] = ACTIONS(118),
        [anon_sym_ftp] = ACTIONS(118),
        [anon_sym_irc] = ACTIONS(118),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(106),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(106),
        [anon_sym_LT_LT] = ACTIONS(106),
        [anon_sym_STAR2] = ACTIONS(106),
        [anon_sym_STAR_STAR] = ACTIONS(106),
        [anon_sym__2] = ACTIONS(106),
        [anon_sym___] = ACTIONS(106),
        [anon_sym_BQUOTE2] = ACTIONS(106),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(106),
        [anon_sym_POUND2] = ACTIONS(106),
        [anon_sym_POUND_POUND] = ACTIONS(106),
    },
    [8] = {
        [aux_sym_link_url_repeat1] = STATE(9),
        [ts_builtin_sym_end] = ACTIONS(120),
        [anon_sym_kbd] = ACTIONS(122),
        [anon_sym_btn] = ACTIONS(122),
        [anon_sym_image] = ACTIONS(122),
        [anon_sym_audio] = ACTIONS(122),
        [anon_sym_video] = ACTIONS(122),
        [anon_sym_icon] = ACTIONS(122),
        [anon_sym_pass] = ACTIONS(122),
        [anon_sym_link] = ACTIONS(122),
        [anon_sym_mailto] = ACTIONS(122),
        [anon_sym_menu] = ACTIONS(122),
        [anon_sym_latexmath] = ACTIONS(122),
        [anon_sym_asciimath] = ACTIONS(122),
        [anon_sym_footnote] = ACTIONS(122),
        [anon_sym_footnoteref] = ACTIONS(122),
        [anon_sym_anchor] = ACTIONS(122),
        [anon_sym_xref] = ACTIONS(122),
        [anon_sym_ifdef] = ACTIONS(122),
        [anon_sym_ifndef] = ACTIONS(122),
        [anon_sym_ifeval] = ACTIONS(122),
        [anon_sym_endif] = ACTIONS(122),
        [anon_sym_LBRACK] = ACTIONS(122),
        [anon_sym_RBRACK] = ACTIONS(122),
        [anon_sym_LBRACE] = ACTIONS(122),
        [anon_sym_RBRACE] = ACTIONS(122),
        [sym__word_no_digit] = ACTIONS(122),
        [sym__digits] = ACTIONS(122),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(122),
        [anon_sym_BSLASH_PLUS] = ACTIONS(122),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(122),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(122),
        [anon_sym_BSLASH_STAR] = ACTIONS(122),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(122),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(122),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(122),
        [anon_sym_BSLASH_POUND] = ACTIONS(122),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(122),
        [anon_sym_BSLASH_] = ACTIONS(122),
        [anon_sym_BSLASH__] = ACTIONS(122),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(122),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(122),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(122),
        [anon_sym_BSLASHkbd] = ACTIONS(122),
        [anon_sym_BSLASHbtn] = ACTIONS(122),
        [anon_sym_BSLASHimage] = ACTIONS(122),
        [anon_sym_BSLASHaudio] = ACTIONS(122),
        [anon_sym_BSLASHvideo] = ACTIONS(122),
        [anon_sym_BSLASHicon] = ACTIONS(122),
        [anon_sym_BSLASHpass] = ACTIONS(122),
        [anon_sym_BSLASHlink] = ACTIONS(122),
        [anon_sym_BSLASHmailto] = ACTIONS(122),
        [anon_sym_BSLASHmenu] = ACTIONS(122),
        [anon_sym_BSLASHlatexmath] = ACTIONS(122),
        [anon_sym_BSLASHasciimath] = ACTIONS(122),
        [anon_sym_BSLASHfootnote] = ACTIONS(122),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(122),
        [anon_sym_BSLASHanchor] = ACTIONS(122),
        [anon_sym_BSLASHxref] = ACTIONS(122),
        [anon_sym_BSLASHifdef] = ACTIONS(122),
        [anon_sym_BSLASHifndef] = ACTIONS(122),
        [anon_sym_BSLASHifeval] = ACTIONS(122),
        [anon_sym_BSLASHendif] = ACTIONS(122),
        [anon_sym_BANG] = ACTIONS(122),
        [anon_sym_DQUOTE] = ACTIONS(122),
        [anon_sym_POUND] = ACTIONS(122),
        [anon_sym_DOLLAR] = ACTIONS(122),
        [anon_sym_PERCENT] = ACTIONS(122),
        [anon_sym_AMP] = ACTIONS(122),
        [anon_sym_SQUOTE] = ACTIONS(122),
        [anon_sym_LPAREN] = ACTIONS(122),
        [anon_sym_RPAREN] = ACTIONS(122),
        [anon_sym_STAR] = ACTIONS(122),
        [anon_sym_PLUS] = ACTIONS(122),
        [anon_sym_COMMA] = ACTIONS(122),
        [anon_sym_DASH] = ACTIONS(122),
        [anon_sym_DOT] = ACTIONS(116),
        [anon_sym_SLASH] = ACTIONS(122),
        [anon_sym_COLON2] = ACTIONS(122),
        [anon_sym_SEMI] = ACTIONS(122),
        [anon_sym_LT] = ACTIONS(122),
        [anon_sym_EQ] = ACTIONS(122),
        [anon_sym_GT] = ACTIONS(122),
        [anon_sym_QMARK] = ACTIONS(122),
        [anon_sym_AT] = ACTIONS(122),
        [anon_sym_BSLASH] = ACTIONS(122),
        [anon_sym_CARET] = ACTIONS(122),
        [anon_sym__] = ACTIONS(122),
        [anon_sym_BQUOTE] = ACTIONS(122),
        [anon_sym_PIPE] = ACTIONS(122),
        [anon_sym_TILDE] = ACTIONS(122),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(122),
        [sym_email] = ACTIONS(122),
        [anon_sym_http] = ACTIONS(122),
        [anon_sym_https] = ACTIONS(122),
        [anon_sym_file] = ACTIONS(122),
        [anon_sym_ftp] = ACTIONS(122),
        [anon_sym_irc] = ACTIONS(122),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(122),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(122),
        [anon_sym_LT_LT] = ACTIONS(122),
        [anon_sym_STAR2] = ACTIONS(122),
        [anon_sym_STAR_STAR] = ACTIONS(122),
        [anon_sym__2] = ACTIONS(122),
        [anon_sym___] = ACTIONS(122),
        [anon_sym_BQUOTE2] = ACTIONS(122),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(122),
        [anon_sym_POUND2] = ACTIONS(122),
        [anon_sym_POUND_POUND] = ACTIONS(122),
    },
    [9] = {
        [aux_sym_link_url_repeat1] = STATE(9),
        [ts_builtin_sym_end] = ACTIONS(124),
        [anon_sym_kbd] = ACTIONS(126),
        [anon_sym_btn] = ACTIONS(126),
        [anon_sym_image] = ACTIONS(126),
        [anon_sym_audio] = ACTIONS(126),
        [anon_sym_video] = ACTIONS(126),
        [anon_sym_icon] = ACTIONS(126),
        [anon_sym_pass] = ACTIONS(126),
        [anon_sym_link] = ACTIONS(126),
        [anon_sym_mailto] = ACTIONS(126),
        [anon_sym_menu] = ACTIONS(126),
        [anon_sym_latexmath] = ACTIONS(126),
        [anon_sym_asciimath] = ACTIONS(126),
        [anon_sym_footnote] = ACTIONS(126),
        [anon_sym_footnoteref] = ACTIONS(126),
        [anon_sym_anchor] = ACTIONS(126),
        [anon_sym_xref] = ACTIONS(126),
        [anon_sym_ifdef] = ACTIONS(126),
        [anon_sym_ifndef] = ACTIONS(126),
        [anon_sym_ifeval] = ACTIONS(126),
        [anon_sym_endif] = ACTIONS(126),
        [anon_sym_LBRACK] = ACTIONS(126),
        [anon_sym_RBRACK] = ACTIONS(126),
        [anon_sym_LBRACE] = ACTIONS(126),
        [anon_sym_RBRACE] = ACTIONS(126),
        [sym__word_no_digit] = ACTIONS(126),
        [sym__digits] = ACTIONS(126),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(126),
        [anon_sym_BSLASH_PLUS] = ACTIONS(126),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(126),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(126),
        [anon_sym_BSLASH_STAR] = ACTIONS(126),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(126),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(126),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(126),
        [anon_sym_BSLASH_POUND] = ACTIONS(126),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(126),
        [anon_sym_BSLASH_] = ACTIONS(126),
        [anon_sym_BSLASH__] = ACTIONS(126),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(126),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(126),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(126),
        [anon_sym_BSLASHkbd] = ACTIONS(126),
        [anon_sym_BSLASHbtn] = ACTIONS(126),
        [anon_sym_BSLASHimage] = ACTIONS(126),
        [anon_sym_BSLASHaudio] = ACTIONS(126),
        [anon_sym_BSLASHvideo] = ACTIONS(126),
        [anon_sym_BSLASHicon] = ACTIONS(126),
        [anon_sym_BSLASHpass] = ACTIONS(126),
        [anon_sym_BSLASHlink] = ACTIONS(126),
        [anon_sym_BSLASHmailto] = ACTIONS(126),
        [anon_sym_BSLASHmenu] = ACTIONS(126),
        [anon_sym_BSLASHlatexmath] = ACTIONS(126),
        [anon_sym_BSLASHasciimath] = ACTIONS(126),
        [anon_sym_BSLASHfootnote] = ACTIONS(126),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(126),
        [anon_sym_BSLASHanchor] = ACTIONS(126),
        [anon_sym_BSLASHxref] = ACTIONS(126),
        [anon_sym_BSLASHifdef] = ACTIONS(126),
        [anon_sym_BSLASHifndef] = ACTIONS(126),
        [anon_sym_BSLASHifeval] = ACTIONS(126),
        [anon_sym_BSLASHendif] = ACTIONS(126),
        [anon_sym_BANG] = ACTIONS(126),
        [anon_sym_DQUOTE] = ACTIONS(126),
        [anon_sym_POUND] = ACTIONS(126),
        [anon_sym_DOLLAR] = ACTIONS(126),
        [anon_sym_PERCENT] = ACTIONS(126),
        [anon_sym_AMP] = ACTIONS(126),
        [anon_sym_SQUOTE] = ACTIONS(126),
        [anon_sym_LPAREN] = ACTIONS(126),
        [anon_sym_RPAREN] = ACTIONS(126),
        [anon_sym_STAR] = ACTIONS(126),
        [anon_sym_PLUS] = ACTIONS(126),
        [anon_sym_COMMA] = ACTIONS(126),
        [anon_sym_DASH] = ACTIONS(126),
        [anon_sym_DOT] = ACTIONS(128),
        [anon_sym_SLASH] = ACTIONS(126),
        [anon_sym_COLON2] = ACTIONS(126),
        [anon_sym_SEMI] = ACTIONS(126),
        [anon_sym_LT] = ACTIONS(126),
        [anon_sym_EQ] = ACTIONS(126),
        [anon_sym_GT] = ACTIONS(126),
        [anon_sym_QMARK] = ACTIONS(126),
        [anon_sym_AT] = ACTIONS(126),
        [anon_sym_BSLASH] = ACTIONS(126),
        [anon_sym_CARET] = ACTIONS(126),
        [anon_sym__] = ACTIONS(126),
        [anon_sym_BQUOTE] = ACTIONS(126),
        [anon_sym_PIPE] = ACTIONS(126),
        [anon_sym_TILDE] = ACTIONS(126),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(126),
        [sym_email] = ACTIONS(126),
        [anon_sym_http] = ACTIONS(126),
        [anon_sym_https] = ACTIONS(126),
        [anon_sym_file] = ACTIONS(126),
        [anon_sym_ftp] = ACTIONS(126),
        [anon_sym_irc] = ACTIONS(126),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(126),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(126),
        [anon_sym_LT_LT] = ACTIONS(126),
        [anon_sym_STAR2] = ACTIONS(126),
        [anon_sym_STAR_STAR] = ACTIONS(126),
        [anon_sym__2] = ACTIONS(126),
        [anon_sym___] = ACTIONS(126),
        [anon_sym_BQUOTE2] = ACTIONS(126),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(126),
        [anon_sym_POUND2] = ACTIONS(126),
        [anon_sym_POUND_POUND] = ACTIONS(126),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(131),
        [anon_sym_kbd] = ACTIONS(133),
        [anon_sym_btn] = ACTIONS(133),
        [anon_sym_image] = ACTIONS(133),
        [anon_sym_audio] = ACTIONS(133),
        [anon_sym_video] = ACTIONS(133),
        [anon_sym_icon] = ACTIONS(133),
        [anon_sym_pass] = ACTIONS(133),
        [anon_sym_link] = ACTIONS(133),
        [anon_sym_mailto] = ACTIONS(133),
        [anon_sym_menu] = ACTIONS(133),
        [anon_sym_latexmath] = ACTIONS(133),
        [anon_sym_asciimath] = ACTIONS(133),
        [anon_sym_footnote] = ACTIONS(133),
        [anon_sym_footnoteref] = ACTIONS(133),
        [anon_sym_anchor] = ACTIONS(133),
        [anon_sym_xref] = ACTIONS(133),
        [anon_sym_ifdef] = ACTIONS(133),
        [anon_sym_ifndef] = ACTIONS(133),
        [anon_sym_ifeval] = ACTIONS(133),
        [anon_sym_endif] = ACTIONS(133),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_RBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(133),
        [anon_sym_RBRACE] = ACTIONS(133),
        [sym__word_no_digit] = ACTIONS(133),
        [sym__digits] = ACTIONS(133),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(133),
        [anon_sym_BSLASH_PLUS] = ACTIONS(133),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(133),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(133),
        [anon_sym_BSLASH_STAR] = ACTIONS(133),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(133),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(133),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(133),
        [anon_sym_BSLASH_POUND] = ACTIONS(133),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(133),
        [anon_sym_BSLASH_] = ACTIONS(133),
        [anon_sym_BSLASH__] = ACTIONS(133),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(133),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(133),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(133),
        [anon_sym_BSLASHkbd] = ACTIONS(133),
        [anon_sym_BSLASHbtn] = ACTIONS(133),
        [anon_sym_BSLASHimage] = ACTIONS(133),
        [anon_sym_BSLASHaudio] = ACTIONS(133),
        [anon_sym_BSLASHvideo] = ACTIONS(133),
        [anon_sym_BSLASHicon] = ACTIONS(133),
        [anon_sym_BSLASHpass] = ACTIONS(133),
        [anon_sym_BSLASHlink] = ACTIONS(133),
        [anon_sym_BSLASHmailto] = ACTIONS(133),
        [anon_sym_BSLASHmenu] = ACTIONS(133),
        [anon_sym_BSLASHlatexmath] = ACTIONS(133),
        [anon_sym_BSLASHasciimath] = ACTIONS(133),
        [anon_sym_BSLASHfootnote] = ACTIONS(133),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(133),
        [anon_sym_BSLASHanchor] = ACTIONS(133),
        [anon_sym_BSLASHxref] = ACTIONS(133),
        [anon_sym_BSLASHifdef] = ACTIONS(133),
        [anon_sym_BSLASHifndef] = ACTIONS(133),
        [anon_sym_BSLASHifeval] = ACTIONS(133),
        [anon_sym_BSLASHendif] = ACTIONS(133),
        [anon_sym_BANG] = ACTIONS(133),
        [anon_sym_DQUOTE] = ACTIONS(133),
        [anon_sym_POUND] = ACTIONS(133),
        [anon_sym_DOLLAR] = ACTIONS(133),
        [anon_sym_PERCENT] = ACTIONS(133),
        [anon_sym_AMP] = ACTIONS(133),
        [anon_sym_SQUOTE] = ACTIONS(133),
        [anon_sym_LPAREN] = ACTIONS(133),
        [anon_sym_RPAREN] = ACTIONS(133),
        [anon_sym_STAR] = ACTIONS(133),
        [anon_sym_PLUS] = ACTIONS(133),
        [anon_sym_COMMA] = ACTIONS(133),
        [anon_sym_DASH] = ACTIONS(133),
        [anon_sym_DOT] = ACTIONS(133),
        [anon_sym_SLASH] = ACTIONS(133),
        [anon_sym_COLON2] = ACTIONS(133),
        [anon_sym_SEMI] = ACTIONS(133),
        [anon_sym_LT] = ACTIONS(133),
        [anon_sym_EQ] = ACTIONS(133),
        [anon_sym_GT] = ACTIONS(133),
        [anon_sym_QMARK] = ACTIONS(133),
        [anon_sym_AT] = ACTIONS(133),
        [anon_sym_BSLASH] = ACTIONS(133),
        [anon_sym_CARET] = ACTIONS(133),
        [anon_sym__] = ACTIONS(133),
        [anon_sym_BQUOTE] = ACTIONS(133),
        [anon_sym_PIPE] = ACTIONS(133),
        [anon_sym_TILDE] = ACTIONS(133),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(133),
        [sym_email] = ACTIONS(133),
        [anon_sym_http] = ACTIONS(133),
        [anon_sym_https] = ACTIONS(133),
        [anon_sym_file] = ACTIONS(133),
        [anon_sym_ftp] = ACTIONS(133),
        [anon_sym_irc] = ACTIONS(133),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(133),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(133),
        [anon_sym_LT_LT] = ACTIONS(133),
        [anon_sym_STAR2] = ACTIONS(133),
        [anon_sym_STAR_STAR] = ACTIONS(133),
        [anon_sym__2] = ACTIONS(133),
        [anon_sym___] = ACTIONS(133),
        [anon_sym_BQUOTE2] = ACTIONS(133),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(133),
        [anon_sym_POUND2] = ACTIONS(133),
        [anon_sym_POUND_POUND] = ACTIONS(133),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_kbd] = ACTIONS(137),
        [anon_sym_btn] = ACTIONS(137),
        [anon_sym_image] = ACTIONS(137),
        [anon_sym_audio] = ACTIONS(137),
        [anon_sym_video] = ACTIONS(137),
        [anon_sym_icon] = ACTIONS(137),
        [anon_sym_pass] = ACTIONS(137),
        [anon_sym_link] = ACTIONS(137),
        [anon_sym_mailto] = ACTIONS(137),
        [anon_sym_menu] = ACTIONS(137),
        [anon_sym_latexmath] = ACTIONS(137),
        [anon_sym_asciimath] = ACTIONS(137),
        [anon_sym_footnote] = ACTIONS(137),
        [anon_sym_footnoteref] = ACTIONS(137),
        [anon_sym_anchor] = ACTIONS(137),
        [anon_sym_xref] = ACTIONS(137),
        [anon_sym_ifdef] = ACTIONS(137),
        [anon_sym_ifndef] = ACTIONS(137),
        [anon_sym_ifeval] = ACTIONS(137),
        [anon_sym_endif] = ACTIONS(137),
        [anon_sym_LBRACK] = ACTIONS(137),
        [anon_sym_RBRACK] = ACTIONS(137),
        [anon_sym_LBRACE] = ACTIONS(137),
        [anon_sym_RBRACE] = ACTIONS(137),
        [sym__word_no_digit] = ACTIONS(137),
        [sym__digits] = ACTIONS(137),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(137),
        [anon_sym_BSLASH_PLUS] = ACTIONS(137),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(137),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(137),
        [anon_sym_BSLASH_STAR] = ACTIONS(137),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(137),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(137),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(137),
        [anon_sym_BSLASH_POUND] = ACTIONS(137),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(137),
        [anon_sym_BSLASH_] = ACTIONS(137),
        [anon_sym_BSLASH__] = ACTIONS(137),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(137),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(137),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(137),
        [anon_sym_BSLASHkbd] = ACTIONS(137),
        [anon_sym_BSLASHbtn] = ACTIONS(137),
        [anon_sym_BSLASHimage] = ACTIONS(137),
        [anon_sym_BSLASHaudio] = ACTIONS(137),
        [anon_sym_BSLASHvideo] = ACTIONS(137),
        [anon_sym_BSLASHicon] = ACTIONS(137),
        [anon_sym_BSLASHpass] = ACTIONS(137),
        [anon_sym_BSLASHlink] = ACTIONS(137),
        [anon_sym_BSLASHmailto] = ACTIONS(137),
        [anon_sym_BSLASHmenu] = ACTIONS(137),
        [anon_sym_BSLASHlatexmath] = ACTIONS(137),
        [anon_sym_BSLASHasciimath] = ACTIONS(137),
        [anon_sym_BSLASHfootnote] = ACTIONS(137),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(137),
        [anon_sym_BSLASHanchor] = ACTIONS(137),
        [anon_sym_BSLASHxref] = ACTIONS(137),
        [anon_sym_BSLASHifdef] = ACTIONS(137),
        [anon_sym_BSLASHifndef] = ACTIONS(137),
        [anon_sym_BSLASHifeval] = ACTIONS(137),
        [anon_sym_BSLASHendif] = ACTIONS(137),
        [anon_sym_BANG] = ACTIONS(137),
        [anon_sym_DQUOTE] = ACTIONS(137),
        [anon_sym_POUND] = ACTIONS(137),
        [anon_sym_DOLLAR] = ACTIONS(137),
        [anon_sym_PERCENT] = ACTIONS(137),
        [anon_sym_AMP] = ACTIONS(137),
        [anon_sym_SQUOTE] = ACTIONS(137),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_RPAREN] = ACTIONS(137),
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(137),
        [anon_sym_COMMA] = ACTIONS(137),
        [anon_sym_DASH] = ACTIONS(137),
        [anon_sym_DOT] = ACTIONS(137),
        [anon_sym_SLASH] = ACTIONS(137),
        [anon_sym_COLON2] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_LT] = ACTIONS(137),
        [anon_sym_EQ] = ACTIONS(137),
        [anon_sym_GT] = ACTIONS(137),
        [anon_sym_QMARK] = ACTIONS(137),
        [anon_sym_AT] = ACTIONS(137),
        [anon_sym_BSLASH] = ACTIONS(137),
        [anon_sym_CARET] = ACTIONS(137),
        [anon_sym__] = ACTIONS(137),
        [anon_sym_BQUOTE] = ACTIONS(137),
        [anon_sym_PIPE] = ACTIONS(137),
        [anon_sym_TILDE] = ACTIONS(137),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(137),
        [sym_email] = ACTIONS(137),
        [anon_sym_http] = ACTIONS(137),
        [anon_sym_https] = ACTIONS(137),
        [anon_sym_file] = ACTIONS(137),
        [anon_sym_ftp] = ACTIONS(137),
        [anon_sym_irc] = ACTIONS(137),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(137),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(137),
        [anon_sym_LT_LT] = ACTIONS(137),
        [anon_sym_STAR2] = ACTIONS(137),
        [anon_sym_STAR_STAR] = ACTIONS(137),
        [anon_sym__2] = ACTIONS(137),
        [anon_sym___] = ACTIONS(137),
        [anon_sym_BQUOTE2] = ACTIONS(137),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(137),
        [anon_sym_POUND2] = ACTIONS(137),
        [anon_sym_POUND_POUND] = ACTIONS(137),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(139),
        [anon_sym_kbd] = ACTIONS(141),
        [anon_sym_btn] = ACTIONS(141),
        [anon_sym_image] = ACTIONS(141),
        [anon_sym_audio] = ACTIONS(141),
        [anon_sym_video] = ACTIONS(141),
        [anon_sym_icon] = ACTIONS(141),
        [anon_sym_pass] = ACTIONS(141),
        [anon_sym_link] = ACTIONS(141),
        [anon_sym_mailto] = ACTIONS(141),
        [anon_sym_menu] = ACTIONS(141),
        [anon_sym_latexmath] = ACTIONS(141),
        [anon_sym_asciimath] = ACTIONS(141),
        [anon_sym_footnote] = ACTIONS(141),
        [anon_sym_footnoteref] = ACTIONS(141),
        [anon_sym_anchor] = ACTIONS(141),
        [anon_sym_xref] = ACTIONS(141),
        [anon_sym_ifdef] = ACTIONS(141),
        [anon_sym_ifndef] = ACTIONS(141),
        [anon_sym_ifeval] = ACTIONS(141),
        [anon_sym_endif] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_RBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(141),
        [anon_sym_RBRACE] = ACTIONS(141),
        [sym__word_no_digit] = ACTIONS(141),
        [sym__digits] = ACTIONS(141),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(141),
        [anon_sym_BSLASH_PLUS] = ACTIONS(141),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(141),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(141),
        [anon_sym_BSLASH_STAR] = ACTIONS(141),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(141),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(141),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(141),
        [anon_sym_BSLASH_POUND] = ACTIONS(141),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(141),
        [anon_sym_BSLASH_] = ACTIONS(141),
        [anon_sym_BSLASH__] = ACTIONS(141),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(141),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(141),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(141),
        [anon_sym_BSLASHkbd] = ACTIONS(141),
        [anon_sym_BSLASHbtn] = ACTIONS(141),
        [anon_sym_BSLASHimage] = ACTIONS(141),
        [anon_sym_BSLASHaudio] = ACTIONS(141),
        [anon_sym_BSLASHvideo] = ACTIONS(141),
        [anon_sym_BSLASHicon] = ACTIONS(141),
        [anon_sym_BSLASHpass] = ACTIONS(141),
        [anon_sym_BSLASHlink] = ACTIONS(141),
        [anon_sym_BSLASHmailto] = ACTIONS(141),
        [anon_sym_BSLASHmenu] = ACTIONS(141),
        [anon_sym_BSLASHlatexmath] = ACTIONS(141),
        [anon_sym_BSLASHasciimath] = ACTIONS(141),
        [anon_sym_BSLASHfootnote] = ACTIONS(141),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(141),
        [anon_sym_BSLASHanchor] = ACTIONS(141),
        [anon_sym_BSLASHxref] = ACTIONS(141),
        [anon_sym_BSLASHifdef] = ACTIONS(141),
        [anon_sym_BSLASHifndef] = ACTIONS(141),
        [anon_sym_BSLASHifeval] = ACTIONS(141),
        [anon_sym_BSLASHendif] = ACTIONS(141),
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
        [anon_sym_COLON2] = ACTIONS(141),
        [anon_sym_SEMI] = ACTIONS(141),
        [anon_sym_LT] = ACTIONS(141),
        [anon_sym_EQ] = ACTIONS(141),
        [anon_sym_GT] = ACTIONS(141),
        [anon_sym_QMARK] = ACTIONS(141),
        [anon_sym_AT] = ACTIONS(141),
        [anon_sym_BSLASH] = ACTIONS(141),
        [anon_sym_CARET] = ACTIONS(141),
        [anon_sym__] = ACTIONS(141),
        [anon_sym_BQUOTE] = ACTIONS(141),
        [anon_sym_PIPE] = ACTIONS(141),
        [anon_sym_TILDE] = ACTIONS(141),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(141),
        [sym_email] = ACTIONS(141),
        [anon_sym_http] = ACTIONS(141),
        [anon_sym_https] = ACTIONS(141),
        [anon_sym_file] = ACTIONS(141),
        [anon_sym_ftp] = ACTIONS(141),
        [anon_sym_irc] = ACTIONS(141),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(141),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(141),
        [anon_sym_LT_LT] = ACTIONS(141),
        [anon_sym_STAR2] = ACTIONS(141),
        [anon_sym_STAR_STAR] = ACTIONS(141),
        [anon_sym__2] = ACTIONS(141),
        [anon_sym___] = ACTIONS(141),
        [anon_sym_BQUOTE2] = ACTIONS(141),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(141),
        [anon_sym_POUND2] = ACTIONS(141),
        [anon_sym_POUND_POUND] = ACTIONS(141),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(143),
        [anon_sym_kbd] = ACTIONS(145),
        [anon_sym_btn] = ACTIONS(145),
        [anon_sym_image] = ACTIONS(145),
        [anon_sym_audio] = ACTIONS(145),
        [anon_sym_video] = ACTIONS(145),
        [anon_sym_icon] = ACTIONS(145),
        [anon_sym_pass] = ACTIONS(145),
        [anon_sym_link] = ACTIONS(145),
        [anon_sym_mailto] = ACTIONS(145),
        [anon_sym_menu] = ACTIONS(145),
        [anon_sym_latexmath] = ACTIONS(145),
        [anon_sym_asciimath] = ACTIONS(145),
        [anon_sym_footnote] = ACTIONS(145),
        [anon_sym_footnoteref] = ACTIONS(145),
        [anon_sym_anchor] = ACTIONS(145),
        [anon_sym_xref] = ACTIONS(145),
        [anon_sym_ifdef] = ACTIONS(145),
        [anon_sym_ifndef] = ACTIONS(145),
        [anon_sym_ifeval] = ACTIONS(145),
        [anon_sym_endif] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_RBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(145),
        [anon_sym_RBRACE] = ACTIONS(145),
        [sym__word_no_digit] = ACTIONS(145),
        [sym__digits] = ACTIONS(145),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(145),
        [anon_sym_BSLASH_PLUS] = ACTIONS(145),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(145),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(145),
        [anon_sym_BSLASH_STAR] = ACTIONS(145),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(145),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(145),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(145),
        [anon_sym_BSLASH_POUND] = ACTIONS(145),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(145),
        [anon_sym_BSLASH_] = ACTIONS(145),
        [anon_sym_BSLASH__] = ACTIONS(145),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(145),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(145),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(145),
        [anon_sym_BSLASHkbd] = ACTIONS(145),
        [anon_sym_BSLASHbtn] = ACTIONS(145),
        [anon_sym_BSLASHimage] = ACTIONS(145),
        [anon_sym_BSLASHaudio] = ACTIONS(145),
        [anon_sym_BSLASHvideo] = ACTIONS(145),
        [anon_sym_BSLASHicon] = ACTIONS(145),
        [anon_sym_BSLASHpass] = ACTIONS(145),
        [anon_sym_BSLASHlink] = ACTIONS(145),
        [anon_sym_BSLASHmailto] = ACTIONS(145),
        [anon_sym_BSLASHmenu] = ACTIONS(145),
        [anon_sym_BSLASHlatexmath] = ACTIONS(145),
        [anon_sym_BSLASHasciimath] = ACTIONS(145),
        [anon_sym_BSLASHfootnote] = ACTIONS(145),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(145),
        [anon_sym_BSLASHanchor] = ACTIONS(145),
        [anon_sym_BSLASHxref] = ACTIONS(145),
        [anon_sym_BSLASHifdef] = ACTIONS(145),
        [anon_sym_BSLASHifndef] = ACTIONS(145),
        [anon_sym_BSLASHifeval] = ACTIONS(145),
        [anon_sym_BSLASHendif] = ACTIONS(145),
        [anon_sym_BANG] = ACTIONS(145),
        [anon_sym_DQUOTE] = ACTIONS(145),
        [anon_sym_POUND] = ACTIONS(145),
        [anon_sym_DOLLAR] = ACTIONS(145),
        [anon_sym_PERCENT] = ACTIONS(145),
        [anon_sym_AMP] = ACTIONS(145),
        [anon_sym_SQUOTE] = ACTIONS(145),
        [anon_sym_LPAREN] = ACTIONS(145),
        [anon_sym_RPAREN] = ACTIONS(145),
        [anon_sym_STAR] = ACTIONS(145),
        [anon_sym_PLUS] = ACTIONS(145),
        [anon_sym_COMMA] = ACTIONS(145),
        [anon_sym_DASH] = ACTIONS(145),
        [anon_sym_DOT] = ACTIONS(145),
        [anon_sym_SLASH] = ACTIONS(145),
        [anon_sym_COLON2] = ACTIONS(145),
        [anon_sym_SEMI] = ACTIONS(145),
        [anon_sym_LT] = ACTIONS(145),
        [anon_sym_EQ] = ACTIONS(145),
        [anon_sym_GT] = ACTIONS(145),
        [anon_sym_QMARK] = ACTIONS(145),
        [anon_sym_AT] = ACTIONS(145),
        [anon_sym_BSLASH] = ACTIONS(145),
        [anon_sym_CARET] = ACTIONS(145),
        [anon_sym__] = ACTIONS(145),
        [anon_sym_BQUOTE] = ACTIONS(145),
        [anon_sym_PIPE] = ACTIONS(145),
        [anon_sym_TILDE] = ACTIONS(145),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(145),
        [sym_email] = ACTIONS(145),
        [anon_sym_http] = ACTIONS(145),
        [anon_sym_https] = ACTIONS(145),
        [anon_sym_file] = ACTIONS(145),
        [anon_sym_ftp] = ACTIONS(145),
        [anon_sym_irc] = ACTIONS(145),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(145),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(145),
        [anon_sym_LT_LT] = ACTIONS(145),
        [anon_sym_STAR2] = ACTIONS(145),
        [anon_sym_STAR_STAR] = ACTIONS(145),
        [anon_sym__2] = ACTIONS(145),
        [anon_sym___] = ACTIONS(145),
        [anon_sym_BQUOTE2] = ACTIONS(145),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(145),
        [anon_sym_POUND2] = ACTIONS(145),
        [anon_sym_POUND_POUND] = ACTIONS(145),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_kbd] = ACTIONS(149),
        [anon_sym_btn] = ACTIONS(149),
        [anon_sym_image] = ACTIONS(149),
        [anon_sym_audio] = ACTIONS(149),
        [anon_sym_video] = ACTIONS(149),
        [anon_sym_icon] = ACTIONS(149),
        [anon_sym_pass] = ACTIONS(149),
        [anon_sym_link] = ACTIONS(149),
        [anon_sym_mailto] = ACTIONS(149),
        [anon_sym_menu] = ACTIONS(149),
        [anon_sym_latexmath] = ACTIONS(149),
        [anon_sym_asciimath] = ACTIONS(149),
        [anon_sym_footnote] = ACTIONS(149),
        [anon_sym_footnoteref] = ACTIONS(149),
        [anon_sym_anchor] = ACTIONS(149),
        [anon_sym_xref] = ACTIONS(149),
        [anon_sym_ifdef] = ACTIONS(149),
        [anon_sym_ifndef] = ACTIONS(149),
        [anon_sym_ifeval] = ACTIONS(149),
        [anon_sym_endif] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(149),
        [anon_sym_RBRACK] = ACTIONS(149),
        [anon_sym_LBRACE] = ACTIONS(149),
        [anon_sym_RBRACE] = ACTIONS(149),
        [sym__word_no_digit] = ACTIONS(149),
        [sym__digits] = ACTIONS(149),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(149),
        [anon_sym_BSLASH_PLUS] = ACTIONS(149),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(149),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(149),
        [anon_sym_BSLASH_STAR] = ACTIONS(149),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(149),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(149),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(149),
        [anon_sym_BSLASH_POUND] = ACTIONS(149),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(149),
        [anon_sym_BSLASH_] = ACTIONS(149),
        [anon_sym_BSLASH__] = ACTIONS(149),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(149),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(149),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(149),
        [anon_sym_BSLASHkbd] = ACTIONS(149),
        [anon_sym_BSLASHbtn] = ACTIONS(149),
        [anon_sym_BSLASHimage] = ACTIONS(149),
        [anon_sym_BSLASHaudio] = ACTIONS(149),
        [anon_sym_BSLASHvideo] = ACTIONS(149),
        [anon_sym_BSLASHicon] = ACTIONS(149),
        [anon_sym_BSLASHpass] = ACTIONS(149),
        [anon_sym_BSLASHlink] = ACTIONS(149),
        [anon_sym_BSLASHmailto] = ACTIONS(149),
        [anon_sym_BSLASHmenu] = ACTIONS(149),
        [anon_sym_BSLASHlatexmath] = ACTIONS(149),
        [anon_sym_BSLASHasciimath] = ACTIONS(149),
        [anon_sym_BSLASHfootnote] = ACTIONS(149),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(149),
        [anon_sym_BSLASHanchor] = ACTIONS(149),
        [anon_sym_BSLASHxref] = ACTIONS(149),
        [anon_sym_BSLASHifdef] = ACTIONS(149),
        [anon_sym_BSLASHifndef] = ACTIONS(149),
        [anon_sym_BSLASHifeval] = ACTIONS(149),
        [anon_sym_BSLASHendif] = ACTIONS(149),
        [anon_sym_BANG] = ACTIONS(149),
        [anon_sym_DQUOTE] = ACTIONS(149),
        [anon_sym_POUND] = ACTIONS(149),
        [anon_sym_DOLLAR] = ACTIONS(149),
        [anon_sym_PERCENT] = ACTIONS(149),
        [anon_sym_AMP] = ACTIONS(149),
        [anon_sym_SQUOTE] = ACTIONS(149),
        [anon_sym_LPAREN] = ACTIONS(149),
        [anon_sym_RPAREN] = ACTIONS(149),
        [anon_sym_STAR] = ACTIONS(149),
        [anon_sym_PLUS] = ACTIONS(149),
        [anon_sym_COMMA] = ACTIONS(149),
        [anon_sym_DASH] = ACTIONS(149),
        [anon_sym_DOT] = ACTIONS(149),
        [anon_sym_SLASH] = ACTIONS(149),
        [anon_sym_COLON2] = ACTIONS(149),
        [anon_sym_SEMI] = ACTIONS(149),
        [anon_sym_LT] = ACTIONS(149),
        [anon_sym_EQ] = ACTIONS(149),
        [anon_sym_GT] = ACTIONS(149),
        [anon_sym_QMARK] = ACTIONS(149),
        [anon_sym_AT] = ACTIONS(149),
        [anon_sym_BSLASH] = ACTIONS(149),
        [anon_sym_CARET] = ACTIONS(149),
        [anon_sym__] = ACTIONS(149),
        [anon_sym_BQUOTE] = ACTIONS(149),
        [anon_sym_PIPE] = ACTIONS(149),
        [anon_sym_TILDE] = ACTIONS(149),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(149),
        [sym_email] = ACTIONS(149),
        [anon_sym_http] = ACTIONS(149),
        [anon_sym_https] = ACTIONS(149),
        [anon_sym_file] = ACTIONS(149),
        [anon_sym_ftp] = ACTIONS(149),
        [anon_sym_irc] = ACTIONS(149),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(149),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(149),
        [anon_sym_LT_LT] = ACTIONS(149),
        [anon_sym_STAR2] = ACTIONS(149),
        [anon_sym_STAR_STAR] = ACTIONS(149),
        [anon_sym__2] = ACTIONS(149),
        [anon_sym___] = ACTIONS(149),
        [anon_sym_BQUOTE2] = ACTIONS(149),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(149),
        [anon_sym_POUND2] = ACTIONS(149),
        [anon_sym_POUND_POUND] = ACTIONS(149),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(124),
        [anon_sym_kbd] = ACTIONS(126),
        [anon_sym_btn] = ACTIONS(126),
        [anon_sym_image] = ACTIONS(126),
        [anon_sym_audio] = ACTIONS(126),
        [anon_sym_video] = ACTIONS(126),
        [anon_sym_icon] = ACTIONS(126),
        [anon_sym_pass] = ACTIONS(126),
        [anon_sym_link] = ACTIONS(126),
        [anon_sym_mailto] = ACTIONS(126),
        [anon_sym_menu] = ACTIONS(126),
        [anon_sym_latexmath] = ACTIONS(126),
        [anon_sym_asciimath] = ACTIONS(126),
        [anon_sym_footnote] = ACTIONS(126),
        [anon_sym_footnoteref] = ACTIONS(126),
        [anon_sym_anchor] = ACTIONS(126),
        [anon_sym_xref] = ACTIONS(126),
        [anon_sym_ifdef] = ACTIONS(126),
        [anon_sym_ifndef] = ACTIONS(126),
        [anon_sym_ifeval] = ACTIONS(126),
        [anon_sym_endif] = ACTIONS(126),
        [anon_sym_LBRACK] = ACTIONS(126),
        [anon_sym_RBRACK] = ACTIONS(126),
        [anon_sym_LBRACE] = ACTIONS(126),
        [anon_sym_RBRACE] = ACTIONS(126),
        [sym__word_no_digit] = ACTIONS(126),
        [sym__digits] = ACTIONS(126),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(126),
        [anon_sym_BSLASH_PLUS] = ACTIONS(126),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(126),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(126),
        [anon_sym_BSLASH_STAR] = ACTIONS(126),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(126),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(126),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(126),
        [anon_sym_BSLASH_POUND] = ACTIONS(126),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(126),
        [anon_sym_BSLASH_] = ACTIONS(126),
        [anon_sym_BSLASH__] = ACTIONS(126),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(126),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(126),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(126),
        [anon_sym_BSLASHkbd] = ACTIONS(126),
        [anon_sym_BSLASHbtn] = ACTIONS(126),
        [anon_sym_BSLASHimage] = ACTIONS(126),
        [anon_sym_BSLASHaudio] = ACTIONS(126),
        [anon_sym_BSLASHvideo] = ACTIONS(126),
        [anon_sym_BSLASHicon] = ACTIONS(126),
        [anon_sym_BSLASHpass] = ACTIONS(126),
        [anon_sym_BSLASHlink] = ACTIONS(126),
        [anon_sym_BSLASHmailto] = ACTIONS(126),
        [anon_sym_BSLASHmenu] = ACTIONS(126),
        [anon_sym_BSLASHlatexmath] = ACTIONS(126),
        [anon_sym_BSLASHasciimath] = ACTIONS(126),
        [anon_sym_BSLASHfootnote] = ACTIONS(126),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(126),
        [anon_sym_BSLASHanchor] = ACTIONS(126),
        [anon_sym_BSLASHxref] = ACTIONS(126),
        [anon_sym_BSLASHifdef] = ACTIONS(126),
        [anon_sym_BSLASHifndef] = ACTIONS(126),
        [anon_sym_BSLASHifeval] = ACTIONS(126),
        [anon_sym_BSLASHendif] = ACTIONS(126),
        [anon_sym_BANG] = ACTIONS(126),
        [anon_sym_DQUOTE] = ACTIONS(126),
        [anon_sym_POUND] = ACTIONS(126),
        [anon_sym_DOLLAR] = ACTIONS(126),
        [anon_sym_PERCENT] = ACTIONS(126),
        [anon_sym_AMP] = ACTIONS(126),
        [anon_sym_SQUOTE] = ACTIONS(126),
        [anon_sym_LPAREN] = ACTIONS(126),
        [anon_sym_RPAREN] = ACTIONS(126),
        [anon_sym_STAR] = ACTIONS(126),
        [anon_sym_PLUS] = ACTIONS(126),
        [anon_sym_COMMA] = ACTIONS(126),
        [anon_sym_DASH] = ACTIONS(126),
        [anon_sym_DOT] = ACTIONS(126),
        [anon_sym_SLASH] = ACTIONS(126),
        [anon_sym_COLON2] = ACTIONS(126),
        [anon_sym_SEMI] = ACTIONS(126),
        [anon_sym_LT] = ACTIONS(126),
        [anon_sym_EQ] = ACTIONS(126),
        [anon_sym_GT] = ACTIONS(126),
        [anon_sym_QMARK] = ACTIONS(126),
        [anon_sym_AT] = ACTIONS(126),
        [anon_sym_BSLASH] = ACTIONS(126),
        [anon_sym_CARET] = ACTIONS(126),
        [anon_sym__] = ACTIONS(126),
        [anon_sym_BQUOTE] = ACTIONS(126),
        [anon_sym_PIPE] = ACTIONS(126),
        [anon_sym_TILDE] = ACTIONS(126),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(126),
        [sym_email] = ACTIONS(126),
        [anon_sym_http] = ACTIONS(126),
        [anon_sym_https] = ACTIONS(126),
        [anon_sym_file] = ACTIONS(126),
        [anon_sym_ftp] = ACTIONS(126),
        [anon_sym_irc] = ACTIONS(126),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(126),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(126),
        [anon_sym_LT_LT] = ACTIONS(126),
        [anon_sym_STAR2] = ACTIONS(126),
        [anon_sym_STAR_STAR] = ACTIONS(126),
        [anon_sym__2] = ACTIONS(126),
        [anon_sym___] = ACTIONS(126),
        [anon_sym_BQUOTE2] = ACTIONS(126),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(126),
        [anon_sym_POUND2] = ACTIONS(126),
        [anon_sym_POUND_POUND] = ACTIONS(126),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(151),
        [anon_sym_kbd] = ACTIONS(153),
        [anon_sym_btn] = ACTIONS(153),
        [anon_sym_image] = ACTIONS(153),
        [anon_sym_audio] = ACTIONS(153),
        [anon_sym_video] = ACTIONS(153),
        [anon_sym_icon] = ACTIONS(153),
        [anon_sym_pass] = ACTIONS(153),
        [anon_sym_link] = ACTIONS(153),
        [anon_sym_mailto] = ACTIONS(153),
        [anon_sym_menu] = ACTIONS(153),
        [anon_sym_latexmath] = ACTIONS(153),
        [anon_sym_asciimath] = ACTIONS(153),
        [anon_sym_footnote] = ACTIONS(153),
        [anon_sym_footnoteref] = ACTIONS(153),
        [anon_sym_anchor] = ACTIONS(153),
        [anon_sym_xref] = ACTIONS(153),
        [anon_sym_ifdef] = ACTIONS(153),
        [anon_sym_ifndef] = ACTIONS(153),
        [anon_sym_ifeval] = ACTIONS(153),
        [anon_sym_endif] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(153),
        [anon_sym_RBRACK] = ACTIONS(153),
        [anon_sym_LBRACE] = ACTIONS(153),
        [anon_sym_RBRACE] = ACTIONS(153),
        [sym__word_no_digit] = ACTIONS(153),
        [sym__digits] = ACTIONS(153),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(153),
        [anon_sym_BSLASH_PLUS] = ACTIONS(153),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(153),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(153),
        [anon_sym_BSLASH_STAR] = ACTIONS(153),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(153),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(153),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(153),
        [anon_sym_BSLASH_POUND] = ACTIONS(153),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(153),
        [anon_sym_BSLASH_] = ACTIONS(153),
        [anon_sym_BSLASH__] = ACTIONS(153),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(153),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(153),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(153),
        [anon_sym_BSLASHkbd] = ACTIONS(153),
        [anon_sym_BSLASHbtn] = ACTIONS(153),
        [anon_sym_BSLASHimage] = ACTIONS(153),
        [anon_sym_BSLASHaudio] = ACTIONS(153),
        [anon_sym_BSLASHvideo] = ACTIONS(153),
        [anon_sym_BSLASHicon] = ACTIONS(153),
        [anon_sym_BSLASHpass] = ACTIONS(153),
        [anon_sym_BSLASHlink] = ACTIONS(153),
        [anon_sym_BSLASHmailto] = ACTIONS(153),
        [anon_sym_BSLASHmenu] = ACTIONS(153),
        [anon_sym_BSLASHlatexmath] = ACTIONS(153),
        [anon_sym_BSLASHasciimath] = ACTIONS(153),
        [anon_sym_BSLASHfootnote] = ACTIONS(153),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(153),
        [anon_sym_BSLASHanchor] = ACTIONS(153),
        [anon_sym_BSLASHxref] = ACTIONS(153),
        [anon_sym_BSLASHifdef] = ACTIONS(153),
        [anon_sym_BSLASHifndef] = ACTIONS(153),
        [anon_sym_BSLASHifeval] = ACTIONS(153),
        [anon_sym_BSLASHendif] = ACTIONS(153),
        [anon_sym_BANG] = ACTIONS(153),
        [anon_sym_DQUOTE] = ACTIONS(153),
        [anon_sym_POUND] = ACTIONS(153),
        [anon_sym_DOLLAR] = ACTIONS(153),
        [anon_sym_PERCENT] = ACTIONS(153),
        [anon_sym_AMP] = ACTIONS(153),
        [anon_sym_SQUOTE] = ACTIONS(153),
        [anon_sym_LPAREN] = ACTIONS(153),
        [anon_sym_RPAREN] = ACTIONS(153),
        [anon_sym_STAR] = ACTIONS(153),
        [anon_sym_PLUS] = ACTIONS(153),
        [anon_sym_COMMA] = ACTIONS(153),
        [anon_sym_DASH] = ACTIONS(153),
        [anon_sym_DOT] = ACTIONS(153),
        [anon_sym_SLASH] = ACTIONS(153),
        [anon_sym_COLON2] = ACTIONS(153),
        [anon_sym_SEMI] = ACTIONS(153),
        [anon_sym_LT] = ACTIONS(153),
        [anon_sym_EQ] = ACTIONS(153),
        [anon_sym_GT] = ACTIONS(153),
        [anon_sym_QMARK] = ACTIONS(153),
        [anon_sym_AT] = ACTIONS(153),
        [anon_sym_BSLASH] = ACTIONS(153),
        [anon_sym_CARET] = ACTIONS(153),
        [anon_sym__] = ACTIONS(153),
        [anon_sym_BQUOTE] = ACTIONS(153),
        [anon_sym_PIPE] = ACTIONS(153),
        [anon_sym_TILDE] = ACTIONS(153),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(153),
        [sym_email] = ACTIONS(153),
        [anon_sym_http] = ACTIONS(153),
        [anon_sym_https] = ACTIONS(153),
        [anon_sym_file] = ACTIONS(153),
        [anon_sym_ftp] = ACTIONS(153),
        [anon_sym_irc] = ACTIONS(153),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(153),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(153),
        [anon_sym_LT_LT] = ACTIONS(153),
        [anon_sym_STAR2] = ACTIONS(153),
        [anon_sym_STAR_STAR] = ACTIONS(153),
        [anon_sym__2] = ACTIONS(153),
        [anon_sym___] = ACTIONS(153),
        [anon_sym_BQUOTE2] = ACTIONS(153),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(153),
        [anon_sym_POUND2] = ACTIONS(153),
        [anon_sym_POUND_POUND] = ACTIONS(153),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(155),
        [anon_sym_kbd] = ACTIONS(157),
        [anon_sym_btn] = ACTIONS(157),
        [anon_sym_image] = ACTIONS(157),
        [anon_sym_audio] = ACTIONS(157),
        [anon_sym_video] = ACTIONS(157),
        [anon_sym_icon] = ACTIONS(157),
        [anon_sym_pass] = ACTIONS(157),
        [anon_sym_link] = ACTIONS(157),
        [anon_sym_mailto] = ACTIONS(157),
        [anon_sym_menu] = ACTIONS(157),
        [anon_sym_latexmath] = ACTIONS(157),
        [anon_sym_asciimath] = ACTIONS(157),
        [anon_sym_footnote] = ACTIONS(157),
        [anon_sym_footnoteref] = ACTIONS(157),
        [anon_sym_anchor] = ACTIONS(157),
        [anon_sym_xref] = ACTIONS(157),
        [anon_sym_ifdef] = ACTIONS(157),
        [anon_sym_ifndef] = ACTIONS(157),
        [anon_sym_ifeval] = ACTIONS(157),
        [anon_sym_endif] = ACTIONS(157),
        [anon_sym_LBRACK] = ACTIONS(157),
        [anon_sym_RBRACK] = ACTIONS(157),
        [anon_sym_LBRACE] = ACTIONS(157),
        [anon_sym_RBRACE] = ACTIONS(157),
        [sym__word_no_digit] = ACTIONS(157),
        [sym__digits] = ACTIONS(157),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(157),
        [anon_sym_BSLASH_PLUS] = ACTIONS(157),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(157),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(157),
        [anon_sym_BSLASH_STAR] = ACTIONS(157),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(157),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(157),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(157),
        [anon_sym_BSLASH_POUND] = ACTIONS(157),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(157),
        [anon_sym_BSLASH_] = ACTIONS(157),
        [anon_sym_BSLASH__] = ACTIONS(157),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(157),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(157),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(157),
        [anon_sym_BSLASHkbd] = ACTIONS(157),
        [anon_sym_BSLASHbtn] = ACTIONS(157),
        [anon_sym_BSLASHimage] = ACTIONS(157),
        [anon_sym_BSLASHaudio] = ACTIONS(157),
        [anon_sym_BSLASHvideo] = ACTIONS(157),
        [anon_sym_BSLASHicon] = ACTIONS(157),
        [anon_sym_BSLASHpass] = ACTIONS(157),
        [anon_sym_BSLASHlink] = ACTIONS(157),
        [anon_sym_BSLASHmailto] = ACTIONS(157),
        [anon_sym_BSLASHmenu] = ACTIONS(157),
        [anon_sym_BSLASHlatexmath] = ACTIONS(157),
        [anon_sym_BSLASHasciimath] = ACTIONS(157),
        [anon_sym_BSLASHfootnote] = ACTIONS(157),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(157),
        [anon_sym_BSLASHanchor] = ACTIONS(157),
        [anon_sym_BSLASHxref] = ACTIONS(157),
        [anon_sym_BSLASHifdef] = ACTIONS(157),
        [anon_sym_BSLASHifndef] = ACTIONS(157),
        [anon_sym_BSLASHifeval] = ACTIONS(157),
        [anon_sym_BSLASHendif] = ACTIONS(157),
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
        [anon_sym_COLON2] = ACTIONS(157),
        [anon_sym_SEMI] = ACTIONS(157),
        [anon_sym_LT] = ACTIONS(157),
        [anon_sym_EQ] = ACTIONS(157),
        [anon_sym_GT] = ACTIONS(157),
        [anon_sym_QMARK] = ACTIONS(157),
        [anon_sym_AT] = ACTIONS(157),
        [anon_sym_BSLASH] = ACTIONS(157),
        [anon_sym_CARET] = ACTIONS(157),
        [anon_sym__] = ACTIONS(157),
        [anon_sym_BQUOTE] = ACTIONS(157),
        [anon_sym_PIPE] = ACTIONS(157),
        [anon_sym_TILDE] = ACTIONS(157),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(157),
        [sym_email] = ACTIONS(157),
        [anon_sym_http] = ACTIONS(157),
        [anon_sym_https] = ACTIONS(157),
        [anon_sym_file] = ACTIONS(157),
        [anon_sym_ftp] = ACTIONS(157),
        [anon_sym_irc] = ACTIONS(157),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(157),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(157),
        [anon_sym_LT_LT] = ACTIONS(157),
        [anon_sym_STAR2] = ACTIONS(157),
        [anon_sym_STAR_STAR] = ACTIONS(157),
        [anon_sym__2] = ACTIONS(157),
        [anon_sym___] = ACTIONS(157),
        [anon_sym_BQUOTE2] = ACTIONS(157),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(157),
        [anon_sym_POUND2] = ACTIONS(157),
        [anon_sym_POUND_POUND] = ACTIONS(157),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(159),
        [anon_sym_kbd] = ACTIONS(161),
        [anon_sym_btn] = ACTIONS(161),
        [anon_sym_image] = ACTIONS(161),
        [anon_sym_audio] = ACTIONS(161),
        [anon_sym_video] = ACTIONS(161),
        [anon_sym_icon] = ACTIONS(161),
        [anon_sym_pass] = ACTIONS(161),
        [anon_sym_link] = ACTIONS(161),
        [anon_sym_mailto] = ACTIONS(161),
        [anon_sym_menu] = ACTIONS(161),
        [anon_sym_latexmath] = ACTIONS(161),
        [anon_sym_asciimath] = ACTIONS(161),
        [anon_sym_footnote] = ACTIONS(161),
        [anon_sym_footnoteref] = ACTIONS(161),
        [anon_sym_anchor] = ACTIONS(161),
        [anon_sym_xref] = ACTIONS(161),
        [anon_sym_ifdef] = ACTIONS(161),
        [anon_sym_ifndef] = ACTIONS(161),
        [anon_sym_ifeval] = ACTIONS(161),
        [anon_sym_endif] = ACTIONS(161),
        [anon_sym_LBRACK] = ACTIONS(161),
        [anon_sym_RBRACK] = ACTIONS(161),
        [anon_sym_LBRACE] = ACTIONS(161),
        [anon_sym_RBRACE] = ACTIONS(161),
        [sym__word_no_digit] = ACTIONS(161),
        [sym__digits] = ACTIONS(161),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(161),
        [anon_sym_BSLASH_PLUS] = ACTIONS(161),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(161),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(161),
        [anon_sym_BSLASH_STAR] = ACTIONS(161),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(161),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(161),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(161),
        [anon_sym_BSLASH_POUND] = ACTIONS(161),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(161),
        [anon_sym_BSLASH_] = ACTIONS(161),
        [anon_sym_BSLASH__] = ACTIONS(161),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(161),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(161),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(161),
        [anon_sym_BSLASHkbd] = ACTIONS(161),
        [anon_sym_BSLASHbtn] = ACTIONS(161),
        [anon_sym_BSLASHimage] = ACTIONS(161),
        [anon_sym_BSLASHaudio] = ACTIONS(161),
        [anon_sym_BSLASHvideo] = ACTIONS(161),
        [anon_sym_BSLASHicon] = ACTIONS(161),
        [anon_sym_BSLASHpass] = ACTIONS(161),
        [anon_sym_BSLASHlink] = ACTIONS(161),
        [anon_sym_BSLASHmailto] = ACTIONS(161),
        [anon_sym_BSLASHmenu] = ACTIONS(161),
        [anon_sym_BSLASHlatexmath] = ACTIONS(161),
        [anon_sym_BSLASHasciimath] = ACTIONS(161),
        [anon_sym_BSLASHfootnote] = ACTIONS(161),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(161),
        [anon_sym_BSLASHanchor] = ACTIONS(161),
        [anon_sym_BSLASHxref] = ACTIONS(161),
        [anon_sym_BSLASHifdef] = ACTIONS(161),
        [anon_sym_BSLASHifndef] = ACTIONS(161),
        [anon_sym_BSLASHifeval] = ACTIONS(161),
        [anon_sym_BSLASHendif] = ACTIONS(161),
        [anon_sym_BANG] = ACTIONS(161),
        [anon_sym_DQUOTE] = ACTIONS(161),
        [anon_sym_POUND] = ACTIONS(161),
        [anon_sym_DOLLAR] = ACTIONS(161),
        [anon_sym_PERCENT] = ACTIONS(161),
        [anon_sym_AMP] = ACTIONS(161),
        [anon_sym_SQUOTE] = ACTIONS(161),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_RPAREN] = ACTIONS(161),
        [anon_sym_STAR] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(161),
        [anon_sym_COMMA] = ACTIONS(161),
        [anon_sym_DASH] = ACTIONS(161),
        [anon_sym_DOT] = ACTIONS(161),
        [anon_sym_SLASH] = ACTIONS(161),
        [anon_sym_COLON2] = ACTIONS(161),
        [anon_sym_SEMI] = ACTIONS(161),
        [anon_sym_LT] = ACTIONS(161),
        [anon_sym_EQ] = ACTIONS(161),
        [anon_sym_GT] = ACTIONS(161),
        [anon_sym_QMARK] = ACTIONS(161),
        [anon_sym_AT] = ACTIONS(161),
        [anon_sym_BSLASH] = ACTIONS(161),
        [anon_sym_CARET] = ACTIONS(161),
        [anon_sym__] = ACTIONS(161),
        [anon_sym_BQUOTE] = ACTIONS(161),
        [anon_sym_PIPE] = ACTIONS(161),
        [anon_sym_TILDE] = ACTIONS(161),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(161),
        [sym_email] = ACTIONS(161),
        [anon_sym_http] = ACTIONS(161),
        [anon_sym_https] = ACTIONS(161),
        [anon_sym_file] = ACTIONS(161),
        [anon_sym_ftp] = ACTIONS(161),
        [anon_sym_irc] = ACTIONS(161),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(161),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(161),
        [anon_sym_LT_LT] = ACTIONS(161),
        [anon_sym_STAR2] = ACTIONS(161),
        [anon_sym_STAR_STAR] = ACTIONS(161),
        [anon_sym__2] = ACTIONS(161),
        [anon_sym___] = ACTIONS(161),
        [anon_sym_BQUOTE2] = ACTIONS(161),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(161),
        [anon_sym_POUND2] = ACTIONS(161),
        [anon_sym_POUND_POUND] = ACTIONS(161),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(163),
        [anon_sym_kbd] = ACTIONS(165),
        [anon_sym_btn] = ACTIONS(165),
        [anon_sym_image] = ACTIONS(165),
        [anon_sym_audio] = ACTIONS(165),
        [anon_sym_video] = ACTIONS(165),
        [anon_sym_icon] = ACTIONS(165),
        [anon_sym_pass] = ACTIONS(165),
        [anon_sym_link] = ACTIONS(165),
        [anon_sym_mailto] = ACTIONS(165),
        [anon_sym_menu] = ACTIONS(165),
        [anon_sym_latexmath] = ACTIONS(165),
        [anon_sym_asciimath] = ACTIONS(165),
        [anon_sym_footnote] = ACTIONS(165),
        [anon_sym_footnoteref] = ACTIONS(165),
        [anon_sym_anchor] = ACTIONS(165),
        [anon_sym_xref] = ACTIONS(165),
        [anon_sym_ifdef] = ACTIONS(165),
        [anon_sym_ifndef] = ACTIONS(165),
        [anon_sym_ifeval] = ACTIONS(165),
        [anon_sym_endif] = ACTIONS(165),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_RBRACK] = ACTIONS(165),
        [anon_sym_LBRACE] = ACTIONS(165),
        [anon_sym_RBRACE] = ACTIONS(165),
        [sym__word_no_digit] = ACTIONS(165),
        [sym__digits] = ACTIONS(165),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(165),
        [anon_sym_BSLASH_PLUS] = ACTIONS(165),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(165),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(165),
        [anon_sym_BSLASH_STAR] = ACTIONS(165),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(165),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(165),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(165),
        [anon_sym_BSLASH_POUND] = ACTIONS(165),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(165),
        [anon_sym_BSLASH_] = ACTIONS(165),
        [anon_sym_BSLASH__] = ACTIONS(165),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(165),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(165),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(165),
        [anon_sym_BSLASHkbd] = ACTIONS(165),
        [anon_sym_BSLASHbtn] = ACTIONS(165),
        [anon_sym_BSLASHimage] = ACTIONS(165),
        [anon_sym_BSLASHaudio] = ACTIONS(165),
        [anon_sym_BSLASHvideo] = ACTIONS(165),
        [anon_sym_BSLASHicon] = ACTIONS(165),
        [anon_sym_BSLASHpass] = ACTIONS(165),
        [anon_sym_BSLASHlink] = ACTIONS(165),
        [anon_sym_BSLASHmailto] = ACTIONS(165),
        [anon_sym_BSLASHmenu] = ACTIONS(165),
        [anon_sym_BSLASHlatexmath] = ACTIONS(165),
        [anon_sym_BSLASHasciimath] = ACTIONS(165),
        [anon_sym_BSLASHfootnote] = ACTIONS(165),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(165),
        [anon_sym_BSLASHanchor] = ACTIONS(165),
        [anon_sym_BSLASHxref] = ACTIONS(165),
        [anon_sym_BSLASHifdef] = ACTIONS(165),
        [anon_sym_BSLASHifndef] = ACTIONS(165),
        [anon_sym_BSLASHifeval] = ACTIONS(165),
        [anon_sym_BSLASHendif] = ACTIONS(165),
        [anon_sym_BANG] = ACTIONS(165),
        [anon_sym_DQUOTE] = ACTIONS(165),
        [anon_sym_POUND] = ACTIONS(165),
        [anon_sym_DOLLAR] = ACTIONS(165),
        [anon_sym_PERCENT] = ACTIONS(165),
        [anon_sym_AMP] = ACTIONS(165),
        [anon_sym_SQUOTE] = ACTIONS(165),
        [anon_sym_LPAREN] = ACTIONS(165),
        [anon_sym_RPAREN] = ACTIONS(165),
        [anon_sym_STAR] = ACTIONS(165),
        [anon_sym_PLUS] = ACTIONS(165),
        [anon_sym_COMMA] = ACTIONS(165),
        [anon_sym_DASH] = ACTIONS(165),
        [anon_sym_DOT] = ACTIONS(165),
        [anon_sym_SLASH] = ACTIONS(165),
        [anon_sym_COLON2] = ACTIONS(165),
        [anon_sym_SEMI] = ACTIONS(165),
        [anon_sym_LT] = ACTIONS(165),
        [anon_sym_EQ] = ACTIONS(165),
        [anon_sym_GT] = ACTIONS(165),
        [anon_sym_QMARK] = ACTIONS(165),
        [anon_sym_AT] = ACTIONS(165),
        [anon_sym_BSLASH] = ACTIONS(165),
        [anon_sym_CARET] = ACTIONS(165),
        [anon_sym__] = ACTIONS(165),
        [anon_sym_BQUOTE] = ACTIONS(165),
        [anon_sym_PIPE] = ACTIONS(165),
        [anon_sym_TILDE] = ACTIONS(165),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(165),
        [sym_email] = ACTIONS(165),
        [anon_sym_http] = ACTIONS(165),
        [anon_sym_https] = ACTIONS(165),
        [anon_sym_file] = ACTIONS(165),
        [anon_sym_ftp] = ACTIONS(165),
        [anon_sym_irc] = ACTIONS(165),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(165),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(165),
        [anon_sym_LT_LT] = ACTIONS(165),
        [anon_sym_STAR2] = ACTIONS(165),
        [anon_sym_STAR_STAR] = ACTIONS(165),
        [anon_sym__2] = ACTIONS(165),
        [anon_sym___] = ACTIONS(165),
        [anon_sym_BQUOTE2] = ACTIONS(165),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(165),
        [anon_sym_POUND2] = ACTIONS(165),
        [anon_sym_POUND_POUND] = ACTIONS(165),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(167),
        [anon_sym_kbd] = ACTIONS(169),
        [anon_sym_btn] = ACTIONS(169),
        [anon_sym_image] = ACTIONS(169),
        [anon_sym_audio] = ACTIONS(169),
        [anon_sym_video] = ACTIONS(169),
        [anon_sym_icon] = ACTIONS(169),
        [anon_sym_pass] = ACTIONS(169),
        [anon_sym_link] = ACTIONS(169),
        [anon_sym_mailto] = ACTIONS(169),
        [anon_sym_menu] = ACTIONS(169),
        [anon_sym_latexmath] = ACTIONS(169),
        [anon_sym_asciimath] = ACTIONS(169),
        [anon_sym_footnote] = ACTIONS(169),
        [anon_sym_footnoteref] = ACTIONS(169),
        [anon_sym_anchor] = ACTIONS(169),
        [anon_sym_xref] = ACTIONS(169),
        [anon_sym_ifdef] = ACTIONS(169),
        [anon_sym_ifndef] = ACTIONS(169),
        [anon_sym_ifeval] = ACTIONS(169),
        [anon_sym_endif] = ACTIONS(169),
        [anon_sym_LBRACK] = ACTIONS(169),
        [anon_sym_RBRACK] = ACTIONS(169),
        [anon_sym_LBRACE] = ACTIONS(169),
        [anon_sym_RBRACE] = ACTIONS(169),
        [sym__word_no_digit] = ACTIONS(169),
        [sym__digits] = ACTIONS(169),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(169),
        [anon_sym_BSLASH_PLUS] = ACTIONS(169),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(169),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(169),
        [anon_sym_BSLASH_STAR] = ACTIONS(169),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(169),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(169),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(169),
        [anon_sym_BSLASH_POUND] = ACTIONS(169),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(169),
        [anon_sym_BSLASH_] = ACTIONS(169),
        [anon_sym_BSLASH__] = ACTIONS(169),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(169),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(169),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(169),
        [anon_sym_BSLASHkbd] = ACTIONS(169),
        [anon_sym_BSLASHbtn] = ACTIONS(169),
        [anon_sym_BSLASHimage] = ACTIONS(169),
        [anon_sym_BSLASHaudio] = ACTIONS(169),
        [anon_sym_BSLASHvideo] = ACTIONS(169),
        [anon_sym_BSLASHicon] = ACTIONS(169),
        [anon_sym_BSLASHpass] = ACTIONS(169),
        [anon_sym_BSLASHlink] = ACTIONS(169),
        [anon_sym_BSLASHmailto] = ACTIONS(169),
        [anon_sym_BSLASHmenu] = ACTIONS(169),
        [anon_sym_BSLASHlatexmath] = ACTIONS(169),
        [anon_sym_BSLASHasciimath] = ACTIONS(169),
        [anon_sym_BSLASHfootnote] = ACTIONS(169),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(169),
        [anon_sym_BSLASHanchor] = ACTIONS(169),
        [anon_sym_BSLASHxref] = ACTIONS(169),
        [anon_sym_BSLASHifdef] = ACTIONS(169),
        [anon_sym_BSLASHifndef] = ACTIONS(169),
        [anon_sym_BSLASHifeval] = ACTIONS(169),
        [anon_sym_BSLASHendif] = ACTIONS(169),
        [anon_sym_BANG] = ACTIONS(169),
        [anon_sym_DQUOTE] = ACTIONS(169),
        [anon_sym_POUND] = ACTIONS(169),
        [anon_sym_DOLLAR] = ACTIONS(169),
        [anon_sym_PERCENT] = ACTIONS(169),
        [anon_sym_AMP] = ACTIONS(169),
        [anon_sym_SQUOTE] = ACTIONS(169),
        [anon_sym_LPAREN] = ACTIONS(169),
        [anon_sym_RPAREN] = ACTIONS(169),
        [anon_sym_STAR] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(169),
        [anon_sym_COMMA] = ACTIONS(169),
        [anon_sym_DASH] = ACTIONS(169),
        [anon_sym_DOT] = ACTIONS(169),
        [anon_sym_SLASH] = ACTIONS(169),
        [anon_sym_COLON2] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_LT] = ACTIONS(169),
        [anon_sym_EQ] = ACTIONS(169),
        [anon_sym_GT] = ACTIONS(169),
        [anon_sym_QMARK] = ACTIONS(169),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_BSLASH] = ACTIONS(169),
        [anon_sym_CARET] = ACTIONS(169),
        [anon_sym__] = ACTIONS(169),
        [anon_sym_BQUOTE] = ACTIONS(169),
        [anon_sym_PIPE] = ACTIONS(169),
        [anon_sym_TILDE] = ACTIONS(169),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(169),
        [sym_email] = ACTIONS(169),
        [anon_sym_http] = ACTIONS(169),
        [anon_sym_https] = ACTIONS(169),
        [anon_sym_file] = ACTIONS(169),
        [anon_sym_ftp] = ACTIONS(169),
        [anon_sym_irc] = ACTIONS(169),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(169),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(169),
        [anon_sym_LT_LT] = ACTIONS(169),
        [anon_sym_STAR2] = ACTIONS(169),
        [anon_sym_STAR_STAR] = ACTIONS(169),
        [anon_sym__2] = ACTIONS(169),
        [anon_sym___] = ACTIONS(169),
        [anon_sym_BQUOTE2] = ACTIONS(169),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(169),
        [anon_sym_POUND2] = ACTIONS(169),
        [anon_sym_POUND_POUND] = ACTIONS(169),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(171),
        [anon_sym_kbd] = ACTIONS(173),
        [anon_sym_btn] = ACTIONS(173),
        [anon_sym_image] = ACTIONS(173),
        [anon_sym_audio] = ACTIONS(173),
        [anon_sym_video] = ACTIONS(173),
        [anon_sym_icon] = ACTIONS(173),
        [anon_sym_pass] = ACTIONS(173),
        [anon_sym_link] = ACTIONS(173),
        [anon_sym_mailto] = ACTIONS(173),
        [anon_sym_menu] = ACTIONS(173),
        [anon_sym_latexmath] = ACTIONS(173),
        [anon_sym_asciimath] = ACTIONS(173),
        [anon_sym_footnote] = ACTIONS(173),
        [anon_sym_footnoteref] = ACTIONS(173),
        [anon_sym_anchor] = ACTIONS(173),
        [anon_sym_xref] = ACTIONS(173),
        [anon_sym_ifdef] = ACTIONS(173),
        [anon_sym_ifndef] = ACTIONS(173),
        [anon_sym_ifeval] = ACTIONS(173),
        [anon_sym_endif] = ACTIONS(173),
        [anon_sym_LBRACK] = ACTIONS(173),
        [anon_sym_RBRACK] = ACTIONS(173),
        [anon_sym_LBRACE] = ACTIONS(173),
        [anon_sym_RBRACE] = ACTIONS(173),
        [sym__word_no_digit] = ACTIONS(173),
        [sym__digits] = ACTIONS(173),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(173),
        [anon_sym_BSLASH_PLUS] = ACTIONS(173),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(173),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(173),
        [anon_sym_BSLASH_STAR] = ACTIONS(173),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(173),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(173),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(173),
        [anon_sym_BSLASH_POUND] = ACTIONS(173),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(173),
        [anon_sym_BSLASH_] = ACTIONS(173),
        [anon_sym_BSLASH__] = ACTIONS(173),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(173),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(173),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(173),
        [anon_sym_BSLASHkbd] = ACTIONS(173),
        [anon_sym_BSLASHbtn] = ACTIONS(173),
        [anon_sym_BSLASHimage] = ACTIONS(173),
        [anon_sym_BSLASHaudio] = ACTIONS(173),
        [anon_sym_BSLASHvideo] = ACTIONS(173),
        [anon_sym_BSLASHicon] = ACTIONS(173),
        [anon_sym_BSLASHpass] = ACTIONS(173),
        [anon_sym_BSLASHlink] = ACTIONS(173),
        [anon_sym_BSLASHmailto] = ACTIONS(173),
        [anon_sym_BSLASHmenu] = ACTIONS(173),
        [anon_sym_BSLASHlatexmath] = ACTIONS(173),
        [anon_sym_BSLASHasciimath] = ACTIONS(173),
        [anon_sym_BSLASHfootnote] = ACTIONS(173),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(173),
        [anon_sym_BSLASHanchor] = ACTIONS(173),
        [anon_sym_BSLASHxref] = ACTIONS(173),
        [anon_sym_BSLASHifdef] = ACTIONS(173),
        [anon_sym_BSLASHifndef] = ACTIONS(173),
        [anon_sym_BSLASHifeval] = ACTIONS(173),
        [anon_sym_BSLASHendif] = ACTIONS(173),
        [anon_sym_BANG] = ACTIONS(173),
        [anon_sym_DQUOTE] = ACTIONS(173),
        [anon_sym_POUND] = ACTIONS(173),
        [anon_sym_DOLLAR] = ACTIONS(173),
        [anon_sym_PERCENT] = ACTIONS(173),
        [anon_sym_AMP] = ACTIONS(173),
        [anon_sym_SQUOTE] = ACTIONS(173),
        [anon_sym_LPAREN] = ACTIONS(173),
        [anon_sym_RPAREN] = ACTIONS(173),
        [anon_sym_STAR] = ACTIONS(173),
        [anon_sym_PLUS] = ACTIONS(173),
        [anon_sym_COMMA] = ACTIONS(173),
        [anon_sym_DASH] = ACTIONS(173),
        [anon_sym_DOT] = ACTIONS(173),
        [anon_sym_SLASH] = ACTIONS(173),
        [anon_sym_COLON2] = ACTIONS(173),
        [anon_sym_SEMI] = ACTIONS(173),
        [anon_sym_LT] = ACTIONS(173),
        [anon_sym_EQ] = ACTIONS(173),
        [anon_sym_GT] = ACTIONS(173),
        [anon_sym_QMARK] = ACTIONS(173),
        [anon_sym_AT] = ACTIONS(173),
        [anon_sym_BSLASH] = ACTIONS(173),
        [anon_sym_CARET] = ACTIONS(173),
        [anon_sym__] = ACTIONS(173),
        [anon_sym_BQUOTE] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(173),
        [anon_sym_TILDE] = ACTIONS(173),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(173),
        [sym_email] = ACTIONS(173),
        [anon_sym_http] = ACTIONS(173),
        [anon_sym_https] = ACTIONS(173),
        [anon_sym_file] = ACTIONS(173),
        [anon_sym_ftp] = ACTIONS(173),
        [anon_sym_irc] = ACTIONS(173),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(173),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(173),
        [anon_sym_LT_LT] = ACTIONS(173),
        [anon_sym_STAR2] = ACTIONS(173),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym__2] = ACTIONS(173),
        [anon_sym___] = ACTIONS(173),
        [anon_sym_BQUOTE2] = ACTIONS(173),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(173),
        [anon_sym_POUND2] = ACTIONS(173),
        [anon_sym_POUND_POUND] = ACTIONS(173),
    },
    [22] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_kbd] = ACTIONS(177),
        [anon_sym_btn] = ACTIONS(177),
        [anon_sym_image] = ACTIONS(177),
        [anon_sym_audio] = ACTIONS(177),
        [anon_sym_video] = ACTIONS(177),
        [anon_sym_icon] = ACTIONS(177),
        [anon_sym_pass] = ACTIONS(177),
        [anon_sym_link] = ACTIONS(177),
        [anon_sym_mailto] = ACTIONS(177),
        [anon_sym_menu] = ACTIONS(177),
        [anon_sym_latexmath] = ACTIONS(177),
        [anon_sym_asciimath] = ACTIONS(177),
        [anon_sym_footnote] = ACTIONS(177),
        [anon_sym_footnoteref] = ACTIONS(177),
        [anon_sym_anchor] = ACTIONS(177),
        [anon_sym_xref] = ACTIONS(177),
        [anon_sym_ifdef] = ACTIONS(177),
        [anon_sym_ifndef] = ACTIONS(177),
        [anon_sym_ifeval] = ACTIONS(177),
        [anon_sym_endif] = ACTIONS(177),
        [anon_sym_LBRACK] = ACTIONS(179),
        [anon_sym_RBRACK] = ACTIONS(177),
        [anon_sym_LBRACE] = ACTIONS(177),
        [anon_sym_RBRACE] = ACTIONS(177),
        [sym__word_no_digit] = ACTIONS(177),
        [sym__digits] = ACTIONS(177),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(177),
        [anon_sym_BSLASH_PLUS] = ACTIONS(177),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(177),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(177),
        [anon_sym_BSLASH_STAR] = ACTIONS(177),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(177),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(177),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(177),
        [anon_sym_BSLASH_POUND] = ACTIONS(177),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(177),
        [anon_sym_BSLASH_] = ACTIONS(177),
        [anon_sym_BSLASH__] = ACTIONS(177),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(177),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(177),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(177),
        [anon_sym_BSLASHkbd] = ACTIONS(177),
        [anon_sym_BSLASHbtn] = ACTIONS(177),
        [anon_sym_BSLASHimage] = ACTIONS(177),
        [anon_sym_BSLASHaudio] = ACTIONS(177),
        [anon_sym_BSLASHvideo] = ACTIONS(177),
        [anon_sym_BSLASHicon] = ACTIONS(177),
        [anon_sym_BSLASHpass] = ACTIONS(177),
        [anon_sym_BSLASHlink] = ACTIONS(177),
        [anon_sym_BSLASHmailto] = ACTIONS(177),
        [anon_sym_BSLASHmenu] = ACTIONS(177),
        [anon_sym_BSLASHlatexmath] = ACTIONS(177),
        [anon_sym_BSLASHasciimath] = ACTIONS(177),
        [anon_sym_BSLASHfootnote] = ACTIONS(177),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(177),
        [anon_sym_BSLASHanchor] = ACTIONS(177),
        [anon_sym_BSLASHxref] = ACTIONS(177),
        [anon_sym_BSLASHifdef] = ACTIONS(177),
        [anon_sym_BSLASHifndef] = ACTIONS(177),
        [anon_sym_BSLASHifeval] = ACTIONS(177),
        [anon_sym_BSLASHendif] = ACTIONS(177),
        [anon_sym_BANG] = ACTIONS(177),
        [anon_sym_DQUOTE] = ACTIONS(177),
        [anon_sym_POUND] = ACTIONS(177),
        [anon_sym_DOLLAR] = ACTIONS(177),
        [anon_sym_PERCENT] = ACTIONS(177),
        [anon_sym_AMP] = ACTIONS(177),
        [anon_sym_SQUOTE] = ACTIONS(177),
        [anon_sym_LPAREN] = ACTIONS(177),
        [anon_sym_RPAREN] = ACTIONS(177),
        [anon_sym_STAR] = ACTIONS(177),
        [anon_sym_PLUS] = ACTIONS(177),
        [anon_sym_COMMA] = ACTIONS(177),
        [anon_sym_DASH] = ACTIONS(177),
        [anon_sym_DOT] = ACTIONS(177),
        [anon_sym_SLASH] = ACTIONS(177),
        [anon_sym_COLON2] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(177),
        [anon_sym_LT] = ACTIONS(177),
        [anon_sym_EQ] = ACTIONS(177),
        [anon_sym_GT] = ACTIONS(177),
        [anon_sym_QMARK] = ACTIONS(177),
        [anon_sym_AT] = ACTIONS(177),
        [anon_sym_BSLASH] = ACTIONS(177),
        [anon_sym_CARET] = ACTIONS(177),
        [anon_sym__] = ACTIONS(177),
        [anon_sym_BQUOTE] = ACTIONS(177),
        [anon_sym_PIPE] = ACTIONS(177),
        [anon_sym_TILDE] = ACTIONS(177),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(177),
        [sym_email] = ACTIONS(177),
        [anon_sym_http] = ACTIONS(177),
        [anon_sym_https] = ACTIONS(177),
        [anon_sym_file] = ACTIONS(177),
        [anon_sym_ftp] = ACTIONS(177),
        [anon_sym_irc] = ACTIONS(177),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(177),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(177),
        [anon_sym_LT_LT] = ACTIONS(177),
        [anon_sym_STAR2] = ACTIONS(177),
        [anon_sym_STAR_STAR] = ACTIONS(177),
        [anon_sym__2] = ACTIONS(177),
        [anon_sym___] = ACTIONS(177),
        [anon_sym_BQUOTE2] = ACTIONS(177),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(177),
        [anon_sym_POUND2] = ACTIONS(177),
        [anon_sym_POUND_POUND] = ACTIONS(177),
    },
    [23] = {
        [ts_builtin_sym_end] = ACTIONS(181),
        [anon_sym_kbd] = ACTIONS(183),
        [anon_sym_btn] = ACTIONS(183),
        [anon_sym_image] = ACTIONS(183),
        [anon_sym_audio] = ACTIONS(183),
        [anon_sym_video] = ACTIONS(183),
        [anon_sym_icon] = ACTIONS(183),
        [anon_sym_pass] = ACTIONS(183),
        [anon_sym_link] = ACTIONS(183),
        [anon_sym_mailto] = ACTIONS(183),
        [anon_sym_menu] = ACTIONS(183),
        [anon_sym_latexmath] = ACTIONS(183),
        [anon_sym_asciimath] = ACTIONS(183),
        [anon_sym_footnote] = ACTIONS(183),
        [anon_sym_footnoteref] = ACTIONS(183),
        [anon_sym_anchor] = ACTIONS(183),
        [anon_sym_xref] = ACTIONS(183),
        [anon_sym_ifdef] = ACTIONS(183),
        [anon_sym_ifndef] = ACTIONS(183),
        [anon_sym_ifeval] = ACTIONS(183),
        [anon_sym_endif] = ACTIONS(183),
        [anon_sym_LBRACK] = ACTIONS(183),
        [anon_sym_RBRACK] = ACTIONS(183),
        [anon_sym_LBRACE] = ACTIONS(183),
        [anon_sym_RBRACE] = ACTIONS(183),
        [sym__word_no_digit] = ACTIONS(183),
        [sym__digits] = ACTIONS(183),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(183),
        [anon_sym_BSLASH_PLUS] = ACTIONS(183),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(183),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(183),
        [anon_sym_BSLASH_STAR] = ACTIONS(183),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(183),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(183),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(183),
        [anon_sym_BSLASH_POUND] = ACTIONS(183),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(183),
        [anon_sym_BSLASH_] = ACTIONS(183),
        [anon_sym_BSLASH__] = ACTIONS(183),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(183),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(183),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(183),
        [anon_sym_BSLASHkbd] = ACTIONS(183),
        [anon_sym_BSLASHbtn] = ACTIONS(183),
        [anon_sym_BSLASHimage] = ACTIONS(183),
        [anon_sym_BSLASHaudio] = ACTIONS(183),
        [anon_sym_BSLASHvideo] = ACTIONS(183),
        [anon_sym_BSLASHicon] = ACTIONS(183),
        [anon_sym_BSLASHpass] = ACTIONS(183),
        [anon_sym_BSLASHlink] = ACTIONS(183),
        [anon_sym_BSLASHmailto] = ACTIONS(183),
        [anon_sym_BSLASHmenu] = ACTIONS(183),
        [anon_sym_BSLASHlatexmath] = ACTIONS(183),
        [anon_sym_BSLASHasciimath] = ACTIONS(183),
        [anon_sym_BSLASHfootnote] = ACTIONS(183),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(183),
        [anon_sym_BSLASHanchor] = ACTIONS(183),
        [anon_sym_BSLASHxref] = ACTIONS(183),
        [anon_sym_BSLASHifdef] = ACTIONS(183),
        [anon_sym_BSLASHifndef] = ACTIONS(183),
        [anon_sym_BSLASHifeval] = ACTIONS(183),
        [anon_sym_BSLASHendif] = ACTIONS(183),
        [anon_sym_BANG] = ACTIONS(183),
        [anon_sym_DQUOTE] = ACTIONS(183),
        [anon_sym_POUND] = ACTIONS(183),
        [anon_sym_DOLLAR] = ACTIONS(183),
        [anon_sym_PERCENT] = ACTIONS(183),
        [anon_sym_AMP] = ACTIONS(183),
        [anon_sym_SQUOTE] = ACTIONS(183),
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_RPAREN] = ACTIONS(183),
        [anon_sym_STAR] = ACTIONS(183),
        [anon_sym_PLUS] = ACTIONS(183),
        [anon_sym_COMMA] = ACTIONS(183),
        [anon_sym_DASH] = ACTIONS(183),
        [anon_sym_DOT] = ACTIONS(183),
        [anon_sym_SLASH] = ACTIONS(183),
        [anon_sym_COLON2] = ACTIONS(183),
        [anon_sym_SEMI] = ACTIONS(183),
        [anon_sym_LT] = ACTIONS(183),
        [anon_sym_EQ] = ACTIONS(183),
        [anon_sym_GT] = ACTIONS(183),
        [anon_sym_QMARK] = ACTIONS(183),
        [anon_sym_AT] = ACTIONS(183),
        [anon_sym_BSLASH] = ACTIONS(183),
        [anon_sym_CARET] = ACTIONS(183),
        [anon_sym__] = ACTIONS(183),
        [anon_sym_BQUOTE] = ACTIONS(183),
        [anon_sym_PIPE] = ACTIONS(183),
        [anon_sym_TILDE] = ACTIONS(183),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(183),
        [sym_email] = ACTIONS(183),
        [anon_sym_http] = ACTIONS(183),
        [anon_sym_https] = ACTIONS(183),
        [anon_sym_file] = ACTIONS(183),
        [anon_sym_ftp] = ACTIONS(183),
        [anon_sym_irc] = ACTIONS(183),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(183),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(183),
        [anon_sym_LT_LT] = ACTIONS(183),
        [anon_sym_STAR2] = ACTIONS(183),
        [anon_sym_STAR_STAR] = ACTIONS(183),
        [anon_sym__2] = ACTIONS(183),
        [anon_sym___] = ACTIONS(183),
        [anon_sym_BQUOTE2] = ACTIONS(183),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(183),
        [anon_sym_POUND2] = ACTIONS(183),
        [anon_sym_POUND_POUND] = ACTIONS(183),
    },
    [24] = {
        [ts_builtin_sym_end] = ACTIONS(185),
        [anon_sym_kbd] = ACTIONS(187),
        [anon_sym_btn] = ACTIONS(187),
        [anon_sym_image] = ACTIONS(187),
        [anon_sym_audio] = ACTIONS(187),
        [anon_sym_video] = ACTIONS(187),
        [anon_sym_icon] = ACTIONS(187),
        [anon_sym_pass] = ACTIONS(187),
        [anon_sym_link] = ACTIONS(187),
        [anon_sym_mailto] = ACTIONS(187),
        [anon_sym_menu] = ACTIONS(187),
        [anon_sym_latexmath] = ACTIONS(187),
        [anon_sym_asciimath] = ACTIONS(187),
        [anon_sym_footnote] = ACTIONS(187),
        [anon_sym_footnoteref] = ACTIONS(187),
        [anon_sym_anchor] = ACTIONS(187),
        [anon_sym_xref] = ACTIONS(187),
        [anon_sym_ifdef] = ACTIONS(187),
        [anon_sym_ifndef] = ACTIONS(187),
        [anon_sym_ifeval] = ACTIONS(187),
        [anon_sym_endif] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(187),
        [anon_sym_RBRACK] = ACTIONS(187),
        [anon_sym_LBRACE] = ACTIONS(187),
        [anon_sym_RBRACE] = ACTIONS(187),
        [sym__word_no_digit] = ACTIONS(187),
        [sym__digits] = ACTIONS(187),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(187),
        [anon_sym_BSLASH_PLUS] = ACTIONS(187),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(187),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(187),
        [anon_sym_BSLASH_STAR] = ACTIONS(187),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(187),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(187),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(187),
        [anon_sym_BSLASH_POUND] = ACTIONS(187),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(187),
        [anon_sym_BSLASH_] = ACTIONS(187),
        [anon_sym_BSLASH__] = ACTIONS(187),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(187),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(187),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(187),
        [anon_sym_BSLASHkbd] = ACTIONS(187),
        [anon_sym_BSLASHbtn] = ACTIONS(187),
        [anon_sym_BSLASHimage] = ACTIONS(187),
        [anon_sym_BSLASHaudio] = ACTIONS(187),
        [anon_sym_BSLASHvideo] = ACTIONS(187),
        [anon_sym_BSLASHicon] = ACTIONS(187),
        [anon_sym_BSLASHpass] = ACTIONS(187),
        [anon_sym_BSLASHlink] = ACTIONS(187),
        [anon_sym_BSLASHmailto] = ACTIONS(187),
        [anon_sym_BSLASHmenu] = ACTIONS(187),
        [anon_sym_BSLASHlatexmath] = ACTIONS(187),
        [anon_sym_BSLASHasciimath] = ACTIONS(187),
        [anon_sym_BSLASHfootnote] = ACTIONS(187),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(187),
        [anon_sym_BSLASHanchor] = ACTIONS(187),
        [anon_sym_BSLASHxref] = ACTIONS(187),
        [anon_sym_BSLASHifdef] = ACTIONS(187),
        [anon_sym_BSLASHifndef] = ACTIONS(187),
        [anon_sym_BSLASHifeval] = ACTIONS(187),
        [anon_sym_BSLASHendif] = ACTIONS(187),
        [anon_sym_BANG] = ACTIONS(187),
        [anon_sym_DQUOTE] = ACTIONS(187),
        [anon_sym_POUND] = ACTIONS(187),
        [anon_sym_DOLLAR] = ACTIONS(187),
        [anon_sym_PERCENT] = ACTIONS(187),
        [anon_sym_AMP] = ACTIONS(187),
        [anon_sym_SQUOTE] = ACTIONS(187),
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_RPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(187),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_COMMA] = ACTIONS(187),
        [anon_sym_DASH] = ACTIONS(187),
        [anon_sym_DOT] = ACTIONS(187),
        [anon_sym_SLASH] = ACTIONS(187),
        [anon_sym_COLON2] = ACTIONS(187),
        [anon_sym_SEMI] = ACTIONS(187),
        [anon_sym_LT] = ACTIONS(187),
        [anon_sym_EQ] = ACTIONS(187),
        [anon_sym_GT] = ACTIONS(187),
        [anon_sym_QMARK] = ACTIONS(187),
        [anon_sym_AT] = ACTIONS(187),
        [anon_sym_BSLASH] = ACTIONS(187),
        [anon_sym_CARET] = ACTIONS(187),
        [anon_sym__] = ACTIONS(187),
        [anon_sym_BQUOTE] = ACTIONS(187),
        [anon_sym_PIPE] = ACTIONS(187),
        [anon_sym_TILDE] = ACTIONS(187),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(187),
        [sym_email] = ACTIONS(187),
        [anon_sym_http] = ACTIONS(187),
        [anon_sym_https] = ACTIONS(187),
        [anon_sym_file] = ACTIONS(187),
        [anon_sym_ftp] = ACTIONS(187),
        [anon_sym_irc] = ACTIONS(187),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(187),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(187),
        [anon_sym_LT_LT] = ACTIONS(187),
        [anon_sym_STAR2] = ACTIONS(187),
        [anon_sym_STAR_STAR] = ACTIONS(187),
        [anon_sym__2] = ACTIONS(187),
        [anon_sym___] = ACTIONS(187),
        [anon_sym_BQUOTE2] = ACTIONS(187),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(187),
        [anon_sym_POUND2] = ACTIONS(187),
        [anon_sym_POUND_POUND] = ACTIONS(187),
    },
    [25] = {
        [ts_builtin_sym_end] = ACTIONS(189),
        [anon_sym_kbd] = ACTIONS(191),
        [anon_sym_btn] = ACTIONS(191),
        [anon_sym_image] = ACTIONS(191),
        [anon_sym_audio] = ACTIONS(191),
        [anon_sym_video] = ACTIONS(191),
        [anon_sym_icon] = ACTIONS(191),
        [anon_sym_pass] = ACTIONS(191),
        [anon_sym_link] = ACTIONS(191),
        [anon_sym_mailto] = ACTIONS(191),
        [anon_sym_menu] = ACTIONS(191),
        [anon_sym_latexmath] = ACTIONS(191),
        [anon_sym_asciimath] = ACTIONS(191),
        [anon_sym_footnote] = ACTIONS(191),
        [anon_sym_footnoteref] = ACTIONS(191),
        [anon_sym_anchor] = ACTIONS(191),
        [anon_sym_xref] = ACTIONS(191),
        [anon_sym_ifdef] = ACTIONS(191),
        [anon_sym_ifndef] = ACTIONS(191),
        [anon_sym_ifeval] = ACTIONS(191),
        [anon_sym_endif] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(191),
        [anon_sym_RBRACK] = ACTIONS(191),
        [anon_sym_LBRACE] = ACTIONS(191),
        [anon_sym_RBRACE] = ACTIONS(191),
        [sym__word_no_digit] = ACTIONS(191),
        [sym__digits] = ACTIONS(191),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(191),
        [anon_sym_BSLASH_PLUS] = ACTIONS(191),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(191),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(191),
        [anon_sym_BSLASH_STAR] = ACTIONS(191),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(191),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(191),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(191),
        [anon_sym_BSLASH_POUND] = ACTIONS(191),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(191),
        [anon_sym_BSLASH_] = ACTIONS(191),
        [anon_sym_BSLASH__] = ACTIONS(191),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(191),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(191),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(191),
        [anon_sym_BSLASHkbd] = ACTIONS(191),
        [anon_sym_BSLASHbtn] = ACTIONS(191),
        [anon_sym_BSLASHimage] = ACTIONS(191),
        [anon_sym_BSLASHaudio] = ACTIONS(191),
        [anon_sym_BSLASHvideo] = ACTIONS(191),
        [anon_sym_BSLASHicon] = ACTIONS(191),
        [anon_sym_BSLASHpass] = ACTIONS(191),
        [anon_sym_BSLASHlink] = ACTIONS(191),
        [anon_sym_BSLASHmailto] = ACTIONS(191),
        [anon_sym_BSLASHmenu] = ACTIONS(191),
        [anon_sym_BSLASHlatexmath] = ACTIONS(191),
        [anon_sym_BSLASHasciimath] = ACTIONS(191),
        [anon_sym_BSLASHfootnote] = ACTIONS(191),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(191),
        [anon_sym_BSLASHanchor] = ACTIONS(191),
        [anon_sym_BSLASHxref] = ACTIONS(191),
        [anon_sym_BSLASHifdef] = ACTIONS(191),
        [anon_sym_BSLASHifndef] = ACTIONS(191),
        [anon_sym_BSLASHifeval] = ACTIONS(191),
        [anon_sym_BSLASHendif] = ACTIONS(191),
        [anon_sym_BANG] = ACTIONS(191),
        [anon_sym_DQUOTE] = ACTIONS(191),
        [anon_sym_POUND] = ACTIONS(191),
        [anon_sym_DOLLAR] = ACTIONS(191),
        [anon_sym_PERCENT] = ACTIONS(191),
        [anon_sym_AMP] = ACTIONS(191),
        [anon_sym_SQUOTE] = ACTIONS(191),
        [anon_sym_LPAREN] = ACTIONS(191),
        [anon_sym_RPAREN] = ACTIONS(191),
        [anon_sym_STAR] = ACTIONS(191),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_COMMA] = ACTIONS(191),
        [anon_sym_DASH] = ACTIONS(191),
        [anon_sym_DOT] = ACTIONS(191),
        [anon_sym_SLASH] = ACTIONS(191),
        [anon_sym_COLON2] = ACTIONS(191),
        [anon_sym_SEMI] = ACTIONS(191),
        [anon_sym_LT] = ACTIONS(191),
        [anon_sym_EQ] = ACTIONS(191),
        [anon_sym_GT] = ACTIONS(191),
        [anon_sym_QMARK] = ACTIONS(191),
        [anon_sym_AT] = ACTIONS(191),
        [anon_sym_BSLASH] = ACTIONS(191),
        [anon_sym_CARET] = ACTIONS(191),
        [anon_sym__] = ACTIONS(191),
        [anon_sym_BQUOTE] = ACTIONS(191),
        [anon_sym_PIPE] = ACTIONS(191),
        [anon_sym_TILDE] = ACTIONS(191),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(191),
        [sym_email] = ACTIONS(191),
        [anon_sym_http] = ACTIONS(191),
        [anon_sym_https] = ACTIONS(191),
        [anon_sym_file] = ACTIONS(191),
        [anon_sym_ftp] = ACTIONS(191),
        [anon_sym_irc] = ACTIONS(191),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(191),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(191),
        [anon_sym_LT_LT] = ACTIONS(191),
        [anon_sym_STAR2] = ACTIONS(191),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [anon_sym__2] = ACTIONS(191),
        [anon_sym___] = ACTIONS(191),
        [anon_sym_BQUOTE2] = ACTIONS(191),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(191),
        [anon_sym_POUND2] = ACTIONS(191),
        [anon_sym_POUND_POUND] = ACTIONS(191),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(193),
        [anon_sym_kbd] = ACTIONS(195),
        [anon_sym_btn] = ACTIONS(195),
        [anon_sym_image] = ACTIONS(195),
        [anon_sym_audio] = ACTIONS(195),
        [anon_sym_video] = ACTIONS(195),
        [anon_sym_icon] = ACTIONS(195),
        [anon_sym_pass] = ACTIONS(195),
        [anon_sym_link] = ACTIONS(195),
        [anon_sym_mailto] = ACTIONS(195),
        [anon_sym_menu] = ACTIONS(195),
        [anon_sym_latexmath] = ACTIONS(195),
        [anon_sym_asciimath] = ACTIONS(195),
        [anon_sym_footnote] = ACTIONS(195),
        [anon_sym_footnoteref] = ACTIONS(195),
        [anon_sym_anchor] = ACTIONS(195),
        [anon_sym_xref] = ACTIONS(195),
        [anon_sym_ifdef] = ACTIONS(195),
        [anon_sym_ifndef] = ACTIONS(195),
        [anon_sym_ifeval] = ACTIONS(195),
        [anon_sym_endif] = ACTIONS(195),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_RBRACK] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(195),
        [anon_sym_RBRACE] = ACTIONS(195),
        [sym__word_no_digit] = ACTIONS(195),
        [sym__digits] = ACTIONS(195),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(195),
        [anon_sym_BSLASH_PLUS] = ACTIONS(195),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(195),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(195),
        [anon_sym_BSLASH_STAR] = ACTIONS(195),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(195),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(195),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(195),
        [anon_sym_BSLASH_POUND] = ACTIONS(195),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(195),
        [anon_sym_BSLASH_] = ACTIONS(195),
        [anon_sym_BSLASH__] = ACTIONS(195),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(195),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(195),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(195),
        [anon_sym_BSLASHkbd] = ACTIONS(195),
        [anon_sym_BSLASHbtn] = ACTIONS(195),
        [anon_sym_BSLASHimage] = ACTIONS(195),
        [anon_sym_BSLASHaudio] = ACTIONS(195),
        [anon_sym_BSLASHvideo] = ACTIONS(195),
        [anon_sym_BSLASHicon] = ACTIONS(195),
        [anon_sym_BSLASHpass] = ACTIONS(195),
        [anon_sym_BSLASHlink] = ACTIONS(195),
        [anon_sym_BSLASHmailto] = ACTIONS(195),
        [anon_sym_BSLASHmenu] = ACTIONS(195),
        [anon_sym_BSLASHlatexmath] = ACTIONS(195),
        [anon_sym_BSLASHasciimath] = ACTIONS(195),
        [anon_sym_BSLASHfootnote] = ACTIONS(195),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(195),
        [anon_sym_BSLASHanchor] = ACTIONS(195),
        [anon_sym_BSLASHxref] = ACTIONS(195),
        [anon_sym_BSLASHifdef] = ACTIONS(195),
        [anon_sym_BSLASHifndef] = ACTIONS(195),
        [anon_sym_BSLASHifeval] = ACTIONS(195),
        [anon_sym_BSLASHendif] = ACTIONS(195),
        [anon_sym_BANG] = ACTIONS(195),
        [anon_sym_DQUOTE] = ACTIONS(195),
        [anon_sym_POUND] = ACTIONS(195),
        [anon_sym_DOLLAR] = ACTIONS(195),
        [anon_sym_PERCENT] = ACTIONS(195),
        [anon_sym_AMP] = ACTIONS(195),
        [anon_sym_SQUOTE] = ACTIONS(195),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(195),
        [anon_sym_STAR] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(195),
        [anon_sym_DASH] = ACTIONS(195),
        [anon_sym_DOT] = ACTIONS(195),
        [anon_sym_SLASH] = ACTIONS(195),
        [anon_sym_COLON2] = ACTIONS(195),
        [anon_sym_SEMI] = ACTIONS(195),
        [anon_sym_LT] = ACTIONS(195),
        [anon_sym_EQ] = ACTIONS(195),
        [anon_sym_GT] = ACTIONS(195),
        [anon_sym_QMARK] = ACTIONS(195),
        [anon_sym_AT] = ACTIONS(195),
        [anon_sym_BSLASH] = ACTIONS(195),
        [anon_sym_CARET] = ACTIONS(195),
        [anon_sym__] = ACTIONS(195),
        [anon_sym_BQUOTE] = ACTIONS(195),
        [anon_sym_PIPE] = ACTIONS(195),
        [anon_sym_TILDE] = ACTIONS(195),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(195),
        [sym_email] = ACTIONS(195),
        [anon_sym_http] = ACTIONS(195),
        [anon_sym_https] = ACTIONS(195),
        [anon_sym_file] = ACTIONS(195),
        [anon_sym_ftp] = ACTIONS(195),
        [anon_sym_irc] = ACTIONS(195),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(195),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(195),
        [anon_sym_LT_LT] = ACTIONS(195),
        [anon_sym_STAR2] = ACTIONS(195),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym__2] = ACTIONS(195),
        [anon_sym___] = ACTIONS(195),
        [anon_sym_BQUOTE2] = ACTIONS(195),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(195),
        [anon_sym_POUND2] = ACTIONS(195),
        [anon_sym_POUND_POUND] = ACTIONS(195),
    },
    [27] = {
        [ts_builtin_sym_end] = ACTIONS(197),
        [anon_sym_kbd] = ACTIONS(199),
        [anon_sym_btn] = ACTIONS(199),
        [anon_sym_image] = ACTIONS(199),
        [anon_sym_audio] = ACTIONS(199),
        [anon_sym_video] = ACTIONS(199),
        [anon_sym_icon] = ACTIONS(199),
        [anon_sym_pass] = ACTIONS(199),
        [anon_sym_link] = ACTIONS(199),
        [anon_sym_mailto] = ACTIONS(199),
        [anon_sym_menu] = ACTIONS(199),
        [anon_sym_latexmath] = ACTIONS(199),
        [anon_sym_asciimath] = ACTIONS(199),
        [anon_sym_footnote] = ACTIONS(199),
        [anon_sym_footnoteref] = ACTIONS(199),
        [anon_sym_anchor] = ACTIONS(199),
        [anon_sym_xref] = ACTIONS(199),
        [anon_sym_ifdef] = ACTIONS(199),
        [anon_sym_ifndef] = ACTIONS(199),
        [anon_sym_ifeval] = ACTIONS(199),
        [anon_sym_endif] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(199),
        [anon_sym_RBRACK] = ACTIONS(199),
        [anon_sym_LBRACE] = ACTIONS(199),
        [anon_sym_RBRACE] = ACTIONS(199),
        [sym__word_no_digit] = ACTIONS(199),
        [sym__digits] = ACTIONS(199),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(199),
        [anon_sym_BSLASH_PLUS] = ACTIONS(199),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(199),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(199),
        [anon_sym_BSLASH_STAR] = ACTIONS(199),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(199),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(199),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(199),
        [anon_sym_BSLASH_POUND] = ACTIONS(199),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(199),
        [anon_sym_BSLASH_] = ACTIONS(199),
        [anon_sym_BSLASH__] = ACTIONS(199),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(199),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(199),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(199),
        [anon_sym_BSLASHkbd] = ACTIONS(199),
        [anon_sym_BSLASHbtn] = ACTIONS(199),
        [anon_sym_BSLASHimage] = ACTIONS(199),
        [anon_sym_BSLASHaudio] = ACTIONS(199),
        [anon_sym_BSLASHvideo] = ACTIONS(199),
        [anon_sym_BSLASHicon] = ACTIONS(199),
        [anon_sym_BSLASHpass] = ACTIONS(199),
        [anon_sym_BSLASHlink] = ACTIONS(199),
        [anon_sym_BSLASHmailto] = ACTIONS(199),
        [anon_sym_BSLASHmenu] = ACTIONS(199),
        [anon_sym_BSLASHlatexmath] = ACTIONS(199),
        [anon_sym_BSLASHasciimath] = ACTIONS(199),
        [anon_sym_BSLASHfootnote] = ACTIONS(199),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(199),
        [anon_sym_BSLASHanchor] = ACTIONS(199),
        [anon_sym_BSLASHxref] = ACTIONS(199),
        [anon_sym_BSLASHifdef] = ACTIONS(199),
        [anon_sym_BSLASHifndef] = ACTIONS(199),
        [anon_sym_BSLASHifeval] = ACTIONS(199),
        [anon_sym_BSLASHendif] = ACTIONS(199),
        [anon_sym_BANG] = ACTIONS(199),
        [anon_sym_DQUOTE] = ACTIONS(199),
        [anon_sym_POUND] = ACTIONS(199),
        [anon_sym_DOLLAR] = ACTIONS(199),
        [anon_sym_PERCENT] = ACTIONS(199),
        [anon_sym_AMP] = ACTIONS(199),
        [anon_sym_SQUOTE] = ACTIONS(199),
        [anon_sym_LPAREN] = ACTIONS(199),
        [anon_sym_RPAREN] = ACTIONS(199),
        [anon_sym_STAR] = ACTIONS(199),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_COMMA] = ACTIONS(199),
        [anon_sym_DASH] = ACTIONS(199),
        [anon_sym_DOT] = ACTIONS(199),
        [anon_sym_SLASH] = ACTIONS(199),
        [anon_sym_COLON2] = ACTIONS(199),
        [anon_sym_SEMI] = ACTIONS(199),
        [anon_sym_LT] = ACTIONS(199),
        [anon_sym_EQ] = ACTIONS(199),
        [anon_sym_GT] = ACTIONS(199),
        [anon_sym_QMARK] = ACTIONS(199),
        [anon_sym_AT] = ACTIONS(199),
        [anon_sym_BSLASH] = ACTIONS(199),
        [anon_sym_CARET] = ACTIONS(199),
        [anon_sym__] = ACTIONS(199),
        [anon_sym_BQUOTE] = ACTIONS(199),
        [anon_sym_PIPE] = ACTIONS(199),
        [anon_sym_TILDE] = ACTIONS(199),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(199),
        [sym_email] = ACTIONS(199),
        [anon_sym_http] = ACTIONS(199),
        [anon_sym_https] = ACTIONS(199),
        [anon_sym_file] = ACTIONS(199),
        [anon_sym_ftp] = ACTIONS(199),
        [anon_sym_irc] = ACTIONS(199),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(199),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(199),
        [anon_sym_LT_LT] = ACTIONS(199),
        [anon_sym_STAR2] = ACTIONS(199),
        [anon_sym_STAR_STAR] = ACTIONS(199),
        [anon_sym__2] = ACTIONS(199),
        [anon_sym___] = ACTIONS(199),
        [anon_sym_BQUOTE2] = ACTIONS(199),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(199),
        [anon_sym_POUND2] = ACTIONS(199),
        [anon_sym_POUND_POUND] = ACTIONS(199),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(201),
        [anon_sym_kbd] = ACTIONS(203),
        [anon_sym_btn] = ACTIONS(203),
        [anon_sym_image] = ACTIONS(203),
        [anon_sym_audio] = ACTIONS(203),
        [anon_sym_video] = ACTIONS(203),
        [anon_sym_icon] = ACTIONS(203),
        [anon_sym_pass] = ACTIONS(203),
        [anon_sym_link] = ACTIONS(203),
        [anon_sym_mailto] = ACTIONS(203),
        [anon_sym_menu] = ACTIONS(203),
        [anon_sym_latexmath] = ACTIONS(203),
        [anon_sym_asciimath] = ACTIONS(203),
        [anon_sym_footnote] = ACTIONS(203),
        [anon_sym_footnoteref] = ACTIONS(203),
        [anon_sym_anchor] = ACTIONS(203),
        [anon_sym_xref] = ACTIONS(203),
        [anon_sym_ifdef] = ACTIONS(203),
        [anon_sym_ifndef] = ACTIONS(203),
        [anon_sym_ifeval] = ACTIONS(203),
        [anon_sym_endif] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(203),
        [anon_sym_RBRACK] = ACTIONS(203),
        [anon_sym_LBRACE] = ACTIONS(203),
        [anon_sym_RBRACE] = ACTIONS(203),
        [sym__word_no_digit] = ACTIONS(203),
        [sym__digits] = ACTIONS(203),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(203),
        [anon_sym_BSLASH_PLUS] = ACTIONS(203),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(203),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(203),
        [anon_sym_BSLASH_STAR] = ACTIONS(203),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(203),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(203),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(203),
        [anon_sym_BSLASH_POUND] = ACTIONS(203),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(203),
        [anon_sym_BSLASH_] = ACTIONS(203),
        [anon_sym_BSLASH__] = ACTIONS(203),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(203),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(203),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(203),
        [anon_sym_BSLASHkbd] = ACTIONS(203),
        [anon_sym_BSLASHbtn] = ACTIONS(203),
        [anon_sym_BSLASHimage] = ACTIONS(203),
        [anon_sym_BSLASHaudio] = ACTIONS(203),
        [anon_sym_BSLASHvideo] = ACTIONS(203),
        [anon_sym_BSLASHicon] = ACTIONS(203),
        [anon_sym_BSLASHpass] = ACTIONS(203),
        [anon_sym_BSLASHlink] = ACTIONS(203),
        [anon_sym_BSLASHmailto] = ACTIONS(203),
        [anon_sym_BSLASHmenu] = ACTIONS(203),
        [anon_sym_BSLASHlatexmath] = ACTIONS(203),
        [anon_sym_BSLASHasciimath] = ACTIONS(203),
        [anon_sym_BSLASHfootnote] = ACTIONS(203),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(203),
        [anon_sym_BSLASHanchor] = ACTIONS(203),
        [anon_sym_BSLASHxref] = ACTIONS(203),
        [anon_sym_BSLASHifdef] = ACTIONS(203),
        [anon_sym_BSLASHifndef] = ACTIONS(203),
        [anon_sym_BSLASHifeval] = ACTIONS(203),
        [anon_sym_BSLASHendif] = ACTIONS(203),
        [anon_sym_BANG] = ACTIONS(203),
        [anon_sym_DQUOTE] = ACTIONS(203),
        [anon_sym_POUND] = ACTIONS(203),
        [anon_sym_DOLLAR] = ACTIONS(203),
        [anon_sym_PERCENT] = ACTIONS(203),
        [anon_sym_AMP] = ACTIONS(203),
        [anon_sym_SQUOTE] = ACTIONS(203),
        [anon_sym_LPAREN] = ACTIONS(203),
        [anon_sym_RPAREN] = ACTIONS(203),
        [anon_sym_STAR] = ACTIONS(203),
        [anon_sym_PLUS] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(203),
        [anon_sym_DASH] = ACTIONS(203),
        [anon_sym_DOT] = ACTIONS(203),
        [anon_sym_SLASH] = ACTIONS(203),
        [anon_sym_COLON2] = ACTIONS(203),
        [anon_sym_SEMI] = ACTIONS(203),
        [anon_sym_LT] = ACTIONS(203),
        [anon_sym_EQ] = ACTIONS(203),
        [anon_sym_GT] = ACTIONS(203),
        [anon_sym_QMARK] = ACTIONS(203),
        [anon_sym_AT] = ACTIONS(203),
        [anon_sym_BSLASH] = ACTIONS(203),
        [anon_sym_CARET] = ACTIONS(203),
        [anon_sym__] = ACTIONS(203),
        [anon_sym_BQUOTE] = ACTIONS(203),
        [anon_sym_PIPE] = ACTIONS(203),
        [anon_sym_TILDE] = ACTIONS(203),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(203),
        [sym_email] = ACTIONS(203),
        [anon_sym_http] = ACTIONS(203),
        [anon_sym_https] = ACTIONS(203),
        [anon_sym_file] = ACTIONS(203),
        [anon_sym_ftp] = ACTIONS(203),
        [anon_sym_irc] = ACTIONS(203),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(203),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(203),
        [anon_sym_LT_LT] = ACTIONS(203),
        [anon_sym_STAR2] = ACTIONS(203),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym__2] = ACTIONS(203),
        [anon_sym___] = ACTIONS(203),
        [anon_sym_BQUOTE2] = ACTIONS(203),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(203),
        [anon_sym_POUND2] = ACTIONS(203),
        [anon_sym_POUND_POUND] = ACTIONS(203),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(205),
        [anon_sym_kbd] = ACTIONS(207),
        [anon_sym_btn] = ACTIONS(207),
        [anon_sym_image] = ACTIONS(207),
        [anon_sym_audio] = ACTIONS(207),
        [anon_sym_video] = ACTIONS(207),
        [anon_sym_icon] = ACTIONS(207),
        [anon_sym_pass] = ACTIONS(207),
        [anon_sym_link] = ACTIONS(207),
        [anon_sym_mailto] = ACTIONS(207),
        [anon_sym_menu] = ACTIONS(207),
        [anon_sym_latexmath] = ACTIONS(207),
        [anon_sym_asciimath] = ACTIONS(207),
        [anon_sym_footnote] = ACTIONS(207),
        [anon_sym_footnoteref] = ACTIONS(207),
        [anon_sym_anchor] = ACTIONS(207),
        [anon_sym_xref] = ACTIONS(207),
        [anon_sym_ifdef] = ACTIONS(207),
        [anon_sym_ifndef] = ACTIONS(207),
        [anon_sym_ifeval] = ACTIONS(207),
        [anon_sym_endif] = ACTIONS(207),
        [anon_sym_LBRACK] = ACTIONS(207),
        [anon_sym_RBRACK] = ACTIONS(207),
        [anon_sym_LBRACE] = ACTIONS(207),
        [anon_sym_RBRACE] = ACTIONS(207),
        [sym__word_no_digit] = ACTIONS(207),
        [sym__digits] = ACTIONS(207),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(207),
        [anon_sym_BSLASH_PLUS] = ACTIONS(207),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(207),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(207),
        [anon_sym_BSLASH_STAR] = ACTIONS(207),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(207),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(207),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(207),
        [anon_sym_BSLASH_POUND] = ACTIONS(207),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(207),
        [anon_sym_BSLASH_] = ACTIONS(207),
        [anon_sym_BSLASH__] = ACTIONS(207),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(207),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(207),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(207),
        [anon_sym_BSLASHkbd] = ACTIONS(207),
        [anon_sym_BSLASHbtn] = ACTIONS(207),
        [anon_sym_BSLASHimage] = ACTIONS(207),
        [anon_sym_BSLASHaudio] = ACTIONS(207),
        [anon_sym_BSLASHvideo] = ACTIONS(207),
        [anon_sym_BSLASHicon] = ACTIONS(207),
        [anon_sym_BSLASHpass] = ACTIONS(207),
        [anon_sym_BSLASHlink] = ACTIONS(207),
        [anon_sym_BSLASHmailto] = ACTIONS(207),
        [anon_sym_BSLASHmenu] = ACTIONS(207),
        [anon_sym_BSLASHlatexmath] = ACTIONS(207),
        [anon_sym_BSLASHasciimath] = ACTIONS(207),
        [anon_sym_BSLASHfootnote] = ACTIONS(207),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(207),
        [anon_sym_BSLASHanchor] = ACTIONS(207),
        [anon_sym_BSLASHxref] = ACTIONS(207),
        [anon_sym_BSLASHifdef] = ACTIONS(207),
        [anon_sym_BSLASHifndef] = ACTIONS(207),
        [anon_sym_BSLASHifeval] = ACTIONS(207),
        [anon_sym_BSLASHendif] = ACTIONS(207),
        [anon_sym_BANG] = ACTIONS(207),
        [anon_sym_DQUOTE] = ACTIONS(207),
        [anon_sym_POUND] = ACTIONS(207),
        [anon_sym_DOLLAR] = ACTIONS(207),
        [anon_sym_PERCENT] = ACTIONS(207),
        [anon_sym_AMP] = ACTIONS(207),
        [anon_sym_SQUOTE] = ACTIONS(207),
        [anon_sym_LPAREN] = ACTIONS(207),
        [anon_sym_RPAREN] = ACTIONS(207),
        [anon_sym_STAR] = ACTIONS(207),
        [anon_sym_PLUS] = ACTIONS(207),
        [anon_sym_COMMA] = ACTIONS(207),
        [anon_sym_DASH] = ACTIONS(207),
        [anon_sym_DOT] = ACTIONS(207),
        [anon_sym_SLASH] = ACTIONS(207),
        [anon_sym_COLON2] = ACTIONS(207),
        [anon_sym_SEMI] = ACTIONS(207),
        [anon_sym_LT] = ACTIONS(207),
        [anon_sym_EQ] = ACTIONS(207),
        [anon_sym_GT] = ACTIONS(207),
        [anon_sym_QMARK] = ACTIONS(207),
        [anon_sym_AT] = ACTIONS(207),
        [anon_sym_BSLASH] = ACTIONS(207),
        [anon_sym_CARET] = ACTIONS(207),
        [anon_sym__] = ACTIONS(207),
        [anon_sym_BQUOTE] = ACTIONS(207),
        [anon_sym_PIPE] = ACTIONS(207),
        [anon_sym_TILDE] = ACTIONS(207),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(207),
        [sym_email] = ACTIONS(207),
        [anon_sym_http] = ACTIONS(207),
        [anon_sym_https] = ACTIONS(207),
        [anon_sym_file] = ACTIONS(207),
        [anon_sym_ftp] = ACTIONS(207),
        [anon_sym_irc] = ACTIONS(207),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(207),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(207),
        [anon_sym_LT_LT] = ACTIONS(207),
        [anon_sym_STAR2] = ACTIONS(207),
        [anon_sym_STAR_STAR] = ACTIONS(207),
        [anon_sym__2] = ACTIONS(207),
        [anon_sym___] = ACTIONS(207),
        [anon_sym_BQUOTE2] = ACTIONS(207),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(207),
        [anon_sym_POUND2] = ACTIONS(207),
        [anon_sym_POUND_POUND] = ACTIONS(207),
    },
    [30] = {
        [ts_builtin_sym_end] = ACTIONS(143),
        [anon_sym_kbd] = ACTIONS(145),
        [anon_sym_btn] = ACTIONS(145),
        [anon_sym_image] = ACTIONS(145),
        [anon_sym_audio] = ACTIONS(145),
        [anon_sym_video] = ACTIONS(145),
        [anon_sym_icon] = ACTIONS(145),
        [anon_sym_pass] = ACTIONS(145),
        [anon_sym_link] = ACTIONS(145),
        [anon_sym_mailto] = ACTIONS(145),
        [anon_sym_menu] = ACTIONS(145),
        [anon_sym_latexmath] = ACTIONS(145),
        [anon_sym_asciimath] = ACTIONS(145),
        [anon_sym_footnote] = ACTIONS(145),
        [anon_sym_footnoteref] = ACTIONS(145),
        [anon_sym_anchor] = ACTIONS(145),
        [anon_sym_xref] = ACTIONS(145),
        [anon_sym_ifdef] = ACTIONS(145),
        [anon_sym_ifndef] = ACTIONS(145),
        [anon_sym_ifeval] = ACTIONS(145),
        [anon_sym_endif] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_RBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(145),
        [anon_sym_RBRACE] = ACTIONS(145),
        [sym__word_no_digit] = ACTIONS(145),
        [sym__digits] = ACTIONS(145),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(145),
        [anon_sym_BSLASH_PLUS] = ACTIONS(145),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(145),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(145),
        [anon_sym_BSLASH_STAR] = ACTIONS(145),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(145),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(145),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(145),
        [anon_sym_BSLASH_POUND] = ACTIONS(145),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(145),
        [anon_sym_BSLASH_] = ACTIONS(145),
        [anon_sym_BSLASH__] = ACTIONS(145),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(145),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(145),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(145),
        [anon_sym_BSLASHkbd] = ACTIONS(145),
        [anon_sym_BSLASHbtn] = ACTIONS(145),
        [anon_sym_BSLASHimage] = ACTIONS(145),
        [anon_sym_BSLASHaudio] = ACTIONS(145),
        [anon_sym_BSLASHvideo] = ACTIONS(145),
        [anon_sym_BSLASHicon] = ACTIONS(145),
        [anon_sym_BSLASHpass] = ACTIONS(145),
        [anon_sym_BSLASHlink] = ACTIONS(145),
        [anon_sym_BSLASHmailto] = ACTIONS(145),
        [anon_sym_BSLASHmenu] = ACTIONS(145),
        [anon_sym_BSLASHlatexmath] = ACTIONS(145),
        [anon_sym_BSLASHasciimath] = ACTIONS(145),
        [anon_sym_BSLASHfootnote] = ACTIONS(145),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(145),
        [anon_sym_BSLASHanchor] = ACTIONS(145),
        [anon_sym_BSLASHxref] = ACTIONS(145),
        [anon_sym_BSLASHifdef] = ACTIONS(145),
        [anon_sym_BSLASHifndef] = ACTIONS(145),
        [anon_sym_BSLASHifeval] = ACTIONS(145),
        [anon_sym_BSLASHendif] = ACTIONS(145),
        [anon_sym_BANG] = ACTIONS(145),
        [anon_sym_DQUOTE] = ACTIONS(145),
        [anon_sym_POUND] = ACTIONS(145),
        [anon_sym_DOLLAR] = ACTIONS(145),
        [anon_sym_PERCENT] = ACTIONS(145),
        [anon_sym_AMP] = ACTIONS(145),
        [anon_sym_SQUOTE] = ACTIONS(145),
        [anon_sym_LPAREN] = ACTIONS(145),
        [anon_sym_RPAREN] = ACTIONS(145),
        [anon_sym_STAR] = ACTIONS(145),
        [anon_sym_PLUS] = ACTIONS(145),
        [anon_sym_COMMA] = ACTIONS(145),
        [anon_sym_DASH] = ACTIONS(145),
        [anon_sym_DOT] = ACTIONS(145),
        [anon_sym_SLASH] = ACTIONS(145),
        [anon_sym_COLON2] = ACTIONS(145),
        [anon_sym_SEMI] = ACTIONS(145),
        [anon_sym_LT] = ACTIONS(145),
        [anon_sym_EQ] = ACTIONS(145),
        [anon_sym_GT] = ACTIONS(145),
        [anon_sym_QMARK] = ACTIONS(145),
        [anon_sym_AT] = ACTIONS(145),
        [anon_sym_BSLASH] = ACTIONS(145),
        [anon_sym_CARET] = ACTIONS(145),
        [anon_sym__] = ACTIONS(145),
        [anon_sym_BQUOTE] = ACTIONS(145),
        [anon_sym_PIPE] = ACTIONS(145),
        [anon_sym_TILDE] = ACTIONS(145),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(145),
        [sym_email] = ACTIONS(145),
        [anon_sym_http] = ACTIONS(145),
        [anon_sym_https] = ACTIONS(145),
        [anon_sym_file] = ACTIONS(145),
        [anon_sym_ftp] = ACTIONS(145),
        [anon_sym_irc] = ACTIONS(145),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(145),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(145),
        [anon_sym_LT_LT] = ACTIONS(145),
        [anon_sym_STAR2] = ACTIONS(145),
        [anon_sym_STAR_STAR] = ACTIONS(145),
        [anon_sym__2] = ACTIONS(145),
        [anon_sym___] = ACTIONS(145),
        [anon_sym_BQUOTE2] = ACTIONS(145),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(145),
        [anon_sym_POUND2] = ACTIONS(145),
        [anon_sym_POUND_POUND] = ACTIONS(145),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_kbd] = ACTIONS(211),
        [anon_sym_btn] = ACTIONS(211),
        [anon_sym_image] = ACTIONS(211),
        [anon_sym_audio] = ACTIONS(211),
        [anon_sym_video] = ACTIONS(211),
        [anon_sym_icon] = ACTIONS(211),
        [anon_sym_pass] = ACTIONS(211),
        [anon_sym_link] = ACTIONS(211),
        [anon_sym_mailto] = ACTIONS(211),
        [anon_sym_menu] = ACTIONS(211),
        [anon_sym_latexmath] = ACTIONS(211),
        [anon_sym_asciimath] = ACTIONS(211),
        [anon_sym_footnote] = ACTIONS(211),
        [anon_sym_footnoteref] = ACTIONS(211),
        [anon_sym_anchor] = ACTIONS(211),
        [anon_sym_xref] = ACTIONS(211),
        [anon_sym_ifdef] = ACTIONS(211),
        [anon_sym_ifndef] = ACTIONS(211),
        [anon_sym_ifeval] = ACTIONS(211),
        [anon_sym_endif] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(211),
        [anon_sym_RBRACK] = ACTIONS(211),
        [anon_sym_LBRACE] = ACTIONS(211),
        [anon_sym_RBRACE] = ACTIONS(211),
        [sym__word_no_digit] = ACTIONS(211),
        [sym__digits] = ACTIONS(211),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(211),
        [anon_sym_BSLASH_PLUS] = ACTIONS(211),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(211),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(211),
        [anon_sym_BSLASH_STAR] = ACTIONS(211),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(211),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(211),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(211),
        [anon_sym_BSLASH_POUND] = ACTIONS(211),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(211),
        [anon_sym_BSLASH_] = ACTIONS(211),
        [anon_sym_BSLASH__] = ACTIONS(211),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(211),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(211),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(211),
        [anon_sym_BSLASHkbd] = ACTIONS(211),
        [anon_sym_BSLASHbtn] = ACTIONS(211),
        [anon_sym_BSLASHimage] = ACTIONS(211),
        [anon_sym_BSLASHaudio] = ACTIONS(211),
        [anon_sym_BSLASHvideo] = ACTIONS(211),
        [anon_sym_BSLASHicon] = ACTIONS(211),
        [anon_sym_BSLASHpass] = ACTIONS(211),
        [anon_sym_BSLASHlink] = ACTIONS(211),
        [anon_sym_BSLASHmailto] = ACTIONS(211),
        [anon_sym_BSLASHmenu] = ACTIONS(211),
        [anon_sym_BSLASHlatexmath] = ACTIONS(211),
        [anon_sym_BSLASHasciimath] = ACTIONS(211),
        [anon_sym_BSLASHfootnote] = ACTIONS(211),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(211),
        [anon_sym_BSLASHanchor] = ACTIONS(211),
        [anon_sym_BSLASHxref] = ACTIONS(211),
        [anon_sym_BSLASHifdef] = ACTIONS(211),
        [anon_sym_BSLASHifndef] = ACTIONS(211),
        [anon_sym_BSLASHifeval] = ACTIONS(211),
        [anon_sym_BSLASHendif] = ACTIONS(211),
        [anon_sym_BANG] = ACTIONS(211),
        [anon_sym_DQUOTE] = ACTIONS(211),
        [anon_sym_POUND] = ACTIONS(211),
        [anon_sym_DOLLAR] = ACTIONS(211),
        [anon_sym_PERCENT] = ACTIONS(211),
        [anon_sym_AMP] = ACTIONS(211),
        [anon_sym_SQUOTE] = ACTIONS(211),
        [anon_sym_LPAREN] = ACTIONS(211),
        [anon_sym_RPAREN] = ACTIONS(211),
        [anon_sym_STAR] = ACTIONS(211),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_DASH] = ACTIONS(211),
        [anon_sym_DOT] = ACTIONS(211),
        [anon_sym_SLASH] = ACTIONS(211),
        [anon_sym_COLON2] = ACTIONS(211),
        [anon_sym_SEMI] = ACTIONS(211),
        [anon_sym_LT] = ACTIONS(211),
        [anon_sym_EQ] = ACTIONS(211),
        [anon_sym_GT] = ACTIONS(211),
        [anon_sym_QMARK] = ACTIONS(211),
        [anon_sym_AT] = ACTIONS(211),
        [anon_sym_BSLASH] = ACTIONS(211),
        [anon_sym_CARET] = ACTIONS(211),
        [anon_sym__] = ACTIONS(211),
        [anon_sym_BQUOTE] = ACTIONS(211),
        [anon_sym_PIPE] = ACTIONS(211),
        [anon_sym_TILDE] = ACTIONS(211),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(211),
        [sym_email] = ACTIONS(211),
        [anon_sym_http] = ACTIONS(211),
        [anon_sym_https] = ACTIONS(211),
        [anon_sym_file] = ACTIONS(211),
        [anon_sym_ftp] = ACTIONS(211),
        [anon_sym_irc] = ACTIONS(211),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(211),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(211),
        [anon_sym_LT_LT] = ACTIONS(211),
        [anon_sym_STAR2] = ACTIONS(211),
        [anon_sym_STAR_STAR] = ACTIONS(211),
        [anon_sym__2] = ACTIONS(211),
        [anon_sym___] = ACTIONS(211),
        [anon_sym_BQUOTE2] = ACTIONS(211),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(211),
        [anon_sym_POUND2] = ACTIONS(211),
        [anon_sym_POUND_POUND] = ACTIONS(211),
    },
    [32] = {
        [ts_builtin_sym_end] = ACTIONS(213),
        [anon_sym_kbd] = ACTIONS(215),
        [anon_sym_btn] = ACTIONS(215),
        [anon_sym_image] = ACTIONS(215),
        [anon_sym_audio] = ACTIONS(215),
        [anon_sym_video] = ACTIONS(215),
        [anon_sym_icon] = ACTIONS(215),
        [anon_sym_pass] = ACTIONS(215),
        [anon_sym_link] = ACTIONS(215),
        [anon_sym_mailto] = ACTIONS(215),
        [anon_sym_menu] = ACTIONS(215),
        [anon_sym_latexmath] = ACTIONS(215),
        [anon_sym_asciimath] = ACTIONS(215),
        [anon_sym_footnote] = ACTIONS(215),
        [anon_sym_footnoteref] = ACTIONS(215),
        [anon_sym_anchor] = ACTIONS(215),
        [anon_sym_xref] = ACTIONS(215),
        [anon_sym_ifdef] = ACTIONS(215),
        [anon_sym_ifndef] = ACTIONS(215),
        [anon_sym_ifeval] = ACTIONS(215),
        [anon_sym_endif] = ACTIONS(215),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(215),
        [anon_sym_LBRACE] = ACTIONS(215),
        [anon_sym_RBRACE] = ACTIONS(215),
        [sym__word_no_digit] = ACTIONS(215),
        [sym__digits] = ACTIONS(215),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(215),
        [anon_sym_BSLASH_PLUS] = ACTIONS(215),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(215),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(215),
        [anon_sym_BSLASH_STAR] = ACTIONS(215),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(215),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(215),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(215),
        [anon_sym_BSLASH_POUND] = ACTIONS(215),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(215),
        [anon_sym_BSLASH_] = ACTIONS(215),
        [anon_sym_BSLASH__] = ACTIONS(215),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(215),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(215),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(215),
        [anon_sym_BSLASHkbd] = ACTIONS(215),
        [anon_sym_BSLASHbtn] = ACTIONS(215),
        [anon_sym_BSLASHimage] = ACTIONS(215),
        [anon_sym_BSLASHaudio] = ACTIONS(215),
        [anon_sym_BSLASHvideo] = ACTIONS(215),
        [anon_sym_BSLASHicon] = ACTIONS(215),
        [anon_sym_BSLASHpass] = ACTIONS(215),
        [anon_sym_BSLASHlink] = ACTIONS(215),
        [anon_sym_BSLASHmailto] = ACTIONS(215),
        [anon_sym_BSLASHmenu] = ACTIONS(215),
        [anon_sym_BSLASHlatexmath] = ACTIONS(215),
        [anon_sym_BSLASHasciimath] = ACTIONS(215),
        [anon_sym_BSLASHfootnote] = ACTIONS(215),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(215),
        [anon_sym_BSLASHanchor] = ACTIONS(215),
        [anon_sym_BSLASHxref] = ACTIONS(215),
        [anon_sym_BSLASHifdef] = ACTIONS(215),
        [anon_sym_BSLASHifndef] = ACTIONS(215),
        [anon_sym_BSLASHifeval] = ACTIONS(215),
        [anon_sym_BSLASHendif] = ACTIONS(215),
        [anon_sym_BANG] = ACTIONS(215),
        [anon_sym_DQUOTE] = ACTIONS(215),
        [anon_sym_POUND] = ACTIONS(215),
        [anon_sym_DOLLAR] = ACTIONS(215),
        [anon_sym_PERCENT] = ACTIONS(215),
        [anon_sym_AMP] = ACTIONS(215),
        [anon_sym_SQUOTE] = ACTIONS(215),
        [anon_sym_LPAREN] = ACTIONS(215),
        [anon_sym_RPAREN] = ACTIONS(215),
        [anon_sym_STAR] = ACTIONS(215),
        [anon_sym_PLUS] = ACTIONS(215),
        [anon_sym_COMMA] = ACTIONS(215),
        [anon_sym_DASH] = ACTIONS(215),
        [anon_sym_DOT] = ACTIONS(215),
        [anon_sym_SLASH] = ACTIONS(215),
        [anon_sym_COLON2] = ACTIONS(215),
        [anon_sym_SEMI] = ACTIONS(215),
        [anon_sym_LT] = ACTIONS(215),
        [anon_sym_EQ] = ACTIONS(215),
        [anon_sym_GT] = ACTIONS(215),
        [anon_sym_QMARK] = ACTIONS(215),
        [anon_sym_AT] = ACTIONS(215),
        [anon_sym_BSLASH] = ACTIONS(215),
        [anon_sym_CARET] = ACTIONS(215),
        [anon_sym__] = ACTIONS(215),
        [anon_sym_BQUOTE] = ACTIONS(215),
        [anon_sym_PIPE] = ACTIONS(215),
        [anon_sym_TILDE] = ACTIONS(215),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(215),
        [sym_email] = ACTIONS(215),
        [anon_sym_http] = ACTIONS(215),
        [anon_sym_https] = ACTIONS(215),
        [anon_sym_file] = ACTIONS(215),
        [anon_sym_ftp] = ACTIONS(215),
        [anon_sym_irc] = ACTIONS(215),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(215),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(215),
        [anon_sym_LT_LT] = ACTIONS(215),
        [anon_sym_STAR2] = ACTIONS(215),
        [anon_sym_STAR_STAR] = ACTIONS(215),
        [anon_sym__2] = ACTIONS(215),
        [anon_sym___] = ACTIONS(215),
        [anon_sym_BQUOTE2] = ACTIONS(215),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(215),
        [anon_sym_POUND2] = ACTIONS(215),
        [anon_sym_POUND_POUND] = ACTIONS(215),
    },
    [33] = {
        [ts_builtin_sym_end] = ACTIONS(217),
        [anon_sym_kbd] = ACTIONS(219),
        [anon_sym_btn] = ACTIONS(219),
        [anon_sym_image] = ACTIONS(219),
        [anon_sym_audio] = ACTIONS(219),
        [anon_sym_video] = ACTIONS(219),
        [anon_sym_icon] = ACTIONS(219),
        [anon_sym_pass] = ACTIONS(219),
        [anon_sym_link] = ACTIONS(219),
        [anon_sym_mailto] = ACTIONS(219),
        [anon_sym_menu] = ACTIONS(219),
        [anon_sym_latexmath] = ACTIONS(219),
        [anon_sym_asciimath] = ACTIONS(219),
        [anon_sym_footnote] = ACTIONS(219),
        [anon_sym_footnoteref] = ACTIONS(219),
        [anon_sym_anchor] = ACTIONS(219),
        [anon_sym_xref] = ACTIONS(219),
        [anon_sym_ifdef] = ACTIONS(219),
        [anon_sym_ifndef] = ACTIONS(219),
        [anon_sym_ifeval] = ACTIONS(219),
        [anon_sym_endif] = ACTIONS(219),
        [anon_sym_LBRACK] = ACTIONS(219),
        [anon_sym_RBRACK] = ACTIONS(219),
        [anon_sym_LBRACE] = ACTIONS(219),
        [anon_sym_RBRACE] = ACTIONS(219),
        [sym__word_no_digit] = ACTIONS(219),
        [sym__digits] = ACTIONS(219),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(219),
        [anon_sym_BSLASH_PLUS] = ACTIONS(219),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(219),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(219),
        [anon_sym_BSLASH_STAR] = ACTIONS(219),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(219),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(219),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(219),
        [anon_sym_BSLASH_POUND] = ACTIONS(219),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(219),
        [anon_sym_BSLASH_] = ACTIONS(219),
        [anon_sym_BSLASH__] = ACTIONS(219),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(219),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(219),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(219),
        [anon_sym_BSLASHkbd] = ACTIONS(219),
        [anon_sym_BSLASHbtn] = ACTIONS(219),
        [anon_sym_BSLASHimage] = ACTIONS(219),
        [anon_sym_BSLASHaudio] = ACTIONS(219),
        [anon_sym_BSLASHvideo] = ACTIONS(219),
        [anon_sym_BSLASHicon] = ACTIONS(219),
        [anon_sym_BSLASHpass] = ACTIONS(219),
        [anon_sym_BSLASHlink] = ACTIONS(219),
        [anon_sym_BSLASHmailto] = ACTIONS(219),
        [anon_sym_BSLASHmenu] = ACTIONS(219),
        [anon_sym_BSLASHlatexmath] = ACTIONS(219),
        [anon_sym_BSLASHasciimath] = ACTIONS(219),
        [anon_sym_BSLASHfootnote] = ACTIONS(219),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(219),
        [anon_sym_BSLASHanchor] = ACTIONS(219),
        [anon_sym_BSLASHxref] = ACTIONS(219),
        [anon_sym_BSLASHifdef] = ACTIONS(219),
        [anon_sym_BSLASHifndef] = ACTIONS(219),
        [anon_sym_BSLASHifeval] = ACTIONS(219),
        [anon_sym_BSLASHendif] = ACTIONS(219),
        [anon_sym_BANG] = ACTIONS(219),
        [anon_sym_DQUOTE] = ACTIONS(219),
        [anon_sym_POUND] = ACTIONS(219),
        [anon_sym_DOLLAR] = ACTIONS(219),
        [anon_sym_PERCENT] = ACTIONS(219),
        [anon_sym_AMP] = ACTIONS(219),
        [anon_sym_SQUOTE] = ACTIONS(219),
        [anon_sym_LPAREN] = ACTIONS(219),
        [anon_sym_RPAREN] = ACTIONS(219),
        [anon_sym_STAR] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(219),
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_DASH] = ACTIONS(219),
        [anon_sym_DOT] = ACTIONS(219),
        [anon_sym_SLASH] = ACTIONS(219),
        [anon_sym_COLON2] = ACTIONS(219),
        [anon_sym_SEMI] = ACTIONS(219),
        [anon_sym_LT] = ACTIONS(219),
        [anon_sym_EQ] = ACTIONS(219),
        [anon_sym_GT] = ACTIONS(219),
        [anon_sym_QMARK] = ACTIONS(219),
        [anon_sym_AT] = ACTIONS(219),
        [anon_sym_BSLASH] = ACTIONS(219),
        [anon_sym_CARET] = ACTIONS(219),
        [anon_sym__] = ACTIONS(219),
        [anon_sym_BQUOTE] = ACTIONS(219),
        [anon_sym_PIPE] = ACTIONS(219),
        [anon_sym_TILDE] = ACTIONS(219),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(219),
        [sym_email] = ACTIONS(219),
        [anon_sym_http] = ACTIONS(219),
        [anon_sym_https] = ACTIONS(219),
        [anon_sym_file] = ACTIONS(219),
        [anon_sym_ftp] = ACTIONS(219),
        [anon_sym_irc] = ACTIONS(219),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(219),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(219),
        [anon_sym_LT_LT] = ACTIONS(219),
        [anon_sym_STAR2] = ACTIONS(219),
        [anon_sym_STAR_STAR] = ACTIONS(219),
        [anon_sym__2] = ACTIONS(219),
        [anon_sym___] = ACTIONS(219),
        [anon_sym_BQUOTE2] = ACTIONS(219),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(219),
        [anon_sym_POUND2] = ACTIONS(219),
        [anon_sym_POUND_POUND] = ACTIONS(219),
    },
    [34] = {
        [ts_builtin_sym_end] = ACTIONS(221),
        [anon_sym_kbd] = ACTIONS(223),
        [anon_sym_btn] = ACTIONS(223),
        [anon_sym_image] = ACTIONS(223),
        [anon_sym_audio] = ACTIONS(223),
        [anon_sym_video] = ACTIONS(223),
        [anon_sym_icon] = ACTIONS(223),
        [anon_sym_pass] = ACTIONS(223),
        [anon_sym_link] = ACTIONS(223),
        [anon_sym_mailto] = ACTIONS(223),
        [anon_sym_menu] = ACTIONS(223),
        [anon_sym_latexmath] = ACTIONS(223),
        [anon_sym_asciimath] = ACTIONS(223),
        [anon_sym_footnote] = ACTIONS(223),
        [anon_sym_footnoteref] = ACTIONS(223),
        [anon_sym_anchor] = ACTIONS(223),
        [anon_sym_xref] = ACTIONS(223),
        [anon_sym_ifdef] = ACTIONS(223),
        [anon_sym_ifndef] = ACTIONS(223),
        [anon_sym_ifeval] = ACTIONS(223),
        [anon_sym_endif] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(223),
        [anon_sym_RBRACK] = ACTIONS(223),
        [anon_sym_LBRACE] = ACTIONS(223),
        [anon_sym_RBRACE] = ACTIONS(223),
        [sym__word_no_digit] = ACTIONS(223),
        [sym__digits] = ACTIONS(223),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(223),
        [anon_sym_BSLASH_PLUS] = ACTIONS(223),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(223),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(223),
        [anon_sym_BSLASH_STAR] = ACTIONS(223),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(223),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(223),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(223),
        [anon_sym_BSLASH_POUND] = ACTIONS(223),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(223),
        [anon_sym_BSLASH_] = ACTIONS(223),
        [anon_sym_BSLASH__] = ACTIONS(223),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(223),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(223),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(223),
        [anon_sym_BSLASHkbd] = ACTIONS(223),
        [anon_sym_BSLASHbtn] = ACTIONS(223),
        [anon_sym_BSLASHimage] = ACTIONS(223),
        [anon_sym_BSLASHaudio] = ACTIONS(223),
        [anon_sym_BSLASHvideo] = ACTIONS(223),
        [anon_sym_BSLASHicon] = ACTIONS(223),
        [anon_sym_BSLASHpass] = ACTIONS(223),
        [anon_sym_BSLASHlink] = ACTIONS(223),
        [anon_sym_BSLASHmailto] = ACTIONS(223),
        [anon_sym_BSLASHmenu] = ACTIONS(223),
        [anon_sym_BSLASHlatexmath] = ACTIONS(223),
        [anon_sym_BSLASHasciimath] = ACTIONS(223),
        [anon_sym_BSLASHfootnote] = ACTIONS(223),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(223),
        [anon_sym_BSLASHanchor] = ACTIONS(223),
        [anon_sym_BSLASHxref] = ACTIONS(223),
        [anon_sym_BSLASHifdef] = ACTIONS(223),
        [anon_sym_BSLASHifndef] = ACTIONS(223),
        [anon_sym_BSLASHifeval] = ACTIONS(223),
        [anon_sym_BSLASHendif] = ACTIONS(223),
        [anon_sym_BANG] = ACTIONS(223),
        [anon_sym_DQUOTE] = ACTIONS(223),
        [anon_sym_POUND] = ACTIONS(223),
        [anon_sym_DOLLAR] = ACTIONS(223),
        [anon_sym_PERCENT] = ACTIONS(223),
        [anon_sym_AMP] = ACTIONS(223),
        [anon_sym_SQUOTE] = ACTIONS(223),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_RPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(223),
        [anon_sym_PLUS] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(223),
        [anon_sym_DASH] = ACTIONS(223),
        [anon_sym_DOT] = ACTIONS(223),
        [anon_sym_SLASH] = ACTIONS(223),
        [anon_sym_COLON2] = ACTIONS(223),
        [anon_sym_SEMI] = ACTIONS(223),
        [anon_sym_LT] = ACTIONS(223),
        [anon_sym_EQ] = ACTIONS(223),
        [anon_sym_GT] = ACTIONS(223),
        [anon_sym_QMARK] = ACTIONS(223),
        [anon_sym_AT] = ACTIONS(223),
        [anon_sym_BSLASH] = ACTIONS(223),
        [anon_sym_CARET] = ACTIONS(223),
        [anon_sym__] = ACTIONS(223),
        [anon_sym_BQUOTE] = ACTIONS(223),
        [anon_sym_PIPE] = ACTIONS(223),
        [anon_sym_TILDE] = ACTIONS(223),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(223),
        [sym_email] = ACTIONS(223),
        [anon_sym_http] = ACTIONS(223),
        [anon_sym_https] = ACTIONS(223),
        [anon_sym_file] = ACTIONS(223),
        [anon_sym_ftp] = ACTIONS(223),
        [anon_sym_irc] = ACTIONS(223),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(223),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(223),
        [anon_sym_LT_LT] = ACTIONS(223),
        [anon_sym_STAR2] = ACTIONS(223),
        [anon_sym_STAR_STAR] = ACTIONS(223),
        [anon_sym__2] = ACTIONS(223),
        [anon_sym___] = ACTIONS(223),
        [anon_sym_BQUOTE2] = ACTIONS(223),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(223),
        [anon_sym_POUND2] = ACTIONS(223),
        [anon_sym_POUND_POUND] = ACTIONS(223),
    },
    [35] = {
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_kbd] = ACTIONS(227),
        [anon_sym_btn] = ACTIONS(227),
        [anon_sym_image] = ACTIONS(227),
        [anon_sym_audio] = ACTIONS(227),
        [anon_sym_video] = ACTIONS(227),
        [anon_sym_icon] = ACTIONS(227),
        [anon_sym_pass] = ACTIONS(227),
        [anon_sym_link] = ACTIONS(227),
        [anon_sym_mailto] = ACTIONS(227),
        [anon_sym_menu] = ACTIONS(227),
        [anon_sym_latexmath] = ACTIONS(227),
        [anon_sym_asciimath] = ACTIONS(227),
        [anon_sym_footnote] = ACTIONS(227),
        [anon_sym_footnoteref] = ACTIONS(227),
        [anon_sym_anchor] = ACTIONS(227),
        [anon_sym_xref] = ACTIONS(227),
        [anon_sym_ifdef] = ACTIONS(227),
        [anon_sym_ifndef] = ACTIONS(227),
        [anon_sym_ifeval] = ACTIONS(227),
        [anon_sym_endif] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(227),
        [anon_sym_LBRACE] = ACTIONS(227),
        [anon_sym_RBRACE] = ACTIONS(227),
        [sym__word_no_digit] = ACTIONS(227),
        [sym__digits] = ACTIONS(227),
        [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(227),
        [anon_sym_BSLASH_PLUS] = ACTIONS(227),
        [anon_sym_BSLASH_BQUOTE] = ACTIONS(227),
        [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(227),
        [anon_sym_BSLASH_STAR] = ACTIONS(227),
        [anon_sym_BSLASH_STAR_STAR] = ACTIONS(227),
        [anon_sym_BSLASH_DOLLAR] = ACTIONS(227),
        [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(227),
        [anon_sym_BSLASH_POUND] = ACTIONS(227),
        [anon_sym_BSLASH_POUND_POUND] = ACTIONS(227),
        [anon_sym_BSLASH_] = ACTIONS(227),
        [anon_sym_BSLASH__] = ACTIONS(227),
        [anon_sym_BSLASH_LT_LT] = ACTIONS(227),
        [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(227),
        [anon_sym_BSLASH_LBRACK2] = ACTIONS(227),
        [anon_sym_BSLASHkbd] = ACTIONS(227),
        [anon_sym_BSLASHbtn] = ACTIONS(227),
        [anon_sym_BSLASHimage] = ACTIONS(227),
        [anon_sym_BSLASHaudio] = ACTIONS(227),
        [anon_sym_BSLASHvideo] = ACTIONS(227),
        [anon_sym_BSLASHicon] = ACTIONS(227),
        [anon_sym_BSLASHpass] = ACTIONS(227),
        [anon_sym_BSLASHlink] = ACTIONS(227),
        [anon_sym_BSLASHmailto] = ACTIONS(227),
        [anon_sym_BSLASHmenu] = ACTIONS(227),
        [anon_sym_BSLASHlatexmath] = ACTIONS(227),
        [anon_sym_BSLASHasciimath] = ACTIONS(227),
        [anon_sym_BSLASHfootnote] = ACTIONS(227),
        [anon_sym_BSLASHfootnoteref] = ACTIONS(227),
        [anon_sym_BSLASHanchor] = ACTIONS(227),
        [anon_sym_BSLASHxref] = ACTIONS(227),
        [anon_sym_BSLASHifdef] = ACTIONS(227),
        [anon_sym_BSLASHifndef] = ACTIONS(227),
        [anon_sym_BSLASHifeval] = ACTIONS(227),
        [anon_sym_BSLASHendif] = ACTIONS(227),
        [anon_sym_BANG] = ACTIONS(227),
        [anon_sym_DQUOTE] = ACTIONS(227),
        [anon_sym_POUND] = ACTIONS(227),
        [anon_sym_DOLLAR] = ACTIONS(227),
        [anon_sym_PERCENT] = ACTIONS(227),
        [anon_sym_AMP] = ACTIONS(227),
        [anon_sym_SQUOTE] = ACTIONS(227),
        [anon_sym_LPAREN] = ACTIONS(227),
        [anon_sym_RPAREN] = ACTIONS(227),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_DOT] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(227),
        [anon_sym_COLON2] = ACTIONS(227),
        [anon_sym_SEMI] = ACTIONS(227),
        [anon_sym_LT] = ACTIONS(227),
        [anon_sym_EQ] = ACTIONS(227),
        [anon_sym_GT] = ACTIONS(227),
        [anon_sym_QMARK] = ACTIONS(227),
        [anon_sym_AT] = ACTIONS(227),
        [anon_sym_BSLASH] = ACTIONS(227),
        [anon_sym_CARET] = ACTIONS(227),
        [anon_sym__] = ACTIONS(227),
        [anon_sym_BQUOTE] = ACTIONS(227),
        [anon_sym_PIPE] = ACTIONS(227),
        [anon_sym_TILDE] = ACTIONS(227),
        [anon_sym_LBRACK_LBRACK] = ACTIONS(227),
        [sym_email] = ACTIONS(227),
        [anon_sym_http] = ACTIONS(227),
        [anon_sym_https] = ACTIONS(227),
        [anon_sym_file] = ACTIONS(227),
        [anon_sym_ftp] = ACTIONS(227),
        [anon_sym_irc] = ACTIONS(227),
        [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(227),
        [anon_sym_DOLLAR_DOLLAR] = ACTIONS(227),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_STAR2] = ACTIONS(227),
        [anon_sym_STAR_STAR] = ACTIONS(227),
        [anon_sym__2] = ACTIONS(227),
        [anon_sym___] = ACTIONS(227),
        [anon_sym_BQUOTE2] = ACTIONS(227),
        [anon_sym_BQUOTE_BQUOTE] = ACTIONS(227),
        [anon_sym_POUND2] = ACTIONS(227),
        [anon_sym_POUND_POUND] = ACTIONS(227),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 6,
    ACTIONS(233),
    1,
    anon_sym_RBRACK,
    ACTIONS(235),
    1,
    anon_sym_LBRACE,
    STATE(37),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(231),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(46),
    2,
    sym_inline_macro,
    sym_replacement,
    ACTIONS(229),
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
    ACTIONS(235),
    1,
    anon_sym_LBRACE,
    ACTIONS(237),
    1,
    anon_sym_RBRACK,
    STATE(40),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(231),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(46),
    2,
    sym_inline_macro,
    sym_replacement,
    ACTIONS(229),
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
    ACTIONS(235),
    1,
    anon_sym_LBRACE,
    ACTIONS(239),
    1,
    anon_sym_RBRACK,
    STATE(40),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(231),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(46),
    2,
    sym_inline_macro,
    sym_replacement,
    ACTIONS(229),
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
    ACTIONS(235),
    1,
    anon_sym_LBRACE,
    ACTIONS(241),
    1,
    anon_sym_RBRACK,
    STATE(42),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(231),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(46),
    2,
    sym_inline_macro,
    sym_replacement,
    ACTIONS(229),
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
    ACTIONS(249),
    1,
    anon_sym_RBRACK,
    ACTIONS(251),
    1,
    anon_sym_LBRACE,
    STATE(40),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(246),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(46),
    2,
    sym_inline_macro,
    sym_replacement,
    ACTIONS(243),
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
    ACTIONS(235),
    1,
    anon_sym_LBRACE,
    ACTIONS(254),
    1,
    anon_sym_RBRACK,
    STATE(38),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(231),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(46),
    2,
    sym_inline_macro,
    sym_replacement,
    ACTIONS(229),
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
    ACTIONS(235),
    1,
    anon_sym_LBRACE,
    ACTIONS(256),
    1,
    anon_sym_RBRACK,
    STATE(40),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(231),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(46),
    2,
    sym_inline_macro,
    sym_replacement,
    ACTIONS(229),
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
    ACTIONS(235),
    1,
    anon_sym_LBRACE,
    ACTIONS(258),
    1,
    anon_sym_RBRACK,
    STATE(44),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(231),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(46),
    2,
    sym_inline_macro,
    sym_replacement,
    ACTIONS(229),
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
    ACTIONS(235),
    1,
    anon_sym_LBRACE,
    ACTIONS(260),
    1,
    anon_sym_RBRACK,
    STATE(40),
    1,
    aux_sym_inline_macro_repeat2,
    ACTIONS(231),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(46),
    2,
    sym_inline_macro,
    sym_replacement,
    ACTIONS(229),
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
    ACTIONS(173),
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
    ACTIONS(262),
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
    ACTIONS(161),
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
    ACTIONS(203),
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
    ACTIONS(195),
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
    ACTIONS(165),
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
    ACTIONS(264),
    1,
    anon_sym_STAR2,
    ACTIONS(267),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(275),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(278),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(281),
    1,
    anon_sym_POUND2,
    ACTIONS(284),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(270),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_2,
    ACTIONS(273),
    2,
    anon_sym__3,
    anon_sym___,
    STATE(51),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [555] = 9,
    ACTIONS(292),
    1,
    anon_sym__2,
    ACTIONS(295),
    1,
    anon_sym___,
    ACTIONS(298),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(301),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(304),
    1,
    anon_sym_POUND2,
    ACTIONS(307),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(287),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR2,
    ACTIONS(290),
    2,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    STATE(52),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [588] = 9,
    ACTIONS(312),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(314),
    1,
    anon_sym__2,
    ACTIONS(316),
    1,
    anon_sym___,
    ACTIONS(318),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(320),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(322),
    1,
    anon_sym_POUND2,
    ACTIONS(324),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(310),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR2,
    STATE(61),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [620] = 9,
    ACTIONS(314),
    1,
    anon_sym__2,
    ACTIONS(316),
    1,
    anon_sym___,
    ACTIONS(318),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(320),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(322),
    1,
    anon_sym_POUND2,
    ACTIONS(324),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(328),
    1,
    anon_sym_STAR3,
    ACTIONS(326),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR2,
    STATE(52),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [652] = 9,
    ACTIONS(314),
    1,
    anon_sym__2,
    ACTIONS(316),
    1,
    anon_sym___,
    ACTIONS(318),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(320),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(322),
    1,
    anon_sym_POUND2,
    ACTIONS(324),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(332),
    1,
    anon_sym_STAR3,
    ACTIONS(330),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR2,
    STATE(68),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [684] = 9,
    ACTIONS(314),
    1,
    anon_sym__2,
    ACTIONS(316),
    1,
    anon_sym___,
    ACTIONS(318),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(320),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(322),
    1,
    anon_sym_POUND2,
    ACTIONS(324),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(332),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(334),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR2,
    STATE(67),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [716] = 9,
    ACTIONS(336),
    1,
    anon_sym_STAR2,
    ACTIONS(338),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(342),
    1,
    anon_sym__3,
    ACTIONS(344),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(346),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(348),
    1,
    anon_sym_POUND2,
    ACTIONS(350),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(340),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_2,
    STATE(66),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [748] = 9,
    ACTIONS(336),
    1,
    anon_sym_STAR2,
    ACTIONS(338),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(342),
    1,
    anon_sym___,
    ACTIONS(344),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(346),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(348),
    1,
    anon_sym_POUND2,
    ACTIONS(350),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(352),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_2,
    STATE(65),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [780] = 9,
    ACTIONS(336),
    1,
    anon_sym_STAR2,
    ACTIONS(338),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(344),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(346),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(348),
    1,
    anon_sym_POUND2,
    ACTIONS(350),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(356),
    1,
    anon_sym___,
    ACTIONS(354),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_2,
    STATE(51),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [812] = 9,
    ACTIONS(336),
    1,
    anon_sym_STAR2,
    ACTIONS(338),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(344),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(346),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(348),
    1,
    anon_sym_POUND2,
    ACTIONS(350),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(356),
    1,
    anon_sym__3,
    ACTIONS(354),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_2,
    STATE(51),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [844] = 9,
    ACTIONS(314),
    1,
    anon_sym__2,
    ACTIONS(316),
    1,
    anon_sym___,
    ACTIONS(318),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(320),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(322),
    1,
    anon_sym_POUND2,
    ACTIONS(324),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(328),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(326),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR2,
    STATE(52),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [876] = 9,
    ACTIONS(336),
    1,
    anon_sym_STAR2,
    ACTIONS(338),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(344),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(346),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(348),
    1,
    anon_sym_POUND2,
    ACTIONS(350),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(360),
    1,
    anon_sym___,
    ACTIONS(358),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_2,
    STATE(59),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [908] = 9,
    ACTIONS(336),
    1,
    anon_sym_STAR2,
    ACTIONS(338),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(344),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(346),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(348),
    1,
    anon_sym_POUND2,
    ACTIONS(350),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(360),
    1,
    anon_sym__3,
    ACTIONS(362),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_2,
    STATE(60),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [940] = 9,
    ACTIONS(312),
    1,
    anon_sym_STAR3,
    ACTIONS(314),
    1,
    anon_sym__2,
    ACTIONS(316),
    1,
    anon_sym___,
    ACTIONS(318),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(320),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(322),
    1,
    anon_sym_POUND2,
    ACTIONS(324),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(364),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR2,
    STATE(54),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [972] = 9,
    ACTIONS(336),
    1,
    anon_sym_STAR2,
    ACTIONS(338),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(344),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(346),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(348),
    1,
    anon_sym_POUND2,
    ACTIONS(350),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(366),
    1,
    anon_sym___,
    ACTIONS(354),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_2,
    STATE(51),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [1004] = 9,
    ACTIONS(336),
    1,
    anon_sym_STAR2,
    ACTIONS(338),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(344),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(346),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(348),
    1,
    anon_sym_POUND2,
    ACTIONS(350),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(366),
    1,
    anon_sym__3,
    ACTIONS(354),
    2,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_2,
    STATE(51),
    4,
    sym_emphasis,
    sym_monospace,
    sym_highlight,
    aux_sym_ltalic_repeat1,
    [1036] = 9,
    ACTIONS(314),
    1,
    anon_sym__2,
    ACTIONS(316),
    1,
    anon_sym___,
    ACTIONS(318),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(320),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(322),
    1,
    anon_sym_POUND2,
    ACTIONS(324),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(368),
    1,
    anon_sym_STAR_STAR,
    ACTIONS(326),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR2,
    STATE(52),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [1068] = 9,
    ACTIONS(314),
    1,
    anon_sym__2,
    ACTIONS(316),
    1,
    anon_sym___,
    ACTIONS(318),
    1,
    anon_sym_BQUOTE2,
    ACTIONS(320),
    1,
    anon_sym_BQUOTE_BQUOTE,
    ACTIONS(322),
    1,
    anon_sym_POUND2,
    ACTIONS(324),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(368),
    1,
    anon_sym_STAR3,
    ACTIONS(326),
    2,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR2,
    STATE(52),
    4,
    sym_ltalic,
    sym_monospace,
    sym_highlight,
    aux_sym_emphasis_repeat1,
    [1100] = 1,
    ACTIONS(199),
    10,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_2,
    anon_sym__3,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1113] = 1,
    ACTIONS(211),
    10,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR2,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1126] = 1,
    ACTIONS(223),
    10,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR2,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1139] = 1,
    ACTIONS(215),
    10,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR2,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1152] = 1,
    ACTIONS(211),
    10,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_2,
    anon_sym__3,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1165] = 1,
    ACTIONS(219),
    10,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_2,
    anon_sym__3,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1178] = 1,
    ACTIONS(137),
    10,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR2,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1191] = 1,
    ACTIONS(137),
    10,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_2,
    anon_sym__3,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1204] = 1,
    ACTIONS(215),
    10,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_2,
    anon_sym__3,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1217] = 1,
    ACTIONS(227),
    10,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR2,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1230] = 1,
    ACTIONS(133),
    10,
    anon_sym_STAR2,
    anon_sym_STAR_STAR,
    aux_sym_ltalic_token1,
    anon_sym_BSLASH_2,
    anon_sym__3,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1243] = 1,
    ACTIONS(199),
    10,
    aux_sym_emphasis_token1,
    anon_sym_BSLASH_STAR2,
    anon_sym_STAR3,
    anon_sym_STAR_STAR,
    anon_sym__2,
    anon_sym___,
    anon_sym_BQUOTE2,
    anon_sym_BQUOTE_BQUOTE,
    anon_sym_POUND2,
    anon_sym_POUND_POUND,
    [1256] = 5,
    ACTIONS(372),
    1,
    anon_sym_RBRACK,
    ACTIONS(374),
    1,
    anon_sym_LBRACE,
    STATE(149),
    1,
    sym_link_label,
    ACTIONS(370),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(90),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1274] = 5,
    ACTIONS(374),
    1,
    anon_sym_LBRACE,
    ACTIONS(376),
    1,
    anon_sym_RBRACK,
    STATE(151),
    1,
    sym_link_label,
    ACTIONS(370),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(90),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1292] = 5,
    ACTIONS(381),
    1,
    anon_sym_LBRACK,
    ACTIONS(383),
    1,
    anon_sym_LBRACE,
    STATE(83),
    1,
    aux_sym_inline_macro_repeat1,
    STATE(119),
    1,
    sym_replacement,
    ACTIONS(378),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1309] = 4,
    ACTIONS(389),
    1,
    anon_sym_RBRACK,
    ACTIONS(391),
    1,
    anon_sym_LBRACE,
    ACTIONS(386),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(84),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1324] = 5,
    ACTIONS(396),
    1,
    anon_sym_LBRACK,
    ACTIONS(398),
    1,
    anon_sym_LBRACE,
    STATE(88),
    1,
    aux_sym_inline_macro_repeat1,
    STATE(119),
    1,
    sym_replacement,
    ACTIONS(394),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1341] = 3,
    STATE(86),
    1,
    aux_sym_xref_repeat1,
    ACTIONS(400),
    2,
    anon_sym_COMMA,
    anon_sym_GT_GT,
    ACTIONS(402),
    3,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    [1354] = 4,
    ACTIONS(405),
    1,
    anon_sym_COMMA,
    ACTIONS(409),
    1,
    anon_sym_GT_GT,
    STATE(86),
    1,
    aux_sym_xref_repeat1,
    ACTIONS(407),
    3,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    [1369] = 5,
    ACTIONS(398),
    1,
    anon_sym_LBRACE,
    ACTIONS(411),
    1,
    anon_sym_LBRACK,
    STATE(83),
    1,
    aux_sym_inline_macro_repeat1,
    STATE(119),
    1,
    sym_replacement,
    ACTIONS(394),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1386] = 5,
    ACTIONS(398),
    1,
    anon_sym_LBRACE,
    ACTIONS(413),
    1,
    anon_sym_LBRACK,
    STATE(91),
    1,
    aux_sym_inline_macro_repeat1,
    STATE(119),
    1,
    sym_replacement,
    ACTIONS(394),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1403] = 4,
    ACTIONS(374),
    1,
    anon_sym_LBRACE,
    ACTIONS(417),
    1,
    anon_sym_RBRACK,
    ACTIONS(415),
    2,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    STATE(84),
    2,
    sym_replacement,
    aux_sym_link_label_repeat1,
    [1418] = 5,
    ACTIONS(398),
    1,
    anon_sym_LBRACE,
    ACTIONS(419),
    1,
    anon_sym_LBRACK,
    STATE(83),
    1,
    aux_sym_inline_macro_repeat1,
    STATE(119),
    1,
    sym_replacement,
    ACTIONS(394),
    2,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    [1435] = 3,
    ACTIONS(423),
    1,
    anon_sym_PLUS_PLUS_PLUS,
    STATE(94),
    1,
    aux_sym_passthrough_repeat2,
    ACTIONS(421),
    3,
    aux_sym_passthrough_token1,
    anon_sym_BSLASH_PLUS2,
    anon_sym_BSLASH_PLUS_PLUS_PLUS2,
    [1447] = 3,
    ACTIONS(425),
    1,
    anon_sym_DOLLAR_DOLLAR,
    STATE(93),
    1,
    aux_sym_passthrough_repeat3,
    ACTIONS(427),
    3,
    aux_sym_passthrough_token2,
    anon_sym_BSLASH_DOLLAR2,
    anon_sym_BSLASH_DOLLAR_DOLLAR2,
    [1459] = 3,
    ACTIONS(433),
    1,
    anon_sym_PLUS_PLUS_PLUS,
    STATE(94),
    1,
    aux_sym_passthrough_repeat2,
    ACTIONS(430),
    3,
    aux_sym_passthrough_token1,
    anon_sym_BSLASH_PLUS2,
    anon_sym_BSLASH_PLUS_PLUS_PLUS2,
    [1471] = 3,
    STATE(95),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(435),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND2,
    ACTIONS(438),
    2,
    anon_sym_POUND3,
    anon_sym_POUND_POUND,
    [1483] = 3,
    STATE(96),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(440),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE2,
    ACTIONS(443),
    2,
    anon_sym_BQUOTE3,
    anon_sym_BQUOTE_BQUOTE,
    [1495] = 3,
    ACTIONS(423),
    1,
    anon_sym_DOLLAR_DOLLAR,
    STATE(93),
    1,
    aux_sym_passthrough_repeat3,
    ACTIONS(445),
    3,
    aux_sym_passthrough_token2,
    anon_sym_BSLASH_DOLLAR2,
    anon_sym_BSLASH_DOLLAR_DOLLAR2,
    [1507] = 1,
    ACTIONS(447),
    5,
    anon_sym_COMMA,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    anon_sym_GT_GT,
    [1515] = 3,
    ACTIONS(451),
    1,
    anon_sym_BQUOTE3,
    STATE(96),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(449),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE2,
    [1526] = 3,
    ACTIONS(455),
    1,
    anon_sym_POUND_POUND,
    STATE(125),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(453),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND2,
    [1537] = 3,
    ACTIONS(459),
    1,
    anon_sym_GT_GT,
    STATE(105),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(457),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [1548] = 3,
    ACTIONS(463),
    1,
    anon_sym_POUND_POUND,
    STATE(95),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(461),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND2,
    [1559] = 3,
    ACTIONS(463),
    1,
    anon_sym_POUND3,
    STATE(95),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(461),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND2,
    [1570] = 3,
    ACTIONS(465),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(96),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(449),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE2,
    [1581] = 3,
    ACTIONS(470),
    1,
    anon_sym_GT_GT,
    STATE(105),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(467),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [1592] = 1,
    ACTIONS(161),
    4,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    anon_sym_LBRACK,
    anon_sym_LBRACE,
    [1599] = 3,
    ACTIONS(472),
    1,
    anon_sym_DOT,
    STATE(113),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(112),
    2,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    [1610] = 3,
    ACTIONS(465),
    1,
    anon_sym_BQUOTE3,
    STATE(96),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(449),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE2,
    [1621] = 3,
    ACTIONS(476),
    1,
    anon_sym_POUND_POUND,
    STATE(102),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(474),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND2,
    [1632] = 3,
    ACTIONS(476),
    1,
    anon_sym_POUND3,
    STATE(103),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(478),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND2,
    [1643] = 3,
    ACTIONS(482),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(104),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(480),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE2,
    [1654] = 3,
    ACTIONS(482),
    1,
    anon_sym_BQUOTE3,
    STATE(108),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(484),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE2,
    [1665] = 3,
    ACTIONS(472),
    1,
    anon_sym_DOT,
    STATE(117),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(120),
    2,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    [1676] = 2,
    STATE(92),
    1,
    aux_sym_passthrough_repeat2,
    ACTIONS(486),
    3,
    aux_sym_passthrough_token1,
    anon_sym_BSLASH_PLUS2,
    anon_sym_BSLASH_PLUS_PLUS_PLUS2,
    [1685] = 3,
    ACTIONS(488),
    1,
    anon_sym_PLUS,
    STATE(115),
    1,
    aux_sym_passthrough_repeat1,
    ACTIONS(490),
    2,
    aux_sym_passthrough_token1,
    anon_sym_BSLASH_PLUS2,
    [1696] = 2,
    STATE(97),
    1,
    aux_sym_passthrough_repeat3,
    ACTIONS(493),
    3,
    aux_sym_passthrough_token2,
    anon_sym_BSLASH_DOLLAR2,
    anon_sym_BSLASH_DOLLAR_DOLLAR2,
    [1705] = 3,
    ACTIONS(495),
    1,
    anon_sym_DOT,
    STATE(117),
    1,
    aux_sym_link_url_repeat1,
    ACTIONS(124),
    2,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    [1716] = 2,
    STATE(87),
    1,
    aux_sym_xref_repeat1,
    ACTIONS(407),
    3,
    aux_sym_xref_token1,
    anon_sym_BSLASH_COMMA,
    anon_sym_BSLASH_GT,
    [1725] = 1,
    ACTIONS(498),
    4,
    aux_sym_inline_macro_token1,
    anon_sym_BSLASH_LBRACK,
    anon_sym_LBRACK,
    anon_sym_LBRACE,
    [1732] = 3,
    ACTIONS(500),
    1,
    anon_sym_POUND_POUND,
    STATE(95),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(461),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND2,
    [1743] = 1,
    ACTIONS(161),
    4,
    aux_sym_inline_macro_token2,
    anon_sym_BSLASH_RBRACK,
    anon_sym_RBRACK,
    anon_sym_LBRACE,
    [1750] = 3,
    ACTIONS(500),
    1,
    anon_sym_POUND3,
    STATE(95),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(461),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND2,
    [1761] = 3,
    ACTIONS(451),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(96),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(449),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE2,
    [1772] = 3,
    ACTIONS(504),
    1,
    anon_sym_BQUOTE3,
    STATE(99),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(502),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE2,
    [1783] = 3,
    ACTIONS(506),
    1,
    anon_sym_POUND_POUND,
    STATE(95),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(461),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND2,
    [1794] = 3,
    ACTIONS(423),
    1,
    anon_sym_PLUS,
    STATE(115),
    1,
    aux_sym_passthrough_repeat1,
    ACTIONS(508),
    2,
    aux_sym_passthrough_token1,
    anon_sym_BSLASH_PLUS2,
    [1805] = 3,
    ACTIONS(506),
    1,
    anon_sym_POUND3,
    STATE(95),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(461),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND2,
    [1816] = 3,
    ACTIONS(510),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(96),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(449),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE2,
    [1827] = 3,
    ACTIONS(514),
    1,
    anon_sym_BQUOTE3,
    STATE(132),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(512),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE2,
    [1838] = 3,
    ACTIONS(514),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(128),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(516),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE2,
    [1849] = 3,
    ACTIONS(455),
    1,
    anon_sym_POUND3,
    STATE(127),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(518),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND2,
    [1860] = 3,
    ACTIONS(510),
    1,
    anon_sym_BQUOTE3,
    STATE(96),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(449),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE2,
    [1871] = 3,
    ACTIONS(504),
    1,
    anon_sym_BQUOTE_BQUOTE,
    STATE(123),
    1,
    aux_sym_monospace_repeat1,
    ACTIONS(520),
    2,
    aux_sym_monospace_token1,
    anon_sym_BSLASH_BQUOTE2,
    [1882] = 3,
    ACTIONS(524),
    1,
    anon_sym_POUND3,
    STATE(122),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(522),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND2,
    [1893] = 3,
    ACTIONS(524),
    1,
    anon_sym_POUND_POUND,
    STATE(120),
    1,
    aux_sym_highlight_repeat1,
    ACTIONS(526),
    2,
    aux_sym_highlight_token1,
    anon_sym_BSLASH_POUND2,
    [1904] = 1,
    ACTIONS(528),
    3,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    anon_sym_GT_GT,
    [1910] = 2,
    STATE(101),
    1,
    aux_sym_xref_repeat2,
    ACTIONS(457),
    2,
    anon_sym_BSLASH_GT,
    aux_sym_xref_token2,
    [1918] = 1,
    ACTIONS(124),
    3,
    anon_sym_LBRACK,
    anon_sym_DQUOTE,
    anon_sym_DOT,
    [1924] = 2,
    ACTIONS(530),
    1,
    anon_sym_LBRACK,
    ACTIONS(532),
    1,
    anon_sym_DQUOTE,
    [1931] = 2,
    ACTIONS(534),
    1,
    anon_sym_COMMA,
    ACTIONS(536),
    1,
    anon_sym_RBRACK_RBRACK,
    [1938] = 1,
    ACTIONS(538),
    1,
    anon_sym_DQUOTE,
    [1942] = 1,
    ACTIONS(540),
    1,
    anon_sym_RBRACE,
    [1946] = 1,
    ACTIONS(542),
    1,
    anon_sym_RBRACE,
    [1950] = 1,
    ACTIONS(544),
    1,
    sym__link_component,
    [1954] = 1,
    ACTIONS(546),
    1,
    aux_sym_replacement_token1,
    [1958] = 1,
    ACTIONS(548),
    1,
    sym__link_component,
    [1962] = 1,
    ACTIONS(550),
    1,
    aux_sym_anchor_token2,
    [1966] = 1,
    ACTIONS(552),
    1,
    sym__link_component,
    [1970] = 1,
    ACTIONS(554),
    1,
    anon_sym_RBRACK,
    [1974] = 1,
    ACTIONS(556),
    1,
    ts_builtin_sym_end,
    [1978] = 1,
    ACTIONS(558),
    1,
    anon_sym_RBRACK,
    [1982] = 1,
    ACTIONS(560),
    1,
    anon_sym_DQUOTE,
    [1986] = 1,
    ACTIONS(562),
    1,
    anon_sym_COLON,
    [1990] = 1,
    ACTIONS(564),
    1,
    anon_sym_RBRACE,
    [1994] = 1,
    ACTIONS(566),
    1,
    anon_sym_RBRACK_RBRACK,
    [1998] = 1,
    ACTIONS(568),
    1,
    sym__link_component,
    [2002] = 1,
    ACTIONS(570),
    1,
    anon_sym_RBRACE,
    [2006] = 1,
    ACTIONS(572),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [2010] = 1,
    ACTIONS(574),
    1,
    anon_sym_COLON_SLASH_SLASH,
    [2014] = 1,
    ACTIONS(576),
    1,
    aux_sym_replacement_token1,
    [2018] = 1,
    ACTIONS(578),
    1,
    aux_sym_anchor_token1,
    [2022] = 1,
    ACTIONS(580),
    1,
    aux_sym_replacement_token1,
    [2026] = 1,
    ACTIONS(582),
    1,
    anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(36)] = 0,
    [SMALL_STATE(37)] = 40,
    [SMALL_STATE(38)] = 80,
    [SMALL_STATE(39)] = 120,
    [SMALL_STATE(40)] = 160,
    [SMALL_STATE(41)] = 200,
    [SMALL_STATE(42)] = 240,
    [SMALL_STATE(43)] = 280,
    [SMALL_STATE(44)] = 320,
    [SMALL_STATE(45)] = 360,
    [SMALL_STATE(46)] = 387,
    [SMALL_STATE(47)] = 414,
    [SMALL_STATE(48)] = 441,
    [SMALL_STATE(49)] = 468,
    [SMALL_STATE(50)] = 495,
    [SMALL_STATE(51)] = 522,
    [SMALL_STATE(52)] = 555,
    [SMALL_STATE(53)] = 588,
    [SMALL_STATE(54)] = 620,
    [SMALL_STATE(55)] = 652,
    [SMALL_STATE(56)] = 684,
    [SMALL_STATE(57)] = 716,
    [SMALL_STATE(58)] = 748,
    [SMALL_STATE(59)] = 780,
    [SMALL_STATE(60)] = 812,
    [SMALL_STATE(61)] = 844,
    [SMALL_STATE(62)] = 876,
    [SMALL_STATE(63)] = 908,
    [SMALL_STATE(64)] = 940,
    [SMALL_STATE(65)] = 972,
    [SMALL_STATE(66)] = 1004,
    [SMALL_STATE(67)] = 1036,
    [SMALL_STATE(68)] = 1068,
    [SMALL_STATE(69)] = 1100,
    [SMALL_STATE(70)] = 1113,
    [SMALL_STATE(71)] = 1126,
    [SMALL_STATE(72)] = 1139,
    [SMALL_STATE(73)] = 1152,
    [SMALL_STATE(74)] = 1165,
    [SMALL_STATE(75)] = 1178,
    [SMALL_STATE(76)] = 1191,
    [SMALL_STATE(77)] = 1204,
    [SMALL_STATE(78)] = 1217,
    [SMALL_STATE(79)] = 1230,
    [SMALL_STATE(80)] = 1243,
    [SMALL_STATE(81)] = 1256,
    [SMALL_STATE(82)] = 1274,
    [SMALL_STATE(83)] = 1292,
    [SMALL_STATE(84)] = 1309,
    [SMALL_STATE(85)] = 1324,
    [SMALL_STATE(86)] = 1341,
    [SMALL_STATE(87)] = 1354,
    [SMALL_STATE(88)] = 1369,
    [SMALL_STATE(89)] = 1386,
    [SMALL_STATE(90)] = 1403,
    [SMALL_STATE(91)] = 1418,
    [SMALL_STATE(92)] = 1435,
    [SMALL_STATE(93)] = 1447,
    [SMALL_STATE(94)] = 1459,
    [SMALL_STATE(95)] = 1471,
    [SMALL_STATE(96)] = 1483,
    [SMALL_STATE(97)] = 1495,
    [SMALL_STATE(98)] = 1507,
    [SMALL_STATE(99)] = 1515,
    [SMALL_STATE(100)] = 1526,
    [SMALL_STATE(101)] = 1537,
    [SMALL_STATE(102)] = 1548,
    [SMALL_STATE(103)] = 1559,
    [SMALL_STATE(104)] = 1570,
    [SMALL_STATE(105)] = 1581,
    [SMALL_STATE(106)] = 1592,
    [SMALL_STATE(107)] = 1599,
    [SMALL_STATE(108)] = 1610,
    [SMALL_STATE(109)] = 1621,
    [SMALL_STATE(110)] = 1632,
    [SMALL_STATE(111)] = 1643,
    [SMALL_STATE(112)] = 1654,
    [SMALL_STATE(113)] = 1665,
    [SMALL_STATE(114)] = 1676,
    [SMALL_STATE(115)] = 1685,
    [SMALL_STATE(116)] = 1696,
    [SMALL_STATE(117)] = 1705,
    [SMALL_STATE(118)] = 1716,
    [SMALL_STATE(119)] = 1725,
    [SMALL_STATE(120)] = 1732,
    [SMALL_STATE(121)] = 1743,
    [SMALL_STATE(122)] = 1750,
    [SMALL_STATE(123)] = 1761,
    [SMALL_STATE(124)] = 1772,
    [SMALL_STATE(125)] = 1783,
    [SMALL_STATE(126)] = 1794,
    [SMALL_STATE(127)] = 1805,
    [SMALL_STATE(128)] = 1816,
    [SMALL_STATE(129)] = 1827,
    [SMALL_STATE(130)] = 1838,
    [SMALL_STATE(131)] = 1849,
    [SMALL_STATE(132)] = 1860,
    [SMALL_STATE(133)] = 1871,
    [SMALL_STATE(134)] = 1882,
    [SMALL_STATE(135)] = 1893,
    [SMALL_STATE(136)] = 1904,
    [SMALL_STATE(137)] = 1910,
    [SMALL_STATE(138)] = 1918,
    [SMALL_STATE(139)] = 1924,
    [SMALL_STATE(140)] = 1931,
    [SMALL_STATE(141)] = 1938,
    [SMALL_STATE(142)] = 1942,
    [SMALL_STATE(143)] = 1946,
    [SMALL_STATE(144)] = 1950,
    [SMALL_STATE(145)] = 1954,
    [SMALL_STATE(146)] = 1958,
    [SMALL_STATE(147)] = 1962,
    [SMALL_STATE(148)] = 1966,
    [SMALL_STATE(149)] = 1970,
    [SMALL_STATE(150)] = 1974,
    [SMALL_STATE(151)] = 1978,
    [SMALL_STATE(152)] = 1982,
    [SMALL_STATE(153)] = 1986,
    [SMALL_STATE(154)] = 1990,
    [SMALL_STATE(155)] = 1994,
    [SMALL_STATE(156)] = 1998,
    [SMALL_STATE(157)] = 2002,
    [SMALL_STATE(158)] = 2006,
    [SMALL_STATE(159)] = 2010,
    [SMALL_STATE(160)] = 2014,
    [SMALL_STATE(161)] = 2018,
    [SMALL_STATE(162)] = 2022,
    [SMALL_STATE(163)] = 2026,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(153),
    [5] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(2),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(5),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(20),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(7),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(4),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(161),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(159),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(114),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(116),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(118),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(55),
    [27] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(56),
    [29] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(57),
    [31] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(58),
    [33] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(124),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(133),
    [37] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(134),
    [39] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(135),
    [41] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline, 1, 0, 0),
    [43] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(3),
    [45] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    [47] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(153),
    [50] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(3),
    [53] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(5),
    [56] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(20),
    [59] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(7),
    [62] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(4),
    [65] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(161),
    [68] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(159),
    [71] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(114),
    [74] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(116),
    [77] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(118),
    [80] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(55),
    [83] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(56),
    [86] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(57),
    [89] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(58),
    [92] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(124),
    [95] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(133),
    [98] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(134),
    [101] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
    SHIFT_REPEAT(135),
    [104] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__punctuation, 1, 0, 0),
    [106] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__punctuation, 1, 0, 0),
    [108] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(126),
    [110] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(143),
    [112] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 3, 0, 0),
    [114] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 3, 0, 0),
    [116] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(156),
    [118] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(158),
    [120] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_link_url, 4, 0, 0),
    [122] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_url, 4, 0, 0),
    [124] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [126] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    [128] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(156),
    [131] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [133] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 3, 0, 0),
    [135] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 3, 0, 0),
    [137] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 3, 0, 0),
    [139] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [141] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_passthrough, 3, 0, 0),
    [143] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [145] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 3, 0, 0),
    [147] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 5, 0, 4),
    [149] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 5, 0, 4),
    [151] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 5, 0, 0),
    [153] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 5, 0, 0),
    [155] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 5, 0, 0),
    [157] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 5, 0, 0),
    [159] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_replacement, 3, 0, 0),
    [161] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_replacement, 3, 0, 0),
    [163] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 5, 0, 3),
    [165] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 5, 0, 3),
    [167] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_escaped_ch, 1, 0, 0),
    [169] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_escaped_ch, 1, 0, 0),
    [171] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 5, 0, 2),
    [173] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 5, 0, 2),
    [175] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [177] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 1, 0, 0),
    [179] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(81),
    [181] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [183] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 4, 0, 0),
    [185] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [187] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_auto_link, 6, 0, 0),
    [189] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_anchor, 3, 0, 0),
    [191] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_anchor, 3, 0, 0),
    [193] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 6, 0, 5),
    [195] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 6, 0, 5),
    [197] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_highlight, 2, 0, 0),
    [199] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_highlight, 2, 0, 0),
    [201] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_macro, 4, 0, 0),
    [203] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_macro, 4, 0, 0),
    [205] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xref, 3, 0, 1),
    [207] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_xref, 3, 0, 1),
    [209] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 2, 0, 0),
    [211] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 2, 0, 0),
    [213] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_monospace, 3, 0, 0),
    [215] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_monospace, 3, 0, 0),
    [217] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [219] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_emphasis, 2, 0, 0),
    [221] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [223] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 2, 0, 0),
    [225] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [227] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ltalic, 3, 0, 0),
    [229] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(163),
    [231] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(46),
    [233] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(50),
    [235] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(162),
    [237] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(49),
    [239] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(21),
    [241] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(19),
    [243] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(163),
    [246] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(46),
    [249] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0),
    [251] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0),
    SHIFT_REPEAT(162),
    [254] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(28),
    [256] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(26),
    [258] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(48),
    [260] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(45),
    [262] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat2, 1, 0, 0),
    [264] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(64),
    [267] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(53),
    [270] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(51),
    [273] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    [275] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(112),
    [278] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(111),
    [281] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(110),
    [284] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
    SHIFT_REPEAT(109),
    [287] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(52),
    [290] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    [292] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(63),
    [295] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(62),
    [298] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(129),
    [301] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(130),
    [304] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(131),
    [307] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
    SHIFT_REPEAT(100),
    [310] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(61),
    [312] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(74),
    [314] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(63),
    [316] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [318] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(129),
    [320] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(130),
    [322] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(131),
    [324] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(100),
    [326] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(52),
    [328] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(79),
    [330] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(68),
    [332] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(33),
    [334] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(67),
    [336] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(64),
    [338] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(53),
    [340] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(66),
    [342] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(34),
    [344] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(112),
    [346] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(111),
    [348] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(110),
    [350] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(109),
    [352] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(65),
    [354] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(51),
    [356] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(78),
    [358] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(59),
    [360] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(71),
    [362] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(60),
    [364] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(54),
    [366] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(35),
    [368] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(10),
    [370] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(90),
    [372] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(30),
    [374] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(160),
    [376] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(141),
    [378] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(119),
    [381] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 2, 0, 0),
    [383] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 2, 0, 0),
    SHIFT_REPEAT(145),
    [386] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    SHIFT_REPEAT(84),
    [389] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    [391] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
    SHIFT_REPEAT(160),
    [394] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(119),
    [396] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(41),
    [398] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(145),
    [400] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 2, 0, 0),
    [402] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 2, 0, 0),
    SHIFT_REPEAT(98),
    [405] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(137),
    [407] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(98),
    [409] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(29),
    [411] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(39),
    [413] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(43),
    [415] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(84),
    [417] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_link_label, 1, 0, 0),
    [419] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(36),
    [421] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(94),
    [423] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(12),
    [425] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_passthrough_repeat3, 2, 0, 0),
    [427] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_passthrough_repeat3, 2, 0, 0),
    SHIFT_REPEAT(93),
    [430] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_passthrough_repeat2, 2, 0, 0),
    SHIFT_REPEAT(94),
    [433] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_passthrough_repeat2, 2, 0, 0),
    [435] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    SHIFT_REPEAT(95),
    [438] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
    [440] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    SHIFT_REPEAT(96),
    [443] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
    [445] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(93),
    [447] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat1, 1, 0, 0),
    [449] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(96),
    [451] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(32),
    [453] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(125),
    [455] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(80),
    [457] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(136),
    [459] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(14),
    [461] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(95),
    [463] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(76),
    [465] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(77),
    [467] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 2, 0, 0),
    SHIFT_REPEAT(136),
    [470] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 2, 0, 0),
    [472] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(146),
    [474] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(102),
    [476] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(69),
    [478] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(103),
    [480] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(104),
    [482] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(73),
    [484] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(108),
    [486] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(92),
    [488] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_passthrough_repeat1, 2, 0, 0),
    [490] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_passthrough_repeat1, 2, 0, 0),
    SHIFT_REPEAT(115),
    [493] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(97),
    [495] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
    SHIFT_REPEAT(146),
    [498] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_inline_macro_repeat1, 1, 0, 0),
    [500] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(11),
    [502] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(99),
    [504] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(31),
    [506] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(75),
    [508] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(115),
    [510] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(72),
    [512] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(132),
    [514] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(70),
    [516] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(128),
    [518] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(127),
    [520] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(123),
    [522] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(122),
    [524] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(27),
    [526] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(120),
    [528] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_xref_repeat2, 1, 0, 0),
    [530] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [532] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [534] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(147),
    [536] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [538] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [540] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(121),
    [542] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [544] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [546] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(154),
    [548] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(138),
    [550] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(155),
    [552] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(107),
    [554] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [556] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [558] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(152),
    [560] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [562] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [564] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(106),
    [566] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [568] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [570] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [572] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(148),
    [574] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(144),
    [576] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(142),
    [578] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(140),
    [580] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(157),
    [582] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(89),
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
