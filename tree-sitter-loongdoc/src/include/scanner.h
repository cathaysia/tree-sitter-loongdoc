#pragma once
#include "base_types.h"
#include "quick_buffer.h"

typedef enum BlockKind {
    BLOCK_KIND_DELIMITED,
    BLOCK_KIND_TITLE,
    BLOCK_KIND_ATTR,
    BLOCK_KIND_TABLE,
    BLOCK_KIND_LISTING
} BlockKind;

typedef struct Node {
    BlockKind kind;
    usize counter;
    struct Node *next;
} Node;

typedef struct Scanner {
    bool is_matching_raw_block;
    usize counter;
    Node *top;
} Scanner;

static Result node_serialize(Node const *self, QuickBuffer *qb);
static Result node_deserialize(Node *self, QuickBuffer *qb);

static inline void scanner_init(Scanner *self);
static inline void scanner_free(Scanner *self);

static bool scanner_is_expect_block_start(Scanner const *self);
static inline bool scanner_is_matching(Scanner const *self, BlockKind kind, usize counter);
static Result scanner_serialize(Scanner const *self, QuickBuffer *qb);
static Result scanner_deserialize(Scanner *self, QuickBuffer *qb);
static bool scanner_assert_top(Scanner *scanner, BlockKind kind, usize counter);
static inline bool scanner_pop_kind(Scanner *self, BlockKind kind, usize counter);
static void scanner_pop(Scanner *self);
static void scanner_push(Scanner *scanner, BlockKind kind, usize counter);