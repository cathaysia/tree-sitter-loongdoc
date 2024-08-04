const { anySep1, commaSep, escaped_ch } = require('../common/common.js')
const autolink = require('./common/autolink.js')

const PUNCTUATION_CHARACTERS_REGEX = '!-/:-@\\[-`\\{-~'
// prettier-ignore
const PUNCTUATION_CHARACTERS_ARRAY = [
  '!', '"', '#', '$', '%', '&', "'", '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<',
  '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~'
];

module.exports = grammar({
  name: 'loongdoc_inline',
  externals: $ => [$._eof],
  precedences: $ => [
    [$.autolink, $._punctuation],
    [$.passthrough, $._punctuation],
  ],

  rules: {
    inline: $ =>
      repeat1(
        choice(
          $.replacement,
          $._word,
          $.autolink,
          $.passthrough,
          $.inline_passthrough,
          $._punctuation,
          $.xref,
          $.emphasis,
          $.ltalic,
          $.monospace,
          $.highlight,
          $.inline_macro,
          $.stem_macro,
          $.footnote,
          $.index_term,
          $.index_term2,
          $.id_assignment,
        ),
      ),
    ...autolink.rules,
    id_assignment: $ =>
      choice(
        seq('[#', repeat(escaped_ch(']')), ']'),
        seq('[[', repeat(escaped_ch(']')), ']]'),
      ),
    inline_macro: $ =>
      seq(
        choice(
          'kbd',
          'btn',
          'image',
          'audio',
          'video',
          'icon',
          'link',
          'mailto',
          'menu',
          'anchor',
          'xref',
          'ifdef',
          'ifndef',
          'ifeval',
          'endif',
          'indexterm2',
          'indexterm',
          // diagram
          'a2s',
          'barcode',
          'blockdiag',
          'bpmn',
          'bytefield',
          'd2',
          'dbml',
          'diagrams',
          'ditaa',
          'dpic',
          'erd',
          'gnuplot',
          'graphviz',
          'graphviz',
          'lilypond',
          'meme',
          'mermaid',
          'msc',
          'nomnoml',
          'pikchr',
          'plantuml',
          'shaape',
          'smcat',
          'structurizr',
          'svgbob',
          'symbolator',
          'syntrax',
          'tikz',
          'umlet',
          'vega',
          'wavedrom',
        ),
        token.immediate(':'),
        alias(
          repeat(
            escaped_ch('[', false, $.replacement, $.escaped_ch, $.passthrough),
          ),
          $.target,
        ),
        '[',
        alias(
          repeat(
            escaped_ch(
              ']',
              false,
              $.replacement,
              $.autolink,
              $.escaped_ch,
              prec.left(-1, '"'),
            ),
          ),
          $.attr,
        ),
        ']',
      ),
    footnote: $ =>
      seq(
        choice('footnote', 'footnoteref'),
        token.immediate(':'),

        alias(
          repeat(escaped_ch('[', false, $.replacement, $.escaped_ch)),
          $.target,
        ),
        '[',
        alias(
          repeat(
            escaped_ch(']', false, $.replacement, $.autolink, $.escaped_ch),
          ),
          $.attr,
        ),
        ']',
      ),
    stem_macro: $ =>
      seq(
        choice('latexmath', 'stem', 'asciimath'),
        token.immediate(':'),
        alias(
          repeat(escaped_ch('[', false, $.replacement, $.escaped_ch)),
          $.target,
        ),
        '[',
        alias(/[^\]]*/, $.attr),
        ']',
      ),
    inline_passthrough: $ =>
      seq(
        'pass',
        token.immediate(':'),
        alias(
          repeat(escaped_ch('[', false, $.replacement, $.escaped_ch)),
          $.target,
        ),
        '[',
        alias(/[^\]]*/, $.attr),
        ']',
      ),
    replacement: $ =>
      seq(
        '{',
        alias(token(repeat1(escaped_ch('}'))), $.intrinsic_attributes),
        '}',
      ),
    _word: $ => choice($._word_no_digit, $._digits, $.escaped_ch),
    _word_no_digit: $ =>
      new RegExp(
        '[^' +
          PUNCTUATION_CHARACTERS_REGEX +
          ' \\t\\n\\r0-9]+(_+[^' +
          PUNCTUATION_CHARACTERS_REGEX +
          ' \\t\\n\\r0-9]+)*',
      ),
    _digits: $ => /[0-9][0-9_]*/,
    escaped_ch: $ => {
      let args = [
        '+++',
        '``',
        '**',
        '$$',
        '##',
        '__',
        '<<',
        '[[',
        '++',
        'kbd',
        'btn',
        'image',
        'audio',
        'video',
        'icon',
        'pass',
        'link',
        'mailto',
        'menu',
        'stem',
        'latexmath',
        'asciimath',
        'footnote',
        'footnoteref',
        'anchor',
        'xref',
        'ifdef',
        'ifndef',
        'ifeval',
        'endif',
      ].map(sequence => {
        return token('\\' + sequence)
      })

      return choice(...args, /\\./)
    },
    _punctuation: _ => choice(...PUNCTUATION_CHARACTERS_ARRAY),
    passthrough: $ =>
      choice(
        create_text_formatting('+'),
        seq('$$', repeat1(escaped_ch('$', true, '\\$$')), '$$'),
      ),
    xref: $ =>
      seq(
        '<<',
        alias(repeat1(escaped_ch(',>')), $.id),
        optional(seq(',', alias(repeat1(escaped_ch('>')), $.reftext))),
        '>>',
      ),

    emphasis: $ =>
      create_text_formatting('*', $.ltalic, $.monospace, $.highlight),
    ltalic: $ =>
      create_text_formatting('_', $.emphasis, $.monospace, $.highlight),
    monospace: $ => create_text_formatting('`'),
    highlight: $ => create_text_formatting('#'),

    index_term2: $ => seq('((', $.term, optional(seq(',', $.term)), '))'),
    index_term: $ =>
      seq(
        '(((',
        $.term,
        optional(seq(',', $.term)),
        optional(seq(',', $.term)),
        ')))',
      ),
    term: $ => repeat1(escaped_ch(',)')),
  },
})

function create_text_formatting(ch, ...args) {
  return choice(
    seq(token(prec(1, ch)), repeat(escaped_ch(ch, true, ...args)), ch),
    seq(
      token(prec(1, ch + ch)),
      repeat(escaped_ch(ch, true, ...args)),
      ch + ch,
    ),
  )
}
