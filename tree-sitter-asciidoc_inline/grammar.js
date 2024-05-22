const PUNCTUATION_CHARACTERS_REGEX = '!-/:-@\\[-`\\{-~'
// prettier-ignore
const PUNCTUATION_CHARACTERS_ARRAY = [
    '!', '"', '#', '$', '%', '&', "'", '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<',
    '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~'
];

module.exports = grammar({
  name: 'asciidoc_inline',

  rules: {
    inline: $ =>
      repeat1(
        choice(
          $.replacement,
          $.word,
          $.inline_link_macro,
          $.inline_math_macro,
          $.punctuation,
        ),
      ),
    replacement: $ => seq('{', /\w+/, '}'),
    word: $ => choice($._word_no_digit, $._digits),
    _word_no_digit: $ =>
      new RegExp(
        '[^' +
          PUNCTUATION_CHARACTERS_REGEX +
          ' \\t\\n\\r0-9]+(_+[^' +
          PUNCTUATION_CHARACTERS_REGEX +
          ' \\t\\n\\r0-9]+)*',
      ),
    _digits: $ => /[0-9][0-9_]*/,
    punctuation: _ => choice(...PUNCTUATION_CHARACTERS_ARRAY),
    inline_link_macro: $ =>
      seq(choice('link', 'mailto'), ':', /[^\s\[]+\[[^\]]*\]/),
    inline_math_macro: $ =>
      seq(choice('stem', 'latexmath', 'asciimath'), ':', '[', /[^\]]*/, ']'),
  },
})
