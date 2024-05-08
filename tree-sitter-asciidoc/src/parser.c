#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
    aux_sym_title1_token1 = 1,
    anon_sym_LF = 2,
    sym__eof = 3,
    sym_title_h1_marker = 4,
    sym_title_h2_marker = 5,
    sym_title_h3_marker = 6,
    sym_title_h4_marker = 7,
    sym_title_h5_marker = 8,
    sym_document = 9,
    sym_title1 = 10,
    sym_title2 = 11,
    sym_title3 = 12,
    sym_title4 = 13,
    sym_title5 = 14,
};

static const char *const ts_symbol_names[] = {
    [ts_builtin_sym_end] = "end",
    [aux_sym_title1_token1] = "title1_token1",
    [anon_sym_LF] = "\n",
    [sym__eof] = "_eof",
    [sym_title_h1_marker] = "title_h1_marker",
    [sym_title_h2_marker] = "title_h2_marker",
    [sym_title_h3_marker] = "title_h3_marker",
    [sym_title_h4_marker] = "title_h4_marker",
    [sym_title_h5_marker] = "title_h5_marker",
    [sym_document] = "document",
    [sym_title1] = "title1",
    [sym_title2] = "title2",
    [sym_title3] = "title3",
    [sym_title4] = "title4",
    [sym_title5] = "title5",
};

