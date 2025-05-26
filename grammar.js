/**
 * @file Tree-sitter parser for Vim's quickfix list.
 * @author MD. Mouinul Hossain <mdmouinulhossainshawon@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "qf",

  extras: $ => [ / /, /\t/ ],

  rules: {
    quickfix_list: $ => repeat($.quickfix_item),

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
      alias(/[\d-]+/, $.row),
      optional(seq("col",
        alias(/[\d-]+/, $.col))),
      optional($.item_type)
    ),

    item_type: $ => /\w+/,

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
