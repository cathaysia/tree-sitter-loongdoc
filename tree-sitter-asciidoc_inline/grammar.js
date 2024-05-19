module.exports = grammar({
  name: 'asciidoc_inline',

  rules: {
    inline: $ => choice($.replacement),
    replacement: $ => seq('{', /\w+/, '}'),
  },
})
