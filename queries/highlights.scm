[
 "|"
] @punctuation.delimiter

[
 " col "
] @keyword

[
 (row)
 (col)
] @number


(filename) @string.special.path
(text) @string


((item_type) @comment.error
  (#eq? @comment.error "error"))

((item_type) @comment.warning
  (#eq? @comment.warning "warning"))

((item_type) @comment.note
  (#eq? @comment.note "note"))
