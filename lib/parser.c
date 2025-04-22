#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 171
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 12
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 15

enum ts_symbol_identifiers {
  aux_sym_document_token1 = 1,
  sym_comment = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_LBRACK_LBRACK = 5,
  anon_sym_RBRACK_RBRACK = 6,
  anon_sym_EQ = 7,
  anon_sym_DOT = 8,
  sym_bare_key = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_basic_string_token1 = 11,
  anon_sym_DQUOTE2 = 12,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 13,
  aux_sym_multiline_basic_string_token1 = 14,
  sym_escape_sequence = 15,
  sym_escape_line_ending = 16,
  anon_sym_SQUOTE = 17,
  aux_sym_literal_string_token1 = 18,
  anon_sym_SQUOTE2 = 19,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 20,
  aux_sym_integer_token1 = 21,
  aux_sym_integer_token2 = 22,
  aux_sym_integer_token3 = 23,
  aux_sym_integer_token4 = 24,
  aux_sym_float_token1 = 25,
  aux_sym_float_token2 = 26,
  sym_boolean = 27,
  sym_offset_date_time = 28,
  sym_local_date_time = 29,
  sym_local_date = 30,
  sym_local_time = 31,
  anon_sym_COMMA = 32,
  anon_sym_LBRACE = 33,
  anon_sym_RBRACE = 34,
  sym_line_ending_or_eof = 35,
  sym_multiline_basic_string_content = 36,
  sym_multiline_basic_string_end = 37,
  sym_multiline_literal_string_content = 38,
  sym_multiline_literal_string_end = 39,
  sym_document = 40,
  sym_table = 41,
  sym_table_array_element = 42,
  sym_pair = 43,
  sym_inline_pair = 44,
  sym_key = 45,
  sym_dotted_key = 46,
  sym_quoted_key = 47,
  sym_inline_value = 48,
  sym_string = 49,
  sym_basic_string = 50,
  sym_multiline_basic_string = 51,
  sym_literal_string = 52,
  sym_multiline_literal_string = 53,
  sym_integer = 54,
  sym_float = 55,
  sym_array = 56,
  sym_inline_table = 57,
  aux_sym_document_repeat1 = 58,
  aux_sym_document_repeat2 = 59,
  aux_sym_basic_string_repeat1 = 60,
  aux_sym_multiline_basic_string_repeat1 = 61,
  aux_sym_multiline_literal_string_repeat1 = 62,
  aux_sym_array_repeat1 = 63,
  aux_sym_array_repeat2 = 64,
  aux_sym_inline_table_repeat1 = 65,
  alias_sym_imm_tok_dquot = 66,
  alias_sym_imm_tok_pat_509ec78 = 67,
  alias_sym_imm_tok_rep1_pat_5e241f9 = 68,
  alias_sym_imm_tok_rep1_pat_fee4e64 = 69,
  alias_sym_imm_tok_squot = 70,
  alias_sym_pat_13899e9 = 71,
  alias_sym_pat_3a40bf7 = 72,
  alias_sym_pat_3b4bc24 = 73,
  alias_sym_pat_509ec78 = 74,
  alias_sym_pat_c9267ca = 75,
  alias_sym_pat_da2991f = 76,
  alias_sym_tok_pat_da2991f_choice_pat_37ac644 = 77,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [sym_comment] = "comment",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [sym_bare_key] = "bare_key",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_basic_string_token1] = "basic_string_token1",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_multiline_basic_string_token1] = "multiline_basic_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_escape_line_ending] = "escape_line_ending",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_literal_string_token1] = "literal_string_token1",
  [anon_sym_SQUOTE2] = "'",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_integer_token2] = "integer_token2",
  [aux_sym_integer_token3] = "integer_token3",
  [aux_sym_integer_token4] = "integer_token4",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [sym_boolean] = "boolean",
  [sym_offset_date_time] = "offset_date_time",
  [sym_local_date_time] = "local_date_time",
  [sym_local_date] = "local_date",
  [sym_local_time] = "local_time",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_line_ending_or_eof] = "line_ending_or_eof",
  [sym_multiline_basic_string_content] = "multiline_basic_string_content",
  [sym_multiline_basic_string_end] = "multiline_basic_string_end",
  [sym_multiline_literal_string_content] = "multiline_literal_string_content",
  [sym_multiline_literal_string_end] = "multiline_literal_string_end",
  [sym_document] = "document",
  [sym_table] = "table",
  [sym_table_array_element] = "table_array_element",
  [sym_pair] = "pair",
  [sym_inline_pair] = "inline_pair",
  [sym_key] = "key",
  [sym_dotted_key] = "dotted_key",
  [sym_quoted_key] = "quoted_key",
  [sym_inline_value] = "inline_value",
  [sym_string] = "string",
  [sym_basic_string] = "basic_string",
  [sym_multiline_basic_string] = "multiline_basic_string",
  [sym_literal_string] = "literal_string",
  [sym_multiline_literal_string] = "multiline_literal_string",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_array] = "array",
  [sym_inline_table] = "inline_table",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_basic_string_repeat1] = "basic_string_repeat1",
  [aux_sym_multiline_basic_string_repeat1] = "multiline_basic_string_repeat1",
  [aux_sym_multiline_literal_string_repeat1] = "multiline_literal_string_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_array_repeat2] = "array_repeat2",
  [aux_sym_inline_table_repeat1] = "inline_table_repeat1",
  [alias_sym_imm_tok_dquot] = "imm_tok_dquot",
  [alias_sym_imm_tok_pat_509ec78] = "imm_tok_pat_509ec78",
  [alias_sym_imm_tok_rep1_pat_5e241f9] = "imm_tok_rep1_pat_5e241f9",
  [alias_sym_imm_tok_rep1_pat_fee4e64] = "imm_tok_rep1_pat_fee4e64",
  [alias_sym_imm_tok_squot] = "imm_tok_squot",
  [alias_sym_pat_13899e9] = "pat_13899e9",
  [alias_sym_pat_3a40bf7] = "pat_3a40bf7",
  [alias_sym_pat_3b4bc24] = "pat_3b4bc24",
  [alias_sym_pat_509ec78] = "pat_509ec78",
  [alias_sym_pat_c9267ca] = "pat_c9267ca",
  [alias_sym_pat_da2991f] = "pat_da2991f",
  [alias_sym_tok_pat_da2991f_choice_pat_37ac644] = "tok_pat_da2991f_choice_pat_37ac644",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_bare_key] = sym_bare_key,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_basic_string_token1] = aux_sym_basic_string_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_multiline_basic_string_token1] = aux_sym_multiline_basic_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_escape_line_ending] = sym_escape_line_ending,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_literal_string_token1] = aux_sym_literal_string_token1,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [aux_sym_integer_token3] = aux_sym_integer_token3,
  [aux_sym_integer_token4] = aux_sym_integer_token4,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [sym_boolean] = sym_boolean,
  [sym_offset_date_time] = sym_offset_date_time,
  [sym_local_date_time] = sym_local_date_time,
  [sym_local_date] = sym_local_date,
  [sym_local_time] = sym_local_time,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_line_ending_or_eof] = sym_line_ending_or_eof,
  [sym_multiline_basic_string_content] = sym_multiline_basic_string_content,
  [sym_multiline_basic_string_end] = sym_multiline_basic_string_end,
  [sym_multiline_literal_string_content] = sym_multiline_literal_string_content,
  [sym_multiline_literal_string_end] = sym_multiline_literal_string_end,
  [sym_document] = sym_document,
  [sym_table] = sym_table,
  [sym_table_array_element] = sym_table_array_element,
  [sym_pair] = sym_pair,
  [sym_inline_pair] = sym_inline_pair,
  [sym_key] = sym_key,
  [sym_dotted_key] = sym_dotted_key,
  [sym_quoted_key] = sym_quoted_key,
  [sym_inline_value] = sym_inline_value,
  [sym_string] = sym_string,
  [sym_basic_string] = sym_basic_string,
  [sym_multiline_basic_string] = sym_multiline_basic_string,
  [sym_literal_string] = sym_literal_string,
  [sym_multiline_literal_string] = sym_multiline_literal_string,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_array] = sym_array,
  [sym_inline_table] = sym_inline_table,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_basic_string_repeat1] = aux_sym_basic_string_repeat1,
  [aux_sym_multiline_basic_string_repeat1] = aux_sym_multiline_basic_string_repeat1,
  [aux_sym_multiline_literal_string_repeat1] = aux_sym_multiline_literal_string_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_array_repeat2] = aux_sym_array_repeat2,
  [aux_sym_inline_table_repeat1] = aux_sym_inline_table_repeat1,
  [alias_sym_imm_tok_dquot] = alias_sym_imm_tok_dquot,
  [alias_sym_imm_tok_pat_509ec78] = alias_sym_imm_tok_pat_509ec78,
  [alias_sym_imm_tok_rep1_pat_5e241f9] = alias_sym_imm_tok_rep1_pat_5e241f9,
  [alias_sym_imm_tok_rep1_pat_fee4e64] = alias_sym_imm_tok_rep1_pat_fee4e64,
  [alias_sym_imm_tok_squot] = alias_sym_imm_tok_squot,
  [alias_sym_pat_13899e9] = alias_sym_pat_13899e9,
  [alias_sym_pat_3a40bf7] = alias_sym_pat_3a40bf7,
  [alias_sym_pat_3b4bc24] = alias_sym_pat_3b4bc24,
  [alias_sym_pat_509ec78] = alias_sym_pat_509ec78,
  [alias_sym_pat_c9267ca] = alias_sym_pat_c9267ca,
  [alias_sym_pat_da2991f] = alias_sym_pat_da2991f,
  [alias_sym_tok_pat_da2991f_choice_pat_37ac644] = alias_sym_tok_pat_da2991f_choice_pat_37ac644,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_bare_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_basic_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_basic_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_line_ending] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_offset_date_time] = {
    .visible = true,
    .named = true,
  },
  [sym_local_date_time] = {
    .visible = true,
    .named = true,
  },
  [sym_local_date] = {
    .visible = true,
    .named = true,
  },
  [sym_local_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
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
  [sym_line_ending_or_eof] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_basic_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_basic_string_end] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_literal_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_literal_string_end] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_table_array_element] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_key] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_key] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_string] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_basic_string] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_string] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_literal_string] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_table] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_basic_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_basic_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_literal_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_imm_tok_dquot] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_509ec78] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_rep1_pat_5e241f9] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_rep1_pat_fee4e64] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_squot] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_13899e9] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_3a40bf7] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_3b4bc24] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_509ec78] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_c9267ca] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_da2991f] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tok_pat_da2991f_choice_pat_37ac644] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_pat_509ec78,
  },
  [2] = {
    [0] = alias_sym_imm_tok_rep1_pat_5e241f9,
  },
  [3] = {
    [1] = alias_sym_imm_tok_dquot,
  },
  [4] = {
    [1] = alias_sym_imm_tok_squot,
  },
  [5] = {
    [2] = alias_sym_imm_tok_dquot,
  },
  [6] = {
    [1] = alias_sym_imm_tok_rep1_pat_fee4e64,
    [2] = alias_sym_imm_tok_squot,
  },
  [7] = {
    [0] = alias_sym_pat_da2991f,
  },
  [8] = {
    [0] = alias_sym_pat_3a40bf7,
  },
  [9] = {
    [0] = alias_sym_pat_3b4bc24,
  },
  [10] = {
    [0] = alias_sym_pat_c9267ca,
  },
  [11] = {
    [0] = alias_sym_tok_pat_da2991f_choice_pat_37ac644,
  },
  [12] = {
    [0] = alias_sym_pat_13899e9,
  },
  [13] = {
    [0] = alias_sym_imm_tok_pat_509ec78,
  },
  [14] = {
    [0] = alias_sym_imm_tok_rep1_pat_fee4e64,
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
  [12] = 2,
  [13] = 4,
  [14] = 3,
  [15] = 8,
  [16] = 5,
  [17] = 6,
  [18] = 7,
  [19] = 9,
  [20] = 10,
  [21] = 11,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 40,
  [44] = 44,
  [45] = 42,
  [46] = 41,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 57,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 62,
  [66] = 63,
  [67] = 59,
  [68] = 60,
  [69] = 64,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 87,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 88,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 87,
  [103] = 88,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 105,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 113,
  [117] = 117,
  [118] = 111,
  [119] = 107,
  [120] = 106,
  [121] = 121,
  [122] = 115,
  [123] = 123,
  [124] = 124,
  [125] = 54,
  [126] = 55,
  [127] = 53,
  [128] = 48,
  [129] = 129,
  [130] = 121,
  [131] = 131,
  [132] = 132,
  [133] = 131,
  [134] = 109,
  [135] = 117,
  [136] = 131,
  [137] = 137,
  [138] = 99,
  [139] = 137,
  [140] = 123,
  [141] = 141,
  [142] = 72,
  [143] = 143,
  [144] = 74,
  [145] = 79,
  [146] = 76,
  [147] = 147,
  [148] = 84,
  [149] = 95,
  [150] = 48,
  [151] = 82,
  [152] = 101,
  [153] = 53,
  [154] = 77,
  [155] = 83,
  [156] = 75,
  [157] = 73,
  [158] = 85,
  [159] = 71,
  [160] = 137,
  [161] = 80,
  [162] = 104,
  [163] = 97,
  [164] = 81,
  [165] = 54,
  [166] = 96,
  [167] = 55,
  [168] = 168,
  [169] = 78,
  [170] = 86,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      ADVANCE_MAP(
        '\n', 129,
        '\r', 1,
        '"', 127,
        '#', 79,
        '\'', 137,
        '+', 15,
        ',', 161,
        '-', 95,
        '.', 86,
        '0', 92,
        '1', 90,
        '2', 89,
        '=', 85,
        '[', 81,
        '\\', 5,
        ']', 82,
        'f', 102,
        'i', 108,
        'n', 103,
        't', 109,
        '{', 162,
        '}', 163,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(75);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(129);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead > ' ' &&
          lookahead != 0x7f) ADVANCE(125);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead > ' ' &&
          lookahead != 0x7f) ADVANCE(135);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(131);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 131,
        '\r', 4,
        'U', 74,
        'u', 70,
        '"', 130,
        '\\', 130,
        'b', 130,
        'f', 130,
        'n', 130,
        'r', 130,
        't', 130,
      );
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(78);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\n', 78,
        '\r', 6,
        '"', 123,
        '#', 79,
        '\'', 133,
        ',', 161,
        '0', 144,
        '1', 142,
        '2', 141,
        '[', 80,
        ']', 82,
        'f', 30,
        'i', 35,
        'n', 31,
        't', 37,
        '{', 162,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(17);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(128);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(136);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(138);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(159);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == '1') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(156);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == '3') ADVANCE(42);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(59);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(44);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(45);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(64);
      END_STATE();
    case 23:
      if (lookahead == '6') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == '6') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == ']') ADVANCE(84);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(153);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 41:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(150);
      END_STATE();
    case 42:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(158);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(14);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(28);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(26);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(53);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(61);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(65);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(149);
      END_STATE();
    case 50:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 51:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      if (eof) ADVANCE(77);
      ADVANCE_MAP(
        '\n', 78,
        '\r', 6,
        '"', 123,
        '#', 79,
        '\'', 133,
        '+', 15,
        ',', 161,
        '-', 95,
        '.', 86,
        '0', 92,
        '1', 90,
        '2', 89,
        '=', 85,
        '[', 81,
        ']', 82,
        'f', 102,
        'i', 108,
        'n', 103,
        't', 109,
        '{', 162,
        '}', 163,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(75);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      ADVANCE_MAP(
        '\n', 78,
        '\r', 6,
        '"', 122,
        '#', 79,
        '\'', 132,
        ',', 161,
        '.', 86,
        '=', 85,
        '[', 81,
        ']', 82,
        '}', 163,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_document_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead > 0x08 &&
          (lookahead < '\n' || 0x1f < lookahead) &&
          lookahead != 0x7f) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == ':') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(87);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == 'b') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(103);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == '1') ADVANCE(114);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == '3') ADVANCE(112);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(118);
      if (lookahead == '-' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '_') ADVANCE(113);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(98);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '_') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '_') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(121);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(98);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_bare_key);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(94);
      if (lookahead == '-' ||
          ('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_bare_key);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_bare_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_basic_string_token1);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\' &&
          lookahead != 0x7f) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_basic_string_token1);
      if (lookahead > 0x08 &&
          (lookahead < '\n' || 0x1f < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 0x7f) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_multiline_basic_string_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_escape_line_ending);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(11);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_literal_string_token1);
      if (lookahead == '#') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead > ' ' &&
          lookahead != '\'' &&
          lookahead != 0x7f) ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_literal_string_token1);
      if (lookahead > 0x08 &&
          (lookahead < '\n' || 0x1f < lookahead) &&
          lookahead != '\'' &&
          lookahead != 0x7f) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      if (lookahead == '\'') ADVANCE(11);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(140);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'x') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_float_token2);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_offset_date_time);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_local_date_time);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_local_date_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_local_date);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_local_time);
      if (lookahead == '.') ADVANCE(55);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_local_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 76},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 76},
  [29] = {.lex_state = 76},
  [30] = {.lex_state = 76},
  [31] = {.lex_state = 76},
  [32] = {.lex_state = 76},
  [33] = {.lex_state = 76},
  [34] = {.lex_state = 76},
  [35] = {.lex_state = 76},
  [36] = {.lex_state = 76},
  [37] = {.lex_state = 76},
  [38] = {.lex_state = 76},
  [39] = {.lex_state = 76},
  [40] = {.lex_state = 76},
  [41] = {.lex_state = 2, .external_lex_state = 2},
  [42] = {.lex_state = 2, .external_lex_state = 2},
  [43] = {.lex_state = 76},
  [44] = {.lex_state = 2, .external_lex_state = 2},
  [45] = {.lex_state = 2, .external_lex_state = 2},
  [46] = {.lex_state = 2, .external_lex_state = 2},
  [47] = {.lex_state = 76},
  [48] = {.lex_state = 76},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2, .external_lex_state = 2},
  [51] = {.lex_state = 2, .external_lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 76},
  [54] = {.lex_state = 76},
  [55] = {.lex_state = 76},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 76},
  [58] = {.lex_state = 3, .external_lex_state = 3},
  [59] = {.lex_state = 76},
  [60] = {.lex_state = 3, .external_lex_state = 3},
  [61] = {.lex_state = 76},
  [62] = {.lex_state = 76},
  [63] = {.lex_state = 3, .external_lex_state = 3},
  [64] = {.lex_state = 76},
  [65] = {.lex_state = 76},
  [66] = {.lex_state = 3, .external_lex_state = 3},
  [67] = {.lex_state = 76},
  [68] = {.lex_state = 3, .external_lex_state = 3},
  [69] = {.lex_state = 76},
  [70] = {.lex_state = 3, .external_lex_state = 3},
  [71] = {.lex_state = 76},
  [72] = {.lex_state = 76},
  [73] = {.lex_state = 76},
  [74] = {.lex_state = 76},
  [75] = {.lex_state = 76},
  [76] = {.lex_state = 76},
  [77] = {.lex_state = 76},
  [78] = {.lex_state = 76},
  [79] = {.lex_state = 76},
  [80] = {.lex_state = 76},
  [81] = {.lex_state = 76},
  [82] = {.lex_state = 76},
  [83] = {.lex_state = 76},
  [84] = {.lex_state = 76},
  [85] = {.lex_state = 76},
  [86] = {.lex_state = 76},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 3, .external_lex_state = 3},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 76},
  [92] = {.lex_state = 76},
  [93] = {.lex_state = 76},
  [94] = {.lex_state = 76},
  [95] = {.lex_state = 76},
  [96] = {.lex_state = 76},
  [97] = {.lex_state = 76},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 76},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 76},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 76},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 0, .external_lex_state = 4},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 0, .external_lex_state = 4},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0, .external_lex_state = 4},
  [143] = {.lex_state = 0, .external_lex_state = 4},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 4},
  [147] = {.lex_state = 0, .external_lex_state = 4},
  [148] = {.lex_state = 0, .external_lex_state = 4},
  [149] = {.lex_state = 0, .external_lex_state = 4},
  [150] = {.lex_state = 0, .external_lex_state = 4},
  [151] = {.lex_state = 0, .external_lex_state = 4},
  [152] = {.lex_state = 0, .external_lex_state = 4},
  [153] = {.lex_state = 0, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 4},
  [155] = {.lex_state = 0, .external_lex_state = 4},
  [156] = {.lex_state = 0, .external_lex_state = 4},
  [157] = {.lex_state = 0, .external_lex_state = 4},
  [158] = {.lex_state = 0, .external_lex_state = 4},
  [159] = {.lex_state = 0, .external_lex_state = 4},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 0, .external_lex_state = 4},
  [162] = {.lex_state = 0, .external_lex_state = 4},
  [163] = {.lex_state = 0, .external_lex_state = 4},
  [164] = {.lex_state = 0, .external_lex_state = 4},
  [165] = {.lex_state = 0, .external_lex_state = 4},
  [166] = {.lex_state = 0, .external_lex_state = 4},
  [167] = {.lex_state = 0, .external_lex_state = 4},
  [168] = {.lex_state = 0, .external_lex_state = 4},
  [169] = {.lex_state = 0, .external_lex_state = 4},
  [170] = {.lex_state = 0, .external_lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_document_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_bare_key] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [aux_sym_multiline_basic_string_token1] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_escape_line_ending] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_integer_token3] = ACTIONS(1),
    [aux_sym_integer_token4] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_local_date] = ACTIONS(1),
    [sym_local_time] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_line_ending_or_eof] = ACTIONS(1),
    [sym_multiline_basic_string_content] = ACTIONS(1),
    [sym_multiline_basic_string_end] = ACTIONS(1),
    [sym_multiline_literal_string_content] = ACTIONS(1),
    [sym_multiline_literal_string_end] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(141),
    [sym_table] = STATE(52),
    [sym_table_array_element] = STATE(52),
    [sym_pair] = STATE(28),
    [sym_inline_pair] = STATE(143),
    [sym_key] = STATE(130),
    [sym_dotted_key] = STATE(130),
    [sym_quoted_key] = STATE(109),
    [sym_basic_string] = STATE(117),
    [sym_literal_string] = STATE(117),
    [aux_sym_document_repeat1] = STATE(28),
    [aux_sym_document_repeat2] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_document_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(11),
    [sym_bare_key] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      aux_sym_array_repeat1,
    STATE(57), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [74] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_array_repeat1,
    STATE(91), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [148] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(62), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [222] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_array_repeat1,
    STATE(91), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [296] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(93), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [370] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym_array_repeat1,
    STATE(91), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [444] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(93), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [518] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(93), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [592] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      aux_sym_array_repeat1,
    STATE(91), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [666] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(93), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [740] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym_array_repeat1,
    STATE(61), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [814] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(65), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [888] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      aux_sym_array_repeat1,
    STATE(91), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [962] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(93), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1036] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym_array_repeat1,
    STATE(91), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1110] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(93), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1184] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_array_repeat1,
    STATE(91), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1258] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(93), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1332] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym_array_repeat1,
    STATE(91), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1406] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(93), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1480] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      aux_sym_array_repeat1,
    STATE(91), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1551] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(93), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1622] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token2,
    ACTIONS(37), 1,
      aux_sym_integer_token3,
    ACTIONS(39), 1,
      aux_sym_integer_token4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      aux_sym_float_token2,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    STATE(123), 1,
      sym_inline_value,
    ACTIONS(47), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(45), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(72), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(71), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1687] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(87), 1,
      aux_sym_integer_token1,
    ACTIONS(89), 1,
      aux_sym_integer_token2,
    ACTIONS(91), 1,
      aux_sym_integer_token3,
    ACTIONS(93), 1,
      aux_sym_integer_token4,
    ACTIONS(95), 1,
      aux_sym_float_token1,
    ACTIONS(97), 1,
      aux_sym_float_token2,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym_inline_value,
    ACTIONS(101), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(99), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(142), 4,
      sym_basic_string,
      sym_multiline_basic_string,
      sym_literal_string,
      sym_multiline_literal_string,
    STATE(159), 5,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1752] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(110), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_integer_token1,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(108), 14,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_integer_token1,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(112), 15,
      aux_sym_document_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1813] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_document_token1,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(109), 1,
      sym_quoted_key,
    STATE(143), 1,
      sym_inline_pair,
    STATE(29), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(117), 2,
      sym_basic_string,
      sym_literal_string,
    STATE(130), 2,
      sym_key,
      sym_dotted_key,
    STATE(56), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
  [1861] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      aux_sym_document_token1,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      sym_bare_key,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(109), 1,
      sym_quoted_key,
    STATE(143), 1,
      sym_inline_pair,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(29), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(117), 2,
      sym_basic_string,
      sym_literal_string,
    STATE(130), 2,
      sym_key,
      sym_dotted_key,
  [1902] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_document_token1,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    STATE(109), 1,
      sym_quoted_key,
    STATE(143), 1,
      sym_inline_pair,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(32), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(117), 2,
      sym_basic_string,
      sym_literal_string,
    STATE(130), 2,
      sym_key,
      sym_dotted_key,
  [1943] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_document_token1,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    STATE(109), 1,
      sym_quoted_key,
    STATE(143), 1,
      sym_inline_pair,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(33), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(117), 2,
      sym_basic_string,
      sym_literal_string,
    STATE(130), 2,
      sym_key,
      sym_dotted_key,
  [1984] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_document_token1,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    STATE(109), 1,
      sym_quoted_key,
    STATE(143), 1,
      sym_inline_pair,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(29), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(117), 2,
      sym_basic_string,
      sym_literal_string,
    STATE(130), 2,
      sym_key,
      sym_dotted_key,
  [2025] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_document_token1,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    STATE(109), 1,
      sym_quoted_key,
    STATE(143), 1,
      sym_inline_pair,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(29), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(117), 2,
      sym_basic_string,
      sym_literal_string,
    STATE(130), 2,
      sym_key,
      sym_dotted_key,
  [2066] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      sym_quoted_key,
    STATE(111), 1,
      sym_inline_pair,
    STATE(117), 2,
      sym_basic_string,
      sym_literal_string,
    STATE(121), 2,
      sym_key,
      sym_dotted_key,
  [2096] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      sym_quoted_key,
    STATE(118), 1,
      sym_inline_pair,
    STATE(117), 2,
      sym_basic_string,
      sym_literal_string,
    STATE(121), 2,
      sym_key,
      sym_dotted_key,
  [2126] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(109), 1,
      sym_quoted_key,
    STATE(124), 1,
      sym_inline_pair,
    STATE(117), 2,
      sym_basic_string,
      sym_literal_string,
    STATE(121), 2,
      sym_key,
      sym_dotted_key,
  [2153] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(109), 1,
      sym_quoted_key,
    STATE(117), 2,
      sym_basic_string,
      sym_literal_string,
    STATE(132), 2,
      sym_key,
      sym_dotted_key,
  [2177] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_bare_key,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    STATE(134), 1,
      sym_quoted_key,
    STATE(129), 2,
      sym_key,
      sym_dotted_key,
    STATE(135), 2,
      sym_basic_string,
      sym_literal_string,
  [2201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACK,
    ACTIONS(160), 6,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_LBRACK_LBRACK,
      sym_bare_key,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2216] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(109), 1,
      sym_quoted_key,
    STATE(115), 1,
      sym_key,
    STATE(117), 2,
      sym_basic_string,
      sym_literal_string,
  [2239] = 6,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_basic_string_token1,
    ACTIONS(168), 1,
      aux_sym_multiline_basic_string_token1,
    ACTIONS(172), 1,
      sym_multiline_basic_string_end,
    STATE(42), 1,
      aux_sym_multiline_basic_string_repeat1,
    ACTIONS(170), 3,
      sym_multiline_basic_string_content,
      sym_escape_sequence,
      sym_escape_line_ending,
  [2260] = 6,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_basic_string_token1,
    ACTIONS(168), 1,
      aux_sym_multiline_basic_string_token1,
    ACTIONS(176), 1,
      sym_multiline_basic_string_end,
    STATE(44), 1,
      aux_sym_multiline_basic_string_repeat1,
    ACTIONS(174), 3,
      sym_multiline_basic_string_content,
      sym_escape_sequence,
      sym_escape_line_ending,
  [2281] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_bare_key,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    STATE(122), 1,
      sym_key,
    STATE(134), 1,
      sym_quoted_key,
    STATE(135), 2,
      sym_basic_string,
      sym_literal_string,
  [2304] = 6,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(178), 1,
      aux_sym_basic_string_token1,
    ACTIONS(181), 1,
      aux_sym_multiline_basic_string_token1,
    ACTIONS(187), 1,
      sym_multiline_basic_string_end,
    STATE(44), 1,
      aux_sym_multiline_basic_string_repeat1,
    ACTIONS(184), 3,
      sym_multiline_basic_string_content,
      sym_escape_sequence,
      sym_escape_line_ending,
  [2325] = 6,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_basic_string_token1,
    ACTIONS(168), 1,
      aux_sym_multiline_basic_string_token1,
    ACTIONS(189), 1,
      sym_multiline_basic_string_end,
    STATE(44), 1,
      aux_sym_multiline_basic_string_repeat1,
    ACTIONS(174), 3,
      sym_multiline_basic_string_content,
      sym_escape_sequence,
      sym_escape_line_ending,
  [2346] = 6,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_basic_string_token1,
    ACTIONS(168), 1,
      aux_sym_multiline_basic_string_token1,
    ACTIONS(193), 1,
      sym_multiline_basic_string_end,
    STATE(45), 1,
      aux_sym_multiline_basic_string_repeat1,
    ACTIONS(191), 3,
      sym_multiline_basic_string_content,
      sym_escape_sequence,
      sym_escape_line_ending,
  [2367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 6,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_LBRACK_LBRACK,
      sym_bare_key,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 6,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2394] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(206), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(49), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
  [2412] = 2,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(209), 6,
      sym_multiline_basic_string_content,
      sym_multiline_basic_string_end,
      aux_sym_basic_string_token1,
      aux_sym_multiline_basic_string_token1,
      sym_escape_sequence,
      sym_escape_line_ending,
  [2424] = 2,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(211), 6,
      sym_multiline_basic_string_content,
      sym_multiline_basic_string_end,
      aux_sym_basic_string_token1,
      aux_sym_multiline_basic_string_token1,
      sym_escape_sequence,
      sym_escape_line_ending,
  [2436] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(49), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
  [2454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 6,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 6,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 6,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2490] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    STATE(49), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
  [2508] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      aux_sym_array_repeat1,
    STATE(107), 1,
      aux_sym_array_repeat2,
  [2527] = 6,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_multiline_basic_string_token1,
    ACTIONS(226), 1,
      aux_sym_literal_string_token1,
    ACTIONS(229), 1,
      sym_multiline_literal_string_content,
    ACTIONS(232), 1,
      sym_multiline_literal_string_end,
    STATE(58), 1,
      aux_sym_multiline_literal_string_repeat1,
  [2546] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(116), 1,
      aux_sym_array_repeat2,
  [2565] = 6,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(236), 1,
      aux_sym_multiline_basic_string_token1,
    ACTIONS(238), 1,
      aux_sym_literal_string_token1,
    ACTIONS(240), 1,
      sym_multiline_literal_string_content,
    ACTIONS(242), 1,
      sym_multiline_literal_string_end,
    STATE(63), 1,
      aux_sym_multiline_literal_string_repeat1,
  [2584] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_array_repeat1,
    STATE(119), 1,
      aux_sym_array_repeat2,
  [2603] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_array_repeat1,
    STATE(108), 1,
      aux_sym_array_repeat2,
  [2622] = 6,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(236), 1,
      aux_sym_multiline_basic_string_token1,
    ACTIONS(238), 1,
      aux_sym_literal_string_token1,
    ACTIONS(248), 1,
      sym_multiline_literal_string_content,
    ACTIONS(250), 1,
      sym_multiline_literal_string_end,
    STATE(58), 1,
      aux_sym_multiline_literal_string_repeat1,
  [2641] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(105), 1,
      aux_sym_array_repeat2,
  [2660] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_array_repeat1,
    STATE(105), 1,
      aux_sym_array_repeat2,
  [2679] = 6,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(236), 1,
      aux_sym_multiline_basic_string_token1,
    ACTIONS(238), 1,
      aux_sym_literal_string_token1,
    ACTIONS(248), 1,
      sym_multiline_literal_string_content,
    ACTIONS(254), 1,
      sym_multiline_literal_string_end,
    STATE(58), 1,
      aux_sym_multiline_literal_string_repeat1,
  [2698] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(113), 1,
      aux_sym_array_repeat2,
  [2717] = 6,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(236), 1,
      aux_sym_multiline_basic_string_token1,
    ACTIONS(238), 1,
      aux_sym_literal_string_token1,
    ACTIONS(258), 1,
      sym_multiline_literal_string_content,
    ACTIONS(260), 1,
      sym_multiline_literal_string_end,
    STATE(66), 1,
      aux_sym_multiline_literal_string_repeat1,
  [2736] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(108), 1,
      aux_sym_array_repeat2,
  [2755] = 2,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(262), 4,
      sym_multiline_literal_string_content,
      sym_multiline_literal_string_end,
      aux_sym_multiline_basic_string_token1,
      aux_sym_literal_string_token1,
  [2765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2925] = 5,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(296), 1,
      aux_sym_basic_string_token1,
    ACTIONS(298), 1,
      anon_sym_DQUOTE2,
    ACTIONS(300), 1,
      sym_escape_sequence,
    STATE(88), 1,
      aux_sym_basic_string_repeat1,
  [2941] = 5,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(296), 1,
      aux_sym_basic_string_token1,
    ACTIONS(302), 1,
      anon_sym_DQUOTE2,
    ACTIONS(304), 1,
      sym_escape_sequence,
    STATE(100), 1,
      aux_sym_basic_string_repeat1,
  [2957] = 2,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(306), 4,
      sym_multiline_literal_string_content,
      sym_multiline_literal_string_end,
      aux_sym_multiline_basic_string_token1,
      aux_sym_literal_string_token1,
  [2967] = 5,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(296), 1,
      aux_sym_basic_string_token1,
    ACTIONS(308), 1,
      anon_sym_DQUOTE2,
    ACTIONS(310), 1,
      sym_escape_sequence,
    STATE(98), 1,
      aux_sym_basic_string_repeat1,
  [2983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    STATE(92), 1,
      aux_sym_array_repeat1,
    ACTIONS(312), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2997] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(314), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    STATE(94), 1,
      aux_sym_array_repeat1,
    ACTIONS(314), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(316), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3069] = 5,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(296), 1,
      aux_sym_basic_string_token1,
    ACTIONS(304), 1,
      sym_escape_sequence,
    ACTIONS(324), 1,
      anon_sym_DQUOTE2,
    STATE(100), 1,
      aux_sym_basic_string_repeat1,
  [3085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3095] = 5,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym_basic_string_token1,
    ACTIONS(331), 1,
      anon_sym_DQUOTE2,
    ACTIONS(333), 1,
      sym_escape_sequence,
    STATE(100), 1,
      aux_sym_basic_string_repeat1,
  [3111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3121] = 5,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(296), 1,
      aux_sym_basic_string_token1,
    ACTIONS(338), 1,
      anon_sym_DQUOTE2,
    ACTIONS(340), 1,
      sym_escape_sequence,
    STATE(103), 1,
      aux_sym_basic_string_repeat1,
  [3137] = 5,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(296), 1,
      aux_sym_basic_string_token1,
    ACTIONS(304), 1,
      sym_escape_sequence,
    ACTIONS(342), 1,
      anon_sym_DQUOTE2,
    STATE(100), 1,
      aux_sym_basic_string_repeat1,
  [3153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_array_repeat2,
  [3176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_inline_table_repeat1,
  [3189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_array_repeat2,
  [3202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_array_repeat2,
  [3215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 3,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
  [3224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_array_repeat2,
  [3237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      aux_sym_inline_table_repeat1,
  [3250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_inline_table_repeat1,
  [3263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_array_repeat2,
  [3276] = 2,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(364), 3,
      aux_sym_basic_string_token1,
      anon_sym_DQUOTE2,
      sym_escape_sequence,
  [3285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 3,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
  [3294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_array_repeat2,
  [3307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 3,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
  [3316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      aux_sym_inline_table_repeat1,
  [3329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_array_repeat2,
  [3342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_inline_table_repeat1,
  [3355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_EQ,
    ACTIONS(378), 1,
      anon_sym_DOT,
  [3365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(384), 1,
      anon_sym_DOT,
  [3431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_EQ,
  [3441] = 3,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(388), 1,
      aux_sym_literal_string_token1,
    ACTIONS(390), 1,
      anon_sym_SQUOTE2,
  [3451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(392), 1,
      anon_sym_RBRACK,
  [3461] = 3,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(394), 1,
      aux_sym_literal_string_token1,
    ACTIONS(396), 1,
      anon_sym_SQUOTE2,
  [3471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3487] = 3,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(398), 1,
      aux_sym_literal_string_token1,
    ACTIONS(400), 1,
      anon_sym_SQUOTE2,
  [3497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_SQUOTE2,
  [3504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym_line_ending_or_eof,
  [3511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_SQUOTE2,
  [3518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym_line_ending_or_eof,
  [3525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
  [3532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_line_ending_or_eof,
  [3539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym_line_ending_or_eof,
  [3546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym_line_ending_or_eof,
  [3553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_line_ending_or_eof,
  [3560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_line_ending_or_eof,
  [3567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_line_ending_or_eof,
  [3574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_line_ending_or_eof,
  [3581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_line_ending_or_eof,
  [3588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_line_ending_or_eof,
  [3595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_line_ending_or_eof,
  [3602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_line_ending_or_eof,
  [3609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_line_ending_or_eof,
  [3616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_line_ending_or_eof,
  [3623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_line_ending_or_eof,
  [3630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_line_ending_or_eof,
  [3637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_line_ending_or_eof,
  [3644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_line_ending_or_eof,
  [3651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_line_ending_or_eof,
  [3658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SQUOTE2,
  [3665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_line_ending_or_eof,
  [3672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_line_ending_or_eof,
  [3679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_line_ending_or_eof,
  [3686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_line_ending_or_eof,
  [3693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym_line_ending_or_eof,
  [3700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_line_ending_or_eof,
  [3707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym_line_ending_or_eof,
  [3714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_line_ending_or_eof,
  [3721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_line_ending_or_eof,
  [3728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_line_ending_or_eof,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 74,
  [SMALL_STATE(4)] = 148,
  [SMALL_STATE(5)] = 222,
  [SMALL_STATE(6)] = 296,
  [SMALL_STATE(7)] = 370,
  [SMALL_STATE(8)] = 444,
  [SMALL_STATE(9)] = 518,
  [SMALL_STATE(10)] = 592,
  [SMALL_STATE(11)] = 666,
  [SMALL_STATE(12)] = 740,
  [SMALL_STATE(13)] = 814,
  [SMALL_STATE(14)] = 888,
  [SMALL_STATE(15)] = 962,
  [SMALL_STATE(16)] = 1036,
  [SMALL_STATE(17)] = 1110,
  [SMALL_STATE(18)] = 1184,
  [SMALL_STATE(19)] = 1258,
  [SMALL_STATE(20)] = 1332,
  [SMALL_STATE(21)] = 1406,
  [SMALL_STATE(22)] = 1480,
  [SMALL_STATE(23)] = 1551,
  [SMALL_STATE(24)] = 1622,
  [SMALL_STATE(25)] = 1687,
  [SMALL_STATE(26)] = 1752,
  [SMALL_STATE(27)] = 1785,
  [SMALL_STATE(28)] = 1813,
  [SMALL_STATE(29)] = 1861,
  [SMALL_STATE(30)] = 1902,
  [SMALL_STATE(31)] = 1943,
  [SMALL_STATE(32)] = 1984,
  [SMALL_STATE(33)] = 2025,
  [SMALL_STATE(34)] = 2066,
  [SMALL_STATE(35)] = 2096,
  [SMALL_STATE(36)] = 2126,
  [SMALL_STATE(37)] = 2153,
  [SMALL_STATE(38)] = 2177,
  [SMALL_STATE(39)] = 2201,
  [SMALL_STATE(40)] = 2216,
  [SMALL_STATE(41)] = 2239,
  [SMALL_STATE(42)] = 2260,
  [SMALL_STATE(43)] = 2281,
  [SMALL_STATE(44)] = 2304,
  [SMALL_STATE(45)] = 2325,
  [SMALL_STATE(46)] = 2346,
  [SMALL_STATE(47)] = 2367,
  [SMALL_STATE(48)] = 2382,
  [SMALL_STATE(49)] = 2394,
  [SMALL_STATE(50)] = 2412,
  [SMALL_STATE(51)] = 2424,
  [SMALL_STATE(52)] = 2436,
  [SMALL_STATE(53)] = 2454,
  [SMALL_STATE(54)] = 2466,
  [SMALL_STATE(55)] = 2478,
  [SMALL_STATE(56)] = 2490,
  [SMALL_STATE(57)] = 2508,
  [SMALL_STATE(58)] = 2527,
  [SMALL_STATE(59)] = 2546,
  [SMALL_STATE(60)] = 2565,
  [SMALL_STATE(61)] = 2584,
  [SMALL_STATE(62)] = 2603,
  [SMALL_STATE(63)] = 2622,
  [SMALL_STATE(64)] = 2641,
  [SMALL_STATE(65)] = 2660,
  [SMALL_STATE(66)] = 2679,
  [SMALL_STATE(67)] = 2698,
  [SMALL_STATE(68)] = 2717,
  [SMALL_STATE(69)] = 2736,
  [SMALL_STATE(70)] = 2755,
  [SMALL_STATE(71)] = 2765,
  [SMALL_STATE(72)] = 2775,
  [SMALL_STATE(73)] = 2785,
  [SMALL_STATE(74)] = 2795,
  [SMALL_STATE(75)] = 2805,
  [SMALL_STATE(76)] = 2815,
  [SMALL_STATE(77)] = 2825,
  [SMALL_STATE(78)] = 2835,
  [SMALL_STATE(79)] = 2845,
  [SMALL_STATE(80)] = 2855,
  [SMALL_STATE(81)] = 2865,
  [SMALL_STATE(82)] = 2875,
  [SMALL_STATE(83)] = 2885,
  [SMALL_STATE(84)] = 2895,
  [SMALL_STATE(85)] = 2905,
  [SMALL_STATE(86)] = 2915,
  [SMALL_STATE(87)] = 2925,
  [SMALL_STATE(88)] = 2941,
  [SMALL_STATE(89)] = 2957,
  [SMALL_STATE(90)] = 2967,
  [SMALL_STATE(91)] = 2983,
  [SMALL_STATE(92)] = 2997,
  [SMALL_STATE(93)] = 3011,
  [SMALL_STATE(94)] = 3025,
  [SMALL_STATE(95)] = 3039,
  [SMALL_STATE(96)] = 3049,
  [SMALL_STATE(97)] = 3059,
  [SMALL_STATE(98)] = 3069,
  [SMALL_STATE(99)] = 3085,
  [SMALL_STATE(100)] = 3095,
  [SMALL_STATE(101)] = 3111,
  [SMALL_STATE(102)] = 3121,
  [SMALL_STATE(103)] = 3137,
  [SMALL_STATE(104)] = 3153,
  [SMALL_STATE(105)] = 3163,
  [SMALL_STATE(106)] = 3176,
  [SMALL_STATE(107)] = 3189,
  [SMALL_STATE(108)] = 3202,
  [SMALL_STATE(109)] = 3215,
  [SMALL_STATE(110)] = 3224,
  [SMALL_STATE(111)] = 3237,
  [SMALL_STATE(112)] = 3250,
  [SMALL_STATE(113)] = 3263,
  [SMALL_STATE(114)] = 3276,
  [SMALL_STATE(115)] = 3285,
  [SMALL_STATE(116)] = 3294,
  [SMALL_STATE(117)] = 3307,
  [SMALL_STATE(118)] = 3316,
  [SMALL_STATE(119)] = 3329,
  [SMALL_STATE(120)] = 3342,
  [SMALL_STATE(121)] = 3355,
  [SMALL_STATE(122)] = 3365,
  [SMALL_STATE(123)] = 3373,
  [SMALL_STATE(124)] = 3381,
  [SMALL_STATE(125)] = 3389,
  [SMALL_STATE(126)] = 3397,
  [SMALL_STATE(127)] = 3405,
  [SMALL_STATE(128)] = 3413,
  [SMALL_STATE(129)] = 3421,
  [SMALL_STATE(130)] = 3431,
  [SMALL_STATE(131)] = 3441,
  [SMALL_STATE(132)] = 3451,
  [SMALL_STATE(133)] = 3461,
  [SMALL_STATE(134)] = 3471,
  [SMALL_STATE(135)] = 3479,
  [SMALL_STATE(136)] = 3487,
  [SMALL_STATE(137)] = 3497,
  [SMALL_STATE(138)] = 3504,
  [SMALL_STATE(139)] = 3511,
  [SMALL_STATE(140)] = 3518,
  [SMALL_STATE(141)] = 3525,
  [SMALL_STATE(142)] = 3532,
  [SMALL_STATE(143)] = 3539,
  [SMALL_STATE(144)] = 3546,
  [SMALL_STATE(145)] = 3553,
  [SMALL_STATE(146)] = 3560,
  [SMALL_STATE(147)] = 3567,
  [SMALL_STATE(148)] = 3574,
  [SMALL_STATE(149)] = 3581,
  [SMALL_STATE(150)] = 3588,
  [SMALL_STATE(151)] = 3595,
  [SMALL_STATE(152)] = 3602,
  [SMALL_STATE(153)] = 3609,
  [SMALL_STATE(154)] = 3616,
  [SMALL_STATE(155)] = 3623,
  [SMALL_STATE(156)] = 3630,
  [SMALL_STATE(157)] = 3637,
  [SMALL_STATE(158)] = 3644,
  [SMALL_STATE(159)] = 3651,
  [SMALL_STATE(160)] = 3658,
  [SMALL_STATE(161)] = 3665,
  [SMALL_STATE(162)] = 3672,
  [SMALL_STATE(163)] = 3679,
  [SMALL_STATE(164)] = 3686,
  [SMALL_STATE(165)] = 3693,
  [SMALL_STATE(166)] = 3700,
  [SMALL_STATE(167)] = 3707,
  [SMALL_STATE(168)] = 3714,
  [SMALL_STATE(169)] = 3721,
  [SMALL_STATE(170)] = 3728,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1, 0, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1, 0, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_array_element, 4, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_array_element, 4, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 5, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 5, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_array_element, 5, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_array_element, 5, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 1, 0, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 1, 0, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_basic_string_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_basic_string_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_basic_string_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_basic_string_repeat1, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 3, 0, 6),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2, 0, 0),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2, 0, 0), SHIFT_REPEAT(37),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2, 0, 0), SHIFT_REPEAT(38),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_basic_string_repeat1, 1, 0, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_basic_string_repeat1, 1, 0, 13),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_string, 3, 0, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_string, 2, 0, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 2, 0, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_literal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_literal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_literal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_literal_string_repeat1, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_literal_string_repeat1, 1, 0, 14),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_value, 1, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_basic_string, 2, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_literal_string, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_table, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_basic_string, 3, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_literal_string, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_table, 3, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_table, 4, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 6, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 7, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 12),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_literal_string_repeat1, 1, 0, 13),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 3, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 4, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 7),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 8),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 9),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 10),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_string_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basic_string_repeat1, 2, 0, 0),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_string_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 11),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 8, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2, 0, 0), SHIFT_REPEAT(22),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_table_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_table_repeat1, 2, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basic_string_repeat1, 1, 0, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_key, 3, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_key, 1, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_pair, 3, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [406] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_line_ending_or_eof = 0,
  ts_external_token_multiline_basic_string_content = 1,
  ts_external_token_multiline_basic_string_end = 2,
  ts_external_token_multiline_literal_string_content = 3,
  ts_external_token_multiline_literal_string_end = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_line_ending_or_eof] = sym_line_ending_or_eof,
  [ts_external_token_multiline_basic_string_content] = sym_multiline_basic_string_content,
  [ts_external_token_multiline_basic_string_end] = sym_multiline_basic_string_end,
  [ts_external_token_multiline_literal_string_content] = sym_multiline_literal_string_content,
  [ts_external_token_multiline_literal_string_end] = sym_multiline_literal_string_end,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_line_ending_or_eof] = true,
    [ts_external_token_multiline_basic_string_content] = true,
    [ts_external_token_multiline_basic_string_end] = true,
    [ts_external_token_multiline_literal_string_content] = true,
    [ts_external_token_multiline_literal_string_end] = true,
  },
  [2] = {
    [ts_external_token_multiline_basic_string_content] = true,
    [ts_external_token_multiline_basic_string_end] = true,
  },
  [3] = {
    [ts_external_token_multiline_literal_string_content] = true,
    [ts_external_token_multiline_literal_string_end] = true,
  },
  [4] = {
    [ts_external_token_line_ending_or_eof] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_toml_external_scanner_create(void);
void tree_sitter_toml_external_scanner_destroy(void *);
bool tree_sitter_toml_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_toml_external_scanner_serialize(void *, char *);
void tree_sitter_toml_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_toml(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_toml_external_scanner_create,
      tree_sitter_toml_external_scanner_destroy,
      tree_sitter_toml_external_scanner_scan,
      tree_sitter_toml_external_scanner_serialize,
      tree_sitter_toml_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
