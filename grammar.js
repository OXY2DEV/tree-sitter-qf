/**
 * @file Tree-sitter parser for Vim's quickfix list.
 * @author MD. Mouinul Hossain <mdmouinulhossainshawon@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "qf",

  rules: {
    quickfix_list: $ => repeat($.quickfix_item),

    quickfix_item: $ => seq(
      $.filename,
      "|",
      $.range,
      "|",
      $.code_block,
      choice(/\n/, /\r/)
    ),

    filename: $ => /[^\|]+/,
    range: $ => seq(
      alias(/[\d-]+/, $.row),
      " col ",
      alias(/[\d-]+/, $.col),
      optional($.item_type)
    ),

    item_type: $ => /\w+/,

    code_block: $ => seq(
        optional($.filetype),
        alias(/[^\n\r]*/, $.content),
    ),

    filetype: _ => token(prec(20, seq(
      ">!",
      /[a-z_0-9]+/,
      "!<"
    )))
  }
});
