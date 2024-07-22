package tree_sitter_gcode_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-gcode"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_gcode.Language())
	if language == nil {
		t.Errorf("Error loading Gcode grammar")
	}
}
