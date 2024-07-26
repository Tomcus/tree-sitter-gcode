#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_comment = 2,
  sym_gcode_letter = 3,
  sym_gcode_number = 4,
  sym_arg_letter = 5,
  sym__arg_numeric = 6,
  aux_sym__arg_string_token1 = 7,
  aux_sym__arg_string_token2 = 8,
  sym_source_file = 9,
  sym__definition = 10,
  sym_command = 11,
  sym_gcode = 12,
  sym_arg = 13,
  sym_arg_value = 14,
  sym__arg_string = 15,
  aux_sym_source_file_repeat1 = 16,
  aux_sym_command_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
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
  [anon_sym_LF] = anon_sym_LF,
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
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
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '"', 3,
        '-', 4,
        '0', 13,
        ';', 9,
        'G', 10,
        'M', 10,
        'P', 10,
        'T', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ';') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(17);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == ';') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '0') ADVANCE(11);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == 'G' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          lookahead == 'T') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_gcode_letter);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_gcode_number);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_gcode_number);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_gcode_number);
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_gcode_number);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_gcode_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_arg_letter);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_arg_letter);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(27);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__arg_numeric);
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__arg_numeric);
      if (lookahead == '.') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(27);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__arg_numeric);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__arg_numeric);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(27);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__arg_string_token1);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__arg_string_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__arg_string_token2);
      if (lookahead == '"') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(3);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__arg_string_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__arg_string_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__arg_string_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(27);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
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
    [sym_source_file] = STATE(16),
    [sym__definition] = STATE(3),
    [sym_command] = STATE(13),
    [sym_gcode] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_gcode_letter] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym__arg_string,
    STATE(12), 1,
      sym_arg_value,
    ACTIONS(11), 2,
      sym_comment,
      sym_arg_letter,
    ACTIONS(13), 3,
      sym__arg_numeric,
      aux_sym__arg_string_token1,
      aux_sym__arg_string_token2,
  [19] = 6,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_gcode_letter,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_gcode,
    STATE(13), 1,
      sym_command,
    STATE(4), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
  [39] = 6,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(22), 1,
      sym_gcode_letter,
    STATE(5), 1,
      sym_gcode,
    STATE(13), 1,
      sym_command,
    STATE(4), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
  [59] = 4,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_arg_letter,
    STATE(6), 2,
      sym_arg,
      aux_sym_command_repeat1,
  [73] = 4,
    ACTIONS(29), 1,
      sym_arg_letter,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(33), 1,
      sym_comment,
    STATE(7), 2,
      sym_arg,
      aux_sym_command_repeat1,
  [87] = 4,
    ACTIONS(35), 1,
      anon_sym_LF,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_arg_letter,
    STATE(7), 2,
      sym_arg,
      aux_sym_command_repeat1,
  [101] = 1,
    ACTIONS(42), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_gcode_letter,
  [107] = 2,
    ACTIONS(44), 1,
      anon_sym_LF,
    ACTIONS(46), 2,
      sym_comment,
      sym_arg_letter,
  [115] = 1,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_gcode_letter,
  [121] = 2,
    ACTIONS(50), 1,
      anon_sym_LF,
    ACTIONS(52), 2,
      sym_comment,
      sym_arg_letter,
  [129] = 2,
    ACTIONS(54), 1,
      anon_sym_LF,
    ACTIONS(56), 2,
      sym_comment,
      sym_arg_letter,
  [137] = 2,
    ACTIONS(58), 1,
      anon_sym_LF,
    ACTIONS(60), 1,
      sym_comment,
  [144] = 1,
    ACTIONS(58), 1,
      anon_sym_LF,
  [148] = 1,
    ACTIONS(62), 1,
      sym_gcode_number,
  [152] = 1,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
  [156] = 1,
    ACTIONS(66), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 39,
  [SMALL_STATE(5)] = 59,
  [SMALL_STATE(6)] = 73,
  [SMALL_STATE(7)] = 87,
  [SMALL_STATE(8)] = 101,
  [SMALL_STATE(9)] = 107,
  [SMALL_STATE(10)] = 115,
  [SMALL_STATE(11)] = 121,
  [SMALL_STATE(12)] = 129,
  [SMALL_STATE(13)] = 137,
  [SMALL_STATE(14)] = 144,
  [SMALL_STATE(15)] = 148,
  [SMALL_STATE(16)] = 152,
  [SMALL_STATE(17)] = 156,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gcode, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gcode, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_value, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_value, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [64] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
