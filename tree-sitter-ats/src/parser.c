#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_instruction = 2,
  anon_sym_LBRACK = 3,
  anon_sym_SPACE = 4,
  anon_sym_RBRACK = 5,
  anon_sym_DQUOTE = 6,
  aux_sym_string_literal_token1 = 7,
  sym_zint_literal = 8,
  sym_float_literal = 9,
  sym_neg_manna = 10,
  sym_pos_manna = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_defspell = 14,
  anon_sym_SLASH = 15,
  anon_sym_LPAREN = 16,
  anon_sym_COMMA = 17,
  anon_sym_RPAREN = 18,
  anon_sym_COLON = 19,
  sym_type_name = 20,
  sym_source_file = 21,
  sym_call = 22,
  sym__arg_list = 23,
  sym__literal = 24,
  sym_string_literal = 25,
  sym__numeric_literal = 26,
  sym__manna_ref = 27,
  sym_spell_def = 28,
  sym__spell_def_head = 29,
  sym__spell_def_body = 30,
  sym_formal_args_list = 31,
  sym__formal_arg = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym__arg_list_repeat1 = 34,
  aux_sym_string_literal_repeat1 = 35,
  aux_sym__spell_def_body_repeat1 = 36,
  aux_sym_formal_args_list_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_instruction] = "instruction",
  [anon_sym_LBRACK] = "[",
  [anon_sym_SPACE] = " ",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_zint_literal] = "zint_literal",
  [sym_float_literal] = "float_literal",
  [sym_neg_manna] = "neg_manna",
  [sym_pos_manna] = "pos_manna",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_defspell] = "defspell",
  [anon_sym_SLASH] = "/",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [sym_type_name] = "type_name",
  [sym_source_file] = "source_file",
  [sym_call] = "call",
  [sym__arg_list] = "_arg_list",
  [sym__literal] = "_literal",
  [sym_string_literal] = "string_literal",
  [sym__numeric_literal] = "_numeric_literal",
  [sym__manna_ref] = "_manna_ref",
  [sym_spell_def] = "spell_def",
  [sym__spell_def_head] = "_spell_def_head",
  [sym__spell_def_body] = "_spell_def_body",
  [sym_formal_args_list] = "formal_args_list",
  [sym__formal_arg] = "_formal_arg",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__arg_list_repeat1] = "_arg_list_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym__spell_def_body_repeat1] = "_spell_def_body_repeat1",
  [aux_sym_formal_args_list_repeat1] = "formal_args_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_instruction] = sym_instruction,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_zint_literal] = sym_zint_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_neg_manna] = sym_neg_manna,
  [sym_pos_manna] = sym_pos_manna,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_defspell] = anon_sym_defspell,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_type_name] = sym_type_name,
  [sym_source_file] = sym_source_file,
  [sym_call] = sym_call,
  [sym__arg_list] = sym__arg_list,
  [sym__literal] = sym__literal,
  [sym_string_literal] = sym_string_literal,
  [sym__numeric_literal] = sym__numeric_literal,
  [sym__manna_ref] = sym__manna_ref,
  [sym_spell_def] = sym_spell_def,
  [sym__spell_def_head] = sym__spell_def_head,
  [sym__spell_def_body] = sym__spell_def_body,
  [sym_formal_args_list] = sym_formal_args_list,
  [sym__formal_arg] = sym__formal_arg,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__arg_list_repeat1] = aux_sym__arg_list_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym__spell_def_body_repeat1] = aux_sym__spell_def_body_repeat1,
  [aux_sym_formal_args_list_repeat1] = aux_sym_formal_args_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_zint_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_neg_manna] = {
    .visible = true,
    .named = true,
  },
  [sym_pos_manna] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defspell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym__arg_list] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__numeric_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__manna_ref] = {
    .visible = false,
    .named = true,
  },
  [sym_spell_def] = {
    .visible = true,
    .named = true,
  },
  [sym__spell_def_head] = {
    .visible = false,
    .named = true,
  },
  [sym__spell_def_body] = {
    .visible = false,
    .named = true,
  },
  [sym_formal_args_list] = {
    .visible = true,
    .named = true,
  },
  [sym__formal_arg] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__arg_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__spell_def_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_formal_args_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_args = 1,
  field_instruction = 2,
  field_instructions = 3,
  field_spell_body = 4,
  field_spell_formal_args_list = 5,
  field_spell_min_cost = 6,
  field_spell_name = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_instruction] = "instruction",
  [field_instructions] = "instructions",
  [field_spell_body] = "spell_body",
  [field_spell_formal_args_list] = "spell_formal_args_list",
  [field_spell_min_cost] = "spell_min_cost",
  [field_spell_name] = "spell_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 5},
  [4] = {.index = 8, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_instructions, 0},
  [1] =
    {field_args, 1},
    {field_instruction, 0},
  [3] =
    {field_instructions, 2, .inherited = true},
    {field_spell_body, 2},
    {field_spell_formal_args_list, 0, .inherited = true},
    {field_spell_min_cost, 0, .inherited = true},
    {field_spell_name, 0, .inherited = true},
  [8] =
    {field_spell_formal_args_list, 4},
    {field_spell_min_cost, 3},
    {field_spell_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 15,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 29,
  [45] = 28,
  [46] = 46,
  [47] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '"', 14,
        '(', 24,
        ')', 26,
        '+', 3,
        ',', 25,
        '-', 4,
        '/', 23,
        ':', 27,
        '[', 11,
        ']', 13,
        '{', 21,
        '}', 22,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(8);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == ']') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'M') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'M') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 6:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 7:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 8:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_zint_literal);
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_neg_manna);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_pos_manna);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_type_name);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'd') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 2:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'f') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 4:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_instruction);
      END_STATE();
    case 7:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_defspell);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_instruction] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_zint_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [sym_neg_manna] = ACTIONS(1),
    [sym_pos_manna] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_defspell] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_type_name] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(47),
    [sym_spell_def] = STATE(6),
    [sym__spell_def_head] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_defspell] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym__formal_arg,
    ACTIONS(9), 2,
      sym_zint_literal,
      sym_float_literal,
    ACTIONS(5), 3,
      sym_identifier,
      sym_neg_manna,
      sym_pos_manna,
    STATE(35), 4,
      sym__literal,
      sym_string_literal,
      sym__numeric_literal,
      sym__manna_ref,
  [25] = 5,
    ACTIONS(15), 1,
      anon_sym_RBRACK,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 2,
      sym_zint_literal,
      sym_float_literal,
    ACTIONS(13), 3,
      sym_identifier,
      sym_neg_manna,
      sym_pos_manna,
    STATE(20), 4,
      sym__literal,
      sym_string_literal,
      sym__numeric_literal,
      sym__manna_ref,
  [47] = 5,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      sym__formal_arg,
    ACTIONS(9), 2,
      sym_zint_literal,
      sym_float_literal,
    ACTIONS(5), 3,
      sym_identifier,
      sym_neg_manna,
      sym_pos_manna,
    STATE(35), 4,
      sym__literal,
      sym_string_literal,
      sym__numeric_literal,
      sym__manna_ref,
  [69] = 4,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 2,
      sym_zint_literal,
      sym_float_literal,
    ACTIONS(21), 3,
      sym_identifier,
      sym_neg_manna,
      sym_pos_manna,
    STATE(23), 4,
      sym__literal,
      sym_string_literal,
      sym__numeric_literal,
      sym__manna_ref,
  [88] = 4,
    ACTIONS(3), 1,
      anon_sym_defspell,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym__spell_def_head,
    STATE(7), 2,
      sym_spell_def,
      aux_sym_source_file_repeat1,
  [102] = 4,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_defspell,
    STATE(46), 1,
      sym__spell_def_head,
    STATE(7), 2,
      sym_spell_def,
      aux_sym_source_file_repeat1,
  [116] = 3,
    ACTIONS(32), 1,
      sym_instruction,
    STATE(36), 1,
      sym__spell_def_body,
    STATE(9), 2,
      sym_call,
      aux_sym__spell_def_body_repeat1,
  [127] = 3,
    ACTIONS(32), 1,
      sym_instruction,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(10), 2,
      sym_call,
      aux_sym__spell_def_body_repeat1,
  [138] = 3,
    ACTIONS(36), 1,
      sym_instruction,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(10), 2,
      sym_call,
      aux_sym__spell_def_body_repeat1,
  [149] = 3,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    STATE(11), 1,
      aux_sym_string_literal_repeat1,
  [159] = 3,
    ACTIONS(46), 1,
      anon_sym_SPACE,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__arg_list_repeat1,
  [169] = 3,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      aux_sym_formal_args_list_repeat1,
  [179] = 3,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    STATE(11), 1,
      aux_sym_string_literal_repeat1,
  [189] = 3,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      aux_sym_string_literal_token1,
    STATE(16), 1,
      aux_sym_string_literal_repeat1,
  [199] = 3,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      aux_sym_string_literal_repeat1,
  [209] = 3,
    ACTIONS(65), 1,
      anon_sym_SPACE,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__arg_list_repeat1,
  [219] = 3,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      aux_sym_formal_args_list_repeat1,
  [229] = 3,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      aux_sym_string_literal_token1,
    STATE(14), 1,
      aux_sym_string_literal_repeat1,
  [239] = 3,
    ACTIONS(65), 1,
      anon_sym_SPACE,
    ACTIONS(78), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym__arg_list_repeat1,
  [249] = 3,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      aux_sym_formal_args_list_repeat1,
  [259] = 1,
    ACTIONS(82), 2,
      sym_instruction,
      anon_sym_RBRACE,
  [264] = 2,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    ACTIONS(84), 1,
      anon_sym_SPACE,
  [271] = 1,
    ACTIONS(72), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [276] = 1,
    ACTIONS(86), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [281] = 1,
    ACTIONS(88), 2,
      sym_instruction,
      anon_sym_RBRACE,
  [286] = 1,
    ACTIONS(90), 2,
      sym_instruction,
      anon_sym_RBRACE,
  [291] = 2,
    ACTIONS(92), 1,
      anon_sym_SPACE,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
  [298] = 2,
    ACTIONS(96), 1,
      anon_sym_SPACE,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
  [305] = 1,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      anon_sym_defspell,
  [310] = 2,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym__arg_list,
  [317] = 1,
    ACTIONS(104), 2,
      sym_instruction,
      anon_sym_RBRACE,
  [322] = 2,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_formal_args_list,
  [329] = 1,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
  [333] = 1,
    ACTIONS(110), 1,
      anon_sym_COLON,
  [337] = 1,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
  [341] = 1,
    ACTIONS(114), 1,
      sym_type_name,
  [345] = 1,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
  [349] = 1,
    ACTIONS(118), 1,
      sym_zint_literal,
  [353] = 1,
    ACTIONS(120), 1,
      sym_identifier,
  [357] = 1,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
  [361] = 1,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
  [365] = 1,
    ACTIONS(126), 1,
      anon_sym_SLASH,
  [369] = 1,
    ACTIONS(96), 1,
      anon_sym_COLON,
  [373] = 1,
    ACTIONS(92), 1,
      anon_sym_COLON,
  [377] = 1,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
  [381] = 1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 102,
  [SMALL_STATE(8)] = 116,
  [SMALL_STATE(9)] = 127,
  [SMALL_STATE(10)] = 138,
  [SMALL_STATE(11)] = 149,
  [SMALL_STATE(12)] = 159,
  [SMALL_STATE(13)] = 169,
  [SMALL_STATE(14)] = 179,
  [SMALL_STATE(15)] = 189,
  [SMALL_STATE(16)] = 199,
  [SMALL_STATE(17)] = 209,
  [SMALL_STATE(18)] = 219,
  [SMALL_STATE(19)] = 229,
  [SMALL_STATE(20)] = 239,
  [SMALL_STATE(21)] = 249,
  [SMALL_STATE(22)] = 259,
  [SMALL_STATE(23)] = 264,
  [SMALL_STATE(24)] = 271,
  [SMALL_STATE(25)] = 276,
  [SMALL_STATE(26)] = 281,
  [SMALL_STATE(27)] = 286,
  [SMALL_STATE(28)] = 291,
  [SMALL_STATE(29)] = 298,
  [SMALL_STATE(30)] = 305,
  [SMALL_STATE(31)] = 310,
  [SMALL_STATE(32)] = 317,
  [SMALL_STATE(33)] = 322,
  [SMALL_STATE(34)] = 329,
  [SMALL_STATE(35)] = 333,
  [SMALL_STATE(36)] = 337,
  [SMALL_STATE(37)] = 341,
  [SMALL_STATE(38)] = 345,
  [SMALL_STATE(39)] = 349,
  [SMALL_STATE(40)] = 353,
  [SMALL_STATE(41)] = 357,
  [SMALL_STATE(42)] = 361,
  [SMALL_STATE(43)] = 365,
  [SMALL_STATE(44)] = 369,
  [SMALL_STATE(45)] = 373,
  [SMALL_STATE(46)] = 377,
  [SMALL_STATE(47)] = 381,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spell_def_body, 1, 0, 1),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__spell_def_body_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__spell_def_body_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__arg_list_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__arg_list_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_args_list_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_args_list_repeat1, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg_list, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__arg_list_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__formal_arg, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg_list, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg_list, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spell_def, 4, 0, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, 0, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_args_list, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spell_def_head, 5, 0, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_args_list, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_args_list, 4, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [130] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_Adaptive_Thaumaturgical_Syntax(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
