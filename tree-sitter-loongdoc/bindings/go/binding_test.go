package tree_sitter_loongdoc_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-loongdoc"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_loongdoc.Language())
	if language == nil {
		t.Errorf("Error loading loongdoc grammar")
	}
}
