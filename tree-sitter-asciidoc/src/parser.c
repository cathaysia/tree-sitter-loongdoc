#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
    aux_sym_title0_token1 = 1,
    sym__NEWLINE = 2,
    sym__eof = 3,
    sym_title_h0_marker = 4,
    sym_title_h1_marker = 5,
    sym_title_h2_marker = 6,
    sym_title_h3_marker = 7,
    sym_title_h4_marker = 8,
    sym_title_h5_marker = 9,
    sym_document = 10,
    sym__title_block = 11,
    sym_title0 = 12,
    sym_title1 = 13,
    sym_title2 = 14,
    sym_title3 = 15,
    sym_title4 = 16,
    sym_title5 = 17,
    sym__block_end = 18,
    aux_sym_document_repeat1 = 19,
};

static const char *const ts_symbol_names[] = {
    [ts_builtin_sym_end] = "end",
    [aux_sym_title0_token1] = "title0_token1",
    [sym__NEWLINE] = "_NEWLINE",
    [sym__eof] = "_eof",
    [sym_title_h0_marker] = "title_h0_marker",
    [sym_title_h1_marker] = "title_h1_marker",
    [sym_title_h2_marker] = "title_h2_marker",
    [sym_title_h3_marker] = "title_h3_marker",
    [sym_title_h4_marker] = "title_h4_marker",
    [sym_title_h5_marker] = "title_h5_marker",
    [sym_document] = "document",
    [sym__title_block] = "_title_block",
    [sym_title0] = "title0",
    [sym_title1] = "title1",
    [sym_title2] = "title2",
    [sym_title3] = "title3",
    [sym_title4] = "title4",
    [sym_title5] = "title5",
    [sym__block_end] = "_block_end",
    [aux_sym_document_repeat1] = "document_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
    [ts_builtin_sym_end] = ts_builtin_sym_end,
    [aux_sym_title0_token1] = aux_sym_title0_token1,
    [sym__NEWLINE] = sym__NEWLINE,
    [sym__eof] = sym__eof,
    [sym_title_h0_marker] = sym_title_h0_marker,
    [sym_title_h1_marker] = sym_title_h1_marker,
    [sym_title_h2_marker] = sym_title_h2_marker,
    [sym_title_h3_marker] = sym_title_h3_marker,
    [sym_title_h4_marker] = sym_title_h4_marker,
    [sym_title_h5_marker] = sym_title_h5_marker,
    [sym_document] = sym_document,
    [sym__title_block] = sym__title_block,
    [sym_title0] = sym_title0,
    [sym_title1] = sym_title1,
    [sym_title2] = sym_title2,
    [sym_title3] = sym_title3,
    [sym_title4] = sym_title4,
    [sym_title5] = sym_title5,
    [sym__block_end] = sym__block_end,
    [aux_sym_document_repeat1] = aux_sym_document_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
    [ts_builtin_sym_end] = {
        .visible = false,
        .named = true,
    },
    [aux_sym_title0_token1] = {
        .visible = false,
        .named = false,
    },
    [sym__NEWLINE] = {
        .visible = false,
        .named = true,
    },
    [sym__eof] = {
        .visible = false,
        .named = true,
    },
    [sym_title_h0_marker] = {
        .visible = true,
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
    [sym__title_block] = {
        .visible = false,
        .named = true,
    },
    [sym_title0] = {
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
    [sym__block_end] = {
        .visible = false,
        .named = true,
    },
    [aux_sym_document_repeat1] = {
        .visible = false,
        .named = false,
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
    [19] = 19,
    [20] = 20,
    [21] = 21,
    [22] = 22,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(1);
            if(lookahead == '\n')
                ADVANCE(4);
            if(lookahead == '\r')
                ADVANCE(2);
            if(lookahead != 0)
                ADVANCE(3);
            END_STATE();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 2:
            ACCEPT_TOKEN(aux_sym_title0_token1);
            if(lookahead == '\n')
                ADVANCE(4);
            if(lookahead != 0)
                ADVANCE(3);
            END_STATE();
        case 3:
            ACCEPT_TOKEN(aux_sym_title0_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(3);
            END_STATE();
        case 4:
            ACCEPT_TOKEN(sym__NEWLINE);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 0, .external_lex_state = 2 },
    [2] = { .lex_state = 0, .external_lex_state = 2 },
    [3] = { .lex_state = 0, .external_lex_state = 2 },
    [4] = { .lex_state = 0, .external_lex_state = 2 },
    [5] = { .lex_state = 0, .external_lex_state = 2 },
    [6] = { .lex_state = 0, .external_lex_state = 2 },
    [7] = { .lex_state = 0, .external_lex_state = 2 },
    [8] = { .lex_state = 0, .external_lex_state = 2 },
    [9] = { .lex_state = 0, .external_lex_state = 2 },
    [10] = { .lex_state = 0, .external_lex_state = 3 },
    [11] = { .lex_state = 0, .external_lex_state = 3 },
    [12] = { .lex_state = 0, .external_lex_state = 3 },
    [13] = { .lex_state = 0, .external_lex_state = 3 },
    [14] = { .lex_state = 0, .external_lex_state = 3 },
    [15] = { .lex_state = 0, .external_lex_state = 3 },
    [16] = { .lex_state = 0 },
    [17] = { .lex_state = 0 },
    [18] = { .lex_state = 0 },
    [19] = { .lex_state = 0 },
    [20] = { .lex_state = 0 },
    [21] = { .lex_state = 0 },
    [22] = { .lex_state = 0 },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [ts_builtin_sym_end] = ACTIONS(1),
        [aux_sym_title0_token1] = ACTIONS(1),
        [sym__NEWLINE] = ACTIONS(3),
        [sym__eof] = ACTIONS(1),
        [sym_title_h0_marker] = ACTIONS(1),
        [sym_title_h1_marker] = ACTIONS(1),
        [sym_title_h2_marker] = ACTIONS(1),
        [sym_title_h3_marker] = ACTIONS(1),
        [sym_title_h4_marker] = ACTIONS(1),
        [sym_title_h5_marker] = ACTIONS(1),
    },
    [1] = {
        [sym_document] = STATE(17),
        [sym__title_block] = STATE(3),
        [sym_title0] = STATE(3),
        [sym_title1] = STATE(3),
        [sym_title2] = STATE(3),
        [sym_title3] = STATE(3),
        [sym_title4] = STATE(3),
        [sym_title5] = STATE(3),
        [aux_sym_document_repeat1] = STATE(3),
        [ts_builtin_sym_end] = ACTIONS(5),
        [sym__NEWLINE] = ACTIONS(3),
        [sym_title_h0_marker] = ACTIONS(7),
        [sym_title_h1_marker] = ACTIONS(9),
        [sym_title_h2_marker] = ACTIONS(11),
        [sym_title_h3_marker] = ACTIONS(13),
        [sym_title_h4_marker] = ACTIONS(15),
        [sym_title_h5_marker] = ACTIONS(17),
    },
    [2] = {
        [sym__title_block] = STATE(2),
        [sym_title0] = STATE(2),
        [sym_title1] = STATE(2),
        [sym_title2] = STATE(2),
        [sym_title3] = STATE(2),
        [sym_title4] = STATE(2),
        [sym_title5] = STATE(2),
        [aux_sym_document_repeat1] = STATE(2),
        [ts_builtin_sym_end] = ACTIONS(19),
        [sym__NEWLINE] = ACTIONS(3),
        [sym_title_h0_marker] = ACTIONS(21),
        [sym_title_h1_marker] = ACTIONS(24),
        [sym_title_h2_marker] = ACTIONS(27),
        [sym_title_h3_marker] = ACTIONS(30),
        [sym_title_h4_marker] = ACTIONS(33),
        [sym_title_h5_marker] = ACTIONS(36),
    },
    [3] = {
        [sym__title_block] = STATE(2),
        [sym_title0] = STATE(2),
        [sym_title1] = STATE(2),
        [sym_title2] = STATE(2),
        [sym_title3] = STATE(2),
        [sym_title4] = STATE(2),
        [sym_title5] = STATE(2),
        [aux_sym_document_repeat1] = STATE(2),
        [ts_builtin_sym_end] = ACTIONS(39),
        [sym__NEWLINE] = ACTIONS(3),
        [sym_title_h0_marker] = ACTIONS(7),
        [sym_title_h1_marker] = ACTIONS(9),
        [sym_title_h2_marker] = ACTIONS(11),
        [sym_title_h3_marker] = ACTIONS(13),
        [sym_title_h4_marker] = ACTIONS(15),
        [sym_title_h5_marker] = ACTIONS(17),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 2,
    ACTIONS(3),
    1,
    sym__NEWLINE,
    ACTIONS(41),
    7,
    sym_title_h0_marker,
    sym_title_h1_marker,
    sym_title_h2_marker,
    sym_title_h3_marker,
    sym_title_h4_marker,
    sym_title_h5_marker,
    ts_builtin_sym_end,
    [13] = 2,
    ACTIONS(3),
    1,
    sym__NEWLINE,
    ACTIONS(43),
    7,
    sym_title_h0_marker,
    sym_title_h1_marker,
    sym_title_h2_marker,
    sym_title_h3_marker,
    sym_title_h4_marker,
    sym_title_h5_marker,
    ts_builtin_sym_end,
    [26] = 2,
    ACTIONS(3),
    1,
    sym__NEWLINE,
    ACTIONS(45),
    7,
    sym_title_h0_marker,
    sym_title_h1_marker,
    sym_title_h2_marker,
    sym_title_h3_marker,
    sym_title_h4_marker,
    sym_title_h5_marker,
    ts_builtin_sym_end,
    [39] = 2,
    ACTIONS(3),
    1,
    sym__NEWLINE,
    ACTIONS(47),
    7,
    sym_title_h0_marker,
    sym_title_h1_marker,
    sym_title_h2_marker,
    sym_title_h3_marker,
    sym_title_h4_marker,
    sym_title_h5_marker,
    ts_builtin_sym_end,
    [52] = 2,
    ACTIONS(3),
    1,
    sym__NEWLINE,
    ACTIONS(49),
    7,
    sym_title_h0_marker,
    sym_title_h1_marker,
    sym_title_h2_marker,
    sym_title_h3_marker,
    sym_title_h4_marker,
    sym_title_h5_marker,
    ts_builtin_sym_end,
    [65] = 2,
    ACTIONS(3),
    1,
    sym__NEWLINE,
    ACTIONS(51),
    7,
    sym_title_h0_marker,
    sym_title_h1_marker,
    sym_title_h2_marker,
    sym_title_h3_marker,
    sym_title_h4_marker,
    sym_title_h5_marker,
    ts_builtin_sym_end,
    [78] = 2,
    STATE(4),
    1,
    sym__block_end,
    ACTIONS(53),
    2,
    sym__eof,
    sym__NEWLINE,
    [86] = 2,
    STATE(8),
    1,
    sym__block_end,
    ACTIONS(55),
    2,
    sym__eof,
    sym__NEWLINE,
    [94] = 2,
    STATE(7),
    1,
    sym__block_end,
    ACTIONS(57),
    2,
    sym__eof,
    sym__NEWLINE,
    [102] = 2,
    STATE(6),
    1,
    sym__block_end,
    ACTIONS(59),
    2,
    sym__eof,
    sym__NEWLINE,
    [110] = 2,
    STATE(5),
    1,
    sym__block_end,
    ACTIONS(61),
    2,
    sym__eof,
    sym__NEWLINE,
    [118] = 2,
    STATE(9),
    1,
    sym__block_end,
    ACTIONS(63),
    2,
    sym__eof,
    sym__NEWLINE,
    [126] = 2,
    ACTIONS(3),
    1,
    sym__NEWLINE,
    ACTIONS(65),
    1,
    aux_sym_title0_token1,
    [133] = 2,
    ACTIONS(3),
    1,
    sym__NEWLINE,
    ACTIONS(67),
    1,
    ts_builtin_sym_end,
    [140] = 2,
    ACTIONS(3),
    1,
    sym__NEWLINE,
    ACTIONS(69),
    1,
    aux_sym_title0_token1,
    [147] = 2,
    ACTIONS(3),
    1,
    sym__NEWLINE,
    ACTIONS(71),
    1,
    aux_sym_title0_token1,
    [154] = 2,
    ACTIONS(3),
    1,
    sym__NEWLINE,
    ACTIONS(73),
    1,
    aux_sym_title0_token1,
    [161] = 2,
    ACTIONS(3),
    1,
    sym__NEWLINE,
    ACTIONS(75),
    1,
    aux_sym_title0_token1,
    [168] = 2,
    ACTIONS(3),
    1,
    sym__NEWLINE,
    ACTIONS(77),
    1,
    aux_sym_title0_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(4)] = 0,
    [SMALL_STATE(5)] = 13,
    [SMALL_STATE(6)] = 26,
    [SMALL_STATE(7)] = 39,
    [SMALL_STATE(8)] = 52,
    [SMALL_STATE(9)] = 65,
    [SMALL_STATE(10)] = 78,
    [SMALL_STATE(11)] = 86,
    [SMALL_STATE(12)] = 94,
    [SMALL_STATE(13)] = 102,
    [SMALL_STATE(14)] = 110,
    [SMALL_STATE(15)] = 118,
    [SMALL_STATE(16)] = 126,
    [SMALL_STATE(17)] = 133,
    [SMALL_STATE(18)] = 140,
    [SMALL_STATE(19)] = 147,
    [SMALL_STATE(20)] = 154,
    [SMALL_STATE(21)] = 161,
    [SMALL_STATE(22)] = 168,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT_EXTRA(),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_document, 0, 0, 0),
    [7] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [19] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_document_repeat1, 2, 0, 0),
    [21] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_document_repeat1, 2, 0, 0),
    SHIFT_REPEAT(16),
    [24] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_document_repeat1, 2, 0, 0),
    SHIFT_REPEAT(22),
    [27] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_document_repeat1, 2, 0, 0),
    SHIFT_REPEAT(21),
    [30] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_document_repeat1, 2, 0, 0),
    SHIFT_REPEAT(20),
    [33] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_document_repeat1, 2, 0, 0),
    SHIFT_REPEAT(19),
    [36] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_document_repeat1, 2, 0, 0),
    SHIFT_REPEAT(18),
    [39] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_document, 1, 0, 0),
    [41] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_title5, 3, 0, 0),
    [43] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_title4, 3, 0, 0),
    [45] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_title3, 3, 0, 0),
    [47] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_title2, 3, 0, 0),
    [49] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_title1, 3, 0, 0),
    [51] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_title0, 3, 0, 0),
    [53] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [55] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [57] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [59] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [61] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [63] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [65] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(15),
    [67] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [69] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(10),
    [71] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(14),
    [73] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(13),
    [75] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(12),
    [77] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(11),
};

