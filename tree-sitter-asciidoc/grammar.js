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
  ],

  rules: {
    document: $ => repeat($._title_block),
    _title_block: $ =>
      choice($.title0, $.title1, $.title2, $.title3, $.title4, $.title5),
    title0: $ => seq($.title_h0_marker, /[^\n]+/, $._block_end),
    title1: $ => seq($.title_h1_marker, /[^\n]+/, $._block_end),
    title2: $ => seq($.title_h2_marker, /[^\n]+/, $._block_end),
    title3: $ => seq($.title_h3_marker, /[^\n]+/, $._block_end),
    title4: $ => seq($.title_h4_marker, /[^\n]+/, $._block_end),
    title5: $ => seq($.title_h5_marker, /[^\n]+/, $._block_end),
    _block_end: $ => choice($._NEWLINE, $._eof),
    _NEWLINE: _ => /\r?\n/,
  },
})
