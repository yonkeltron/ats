#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

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
  sym_source_file = 12,
  sym_call = 13,
  sym__arg_list = 14,
  sym__literal = 15,
  sym_string_literal = 16,
  sym__numeric_literal = 17,
  sym__manna_ref = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym__arg_list_repeat1 = 20,
  aux_sym_string_literal_repeat1 = 21,
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
  [sym_source_file] = "source_file",
  [sym_call] = "call",
  [sym__arg_list] = "_arg_list",
  [sym__literal] = "_literal",
  [sym_string_literal] = "string_literal",
  [sym__numeric_literal] = "_numeric_literal",
  [sym__manna_ref] = "_manna_ref",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__arg_list_repeat1] = "_arg_list_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
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
  [sym_source_file] = sym_source_file,
  [sym_call] = sym_call,
  [sym__arg_list] = sym__arg_list,
  [sym__literal] = sym__literal,
  [sym_string_literal] = sym_string_literal,
  [sym__numeric_literal] = sym__numeric_literal,
  [sym__manna_ref] = sym__manna_ref,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__arg_list_repeat1] = aux_sym__arg_list_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
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
};

enum ts_field_identifiers {
  field_args = 1,
  field_instruction = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_instruction] = "instruction",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_args, 1},
    {field_instruction, 0},
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
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == ']') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == ']') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'M') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'M') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(12);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_zint_literal);
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_neg_manna);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_pos_manna);
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 1:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 2:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_instruction);
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
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym_call] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_instruction] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_RBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 2,
      sym_zint_literal,
      sym_float_literal,
    ACTIONS(5), 3,
      sym_identifier,
      sym_neg_manna,
      sym_pos_manna,
    STATE(7), 4,
      sym__literal,
      sym_string_literal,
      sym__numeric_literal,
      sym__manna_ref,
  [22] = 4,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 2,
      sym_zint_literal,
      sym_float_literal,
    ACTIONS(13), 3,
      sym_identifier,
      sym_neg_manna,
      sym_pos_manna,
    STATE(17), 4,
      sym__literal,
      sym_string_literal,
      sym__numeric_literal,
      sym__manna_ref,
  [41] = 3,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_instruction,
    STATE(4), 2,
      sym_call,
      aux_sym_source_file_repeat1,
  [52] = 3,
    ACTIONS(3), 1,
      sym_instruction,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(4), 2,
      sym_call,
      aux_sym_source_file_repeat1,
  [63] = 3,
    ACTIONS(24), 1,
      anon_sym_DQUOTE,
    ACTIONS(26), 1,
      aux_sym_string_literal_token1,
    STATE(9), 1,
      aux_sym_string_literal_repeat1,
  [73] = 3,
    ACTIONS(28), 1,
      anon_sym_SPACE,
    ACTIONS(30), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym__arg_list_repeat1,
  [83] = 3,
    ACTIONS(28), 1,
      anon_sym_SPACE,
    ACTIONS(32), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym__arg_list_repeat1,
  [93] = 3,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    ACTIONS(36), 1,
      aux_sym_string_literal_token1,
    STATE(11), 1,
      aux_sym_string_literal_repeat1,
  [103] = 3,
    ACTIONS(38), 1,
      anon_sym_SPACE,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym__arg_list_repeat1,
  [113] = 3,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      aux_sym_string_literal_token1,
    STATE(11), 1,
      aux_sym_string_literal_repeat1,
  [123] = 2,
    ACTIONS(48), 1,
      anon_sym_LBRACK,
    STATE(14), 1,
      sym__arg_list,
  [130] = 1,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      sym_instruction,
  [135] = 1,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      sym_instruction,
  [140] = 1,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      sym_instruction,
  [145] = 2,
    ACTIONS(56), 1,
      anon_sym_SPACE,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
  [152] = 2,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    ACTIONS(60), 1,
      anon_sym_SPACE,
  [159] = 1,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      sym_instruction,
  [164] = 2,
    ACTIONS(64), 1,
      anon_sym_SPACE,
    ACTIONS(66), 1,
      anon_sym_RBRACK,
  [171] = 1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 41,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 63,
  [SMALL_STATE(7)] = 73,
  [SMALL_STATE(8)] = 83,
  [SMALL_STATE(9)] = 93,
  [SMALL_STATE(10)] = 103,
  [SMALL_STATE(11)] = 113,
  [SMALL_STATE(12)] = 123,
  [SMALL_STATE(13)] = 130,
  [SMALL_STATE(14)] = 135,
  [SMALL_STATE(15)] = 140,
  [SMALL_STATE(16)] = 145,
  [SMALL_STATE(17)] = 152,
  [SMALL_STATE(18)] = 159,
  [SMALL_STATE(19)] = 164,
  [SMALL_STATE(20)] = 171,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__arg_list_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__arg_list_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg_list, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, 0, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg_list, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__arg_list_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg_list, 4, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