enum ts_external_scanner_symbol_identifiers {
    ts_external_token__eof = 0,
    ts_external_token_title_h0_marker = 1,
    ts_external_token_title_h1_marker = 2,
    ts_external_token_title_h2_marker = 3,
    ts_external_token_title_h3_marker = 4,
    ts_external_token_title_h4_marker = 5,
    ts_external_token_title_h5_marker = 6,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
    [ts_external_token__eof] = sym__eof,
    [ts_external_token_title_h0_marker] = sym_title_h0_marker,
    [ts_external_token_title_h1_marker] = sym_title_h1_marker,
    [ts_external_token_title_h2_marker] = sym_title_h2_marker,
    [ts_external_token_title_h3_marker] = sym_title_h3_marker,
    [ts_external_token_title_h4_marker] = sym_title_h4_marker,
    [ts_external_token_title_h5_marker] = sym_title_h5_marker,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
    [1] = {
        [ts_external_token__eof] = true,
        [ts_external_token_title_h0_marker] = true,
        [ts_external_token_title_h1_marker] = true,
        [ts_external_token_title_h2_marker] = true,
        [ts_external_token_title_h3_marker] = true,
        [ts_external_token_title_h4_marker] = true,
        [ts_external_token_title_h5_marker] = true,
    },
    [2] = {
        [ts_external_token_title_h0_marker] = true,
        [ts_external_token_title_h1_marker] = true,
        [ts_external_token_title_h2_marker] = true,
        [ts_external_token_title_h3_marker] = true,
        [ts_external_token_title_h4_marker] = true,
        [ts_external_token_title_h5_marker] = true,
    },
    [3] = {
        [ts_external_token__eof] = true,
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
