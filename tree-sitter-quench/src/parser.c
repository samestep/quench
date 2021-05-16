#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 28
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_comment = 1,
  anon_sym_COLON_EQ = 2,
  anon_sym_SEMI = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_null = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  sym_integer = 9,
  sym_string = 10,
  sym_symbol = 11,
  anon_sym_LBRACK = 12,
  anon_sym_COMMA = 13,
  anon_sym_RBRACK = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_COLON = 17,
  sym_identifier = 18,
  anon_sym_EQ_GT = 19,
  sym_source_file = 20,
  sym_declaration = 21,
  sym__statement = 22,
  sym_expression_statement = 23,
  sym__expression = 24,
  sym_parenthesized = 25,
  sym__literal = 26,
  sym_boolean = 27,
  sym_list = 28,
  sym_map = 29,
  sym_entry = 30,
  sym_block = 31,
  sym_call = 32,
  sym_function = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_list_repeat1 = 35,
  aux_sym_map_repeat1 = 36,
  aux_sym_block_repeat1 = 37,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_null] = "null",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [sym_string] = "string",
  [sym_symbol] = "symbol",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_identifier] = "identifier",
  [anon_sym_EQ_GT] = "=>",
  [sym_source_file] = "source_file",
  [sym_declaration] = "declaration",
  [sym__statement] = "_statement",
  [sym_expression_statement] = "expression_statement",
  [sym__expression] = "_expression",
  [sym_parenthesized] = "parenthesized",
  [sym__literal] = "_literal",
  [sym_boolean] = "boolean",
  [sym_list] = "list",
  [sym_map] = "map",
  [sym_entry] = "entry",
  [sym_block] = "block",
  [sym_call] = "call",
  [sym_function] = "function",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [sym_string] = sym_string,
  [sym_symbol] = sym_symbol,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_identifier] = sym_identifier,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [sym_source_file] = sym_source_file,
  [sym_declaration] = sym_declaration,
  [sym__statement] = sym__statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym__expression] = sym__expression,
  [sym_parenthesized] = sym_parenthesized,
  [sym__literal] = sym__literal,
  [sym_boolean] = sym_boolean,
  [sym_list] = sym_list,
  [sym_map] = sym_map,
  [sym_entry] = sym_entry,
  [sym_block] = sym_block,
  [sym_call] = sym_call,
  [sym_function] = sym_function,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_body = 2,
  field_declaration = 3,
  field_entry = 4,
  field_expression = 5,
  field_function = 6,
  field_item = 7,
  field_key = 8,
  field_name = 9,
  field_parameter = 10,
  field_statement = 11,
  field_value = 12,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_body] = "body",
  [field_declaration] = "declaration",
  [field_entry] = "entry",
  [field_expression] = "expression",
  [field_function] = "function",
  [field_item] = "item",
  [field_key] = "key",
  [field_name] = "name",
  [field_parameter] = "parameter",
  [field_statement] = "statement",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[24] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 1},
  [15] = {.index = 18, .length = 1},
  [16] = {.index = 19, .length = 2},
  [17] = {.index = 21, .length = 1},
  [18] = {.index = 22, .length = 2},
  [19] = {.index = 24, .length = 2},
  [20] = {.index = 26, .length = 2},
  [21] = {.index = 28, .length = 2},
  [22] = {.index = 30, .length = 2},
  [23] = {.index = 32, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_declaration, 0},
  [1] =
    {field_declaration, 0, .inherited = true},
  [2] =
    {field_declaration, 0, .inherited = true},
    {field_declaration, 1, .inherited = true},
  [4] =
    {field_statement, 0},
  [5] =
    {field_name, 0},
    {field_value, 2},
  [7] =
    {field_argument, 1},
    {field_function, 0},
  [9] =
    {field_expression, 1},
  [10] =
    {field_item, 0},
  [11] =
    {field_item, 1},
  [12] =
    {field_item, 1, .inherited = true},
  [13] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
  [15] =
    {field_expression, 0},
  [16] =
    {field_entry, 0},
  [17] =
    {field_entry, 1},
  [18] =
    {field_entry, 1, .inherited = true},
  [19] =
    {field_entry, 0, .inherited = true},
    {field_entry, 1, .inherited = true},
  [21] =
    {field_statement, 1, .inherited = true},
  [22] =
    {field_statement, 0, .inherited = true},
    {field_statement, 1, .inherited = true},
  [24] =
    {field_body, 2},
    {field_parameter, 0},
  [26] =
    {field_item, 1, .inherited = true},
    {field_item, 2},
  [28] =
    {field_key, 0},
    {field_value, 2},
  [30] =
    {field_entry, 1, .inherited = true},
    {field_entry, 2},
  [32] =
    {field_expression, 2},
    {field_statement, 1, .inherited = true},
};

