const { commaSep, escaped_ch, anySep1 } = require('../common/common.js')

module.exports = grammar({
  name: 'asciidoc',

  extras: $ => [$._NEWLINE],
  externals: $ => [
    $._eof,
    $.title_h0_marker,
    $.title_h1_marker,
    $.title_h2_marker,
    $.title_h3_marker,
    $.title_h4_marker,
    $.title_h5_marker,
    $.list_marker_star,
    $.list_marker_hyphen,
    $.list_marker_dot,
    $.list_marker_digit,
    $.list_marker_geek,
    $.list_marker_alpha,
    $.document_attr_marker,
    $.element_attr_marker,
    $.block_title_marker,
    $.breaks_marker,
    $.table_block_marker,
    $.ntable_block_marker,
    $.delimited_block_marker,
    $.listing_block_marker,
    $.literal_block_marker,
    $.quoted_block_marker,
    $.quoted_block_md_marker,
    $.quoted_paragraph_marker,
    $.open_block_marker,
    $.passthrough_block_marker,
    $.block_macro_name,
    $.anno_marker,
    $.anno_list_marker,
    $.line_comment_marker,
    $.block_comment_marker,
    $.admonition_note,
    $.admonition_tip,
    $.admonition_important,
    $.admonition_caution,
    $.admonition_warning,
    $.ident_marker,
  ],

  precedences: $ => [[$.checked_list, $.unordered_list]],

  rules: {
    document: $ =>
      repeat(
        choice(
          $.title0,
          $.title1,
          $.title2,
          $.title3,
          $.title4,
          $.title5,
          $.section_block,
          $.line_comment,
          $.comment_block,
        ),
      ),

    section_block: $ => choice($._section_block_para, $._section_block),
    _section_block_para: $ =>
      seq(repeat(choice($.element_attr, $.block_title)), $.paragraph),
    _section_block: $ =>
      seq(
        repeat(choice($.element_attr, $.block_title)),
        choice(
          $.unordered_list,
          $.ordered_list,
          $.checked_list,
          $.table_block,
          $.delimited_block,
          $.listing_block,
          $.literal_block,
          $.ident_block,
          $.open_block,
          $.breaks,
          $.admonition,
          $.document_attr,
          $.quoted_block,
          $.quoted_md_block,
          $.passthrough_block,
          $.block_macro,
        ),
      ),
    title0: $ =>
      seq(
        $.title_h0_marker,
        $._WHITE_SPACE,
        $.line,
        optional(
          seq($.author_line, seq($._NEWLINE, optional($.revision_line))),
        ),
        repeat(choice($.document_attr, $.block_macro)),
        $._block_end,
      ),
    author_line: $ => anySep1($.author, seq(';', $._WHITE_SPACE)),
    author: $ =>
      seq(
        alias($._author_line_word, $.firstname),
        $._WHITE_SPACE,
        optional(seq(alias($._author_line_word, $.middlename), $._WHITE_SPACE)),
        alias($._author_line_word, $.lastname),
        optional(seq($._WHITE_SPACE, '<', $.email, '>')),
      ),
    _author_line_word: $ => repeat1(escaped_ch(' ;', true)),
    email: $ =>
      /(?:[a-z0-9!#$%&'*+/=?^_`{|}~-]+(?:\.[a-z0-9!#$%&'*+/=?^_`{|}~-]+)*|"(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21\x23-\x5b\x5d-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])*")@(?:(?:[a-z0-9](?:[a-z0-9-]*[a-z0-9])?\.)+[a-z0-9](?:[a-z0-9-]*[a-z0-9])?|\[(?:(?:(2(5[0-5]|[0-4][0-9])|1[0-9][0-9]|[1-9]?[0-9]))\.){3}(?:(2(5[0-5]|[0-4][0-9])|1[0-9][0-9]|[1-9]?[0-9])|[a-z0-9-]*[a-z0-9]:(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21-\x5a\x53-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])+)\])/,
    revision_line: $ =>
      seq(
        $.revnumber,
        ',',
        $._WHITE_SPACE,
        $.revdate,
        ':',
        $._WHITE_SPACE,
        $.revremark,
      ),
    revnumber: $ => repeat1(escaped_ch(',', true)),
    revdate: $ => repeat1(escaped_ch(':', true)),
    revremark: $ => repeat1(escaped_ch('', true)),

    title1: $ => seq($.title_h1_marker, $._WHITE_SPACE, $.line),
    title2: $ => seq($.title_h2_marker, $._WHITE_SPACE, $.line),
    title3: $ => seq($.title_h3_marker, $._WHITE_SPACE, $.line),
    title4: $ => seq($.title_h4_marker, $._WHITE_SPACE, $.line),
    title5: $ => seq($.title_h5_marker, $._WHITE_SPACE, $.line),
    breaks: $ => seq($.breaks_marker, $._block_end),

    admonition: $ =>
      seq(
        choice(
          $.admonition_note,
          $.admonition_tip,
          $.admonition_important,
          $.admonition_caution,
          $.admonition_warning,
        ),
        ':',
        token.immediate(' '),
        $.line,
      ),
    block_macro: $ =>
      seq(
        $.block_macro_name,
        '::',
        alias(repeat(escaped_ch('[')), $.target),
        '[',
        commaSep($.block_macro_attr),
        ']',
        $._block_end,
      ),
    block_macro_attr: $ =>
      seq(
        alias(repeat1(escaped_ch('=')), $.name),
        optional(seq('=', alias(repeat1(escaped_ch(']')), $.value))),
      ),

    document_attr: $ =>
      seq(
        $.document_attr_marker,
        alias(repeat1(escaped_ch(':', true)), $.attr_name),
        alias(':', $.document_attr_marker),
        optional(seq(token.immediate(' '), alias($.escaped_line, $.line))),
        $._block_end,
      ),
    escaped_line: $ =>
      repeat1(choice(/[^\/\n]/, /\/[^*]/, /\\\r?\n/, seq($.hard_wrap))),
    hard_wrap: $ => ' +',
    element_attr: $ =>
      seq(
        $.element_attr_marker,
        alias(token(repeat(escaped_ch(']', true))), $.attr_value),
        alias(']', $.element_attr_marker),
        $._NEWLINE,
      ),
    block_title: $ => seq($.block_title_marker, $.line),

    checked_list: $ => prec.left(repeat1($.ck_item)),
    ck_item: $ =>
      seq(
        $.unordered_list_marker,
        $._WHITE_SPACE,
        choice(
          alias(token(prec(1, /\[[*x]\]/)), $.task_list_marker_checked),
          alias(token(prec(1, '[ ]')), $.task_list_marker_unchecked),
        ),
        $._WHITE_SPACE,
        $.line,
      ),

    unordered_list: $ => prec.right(repeat1($.ul_item)),
    ul_item: $ => seq($.unordered_list_marker, $._WHITE_SPACE, $.line),
    unordered_list_marker: $ =>
      choice($.list_marker_star, $.list_marker_hyphen),

    ordered_list: $ => prec.right(repeat1($.ol_item)),
    ol_item: $ => seq($.ordered_list_marker, $._WHITE_SPACE, $.line),
    ordered_list_marker: $ =>
      choice(
        $.list_marker_digit,
        $.list_marker_geek,
        $.list_marker_alpha,
        $.list_marker_dot,
      ),

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
        token.immediate(prec(2, '|')),
        $.section_block,
      ),
    table_cell_attr: $ =>
      repeat1(
        choice(
          /\w/,
          '<',
          '>',
          '^',
          '.^',
          '~',
          '+',
          /\d+\+/,
          /\.\d+\+/,
          /\d+\.\d+\+/,
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
        token.immediate('!'),
        choice($._section_block, $.ntable_cell_content),
        optional($._NEWLINE),
      ),
    ntable_cell_content: $ => repeat1(escaped_ch('!')),

    delimited_block: $ =>
      prec.left(
        seq(
          $.delimited_block_marker,
          repeat($.section_block),
          $.delimited_block_marker,
        ),
      ),
    _inna_listing_block: $ =>
      seq(repeat(choice($.element_attr, $.block_title)), $.listing_block),
    _inna_list: $ =>
      seq(
        repeat(choice($.element_attr, $.block_title)),
        choice($.unordered_list, $.ordered_list, $.checked_list),
      ),
    open_block: $ =>
      seq($.open_block_marker, repeat($.line), $.open_block_marker),
    passthrough_block: $ =>
      seq(
        $.passthrough_block_marker,
        alias(repeat(seq(/[^\r\n]*/, $._NEWLINE)), $.listing_block_body),
        $.passthrough_block_marker,
      ),
    listing_block: $ =>
      seq(
        $.listing_block_marker,
        alias(
          repeat(
            choice(
              seq(repeat1(choice(/[^\r\n]/, $.anno_marker)), $._block_end),
              $.block_macro,
            ),
          ),
          $.listing_block_body,
        ),
        $.listing_block_marker,
        optional($.anno_list),
      ),
    literal_block: $ =>
      seq(
        $.literal_block_marker,
        alias(
          repeat(
            choice(
              seq(repeat1(choice(/[^\r\n]/, $.anno_marker)), $._block_end),
              $.block_macro,
            ),
          ),
          $.literal_block_body,
        ),
        $.literal_block_marker,
        optional($.anno_list),
      ),
    ident_block: $ =>
      prec.left(seq(repeat1($.ident_block_line), optional($.anno_list))),
    ident_block_line: $ =>
      seq(
        $.ident_marker,
        repeat1(choice(/[^\r\n]/, $.anno_marker)),
        $._block_end,
      ),

    anno_list: $ => repeat1($.anno_list_item),
    anno_list_item: $ => seq($.anno_list_marker, $._WHITE_SPACE, $.line),

    line: $ => seq(/[^\r\n]+/, $._block_end),
    paragraph: $ => prec(-1, seq(repeat1($.line), optional($.quoted_line))),
    quoted_line: $ =>
      seq($.quoted_paragraph_marker, token.immediate(' '), $.line),

    line_comment: $ =>
      seq($.line_comment_marker, optional(/[^\r\n]+/), $._block_end),
    comment_block: $ =>
      seq(
        $.block_comment_marker,
        alias(repeat(seq(/[^\r\n]+/, $._NEWLINE)), $.comment_block_body),
        $.block_comment_marker,
      ),

    quoted_block: $ =>
      choice(seq($.quoted_block_marker, repeat($.line), $.quoted_block_marker)),
    quoted_md_block: $ =>
      prec.right(
        repeat1(
          choice(
            seq($.quoted_block_md_marker, $._NEWLINE),
            seq($.quoted_block_md_marker, token.immediate(' '), $.line),
          ),
        ),
      ),

    _block_end: $ => choice($._NEWLINE, $._eof),
    _NEWLINE: _ => /\r?\n/,
    _WHITE_SPACE: $ => /[ \t]+/,
  },
})
