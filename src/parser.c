/* Automatically @generated by tree-sitter v0.25.4 */

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 15
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 1
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define MAX_RESERVED_WORD_SET_SIZE 0
#define PRODUCTION_ID_COUNT 2
#define SUPERTYPE_COUNT 0

enum ts_symbol_identifiers {
  anon_sym_PIPE = 1,
  aux_sym_quickfix_item_token1 = 2,
  aux_sym_quickfix_item_token2 = 3,
  anon_sym_BSLASH_PIPE = 4,
  aux_sym_filename_token1 = 5,
  aux_sym_range_token1 = 6,
  anon_sym_col = 7,
  sym_item_type = 8,
  aux_sym_code_block_token1 = 9,
  sym_language_delimiter = 10,
  sym_quickfix_list = 11,
  sym_quickfix_item = 12,
  sym_filename = 13,
  sym_range = 14,
  sym_code_block = 15,
  aux_sym_quickfix_list_repeat1 = 16,
  aux_sym_filename_repeat1 = 17,
  alias_sym_col = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PIPE] = "|",
  [aux_sym_quickfix_item_token1] = "quickfix_item_token1",
  [aux_sym_quickfix_item_token2] = "quickfix_item_token2",
  [anon_sym_BSLASH_PIPE] = "\\|",
  [aux_sym_filename_token1] = "filename_token1",
  [aux_sym_range_token1] = "row",
  [anon_sym_col] = " col ",
  [sym_item_type] = "item_type",
  [aux_sym_code_block_token1] = "content",
  [sym_language_delimiter] = "language_delimiter",
  [sym_quickfix_list] = "quickfix_list",
  [sym_quickfix_item] = "quickfix_item",
  [sym_filename] = "filename",
  [sym_range] = "range",
  [sym_code_block] = "code_block",
  [aux_sym_quickfix_list_repeat1] = "quickfix_list_repeat1",
  [aux_sym_filename_repeat1] = "filename_repeat1",
  [alias_sym_col] = "col",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym_quickfix_item_token1] = aux_sym_quickfix_item_token1,
  [aux_sym_quickfix_item_token2] = aux_sym_quickfix_item_token2,
  [anon_sym_BSLASH_PIPE] = anon_sym_BSLASH_PIPE,
  [aux_sym_filename_token1] = aux_sym_filename_token1,
  [aux_sym_range_token1] = aux_sym_range_token1,
  [anon_sym_col] = anon_sym_col,
  [sym_item_type] = sym_item_type,
  [aux_sym_code_block_token1] = aux_sym_code_block_token1,
  [sym_language_delimiter] = sym_language_delimiter,
  [sym_quickfix_list] = sym_quickfix_list,
  [sym_quickfix_item] = sym_quickfix_item,
  [sym_filename] = sym_filename,
  [sym_range] = sym_range,
  [sym_code_block] = sym_code_block,
  [aux_sym_quickfix_list_repeat1] = aux_sym_quickfix_list_repeat1,
  [aux_sym_filename_repeat1] = aux_sym_filename_repeat1,
  [alias_sym_col] = alias_sym_col,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quickfix_item_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quickfix_item_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_filename_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_range_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_col] = {
    .visible = true,
    .named = false,
  },
  [sym_item_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_code_block_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_language_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_quickfix_list] = {
    .visible = true,
    .named = true,
  },
  [sym_quickfix_item] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_quickfix_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filename_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_col] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_col,
  },
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
      if (eof) ADVANCE(17);
      if (lookahead == '\t') SKIP(0);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(2);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(2);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(4);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == '|') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(4);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '|') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(40);
      END_STATE();
    case 9:
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == '|') ADVANCE(21);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(22);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(22);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_quickfix_item_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_quickfix_item_token2);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_BSLASH_PIPE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(22);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == '|') ADVANCE(21);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_col);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_item_type);
      if (lookahead == ' ') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_item_type);
      if (lookahead == 'l') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_item_type);
      if (lookahead == 'o') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_item_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      if (lookahead == '!') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      if (lookahead == '!') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_language_delimiter);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexerMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [STATE(0)] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [aux_sym_quickfix_item_token1] = ACTIONS(1),
    [aux_sym_quickfix_item_token2] = ACTIONS(1),
    [anon_sym_BSLASH_PIPE] = ACTIONS(1),
    [aux_sym_range_token1] = ACTIONS(1),
    [anon_sym_col] = ACTIONS(1),
    [sym_language_delimiter] = ACTIONS(1),
  },
  [STATE(1)] = {
    [sym_quickfix_list] = STATE(14),
    [sym_quickfix_item] = STATE(2),
    [sym_filename] = STATE(15),
    [aux_sym_quickfix_list_repeat1] = STATE(2),
    [aux_sym_filename_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_BSLASH_PIPE] = ACTIONS(5),
    [aux_sym_filename_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_filename_repeat1,
    STATE(15), 1,
      sym_filename,
    ACTIONS(5), 2,
      anon_sym_BSLASH_PIPE,
      aux_sym_filename_token1,
    STATE(3), 2,
      sym_quickfix_item,
      aux_sym_quickfix_list_repeat1,
  [18] = 5,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_filename_repeat1,
    STATE(15), 1,
      sym_filename,
    ACTIONS(11), 2,
      anon_sym_BSLASH_PIPE,
      aux_sym_filename_token1,
    STATE(3), 2,
      sym_quickfix_item,
      aux_sym_quickfix_list_repeat1,
  [36] = 2,
    ACTIONS(14), 1,
      ts_builtin_sym_end,
    ACTIONS(16), 4,
      aux_sym_quickfix_item_token1,
      aux_sym_quickfix_item_token2,
      anon_sym_BSLASH_PIPE,
      aux_sym_filename_token1,
  [46] = 3,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
    ACTIONS(20), 2,
      aux_sym_quickfix_item_token1,
      aux_sym_quickfix_item_token2,
    ACTIONS(22), 2,
      anon_sym_BSLASH_PIPE,
      aux_sym_filename_token1,
  [58] = 2,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 4,
      aux_sym_quickfix_item_token1,
      aux_sym_quickfix_item_token2,
      anon_sym_BSLASH_PIPE,
      aux_sym_filename_token1,
  [68] = 3,
    ACTIONS(28), 1,
      anon_sym_PIPE,
    STATE(8), 1,
      aux_sym_filename_repeat1,
    ACTIONS(30), 2,
      anon_sym_BSLASH_PIPE,
      aux_sym_filename_token1,
  [79] = 3,
    ACTIONS(32), 1,
      anon_sym_PIPE,
    STATE(8), 1,
      aux_sym_filename_repeat1,
    ACTIONS(34), 2,
      anon_sym_BSLASH_PIPE,
      aux_sym_filename_token1,
  [90] = 3,
    ACTIONS(37), 1,
      anon_sym_PIPE,
    ACTIONS(39), 1,
      anon_sym_col,
    ACTIONS(41), 1,
      sym_item_type,
  [100] = 3,
    ACTIONS(43), 1,
      aux_sym_code_block_token1,
    ACTIONS(45), 1,
      sym_language_delimiter,
    STATE(5), 1,
      sym_code_block,
  [110] = 2,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 2,
      anon_sym_BSLASH_PIPE,
      aux_sym_filename_token1,
  [118] = 2,
    ACTIONS(51), 1,
      aux_sym_range_token1,
    STATE(16), 1,
      sym_range,
  [125] = 2,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      sym_item_type,
  [132] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
  [136] = 1,
    ACTIONS(59), 1,
      anon_sym_PIPE,
  [140] = 1,
    ACTIONS(61), 1,
      anon_sym_PIPE,
  [144] = 1,
    ACTIONS(63), 1,
      anon_sym_PIPE,
  [148] = 1,
    ACTIONS(65), 1,
      aux_sym_code_block_token1,
  [152] = 1,
    ACTIONS(67), 1,
      aux_sym_range_token1,
  [156] = 1,
    ACTIONS(69), 1,
      anon_sym_PIPE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 46,
  [SMALL_STATE(6)] = 58,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 79,
  [SMALL_STATE(9)] = 90,
  [SMALL_STATE(10)] = 100,
  [SMALL_STATE(11)] = 110,
  [SMALL_STATE(12)] = 118,
  [SMALL_STATE(13)] = 125,
  [SMALL_STATE(14)] = 132,
  [SMALL_STATE(15)] = 136,
  [SMALL_STATE(16)] = 140,
  [SMALL_STATE(17)] = 144,
  [SMALL_STATE(18)] = 148,
  [SMALL_STATE(19)] = 152,
  [SMALL_STATE(20)] = 156,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quickfix_list, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quickfix_list, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quickfix_list_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quickfix_list_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 1, 0, 0),
  [16] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 1, 0, 0),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quickfix_item, 5, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quickfix_item, 5, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 2, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quickfix_item, 6, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quickfix_item, 6, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [57] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4, 0, 1),
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

TS_PUBLIC const TSLanguage *tree_sitter_qf(void) {
  static const TSLanguage language = {
    .abi_version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .supertype_count = SUPERTYPE_COUNT,
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
    .lex_modes = (const void*)ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
    .name = "qf",
    .max_reserved_word_set_size = 0,
    .metadata = {
      .major_version = 0,
      .minor_version = 1,
      .patch_version = 0,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
