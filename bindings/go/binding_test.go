package tree_sitter_qf_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_qf "github.com/oxy2dev/tree-sitter-qf.git/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_qf.Language())
	if language == nil {
		t.Errorf("Error loading Quickfix grammar")
	}
}
