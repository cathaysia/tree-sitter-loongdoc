const { anySep1, escaped_ch } = require('../../common/common');

exports.rules = {
  table_block: $ =>
    prec.left(
      seq(
        $.table_block_marker,
        repeat(choice($.table_cell, $.ntable_block)),
        $.table_block_marker,
      ),
    ),
  table_cell: $ =>
    seq(
      optional($.table_cell_attr),
      choice(
        seq(
          '|',
          token.immediate(/\r?\n/),
          anySep1(
            alias($._section_block, $.section_block),
            $.list_continuation,
          ),
        ),
        seq('|', alias(repeat1(escaped_ch('|')), $.table_cell_content)),
      ),
    ),

  ntable_block: $ =>
    prec.left(
      seq(
        optional($.element_attr),
        $.ntable_block_marker,
        repeat($.ntable_cell),
        $.ntable_block_marker,
      ),
    ),
  ntable_cell: $ =>
    seq(
      optional($.table_cell_attr),
      choice(
        seq(
          '!',
          token.immediate(/\r?\n/),
          alias($._section_block, $.section_block),
        ),
        seq('!', repeat1(escaped_ch('!'))),
      ),
    ),
};
