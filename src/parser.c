/* Automatically @generated by tree-sitter v0.25.4 */

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 15
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 3
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define MAX_RESERVED_WORD_SET_SIZE 0
#define PRODUCTION_ID_COUNT 3
#define SUPERTYPE_COUNT 0

enum ts_symbol_identifiers {
  aux_sym_quickfix_list_token1 = 1,
  anon_sym_PIPE = 2,
  aux_sym_quickfix_item_token1 = 3,
  aux_sym_quickfix_item_token2 = 4,
  anon_sym_BSLASH_PIPE = 5,
  aux_sym_filename_token1 = 6,
  anon_sym_col = 7,
  aux_sym_range_text_token1 = 8,
  anon_sym_DASH = 9,
  sym_item_type = 10,
  aux_sym_code_block_token1 = 11,
  sym_language_delimiter = 12,
  sym_quickfix_list = 13,
  sym_quickfix_item = 14,
  sym_filename = 15,
  sym_range = 16,
  sym_range_text = 17,
  sym_code_block = 18,
  aux_sym_quickfix_list_repeat1 = 19,
  aux_sym_filename_repeat1 = 20,
  alias_sym_col = 21,
  alias_sym_from = 22,
  alias_sym_to = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_quickfix_list_token1] = "quickfix_list_token1",
  [anon_sym_PIPE] = "|",
  [aux_sym_quickfix_item_token1] = "quickfix_item_token1",
  [aux_sym_quickfix_item_token2] = "quickfix_item_token2",
  [anon_sym_BSLASH_PIPE] = "\\|",
  [aux_sym_filename_token1] = "filename_token1",
  [anon_sym_col] = "col",
  [aux_sym_range_text_token1] = "value",
  [anon_sym_DASH] = "-",
  [sym_item_type] = "item_type",
  [aux_sym_code_block_token1] = "content",
  [sym_language_delimiter] = "language_delimiter",
  [sym_quickfix_list] = "quickfix_list",
  [sym_quickfix_item] = "quickfix_item",
  [sym_filename] = "filename",
  [sym_range] = "range",
  [sym_range_text] = "row",
  [sym_code_block] = "code_block",
  [aux_sym_quickfix_list_repeat1] = "quickfix_list_repeat1",
  [aux_sym_filename_repeat1] = "filename_repeat1",
  [alias_sym_col] = "col",
  [alias_sym_from] = "from",
  [alias_sym_to] = "to",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_quickfix_list_token1] = aux_sym_quickfix_list_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym_quickfix_item_token1] = aux_sym_quickfix_item_token1,
  [aux_sym_quickfix_item_token2] = aux_sym_quickfix_item_token2,
  [anon_sym_BSLASH_PIPE] = anon_sym_BSLASH_PIPE,
  [aux_sym_filename_token1] = aux_sym_filename_token1,
  [anon_sym_col] = anon_sym_col,
  [aux_sym_range_text_token1] = aux_sym_range_text_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_item_type] = sym_item_type,
  [aux_sym_code_block_token1] = aux_sym_code_block_token1,
  [sym_language_delimiter] = sym_language_delimiter,
  [sym_quickfix_list] = sym_quickfix_list,
  [sym_quickfix_item] = sym_quickfix_item,
  [sym_filename] = sym_filename,
  [sym_range] = sym_range,
  [sym_range_text] = sym_range_text,
  [sym_code_block] = sym_code_block,
  [aux_sym_quickfix_list_repeat1] = aux_sym_quickfix_list_repeat1,
  [aux_sym_filename_repeat1] = aux_sym_filename_repeat1,
  [alias_sym_col] = alias_sym_col,
  [alias_sym_from] = alias_sym_from,
  [alias_sym_to] = alias_sym_to,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_quickfix_list_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_col] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_range_text_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
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
  [sym_range_text] = {
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
  [alias_sym_from] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_to] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_from,
    [2] = alias_sym_to,
  },
  [2] = {
    [2] = alias_sym_col,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_range_text, 2,
    sym_range_text,
    alias_sym_col,
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
  [14] = 7,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 13,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 22,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '>') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(8);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == '<') ADVANCE(37);
      END_STATE();
    case 6:
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '|') ADVANCE(17);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(18);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(18);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_quickfix_list_token1);
      if (lookahead == '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_quickfix_item_token2);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_BSLASH_PIPE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(18);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == '|') ADVANCE(17);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_col);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_col);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_range_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_item_type);
      if (lookahead == 'l') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_item_type);
      if (lookahead == 'o') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_item_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(36);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      if (lookahead == '!') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(36);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_language_delimiter);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexerMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 34},
  [26] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [STATE(0)] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_quickfix_list_token1] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [aux_sym_quickfix_item_token1] = ACTIONS(1),
    [aux_sym_quickfix_item_token2] = ACTIONS(1),
    [anon_sym_BSLASH_PIPE] = ACTIONS(1),
    [anon_sym_col] = ACTIONS(1),
    [aux_sym_range_text_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_language_delimiter] = ACTIONS(1),
  },
  [STATE(1)] = {
    [sym_quickfix_list] = STATE(19),
    [sym_quickfix_item] = STATE(3),
    [sym_filename] = STATE(21),
    [aux_sym_quickfix_list_repeat1] = STATE(3),
    [aux_sym_filename_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_quickfix_list_token1] = ACTIONS(5),
    [anon_sym_BSLASH_PIPE] = ACTIONS(7),
    [aux_sym_filename_token1] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      aux_sym_quickfix_list_token1,
    STATE(8), 1,
      aux_sym_filename_repeat1,
    STATE(21), 1,
      sym_filename,
    ACTIONS(14), 2,
      anon_sym_BSLASH_PIPE,
      aux_sym_filename_token1,
    STATE(2), 2,
      sym_quickfix_item,
      aux_sym_quickfix_list_repeat1,
  [21] = 6,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      aux_sym_quickfix_list_token1,
    STATE(8), 1,
      aux_sym_filename_repeat1,
    STATE(21), 1,
      sym_filename,
    ACTIONS(7), 2,
      anon_sym_BSLASH_PIPE,
      aux_sym_filename_token1,
    STATE(2), 2,
      sym_quickfix_item,
      aux_sym_quickfix_list_repeat1,
  [42] = 2,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 5,
      aux_sym_quickfix_list_token1,
      aux_sym_quickfix_item_token1,
      aux_sym_quickfix_item_token2,
      anon_sym_BSLASH_PIPE,
      aux_sym_filename_token1,
  [53] = 3,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 2,
      aux_sym_quickfix_item_token1,
      aux_sym_quickfix_item_token2,
    ACTIONS(27), 3,
      aux_sym_quickfix_list_token1,
      anon_sym_BSLASH_PIPE,
      aux_sym_filename_token1,
  [66] = 2,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 5,
      aux_sym_quickfix_list_token1,
      aux_sym_quickfix_item_token1,
      aux_sym_quickfix_item_token2,
      anon_sym_BSLASH_PIPE,
      aux_sym_filename_token1,
  [77] = 3,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_col,
      sym_item_type,
  [88] = 3,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    STATE(9), 1,
      aux_sym_filename_repeat1,
    ACTIONS(43), 2,
      anon_sym_BSLASH_PIPE,
      aux_sym_filename_token1,
  [99] = 3,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    STATE(9), 1,
      aux_sym_filename_repeat1,
    ACTIONS(47), 2,
      anon_sym_BSLASH_PIPE,
      aux_sym_filename_token1,
  [110] = 2,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 3,
      aux_sym_quickfix_list_token1,
      anon_sym_BSLASH_PIPE,
      aux_sym_filename_token1,
  [119] = 3,
    ACTIONS(54), 1,
      aux_sym_range_text_token1,
    STATE(12), 1,
      sym_range_text,
    STATE(20), 1,
      sym_range,
  [129] = 3,
    ACTIONS(56), 1,
      anon_sym_PIPE,
    ACTIONS(58), 1,
      anon_sym_col,
    ACTIONS(60), 1,
      sym_item_type,
  [139] = 2,
    ACTIONS(62), 1,
      anon_sym_PIPE,
    ACTIONS(64), 2,
      anon_sym_col,
      sym_item_type,
  [147] = 2,
    ACTIONS(66), 1,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_PIPE,
      sym_item_type,
  [155] = 3,
    ACTIONS(68), 1,
      aux_sym_code_block_token1,
    ACTIONS(70), 1,
      sym_language_delimiter,
    STATE(5), 1,
      sym_code_block,
  [165] = 2,
    ACTIONS(72), 1,
      aux_sym_range_text_token1,
    STATE(17), 1,
      sym_range_text,
  [172] = 2,
    ACTIONS(74), 1,
      anon_sym_PIPE,
    ACTIONS(76), 1,
      sym_item_type,
  [179] = 1,
    ACTIONS(62), 2,
      anon_sym_PIPE,
      sym_item_type,
  [184] = 1,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
  [188] = 1,
    ACTIONS(80), 1,
      anon_sym_PIPE,
  [192] = 1,
    ACTIONS(82), 1,
      anon_sym_PIPE,
  [196] = 1,
    ACTIONS(84), 1,
      aux_sym_range_text_token1,
  [200] = 1,
    ACTIONS(86), 1,
      anon_sym_PIPE,
  [204] = 1,
    ACTIONS(88), 1,
      anon_sym_PIPE,
  [208] = 1,
    ACTIONS(90), 1,
      aux_sym_code_block_token1,
  [212] = 1,
    ACTIONS(92), 1,
      aux_sym_range_text_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 53,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 77,
  [SMALL_STATE(8)] = 88,
  [SMALL_STATE(9)] = 99,
  [SMALL_STATE(10)] = 110,
  [SMALL_STATE(11)] = 119,
  [SMALL_STATE(12)] = 129,
  [SMALL_STATE(13)] = 139,
  [SMALL_STATE(14)] = 147,
  [SMALL_STATE(15)] = 155,
  [SMALL_STATE(16)] = 165,
  [SMALL_STATE(17)] = 172,
  [SMALL_STATE(18)] = 179,
  [SMALL_STATE(19)] = 184,
  [SMALL_STATE(20)] = 188,
  [SMALL_STATE(21)] = 192,
  [SMALL_STATE(22)] = 196,
  [SMALL_STATE(23)] = 200,
  [SMALL_STATE(24)] = 204,
  [SMALL_STATE(25)] = 208,
  [SMALL_STATE(26)] = 212,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quickfix_list, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quickfix_list_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quickfix_list_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quickfix_list_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quickfix_list, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quickfix_item, 5, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quickfix_item, 5, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_text, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_text, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quickfix_item, 6, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quickfix_item, 6, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_text, 3, 0, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_text, 3, 0, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [78] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4, 0, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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