static const TSSymbol ts_symbol_map[] = {
    [ts_builtin_sym_end] = ts_builtin_sym_end,
    [aux_sym_title1_token1] = aux_sym_title1_token1,
    [anon_sym_LF] = anon_sym_LF,
    [sym__eof] = sym__eof,
    [sym_title_h1_marker] = sym_title_h1_marker,
    [sym_title_h2_marker] = sym_title_h2_marker,
    [sym_title_h3_marker] = sym_title_h3_marker,
    [sym_title_h4_marker] = sym_title_h4_marker,
    [sym_title_h5_marker] = sym_title_h5_marker,
    [sym_document] = sym_document,
    [sym_title1] = sym_title1,
    [sym_title2] = sym_title2,
    [sym_title3] = sym_title3,
    [sym_title4] = sym_title4,
    [sym_title5] = sym_title5,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
    [ts_builtin_sym_end] = {
        .visible = false,
        .named = true,
    },
    [aux_sym_title1_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_LF] = {
        .visible = true,
        .named = false,
    },
    [sym__eof] = {
        .visible = false,
        .named = true,
    },
    [sym_title_h1_marker] = {
        .visible = true,
        .named = true,
    },
    [sym_title_h2_marker] = {
        .visible = true,
        .named = true,
    },
    [sym_title_h3_marker] = {
        .visible = true,
        .named = true,
    },
    [sym_title_h4_marker] = {
        .visible = true,
        .named = true,
    },
    [sym_title_h5_marker] = {
        .visible = true,
        .named = true,
    },
    [sym_document] = {
        .visible = true,
        .named = true,
    },
    [sym_title1] = {
        .visible = true,
        .named = true,
    },
    [sym_title2] = {
        .visible = true,
        .named = true,
    },
    [sym_title3] = {
        .visible = true,
        .named = true,
    },
    [sym_title4] = {
        .visible = true,
        .named = true,
    },
    [sym_title5] = {
        .visible = true,
        .named = true,
    },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
    [0] = { 0 },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(1);
            if(lookahead == '\n')
                ADVANCE(3);
            if(lookahead != 0)
                ADVANCE(2);
            END_STATE();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 2:
            ACCEPT_TOKEN(aux_sym_title1_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(2);
            END_STATE();
        case 3:
            ACCEPT_TOKEN(anon_sym_LF);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 0, .external_lex_state = 2 },
    [2] = { .lex_state = 0 },
    [3] = { .lex_state = 0 },
    [4] = { .lex_state = 0 },
    [5] = { .lex_state = 0 },
    [6] = { .lex_state = 0 },
    [7] = { .lex_state = 0 },
    [8] = { .lex_state = 0 },
    [9] = { .lex_state = 0 },
    [10] = { .lex_state = 0 },
    [11] = { .lex_state = 0 },
    [12] = { .lex_state = 0 },
    [13] = { .lex_state = 0 },
    [14] = { .lex_state = 0 },
    [15] = { .lex_state = 0 },
    [16] = { .lex_state = 0 },
    [17] = { .lex_state = 0 },
    [18] = { .lex_state = 0 },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [ts_builtin_sym_end] = ACTIONS(1),
        [aux_sym_title1_token1] = ACTIONS(1),
        [anon_sym_LF] = ACTIONS(1),
        [sym__eof] = ACTIONS(1),
        [sym_title_h1_marker] = ACTIONS(1),
        [sym_title_h2_marker] = ACTIONS(1),
        [sym_title_h3_marker] = ACTIONS(1),
        [sym_title_h4_marker] = ACTIONS(1),
        [sym_title_h5_marker] = ACTIONS(1),
    },
    [1] = {
        [sym_document] = STATE(12),
        [sym_title1] = STATE(13),
        [sym_title2] = STATE(13),
        [sym_title3] = STATE(13),
        [sym_title4] = STATE(13),
        [sym_title5] = STATE(13),
        [sym_title_h1_marker] = ACTIONS(3),
        [sym_title_h2_marker] = ACTIONS(5),
        [sym_title_h3_marker] = ACTIONS(7),
        [sym_title_h4_marker] = ACTIONS(9),
        [sym_title_h5_marker] = ACTIONS(11),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 2,
    ACTIONS(13),
    1,
    ts_builtin_sym_end,
    ACTIONS(15),
    1,
    anon_sym_LF,
    [7] = 2,
    ACTIONS(17),
    1,
    ts_builtin_sym_end,
    ACTIONS(19),
    1,
    anon_sym_LF,
    [14] = 2,
    ACTIONS(21),
    1,
    ts_builtin_sym_end,
    ACTIONS(23),
    1,
    anon_sym_LF,
    [21] = 2,
    ACTIONS(25),
    1,
    ts_builtin_sym_end,
    ACTIONS(27),
    1,
    anon_sym_LF,
    [28] = 2,
    ACTIONS(29),
    1,
    ts_builtin_sym_end,
    ACTIONS(31),
    1,
    anon_sym_LF,
    [35] = 1,
    ACTIONS(33),
    1,
    aux_sym_title1_token1,
    [39] = 1,
    ACTIONS(35),
    1,
    aux_sym_title1_token1,
    [43] = 1,
    ACTIONS(37),
    1,
    aux_sym_title1_token1,
    [47] = 1,
    ACTIONS(39),
    1,
    aux_sym_title1_token1,
    [51] = 1,
    ACTIONS(41),
    1,
    aux_sym_title1_token1,
    [55] = 1,
    ACTIONS(43),
    1,
    ts_builtin_sym_end,
    [59] = 1,
    ACTIONS(45),
    1,
    ts_builtin_sym_end,
    [63] = 1,
    ACTIONS(47),
    1,
    ts_builtin_sym_end,
    [67] = 1,
    ACTIONS(49),
    1,
    ts_builtin_sym_end,
    [71] = 1,
    ACTIONS(51),
    1,
    ts_builtin_sym_end,
    [75] = 1,
    ACTIONS(53),
    1,
    ts_builtin_sym_end,
    [79] = 1,
    ACTIONS(55),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(2)] = 0,
    [SMALL_STATE(3)] = 7,
    [SMALL_STATE(4)] = 14,
    [SMALL_STATE(5)] = 21,
    [SMALL_STATE(6)] = 28,
    [SMALL_STATE(7)] = 35,
    [SMALL_STATE(8)] = 39,
    [SMALL_STATE(9)] = 43,
    [SMALL_STATE(10)] = 47,
    [SMALL_STATE(11)] = 51,
    [SMALL_STATE(12)] = 55,
    [SMALL_STATE(13)] = 59,
    [SMALL_STATE(14)] = 63,
    [SMALL_STATE(15)] = 67,
    [SMALL_STATE(16)] = 71,
    [SMALL_STATE(17)] = 75,
    [SMALL_STATE(18)] = 79,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [5] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [7] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [13] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_title1, 2, 0, 0),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [17] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_title2, 2, 0, 0),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [21] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_title3, 2, 0, 0),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [25] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_title4, 2, 0, 0),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [29] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_title5, 2, 0, 0),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(2),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(3),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [43] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [45] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_document, 1, 0, 0),
    [47] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_title1, 3, 0, 0),
    [49] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_title2, 3, 0, 0),
    [51] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_title3, 3, 0, 0),
    [53] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_title4, 3, 0, 0),
    [55] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_title5, 3, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
    ts_external_token__eof = 0,
    ts_external_token_title_h1_marker = 1,
    ts_external_token_title_h2_marker = 2,
    ts_external_token_title_h3_marker = 3,
    ts_external_token_title_h4_marker = 4,
    ts_external_token_title_h5_marker = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
    [ts_external_token__eof] = sym__eof,
    [ts_external_token_title_h1_marker] = sym_title_h1_marker,
    [ts_external_token_title_h2_marker] = sym_title_h2_marker,
    [ts_external_token_title_h3_marker] = sym_title_h3_marker,
    [ts_external_token_title_h4_marker] = sym_title_h4_marker,
    [ts_external_token_title_h5_marker] = sym_title_h5_marker,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
    [1] = {
        [ts_external_token__eof] = true,
        [ts_external_token_title_h1_marker] = true,
        [ts_external_token_title_h2_marker] = true,
        [ts_external_token_title_h3_marker] = true,
        [ts_external_token_title_h4_marker] = true,
        [ts_external_token_title_h5_marker] = true,
    },
    [2] = {
        [ts_external_token_title_h1_marker] = true,
        [ts_external_token_title_h2_marker] = true,
        [ts_external_token_title_h3_marker] = true,
        [ts_external_token_title_h4_marker] = true,
        [ts_external_token_title_h5_marker] = true,
    },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_asciidoc_external_scanner_create(void);
void tree_sitter_asciidoc_external_scanner_destroy(void *);
bool tree_sitter_asciidoc_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_asciidoc_external_scanner_serialize(void *, char *);
void tree_sitter_asciidoc_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_asciidoc(void) {
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
            tree_sitter_asciidoc_external_scanner_create,
            tree_sitter_asciidoc_external_scanner_destroy,
            tree_sitter_asciidoc_external_scanner_scan,
            tree_sitter_asciidoc_external_scanner_serialize,
            tree_sitter_asciidoc_external_scanner_deserialize,
        },
        .primary_state_ids = ts_primary_state_ids,
    };
    return &language;
}
#ifdef __cplusplus
}
#endif
