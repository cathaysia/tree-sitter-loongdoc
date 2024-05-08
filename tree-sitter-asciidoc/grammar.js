module.exports = grammar({
  name: 'asciidoc',

  extras: _ => [],
  externals: $ => [
    $._eof,
    $.title_h1_marker,
    $.title_h2_marker,
    $.title_h3_marker,
    $.title_h4_marker,
    $.title_h5_marker,
  ],

  rules: {
    document: $ => choice($.title1, $.title2, $.title3, $.title4, $.title5),
    title1: $ => seq($.title_h1_marker, /[^\n]+/, optional('\n')),
    title2: $ => seq($.title_h2_marker, /[^\n]+/, optional('\n')),
    title3: $ => seq($.title_h3_marker, /[^\n]+/, optional('\n')),
    title4: $ => seq($.title_h4_marker, /[^\n]+/, optional('\n')),
    title5: $ => seq($.title_h5_marker, /[^\n]+/, optional('\n')),
  },
})
