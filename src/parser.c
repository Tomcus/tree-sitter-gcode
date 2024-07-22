#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym_gcode_letter = 2,
  sym_gcode_number = 3,
  sym_arg_letter = 4,
  sym__arg_numeric = 5,
  aux_sym__arg_string_token1 = 6,
  aux_sym__arg_string_token2 = 7,
  sym_source_file = 8,
  sym__definition = 9,
  sym_command = 10,
  sym_gcode = 11,
  sym_arg = 12,
  sym_arg_value = 13,
  sym__arg_string = 14,
  aux_sym_source_file_repeat1 = 15,
  aux_sym_command_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_gcode_letter] = "gcode_letter",
  [sym_gcode_number] = "gcode_number",
  [sym_arg_letter] = "arg_letter",
  [sym__arg_numeric] = "_arg_numeric",
  [aux_sym__arg_string_token1] = "_arg_string_token1",
  [aux_sym__arg_string_token2] = "_arg_string_token2",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_command] = "command",
  [sym_gcode] = "gcode",
  [sym_arg] = "arg",
  [sym_arg_value] = "arg_value",
  [sym__arg_string] = "_arg_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_gcode_letter] = sym_gcode_letter,
  [sym_gcode_number] = sym_gcode_number,
  [sym_arg_letter] = sym_arg_letter,
  [sym__arg_numeric] = sym__arg_numeric,
  [aux_sym__arg_string_token1] = aux_sym__arg_string_token1,
  [aux_sym__arg_string_token2] = aux_sym__arg_string_token2,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_command] = sym_command,
  [sym_gcode] = sym_gcode,
  [sym_arg] = sym_arg,
  [sym_arg_value] = sym_arg_value,
  [sym__arg_string] = sym__arg_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_gcode_letter] = {
    .visible = true,
    .named = true,
  },
  [sym_gcode_number] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_letter] = {
    .visible = true,
    .named = true,
  },
  [sym__arg_numeric] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__arg_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__arg_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_gcode] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_value] = {
    .visible = true,
    .named = true,
  },
  [sym__arg_string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      ADVANCE_MAP(
        '"', 7,
        '-', 5,
        '.', 13,
        ';', 1,
        'G', 10,
        'M', 10,
        'P', 10,
        'T', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '-') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 4:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(2);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_gcode_letter);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_gcode_number);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_gcode_number);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_gcode_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_arg_letter);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__arg_numeric);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__arg_numeric);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(25);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__arg_numeric);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__arg_numeric);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(25);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__arg_string_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__arg_string_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__arg_string_token2);
      if (lookahead == '"') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__arg_string_token2);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__arg_string_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__arg_string_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__arg_string_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(25);
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
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_gcode_letter] = ACTIONS(1),
    [sym_gcode_number] = ACTIONS(1),
    [sym_arg_letter] = ACTIONS(1),
    [sym__arg_numeric] = ACTIONS(1),
    [aux_sym__arg_string_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(12),
    [sym__definition] = STATE(2),
    [sym_command] = STATE(2),
    [sym_gcode] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_gcode_letter] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      sym_gcode_letter,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_comment,
    STATE(4), 1,
      sym_gcode,
    STATE(3), 3,
      sym__definition,
      sym_command,
      aux_sym_source_file_repeat1,
  [18] = 5,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(18), 1,
      sym_gcode_letter,
    STATE(4), 1,
      sym_gcode,
    STATE(3), 3,
      sym__definition,
      sym_command,
      aux_sym_source_file_repeat1,
  [36] = 3,
    ACTIONS(23), 1,
      sym_arg_letter,
    STATE(5), 2,
      sym_arg,
      aux_sym_command_repeat1,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_gcode_letter,
  [49] = 3,
    ACTIONS(23), 1,
      sym_arg_letter,
    STATE(6), 2,
      sym_arg,
      aux_sym_command_repeat1,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_gcode_letter,
  [62] = 3,
    ACTIONS(29), 1,
      sym_arg_letter,
    STATE(6), 2,
      sym_arg,
      aux_sym_command_repeat1,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_gcode_letter,
  [75] = 3,
    STATE(9), 1,
      sym__arg_string,
    STATE(10), 1,
      sym_arg_value,
    ACTIONS(32), 3,
      sym__arg_numeric,
      aux_sym__arg_string_token1,
      aux_sym__arg_string_token2,
  [87] = 2,
    ACTIONS(36), 1,
      sym_arg_letter,
    ACTIONS(34), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_gcode_letter,
  [96] = 2,
    ACTIONS(40), 1,
      sym_arg_letter,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_gcode_letter,
  [105] = 2,
    ACTIONS(44), 1,
      sym_arg_letter,
    ACTIONS(42), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_gcode_letter,
  [114] = 1,
    ACTIONS(46), 1,
      sym_gcode_number,
  [118] = 1,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 49,
  [SMALL_STATE(6)] = 62,
  [SMALL_STATE(7)] = 75,
  [SMALL_STATE(8)] = 87,
  [SMALL_STATE(9)] = 96,
  [SMALL_STATE(10)] = 105,
  [SMALL_STATE(11)] = 114,
  [SMALL_STATE(12)] = 118,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gcode, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gcode, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_value, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_value, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [48] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_gcode(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
