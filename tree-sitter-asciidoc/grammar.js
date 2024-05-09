module.exports = grammar({
  name: 'asciidoc',

  extras: $ => [$._NEWLINE, $.comment],
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
          $._section_block,
          $.breaks,
        ),
      ),

    _section_block: $ =>
      seq(
        repeat(choice($.element_attr, $.block_title)),
        choice($.unordered_list, $.ordered_list, $.checked_list),
      ),
    title0: $ =>
      seq(
        $.title_h0_marker,
        $._WHITE_SPACE,
        $.line,
        repeat($.document_attr),
        $._block_end,
      ),
    title1: $ => seq($.title_h1_marker, $._WHITE_SPACE, $.line),
    title2: $ => seq($.title_h2_marker, $._WHITE_SPACE, $.line),
    title3: $ => seq($.title_h3_marker, $._WHITE_SPACE, $.line),
    title4: $ => seq($.title_h4_marker, $._WHITE_SPACE, $.line),
    title5: $ => seq($.title_h5_marker, $._WHITE_SPACE, $.line),
    breaks: $ => seq($.breaks_marker, $._block_end),

    document_attr: $ =>
      seq(
        $.document_attr_marker,
        /[\w\d_][\w\d-]*/,
        ':',
        /[^\r\n]*/,
        $._block_end,
      ),
    element_attr: $ =>
      seq($.element_attr_marker, /[^\]\r\n]*/, ']', $._NEWLINE),
    block_title: $ => seq($.block_title_marker, $.line),

    checked_list: $ => seq(repeat1($.ck_item), $._block_end),
    ck_item: $ =>
      seq(
        $.unordered_list_marker,
        $._WHITE_SPACE,
        '[',
        choice(' ', 'x', '*'),
        ']',
        $._WHITE_SPACE,
        $.line,
      ),

    unordered_list: $ => seq(repeat1($.ul_item), $._block_end),
    ul_item: $ => seq($.unordered_list_marker, $._WHITE_SPACE, $.line),
    unordered_list_marker: $ =>
      choice($.list_marker_star, $.list_marker_hyphen),

    ordered_list: $ => seq(repeat1($.ol_item), $._block_end),
    ol_item: $ => seq($.ordered_list_marker, $._WHITE_SPACE, $.line),
    ordered_list_marker: $ =>
      choice(
        $.list_marker_digit,
        $.list_marker_geek,
        $.list_marker_alpha,
        $.list_marker_dot,
      ),

    line: $ => seq(/[^\n]+/, $._block_end),

    comment: $ => seq('//', /(\\+(.|\r?\n)|[^\\\n])*/),

    _block_end: $ => choice($._NEWLINE, $._eof),
    _NEWLINE: _ => /\r?\n/,
    _WHITE_SPACE: $ => /[ \t]+/,
  },
})
