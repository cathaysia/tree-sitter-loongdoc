package tree_sitter_asciidoc_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-asciidoc"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_asciidoc.Language())
	if language == nil {
		t.Errorf("Error loading asciidoc grammar")
	}
}
