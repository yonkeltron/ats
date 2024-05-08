package tree_sitter_Adaptive_Thaumaturgical_Syntax_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-Adaptive_Thaumaturgical_Syntax"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_Adaptive_Thaumaturgical_Syntax.Language())
	if language == nil {
		t.Errorf("Error loading AdaptiveThaumaturgicalSyntax grammar")
	}
}
