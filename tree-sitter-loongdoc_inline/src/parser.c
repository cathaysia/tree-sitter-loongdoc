#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 214
#define LARGE_STATE_COUNT 36
#define SYMBOL_COUNT 202
#define ALIAS_COUNT 2
#define TOKEN_COUNT 172
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
  anon_sym_stem = 11,
  anon_sym_latexmath = 12,
  anon_sym_asciimath = 13,
  anon_sym_footnote = 14,
  anon_sym_footnoteref = 15,
  anon_sym_anchor = 16,
  anon_sym_xref = 17,
  anon_sym_ifdef = 18,
  anon_sym_ifndef = 19,
  anon_sym_ifeval = 20,
  anon_sym_endif = 21,
  anon_sym_a2s = 22,
  anon_sym_barcode = 23,
  anon_sym_blockdiag = 24,
  anon_sym_bpmn = 25,
  anon_sym_bytefield = 26,
  anon_sym_d2 = 27,
  anon_sym_dbml = 28,
  anon_sym_diagrams = 29,
  anon_sym_ditaa = 30,
  anon_sym_dpic = 31,
  anon_sym_erd = 32,
  anon_sym_gnuplot = 33,
  anon_sym_graphviz = 34,
  anon_sym_lilypond = 35,
  anon_sym_meme = 36,
  anon_sym_mermaid = 37,
  anon_sym_msc = 38,
  anon_sym_nomnoml = 39,
  anon_sym_pikchr = 40,
  anon_sym_plantuml = 41,
  anon_sym_shaape = 42,
  anon_sym_smcat = 43,
  anon_sym_structurizr = 44,
  anon_sym_svgbob = 45,
  anon_sym_symbolator = 46,
  anon_sym_syntrax = 47,
  anon_sym_tikz = 48,
  anon_sym_umlet = 49,
  anon_sym_vega = 50,
  anon_sym_wavedrom = 51,
  anon_sym_COLON = 52,
  aux_sym_inline_macro_token1 = 53,
  anon_sym_BSLASH_LBRACK = 54,
  anon_sym_LBRACK = 55,
  aux_sym_inline_macro_token2 = 56,
  anon_sym_BSLASH_RBRACK = 57,
  anon_sym_RBRACK = 58,
  anon_sym_LBRACE = 59,
  aux_sym_replacement_token1 = 60,
  anon_sym_RBRACE = 61,
  sym__word_no_digit = 62,
  sym__digits = 63,
  anon_sym_BSLASH_PLUS_PLUS_PLUS = 64,
  anon_sym_BSLASH_PLUS = 65,
  anon_sym_BSLASH_BQUOTE = 66,
  anon_sym_BSLASH_BQUOTE_BQUOTE = 67,
  anon_sym_BSLASH_STAR = 68,
  anon_sym_BSLASH_STAR_STAR = 69,
  anon_sym_BSLASH_DOLLAR = 70,
  anon_sym_BSLASH_DOLLAR_DOLLAR = 71,
  anon_sym_BSLASH_POUND = 72,
  anon_sym_BSLASH_POUND_POUND = 73,
  anon_sym_BSLASH_ = 74,
  anon_sym_BSLASH__ = 75,
  anon_sym_BSLASH_LT_LT = 76,
  anon_sym_BSLASH_LBRACK_LBRACK = 77,
  anon_sym_BSLASH_LBRACK2 = 78,
  anon_sym_BSLASHkbd = 79,
  anon_sym_BSLASHbtn = 80,
  anon_sym_BSLASHimage = 81,
  anon_sym_BSLASHaudio = 82,
  anon_sym_BSLASHvideo = 83,
  anon_sym_BSLASHicon = 84,
  anon_sym_BSLASHpass = 85,
  anon_sym_BSLASHlink = 86,
  anon_sym_BSLASHmailto = 87,
  anon_sym_BSLASHmenu = 88,
  anon_sym_BSLASHstem = 89,
  anon_sym_BSLASHlatexmath = 90,
  anon_sym_BSLASHasciimath = 91,
  anon_sym_BSLASHfootnote = 92,
  anon_sym_BSLASHfootnoteref = 93,
  anon_sym_BSLASHanchor = 94,
  anon_sym_BSLASHxref = 95,
  anon_sym_BSLASHifdef = 96,
  anon_sym_BSLASHifndef = 97,
  anon_sym_BSLASHifeval = 98,
  anon_sym_BSLASHendif = 99,
  anon_sym_BANG = 100,
  anon_sym_DQUOTE = 101,
  anon_sym_POUND = 102,
  anon_sym_DOLLAR = 103,
  anon_sym_PERCENT = 104,
  anon_sym_AMP = 105,
  anon_sym_SQUOTE = 106,
  anon_sym_LPAREN = 107,
  anon_sym_RPAREN = 108,
  anon_sym_STAR = 109,
  anon_sym_PLUS = 110,
  anon_sym_COMMA = 111,
  anon_sym_DASH = 112,
  anon_sym_DOT = 113,
  anon_sym_SLASH = 114,
  anon_sym_COLON2 = 115,
  anon_sym_SEMI = 116,
  anon_sym_LT = 117,
  anon_sym_EQ = 118,
  anon_sym_GT = 119,
  anon_sym_QMARK = 120,
  anon_sym_AT = 121,
  anon_sym_BSLASH = 122,
  anon_sym_CARET = 123,
  anon_sym__ = 124,
  anon_sym_BQUOTE = 125,
  anon_sym_PIPE = 126,
  anon_sym_TILDE = 127,
  anon_sym_LBRACK_LBRACK = 128,
  aux_sym_anchor_token1 = 129,
  aux_sym_anchor_token2 = 130,
  anon_sym_RBRACK_RBRACK = 131,
  sym_email = 132,
  anon_sym_http = 133,
  anon_sym_https = 134,
  anon_sym_file = 135,
  anon_sym_ftp = 136,
  anon_sym_irc = 137,
  anon_sym_www = 138,
  anon_sym_COLON_SLASH_SLASH = 139,
  sym__link_component = 140,
  aux_sym_passthrough_token1 = 141,
  anon_sym_BSLASH_PLUS2 = 142,
  anon_sym_PLUS_PLUS_PLUS = 143,
  anon_sym_BSLASH_PLUS_PLUS_PLUS2 = 144,
  anon_sym_DOLLAR_DOLLAR = 145,
  aux_sym_passthrough_token2 = 146,
  anon_sym_BSLASH_DOLLAR2 = 147,
  anon_sym_BSLASH_DOLLAR_DOLLAR2 = 148,
  anon_sym_LT_LT = 149,
  aux_sym_xref_token1 = 150,
  anon_sym_BSLASH_COMMA = 151,
  anon_sym_BSLASH_GT = 152,
  aux_sym_xref_token2 = 153,
  anon_sym_GT_GT = 154,
  anon_sym_STAR2 = 155,
  aux_sym_emphasis_token1 = 156,
  anon_sym_BSLASH_STAR2 = 157,
  anon_sym_STAR_STAR = 158,
  anon_sym__2 = 159,
  aux_sym_ltalic_token1 = 160,
  anon_sym_BSLASH_2 = 161,
  anon_sym___ = 162,
  anon_sym_BQUOTE2 = 163,
  aux_sym_monospace_token1 = 164,
  anon_sym_BSLASH_BQUOTE2 = 165,
  anon_sym_BQUOTE_BQUOTE = 166,
  anon_sym_POUND2 = 167,
  aux_sym_highlight_token1 = 168,
  anon_sym_BSLASH_POUND2 = 169,
  anon_sym_POUND_POUND = 170,
  sym__eof = 171,
  sym_inline = 172,
  sym_inline_macro = 173,
  sym_replacement = 174,
  sym__word = 175,
  sym_escaped_ch = 176,
  sym__punctuation = 177,
  sym_anchor = 178,
  sym_auto_link = 179,
  sym_link_label = 180,
  sym_link_url = 181,
  sym_passthrough = 182,
  sym_xref = 183,
  sym_emphasis = 184,
  sym_ltalic = 185,
  sym_monospace = 186,
  sym_highlight = 187,
  aux_sym_inline_repeat1 = 188,
  aux_sym_inline_macro_repeat1 = 189,
  aux_sym_inline_macro_repeat2 = 190,
  aux_sym_link_label_repeat1 = 191,
  aux_sym_link_url_repeat1 = 192,
  aux_sym_passthrough_repeat1 = 193,
  aux_sym_passthrough_repeat2 = 194,
  aux_sym_passthrough_repeat3 = 195,
  aux_sym_xref_repeat1 = 196,
  aux_sym_xref_repeat2 = 197,
  aux_sym_emphasis_repeat1 = 198,
  aux_sym_ltalic_repeat1 = 199,
  aux_sym_monospace_repeat1 = 200,
  aux_sym_highlight_repeat1 = 201,
  alias_sym_attr = 202,
  alias_sym_target = 203,
};