static TSSymbol ts_alias_sequences[24][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(17);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '>') ADVANCE(36);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(8);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
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
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(54),
    [sym_declaration] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(7),
  },
  [2] = {
    [sym_declaration] = STATE(44),
    [sym__statement] = STATE(44),
    [sym_expression_statement] = STATE(44),
    [sym__expression] = STATE(15),
    [sym_parenthesized] = STATE(15),
    [sym__literal] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_list] = STATE(15),
    [sym_map] = STATE(15),
    [sym_entry] = STATE(51),
    [sym_block] = STATE(15),
    [sym_call] = STATE(15),
    [sym_function] = STATE(15),
    [aux_sym_map_repeat1] = STATE(8),
    [aux_sym_block_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(11),
    [sym_string] = ACTIONS(15),
    [sym_symbol] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
  },
  [3] = {
    [sym__expression] = STATE(4),
    [sym_parenthesized] = STATE(4),
    [sym__literal] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_list] = STATE(4),
    [sym_map] = STATE(4),
    [sym_block] = STATE(4),
    [sym_call] = STATE(4),
    [sym_function] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(25),
    [sym_identifier] = ACTIONS(31),
  },
  [4] = {
    [sym__expression] = STATE(4),
    [sym_parenthesized] = STATE(4),
    [sym__literal] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_list] = STATE(4),
    [sym_map] = STATE(4),
    [sym_block] = STATE(4),
    [sym_call] = STATE(4),
    [sym_function] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_null] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_integer] = ACTIONS(35),
    [sym_string] = ACTIONS(33),
    [sym_symbol] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [5] = {
    [sym_declaration] = STATE(44),
    [sym__statement] = STATE(44),
    [sym_expression_statement] = STATE(44),
    [sym__expression] = STATE(18),
    [sym_parenthesized] = STATE(18),
    [sym__literal] = STATE(18),
    [sym_boolean] = STATE(18),
    [sym_list] = STATE(18),
    [sym_map] = STATE(18),
    [sym_block] = STATE(18),
    [sym_call] = STATE(18),
    [sym_function] = STATE(18),
    [aux_sym_block_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(40),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [sym_integer] = ACTIONS(40),
    [sym_string] = ACTIONS(46),
    [sym_symbol] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
  },
  [6] = {
    [sym_declaration] = STATE(44),
    [sym__statement] = STATE(44),
    [sym_expression_statement] = STATE(44),
    [sym__expression] = STATE(11),
    [sym_parenthesized] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_list] = STATE(11),
    [sym_map] = STATE(11),
    [sym_block] = STATE(11),
    [sym_call] = STATE(11),
    [sym_function] = STATE(11),
    [aux_sym_block_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(60),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(60),
    [sym_string] = ACTIONS(62),
    [sym_symbol] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(64),
    [sym_identifier] = ACTIONS(23),
  },
  [7] = {
    [sym__expression] = STATE(21),
    [sym_parenthesized] = STATE(21),
    [sym__literal] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_list] = STATE(21),
    [sym_map] = STATE(21),
    [sym_entry] = STATE(53),
    [sym_block] = STATE(21),
    [sym_call] = STATE(21),
    [sym_function] = STATE(21),
    [aux_sym_map_repeat1] = STATE(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_null] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(72),
    [anon_sym_false] = ACTIONS(72),
    [sym_integer] = ACTIONS(69),
    [sym_string] = ACTIONS(75),
    [sym_symbol] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(84),
    [sym_identifier] = ACTIONS(86),
  },
  [8] = {
    [sym__expression] = STATE(21),
    [sym_parenthesized] = STATE(21),
    [sym__literal] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_list] = STATE(21),
    [sym_map] = STATE(21),
    [sym_entry] = STATE(50),
    [sym_block] = STATE(21),
    [sym_call] = STATE(21),
    [sym_function] = STATE(21),
    [aux_sym_map_repeat1] = STATE(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(91),
    [sym_symbol] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(93),
    [sym_identifier] = ACTIONS(31),
  },
  [9] = {
    [sym__expression] = STATE(13),
    [sym_parenthesized] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_list] = STATE(13),
    [sym_map] = STATE(13),
    [sym_block] = STATE(13),
    [sym_call] = STATE(13),
    [sym_function] = STATE(13),
    [aux_sym_list_repeat1] = STATE(12),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(95),
    [sym_string] = ACTIONS(97),
    [sym_symbol] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_identifier] = ACTIONS(31),
  },
  [10] = {
    [sym__expression] = STATE(4),
    [sym_parenthesized] = STATE(4),
    [sym__literal] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_list] = STATE(4),
    [sym_map] = STATE(4),
    [sym_block] = STATE(4),
    [sym_call] = STATE(4),
    [sym_function] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(101),
    [sym_identifier] = ACTIONS(31),
  },
  [11] = {
    [sym__expression] = STATE(4),
    [sym_parenthesized] = STATE(4),
    [sym__literal] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_list] = STATE(4),
    [sym_map] = STATE(4),
    [sym_block] = STATE(4),
    [sym_call] = STATE(4),
    [sym_function] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(105),
    [sym_identifier] = ACTIONS(31),
  },
  [12] = {
    [sym__expression] = STATE(20),
    [sym_parenthesized] = STATE(20),
    [sym__literal] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_list] = STATE(20),
    [sym_map] = STATE(20),
    [sym_block] = STATE(20),
    [sym_call] = STATE(20),
    [sym_function] = STATE(20),
    [aux_sym_list_repeat1] = STATE(12),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_null] = ACTIONS(110),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [sym_integer] = ACTIONS(110),
    [sym_string] = ACTIONS(116),
    [sym_symbol] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(124),
    [sym_identifier] = ACTIONS(127),
  },
  [13] = {
    [sym__expression] = STATE(4),
    [sym_parenthesized] = STATE(4),
    [sym__literal] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_list] = STATE(4),
    [sym_map] = STATE(4),
    [sym_block] = STATE(4),
    [sym_call] = STATE(4),
    [sym_function] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(130),
    [anon_sym_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_identifier] = ACTIONS(31),
  },
  [14] = {
    [sym__expression] = STATE(16),
    [sym_parenthesized] = STATE(16),
    [sym__literal] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym_list] = STATE(16),
    [sym_map] = STATE(16),
    [sym_block] = STATE(16),
    [sym_call] = STATE(16),
    [sym_function] = STATE(16),
    [aux_sym_list_repeat1] = STATE(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(134),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(134),
    [sym_string] = ACTIONS(136),
    [sym_symbol] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_identifier] = ACTIONS(31),
  },
  [15] = {
    [sym__expression] = STATE(4),
    [sym_parenthesized] = STATE(4),
    [sym__literal] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_list] = STATE(4),
    [sym_map] = STATE(4),
    [sym_block] = STATE(4),
    [sym_call] = STATE(4),
    [sym_function] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(140),
    [sym_identifier] = ACTIONS(31),
  },
  [16] = {
    [sym__expression] = STATE(4),
    [sym_parenthesized] = STATE(4),
    [sym__literal] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_list] = STATE(4),
    [sym_map] = STATE(4),
    [sym_block] = STATE(4),
    [sym_call] = STATE(4),
    [sym_function] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(130),
    [anon_sym_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_identifier] = ACTIONS(31),
  },
  [17] = {
    [sym__expression] = STATE(4),
    [sym_parenthesized] = STATE(4),
    [sym__literal] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_list] = STATE(4),
    [sym_map] = STATE(4),
    [sym_block] = STATE(4),
    [sym_call] = STATE(4),
    [sym_function] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_identifier] = ACTIONS(31),
  },
  [18] = {
    [sym__expression] = STATE(4),
    [sym_parenthesized] = STATE(4),
    [sym__literal] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_list] = STATE(4),
    [sym_map] = STATE(4),
    [sym_block] = STATE(4),
    [sym_call] = STATE(4),
    [sym_function] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_identifier] = ACTIONS(31),
  },
  [19] = {
    [sym__expression] = STATE(4),
    [sym_parenthesized] = STATE(4),
    [sym__literal] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_list] = STATE(4),
    [sym_map] = STATE(4),
    [sym_block] = STATE(4),
    [sym_call] = STATE(4),
    [sym_function] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_identifier] = ACTIONS(31),
  },
  [20] = {
    [sym__expression] = STATE(4),
    [sym_parenthesized] = STATE(4),
    [sym__literal] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_list] = STATE(4),
    [sym_map] = STATE(4),
    [sym_block] = STATE(4),
    [sym_call] = STATE(4),
    [sym_function] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_identifier] = ACTIONS(31),
  },
  [21] = {
    [sym__expression] = STATE(4),
    [sym_parenthesized] = STATE(4),
    [sym__literal] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_list] = STATE(4),
    [sym_map] = STATE(4),
    [sym_block] = STATE(4),
    [sym_call] = STATE(4),
    [sym_function] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(140),
    [sym_identifier] = ACTIONS(31),
  },
  [22] = {
    [sym__expression] = STATE(4),
    [sym_parenthesized] = STATE(4),
    [sym__literal] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_list] = STATE(4),
    [sym_map] = STATE(4),
    [sym_block] = STATE(4),
    [sym_call] = STATE(4),
    [sym_function] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(148),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_identifier] = ACTIONS(31),
  },
  [23] = {
    [sym__expression] = STATE(3),
    [sym_parenthesized] = STATE(3),
    [sym__literal] = STATE(3),
    [sym_boolean] = STATE(3),
    [sym_list] = STATE(3),
    [sym_map] = STATE(3),
    [sym_block] = STATE(3),
    [sym_call] = STATE(3),
    [sym_function] = STATE(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(150),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(150),
    [sym_string] = ACTIONS(152),
    [sym_symbol] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_identifier] = ACTIONS(31),
  },
  [24] = {
    [sym__expression] = STATE(17),
    [sym_parenthesized] = STATE(17),
    [sym__literal] = STATE(17),
    [sym_boolean] = STATE(17),
    [sym_list] = STATE(17),
    [sym_map] = STATE(17),
    [sym_block] = STATE(17),
    [sym_call] = STATE(17),
    [sym_function] = STATE(17),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(154),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(154),
    [sym_string] = ACTIONS(156),
    [sym_symbol] = ACTIONS(156),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_identifier] = ACTIONS(31),
  },
  [25] = {
    [sym__expression] = STATE(22),
    [sym_parenthesized] = STATE(22),
    [sym__literal] = STATE(22),
    [sym_boolean] = STATE(22),
    [sym_list] = STATE(22),
    [sym_map] = STATE(22),
    [sym_block] = STATE(22),
    [sym_call] = STATE(22),
    [sym_function] = STATE(22),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(158),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(158),
    [sym_string] = ACTIONS(160),
    [sym_symbol] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_identifier] = ACTIONS(31),
  },
  [26] = {
    [sym__expression] = STATE(19),
    [sym_parenthesized] = STATE(19),
    [sym__literal] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_list] = STATE(19),
    [sym_map] = STATE(19),
    [sym_block] = STATE(19),
    [sym_call] = STATE(19),
    [sym_function] = STATE(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(162),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(162),
    [sym_string] = ACTIONS(164),
    [sym_symbol] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_identifier] = ACTIONS(31),
  },
  [27] = {
    [sym__expression] = STATE(10),
    [sym_parenthesized] = STATE(10),
    [sym__literal] = STATE(10),
    [sym_boolean] = STATE(10),
    [sym_list] = STATE(10),
    [sym_map] = STATE(10),
    [sym_block] = STATE(10),
    [sym_call] = STATE(10),
    [sym_function] = STATE(10),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(166),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(166),
    [sym_string] = ACTIONS(168),
    [sym_symbol] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_identifier] = ACTIONS(31),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_EQ_GT,
    ACTIONS(172), 5,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_identifier,
    ACTIONS(170), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      sym_symbol,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [27] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 5,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_identifier,
    ACTIONS(176), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      sym_symbol,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [51] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 5,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_identifier,
    ACTIONS(180), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      sym_symbol,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [75] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 5,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_identifier,
    ACTIONS(184), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      sym_symbol,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [99] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 5,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_identifier,
    ACTIONS(188), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      sym_symbol,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 5,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_identifier,
    ACTIONS(192), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      sym_symbol,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 5,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_identifier,
    ACTIONS(196), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      sym_symbol,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 5,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_identifier,
    ACTIONS(200), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      sym_symbol,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 5,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_identifier,
    ACTIONS(204), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      sym_symbol,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 5,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_identifier,
    ACTIONS(208), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      sym_symbol,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 5,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_identifier,
    ACTIONS(212), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      sym_symbol,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 5,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_identifier,
    ACTIONS(216), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      sym_symbol,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 5,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_identifier,
    ACTIONS(220), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      sym_symbol,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [315] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_EQ_GT,
    ACTIONS(224), 1,
      anon_sym_COLON_EQ,
    ACTIONS(172), 6,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      anon_sym_COLON,
      sym_identifier,
    ACTIONS(170), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      sym_string,
      sym_symbol,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 5,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_identifier,
    ACTIONS(226), 6,
      anon_sym_LPAREN,
      sym_string,
      sym_symbol,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 5,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_identifier,
    ACTIONS(230), 6,
      anon_sym_LPAREN,
      sym_string,
      sym_symbol,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 5,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_identifier,
    ACTIONS(234), 6,
      anon_sym_LPAREN,
      sym_string,
      sym_symbol,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 5,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_identifier,
    ACTIONS(238), 6,
      anon_sym_LPAREN,
      sym_string,
      sym_symbol,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 5,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_identifier,
    ACTIONS(242), 6,
      anon_sym_LPAREN,
      sym_string,
      sym_symbol,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [437] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(47), 1,
      aux_sym_source_file_repeat1,
    STATE(49), 1,
      sym_declaration,
  [453] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      aux_sym_source_file_repeat1,
    STATE(49), 1,
      sym_declaration,
  [469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
  [487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
  [497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_COMMA,
  [512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
  [519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_COLON_EQ,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(28)] = 0,
  [SMALL_STATE(29)] = 27,
  [SMALL_STATE(30)] = 51,
  [SMALL_STATE(31)] = 75,
  [SMALL_STATE(32)] = 99,
  [SMALL_STATE(33)] = 123,
  [SMALL_STATE(34)] = 147,
  [SMALL_STATE(35)] = 171,
  [SMALL_STATE(36)] = 195,
  [SMALL_STATE(37)] = 219,
  [SMALL_STATE(38)] = 243,
  [SMALL_STATE(39)] = 267,
  [SMALL_STATE(40)] = 291,
  [SMALL_STATE(41)] = 315,
  [SMALL_STATE(42)] = 342,
  [SMALL_STATE(43)] = 361,
  [SMALL_STATE(44)] = 380,
  [SMALL_STATE(45)] = 399,
  [SMALL_STATE(46)] = 418,
  [SMALL_STATE(47)] = 437,
  [SMALL_STATE(48)] = 453,
  [SMALL_STATE(49)] = 469,
  [SMALL_STATE(50)] = 477,
  [SMALL_STATE(51)] = 487,
  [SMALL_STATE(52)] = 497,
  [SMALL_STATE(53)] = 505,
  [SMALL_STATE(54)] = 512,
  [SMALL_STATE(55)] = 519,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3, .production_id = 19),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, .production_id = 6),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, .production_id = 6),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 18), SHIFT_REPEAT(24),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 18), SHIFT_REPEAT(18),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 18), SHIFT_REPEAT(31),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 18), SHIFT_REPEAT(18),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 18), SHIFT_REPEAT(14),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 18), SHIFT_REPEAT(2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 18),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 18), SHIFT_REPEAT(41),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, .production_id = 16), SHIFT_REPEAT(24),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, .production_id = 16), SHIFT_REPEAT(21),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, .production_id = 16), SHIFT_REPEAT(31),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, .production_id = 16), SHIFT_REPEAT(21),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, .production_id = 16), SHIFT_REPEAT(14),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, .production_id = 16), SHIFT_REPEAT(2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, .production_id = 16),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, .production_id = 16), SHIFT_REPEAT(28),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, .production_id = 21),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 11), SHIFT_REPEAT(24),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 11), SHIFT_REPEAT(20),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 11), SHIFT_REPEAT(31),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 11), SHIFT_REPEAT(20),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 11), SHIFT_REPEAT(14),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 11),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 11), SHIFT_REPEAT(2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 11), SHIFT_REPEAT(28),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 9),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 9),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 10),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 10),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3, .production_id = 14),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3, .production_id = 14),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3, .production_id = 15),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3, .production_id = 15),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 17),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 17),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3, .production_id = 7),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3, .production_id = 7),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4, .production_id = 20),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4, .production_id = 20),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4, .production_id = 22),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4, .production_id = 22),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 23),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 23),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 8),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 8),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, .production_id = 12),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, .production_id = 12),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, .production_id = 13),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, .production_id = 13),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 5),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(55),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [261] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_quench(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
