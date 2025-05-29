/**
 * @file Tree-sitter parser for Vim's quickfix list.
 * @author MD. Mouinul Hossain <mdmouinulhossainshawon@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "qf",

  extras: _ => [ / /, /\t/ ],

  rules: {
    quickfix_list: $ => repeat(
      choice($.quickfix_item, prec(-2, /\n+/))
    ),

    quickfix_item: $ => seq(
      $.filename,
      "|",
      $.range,
      "|",
      $.code_block,
      optional(
        choice(/\n/, /\r/)
      )
    ),

    filename: $ => repeat1(
      choice(
        token("\\|"),
        token(prec(-1, /[^\|]/))
      )
    ),
    range: $ => seq(
      alias($.range_text, $.row),
      optional(
        seq(
          "col",
          alias($.range_text, $.col)
        )
      ),
      optional($.item_type)
    ),

    range_text: $ => choice(
      alias(/\d+/, $.value),
      seq(
        alias(/\d+/, $.from), "-",
        alias(/\d+/, $.to)
      )
    ),

    item_type: _ => /\w+/,

    code_block: $ => seq(
        optional($.language_delimiter),
        alias(/[^\n\r]*/, $.content),
    ),

    language_delimiter: $ => token(prec(2, seq(
      ">!",
      /[a-z_0-9]+/,
      "!<"
    )))
  }
});