static const char * const ts_symbol_names[] = {
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
  [anon_sym_stem] = "stem",
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
  [anon_sym_a2s] = "a2s",
  [anon_sym_barcode] = "barcode",
  [anon_sym_blockdiag] = "blockdiag",
  [anon_sym_bpmn] = "bpmn",
  [anon_sym_bytefield] = "bytefield",
  [anon_sym_d2] = "d2",
  [anon_sym_dbml] = "dbml",
  [anon_sym_diagrams] = "diagrams",
  [anon_sym_ditaa] = "ditaa",
  [anon_sym_dpic] = "dpic",
  [anon_sym_erd] = "erd",
  [anon_sym_gnuplot] = "gnuplot",
  [anon_sym_graphviz] = "graphviz",
  [anon_sym_lilypond] = "lilypond",
  [anon_sym_meme] = "meme",
  [anon_sym_mermaid] = "mermaid",
  [anon_sym_msc] = "msc",
  [anon_sym_nomnoml] = "nomnoml",
  [anon_sym_pikchr] = "pikchr",
  [anon_sym_plantuml] = "plantuml",
  [anon_sym_shaape] = "shaape",
  [anon_sym_smcat] = "smcat",
  [anon_sym_structurizr] = "structurizr",
  [anon_sym_svgbob] = "svgbob",
  [anon_sym_symbolator] = "symbolator",
  [anon_sym_syntrax] = "syntrax",
  [anon_sym_tikz] = "tikz",
  [anon_sym_umlet] = "umlet",
  [anon_sym_vega] = "vega",
  [anon_sym_wavedrom] = "wavedrom",
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
  [anon_sym_BSLASHstem] = "\\stem",
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
  [anon_sym_www] = "www",
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
  [anon_sym_STAR2] = "*",
  [aux_sym_emphasis_token1] = "emphasis_token1",
  [anon_sym_BSLASH_STAR2] = "\\*",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym__2] = "_",
  [aux_sym_ltalic_token1] = "ltalic_token1",
  [anon_sym_BSLASH_2] = "\\_",
  [anon_sym___] = "__",
  [anon_sym_BQUOTE2] = "`",
  [aux_sym_monospace_token1] = "monospace_token1",
  [anon_sym_BSLASH_BQUOTE2] = "\\`",
  [anon_sym_BQUOTE_BQUOTE] = "``",
  [anon_sym_POUND2] = "#",
  [aux_sym_highlight_token1] = "highlight_token1",
  [anon_sym_BSLASH_POUND2] = "\\#",
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
  [anon_sym_stem] = anon_sym_stem,
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
  [anon_sym_a2s] = anon_sym_a2s,
  [anon_sym_barcode] = anon_sym_barcode,
  [anon_sym_blockdiag] = anon_sym_blockdiag,
  [anon_sym_bpmn] = anon_sym_bpmn,
  [anon_sym_bytefield] = anon_sym_bytefield,
  [anon_sym_d2] = anon_sym_d2,
  [anon_sym_dbml] = anon_sym_dbml,
  [anon_sym_diagrams] = anon_sym_diagrams,
  [anon_sym_ditaa] = anon_sym_ditaa,
  [anon_sym_dpic] = anon_sym_dpic,
  [anon_sym_erd] = anon_sym_erd,
  [anon_sym_gnuplot] = anon_sym_gnuplot,
  [anon_sym_graphviz] = anon_sym_graphviz,
  [anon_sym_lilypond] = anon_sym_lilypond,
  [anon_sym_meme] = anon_sym_meme,
  [anon_sym_mermaid] = anon_sym_mermaid,
  [anon_sym_msc] = anon_sym_msc,
  [anon_sym_nomnoml] = anon_sym_nomnoml,
  [anon_sym_pikchr] = anon_sym_pikchr,
  [anon_sym_plantuml] = anon_sym_plantuml,
  [anon_sym_shaape] = anon_sym_shaape,
  [anon_sym_smcat] = anon_sym_smcat,
  [anon_sym_structurizr] = anon_sym_structurizr,
  [anon_sym_svgbob] = anon_sym_svgbob,
  [anon_sym_symbolator] = anon_sym_symbolator,
  [anon_sym_syntrax] = anon_sym_syntrax,
  [anon_sym_tikz] = anon_sym_tikz,
  [anon_sym_umlet] = anon_sym_umlet,
  [anon_sym_vega] = anon_sym_vega,
  [anon_sym_wavedrom] = anon_sym_wavedrom,
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
  [anon_sym_BSLASHstem] = anon_sym_BSLASHstem,
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
  [anon_sym_www] = anon_sym_www,
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
  [anon_sym_STAR2] = anon_sym_STAR,
  [aux_sym_emphasis_token1] = aux_sym_emphasis_token1,
  [anon_sym_BSLASH_STAR2] = anon_sym_BSLASH_STAR,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym__2] = anon_sym__,
  [aux_sym_ltalic_token1] = aux_sym_ltalic_token1,
  [anon_sym_BSLASH_2] = anon_sym_BSLASH_,
  [anon_sym___] = anon_sym___,
  [anon_sym_BQUOTE2] = anon_sym_BQUOTE,
  [aux_sym_monospace_token1] = aux_sym_monospace_token1,
  [anon_sym_BSLASH_BQUOTE2] = anon_sym_BSLASH_BQUOTE,
  [anon_sym_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE,
  [anon_sym_POUND2] = anon_sym_POUND,
  [aux_sym_highlight_token1] = aux_sym_highlight_token1,
  [anon_sym_BSLASH_POUND2] = anon_sym_BSLASH_POUND,
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
  [anon_sym_a2s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_barcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blockdiag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bpmn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytefield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dbml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_diagrams] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ditaa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dpic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_erd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gnuplot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_graphviz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lilypond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mermaid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nomnoml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pikchr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_plantuml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shaape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smcat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_structurizr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_svgbob] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_symbolator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_syntrax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tikz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_umlet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vega] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wavedrom] = {
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
  [anon_sym_BSLASHstem] = {
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
  [anon_sym_www] = {
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
  [0] = {0},
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
  aux_sym_inline_macro_repeat1, 2,
    aux_sym_inline_macro_repeat1,
    alias_sym_target,
  aux_sym_inline_macro_repeat2, 2,
    aux_sym_inline_macro_repeat2,
    alias_sym_attr,
  aux_sym_xref_repeat1, 2,
    aux_sym_xref_repeat1,
    aux_sym_anchor_token1,
  aux_sym_xref_repeat2, 2,
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
  [41] = 6,
  [42] = 8,
  [43] = 9,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 44,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 45,
  [53] = 49,
  [54] = 44,
  [55] = 47,
  [56] = 46,
  [57] = 57,
  [58] = 46,
  [59] = 47,
  [60] = 49,
  [61] = 50,
  [62] = 51,
  [63] = 45,
  [64] = 57,
  [65] = 51,
  [66] = 15,
  [67] = 50,
  [68] = 57,
  [69] = 69,
  [70] = 70,
  [71] = 70,
  [72] = 69,
  [73] = 22,
  [74] = 32,
  [75] = 23,
  [76] = 17,
  [77] = 34,
  [78] = 78,
  [79] = 12,
  [80] = 31,
  [81] = 18,
  [82] = 30,
  [83] = 33,
  [84] = 26,
  [85] = 25,
  [86] = 29,
  [87] = 13,
  [88] = 18,
  [89] = 28,
  [90] = 30,
  [91] = 28,
  [92] = 13,
  [93] = 18,
  [94] = 26,
  [95] = 29,
  [96] = 33,
  [97] = 25,
  [98] = 13,
  [99] = 26,
  [100] = 25,
  [101] = 13,
  [102] = 18,
  [103] = 26,
  [104] = 25,
  [105] = 105,
  [106] = 106,
  [107] = 106,
  [108] = 108,
  [109] = 105,
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
  [122] = 31,
  [123] = 123,
  [124] = 124,
  [125] = 8,
  [126] = 126,
  [127] = 127,
  [128] = 9,
  [129] = 129,
  [130] = 124,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 6,
  [135] = 31,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 123,
  [142] = 142,
  [143] = 127,
  [144] = 123,
  [145] = 142,
  [146] = 129,
  [147] = 129,
  [148] = 126,
  [149] = 149,
  [150] = 150,
  [151] = 132,
  [152] = 127,
  [153] = 142,
  [154] = 129,
  [155] = 155,
  [156] = 156,
  [157] = 149,
  [158] = 126,
  [159] = 137,
  [160] = 149,
  [161] = 156,
  [162] = 137,
  [163] = 137,
  [164] = 126,
  [165] = 149,
  [166] = 156,
  [167] = 123,
  [168] = 127,
  [169] = 142,
  [170] = 129,
  [171] = 123,
  [172] = 127,
  [173] = 156,
  [174] = 142,
  [175] = 126,
  [176] = 137,
  [177] = 149,
  [178] = 156,
  [179] = 179,
  [180] = 180,
  [181] = 15,
  [182] = 182,
  [183] = 182,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 186,
  [192] = 186,
  [193] = 193,
  [194] = 194,
  [195] = 188,
  [196] = 188,
  [197] = 188,
  [198] = 193,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 190,
  [204] = 189,
  [205] = 194,
  [206] = 206,
  [207] = 207,
  [208] = 200,
  [209] = 207,
  [210] = 193,
  [211] = 202,
  [212] = 200,
  [213] = 207,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(173);
      ADVANCE_MAP(
        '!', 884,
        '"', 887,
        '#', 1016,
        '$', 890,
        '%', 892,
        '&', 894,
        '\'', 896,
        '(', 898,
        ')', 900,
        '*', 998,
        '+', 904,
        ',', 906,
        '-', 908,
        '.', 910,
        '/', 912,
        ':', 276,
        ';', 916,
        '<', 918,
        '=', 920,
        '>', 922,
        '?', 924,
        '@', 926,
        '[', 282,
        '\\', 928,
        ']', 295,
        '^', 930,
        '_', 1004,
        '`', 1010,
        'a', 637,
        'b', 643,
        'd', 638,
        'e', 774,
        'f', 725,
        'g', 767,
        'h', 815,
        'i', 671,
        'k', 663,
        'l', 648,
        'm', 645,
        'n', 790,
        'p', 639,
        's', 722,
        't', 726,
        'u', 763,
        'v', 698,
        'w', 640,
        'x', 799,
        '{', 298,
        '|', 934,
        '}', 634,
        '~', 936,
        '\t', 968,
        ' ', 968,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(170);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(635);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(845);
      if (lookahead != 0) ADVANCE(844);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(169);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 886,
        ',', 906,
        '.', 910,
        ':', 276,
        '[', 281,
        ']', 73,
        'f', 118,
        'h', 157,
        'i', 147,
        'w', 162,
        '}', 633,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 886,
        ',', 906,
        '.', 910,
        '[', 281,
        ']', 73,
        'f', 118,
        'h', 157,
        'i', 147,
        'w', 162,
        '}', 633,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 886,
        '.', 910,
        '[', 281,
        '\\', 289,
        ']', 295,
        'f', 290,
        'h', 292,
        'i', 291,
        'w', 293,
        '{', 297,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(285);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 886,
        '[', 281,
        '\\', 289,
        ']', 295,
        'f', 290,
        'h', 292,
        'i', 291,
        'w', 293,
        '{', 297,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 886,
        '\\', 289,
        ']', 295,
        'f', 290,
        'h', 292,
        'i', 291,
        'w', 293,
        '{', 297,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(1016);
      if (lookahead == '*') ADVANCE(998);
      if (lookahead == '\\') ADVANCE(1007);
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == '`') ADVANCE(1010);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1006);
      if (lookahead != 0) ADVANCE(1005);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(1016);
      if (lookahead == '*') ADVANCE(998);
      if (lookahead == '\\') ADVANCE(1007);
      if (lookahead == '_') ADVANCE(932);
      if (lookahead == '`') ADVANCE(1010);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1006);
      if (lookahead != 0) ADVANCE(1005);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(1016);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(1001);
      if (lookahead == '_') ADVANCE(1004);
      if (lookahead == '`') ADVANCE(1010);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1000);
      if (lookahead != 0) ADVANCE(999);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(1016);
      if (lookahead == '*') ADVANCE(902);
      if (lookahead == '\\') ADVANCE(1001);
      if (lookahead == '_') ADVANCE(1004);
      if (lookahead == '`') ADVANCE(1010);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(10);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1000);
      if (lookahead != 0) ADVANCE(999);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(11);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1019);
      if (lookahead != 0) ADVANCE(1017);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(1021);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(889);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(13);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1019);
      if (lookahead != 0) ADVANCE(1017);
      END_STATE();
    case 14:
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(983);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(14);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(984);
      if (lookahead != 0) ADVANCE(982);
      END_STATE();
    case 15:
      if (lookahead == '$') ADVANCE(979);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(1003);
      END_STATE();
    case 17:
      if (lookahead == '+') ADVANCE(976);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == '+') ADVANCE(846);
      END_STATE();
    case 19:
      if (lookahead == '+') ADVANCE(975);
      END_STATE();
    case 20:
      if (lookahead == '+') ADVANCE(978);
      END_STATE();
    case 21:
      if (lookahead == '+') ADVANCE(903);
      if (lookahead == '\\') ADVANCE(970);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(972);
      if (lookahead != 0) ADVANCE(967);
      END_STATE();
    case 22:
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(969);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(22);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(971);
      if (lookahead != 0) ADVANCE(967);
      END_STATE();
    case 23:
      if (lookahead == '+') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == ',') ADVANCE(906);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(990);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(991);
      if (lookahead != 0) ADVANCE(989);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(945);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == '1') ADVANCE(32);
      if (lookahead == '2') ADVANCE(29);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '5') ADVANCE(30);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == ']') ADVANCE(944);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == ']') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(33);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == ']') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == ']') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == ']') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == ':') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == 's') ADVANCE(216);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '5') ADVANCE(41);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '5') ADVANCE(46);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '5') ADVANCE(51);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == '/') ADVANCE(965);
      END_STATE();
    case 55:
      if (lookahead == '/') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == '1') ADVANCE(53);
      if (lookahead == '2') ADVANCE(50);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 57:
      if (lookahead == '0') ADVANCE(39);
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == '2') ADVANCE(40);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 58:
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == '2') ADVANCE(45);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == ']') ADVANCE(295);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 60:
      if (lookahead == '<') ADVANCE(859);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(995);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(996);
      if (lookahead != 0) ADVANCE(994);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(997);
      END_STATE();
    case 63:
      if (lookahead == '@') ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == '[') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 65:
      if (lookahead == '[') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(278);
      if (lookahead == '{') ADVANCE(297);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(279);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 66:
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == ']') ADVANCE(946);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == ']') ADVANCE(946);
      if ((0x01 <= lookahead && lookahead <= '\t') ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x7f)) ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == '\\') ADVANCE(67);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(66);
      END_STATE();
    case 69:
      if (lookahead == '\\') ADVANCE(628);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 70:
      if (lookahead == '\\') ADVANCE(289);
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == '{') ADVANCE(297);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(288);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 71:
      if (lookahead == '\\') ADVANCE(1013);
      if (lookahead == '`') ADVANCE(933);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(71);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1012);
      if (lookahead != 0) ADVANCE(1011);
      END_STATE();
    case 72:
      if (lookahead == '\\') ADVANCE(1013);
      if (lookahead == '`') ADVANCE(76);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(72);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1012);
      if (lookahead != 0) ADVANCE(1011);
      END_STATE();
    case 73:
      if (lookahead == ']') ADVANCE(943);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(1009);
      END_STATE();
    case 76:
      if (lookahead == '`') ADVANCE(1015);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(89);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(959);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(862);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(864);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(875);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(953);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(879);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(883);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(880);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(881);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(877);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 111:
      if (lookahead == 'h') ADVANCE(874);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(873);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 121:
      if (lookahead == 'k') ADVANCE(869);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(882);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(872);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(863);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(867);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(865);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(866);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(870);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(956);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(949);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(878);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(868);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(871);
      END_STATE();
    case 161:
      if (lookahead == 'v') ADVANCE(80);
      END_STATE();
    case 162:
      if (lookahead == 'w') ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'w') ADVANCE(962);
      END_STATE();
    case 164:
      if (lookahead == 'x') ADVANCE(127);
      END_STATE();
    case 165:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(165);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != '>' &&
          lookahead != '[') ADVANCE(966);
      END_STATE();
    case 166:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(942);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(945);
      END_STATE();
    case 168:
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 169:
      if ((0x01 <= lookahead && lookahead <= '\t') ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x7f)) ADVANCE(1);
      END_STATE();
    case 170:
      if (eof) ADVANCE(173);
      ADVANCE_MAP(
        '!', 884,
        '"', 887,
        '#', 1016,
        '$', 890,
        '%', 892,
        '&', 894,
        '\'', 896,
        '(', 898,
        ')', 900,
        '*', 998,
        '+', 904,
        ',', 906,
        '-', 908,
        '.', 910,
        '/', 912,
        ':', 914,
        ';', 916,
        '<', 918,
        '=', 920,
        '>', 922,
        '?', 924,
        '@', 926,
        '[', 282,
        '\\', 928,
        ']', 295,
        '^', 930,
        '_', 1004,
        '`', 1010,
        'a', 637,
        'b', 643,
        'd', 638,
        'e', 774,
        'f', 725,
        'g', 767,
        'h', 815,
        'i', 671,
        'k', 663,
        'l', 648,
        'm', 645,
        'n', 790,
        'p', 639,
        's', 722,
        't', 726,
        'u', 763,
        'v', 698,
        'w', 640,
        'x', 799,
        '{', 298,
        '|', 934,
        '}', 634,
        '~', 936,
        '\t', 968,
        ' ', 968,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(170);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(635);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(845);
      if (lookahead != 0) ADVANCE(844);
      END_STATE();
    case 171:
      if (eof) ADVANCE(173);
      ADVANCE_MAP(
        '!', 884,
        '"', 887,
        '#', 1016,
        '$', 890,
        '%', 892,
        '&', 894,
        '\'', 896,
        '(', 898,
        ')', 900,
        '*', 998,
        '+', 904,
        ',', 906,
        '-', 908,
        '.', 910,
        '/', 912,
        ':', 914,
        ';', 916,
        '<', 918,
        '=', 920,
        '>', 922,
        '?', 924,
        '@', 926,
        '[', 282,
        '\\', 928,
        ']', 295,
        '^', 930,
        '_', 1004,
        '`', 1010,
        'a', 637,
        'b', 643,
        'd', 638,
        'e', 774,
        'f', 725,
        'g', 767,
        'h', 815,
        'i', 671,
        'k', 663,
        'l', 648,
        'm', 645,
        'n', 790,
        'p', 639,
        's', 722,
        't', 726,
        'u', 763,
        'v', 698,
        'w', 640,
        'x', 799,
        '{', 298,
        '|', 934,
        '}', 634,
        '~', 936,
        0x0b, 636,
        '\f', 636,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(171);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(845);
      if (lookahead != 0) ADVANCE(844);
      END_STATE();
    case 172:
      if (eof) ADVANCE(173);
      ADVANCE_MAP(
        '!', 885,
        '"', 888,
        '#', 1016,
        '$', 891,
        '%', 893,
        '&', 895,
        '\'', 897,
        '(', 899,
        ')', 901,
        '*', 998,
        '+', 905,
        ',', 907,
        '-', 909,
        '.', 911,
        '/', 913,
        ':', 915,
        ';', 917,
        '<', 919,
        '=', 921,
        '>', 923,
        '?', 925,
        '@', 927,
        '[', 283,
        '\\', 929,
        ']', 296,
        '^', 931,
        '_', 1004,
        '`', 1010,
        'a', 315,
        'b', 321,
        'd', 316,
        'e', 452,
        'f', 403,
        'g', 445,
        'h', 493,
        'i', 349,
        'k', 341,
        'l', 326,
        'm', 323,
        'n', 468,
        'p', 317,
        's', 400,
        't', 404,
        'u', 441,
        'v', 376,
        'w', 318,
        'x', 477,
        '{', 299,
        '|', 935,
        '}', 634,
        '~', 937,
        0x0b, 300,
        '\f', 300,
        '\t', 300,
        '\n', 300,
        '\r', 300,
        ' ', 300,
        'c', 521,
        'j', 521,
        'o', 521,
        'q', 521,
        'r', 521,
        'y', 521,
        'z', 521,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_kbd);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_kbd);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_btn);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_btn);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_image);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_image);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_audio);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_audio);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_video);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_video);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_icon);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_icon);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_pass);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_pass);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_link);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_link);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_mailto);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_mailto);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_stem);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_stem);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_latexmath);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_latexmath);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_asciimath);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_asciimath);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(704);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'r') ADVANCE(382);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_footnoteref);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_footnoteref);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_anchor);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_anchor);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_xref);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_xref);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_ifdef);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_ifdef);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_ifndef);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_ifndef);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_ifeval);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_ifeval);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_endif);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_endif);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_a2s);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_a2s);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_barcode);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_barcode);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_blockdiag);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_blockdiag);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_bpmn);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_bpmn);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_bytefield);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_bytefield);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_d2);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_d2);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_dbml);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_dbml);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_diagrams);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_diagrams);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_ditaa);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_ditaa);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_dpic);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_dpic);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_erd);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_erd);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_gnuplot);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_gnuplot);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_graphviz);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_graphviz);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_lilypond);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_lilypond);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_meme);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_meme);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_mermaid);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_mermaid);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_msc);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_msc);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_nomnoml);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_nomnoml);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_pikchr);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_pikchr);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_plantuml);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_plantuml);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_shaape);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_shaape);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_smcat);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_smcat);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_structurizr);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_structurizr);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_svgbob);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_svgbob);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_symbolator);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_symbolator);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_syntrax);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_syntrax);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_tikz);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_tikz);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_umlet);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_umlet);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_vega);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_vega);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_wavedrom);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_wavedrom);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_inline_macro_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_inline_macro_token1);
      if (lookahead == '[') ADVANCE(280);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_inline_macro_token1);
      if (lookahead == '\\') ADVANCE(278);
      if (lookahead == '{') ADVANCE(297);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(277);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(938);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(939);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_inline_macro_token2);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_inline_macro_token2);
      ADVANCE_MAP(
        '"', 886,
        '.', 910,
        '[', 281,
        '\\', 289,
        'f', 290,
        'h', 292,
        'i', 291,
        'w', 293,
        '{', 297,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(284);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_inline_macro_token2);
      ADVANCE_MAP(
        '"', 886,
        '[', 281,
        '\\', 289,
        'f', 290,
        'h', 292,
        'i', 291,
        'w', 293,
        '{', 297,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(284);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_inline_macro_token2);
      if (lookahead == '"') ADVANCE(886);
      if (lookahead == '\\') ADVANCE(289);
      if (lookahead == 'f') ADVANCE(290);
      if (lookahead == 'h') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == 'w') ADVANCE(293);
      if (lookahead == '{') ADVANCE(297);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(284);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_inline_macro_token2);
      if (lookahead == '\\') ADVANCE(289);
      if (lookahead == '{') ADVANCE(297);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(284);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_inline_macro_token2);
      if (lookahead == ']') ADVANCE(294);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_inline_macro_token2);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_inline_macro_token2);
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_inline_macro_token2);
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_inline_macro_token2);
      if (lookahead == 'w') ADVANCE(163);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      ADVANCE_MAP(
        '!', 885,
        '"', 888,
        '#', 1016,
        '$', 891,
        '%', 893,
        '&', 895,
        '\'', 897,
        '(', 899,
        ')', 901,
        '*', 998,
        '+', 905,
        ',', 907,
        '-', 909,
        '.', 911,
        '/', 913,
        ':', 915,
        ';', 917,
        '<', 919,
        '=', 921,
        '>', 923,
        '?', 925,
        '@', 927,
        '[', 283,
        '\\', 929,
        ']', 296,
        '^', 931,
        '_', 1004,
        '`', 1010,
        'a', 315,
        'b', 321,
        'd', 316,
        'e', 452,
        'f', 403,
        'g', 445,
        'h', 493,
        'i', 349,
        'k', 341,
        'l', 326,
        'm', 323,
        'n', 468,
        'p', 317,
        's', 400,
        't', 404,
        'u', 441,
        'v', 376,
        'w', 318,
        'x', 477,
        '{', 299,
        '|', 935,
        '~', 937,
        0x0b, 300,
        '\f', 300,
        '\t', 300,
        '\n', 300,
        '\r', 300,
        ' ', 300,
        'c', 521,
        'j', 521,
        'o', 521,
        'q', 521,
        'r', 521,
        'y', 521,
        'z', 521,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (lookahead != 0 &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(546);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '"') ADVANCE(544);
      if (lookahead == '\\') ADVANCE(629);
      if (lookahead == '}') ADVANCE(1);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(301);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '"') ADVANCE(544);
      if (lookahead == '\\') ADVANCE(629);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(301);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '+') ADVANCE(846);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '+') ADVANCE(977);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '\\') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '\\') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '-') ADVANCE(314);
      if (lookahead == '0') ADVANCE(312);
      if (lookahead == '1') ADVANCE(311);
      if (lookahead == '2') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(628);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '-') ADVANCE(314);
      if (lookahead == '5') ADVANCE(309);
      if (lookahead == ':') ADVANCE(632);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == ']') ADVANCE(627);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(310);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '-') ADVANCE(314);
      if (lookahead == ':') ADVANCE(632);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == ']') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(312);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '-') ADVANCE(314);
      if (lookahead == ':') ADVANCE(632);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == ']') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '-') ADVANCE(314);
      if (lookahead == ':') ADVANCE(632);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == ']') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '-') ADVANCE(314);
      if (lookahead == ':') ADVANCE(632);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == ']') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '-') ADVANCE(314);
      if (lookahead == ':') ADVANCE(632);
      if (lookahead == '\\') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '-') ADVANCE(314);
      if (lookahead == '\\') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      ADVANCE_MAP(
        '.', 624,
        '2', 522,
        '@', 545,
        '\\', 628,
        '_', 521,
        'n', 344,
        's', 350,
        'u', 360,
        '}', 38,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      ADVANCE_MAP(
        '.', 624,
        '2', 227,
        '@', 545,
        '\\', 628,
        '_', 521,
        'b', 434,
        'i', 325,
        'p', 412,
        '}', 38,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      ADVANCE_MAP(
        '.', 624,
        '@', 545,
        '\\', 628,
        '_', 521,
        'a', 489,
        'i', 418,
        'l', 329,
        '}', 38,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(511);
      if (lookahead == 'w') ADVANCE(514);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      ADVANCE_MAP(
        '.', 624,
        '@', 545,
        '\\', 628,
        '_', 521,
        'a', 482,
        'l', 463,
        'p', 433,
        't', 446,
        'y', 504,
        '}', 38,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(515);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      ADVANCE_MAP(
        '.', 624,
        '@', 545,
        '\\', 628,
        '_', 521,
        'a', 406,
        'e', 437,
        's', 346,
        '}', 38,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(473);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead == 'i') ADVANCE(420);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(503);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'b') ADVANCE(263);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'b') ADVANCE(356);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'b') ADVANCE(457);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'b') ADVANCE(462);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'c') ADVANCE(401);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'c') ADVANCE(961);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'c') ADVANCE(249);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'c') ADVANCE(235);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'c') ADVANCE(402);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      ADVANCE_MAP(
        '.', 624,
        '@', 545,
        '\\', 628,
        '_', 521,
        'c', 458,
        'f', 366,
        'm', 327,
        'r', 345,
        '}', 38,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'c') ADVANCE(410);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'c') ADVANCE(419);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'c') ADVANCE(334);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'c') ADVANCE(469);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'c') ADVANCE(498);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'd') ADVANCE(237);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'd') ADVANCE(225);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'd') ADVANCE(409);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'd') ADVANCE(408);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'd') ADVANCE(486);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'd') ADVANCE(385);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'd') ADVANCE(414);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'd') ADVANCE(374);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      ADVANCE_MAP(
        '.', 624,
        '@', 545,
        '\\', 628,
        '_', 521,
        'd', 379,
        'e', 512,
        'n', 367,
        '}', 38,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(955);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(516);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead == 'r') ADVANCE(509);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'f') ADVANCE(207);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'f') ADVANCE(215);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'f') ADVANCE(209);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'f') ADVANCE(211);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'f') ADVANCE(413);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'g') ADVANCE(221);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'g') ADVANCE(342);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'g') ADVANCE(483);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'g') ADVANCE(319);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'g') ADVANCE(372);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'h') ADVANCE(199);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'h') ADVANCE(197);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'h') ADVANCE(513);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      ADVANCE_MAP(
        '.', 624,
        '@', 545,
        '\\', 628,
        '_', 521,
        'h', 338,
        'm', 352,
        't', 378,
        'v', 393,
        'y', 442,
        '}', 38,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'h') ADVANCE(459);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'h') ADVANCE(479);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      ADVANCE_MAP(
        '.', 624,
        '@', 545,
        '\\', 628,
        '_', 521,
        'i', 425,
        'o', 460,
        't', 471,
        '}', 38,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(416);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(519);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(520);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(454);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(443);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'k') ADVANCE(518);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'k') ADVANCE(189);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'k') ADVANCE(348);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'k') ADVANCE(364);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'l') ADVANCE(517);
      if (lookahead == 'n') ADVANCE(417);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'l') ADVANCE(229);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'l') ADVANCE(251);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'l') ADVANCE(255);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'l') ADVANCE(359);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'l') ADVANCE(467);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'l') ADVANCE(339);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'm') ADVANCE(195);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'm') ADVANCE(275);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'm') ADVANCE(447);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'm') ADVANCE(421);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'm') ADVANCE(488);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'm') ADVANCE(451);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      ADVANCE_MAP(
        '.', 624,
        '@', 545,
        '\\', 628,
        '_', 521,
        'm', 371,
        'n', 506,
        'r', 440,
        '}', 38,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'm') ADVANCE(423);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'm') ADVANCE(424);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'm') ADVANCE(335);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'm') ADVANCE(426);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'm') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'm') ADVANCE(336);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'm') ADVANCE(337);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'n') ADVANCE(507);
      if (lookahead == 'r') ADVANCE(324);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'n') ADVANCE(496);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'n') ADVANCE(466);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'o') ADVANCE(183);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'o') ADVANCE(478);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'o') ADVANCE(500);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'o') ADVANCE(432);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'o') ADVANCE(430);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'o') ADVANCE(480);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'o') ADVANCE(502);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'o') ADVANCE(492);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'o') ADVANCE(436);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'o') ADVANCE(365);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'p') ADVANCE(958);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'p') ADVANCE(948);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'p') ADVANCE(399);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'p') ADVANCE(429);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'p') ADVANCE(373);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'p') ADVANCE(464);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'r') ADVANCE(368);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'r') ADVANCE(253);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'r') ADVANCE(353);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'r') ADVANCE(328);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'r') ADVANCE(407);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'r') ADVANCE(461);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 's') ADVANCE(487);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 't') ADVANCE(495);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 't') ADVANCE(397);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 't') ADVANCE(508);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 't') ADVANCE(398);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 't') ADVANCE(453);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 't') ADVANCE(456);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 't') ADVANCE(375);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 't') ADVANCE(465);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 't') ADVANCE(377);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'u') ADVANCE(474);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'u') ADVANCE(484);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'u') ADVANCE(354);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'u') ADVANCE(439);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'v') ADVANCE(381);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'v') ADVANCE(330);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'v') ADVANCE(405);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'w') ADVANCE(964);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'x') ADVANCE(267);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'x') ADVANCE(444);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'y') ADVANCE(476);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'z') ADVANCE(269);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'z') ADVANCE(241);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'z') ADVANCE(481);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 's') ADVANCE(217);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(523);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '5') ADVANCE(526);
      if (lookahead == '\\') ADVANCE(628);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '\\') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '\\') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '\\') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(541);
      if (lookahead == '5') ADVANCE(531);
      if (lookahead == '\\') ADVANCE(628);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(541);
      if (lookahead == '\\') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(541);
      if (lookahead == '\\') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(541);
      if (lookahead == '\\') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(541);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == '5') ADVANCE(536);
      if (lookahead == '\\') ADVANCE(628);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == '\\') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == '\\') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == '\\') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '0') ADVANCE(539);
      if (lookahead == '1') ADVANCE(538);
      if (lookahead == '2') ADVANCE(535);
      if (lookahead == '\\') ADVANCE(628);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '0') ADVANCE(529);
      if (lookahead == '1') ADVANCE(528);
      if (lookahead == '2') ADVANCE(525);
      if (lookahead == '\\') ADVANCE(628);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '0') ADVANCE(534);
      if (lookahead == '1') ADVANCE(533);
      if (lookahead == '2') ADVANCE(530);
      if (lookahead == '\\') ADVANCE(628);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '<') ADVANCE(859);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '[') ADVANCE(540);
      if (lookahead == '\\') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(546);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          lookahead == '{' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(627);
      if (lookahead != 0 &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(546);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(582);
      if (lookahead == 'e') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(617);
      if (lookahead == 'i') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'b') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'c') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'c') ADVANCE(606);
      if (lookahead == 'f') ADVANCE(559);
      if (lookahead == 'm') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'c') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'd') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'd') ADVANCE(569);
      if (lookahead == 'e') ADVANCE(622);
      if (lookahead == 'n') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'd') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'd') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'd') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'e') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'e') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'e') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'e') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'e') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'f') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'f') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'f') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'f') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'f') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'g') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'h') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'h') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'h') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'i') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'i') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'i') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'i') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'k') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'l') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'l') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'm') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'm') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'm') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'n') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'n') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'n') ADVANCE(555);
      if (lookahead == 's') ADVANCE(557);
      if (lookahead == 'u') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'n') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'n') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'n') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'o') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'o') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'o') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'o') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'o') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'o') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'o') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'o') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'r') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'r') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 's') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 't') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 't') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 't') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 't') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 't') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 't') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 't') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 't') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'u') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'v') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == 'x') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(302);
      if ((0x01 <= lookahead && lookahead <= '\t') ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x7f)) ADVANCE(301);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(631);
      if (lookahead == ']') ADVANCE(630);
      if (lookahead == '}') ADVANCE(66);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(630);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(631);
      if (lookahead == ']') ADVANCE(630);
      if ((0x01 <= lookahead && lookahead <= '\t') ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x7f)) ADVANCE(630);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_replacement_token1);
      if (lookahead == '\\') ADVANCE(631);
      if (lookahead == '}') ADVANCE(66);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(630);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__word_no_digit);
      ADVANCE_MAP(
        '#', 1016,
        '*', 998,
        '\\', 928,
        '_', 1004,
        '`', 1010,
        'a', 637,
        'b', 643,
        'd', 638,
        'e', 774,
        'f', 725,
        'g', 767,
        'h', 815,
        'i', 671,
        'k', 663,
        'l', 648,
        'm', 645,
        'n', 790,
        'p', 639,
        's', 722,
        't', 726,
        'u', 763,
        'v', 698,
        'w', 640,
        'x', 799,
        '\t', 968,
        ' ', 968,
        0x0b, 635,
        '\f', 635,
        'c', 843,
        'j', 843,
        'o', 843,
        'q', 843,
        'r', 843,
        'y', 843,
        'z', 843,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__word_no_digit);
      ADVANCE_MAP(
        '#', 1016,
        '*', 998,
        '\\', 928,
        '_', 1004,
        '`', 1010,
        'a', 637,
        'b', 643,
        'd', 638,
        'e', 774,
        'f', 725,
        'g', 767,
        'h', 815,
        'i', 671,
        'k', 663,
        'l', 648,
        'm', 645,
        'n', 790,
        'p', 639,
        's', 722,
        't', 726,
        'u', 763,
        'v', 698,
        'w', 640,
        'x', 799,
        0x0b, 636,
        '\f', 636,
        'c', 843,
        'j', 843,
        'o', 843,
        'q', 843,
        'r', 843,
        'y', 843,
        'z', 843,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '2') ADVANCE(37);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 's') ADVANCE(672);
      if (lookahead == 'u') ADVANCE(682);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '2') ADVANCE(226);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(756);
      if (lookahead == 'i') ADVANCE(647);
      if (lookahead == 'p') ADVANCE(734);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(811);
      if (lookahead == 'i') ADVANCE(740);
      if (lookahead == 'l') ADVANCE(651);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(833);
      if (lookahead == 'w') ADVANCE(836);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(272);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(232);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__word_no_digit);
      ADVANCE_MAP(
        '.', 168,
        '@', 64,
        '_', 36,
        'a', 804,
        'l', 785,
        'p', 755,
        't', 768,
        'y', 826,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(837);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(759);
      if (lookahead == 's') ADVANCE(668);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(795);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(716);
      if (lookahead == 't') ADVANCE(655);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(742);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(718);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(757);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(771);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(744);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(714);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(797);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(642);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(812);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(733);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(819);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(821);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(654);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(825);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(262);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(678);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(779);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(784);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(723);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(960);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(248);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(724);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(780);
      if (lookahead == 'f') ADVANCE(688);
      if (lookahead == 'm') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(667);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(732);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(741);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(656);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(791);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(820);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(236);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(174);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(246);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(224);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(731);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(730);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(808);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(707);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(736);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(696);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(701);
      if (lookahead == 'e') ADVANCE(834);
      if (lookahead == 'n') ADVANCE(689);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(702);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(708);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(954);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(838);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(244);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(178);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(256);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(218);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(200);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(717);
      if (lookahead == 'i') ADVANCE(685);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(713);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(753);
      if (lookahead == 'r') ADVANCE(831);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(710);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(711);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(684);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(712);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(750);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(813);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(777);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(214);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(208);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(210);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(735);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(664);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(805);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(641);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(694);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'h') ADVANCE(198);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'h') ADVANCE(196);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'h') ADVANCE(835);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__word_no_digit);
      ADVANCE_MAP(
        '.', 168,
        '@', 64,
        '_', 36,
        'h', 660,
        'm', 674,
        't', 700,
        'v', 715,
        'y', 764,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'h') ADVANCE(781);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'h') ADVANCE(801);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(747);
      if (lookahead == 'o') ADVANCE(782);
      if (lookahead == 't') ADVANCE(793);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(738);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(841);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(749);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(842);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(709);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(776);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(737);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(669);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(705);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(653);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(765);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'k') ADVANCE(840);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'k') ADVANCE(188);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'k') ADVANCE(670);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'k') ADVANCE(686);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(839);
      if (lookahead == 'n') ADVANCE(739);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(228);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(254);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(691);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(706);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(823);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(681);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(789);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(661);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(194);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(274);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(769);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(743);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(810);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(773);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(693);
      if (lookahead == 'n') ADVANCE(828);
      if (lookahead == 'r') ADVANCE(762);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(745);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(746);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(657);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(748);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(827);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(658);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(659);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(829);
      if (lookahead == 'r') ADVANCE(646);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(176);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(222);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(184);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(818);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(680);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(792);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(683);
      if (lookahead == 'r') ADVANCE(677);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(788);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(180);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(182);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(190);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(662);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(770);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(800);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(822);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(754);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(752);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(673);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(772);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(802);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(824);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(814);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(758);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(687);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(760);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(957);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(947);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(721);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(751);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(695);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(786);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(690);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(204);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(264);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(260);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(675);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(650);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(729);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(783);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 's') ADVANCE(186);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 's') ADVANCE(230);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 's') ADVANCE(809);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(258);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(270);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(238);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(817);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(692);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(794);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(832);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(719);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(830);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(720);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(775);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(778);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(787);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(699);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(807);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(192);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(796);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(806);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(676);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(761);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'v') ADVANCE(703);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'v') ADVANCE(652);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'v') ADVANCE(727);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'w') ADVANCE(963);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(266);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(766);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'y') ADVANCE(798);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'z') ADVANCE(268);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'z') ADVANCE(240);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'z') ADVANCE(803);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '_') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__digits);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(845);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_BSLASH_PLUS_PLUS_PLUS);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_BSLASH_PLUS);
      if (lookahead == '+') ADVANCE(18);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_BSLASH_PLUS);
      if (lookahead == '+') ADVANCE(303);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_BSLASH_BQUOTE);
      if (lookahead == '`') ADVANCE(850);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_BSLASH_BQUOTE_BQUOTE);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_BSLASH_STAR);
      if (lookahead == '*') ADVANCE(852);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_BSLASH_STAR_STAR);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR);
      if (lookahead == '$') ADVANCE(854);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR_DOLLAR);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_BSLASH_POUND);
      if (lookahead == '#') ADVANCE(856);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_BSLASH_POUND_POUND);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_BSLASH_);
      if (lookahead == '_') ADVANCE(858);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_BSLASH__);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_BSLASH_LT_LT);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK_LBRACK);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK2);
      if (lookahead == '[') ADVANCE(860);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_BSLASHkbd);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_BSLASHbtn);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_BSLASHimage);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_BSLASHaudio);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_BSLASHvideo);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_BSLASHicon);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_BSLASHpass);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_BSLASHlink);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_BSLASHmailto);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_BSLASHmenu);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_BSLASHstem);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_BSLASHlatexmath);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_BSLASHasciimath);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_BSLASHfootnote);
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_BSLASHfootnote);
      if (lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_BSLASHfootnoteref);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_BSLASHanchor);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_BSLASHxref);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_BSLASHifdef);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_BSLASHifndef);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_BSLASHifeval);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_BSLASHendif);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(169);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(1);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(544);
      if (lookahead == '\\') ADVANCE(629);
      if (lookahead == '}') ADVANCE(1);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(301);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(980);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(981);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(304);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_COLON2);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(987);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(988);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      ADVANCE_MAP(
        '#', 855,
        '$', 853,
        '*', 851,
        '+', 847,
        '<', 60,
        '[', 861,
        '_', 857,
        '`', 849,
        'a', 128,
        'b', 151,
        'e', 134,
        'f', 138,
        'i', 87,
        'k', 84,
        'l', 81,
        'm', 79,
        'p', 77,
        's', 150,
        'v', 117,
        'x', 146,
      );
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      ADVANCE_MAP(
        '#', 855,
        '$', 853,
        '*', 851,
        '+', 848,
        '<', 543,
        '[', 861,
        '\\', 628,
        '_', 857,
        '`', 849,
        'a', 596,
        'b', 614,
        'e', 600,
        'f', 604,
        'i', 556,
        'k', 554,
        'l', 551,
        'm', 549,
        'p', 547,
        's', 613,
        'v', 585,
        'x', 610,
      );
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_anchor_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_anchor_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(942);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_anchor_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(942);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_email);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(945);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == ']') ADVANCE(946);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(66);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 's') ADVANCE(951);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 's') ADVANCE(952);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == 's') ADVANCE(950);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_https);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_https);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_https);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_ftp);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_ftp);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_ftp);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_irc);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_irc);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_irc);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_www);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_www);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '~' < lookahead)) ADVANCE(844);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_www);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym__link_component);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '>' &&
          lookahead != '[') ADVANCE(966);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_passthrough_token1);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_passthrough_token1);
      ADVANCE_MAP(
        '!', 884,
        '"', 887,
        '#', 1016,
        '$', 890,
        '%', 892,
        '&', 894,
        '\'', 896,
        '(', 898,
        ')', 900,
        '*', 998,
        ',', 906,
        '-', 908,
        '.', 910,
        '/', 912,
        ':', 914,
        ';', 916,
        '<', 918,
        '=', 920,
        '>', 922,
        '?', 924,
        '@', 926,
        '[', 282,
        '\\', 928,
        ']', 295,
        '^', 930,
        '_', 1004,
        '`', 1010,
        'a', 637,
        'b', 643,
        'd', 638,
        'e', 774,
        'f', 725,
        'g', 767,
        'h', 815,
        'i', 671,
        'k', 663,
        'l', 648,
        'm', 645,
        'n', 790,
        'p', 639,
        's', 722,
        't', 726,
        'u', 763,
        'v', 698,
        'w', 640,
        'x', 799,
        '{', 298,
        '|', 934,
        '}', 634,
        '~', 936,
        '\t', 968,
        ' ', 968,
        0x0b, 635,
        '\f', 635,
        'c', 843,
        'j', 843,
        'o', 843,
        'q', 843,
        'r', 843,
        'y', 843,
        'z', 843,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(845);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '@' < lookahead)) ADVANCE(844);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_passthrough_token1);
      if (lookahead == '+') ADVANCE(974);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_passthrough_token1);
      if (lookahead == '+') ADVANCE(973);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_passthrough_token1);
      if (lookahead == '\\') ADVANCE(969);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(971);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '+') ADVANCE(967);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_passthrough_token1);
      if (lookahead == '\\') ADVANCE(970);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(972);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '+') ADVANCE(967);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_BSLASH_PLUS2);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_BSLASH_PLUS2);
      if (lookahead == '+') ADVANCE(20);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_BSLASH_PLUS_PLUS_PLUS2);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(524);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_passthrough_token2);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_passthrough_token2);
      if (lookahead == '$') ADVANCE(985);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_passthrough_token2);
      if (lookahead == '\\') ADVANCE(983);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(984);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$') ADVANCE(982);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR2);
      if (lookahead == '$') ADVANCE(986);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR_DOLLAR2);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(627);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_xref_token1);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_xref_token1);
      if (lookahead == ',') ADVANCE(992);
      if (lookahead == '>') ADVANCE(993);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_xref_token1);
      if (lookahead == '\\') ADVANCE(990);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '>') ADVANCE(989);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_BSLASH_COMMA);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_BSLASH_GT);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_xref_token2);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_xref_token2);
      if (lookahead == '>') ADVANCE(993);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_xref_token2);
      if (lookahead == '\\') ADVANCE(995);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(994);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_emphasis_token1);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_emphasis_token1);
      if (lookahead == '#') ADVANCE(1016);
      if (lookahead == '\\') ADVANCE(1001);
      if (lookahead == '_') ADVANCE(1004);
      if (lookahead == '`') ADVANCE(1010);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(1000);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '*') ADVANCE(999);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_emphasis_token1);
      if (lookahead == '*') ADVANCE(1002);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_BSLASH_STAR2);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym__2);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_ltalic_token1);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_ltalic_token1);
      if (lookahead == '#') ADVANCE(1016);
      if (lookahead == '*') ADVANCE(998);
      if (lookahead == '\\') ADVANCE(1007);
      if (lookahead == '`') ADVANCE(1010);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(1006);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '_' &&
          lookahead != '`') ADVANCE(1005);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_ltalic_token1);
      if (lookahead == '_') ADVANCE(1008);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_BSLASH_2);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_monospace_token1);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_monospace_token1);
      if (lookahead == '\\') ADVANCE(1013);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(1012);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '`') ADVANCE(1011);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_monospace_token1);
      if (lookahead == '`') ADVANCE(1014);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_BSLASH_BQUOTE2);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_POUND2);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_highlight_token1);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_highlight_token1);
      if (lookahead == '#') ADVANCE(1020);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_highlight_token1);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(1019);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(1017);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_BSLASH_POUND2);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 171},
  [2] = {.lex_state = 171},
  [3] = {.lex_state = 171},
  [4] = {.lex_state = 170},
  [5] = {.lex_state = 172},
  [6] = {.lex_state = 171},
  [7] = {.lex_state = 171},
  [8] = {.lex_state = 171},
  [9] = {.lex_state = 171},
  [10] = {.lex_state = 171},
  [11] = {.lex_state = 171},
  [12] = {.lex_state = 171},
  [13] = {.lex_state = 171},
  [14] = {.lex_state = 171},
  [15] = {.lex_state = 171},
  [16] = {.lex_state = 171},
  [17] = {.lex_state = 171},
  [18] = {.lex_state = 171},
  [19] = {.lex_state = 171},
  [20] = {.lex_state = 171},
  [21] = {.lex_state = 171},
  [22] = {.lex_state = 171},
  [23] = {.lex_state = 171},
  [24] = {.lex_state = 171},
  [25] = {.lex_state = 171},
  [26] = {.lex_state = 171},
  [27] = {.lex_state = 171},
  [28] = {.lex_state = 171},
  [29] = {.lex_state = 171},
  [30] = {.lex_state = 171},
  [31] = {.lex_state = 171},
  [32] = {.lex_state = 171},
  [33] = {.lex_state = 171},
  [34] = {.lex_state = 171},
  [35] = {.lex_state = 171},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 70},
  [106] = {.lex_state = 70},
  [107] = {.lex_state = 70},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 70},
  [110] = {.lex_state = 65},
  [111] = {.lex_state = 70},
  [112] = {.lex_state = 65},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 65},
  [115] = {.lex_state = 70},
  [116] = {.lex_state = 24},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 24},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 22},
  [121] = {.lex_state = 22},
  [122] = {.lex_state = 70},
  [123] = {.lex_state = 71},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 71},
  [127] = {.lex_state = 72},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 11},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 71},
  [133] = {.lex_state = 21},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 65},
  [136] = {.lex_state = 22},
  [137] = {.lex_state = 72},
  [138] = {.lex_state = 24},
  [139] = {.lex_state = 61},
  [140] = {.lex_state = 21},
  [141] = {.lex_state = 71},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 72},
  [144] = {.lex_state = 71},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 11},
  [148] = {.lex_state = 71},
  [149] = {.lex_state = 13},
  [150] = {.lex_state = 65},
  [151] = {.lex_state = 72},
  [152] = {.lex_state = 72},
  [153] = {.lex_state = 13},
  [154] = {.lex_state = 11},
  [155] = {.lex_state = 61},
  [156] = {.lex_state = 11},
  [157] = {.lex_state = 13},
  [158] = {.lex_state = 71},
  [159] = {.lex_state = 72},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 11},
  [162] = {.lex_state = 72},
  [163] = {.lex_state = 72},
  [164] = {.lex_state = 71},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 71},
  [168] = {.lex_state = 72},
  [169] = {.lex_state = 13},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 71},
  [172] = {.lex_state = 72},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 13},
  [175] = {.lex_state = 71},
  [176] = {.lex_state = 72},
  [177] = {.lex_state = 13},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 61},
  [180] = {.lex_state = 61},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 165},
  [187] = {.lex_state = 59},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 59},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 165},
  [192] = {.lex_state = 165},
  [193] = {.lex_state = 165},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 165},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 59},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 59},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 59},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 166},
  [207] = {.lex_state = 69},
  [208] = {.lex_state = 59},
  [209] = {.lex_state = 69},
  [210] = {.lex_state = 165},
  [211] = {.lex_state = 59},
  [212] = {.lex_state = 59},
  [213] = {.lex_state = 69},
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
    [anon_sym_stem] = ACTIONS(1),
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
    [anon_sym_a2s] = ACTIONS(1),
    [anon_sym_barcode] = ACTIONS(1),
    [anon_sym_blockdiag] = ACTIONS(1),
    [anon_sym_bpmn] = ACTIONS(1),
    [anon_sym_bytefield] = ACTIONS(1),
    [anon_sym_d2] = ACTIONS(1),
    [anon_sym_dbml] = ACTIONS(1),
    [anon_sym_diagrams] = ACTIONS(1),
    [anon_sym_ditaa] = ACTIONS(1),
    [anon_sym_dpic] = ACTIONS(1),
    [anon_sym_erd] = ACTIONS(1),
    [anon_sym_gnuplot] = ACTIONS(1),
    [anon_sym_graphviz] = ACTIONS(1),
    [anon_sym_lilypond] = ACTIONS(1),
    [anon_sym_meme] = ACTIONS(1),
    [anon_sym_mermaid] = ACTIONS(1),
    [anon_sym_msc] = ACTIONS(1),
    [anon_sym_nomnoml] = ACTIONS(1),
    [anon_sym_pikchr] = ACTIONS(1),
    [anon_sym_plantuml] = ACTIONS(1),
    [anon_sym_shaape] = ACTIONS(1),
    [anon_sym_smcat] = ACTIONS(1),
    [anon_sym_structurizr] = ACTIONS(1),
    [anon_sym_svgbob] = ACTIONS(1),
    [anon_sym_symbolator] = ACTIONS(1),
    [anon_sym_syntrax] = ACTIONS(1),
    [anon_sym_tikz] = ACTIONS(1),
    [anon_sym_umlet] = ACTIONS(1),
    [anon_sym_vega] = ACTIONS(1),
    [anon_sym_wavedrom] = ACTIONS(1),
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
    [anon_sym_BSLASHstem] = ACTIONS(1),
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
    [anon_sym_www] = ACTIONS(1),
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
    [sym_inline] = STATE(185),
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
    [anon_sym_stem] = ACTIONS(3),
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
    [anon_sym_a2s] = ACTIONS(3),
    [anon_sym_barcode] = ACTIONS(3),
    [anon_sym_blockdiag] = ACTIONS(3),
    [anon_sym_bpmn] = ACTIONS(3),
    [anon_sym_bytefield] = ACTIONS(3),
    [anon_sym_d2] = ACTIONS(3),
    [anon_sym_dbml] = ACTIONS(3),
    [anon_sym_diagrams] = ACTIONS(3),
    [anon_sym_ditaa] = ACTIONS(3),
    [anon_sym_dpic] = ACTIONS(3),
    [anon_sym_erd] = ACTIONS(3),
    [anon_sym_gnuplot] = ACTIONS(3),
    [anon_sym_graphviz] = ACTIONS(3),
    [anon_sym_lilypond] = ACTIONS(3),
    [anon_sym_meme] = ACTIONS(3),
    [anon_sym_mermaid] = ACTIONS(3),
    [anon_sym_msc] = ACTIONS(3),
    [anon_sym_nomnoml] = ACTIONS(3),
    [anon_sym_pikchr] = ACTIONS(3),
    [anon_sym_plantuml] = ACTIONS(3),
    [anon_sym_shaape] = ACTIONS(3),
    [anon_sym_smcat] = ACTIONS(3),
    [anon_sym_structurizr] = ACTIONS(3),
    [anon_sym_svgbob] = ACTIONS(3),
    [anon_sym_symbolator] = ACTIONS(3),
    [anon_sym_syntrax] = ACTIONS(3),
    [anon_sym_tikz] = ACTIONS(3),
    [anon_sym_umlet] = ACTIONS(3),
    [anon_sym_vega] = ACTIONS(3),
    [anon_sym_wavedrom] = ACTIONS(3),
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
    [anon_sym_BSLASHstem] = ACTIONS(9),
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
    [anon_sym_www] = ACTIONS(17),
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
    [anon_sym_stem] = ACTIONS(3),
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
    [anon_sym_a2s] = ACTIONS(3),
    [anon_sym_barcode] = ACTIONS(3),
    [anon_sym_blockdiag] = ACTIONS(3),
    [anon_sym_bpmn] = ACTIONS(3),
    [anon_sym_bytefield] = ACTIONS(3),
    [anon_sym_d2] = ACTIONS(3),
    [anon_sym_dbml] = ACTIONS(3),
    [anon_sym_diagrams] = ACTIONS(3),
    [anon_sym_ditaa] = ACTIONS(3),
    [anon_sym_dpic] = ACTIONS(3),
    [anon_sym_erd] = ACTIONS(3),
    [anon_sym_gnuplot] = ACTIONS(3),
    [anon_sym_graphviz] = ACTIONS(3),
    [anon_sym_lilypond] = ACTIONS(3),
    [anon_sym_meme] = ACTIONS(3),
    [anon_sym_mermaid] = ACTIONS(3),
    [anon_sym_msc] = ACTIONS(3),
    [anon_sym_nomnoml] = ACTIONS(3),
    [anon_sym_pikchr] = ACTIONS(3),
    [anon_sym_plantuml] = ACTIONS(3),
    [anon_sym_shaape] = ACTIONS(3),
    [anon_sym_smcat] = ACTIONS(3),
    [anon_sym_structurizr] = ACTIONS(3),
    [anon_sym_svgbob] = ACTIONS(3),
    [anon_sym_symbolator] = ACTIONS(3),
    [anon_sym_syntrax] = ACTIONS(3),
    [anon_sym_tikz] = ACTIONS(3),
    [anon_sym_umlet] = ACTIONS(3),
    [anon_sym_vega] = ACTIONS(3),
    [anon_sym_wavedrom] = ACTIONS(3),
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
    [anon_sym_BSLASHstem] = ACTIONS(9),
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
    [anon_sym_www] = ACTIONS(17),
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
    [anon_sym_stem] = ACTIONS(47),
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
    [anon_sym_a2s] = ACTIONS(47),
    [anon_sym_barcode] = ACTIONS(47),
    [anon_sym_blockdiag] = ACTIONS(47),
    [anon_sym_bpmn] = ACTIONS(47),
    [anon_sym_bytefield] = ACTIONS(47),
    [anon_sym_d2] = ACTIONS(47),
    [anon_sym_dbml] = ACTIONS(47),
    [anon_sym_diagrams] = ACTIONS(47),
    [anon_sym_ditaa] = ACTIONS(47),
    [anon_sym_dpic] = ACTIONS(47),
    [anon_sym_erd] = ACTIONS(47),
    [anon_sym_gnuplot] = ACTIONS(47),
    [anon_sym_graphviz] = ACTIONS(47),
    [anon_sym_lilypond] = ACTIONS(47),
    [anon_sym_meme] = ACTIONS(47),
    [anon_sym_mermaid] = ACTIONS(47),
    [anon_sym_msc] = ACTIONS(47),
    [anon_sym_nomnoml] = ACTIONS(47),
    [anon_sym_pikchr] = ACTIONS(47),
    [anon_sym_plantuml] = ACTIONS(47),
    [anon_sym_shaape] = ACTIONS(47),
    [anon_sym_smcat] = ACTIONS(47),
    [anon_sym_structurizr] = ACTIONS(47),
    [anon_sym_svgbob] = ACTIONS(47),
    [anon_sym_symbolator] = ACTIONS(47),
    [anon_sym_syntrax] = ACTIONS(47),
    [anon_sym_tikz] = ACTIONS(47),
    [anon_sym_umlet] = ACTIONS(47),
    [anon_sym_vega] = ACTIONS(47),
    [anon_sym_wavedrom] = ACTIONS(47),
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
    [anon_sym_BSLASHstem] = ACTIONS(56),
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
    [anon_sym_www] = ACTIONS(68),
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
    [aux_sym_passthrough_repeat1] = STATE(133),
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
    [anon_sym_stem] = ACTIONS(106),
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
    [anon_sym_a2s] = ACTIONS(106),
    [anon_sym_barcode] = ACTIONS(106),
    [anon_sym_blockdiag] = ACTIONS(106),
    [anon_sym_bpmn] = ACTIONS(106),
    [anon_sym_bytefield] = ACTIONS(106),
    [anon_sym_d2] = ACTIONS(106),
    [anon_sym_dbml] = ACTIONS(106),
    [anon_sym_diagrams] = ACTIONS(106),
    [anon_sym_ditaa] = ACTIONS(106),
    [anon_sym_dpic] = ACTIONS(106),
    [anon_sym_erd] = ACTIONS(106),
    [anon_sym_gnuplot] = ACTIONS(106),
    [anon_sym_graphviz] = ACTIONS(106),
    [anon_sym_lilypond] = ACTIONS(106),
    [anon_sym_meme] = ACTIONS(106),
    [anon_sym_mermaid] = ACTIONS(106),
    [anon_sym_msc] = ACTIONS(106),
    [anon_sym_nomnoml] = ACTIONS(106),
    [anon_sym_pikchr] = ACTIONS(106),
    [anon_sym_plantuml] = ACTIONS(106),
    [anon_sym_shaape] = ACTIONS(106),
    [anon_sym_smcat] = ACTIONS(106),
    [anon_sym_structurizr] = ACTIONS(106),
    [anon_sym_svgbob] = ACTIONS(106),
    [anon_sym_symbolator] = ACTIONS(106),
    [anon_sym_syntrax] = ACTIONS(106),
    [anon_sym_tikz] = ACTIONS(106),
    [anon_sym_umlet] = ACTIONS(106),
    [anon_sym_vega] = ACTIONS(106),
    [anon_sym_wavedrom] = ACTIONS(106),
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
    [anon_sym_BSLASHstem] = ACTIONS(106),
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
    [anon_sym_www] = ACTIONS(106),
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
    [anon_sym_stem] = ACTIONS(106),
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
    [anon_sym_a2s] = ACTIONS(106),
    [anon_sym_barcode] = ACTIONS(106),
    [anon_sym_blockdiag] = ACTIONS(106),
    [anon_sym_bpmn] = ACTIONS(106),
    [anon_sym_bytefield] = ACTIONS(106),
    [anon_sym_d2] = ACTIONS(106),
    [anon_sym_dbml] = ACTIONS(106),
    [anon_sym_diagrams] = ACTIONS(106),
    [anon_sym_ditaa] = ACTIONS(106),
    [anon_sym_dpic] = ACTIONS(106),
    [anon_sym_erd] = ACTIONS(106),
    [anon_sym_gnuplot] = ACTIONS(106),
    [anon_sym_graphviz] = ACTIONS(106),
    [anon_sym_lilypond] = ACTIONS(106),
    [anon_sym_meme] = ACTIONS(106),
    [anon_sym_mermaid] = ACTIONS(106),
    [anon_sym_msc] = ACTIONS(106),
    [anon_sym_nomnoml] = ACTIONS(106),
    [anon_sym_pikchr] = ACTIONS(106),
    [anon_sym_plantuml] = ACTIONS(106),
    [anon_sym_shaape] = ACTIONS(106),
    [anon_sym_smcat] = ACTIONS(106),
    [anon_sym_structurizr] = ACTIONS(106),
    [anon_sym_svgbob] = ACTIONS(106),
    [anon_sym_symbolator] = ACTIONS(106),
    [anon_sym_syntrax] = ACTIONS(106),
    [anon_sym_tikz] = ACTIONS(106),
    [anon_sym_umlet] = ACTIONS(106),
    [anon_sym_vega] = ACTIONS(106),
    [anon_sym_wavedrom] = ACTIONS(106),
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
    [anon_sym_BSLASHstem] = ACTIONS(106),
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
    [anon_sym_www] = ACTIONS(106),
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
    [anon_sym_stem] = ACTIONS(114),
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
    [anon_sym_a2s] = ACTIONS(114),
    [anon_sym_barcode] = ACTIONS(114),
    [anon_sym_blockdiag] = ACTIONS(114),
    [anon_sym_bpmn] = ACTIONS(114),
    [anon_sym_bytefield] = ACTIONS(114),
    [anon_sym_d2] = ACTIONS(114),
    [anon_sym_dbml] = ACTIONS(114),
    [anon_sym_diagrams] = ACTIONS(114),
    [anon_sym_ditaa] = ACTIONS(114),
    [anon_sym_dpic] = ACTIONS(114),
    [anon_sym_erd] = ACTIONS(114),
    [anon_sym_gnuplot] = ACTIONS(114),
    [anon_sym_graphviz] = ACTIONS(114),
    [anon_sym_lilypond] = ACTIONS(114),
    [anon_sym_meme] = ACTIONS(114),
    [anon_sym_mermaid] = ACTIONS(114),
    [anon_sym_msc] = ACTIONS(114),
    [anon_sym_nomnoml] = ACTIONS(114),
    [anon_sym_pikchr] = ACTIONS(114),
    [anon_sym_plantuml] = ACTIONS(114),
    [anon_sym_shaape] = ACTIONS(114),
    [anon_sym_smcat] = ACTIONS(114),
    [anon_sym_structurizr] = ACTIONS(114),
    [anon_sym_svgbob] = ACTIONS(114),
    [anon_sym_symbolator] = ACTIONS(114),
    [anon_sym_syntrax] = ACTIONS(114),
    [anon_sym_tikz] = ACTIONS(114),
    [anon_sym_umlet] = ACTIONS(114),
    [anon_sym_vega] = ACTIONS(114),
    [anon_sym_wavedrom] = ACTIONS(114),
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
    [anon_sym_BSLASHstem] = ACTIONS(114),
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
    [anon_sym_www] = ACTIONS(114),
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
    [sym_link_url] = STATE(183),
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
    [anon_sym_stem] = ACTIONS(106),
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
    [anon_sym_a2s] = ACTIONS(106),
    [anon_sym_barcode] = ACTIONS(106),
    [anon_sym_blockdiag] = ACTIONS(106),
    [anon_sym_bpmn] = ACTIONS(106),
    [anon_sym_bytefield] = ACTIONS(106),
    [anon_sym_d2] = ACTIONS(106),
    [anon_sym_dbml] = ACTIONS(106),
    [anon_sym_diagrams] = ACTIONS(106),
    [anon_sym_ditaa] = ACTIONS(106),
    [anon_sym_dpic] = ACTIONS(106),
    [anon_sym_erd] = ACTIONS(106),
    [anon_sym_gnuplot] = ACTIONS(106),
    [anon_sym_graphviz] = ACTIONS(106),
    [anon_sym_lilypond] = ACTIONS(106),
    [anon_sym_meme] = ACTIONS(106),
    [anon_sym_mermaid] = ACTIONS(106),
    [anon_sym_msc] = ACTIONS(106),
    [anon_sym_nomnoml] = ACTIONS(106),
    [anon_sym_pikchr] = ACTIONS(106),
    [anon_sym_plantuml] = ACTIONS(106),
    [anon_sym_shaape] = ACTIONS(106),
    [anon_sym_smcat] = ACTIONS(106),
    [anon_sym_structurizr] = ACTIONS(106),
    [anon_sym_svgbob] = ACTIONS(106),
    [anon_sym_symbolator] = ACTIONS(106),
    [anon_sym_syntrax] = ACTIONS(106),
    [anon_sym_tikz] = ACTIONS(106),
    [anon_sym_umlet] = ACTIONS(106),
    [anon_sym_vega] = ACTIONS(106),
    [anon_sym_wavedrom] = ACTIONS(106),
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
    [anon_sym_BSLASHstem] = ACTIONS(106),
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
    [anon_sym_www] = ACTIONS(118),
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
    [anon_sym_stem] = ACTIONS(122),
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
    [anon_sym_a2s] = ACTIONS(122),
    [anon_sym_barcode] = ACTIONS(122),
    [anon_sym_blockdiag] = ACTIONS(122),
    [anon_sym_bpmn] = ACTIONS(122),
    [anon_sym_bytefield] = ACTIONS(122),
    [anon_sym_d2] = ACTIONS(122),
    [anon_sym_dbml] = ACTIONS(122),
    [anon_sym_diagrams] = ACTIONS(122),
    [anon_sym_ditaa] = ACTIONS(122),
    [anon_sym_dpic] = ACTIONS(122),
    [anon_sym_erd] = ACTIONS(122),
    [anon_sym_gnuplot] = ACTIONS(122),
    [anon_sym_graphviz] = ACTIONS(122),
    [anon_sym_lilypond] = ACTIONS(122),
    [anon_sym_meme] = ACTIONS(122),
    [anon_sym_mermaid] = ACTIONS(122),
    [anon_sym_msc] = ACTIONS(122),
    [anon_sym_nomnoml] = ACTIONS(122),
    [anon_sym_pikchr] = ACTIONS(122),
    [anon_sym_plantuml] = ACTIONS(122),
    [anon_sym_shaape] = ACTIONS(122),
    [anon_sym_smcat] = ACTIONS(122),
    [anon_sym_structurizr] = ACTIONS(122),
    [anon_sym_svgbob] = ACTIONS(122),
    [anon_sym_symbolator] = ACTIONS(122),
    [anon_sym_syntrax] = ACTIONS(122),
    [anon_sym_tikz] = ACTIONS(122),
    [anon_sym_umlet] = ACTIONS(122),
    [anon_sym_vega] = ACTIONS(122),
    [anon_sym_wavedrom] = ACTIONS(122),
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
    [anon_sym_BSLASHstem] = ACTIONS(122),
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
    [anon_sym_www] = ACTIONS(122),
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
    [anon_sym_stem] = ACTIONS(126),
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
    [anon_sym_a2s] = ACTIONS(126),
    [anon_sym_barcode] = ACTIONS(126),
    [anon_sym_blockdiag] = ACTIONS(126),
    [anon_sym_bpmn] = ACTIONS(126),
    [anon_sym_bytefield] = ACTIONS(126),
    [anon_sym_d2] = ACTIONS(126),
    [anon_sym_dbml] = ACTIONS(126),
    [anon_sym_diagrams] = ACTIONS(126),
    [anon_sym_ditaa] = ACTIONS(126),
    [anon_sym_dpic] = ACTIONS(126),
    [anon_sym_erd] = ACTIONS(126),
    [anon_sym_gnuplot] = ACTIONS(126),
    [anon_sym_graphviz] = ACTIONS(126),
    [anon_sym_lilypond] = ACTIONS(126),
    [anon_sym_meme] = ACTIONS(126),
    [anon_sym_mermaid] = ACTIONS(126),
    [anon_sym_msc] = ACTIONS(126),
    [anon_sym_nomnoml] = ACTIONS(126),
    [anon_sym_pikchr] = ACTIONS(126),
    [anon_sym_plantuml] = ACTIONS(126),
    [anon_sym_shaape] = ACTIONS(126),
    [anon_sym_smcat] = ACTIONS(126),
    [anon_sym_structurizr] = ACTIONS(126),
    [anon_sym_svgbob] = ACTIONS(126),
    [anon_sym_symbolator] = ACTIONS(126),
    [anon_sym_syntrax] = ACTIONS(126),
    [anon_sym_tikz] = ACTIONS(126),
    [anon_sym_umlet] = ACTIONS(126),
    [anon_sym_vega] = ACTIONS(126),
    [anon_sym_wavedrom] = ACTIONS(126),
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
    [anon_sym_BSLASHstem] = ACTIONS(126),
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
    [anon_sym_www] = ACTIONS(126),
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
    [anon_sym_stem] = ACTIONS(133),
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
    [anon_sym_a2s] = ACTIONS(133),
    [anon_sym_barcode] = ACTIONS(133),
    [anon_sym_blockdiag] = ACTIONS(133),
    [anon_sym_bpmn] = ACTIONS(133),
    [anon_sym_bytefield] = ACTIONS(133),
    [anon_sym_d2] = ACTIONS(133),
    [anon_sym_dbml] = ACTIONS(133),
    [anon_sym_diagrams] = ACTIONS(133),
    [anon_sym_ditaa] = ACTIONS(133),
    [anon_sym_dpic] = ACTIONS(133),
    [anon_sym_erd] = ACTIONS(133),
    [anon_sym_gnuplot] = ACTIONS(133),
    [anon_sym_graphviz] = ACTIONS(133),
    [anon_sym_lilypond] = ACTIONS(133),
    [anon_sym_meme] = ACTIONS(133),
    [anon_sym_mermaid] = ACTIONS(133),
    [anon_sym_msc] = ACTIONS(133),
    [anon_sym_nomnoml] = ACTIONS(133),
    [anon_sym_pikchr] = ACTIONS(133),
    [anon_sym_plantuml] = ACTIONS(133),
    [anon_sym_shaape] = ACTIONS(133),
    [anon_sym_smcat] = ACTIONS(133),
    [anon_sym_structurizr] = ACTIONS(133),
    [anon_sym_svgbob] = ACTIONS(133),
    [anon_sym_symbolator] = ACTIONS(133),
    [anon_sym_syntrax] = ACTIONS(133),
    [anon_sym_tikz] = ACTIONS(133),
    [anon_sym_umlet] = ACTIONS(133),
    [anon_sym_vega] = ACTIONS(133),
    [anon_sym_wavedrom] = ACTIONS(133),
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
    [anon_sym_BSLASHstem] = ACTIONS(133),
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
    [anon_sym_www] = ACTIONS(133),
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
    [anon_sym_stem] = ACTIONS(137),
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
    [anon_sym_a2s] = ACTIONS(137),
    [anon_sym_barcode] = ACTIONS(137),
    [anon_sym_blockdiag] = ACTIONS(137),
    [anon_sym_bpmn] = ACTIONS(137),
    [anon_sym_bytefield] = ACTIONS(137),
    [anon_sym_d2] = ACTIONS(137),
    [anon_sym_dbml] = ACTIONS(137),
    [anon_sym_diagrams] = ACTIONS(137),
    [anon_sym_ditaa] = ACTIONS(137),
    [anon_sym_dpic] = ACTIONS(137),
    [anon_sym_erd] = ACTIONS(137),
    [anon_sym_gnuplot] = ACTIONS(137),
    [anon_sym_graphviz] = ACTIONS(137),
    [anon_sym_lilypond] = ACTIONS(137),
    [anon_sym_meme] = ACTIONS(137),
    [anon_sym_mermaid] = ACTIONS(137),
    [anon_sym_msc] = ACTIONS(137),
    [anon_sym_nomnoml] = ACTIONS(137),
    [anon_sym_pikchr] = ACTIONS(137),
    [anon_sym_plantuml] = ACTIONS(137),
    [anon_sym_shaape] = ACTIONS(137),
    [anon_sym_smcat] = ACTIONS(137),
    [anon_sym_structurizr] = ACTIONS(137),
    [anon_sym_svgbob] = ACTIONS(137),
    [anon_sym_symbolator] = ACTIONS(137),
    [anon_sym_syntrax] = ACTIONS(137),
    [anon_sym_tikz] = ACTIONS(137),
    [anon_sym_umlet] = ACTIONS(137),
    [anon_sym_vega] = ACTIONS(137),
    [anon_sym_wavedrom] = ACTIONS(137),
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
    [anon_sym_BSLASHstem] = ACTIONS(137),
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
    [anon_sym_www] = ACTIONS(137),
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
    [anon_sym_stem] = ACTIONS(141),
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
    [anon_sym_a2s] = ACTIONS(141),
    [anon_sym_barcode] = ACTIONS(141),
    [anon_sym_blockdiag] = ACTIONS(141),
    [anon_sym_bpmn] = ACTIONS(141),
    [anon_sym_bytefield] = ACTIONS(141),
    [anon_sym_d2] = ACTIONS(141),
    [anon_sym_dbml] = ACTIONS(141),
    [anon_sym_diagrams] = ACTIONS(141),
    [anon_sym_ditaa] = ACTIONS(141),
    [anon_sym_dpic] = ACTIONS(141),
    [anon_sym_erd] = ACTIONS(141),
    [anon_sym_gnuplot] = ACTIONS(141),
    [anon_sym_graphviz] = ACTIONS(141),
    [anon_sym_lilypond] = ACTIONS(141),
    [anon_sym_meme] = ACTIONS(141),
    [anon_sym_mermaid] = ACTIONS(141),
    [anon_sym_msc] = ACTIONS(141),
    [anon_sym_nomnoml] = ACTIONS(141),
    [anon_sym_pikchr] = ACTIONS(141),
    [anon_sym_plantuml] = ACTIONS(141),
    [anon_sym_shaape] = ACTIONS(141),
    [anon_sym_smcat] = ACTIONS(141),
    [anon_sym_structurizr] = ACTIONS(141),
    [anon_sym_svgbob] = ACTIONS(141),
    [anon_sym_symbolator] = ACTIONS(141),
    [anon_sym_syntrax] = ACTIONS(141),
    [anon_sym_tikz] = ACTIONS(141),
    [anon_sym_umlet] = ACTIONS(141),
    [anon_sym_vega] = ACTIONS(141),
    [anon_sym_wavedrom] = ACTIONS(141),
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
    [anon_sym_BSLASHstem] = ACTIONS(141),
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
    [anon_sym_www] = ACTIONS(141),
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
    [anon_sym_stem] = ACTIONS(145),
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
    [anon_sym_a2s] = ACTIONS(145),
    [anon_sym_barcode] = ACTIONS(145),
    [anon_sym_blockdiag] = ACTIONS(145),
    [anon_sym_bpmn] = ACTIONS(145),
    [anon_sym_bytefield] = ACTIONS(145),
    [anon_sym_d2] = ACTIONS(145),
    [anon_sym_dbml] = ACTIONS(145),
    [anon_sym_diagrams] = ACTIONS(145),
    [anon_sym_ditaa] = ACTIONS(145),
    [anon_sym_dpic] = ACTIONS(145),
    [anon_sym_erd] = ACTIONS(145),
    [anon_sym_gnuplot] = ACTIONS(145),
    [anon_sym_graphviz] = ACTIONS(145),
    [anon_sym_lilypond] = ACTIONS(145),
    [anon_sym_meme] = ACTIONS(145),
    [anon_sym_mermaid] = ACTIONS(145),
    [anon_sym_msc] = ACTIONS(145),
    [anon_sym_nomnoml] = ACTIONS(145),
    [anon_sym_pikchr] = ACTIONS(145),
    [anon_sym_plantuml] = ACTIONS(145),
    [anon_sym_shaape] = ACTIONS(145),
    [anon_sym_smcat] = ACTIONS(145),
    [anon_sym_structurizr] = ACTIONS(145),
    [anon_sym_svgbob] = ACTIONS(145),
    [anon_sym_symbolator] = ACTIONS(145),
    [anon_sym_syntrax] = ACTIONS(145),
    [anon_sym_tikz] = ACTIONS(145),
    [anon_sym_umlet] = ACTIONS(145),
    [anon_sym_vega] = ACTIONS(145),
    [anon_sym_wavedrom] = ACTIONS(145),
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
    [anon_sym_BSLASHstem] = ACTIONS(145),
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
    [anon_sym_www] = ACTIONS(145),
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
    [anon_sym_stem] = ACTIONS(149),
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
    [anon_sym_a2s] = ACTIONS(149),
    [anon_sym_barcode] = ACTIONS(149),
    [anon_sym_blockdiag] = ACTIONS(149),
    [anon_sym_bpmn] = ACTIONS(149),
    [anon_sym_bytefield] = ACTIONS(149),
    [anon_sym_d2] = ACTIONS(149),
    [anon_sym_dbml] = ACTIONS(149),
    [anon_sym_diagrams] = ACTIONS(149),
    [anon_sym_ditaa] = ACTIONS(149),
    [anon_sym_dpic] = ACTIONS(149),
    [anon_sym_erd] = ACTIONS(149),
    [anon_sym_gnuplot] = ACTIONS(149),
    [anon_sym_graphviz] = ACTIONS(149),
    [anon_sym_lilypond] = ACTIONS(149),
    [anon_sym_meme] = ACTIONS(149),
    [anon_sym_mermaid] = ACTIONS(149),
    [anon_sym_msc] = ACTIONS(149),
    [anon_sym_nomnoml] = ACTIONS(149),
    [anon_sym_pikchr] = ACTIONS(149),
    [anon_sym_plantuml] = ACTIONS(149),
    [anon_sym_shaape] = ACTIONS(149),
    [anon_sym_smcat] = ACTIONS(149),
    [anon_sym_structurizr] = ACTIONS(149),
    [anon_sym_svgbob] = ACTIONS(149),
    [anon_sym_symbolator] = ACTIONS(149),
    [anon_sym_syntrax] = ACTIONS(149),
    [anon_sym_tikz] = ACTIONS(149),
    [anon_sym_umlet] = ACTIONS(149),
    [anon_sym_vega] = ACTIONS(149),
    [anon_sym_wavedrom] = ACTIONS(149),
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
    [anon_sym_BSLASHstem] = ACTIONS(149),
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
    [anon_sym_www] = ACTIONS(149),
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
    [anon_sym_stem] = ACTIONS(126),
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
    [anon_sym_a2s] = ACTIONS(126),
    [anon_sym_barcode] = ACTIONS(126),
    [anon_sym_blockdiag] = ACTIONS(126),
    [anon_sym_bpmn] = ACTIONS(126),
    [anon_sym_bytefield] = ACTIONS(126),
    [anon_sym_d2] = ACTIONS(126),
    [anon_sym_dbml] = ACTIONS(126),
    [anon_sym_diagrams] = ACTIONS(126),
    [anon_sym_ditaa] = ACTIONS(126),
    [anon_sym_dpic] = ACTIONS(126),
    [anon_sym_erd] = ACTIONS(126),
    [anon_sym_gnuplot] = ACTIONS(126),
    [anon_sym_graphviz] = ACTIONS(126),
    [anon_sym_lilypond] = ACTIONS(126),
    [anon_sym_meme] = ACTIONS(126),
    [anon_sym_mermaid] = ACTIONS(126),
    [anon_sym_msc] = ACTIONS(126),
    [anon_sym_nomnoml] = ACTIONS(126),
    [anon_sym_pikchr] = ACTIONS(126),
    [anon_sym_plantuml] = ACTIONS(126),
    [anon_sym_shaape] = ACTIONS(126),
    [anon_sym_smcat] = ACTIONS(126),
    [anon_sym_structurizr] = ACTIONS(126),
    [anon_sym_svgbob] = ACTIONS(126),
    [anon_sym_symbolator] = ACTIONS(126),
    [anon_sym_syntrax] = ACTIONS(126),
    [anon_sym_tikz] = ACTIONS(126),
    [anon_sym_umlet] = ACTIONS(126),
    [anon_sym_vega] = ACTIONS(126),
    [anon_sym_wavedrom] = ACTIONS(126),
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
    [anon_sym_BSLASHstem] = ACTIONS(126),
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
    [anon_sym_www] = ACTIONS(126),
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
    [anon_sym_stem] = ACTIONS(153),
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
    [anon_sym_a2s] = ACTIONS(153),
    [anon_sym_barcode] = ACTIONS(153),
    [anon_sym_blockdiag] = ACTIONS(153),
    [anon_sym_bpmn] = ACTIONS(153),
    [anon_sym_bytefield] = ACTIONS(153),
    [anon_sym_d2] = ACTIONS(153),
    [anon_sym_dbml] = ACTIONS(153),
    [anon_sym_diagrams] = ACTIONS(153),
    [anon_sym_ditaa] = ACTIONS(153),
    [anon_sym_dpic] = ACTIONS(153),
    [anon_sym_erd] = ACTIONS(153),
    [anon_sym_gnuplot] = ACTIONS(153),
    [anon_sym_graphviz] = ACTIONS(153),
    [anon_sym_lilypond] = ACTIONS(153),
    [anon_sym_meme] = ACTIONS(153),
    [anon_sym_mermaid] = ACTIONS(153),
    [anon_sym_msc] = ACTIONS(153),
    [anon_sym_nomnoml] = ACTIONS(153),
    [anon_sym_pikchr] = ACTIONS(153),
    [anon_sym_plantuml] = ACTIONS(153),
    [anon_sym_shaape] = ACTIONS(153),
    [anon_sym_smcat] = ACTIONS(153),
    [anon_sym_structurizr] = ACTIONS(153),
    [anon_sym_svgbob] = ACTIONS(153),
    [anon_sym_symbolator] = ACTIONS(153),
    [anon_sym_syntrax] = ACTIONS(153),
    [anon_sym_tikz] = ACTIONS(153),
    [anon_sym_umlet] = ACTIONS(153),
    [anon_sym_vega] = ACTIONS(153),
    [anon_sym_wavedrom] = ACTIONS(153),
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
    [anon_sym_BSLASHstem] = ACTIONS(153),
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
    [anon_sym_www] = ACTIONS(153),
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
    [anon_sym_stem] = ACTIONS(157),
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
    [anon_sym_a2s] = ACTIONS(157),
    [anon_sym_barcode] = ACTIONS(157),
    [anon_sym_blockdiag] = ACTIONS(157),
    [anon_sym_bpmn] = ACTIONS(157),
    [anon_sym_bytefield] = ACTIONS(157),
    [anon_sym_d2] = ACTIONS(157),
    [anon_sym_dbml] = ACTIONS(157),
    [anon_sym_diagrams] = ACTIONS(157),
    [anon_sym_ditaa] = ACTIONS(157),
    [anon_sym_dpic] = ACTIONS(157),
    [anon_sym_erd] = ACTIONS(157),
    [anon_sym_gnuplot] = ACTIONS(157),
    [anon_sym_graphviz] = ACTIONS(157),
    [anon_sym_lilypond] = ACTIONS(157),
    [anon_sym_meme] = ACTIONS(157),
    [anon_sym_mermaid] = ACTIONS(157),
    [anon_sym_msc] = ACTIONS(157),
    [anon_sym_nomnoml] = ACTIONS(157),
    [anon_sym_pikchr] = ACTIONS(157),
    [anon_sym_plantuml] = ACTIONS(157),
    [anon_sym_shaape] = ACTIONS(157),
    [anon_sym_smcat] = ACTIONS(157),
    [anon_sym_structurizr] = ACTIONS(157),
    [anon_sym_svgbob] = ACTIONS(157),
    [anon_sym_symbolator] = ACTIONS(157),
    [anon_sym_syntrax] = ACTIONS(157),
    [anon_sym_tikz] = ACTIONS(157),
    [anon_sym_umlet] = ACTIONS(157),
    [anon_sym_vega] = ACTIONS(157),
    [anon_sym_wavedrom] = ACTIONS(157),
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
    [anon_sym_BSLASHstem] = ACTIONS(157),
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
    [anon_sym_www] = ACTIONS(157),
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
    [anon_sym_stem] = ACTIONS(161),
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
    [anon_sym_a2s] = ACTIONS(161),
    [anon_sym_barcode] = ACTIONS(161),
    [anon_sym_blockdiag] = ACTIONS(161),
    [anon_sym_bpmn] = ACTIONS(161),
    [anon_sym_bytefield] = ACTIONS(161),
    [anon_sym_d2] = ACTIONS(161),
    [anon_sym_dbml] = ACTIONS(161),
    [anon_sym_diagrams] = ACTIONS(161),
    [anon_sym_ditaa] = ACTIONS(161),
    [anon_sym_dpic] = ACTIONS(161),
    [anon_sym_erd] = ACTIONS(161),
    [anon_sym_gnuplot] = ACTIONS(161),
    [anon_sym_graphviz] = ACTIONS(161),
    [anon_sym_lilypond] = ACTIONS(161),
    [anon_sym_meme] = ACTIONS(161),
    [anon_sym_mermaid] = ACTIONS(161),
    [anon_sym_msc] = ACTIONS(161),
    [anon_sym_nomnoml] = ACTIONS(161),
    [anon_sym_pikchr] = ACTIONS(161),
    [anon_sym_plantuml] = ACTIONS(161),
    [anon_sym_shaape] = ACTIONS(161),
    [anon_sym_smcat] = ACTIONS(161),
    [anon_sym_structurizr] = ACTIONS(161),
    [anon_sym_svgbob] = ACTIONS(161),
    [anon_sym_symbolator] = ACTIONS(161),
    [anon_sym_syntrax] = ACTIONS(161),
    [anon_sym_tikz] = ACTIONS(161),
    [anon_sym_umlet] = ACTIONS(161),
    [anon_sym_vega] = ACTIONS(161),
    [anon_sym_wavedrom] = ACTIONS(161),
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
    [anon_sym_BSLASHstem] = ACTIONS(161),
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
    [anon_sym_www] = ACTIONS(161),
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
    [anon_sym_stem] = ACTIONS(165),
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
    [anon_sym_a2s] = ACTIONS(165),
    [anon_sym_barcode] = ACTIONS(165),
    [anon_sym_blockdiag] = ACTIONS(165),
    [anon_sym_bpmn] = ACTIONS(165),
    [anon_sym_bytefield] = ACTIONS(165),
    [anon_sym_d2] = ACTIONS(165),
    [anon_sym_dbml] = ACTIONS(165),
    [anon_sym_diagrams] = ACTIONS(165),
    [anon_sym_ditaa] = ACTIONS(165),
    [anon_sym_dpic] = ACTIONS(165),
    [anon_sym_erd] = ACTIONS(165),
    [anon_sym_gnuplot] = ACTIONS(165),
    [anon_sym_graphviz] = ACTIONS(165),
    [anon_sym_lilypond] = ACTIONS(165),
    [anon_sym_meme] = ACTIONS(165),
    [anon_sym_mermaid] = ACTIONS(165),
    [anon_sym_msc] = ACTIONS(165),
    [anon_sym_nomnoml] = ACTIONS(165),
    [anon_sym_pikchr] = ACTIONS(165),
    [anon_sym_plantuml] = ACTIONS(165),
    [anon_sym_shaape] = ACTIONS(165),
    [anon_sym_smcat] = ACTIONS(165),
    [anon_sym_structurizr] = ACTIONS(165),
    [anon_sym_svgbob] = ACTIONS(165),
    [anon_sym_symbolator] = ACTIONS(165),
    [anon_sym_syntrax] = ACTIONS(165),
    [anon_sym_tikz] = ACTIONS(165),
    [anon_sym_umlet] = ACTIONS(165),
    [anon_sym_vega] = ACTIONS(165),
    [anon_sym_wavedrom] = ACTIONS(165),
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
    [anon_sym_BSLASHstem] = ACTIONS(165),
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
    [anon_sym_www] = ACTIONS(165),
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
    [anon_sym_stem] = ACTIONS(169),
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
    [anon_sym_a2s] = ACTIONS(169),
    [anon_sym_barcode] = ACTIONS(169),
    [anon_sym_blockdiag] = ACTIONS(169),
    [anon_sym_bpmn] = ACTIONS(169),
    [anon_sym_bytefield] = ACTIONS(169),
    [anon_sym_d2] = ACTIONS(169),
    [anon_sym_dbml] = ACTIONS(169),
    [anon_sym_diagrams] = ACTIONS(169),
    [anon_sym_ditaa] = ACTIONS(169),
    [anon_sym_dpic] = ACTIONS(169),
    [anon_sym_erd] = ACTIONS(169),
    [anon_sym_gnuplot] = ACTIONS(169),
    [anon_sym_graphviz] = ACTIONS(169),
    [anon_sym_lilypond] = ACTIONS(169),
    [anon_sym_meme] = ACTIONS(169),
    [anon_sym_mermaid] = ACTIONS(169),
    [anon_sym_msc] = ACTIONS(169),
    [anon_sym_nomnoml] = ACTIONS(169),
    [anon_sym_pikchr] = ACTIONS(169),
    [anon_sym_plantuml] = ACTIONS(169),
    [anon_sym_shaape] = ACTIONS(169),
    [anon_sym_smcat] = ACTIONS(169),
    [anon_sym_structurizr] = ACTIONS(169),
    [anon_sym_svgbob] = ACTIONS(169),
    [anon_sym_symbolator] = ACTIONS(169),
    [anon_sym_syntrax] = ACTIONS(169),
    [anon_sym_tikz] = ACTIONS(169),
    [anon_sym_umlet] = ACTIONS(169),
    [anon_sym_vega] = ACTIONS(169),
    [anon_sym_wavedrom] = ACTIONS(169),
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
    [anon_sym_BSLASHstem] = ACTIONS(169),
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
    [anon_sym_www] = ACTIONS(169),
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
    [anon_sym_stem] = ACTIONS(173),
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
    [anon_sym_a2s] = ACTIONS(173),
    [anon_sym_barcode] = ACTIONS(173),
    [anon_sym_blockdiag] = ACTIONS(173),
    [anon_sym_bpmn] = ACTIONS(173),
    [anon_sym_bytefield] = ACTIONS(173),
    [anon_sym_d2] = ACTIONS(173),
    [anon_sym_dbml] = ACTIONS(173),
    [anon_sym_diagrams] = ACTIONS(173),
    [anon_sym_ditaa] = ACTIONS(173),
    [anon_sym_dpic] = ACTIONS(173),
    [anon_sym_erd] = ACTIONS(173),
    [anon_sym_gnuplot] = ACTIONS(173),
    [anon_sym_graphviz] = ACTIONS(173),
    [anon_sym_lilypond] = ACTIONS(173),
    [anon_sym_meme] = ACTIONS(173),
    [anon_sym_mermaid] = ACTIONS(173),
    [anon_sym_msc] = ACTIONS(173),
    [anon_sym_nomnoml] = ACTIONS(173),
    [anon_sym_pikchr] = ACTIONS(173),
    [anon_sym_plantuml] = ACTIONS(173),
    [anon_sym_shaape] = ACTIONS(173),
    [anon_sym_smcat] = ACTIONS(173),
    [anon_sym_structurizr] = ACTIONS(173),
    [anon_sym_svgbob] = ACTIONS(173),
    [anon_sym_symbolator] = ACTIONS(173),
    [anon_sym_syntrax] = ACTIONS(173),
    [anon_sym_tikz] = ACTIONS(173),
    [anon_sym_umlet] = ACTIONS(173),
    [anon_sym_vega] = ACTIONS(173),
    [anon_sym_wavedrom] = ACTIONS(173),
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
    [anon_sym_BSLASHstem] = ACTIONS(173),
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
    [anon_sym_www] = ACTIONS(173),
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
    [anon_sym_stem] = ACTIONS(177),
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
    [anon_sym_a2s] = ACTIONS(177),
    [anon_sym_barcode] = ACTIONS(177),
    [anon_sym_blockdiag] = ACTIONS(177),
    [anon_sym_bpmn] = ACTIONS(177),
    [anon_sym_bytefield] = ACTIONS(177),
    [anon_sym_d2] = ACTIONS(177),
    [anon_sym_dbml] = ACTIONS(177),
    [anon_sym_diagrams] = ACTIONS(177),
    [anon_sym_ditaa] = ACTIONS(177),
    [anon_sym_dpic] = ACTIONS(177),
    [anon_sym_erd] = ACTIONS(177),
    [anon_sym_gnuplot] = ACTIONS(177),
    [anon_sym_graphviz] = ACTIONS(177),
    [anon_sym_lilypond] = ACTIONS(177),
    [anon_sym_meme] = ACTIONS(177),
    [anon_sym_mermaid] = ACTIONS(177),
    [anon_sym_msc] = ACTIONS(177),
    [anon_sym_nomnoml] = ACTIONS(177),
    [anon_sym_pikchr] = ACTIONS(177),
    [anon_sym_plantuml] = ACTIONS(177),
    [anon_sym_shaape] = ACTIONS(177),
    [anon_sym_smcat] = ACTIONS(177),
    [anon_sym_structurizr] = ACTIONS(177),
    [anon_sym_svgbob] = ACTIONS(177),
    [anon_sym_symbolator] = ACTIONS(177),
    [anon_sym_syntrax] = ACTIONS(177),
    [anon_sym_tikz] = ACTIONS(177),
    [anon_sym_umlet] = ACTIONS(177),
    [anon_sym_vega] = ACTIONS(177),
    [anon_sym_wavedrom] = ACTIONS(177),
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
    [anon_sym_BSLASHstem] = ACTIONS(177),
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
    [anon_sym_www] = ACTIONS(177),
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
    [anon_sym_stem] = ACTIONS(183),
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
    [anon_sym_a2s] = ACTIONS(183),
    [anon_sym_barcode] = ACTIONS(183),
    [anon_sym_blockdiag] = ACTIONS(183),
    [anon_sym_bpmn] = ACTIONS(183),
    [anon_sym_bytefield] = ACTIONS(183),
    [anon_sym_d2] = ACTIONS(183),
    [anon_sym_dbml] = ACTIONS(183),
    [anon_sym_diagrams] = ACTIONS(183),
    [anon_sym_ditaa] = ACTIONS(183),
    [anon_sym_dpic] = ACTIONS(183),
    [anon_sym_erd] = ACTIONS(183),
    [anon_sym_gnuplot] = ACTIONS(183),
    [anon_sym_graphviz] = ACTIONS(183),
    [anon_sym_lilypond] = ACTIONS(183),
    [anon_sym_meme] = ACTIONS(183),
    [anon_sym_mermaid] = ACTIONS(183),
    [anon_sym_msc] = ACTIONS(183),
    [anon_sym_nomnoml] = ACTIONS(183),
    [anon_sym_pikchr] = ACTIONS(183),
    [anon_sym_plantuml] = ACTIONS(183),
    [anon_sym_shaape] = ACTIONS(183),
    [anon_sym_smcat] = ACTIONS(183),
    [anon_sym_structurizr] = ACTIONS(183),
    [anon_sym_svgbob] = ACTIONS(183),
    [anon_sym_symbolator] = ACTIONS(183),
    [anon_sym_syntrax] = ACTIONS(183),
    [anon_sym_tikz] = ACTIONS(183),
    [anon_sym_umlet] = ACTIONS(183),
    [anon_sym_vega] = ACTIONS(183),
    [anon_sym_wavedrom] = ACTIONS(183),
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
    [anon_sym_BSLASHstem] = ACTIONS(183),
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
    [anon_sym_www] = ACTIONS(183),
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
    [anon_sym_stem] = ACTIONS(187),
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
    [anon_sym_a2s] = ACTIONS(187),
    [anon_sym_barcode] = ACTIONS(187),
    [anon_sym_blockdiag] = ACTIONS(187),
    [anon_sym_bpmn] = ACTIONS(187),
    [anon_sym_bytefield] = ACTIONS(187),
    [anon_sym_d2] = ACTIONS(187),
    [anon_sym_dbml] = ACTIONS(187),
    [anon_sym_diagrams] = ACTIONS(187),
    [anon_sym_ditaa] = ACTIONS(187),
    [anon_sym_dpic] = ACTIONS(187),
    [anon_sym_erd] = ACTIONS(187),
    [anon_sym_gnuplot] = ACTIONS(187),
    [anon_sym_graphviz] = ACTIONS(187),
    [anon_sym_lilypond] = ACTIONS(187),
    [anon_sym_meme] = ACTIONS(187),
    [anon_sym_mermaid] = ACTIONS(187),
    [anon_sym_msc] = ACTIONS(187),
    [anon_sym_nomnoml] = ACTIONS(187),
    [anon_sym_pikchr] = ACTIONS(187),
    [anon_sym_plantuml] = ACTIONS(187),
    [anon_sym_shaape] = ACTIONS(187),
    [anon_sym_smcat] = ACTIONS(187),
    [anon_sym_structurizr] = ACTIONS(187),
    [anon_sym_svgbob] = ACTIONS(187),
    [anon_sym_symbolator] = ACTIONS(187),
    [anon_sym_syntrax] = ACTIONS(187),
    [anon_sym_tikz] = ACTIONS(187),
    [anon_sym_umlet] = ACTIONS(187),
    [anon_sym_vega] = ACTIONS(187),
    [anon_sym_wavedrom] = ACTIONS(187),
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
    [anon_sym_BSLASHstem] = ACTIONS(187),
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
    [anon_sym_www] = ACTIONS(187),
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
    [anon_sym_stem] = ACTIONS(191),
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
    [anon_sym_a2s] = ACTIONS(191),
    [anon_sym_barcode] = ACTIONS(191),
    [anon_sym_blockdiag] = ACTIONS(191),
    [anon_sym_bpmn] = ACTIONS(191),
    [anon_sym_bytefield] = ACTIONS(191),
    [anon_sym_d2] = ACTIONS(191),
    [anon_sym_dbml] = ACTIONS(191),
    [anon_sym_diagrams] = ACTIONS(191),
    [anon_sym_ditaa] = ACTIONS(191),
    [anon_sym_dpic] = ACTIONS(191),
    [anon_sym_erd] = ACTIONS(191),
    [anon_sym_gnuplot] = ACTIONS(191),
    [anon_sym_graphviz] = ACTIONS(191),
    [anon_sym_lilypond] = ACTIONS(191),
    [anon_sym_meme] = ACTIONS(191),
    [anon_sym_mermaid] = ACTIONS(191),
    [anon_sym_msc] = ACTIONS(191),
    [anon_sym_nomnoml] = ACTIONS(191),
    [anon_sym_pikchr] = ACTIONS(191),
    [anon_sym_plantuml] = ACTIONS(191),
    [anon_sym_shaape] = ACTIONS(191),
    [anon_sym_smcat] = ACTIONS(191),
    [anon_sym_structurizr] = ACTIONS(191),
    [anon_sym_svgbob] = ACTIONS(191),
    [anon_sym_symbolator] = ACTIONS(191),
    [anon_sym_syntrax] = ACTIONS(191),
    [anon_sym_tikz] = ACTIONS(191),
    [anon_sym_umlet] = ACTIONS(191),
    [anon_sym_vega] = ACTIONS(191),
    [anon_sym_wavedrom] = ACTIONS(191),
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
    [anon_sym_BSLASHstem] = ACTIONS(191),
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
    [anon_sym_www] = ACTIONS(191),
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
    [anon_sym_stem] = ACTIONS(195),
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
    [anon_sym_a2s] = ACTIONS(195),
    [anon_sym_barcode] = ACTIONS(195),
    [anon_sym_blockdiag] = ACTIONS(195),
    [anon_sym_bpmn] = ACTIONS(195),
    [anon_sym_bytefield] = ACTIONS(195),
    [anon_sym_d2] = ACTIONS(195),
    [anon_sym_dbml] = ACTIONS(195),
    [anon_sym_diagrams] = ACTIONS(195),
    [anon_sym_ditaa] = ACTIONS(195),
    [anon_sym_dpic] = ACTIONS(195),
    [anon_sym_erd] = ACTIONS(195),
    [anon_sym_gnuplot] = ACTIONS(195),
    [anon_sym_graphviz] = ACTIONS(195),
    [anon_sym_lilypond] = ACTIONS(195),
    [anon_sym_meme] = ACTIONS(195),
    [anon_sym_mermaid] = ACTIONS(195),
    [anon_sym_msc] = ACTIONS(195),
    [anon_sym_nomnoml] = ACTIONS(195),
    [anon_sym_pikchr] = ACTIONS(195),
    [anon_sym_plantuml] = ACTIONS(195),
    [anon_sym_shaape] = ACTIONS(195),
    [anon_sym_smcat] = ACTIONS(195),
    [anon_sym_structurizr] = ACTIONS(195),
    [anon_sym_svgbob] = ACTIONS(195),
    [anon_sym_symbolator] = ACTIONS(195),
    [anon_sym_syntrax] = ACTIONS(195),
    [anon_sym_tikz] = ACTIONS(195),
    [anon_sym_umlet] = ACTIONS(195),
    [anon_sym_vega] = ACTIONS(195),
    [anon_sym_wavedrom] = ACTIONS(195),
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
    [anon_sym_BSLASHstem] = ACTIONS(195),
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
    [anon_sym_www] = ACTIONS(195),
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
    [anon_sym_stem] = ACTIONS(199),
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
    [anon_sym_a2s] = ACTIONS(199),
    [anon_sym_barcode] = ACTIONS(199),
    [anon_sym_blockdiag] = ACTIONS(199),
    [anon_sym_bpmn] = ACTIONS(199),
    [anon_sym_bytefield] = ACTIONS(199),
    [anon_sym_d2] = ACTIONS(199),
    [anon_sym_dbml] = ACTIONS(199),
    [anon_sym_diagrams] = ACTIONS(199),
    [anon_sym_ditaa] = ACTIONS(199),
    [anon_sym_dpic] = ACTIONS(199),
    [anon_sym_erd] = ACTIONS(199),
    [anon_sym_gnuplot] = ACTIONS(199),
    [anon_sym_graphviz] = ACTIONS(199),
    [anon_sym_lilypond] = ACTIONS(199),
    [anon_sym_meme] = ACTIONS(199),
    [anon_sym_mermaid] = ACTIONS(199),
    [anon_sym_msc] = ACTIONS(199),
    [anon_sym_nomnoml] = ACTIONS(199),
    [anon_sym_pikchr] = ACTIONS(199),
    [anon_sym_plantuml] = ACTIONS(199),
    [anon_sym_shaape] = ACTIONS(199),
    [anon_sym_smcat] = ACTIONS(199),
    [anon_sym_structurizr] = ACTIONS(199),
    [anon_sym_svgbob] = ACTIONS(199),
    [anon_sym_symbolator] = ACTIONS(199),
    [anon_sym_syntrax] = ACTIONS(199),
    [anon_sym_tikz] = ACTIONS(199),
    [anon_sym_umlet] = ACTIONS(199),
    [anon_sym_vega] = ACTIONS(199),
    [anon_sym_wavedrom] = ACTIONS(199),
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
    [anon_sym_BSLASHstem] = ACTIONS(199),
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
    [anon_sym_www] = ACTIONS(199),
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
    [anon_sym_stem] = ACTIONS(203),
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
    [anon_sym_a2s] = ACTIONS(203),
    [anon_sym_barcode] = ACTIONS(203),
    [anon_sym_blockdiag] = ACTIONS(203),
    [anon_sym_bpmn] = ACTIONS(203),
    [anon_sym_bytefield] = ACTIONS(203),
    [anon_sym_d2] = ACTIONS(203),
    [anon_sym_dbml] = ACTIONS(203),
    [anon_sym_diagrams] = ACTIONS(203),
    [anon_sym_ditaa] = ACTIONS(203),
    [anon_sym_dpic] = ACTIONS(203),
    [anon_sym_erd] = ACTIONS(203),
    [anon_sym_gnuplot] = ACTIONS(203),
    [anon_sym_graphviz] = ACTIONS(203),
    [anon_sym_lilypond] = ACTIONS(203),
    [anon_sym_meme] = ACTIONS(203),
    [anon_sym_mermaid] = ACTIONS(203),
    [anon_sym_msc] = ACTIONS(203),
    [anon_sym_nomnoml] = ACTIONS(203),
    [anon_sym_pikchr] = ACTIONS(203),
    [anon_sym_plantuml] = ACTIONS(203),
    [anon_sym_shaape] = ACTIONS(203),
    [anon_sym_smcat] = ACTIONS(203),
    [anon_sym_structurizr] = ACTIONS(203),
    [anon_sym_svgbob] = ACTIONS(203),
    [anon_sym_symbolator] = ACTIONS(203),
    [anon_sym_syntrax] = ACTIONS(203),
    [anon_sym_tikz] = ACTIONS(203),
    [anon_sym_umlet] = ACTIONS(203),
    [anon_sym_vega] = ACTIONS(203),
    [anon_sym_wavedrom] = ACTIONS(203),
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
    [anon_sym_BSLASHstem] = ACTIONS(203),
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
    [anon_sym_www] = ACTIONS(203),
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
    [anon_sym_stem] = ACTIONS(207),
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
    [anon_sym_a2s] = ACTIONS(207),
    [anon_sym_barcode] = ACTIONS(207),
    [anon_sym_blockdiag] = ACTIONS(207),
    [anon_sym_bpmn] = ACTIONS(207),
    [anon_sym_bytefield] = ACTIONS(207),
    [anon_sym_d2] = ACTIONS(207),
    [anon_sym_dbml] = ACTIONS(207),
    [anon_sym_diagrams] = ACTIONS(207),
    [anon_sym_ditaa] = ACTIONS(207),
    [anon_sym_dpic] = ACTIONS(207),
    [anon_sym_erd] = ACTIONS(207),
    [anon_sym_gnuplot] = ACTIONS(207),
    [anon_sym_graphviz] = ACTIONS(207),
    [anon_sym_lilypond] = ACTIONS(207),
    [anon_sym_meme] = ACTIONS(207),
    [anon_sym_mermaid] = ACTIONS(207),
    [anon_sym_msc] = ACTIONS(207),
    [anon_sym_nomnoml] = ACTIONS(207),
    [anon_sym_pikchr] = ACTIONS(207),
    [anon_sym_plantuml] = ACTIONS(207),
    [anon_sym_shaape] = ACTIONS(207),
    [anon_sym_smcat] = ACTIONS(207),
    [anon_sym_structurizr] = ACTIONS(207),
    [anon_sym_svgbob] = ACTIONS(207),
    [anon_sym_symbolator] = ACTIONS(207),
    [anon_sym_syntrax] = ACTIONS(207),
    [anon_sym_tikz] = ACTIONS(207),
    [anon_sym_umlet] = ACTIONS(207),
    [anon_sym_vega] = ACTIONS(207),
    [anon_sym_wavedrom] = ACTIONS(207),
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
    [anon_sym_BSLASHstem] = ACTIONS(207),
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
    [anon_sym_www] = ACTIONS(207),
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
    [anon_sym_stem] = ACTIONS(211),
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
    [anon_sym_a2s] = ACTIONS(211),
    [anon_sym_barcode] = ACTIONS(211),
    [anon_sym_blockdiag] = ACTIONS(211),
    [anon_sym_bpmn] = ACTIONS(211),
    [anon_sym_bytefield] = ACTIONS(211),
    [anon_sym_d2] = ACTIONS(211),
    [anon_sym_dbml] = ACTIONS(211),
    [anon_sym_diagrams] = ACTIONS(211),
    [anon_sym_ditaa] = ACTIONS(211),
    [anon_sym_dpic] = ACTIONS(211),
    [anon_sym_erd] = ACTIONS(211),
    [anon_sym_gnuplot] = ACTIONS(211),
    [anon_sym_graphviz] = ACTIONS(211),
    [anon_sym_lilypond] = ACTIONS(211),
    [anon_sym_meme] = ACTIONS(211),
    [anon_sym_mermaid] = ACTIONS(211),
    [anon_sym_msc] = ACTIONS(211),
    [anon_sym_nomnoml] = ACTIONS(211),
    [anon_sym_pikchr] = ACTIONS(211),
    [anon_sym_plantuml] = ACTIONS(211),
    [anon_sym_shaape] = ACTIONS(211),
    [anon_sym_smcat] = ACTIONS(211),
    [anon_sym_structurizr] = ACTIONS(211),
    [anon_sym_svgbob] = ACTIONS(211),
    [anon_sym_symbolator] = ACTIONS(211),
    [anon_sym_syntrax] = ACTIONS(211),
    [anon_sym_tikz] = ACTIONS(211),
    [anon_sym_umlet] = ACTIONS(211),
    [anon_sym_vega] = ACTIONS(211),
    [anon_sym_wavedrom] = ACTIONS(211),
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
    [anon_sym_BSLASHstem] = ACTIONS(211),
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
    [anon_sym_www] = ACTIONS(211),
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
  [31] = {
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
    [anon_sym_stem] = ACTIONS(215),
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
    [anon_sym_a2s] = ACTIONS(215),
    [anon_sym_barcode] = ACTIONS(215),
    [anon_sym_blockdiag] = ACTIONS(215),
    [anon_sym_bpmn] = ACTIONS(215),
    [anon_sym_bytefield] = ACTIONS(215),
    [anon_sym_d2] = ACTIONS(215),
    [anon_sym_dbml] = ACTIONS(215),
    [anon_sym_diagrams] = ACTIONS(215),
    [anon_sym_ditaa] = ACTIONS(215),
    [anon_sym_dpic] = ACTIONS(215),
    [anon_sym_erd] = ACTIONS(215),
    [anon_sym_gnuplot] = ACTIONS(215),
    [anon_sym_graphviz] = ACTIONS(215),
    [anon_sym_lilypond] = ACTIONS(215),
    [anon_sym_meme] = ACTIONS(215),
    [anon_sym_mermaid] = ACTIONS(215),
    [anon_sym_msc] = ACTIONS(215),
    [anon_sym_nomnoml] = ACTIONS(215),
    [anon_sym_pikchr] = ACTIONS(215),
    [anon_sym_plantuml] = ACTIONS(215),
    [anon_sym_shaape] = ACTIONS(215),
    [anon_sym_smcat] = ACTIONS(215),
    [anon_sym_structurizr] = ACTIONS(215),
    [anon_sym_svgbob] = ACTIONS(215),
    [anon_sym_symbolator] = ACTIONS(215),
    [anon_sym_syntrax] = ACTIONS(215),
    [anon_sym_tikz] = ACTIONS(215),
    [anon_sym_umlet] = ACTIONS(215),
    [anon_sym_vega] = ACTIONS(215),
    [anon_sym_wavedrom] = ACTIONS(215),
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
    [anon_sym_BSLASHstem] = ACTIONS(215),
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
    [anon_sym_www] = ACTIONS(215),
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
  [32] = {
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
    [anon_sym_stem] = ACTIONS(219),
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
    [anon_sym_a2s] = ACTIONS(219),
    [anon_sym_barcode] = ACTIONS(219),
    [anon_sym_blockdiag] = ACTIONS(219),
    [anon_sym_bpmn] = ACTIONS(219),
    [anon_sym_bytefield] = ACTIONS(219),
    [anon_sym_d2] = ACTIONS(219),
    [anon_sym_dbml] = ACTIONS(219),
    [anon_sym_diagrams] = ACTIONS(219),
    [anon_sym_ditaa] = ACTIONS(219),
    [anon_sym_dpic] = ACTIONS(219),
    [anon_sym_erd] = ACTIONS(219),
    [anon_sym_gnuplot] = ACTIONS(219),
    [anon_sym_graphviz] = ACTIONS(219),
    [anon_sym_lilypond] = ACTIONS(219),
    [anon_sym_meme] = ACTIONS(219),
    [anon_sym_mermaid] = ACTIONS(219),
    [anon_sym_msc] = ACTIONS(219),
    [anon_sym_nomnoml] = ACTIONS(219),
    [anon_sym_pikchr] = ACTIONS(219),
    [anon_sym_plantuml] = ACTIONS(219),
    [anon_sym_shaape] = ACTIONS(219),
    [anon_sym_smcat] = ACTIONS(219),
    [anon_sym_structurizr] = ACTIONS(219),
    [anon_sym_svgbob] = ACTIONS(219),
    [anon_sym_symbolator] = ACTIONS(219),
    [anon_sym_syntrax] = ACTIONS(219),
    [anon_sym_tikz] = ACTIONS(219),
    [anon_sym_umlet] = ACTIONS(219),
    [anon_sym_vega] = ACTIONS(219),
    [anon_sym_wavedrom] = ACTIONS(219),
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
    [anon_sym_BSLASHstem] = ACTIONS(219),
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
    [anon_sym_www] = ACTIONS(219),
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
  [33] = {
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
    [anon_sym_stem] = ACTIONS(223),
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
    [anon_sym_a2s] = ACTIONS(223),
    [anon_sym_barcode] = ACTIONS(223),
    [anon_sym_blockdiag] = ACTIONS(223),
    [anon_sym_bpmn] = ACTIONS(223),
    [anon_sym_bytefield] = ACTIONS(223),
    [anon_sym_d2] = ACTIONS(223),
    [anon_sym_dbml] = ACTIONS(223),
    [anon_sym_diagrams] = ACTIONS(223),
    [anon_sym_ditaa] = ACTIONS(223),
    [anon_sym_dpic] = ACTIONS(223),
    [anon_sym_erd] = ACTIONS(223),
    [anon_sym_gnuplot] = ACTIONS(223),
    [anon_sym_graphviz] = ACTIONS(223),
    [anon_sym_lilypond] = ACTIONS(223),
    [anon_sym_meme] = ACTIONS(223),
    [anon_sym_mermaid] = ACTIONS(223),
    [anon_sym_msc] = ACTIONS(223),
    [anon_sym_nomnoml] = ACTIONS(223),
    [anon_sym_pikchr] = ACTIONS(223),
    [anon_sym_plantuml] = ACTIONS(223),
    [anon_sym_shaape] = ACTIONS(223),
    [anon_sym_smcat] = ACTIONS(223),
    [anon_sym_structurizr] = ACTIONS(223),
    [anon_sym_svgbob] = ACTIONS(223),
    [anon_sym_symbolator] = ACTIONS(223),
    [anon_sym_syntrax] = ACTIONS(223),
    [anon_sym_tikz] = ACTIONS(223),
    [anon_sym_umlet] = ACTIONS(223),
    [anon_sym_vega] = ACTIONS(223),
    [anon_sym_wavedrom] = ACTIONS(223),
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
    [anon_sym_BSLASHstem] = ACTIONS(223),
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
    [anon_sym_www] = ACTIONS(223),
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
  [34] = {
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
    [anon_sym_stem] = ACTIONS(219),
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
    [anon_sym_a2s] = ACTIONS(219),
    [anon_sym_barcode] = ACTIONS(219),
    [anon_sym_blockdiag] = ACTIONS(219),
    [anon_sym_bpmn] = ACTIONS(219),
    [anon_sym_bytefield] = ACTIONS(219),
    [anon_sym_d2] = ACTIONS(219),
    [anon_sym_dbml] = ACTIONS(219),
    [anon_sym_diagrams] = ACTIONS(219),
    [anon_sym_ditaa] = ACTIONS(219),
    [anon_sym_dpic] = ACTIONS(219),
    [anon_sym_erd] = ACTIONS(219),
    [anon_sym_gnuplot] = ACTIONS(219),
    [anon_sym_graphviz] = ACTIONS(219),
    [anon_sym_lilypond] = ACTIONS(219),
    [anon_sym_meme] = ACTIONS(219),
    [anon_sym_mermaid] = ACTIONS(219),
    [anon_sym_msc] = ACTIONS(219),
    [anon_sym_nomnoml] = ACTIONS(219),
    [anon_sym_pikchr] = ACTIONS(219),
    [anon_sym_plantuml] = ACTIONS(219),
    [anon_sym_shaape] = ACTIONS(219),
    [anon_sym_smcat] = ACTIONS(219),
    [anon_sym_structurizr] = ACTIONS(219),
    [anon_sym_svgbob] = ACTIONS(219),
    [anon_sym_symbolator] = ACTIONS(219),
    [anon_sym_syntrax] = ACTIONS(219),
    [anon_sym_tikz] = ACTIONS(219),
    [anon_sym_umlet] = ACTIONS(219),
    [anon_sym_vega] = ACTIONS(219),
    [anon_sym_wavedrom] = ACTIONS(219),
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
    [anon_sym_BSLASHstem] = ACTIONS(219),
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
    [anon_sym_www] = ACTIONS(219),
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
    [anon_sym_stem] = ACTIONS(227),
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
    [anon_sym_a2s] = ACTIONS(227),
    [anon_sym_barcode] = ACTIONS(227),
    [anon_sym_blockdiag] = ACTIONS(227),
    [anon_sym_bpmn] = ACTIONS(227),
    [anon_sym_bytefield] = ACTIONS(227),
    [anon_sym_d2] = ACTIONS(227),
    [anon_sym_dbml] = ACTIONS(227),
    [anon_sym_diagrams] = ACTIONS(227),
    [anon_sym_ditaa] = ACTIONS(227),
    [anon_sym_dpic] = ACTIONS(227),
    [anon_sym_erd] = ACTIONS(227),
    [anon_sym_gnuplot] = ACTIONS(227),
    [anon_sym_graphviz] = ACTIONS(227),
    [anon_sym_lilypond] = ACTIONS(227),
    [anon_sym_meme] = ACTIONS(227),
    [anon_sym_mermaid] = ACTIONS(227),
    [anon_sym_msc] = ACTIONS(227),
    [anon_sym_nomnoml] = ACTIONS(227),
    [anon_sym_pikchr] = ACTIONS(227),
    [anon_sym_plantuml] = ACTIONS(227),
    [anon_sym_shaape] = ACTIONS(227),
    [anon_sym_smcat] = ACTIONS(227),
    [anon_sym_structurizr] = ACTIONS(227),
    [anon_sym_svgbob] = ACTIONS(227),
    [anon_sym_symbolator] = ACTIONS(227),
    [anon_sym_syntrax] = ACTIONS(227),
    [anon_sym_tikz] = ACTIONS(227),
    [anon_sym_umlet] = ACTIONS(227),
    [anon_sym_vega] = ACTIONS(227),
    [anon_sym_wavedrom] = ACTIONS(227),
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
    [anon_sym_BSLASHstem] = ACTIONS(227),
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
    [anon_sym_www] = ACTIONS(227),
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
  [0] = 8,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_inline_macro_repeat2,
    STATE(73), 1,
      sym_link_url,
    ACTIONS(229), 2,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
    STATE(78), 2,
      sym_replacement,
      sym_auto_link,
    ACTIONS(237), 6,
      anon_sym_http,
      anon_sym_https,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_irc,
      anon_sym_www,
  [32] = 8,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      aux_sym_inline_macro_repeat2,
    STATE(73), 1,
      sym_link_url,
    ACTIONS(229), 2,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
    STATE(78), 2,
      sym_replacement,
      sym_auto_link,
    ACTIONS(237), 6,
      anon_sym_http,
      anon_sym_https,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_irc,
      anon_sym_www,
  [64] = 8,
    ACTIONS(244), 1,
      anon_sym_RBRACK,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_inline_macro_repeat2,
    STATE(73), 1,
      sym_link_url,
    ACTIONS(241), 2,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
    STATE(78), 2,
      sym_replacement,
      sym_auto_link,
    ACTIONS(252), 6,
      anon_sym_http,
      anon_sym_https,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_irc,
      anon_sym_www,
  [96] = 8,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      aux_sym_inline_macro_repeat2,
    STATE(73), 1,
      sym_link_url,
    ACTIONS(229), 2,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
    STATE(78), 2,
      sym_replacement,
      sym_auto_link,
    ACTIONS(237), 6,
      anon_sym_http,
      anon_sym_https,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_irc,
      anon_sym_www,
  [128] = 8,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      aux_sym_inline_macro_repeat2,
    STATE(73), 1,
      sym_link_url,
    ACTIONS(229), 2,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
    STATE(78), 2,
      sym_replacement,
      sym_auto_link,
    ACTIONS(237), 6,
      anon_sym_http,
      anon_sym_https,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_irc,
      anon_sym_www,
  [160] = 3,
    ACTIONS(259), 1,
      anon_sym_DOT,
    STATE(42), 1,
      aux_sym_link_url_repeat1,
    ACTIONS(114), 12,
      anon_sym_LBRACK,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_http,
      anon_sym_https,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_irc,
      anon_sym_www,
  [181] = 3,
    ACTIONS(259), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_link_url_repeat1,
    ACTIONS(122), 12,
      anon_sym_LBRACK,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_http,
      anon_sym_https,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_irc,
      anon_sym_www,
  [202] = 3,
    ACTIONS(261), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_link_url_repeat1,
    ACTIONS(126), 12,
      anon_sym_LBRACK,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_http,
      anon_sym_https,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_irc,
      anon_sym_www,
  [223] = 9,
    ACTIONS(266), 1,
      anon_sym_STAR_STAR,
    ACTIONS(268), 1,
      anon_sym__2,
    ACTIONS(270), 1,
      anon_sym___,
    ACTIONS(272), 1,
      anon_sym_BQUOTE2,
    ACTIONS(274), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(276), 1,
      anon_sym_POUND2,
    ACTIONS(278), 1,
      anon_sym_POUND_POUND,
    ACTIONS(264), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
    STATE(69), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [255] = 9,
    ACTIONS(268), 1,
      anon_sym__2,
    ACTIONS(270), 1,
      anon_sym___,
    ACTIONS(272), 1,
      anon_sym_BQUOTE2,
    ACTIONS(274), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(276), 1,
      anon_sym_POUND2,
    ACTIONS(278), 1,
      anon_sym_POUND_POUND,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(280), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
    STATE(44), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [287] = 9,
    ACTIONS(284), 1,
      anon_sym_STAR2,
    ACTIONS(286), 1,
      anon_sym_STAR_STAR,
    ACTIONS(290), 1,
      anon_sym___,
    ACTIONS(292), 1,
      anon_sym_BQUOTE2,
    ACTIONS(294), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(296), 1,
      anon_sym_POUND2,
    ACTIONS(298), 1,
      anon_sym_POUND_POUND,
    ACTIONS(288), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
    STATE(71), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [319] = 9,
    ACTIONS(290), 1,
      anon_sym__,
    ACTIONS(300), 1,
      anon_sym_STAR2,
    ACTIONS(302), 1,
      anon_sym_STAR_STAR,
    ACTIONS(306), 1,
      anon_sym_BQUOTE2,
    ACTIONS(308), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(310), 1,
      anon_sym_POUND2,
    ACTIONS(312), 1,
      anon_sym_POUND_POUND,
    ACTIONS(304), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
    STATE(70), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [351] = 9,
    ACTIONS(268), 1,
      anon_sym__2,
    ACTIONS(270), 1,
      anon_sym___,
    ACTIONS(272), 1,
      anon_sym_BQUOTE2,
    ACTIONS(274), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(276), 1,
      anon_sym_POUND2,
    ACTIONS(278), 1,
      anon_sym_POUND_POUND,
    ACTIONS(314), 1,
      anon_sym_STAR_STAR,
    ACTIONS(264), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
    STATE(69), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [383] = 9,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(318), 1,
      anon_sym__2,
    ACTIONS(320), 1,
      anon_sym___,
    ACTIONS(322), 1,
      anon_sym_BQUOTE2,
    ACTIONS(324), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(326), 1,
      anon_sym_POUND2,
    ACTIONS(328), 1,
      anon_sym_POUND_POUND,
    ACTIONS(316), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
    STATE(72), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [415] = 9,
    ACTIONS(284), 1,
      anon_sym_STAR2,
    ACTIONS(286), 1,
      anon_sym_STAR_STAR,
    ACTIONS(292), 1,
      anon_sym_BQUOTE2,
    ACTIONS(294), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(296), 1,
      anon_sym_POUND2,
    ACTIONS(298), 1,
      anon_sym_POUND_POUND,
    ACTIONS(332), 1,
      anon_sym___,
    ACTIONS(330), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
    STATE(46), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [447] = 9,
    ACTIONS(300), 1,
      anon_sym_STAR2,
    ACTIONS(302), 1,
      anon_sym_STAR_STAR,
    ACTIONS(306), 1,
      anon_sym_BQUOTE2,
    ACTIONS(308), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(310), 1,
      anon_sym_POUND2,
    ACTIONS(312), 1,
      anon_sym_POUND_POUND,
    ACTIONS(332), 1,
      anon_sym__,
    ACTIONS(334), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
    STATE(47), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [479] = 9,
    ACTIONS(268), 1,
      anon_sym__2,
    ACTIONS(270), 1,
      anon_sym___,
    ACTIONS(272), 1,
      anon_sym_BQUOTE2,
    ACTIONS(274), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(276), 1,
      anon_sym_POUND2,
    ACTIONS(278), 1,
      anon_sym_POUND_POUND,
    ACTIONS(338), 1,
      anon_sym_STAR_STAR,
    ACTIONS(336), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
    STATE(48), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [511] = 9,
    ACTIONS(318), 1,
      anon_sym__2,
    ACTIONS(320), 1,
      anon_sym___,
    ACTIONS(322), 1,
      anon_sym_BQUOTE2,
    ACTIONS(324), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(326), 1,
      anon_sym_POUND2,
    ACTIONS(328), 1,
      anon_sym_POUND_POUND,
    ACTIONS(340), 1,
      anon_sym_STAR,
    ACTIONS(316), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
    STATE(72), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [543] = 9,
    ACTIONS(268), 1,
      anon_sym__2,
    ACTIONS(270), 1,
      anon_sym___,
    ACTIONS(272), 1,
      anon_sym_BQUOTE2,
    ACTIONS(274), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(276), 1,
      anon_sym_POUND2,
    ACTIONS(278), 1,
      anon_sym_POUND_POUND,
    ACTIONS(340), 1,
      anon_sym_STAR_STAR,
    ACTIONS(264), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
    STATE(69), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [575] = 9,
    ACTIONS(300), 1,
      anon_sym_STAR2,
    ACTIONS(302), 1,
      anon_sym_STAR_STAR,
    ACTIONS(306), 1,
      anon_sym_BQUOTE2,
    ACTIONS(308), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(310), 1,
      anon_sym_POUND2,
    ACTIONS(312), 1,
      anon_sym_POUND_POUND,
    ACTIONS(342), 1,
      anon_sym__,
    ACTIONS(304), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
    STATE(70), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [607] = 9,
    ACTIONS(284), 1,
      anon_sym_STAR2,
    ACTIONS(286), 1,
      anon_sym_STAR_STAR,
    ACTIONS(292), 1,
      anon_sym_BQUOTE2,
    ACTIONS(294), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(296), 1,
      anon_sym_POUND2,
    ACTIONS(298), 1,
      anon_sym_POUND_POUND,
    ACTIONS(342), 1,
      anon_sym___,
    ACTIONS(288), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
    STATE(71), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [639] = 9,
    ACTIONS(318), 1,
      anon_sym__2,
    ACTIONS(320), 1,
      anon_sym___,
    ACTIONS(322), 1,
      anon_sym_BQUOTE2,
    ACTIONS(324), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(326), 1,
      anon_sym_POUND2,
    ACTIONS(328), 1,
      anon_sym_POUND_POUND,
    ACTIONS(338), 1,
      anon_sym_STAR,
    ACTIONS(344), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
    STATE(49), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [671] = 9,
    ACTIONS(284), 1,
      anon_sym_STAR2,
    ACTIONS(286), 1,
      anon_sym_STAR_STAR,
    ACTIONS(292), 1,
      anon_sym_BQUOTE2,
    ACTIONS(294), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(296), 1,
      anon_sym_POUND2,
    ACTIONS(298), 1,
      anon_sym_POUND_POUND,
    ACTIONS(346), 1,
      anon_sym___,
    ACTIONS(288), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
    STATE(71), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [703] = 9,
    ACTIONS(300), 1,
      anon_sym_STAR2,
    ACTIONS(302), 1,
      anon_sym_STAR_STAR,
    ACTIONS(306), 1,
      anon_sym_BQUOTE2,
    ACTIONS(308), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(310), 1,
      anon_sym_POUND2,
    ACTIONS(312), 1,
      anon_sym_POUND_POUND,
    ACTIONS(346), 1,
      anon_sym__,
    ACTIONS(304), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
    STATE(70), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [735] = 9,
    ACTIONS(266), 1,
      anon_sym_STAR,
    ACTIONS(318), 1,
      anon_sym__2,
    ACTIONS(320), 1,
      anon_sym___,
    ACTIONS(322), 1,
      anon_sym_BQUOTE2,
    ACTIONS(324), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(326), 1,
      anon_sym_POUND2,
    ACTIONS(328), 1,
      anon_sym_POUND_POUND,
    ACTIONS(316), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
    STATE(72), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [767] = 9,
    ACTIONS(284), 1,
      anon_sym_STAR2,
    ACTIONS(286), 1,
      anon_sym_STAR_STAR,
    ACTIONS(292), 1,
      anon_sym_BQUOTE2,
    ACTIONS(294), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(296), 1,
      anon_sym_POUND2,
    ACTIONS(298), 1,
      anon_sym_POUND_POUND,
    ACTIONS(350), 1,
      anon_sym___,
    ACTIONS(348), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
    STATE(58), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [799] = 9,
    ACTIONS(300), 1,
      anon_sym_STAR2,
    ACTIONS(302), 1,
      anon_sym_STAR_STAR,
    ACTIONS(306), 1,
      anon_sym_BQUOTE2,
    ACTIONS(308), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(310), 1,
      anon_sym_POUND2,
    ACTIONS(312), 1,
      anon_sym_POUND_POUND,
    ACTIONS(350), 1,
      anon_sym__,
    ACTIONS(352), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
    STATE(59), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [831] = 9,
    ACTIONS(268), 1,
      anon_sym__2,
    ACTIONS(270), 1,
      anon_sym___,
    ACTIONS(272), 1,
      anon_sym_BQUOTE2,
    ACTIONS(274), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(276), 1,
      anon_sym_POUND2,
    ACTIONS(278), 1,
      anon_sym_POUND_POUND,
    ACTIONS(356), 1,
      anon_sym_STAR_STAR,
    ACTIONS(354), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
    STATE(54), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [863] = 9,
    ACTIONS(282), 1,
      anon_sym_STAR,
    ACTIONS(318), 1,
      anon_sym__2,
    ACTIONS(320), 1,
      anon_sym___,
    ACTIONS(322), 1,
      anon_sym_BQUOTE2,
    ACTIONS(324), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(326), 1,
      anon_sym_POUND2,
    ACTIONS(328), 1,
      anon_sym_POUND_POUND,
    ACTIONS(358), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
    STATE(60), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [895] = 9,
    ACTIONS(300), 1,
      anon_sym_STAR2,
    ACTIONS(302), 1,
      anon_sym_STAR_STAR,
    ACTIONS(306), 1,
      anon_sym_BQUOTE2,
    ACTIONS(308), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(310), 1,
      anon_sym_POUND2,
    ACTIONS(312), 1,
      anon_sym_POUND_POUND,
    ACTIONS(360), 1,
      anon_sym__,
    ACTIONS(362), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
    STATE(55), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [927] = 1,
    ACTIONS(126), 13,
      anon_sym_LBRACK,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      anon_sym_http,
      anon_sym_https,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_irc,
      anon_sym_www,
  [943] = 9,
    ACTIONS(284), 1,
      anon_sym_STAR2,
    ACTIONS(286), 1,
      anon_sym_STAR_STAR,
    ACTIONS(292), 1,
      anon_sym_BQUOTE2,
    ACTIONS(294), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(296), 1,
      anon_sym_POUND2,
    ACTIONS(298), 1,
      anon_sym_POUND_POUND,
    ACTIONS(360), 1,
      anon_sym___,
    ACTIONS(364), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
    STATE(56), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [975] = 9,
    ACTIONS(318), 1,
      anon_sym__2,
    ACTIONS(320), 1,
      anon_sym___,
    ACTIONS(322), 1,
      anon_sym_BQUOTE2,
    ACTIONS(324), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(326), 1,
      anon_sym_POUND2,
    ACTIONS(328), 1,
      anon_sym_POUND_POUND,
    ACTIONS(356), 1,
      anon_sym_STAR,
    ACTIONS(366), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
    STATE(53), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [1007] = 9,
    ACTIONS(371), 1,
      anon_sym_STAR_STAR,
    ACTIONS(373), 1,
      anon_sym__2,
    ACTIONS(376), 1,
      anon_sym___,
    ACTIONS(379), 1,
      anon_sym_BQUOTE2,
    ACTIONS(382), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(385), 1,
      anon_sym_POUND2,
    ACTIONS(388), 1,
      anon_sym_POUND_POUND,
    ACTIONS(368), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
    STATE(69), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [1039] = 9,
    ACTIONS(391), 1,
      anon_sym__,
    ACTIONS(393), 1,
      anon_sym_STAR2,
    ACTIONS(396), 1,
      anon_sym_STAR_STAR,
    ACTIONS(402), 1,
      anon_sym_BQUOTE2,
    ACTIONS(405), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(408), 1,
      anon_sym_POUND2,
    ACTIONS(411), 1,
      anon_sym_POUND_POUND,
    ACTIONS(399), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
    STATE(70), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [1071] = 9,
    ACTIONS(391), 1,
      anon_sym___,
    ACTIONS(414), 1,
      anon_sym_STAR2,
    ACTIONS(417), 1,
      anon_sym_STAR_STAR,
    ACTIONS(423), 1,
      anon_sym_BQUOTE2,
    ACTIONS(426), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(429), 1,
      anon_sym_POUND2,
    ACTIONS(432), 1,
      anon_sym_POUND_POUND,
    ACTIONS(420), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
    STATE(71), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [1103] = 9,
    ACTIONS(371), 1,
      anon_sym_STAR,
    ACTIONS(438), 1,
      anon_sym__2,
    ACTIONS(441), 1,
      anon_sym___,
    ACTIONS(444), 1,
      anon_sym_BQUOTE2,
    ACTIONS(447), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(450), 1,
      anon_sym_POUND2,
    ACTIONS(453), 1,
      anon_sym_POUND_POUND,
    ACTIONS(435), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
    STATE(72), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [1135] = 2,
    ACTIONS(456), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 11,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_http,
      anon_sym_https,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_irc,
      anon_sym_www,
  [1152] = 1,
    ACTIONS(219), 11,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_http,
      anon_sym_https,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_irc,
      anon_sym_www,
  [1166] = 1,
    ACTIONS(183), 11,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_http,
      anon_sym_https,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_irc,
      anon_sym_www,
  [1180] = 1,
    ACTIONS(157), 11,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_http,
      anon_sym_https,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_irc,
      anon_sym_www,
  [1194] = 1,
    ACTIONS(219), 11,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_http,
      anon_sym_https,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_irc,
      anon_sym_www,
  [1208] = 1,
    ACTIONS(458), 11,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_http,
      anon_sym_https,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_irc,
      anon_sym_www,
  [1222] = 1,
    ACTIONS(141), 11,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_http,
      anon_sym_https,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_irc,
      anon_sym_www,
  [1236] = 1,
    ACTIONS(215), 11,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_http,
      anon_sym_https,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_irc,
      anon_sym_www,
  [1250] = 1,
    ACTIONS(161), 9,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1262] = 1,
    ACTIONS(211), 9,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1274] = 1,
    ACTIONS(223), 9,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1286] = 1,
    ACTIONS(195), 9,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
      anon_sym_STAR_STAR,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1298] = 1,
    ACTIONS(191), 9,
      anon_sym_STAR,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1310] = 1,
    ACTIONS(207), 9,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
      anon_sym_STAR_STAR,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1322] = 1,
    ACTIONS(145), 9,
      anon_sym_STAR,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1334] = 1,
    ACTIONS(161), 9,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
      anon_sym_STAR_STAR,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1346] = 1,
    ACTIONS(203), 9,
      anon_sym_STAR,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1358] = 1,
    ACTIONS(211), 9,
      anon_sym__,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1370] = 1,
    ACTIONS(203), 9,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
      anon_sym_STAR_STAR,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1382] = 1,
    ACTIONS(145), 9,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
      anon_sym_STAR_STAR,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1394] = 1,
    ACTIONS(161), 9,
      anon_sym_STAR,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1406] = 1,
    ACTIONS(195), 9,
      anon_sym_STAR,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1418] = 1,
    ACTIONS(207), 9,
      anon_sym_STAR,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1430] = 1,
    ACTIONS(223), 9,
      anon_sym__,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1442] = 1,
    ACTIONS(191), 9,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1454] = 1,
    ACTIONS(145), 9,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1466] = 1,
    ACTIONS(195), 9,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1478] = 1,
    ACTIONS(191), 9,
      anon_sym__,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1490] = 1,
    ACTIONS(145), 9,
      anon_sym__,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1502] = 1,
    ACTIONS(161), 9,
      anon_sym__,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1514] = 1,
    ACTIONS(195), 9,
      anon_sym__,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_2,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1526] = 1,
    ACTIONS(191), 9,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR2,
      anon_sym_STAR_STAR,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [1538] = 5,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    STATE(202), 1,
      sym_link_label,
    ACTIONS(460), 2,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
    STATE(115), 2,
      sym_replacement,
      aux_sym_link_label_repeat1,
  [1556] = 5,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      sym_link_label,
    ACTIONS(460), 2,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
    STATE(115), 2,
      sym_replacement,
      aux_sym_link_label_repeat1,
  [1574] = 5,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      sym_link_label,
    ACTIONS(460), 2,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
    STATE(115), 2,
      sym_replacement,
      aux_sym_link_label_repeat1,
  [1592] = 3,
    ACTIONS(118), 1,
      anon_sym_http,
    STATE(182), 1,
      sym_link_url,
    ACTIONS(470), 5,
      anon_sym_https,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_irc,
      anon_sym_www,
  [1606] = 5,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    ACTIONS(472), 1,
      anon_sym_RBRACK,
    STATE(211), 1,
      sym_link_label,
    ACTIONS(460), 2,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
    STATE(115), 2,
      sym_replacement,
      aux_sym_link_label_repeat1,
  [1624] = 5,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      aux_sym_inline_macro_repeat1,
    STATE(150), 1,
      sym_replacement,
    ACTIONS(474), 2,
      aux_sym_inline_macro_token1,
      anon_sym_BSLASH_LBRACK,
  [1641] = 4,
    ACTIONS(483), 1,
      anon_sym_RBRACK,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 2,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
    STATE(111), 2,
      sym_replacement,
      aux_sym_link_label_repeat1,
  [1656] = 5,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 1,
      anon_sym_LBRACK,
    STATE(114), 1,
      aux_sym_inline_macro_repeat1,
    STATE(150), 1,
      sym_replacement,
    ACTIONS(474), 2,
      aux_sym_inline_macro_token1,
      anon_sym_BSLASH_LBRACK,
  [1673] = 4,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      anon_sym_GT_GT,
    STATE(116), 1,
      aux_sym_xref_repeat1,
    ACTIONS(492), 3,
      aux_sym_xref_token1,
      anon_sym_BSLASH_COMMA,
      anon_sym_BSLASH_GT,
  [1688] = 5,
    ACTIONS(499), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      aux_sym_inline_macro_repeat1,
    STATE(150), 1,
      sym_replacement,
    ACTIONS(496), 2,
      aux_sym_inline_macro_token1,
      anon_sym_BSLASH_LBRACK,
  [1705] = 4,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    ACTIONS(506), 1,
      anon_sym_RBRACK,
    ACTIONS(504), 2,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
    STATE(111), 2,
      sym_replacement,
      aux_sym_link_label_repeat1,
  [1720] = 3,
    STATE(116), 1,
      aux_sym_xref_repeat1,
    ACTIONS(508), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
    ACTIONS(510), 3,
      aux_sym_xref_token1,
      anon_sym_BSLASH_COMMA,
      anon_sym_BSLASH_GT,
  [1733] = 3,
    ACTIONS(513), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(117), 1,
      aux_sym_passthrough_repeat3,
    ACTIONS(515), 3,
      aux_sym_passthrough_token2,
      anon_sym_BSLASH_DOLLAR2,
      anon_sym_BSLASH_DOLLAR_DOLLAR2,
  [1745] = 1,
    ACTIONS(518), 5,
      anon_sym_COMMA,
      aux_sym_xref_token1,
      anon_sym_BSLASH_COMMA,
      anon_sym_BSLASH_GT,
      anon_sym_GT_GT,
  [1753] = 3,
    ACTIONS(520), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(117), 1,
      aux_sym_passthrough_repeat3,
    ACTIONS(522), 3,
      aux_sym_passthrough_token2,
      anon_sym_BSLASH_DOLLAR2,
      anon_sym_BSLASH_DOLLAR_DOLLAR2,
  [1765] = 3,
    ACTIONS(520), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(121), 1,
      aux_sym_passthrough_repeat2,
    ACTIONS(524), 3,
      aux_sym_passthrough_token1,
      anon_sym_BSLASH_PLUS2,
      anon_sym_BSLASH_PLUS_PLUS_PLUS2,
  [1777] = 3,
    ACTIONS(529), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(121), 1,
      aux_sym_passthrough_repeat2,
    ACTIONS(526), 3,
      aux_sym_passthrough_token1,
      anon_sym_BSLASH_PLUS2,
      anon_sym_BSLASH_PLUS_PLUS_PLUS2,
  [1789] = 1,
    ACTIONS(215), 4,
      aux_sym_inline_macro_token2,
      anon_sym_BSLASH_RBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [1796] = 3,
    ACTIONS(531), 1,
      anon_sym_BQUOTE,
    STATE(158), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(533), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [1807] = 3,
    ACTIONS(538), 1,
      anon_sym_POUND_POUND,
    STATE(124), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(535), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [1818] = 3,
    ACTIONS(540), 1,
      anon_sym_DOT,
    STATE(128), 1,
      aux_sym_link_url_repeat1,
    ACTIONS(120), 2,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
  [1829] = 3,
    ACTIONS(542), 1,
      anon_sym_BQUOTE,
    STATE(132), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(544), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [1840] = 3,
    ACTIONS(548), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(162), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(546), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [1851] = 3,
    ACTIONS(550), 1,
      anon_sym_DOT,
    STATE(128), 1,
      aux_sym_link_url_repeat1,
    ACTIONS(124), 2,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
  [1862] = 3,
    ACTIONS(555), 1,
      anon_sym_POUND_POUND,
    STATE(173), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(553), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [1873] = 3,
    ACTIONS(538), 1,
      anon_sym_POUND,
    STATE(130), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(557), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [1884] = 2,
    STATE(119), 1,
      aux_sym_passthrough_repeat3,
    ACTIONS(560), 3,
      aux_sym_passthrough_token2,
      anon_sym_BSLASH_DOLLAR2,
      anon_sym_BSLASH_DOLLAR_DOLLAR2,
  [1893] = 3,
    ACTIONS(562), 1,
      anon_sym_BQUOTE,
    STATE(132), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(564), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [1904] = 3,
    ACTIONS(520), 1,
      anon_sym_PLUS,
    STATE(140), 1,
      aux_sym_passthrough_repeat1,
    ACTIONS(567), 2,
      aux_sym_passthrough_token1,
      anon_sym_BSLASH_PLUS2,
  [1915] = 3,
    ACTIONS(540), 1,
      anon_sym_DOT,
    STATE(125), 1,
      aux_sym_link_url_repeat1,
    ACTIONS(112), 2,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
  [1926] = 1,
    ACTIONS(215), 4,
      aux_sym_inline_macro_token1,
      anon_sym_BSLASH_LBRACK,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [1933] = 2,
    STATE(120), 1,
      aux_sym_passthrough_repeat2,
    ACTIONS(569), 3,
      aux_sym_passthrough_token1,
      anon_sym_BSLASH_PLUS2,
      anon_sym_BSLASH_PLUS_PLUS_PLUS2,
  [1942] = 3,
    ACTIONS(542), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(151), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(571), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [1953] = 2,
    STATE(113), 1,
      aux_sym_xref_repeat1,
    ACTIONS(492), 3,
      aux_sym_xref_token1,
      anon_sym_BSLASH_COMMA,
      anon_sym_BSLASH_GT,
  [1962] = 3,
    ACTIONS(576), 1,
      anon_sym_GT_GT,
    STATE(139), 1,
      aux_sym_xref_repeat2,
    ACTIONS(573), 2,
      anon_sym_BSLASH_GT,
      aux_sym_xref_token2,
  [1973] = 3,
    ACTIONS(578), 1,
      anon_sym_PLUS,
    STATE(140), 1,
      aux_sym_passthrough_repeat1,
    ACTIONS(580), 2,
      aux_sym_passthrough_token1,
      anon_sym_BSLASH_PLUS2,
  [1984] = 3,
    ACTIONS(583), 1,
      anon_sym_BQUOTE,
    STATE(164), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(585), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [1995] = 3,
    ACTIONS(587), 1,
      anon_sym_POUND,
    STATE(165), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(589), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [2006] = 3,
    ACTIONS(583), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(163), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(591), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [2017] = 3,
    ACTIONS(548), 1,
      anon_sym_BQUOTE,
    STATE(148), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(593), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [2028] = 3,
    ACTIONS(595), 1,
      anon_sym_POUND,
    STATE(157), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(597), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [2039] = 3,
    ACTIONS(595), 1,
      anon_sym_POUND_POUND,
    STATE(156), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(599), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [2050] = 3,
    ACTIONS(587), 1,
      anon_sym_POUND_POUND,
    STATE(166), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(601), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [2061] = 3,
    ACTIONS(603), 1,
      anon_sym_BQUOTE,
    STATE(132), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(544), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [2072] = 3,
    ACTIONS(605), 1,
      anon_sym_POUND,
    STATE(130), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(607), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [2083] = 1,
    ACTIONS(609), 4,
      aux_sym_inline_macro_token1,
      anon_sym_BSLASH_LBRACK,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [2090] = 3,
    ACTIONS(562), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(151), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(611), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [2101] = 3,
    ACTIONS(531), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(159), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(614), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [2112] = 3,
    ACTIONS(616), 1,
      anon_sym_POUND,
    STATE(160), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(618), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [2123] = 3,
    ACTIONS(616), 1,
      anon_sym_POUND_POUND,
    STATE(161), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(620), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [2134] = 3,
    ACTIONS(624), 1,
      anon_sym_GT_GT,
    STATE(139), 1,
      aux_sym_xref_repeat2,
    ACTIONS(622), 2,
      anon_sym_BSLASH_GT,
      aux_sym_xref_token2,
  [2145] = 3,
    ACTIONS(628), 1,
      anon_sym_POUND_POUND,
    STATE(124), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(626), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [2156] = 3,
    ACTIONS(628), 1,
      anon_sym_POUND,
    STATE(130), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(607), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [2167] = 3,
    ACTIONS(630), 1,
      anon_sym_BQUOTE,
    STATE(132), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(544), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [2178] = 3,
    ACTIONS(630), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(151), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(571), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [2189] = 3,
    ACTIONS(632), 1,
      anon_sym_POUND,
    STATE(130), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(607), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [2200] = 3,
    ACTIONS(632), 1,
      anon_sym_POUND_POUND,
    STATE(124), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(626), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [2211] = 3,
    ACTIONS(603), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(151), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(571), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [2222] = 3,
    ACTIONS(634), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(151), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(571), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [2233] = 3,
    ACTIONS(634), 1,
      anon_sym_BQUOTE,
    STATE(132), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(544), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [2244] = 3,
    ACTIONS(636), 1,
      anon_sym_POUND,
    STATE(130), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(607), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [2255] = 3,
    ACTIONS(636), 1,
      anon_sym_POUND_POUND,
    STATE(124), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(626), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [2266] = 3,
    ACTIONS(638), 1,
      anon_sym_BQUOTE,
    STATE(175), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(640), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [2277] = 3,
    ACTIONS(638), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(176), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(642), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [2288] = 3,
    ACTIONS(644), 1,
      anon_sym_POUND,
    STATE(177), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(646), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [2299] = 3,
    ACTIONS(644), 1,
      anon_sym_POUND_POUND,
    STATE(178), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(648), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [2310] = 3,
    ACTIONS(650), 1,
      anon_sym_BQUOTE,
    STATE(126), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(652), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [2321] = 3,
    ACTIONS(650), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(137), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(654), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [2332] = 3,
    ACTIONS(605), 1,
      anon_sym_POUND_POUND,
    STATE(124), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(626), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [2343] = 3,
    ACTIONS(555), 1,
      anon_sym_POUND,
    STATE(149), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(656), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [2354] = 3,
    ACTIONS(658), 1,
      anon_sym_BQUOTE,
    STATE(132), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(544), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [2365] = 3,
    ACTIONS(658), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(151), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(571), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE2,
  [2376] = 3,
    ACTIONS(660), 1,
      anon_sym_POUND,
    STATE(130), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(607), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [2387] = 3,
    ACTIONS(660), 1,
      anon_sym_POUND_POUND,
    STATE(124), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(626), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND2,
  [2398] = 1,
    ACTIONS(662), 3,
      anon_sym_BSLASH_GT,
      aux_sym_xref_token2,
      anon_sym_GT_GT,
  [2404] = 2,
    STATE(155), 1,
      aux_sym_xref_repeat2,
    ACTIONS(622), 2,
      anon_sym_BSLASH_GT,
      aux_sym_xref_token2,
  [2412] = 1,
    ACTIONS(124), 3,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_DOT,
  [2418] = 2,
    ACTIONS(664), 1,
      anon_sym_LBRACK,
    ACTIONS(666), 1,
      anon_sym_DQUOTE,
  [2425] = 2,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
    ACTIONS(670), 1,
      anon_sym_DQUOTE,
  [2432] = 2,
    ACTIONS(672), 1,
      anon_sym_COMMA,
    ACTIONS(674), 1,
      anon_sym_RBRACK_RBRACK,
  [2439] = 1,
    ACTIONS(676), 1,
      ts_builtin_sym_end,
  [2443] = 1,
    ACTIONS(678), 1,
      sym__link_component,
  [2447] = 1,
    ACTIONS(680), 1,
      aux_sym_anchor_token1,
  [2451] = 1,
    ACTIONS(682), 1,
      anon_sym_RBRACE,
  [2455] = 1,
    ACTIONS(684), 1,
      anon_sym_RBRACK,
  [2459] = 1,
    ACTIONS(686), 1,
      anon_sym_DQUOTE,
  [2463] = 1,
    ACTIONS(688), 1,
      sym__link_component,
  [2467] = 1,
    ACTIONS(690), 1,
      sym__link_component,
  [2471] = 1,
    ACTIONS(692), 1,
      sym__link_component,
  [2475] = 1,
    ACTIONS(694), 1,
      anon_sym_DQUOTE,
  [2479] = 1,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
  [2483] = 1,
    ACTIONS(698), 1,
      anon_sym_RBRACE,
  [2487] = 1,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
  [2491] = 1,
    ACTIONS(702), 1,
      sym__link_component,
  [2495] = 1,
    ACTIONS(704), 1,
      anon_sym_COLON,
  [2499] = 1,
    ACTIONS(706), 1,
      anon_sym_COLON_SLASH_SLASH,
  [2503] = 1,
    ACTIONS(708), 1,
      anon_sym_RBRACK_RBRACK,
  [2507] = 1,
    ACTIONS(710), 1,
      anon_sym_RBRACK,
  [2511] = 1,
    ACTIONS(712), 1,
      anon_sym_DQUOTE,
  [2515] = 1,
    ACTIONS(714), 1,
      anon_sym_RBRACK,
  [2519] = 1,
    ACTIONS(716), 1,
      anon_sym_DQUOTE,
  [2523] = 1,
    ACTIONS(718), 1,
      aux_sym_anchor_token2,
  [2527] = 1,
    ACTIONS(720), 1,
      aux_sym_replacement_token1,
  [2531] = 1,
    ACTIONS(722), 1,
      anon_sym_COLON_SLASH_SLASH,
  [2535] = 1,
    ACTIONS(724), 1,
      aux_sym_replacement_token1,
  [2539] = 1,
    ACTIONS(726), 1,
      sym__link_component,
  [2543] = 1,
    ACTIONS(728), 1,
      anon_sym_RBRACK,
  [2547] = 1,
    ACTIONS(730), 1,
      anon_sym_COLON_SLASH_SLASH,
  [2551] = 1,
    ACTIONS(732), 1,
      aux_sym_replacement_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(36)] = 0,
  [SMALL_STATE(37)] = 32,
  [SMALL_STATE(38)] = 64,
  [SMALL_STATE(39)] = 96,
  [SMALL_STATE(40)] = 128,
  [SMALL_STATE(41)] = 160,
  [SMALL_STATE(42)] = 181,
  [SMALL_STATE(43)] = 202,
  [SMALL_STATE(44)] = 223,
  [SMALL_STATE(45)] = 255,
  [SMALL_STATE(46)] = 287,
  [SMALL_STATE(47)] = 319,
  [SMALL_STATE(48)] = 351,
  [SMALL_STATE(49)] = 383,
  [SMALL_STATE(50)] = 415,
  [SMALL_STATE(51)] = 447,
  [SMALL_STATE(52)] = 479,
  [SMALL_STATE(53)] = 511,
  [SMALL_STATE(54)] = 543,
  [SMALL_STATE(55)] = 575,
  [SMALL_STATE(56)] = 607,
  [SMALL_STATE(57)] = 639,
  [SMALL_STATE(58)] = 671,
  [SMALL_STATE(59)] = 703,
  [SMALL_STATE(60)] = 735,
  [SMALL_STATE(61)] = 767,
  [SMALL_STATE(62)] = 799,
  [SMALL_STATE(63)] = 831,
  [SMALL_STATE(64)] = 863,
  [SMALL_STATE(65)] = 895,
  [SMALL_STATE(66)] = 927,
  [SMALL_STATE(67)] = 943,
  [SMALL_STATE(68)] = 975,
  [SMALL_STATE(69)] = 1007,
  [SMALL_STATE(70)] = 1039,
  [SMALL_STATE(71)] = 1071,
  [SMALL_STATE(72)] = 1103,
  [SMALL_STATE(73)] = 1135,
  [SMALL_STATE(74)] = 1152,
  [SMALL_STATE(75)] = 1166,
  [SMALL_STATE(76)] = 1180,
  [SMALL_STATE(77)] = 1194,
  [SMALL_STATE(78)] = 1208,
  [SMALL_STATE(79)] = 1222,
  [SMALL_STATE(80)] = 1236,
  [SMALL_STATE(81)] = 1250,
  [SMALL_STATE(82)] = 1262,
  [SMALL_STATE(83)] = 1274,
  [SMALL_STATE(84)] = 1286,
  [SMALL_STATE(85)] = 1298,
  [SMALL_STATE(86)] = 1310,
  [SMALL_STATE(87)] = 1322,
  [SMALL_STATE(88)] = 1334,
  [SMALL_STATE(89)] = 1346,
  [SMALL_STATE(90)] = 1358,
  [SMALL_STATE(91)] = 1370,
  [SMALL_STATE(92)] = 1382,
  [SMALL_STATE(93)] = 1394,
  [SMALL_STATE(94)] = 1406,
  [SMALL_STATE(95)] = 1418,
  [SMALL_STATE(96)] = 1430,
  [SMALL_STATE(97)] = 1442,
  [SMALL_STATE(98)] = 1454,
  [SMALL_STATE(99)] = 1466,
  [SMALL_STATE(100)] = 1478,
  [SMALL_STATE(101)] = 1490,
  [SMALL_STATE(102)] = 1502,
  [SMALL_STATE(103)] = 1514,
  [SMALL_STATE(104)] = 1526,
  [SMALL_STATE(105)] = 1538,
  [SMALL_STATE(106)] = 1556,
  [SMALL_STATE(107)] = 1574,
  [SMALL_STATE(108)] = 1592,
  [SMALL_STATE(109)] = 1606,
  [SMALL_STATE(110)] = 1624,
  [SMALL_STATE(111)] = 1641,
  [SMALL_STATE(112)] = 1656,
  [SMALL_STATE(113)] = 1673,
  [SMALL_STATE(114)] = 1688,
  [SMALL_STATE(115)] = 1705,
  [SMALL_STATE(116)] = 1720,
  [SMALL_STATE(117)] = 1733,
  [SMALL_STATE(118)] = 1745,
  [SMALL_STATE(119)] = 1753,
  [SMALL_STATE(120)] = 1765,
  [SMALL_STATE(121)] = 1777,
  [SMALL_STATE(122)] = 1789,
  [SMALL_STATE(123)] = 1796,
  [SMALL_STATE(124)] = 1807,
  [SMALL_STATE(125)] = 1818,
  [SMALL_STATE(126)] = 1829,
  [SMALL_STATE(127)] = 1840,
  [SMALL_STATE(128)] = 1851,
  [SMALL_STATE(129)] = 1862,
  [SMALL_STATE(130)] = 1873,
  [SMALL_STATE(131)] = 1884,
  [SMALL_STATE(132)] = 1893,
  [SMALL_STATE(133)] = 1904,
  [SMALL_STATE(134)] = 1915,
  [SMALL_STATE(135)] = 1926,
  [SMALL_STATE(136)] = 1933,
  [SMALL_STATE(137)] = 1942,
  [SMALL_STATE(138)] = 1953,
  [SMALL_STATE(139)] = 1962,
  [SMALL_STATE(140)] = 1973,
  [SMALL_STATE(141)] = 1984,
  [SMALL_STATE(142)] = 1995,
  [SMALL_STATE(143)] = 2006,
  [SMALL_STATE(144)] = 2017,
  [SMALL_STATE(145)] = 2028,
  [SMALL_STATE(146)] = 2039,
  [SMALL_STATE(147)] = 2050,
  [SMALL_STATE(148)] = 2061,
  [SMALL_STATE(149)] = 2072,
  [SMALL_STATE(150)] = 2083,
  [SMALL_STATE(151)] = 2090,
  [SMALL_STATE(152)] = 2101,
  [SMALL_STATE(153)] = 2112,
  [SMALL_STATE(154)] = 2123,
  [SMALL_STATE(155)] = 2134,
  [SMALL_STATE(156)] = 2145,
  [SMALL_STATE(157)] = 2156,
  [SMALL_STATE(158)] = 2167,
  [SMALL_STATE(159)] = 2178,
  [SMALL_STATE(160)] = 2189,
  [SMALL_STATE(161)] = 2200,
  [SMALL_STATE(162)] = 2211,
  [SMALL_STATE(163)] = 2222,
  [SMALL_STATE(164)] = 2233,
  [SMALL_STATE(165)] = 2244,
  [SMALL_STATE(166)] = 2255,
  [SMALL_STATE(167)] = 2266,
  [SMALL_STATE(168)] = 2277,
  [SMALL_STATE(169)] = 2288,
  [SMALL_STATE(170)] = 2299,
  [SMALL_STATE(171)] = 2310,
  [SMALL_STATE(172)] = 2321,
  [SMALL_STATE(173)] = 2332,
  [SMALL_STATE(174)] = 2343,
  [SMALL_STATE(175)] = 2354,
  [SMALL_STATE(176)] = 2365,
  [SMALL_STATE(177)] = 2376,
  [SMALL_STATE(178)] = 2387,
  [SMALL_STATE(179)] = 2398,
  [SMALL_STATE(180)] = 2404,
  [SMALL_STATE(181)] = 2412,
  [SMALL_STATE(182)] = 2418,
  [SMALL_STATE(183)] = 2425,
  [SMALL_STATE(184)] = 2432,
  [SMALL_STATE(185)] = 2439,
  [SMALL_STATE(186)] = 2443,
  [SMALL_STATE(187)] = 2447,
  [SMALL_STATE(188)] = 2451,
  [SMALL_STATE(189)] = 2455,
  [SMALL_STATE(190)] = 2459,
  [SMALL_STATE(191)] = 2463,
  [SMALL_STATE(192)] = 2467,
  [SMALL_STATE(193)] = 2471,
  [SMALL_STATE(194)] = 2475,
  [SMALL_STATE(195)] = 2479,
  [SMALL_STATE(196)] = 2483,
  [SMALL_STATE(197)] = 2487,
  [SMALL_STATE(198)] = 2491,
  [SMALL_STATE(199)] = 2495,
  [SMALL_STATE(200)] = 2499,
  [SMALL_STATE(201)] = 2503,
  [SMALL_STATE(202)] = 2507,
  [SMALL_STATE(203)] = 2511,
  [SMALL_STATE(204)] = 2515,
  [SMALL_STATE(205)] = 2519,
  [SMALL_STATE(206)] = 2523,
  [SMALL_STATE(207)] = 2527,
  [SMALL_STATE(208)] = 2531,
  [SMALL_STATE(209)] = 2535,
  [SMALL_STATE(210)] = 2539,
  [SMALL_STATE(211)] = 2543,
  [SMALL_STATE(212)] = 2547,
  [SMALL_STATE(213)] = 2551,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__punctuation, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__punctuation, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_url, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_url, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_url, 4, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_url, 4, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_link_url_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_macro, 6, 0, 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_macro, 6, 0, 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 3, 0, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 3, 0, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_link, 6, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auto_link, 6, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monospace, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_monospace, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 5, 0, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 5, 0, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anchor, 5, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anchor, 5, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_link, 5, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auto_link, 5, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_highlight, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_highlight, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_macro, 5, 0, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_macro, 5, 0, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anchor, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anchor, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_macro, 5, 0, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_macro, 5, 0, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_link, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auto_link, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_link, 4, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auto_link, 4, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_ch, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_ch, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_highlight, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_highlight, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monospace, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_monospace, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_macro, 4, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_macro, 4, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ltalic, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ltalic, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ltalic, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ltalic, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emphasis, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emphasis, 3, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_link, 3, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auto_link, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emphasis, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emphasis, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0), SHIFT_REPEAT(78),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0), SHIFT_REPEAT(213),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0), SHIFT_REPEAT(108),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_macro_repeat2, 2, 0, 0), SHIFT_REPEAT(212),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_link_url_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_macro_repeat2, 1, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_link_label_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_link_label_repeat1, 2, 0, 0),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_link_label_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_macro_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_macro_repeat1, 2, 0, 0),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_macro_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_label, 1, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xref_repeat1, 2, 0, 0),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xref_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_passthrough_repeat3, 2, 0, 0),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_passthrough_repeat3, 2, 0, 0), SHIFT_REPEAT(117),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xref_repeat1, 1, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_passthrough_repeat2, 2, 0, 0), SHIFT_REPEAT(121),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_passthrough_repeat2, 2, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_highlight_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_link_url_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_highlight_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_monospace_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xref_repeat2, 2, 0, 0), SHIFT_REPEAT(179),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xref_repeat2, 2, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_passthrough_repeat1, 2, 0, 0),
  [580] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_passthrough_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_macro_repeat1, 1, 0, 0),
  [611] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_monospace_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xref_repeat2, 1, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [676] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
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
void *tree_sitter_loongdoc_inline_external_scanner_create(void);
void tree_sitter_loongdoc_inline_external_scanner_destroy(void *);
bool tree_sitter_loongdoc_inline_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_loongdoc_inline_external_scanner_serialize(void *, char *);
void tree_sitter_loongdoc_inline_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_loongdoc_inline(void) {
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
      tree_sitter_loongdoc_inline_external_scanner_create,
      tree_sitter_loongdoc_inline_external_scanner_destroy,
      tree_sitter_loongdoc_inline_external_scanner_scan,
      tree_sitter_loongdoc_inline_external_scanner_serialize,
      tree_sitter_loongdoc_inline_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
