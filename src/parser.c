#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 3
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_spriteTypes = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_spriteType = 4,
  anon_sym_name = 5,
  anon_sym_path = 6,
  anon_sym_archive = 7,
  aux_sym__statement_mod_archive_token1 = 8,
  anon_sym_remote_file_id = 9,
  aux_sym__statement_mod_remote_file_id_token1 = 10,
  anon_sym_version = 11,
  aux_sym__statement_mod_version_token1 = 12,
  anon_sym_picture = 13,
  anon_sym_supported_version = 14,
  aux_sym__statement_mod_supported_version_token1 = 15,
  anon_sym_tags = 16,
  aux_sym__mod_tags_keyword_token1 = 17,
  aux_sym__mod_tags_keyword_token2 = 18,
  aux_sym__mod_tags_keyword_token3 = 19,
  aux_sym__mod_tags_keyword_token4 = 20,
  aux_sym__mod_tags_keyword_token5 = 21,
  aux_sym__mod_tags_keyword_token6 = 22,
  aux_sym__mod_tags_keyword_token7 = 23,
  aux_sym__mod_tags_keyword_token8 = 24,
  aux_sym__mod_tags_keyword_token9 = 25,
  aux_sym__mod_tags_keyword_token10 = 26,
  aux_sym__mod_tags_keyword_token11 = 27,
  aux_sym__mod_tags_keyword_token12 = 28,
  aux_sym__mod_tags_keyword_token13 = 29,
  aux_sym__mod_tags_keyword_token14 = 30,
  aux_sym__mod_tags_keyword_token15 = 31,
  aux_sym__mod_tags_keyword_token16 = 32,
  aux_sym__mod_tags_keyword_token17 = 33,
  aux_sym__mod_tags_keyword_token18 = 34,
  aux_sym__mod_tags_keyword_token19 = 35,
  aux_sym__mod_tags_keyword_token20 = 36,
  aux_sym__mod_tags_keyword_token21 = 37,
  aux_sym__mod_tags_keyword_token22 = 38,
  anon_sym_dependencies = 39,
  anon_sym_texturefile = 40,
  anon_sym_cursor_offset = 41,
  sym_assign_equal = 42,
  sym_string = 43,
  sym_number = 44,
  sym_comment = 45,
  sym_file = 46,
  sym_dot_mod = 47,
  sym_dot_gfx = 48,
  sym__spriteTypes = 49,
  sym__spriteTypes_block = 50,
  sym__spriteTypes_statement = 51,
  sym__spriteTypes_type = 52,
  sym__spriteType = 53,
  sym__spriteType_block = 54,
  sym__statement_name = 55,
  sym__statement_mod_path = 56,
  sym__statement_mod_archive = 57,
  sym__statement_mod_remote_file_id = 58,
  sym__statement_mod_version = 59,
  sym__statement_mod_picture = 60,
  sym__statement_mod_supported_version = 61,
  sym__statement_mod_tags = 62,
  sym__mod_tags_block = 63,
  sym__mod_tags_keyword = 64,
  sym__statement_mod_dependencies = 65,
  sym__mod_dependencies_block = 66,
  sym__statement_gfx_texturefile = 67,
  sym__statement_gfx_cursor_offset = 68,
  aux_sym_dot_mod_repeat1 = 69,
  aux_sym_dot_gfx_repeat1 = 70,
  aux_sym__spriteTypes_block_repeat1 = 71,
  aux_sym__spriteType_block_repeat1 = 72,
  aux_sym__mod_tags_block_repeat1 = 73,
  aux_sym__mod_dependencies_block_repeat1 = 74,
  alias_sym_dependencies = 75,
  alias_sym_name_value = 76,
  alias_sym_statement = 77,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_spriteTypes] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_spriteType] = "identifier",
  [anon_sym_name] = "name_identifier",
  [anon_sym_path] = "identifier",
  [anon_sym_archive] = "identifier",
  [aux_sym__statement_mod_archive_token1] = "string",
  [anon_sym_remote_file_id] = "identifier",
  [aux_sym__statement_mod_remote_file_id_token1] = "string",
  [anon_sym_version] = "identifier",
  [aux_sym__statement_mod_version_token1] = "string",
  [anon_sym_picture] = "identifier",
  [anon_sym_supported_version] = "identifier",
  [aux_sym__statement_mod_supported_version_token1] = "string",
  [anon_sym_tags] = "identifier",
  [aux_sym__mod_tags_keyword_token1] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token2] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token3] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token4] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token5] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token6] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token7] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token8] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token9] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token10] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token11] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token12] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token13] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token14] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token15] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token16] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token17] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token18] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token19] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token20] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token21] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token22] = "tags_keyword",
  [anon_sym_dependencies] = "identifier",
  [anon_sym_texturefile] = "identifier",
  [anon_sym_cursor_offset] = "identifier",
  [sym_assign_equal] = "assign_equal",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_file] = "file",
  [sym_dot_mod] = "dot_mod",
  [sym_dot_gfx] = "dot_gfx",
  [sym__spriteTypes] = "types_definition",
  [sym__spriteTypes_block] = "_spriteTypes_block",
  [sym__spriteTypes_statement] = "_spriteTypes_statement",
  [sym__spriteTypes_type] = "_spriteTypes_type",
  [sym__spriteType] = "type_definition",
  [sym__spriteType_block] = "_spriteType_block",
  [sym__statement_name] = "_statement_name",
  [sym__statement_mod_path] = "_statement_mod_path",
  [sym__statement_mod_archive] = "_statement_mod_archive",
  [sym__statement_mod_remote_file_id] = "_statement_mod_remote_file_id",
  [sym__statement_mod_version] = "_statement_mod_version",
  [sym__statement_mod_picture] = "_statement_mod_picture",
  [sym__statement_mod_supported_version] = "_statement_mod_supported_version",
  [sym__statement_mod_tags] = "_statement_mod_tags",
  [sym__mod_tags_block] = "_mod_tags_block",
  [sym__mod_tags_keyword] = "_mod_tags_keyword",
  [sym__statement_mod_dependencies] = "_statement_mod_dependencies",
  [sym__mod_dependencies_block] = "_mod_dependencies_block",
  [sym__statement_gfx_texturefile] = "statement",
  [sym__statement_gfx_cursor_offset] = "statement",
  [aux_sym_dot_mod_repeat1] = "dot_mod_repeat1",
  [aux_sym_dot_gfx_repeat1] = "dot_gfx_repeat1",
  [aux_sym__spriteTypes_block_repeat1] = "_spriteTypes_block_repeat1",
  [aux_sym__spriteType_block_repeat1] = "_spriteType_block_repeat1",
  [aux_sym__mod_tags_block_repeat1] = "_mod_tags_block_repeat1",
  [aux_sym__mod_dependencies_block_repeat1] = "_mod_dependencies_block_repeat1",
  [alias_sym_dependencies] = "dependencies",
  [alias_sym_name_value] = "name_value",
  [alias_sym_statement] = "statement",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_spriteTypes] = anon_sym_spriteTypes,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_spriteType] = anon_sym_spriteTypes,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_path] = anon_sym_spriteTypes,
  [anon_sym_archive] = anon_sym_spriteTypes,
  [aux_sym__statement_mod_archive_token1] = sym_string,
  [anon_sym_remote_file_id] = anon_sym_spriteTypes,
  [aux_sym__statement_mod_remote_file_id_token1] = sym_string,
  [anon_sym_version] = anon_sym_spriteTypes,
  [aux_sym__statement_mod_version_token1] = sym_string,
  [anon_sym_picture] = anon_sym_spriteTypes,
  [anon_sym_supported_version] = anon_sym_spriteTypes,
  [aux_sym__statement_mod_supported_version_token1] = sym_string,
  [anon_sym_tags] = anon_sym_spriteTypes,
  [aux_sym__mod_tags_keyword_token1] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token2] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token3] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token4] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token5] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token6] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token7] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token8] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token9] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token10] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token11] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token12] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token13] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token14] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token15] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token16] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token17] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token18] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token19] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token20] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token21] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token22] = aux_sym__mod_tags_keyword_token1,
  [anon_sym_dependencies] = anon_sym_spriteTypes,
  [anon_sym_texturefile] = anon_sym_spriteTypes,
  [anon_sym_cursor_offset] = anon_sym_spriteTypes,
  [sym_assign_equal] = sym_assign_equal,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym_file] = sym_file,
  [sym_dot_mod] = sym_dot_mod,
  [sym_dot_gfx] = sym_dot_gfx,
  [sym__spriteTypes] = sym__spriteTypes,
  [sym__spriteTypes_block] = sym__spriteTypes_block,
  [sym__spriteTypes_statement] = sym__spriteTypes_statement,
  [sym__spriteTypes_type] = sym__spriteTypes_type,
  [sym__spriteType] = sym__spriteType,
  [sym__spriteType_block] = sym__spriteType_block,
  [sym__statement_name] = sym__statement_name,
  [sym__statement_mod_path] = sym__statement_mod_path,
  [sym__statement_mod_archive] = sym__statement_mod_archive,
  [sym__statement_mod_remote_file_id] = sym__statement_mod_remote_file_id,
  [sym__statement_mod_version] = sym__statement_mod_version,
  [sym__statement_mod_picture] = sym__statement_mod_picture,
  [sym__statement_mod_supported_version] = sym__statement_mod_supported_version,
  [sym__statement_mod_tags] = sym__statement_mod_tags,
  [sym__mod_tags_block] = sym__mod_tags_block,
  [sym__mod_tags_keyword] = sym__mod_tags_keyword,
  [sym__statement_mod_dependencies] = sym__statement_mod_dependencies,
  [sym__mod_dependencies_block] = sym__mod_dependencies_block,
  [sym__statement_gfx_texturefile] = sym__statement_gfx_texturefile,
  [sym__statement_gfx_cursor_offset] = sym__statement_gfx_texturefile,
  [aux_sym_dot_mod_repeat1] = aux_sym_dot_mod_repeat1,
  [aux_sym_dot_gfx_repeat1] = aux_sym_dot_gfx_repeat1,
  [aux_sym__spriteTypes_block_repeat1] = aux_sym__spriteTypes_block_repeat1,
  [aux_sym__spriteType_block_repeat1] = aux_sym__spriteType_block_repeat1,
  [aux_sym__mod_tags_block_repeat1] = aux_sym__mod_tags_block_repeat1,
  [aux_sym__mod_dependencies_block_repeat1] = aux_sym__mod_dependencies_block_repeat1,
  [alias_sym_dependencies] = alias_sym_dependencies,
  [alias_sym_name_value] = alias_sym_name_value,
  [alias_sym_statement] = alias_sym_statement,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_spriteTypes] = {
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
  [anon_sym_spriteType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_archive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_mod_archive_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_remote_file_id] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_mod_remote_file_id_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_mod_version_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_picture] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_supported_version] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_mod_supported_version_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tags] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token4] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token5] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token6] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token7] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token8] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token9] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token10] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token11] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token12] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token13] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token14] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token15] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token16] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token17] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token18] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token19] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token20] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token21] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token22] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_dependencies] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_texturefile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cursor_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_gfx] = {
    .visible = true,
    .named = true,
  },
  [sym__spriteTypes] = {
    .visible = true,
    .named = true,
  },
  [sym__spriteTypes_block] = {
    .visible = false,
    .named = true,
  },
  [sym__spriteTypes_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__spriteTypes_type] = {
    .visible = false,
    .named = true,
  },
  [sym__spriteType] = {
    .visible = true,
    .named = true,
  },
  [sym__spriteType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_name] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_path] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_archive] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_remote_file_id] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_version] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_picture] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_supported_version] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_tags] = {
    .visible = false,
    .named = true,
  },
  [sym__mod_tags_block] = {
    .visible = false,
    .named = true,
  },
  [sym__mod_tags_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_dependencies] = {
    .visible = false,
    .named = true,
  },
  [sym__mod_dependencies_block] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_texturefile] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_cursor_offset] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_dot_mod_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dot_gfx_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__spriteTypes_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__spriteType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mod_tags_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mod_dependencies_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_dependencies] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_statement] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_name_value,
  },
  [2] = {
    [0] = alias_sym_dependencies,
  },
  [3] = {
    [0] = alias_sym_statement,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(587);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '#') ADVANCE(635);
      if (lookahead == '-') ADVANCE(579);
      if (lookahead == '=') ADVANCE(630);
      if (lookahead == '\\') SKIP(583)
      if (lookahead == 'a') ADVANCE(543);
      if (lookahead == 'c') ADVANCE(570);
      if (lookahead == 'd') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(471);
      if (lookahead == 'p') ADVANCE(472);
      if (lookahead == 'r') ADVANCE(490);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead == 'v') ADVANCE(494);
      if (lookahead == '{') ADVANCE(589);
      if (lookahead == '}') ADVANCE(590);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(633);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(273)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(273)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(274)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(274)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(210);
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(211);
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(205);
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(209);
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(208);
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(206);
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(456);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(457);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(451);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(455);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(453);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(454);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(452);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(278);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(598);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(38);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(140);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(88);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(35);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(89);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(143);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(598);
      if (lookahead == '*') ADVANCE(459);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(358);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(285);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(387);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(442);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(335);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(282);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(390);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(286);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(294);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(316);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(388);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(312);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(598);
      if (lookahead == '.') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(598);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'z') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'z') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '*') ADVANCE(215);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'z') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '*') ADVANCE(215);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'z') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '*') ADVANCE(217);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'z') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '*') ADVANCE(217);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'z') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'C') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'I') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'I') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'K') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 73:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 74:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 75:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 76:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 77:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 78:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 79:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 80:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 81:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 82:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 83:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'g') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 84:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'g') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 85:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'g') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 86:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 87:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 88:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 89:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 90:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 91:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 92:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 93:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 94:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 95:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 96:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 97:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 98:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 99:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 100:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 101:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 102:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 103:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 104:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 105:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 106:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 107:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 108:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 109:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 110:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 111:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 112:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 113:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 114:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 115:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 116:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 117:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 118:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 119:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 120:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 121:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 122:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'm') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 123:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 124:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 125:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 126:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 127:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 128:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 129:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 130:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 131:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 132:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 133:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 134:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 135:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 136:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 137:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 138:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 139:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 140:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 141:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 142:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 143:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 144:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 145:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 146:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 147:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 148:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 149:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 150:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 151:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 152:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 153:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 154:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 155:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 156:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'p') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 157:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'p') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 158:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 159:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'p') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 160:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 161:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 162:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 163:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 164:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 165:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 166:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 167:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 168:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 169:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 170:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 171:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 172:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 173:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 174:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 175:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 176:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 177:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 178:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 179:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 180:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 181:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 182:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 183:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 184:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 185:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 186:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 187:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 188:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 189:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 190:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 191:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 192:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 193:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 194:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'u') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 195:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'v') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 196:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'v') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 197:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'v') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 198:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'w') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 199:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'x') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 200:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'y') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 201:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'y') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 202:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'y') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 203:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'z') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 204:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'z') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 205:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 206:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 207:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 208:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 209:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 210:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 211:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 212:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 213:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 214:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 215:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 216:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 217:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 218:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 219:
      if (lookahead == '"') ADVANCE(615);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 220:
      if (lookahead == '"') ADVANCE(615);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 221:
      if (lookahead == '"') ADVANCE(600);
      if (lookahead == '.') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 222:
      if (lookahead == '"') ADVANCE(600);
      if (lookahead == '.') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 223:
      if (lookahead == '"') ADVANCE(600);
      if (lookahead == '.') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 224:
      if (lookahead == '"') ADVANCE(600);
      if (lookahead == '.') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 225:
      if (lookahead == '"') ADVANCE(596);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 226:
      if (lookahead == '"') ADVANCE(596);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 227:
      if (lookahead == '"') ADVANCE(609);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 228:
      if (lookahead == '"') ADVANCE(609);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 229:
      if (lookahead == '"') ADVANCE(612);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 230:
      if (lookahead == '"') ADVANCE(612);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 231:
      if (lookahead == '"') ADVANCE(621);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 232:
      if (lookahead == '"') ADVANCE(621);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 233:
      if (lookahead == '"') ADVANCE(623);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 234:
      if (lookahead == '"') ADVANCE(623);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 235:
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 236:
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 237:
      if (lookahead == '"') ADVANCE(603);
      if (lookahead == '.') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 238:
      if (lookahead == '"') ADVANCE(603);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 239:
      if (lookahead == '"') ADVANCE(603);
      if (lookahead == '.') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 240:
      if (lookahead == '"') ADVANCE(603);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 241:
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 242:
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 243:
      if (lookahead == '"') ADVANCE(610);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 244:
      if (lookahead == '"') ADVANCE(610);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 245:
      if (lookahead == '"') ADVANCE(611);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 246:
      if (lookahead == '"') ADVANCE(611);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 247:
      if (lookahead == '"') ADVANCE(616);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 248:
      if (lookahead == '"') ADVANCE(616);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 249:
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 250:
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 251:
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 252:
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 253:
      if (lookahead == '"') ADVANCE(625);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 254:
      if (lookahead == '"') ADVANCE(625);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 255:
      if (lookahead == '"') ADVANCE(613);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 256:
      if (lookahead == '"') ADVANCE(613);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 257:
      if (lookahead == '"') ADVANCE(619);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 258:
      if (lookahead == '"') ADVANCE(619);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 259:
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 260:
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 261:
      if (lookahead == '"') ADVANCE(622);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 262:
      if (lookahead == '"') ADVANCE(622);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 263:
      if (lookahead == '"') ADVANCE(614);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 264:
      if (lookahead == '"') ADVANCE(614);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 265:
      if (lookahead == '"') ADVANCE(618);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 266:
      if (lookahead == '"') ADVANCE(618);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 267:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 268:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 269:
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 270:
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 271:
      if (lookahead == '"') ADVANCE(617);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 272:
      if (lookahead == '"') ADVANCE(617);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 273:
      if (lookahead == '"') ADVANCE(218);
      if (lookahead == '#') ADVANCE(635);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'c') ADVANCE(570);
      if (lookahead == 's') ADVANCE(542);
      if (lookahead == '{') ADVANCE(589);
      if (lookahead == '}') ADVANCE(590);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(273)
      END_STATE();
    case 274:
      if (lookahead == '"') ADVANCE(581);
      if (lookahead == '#') ADVANCE(635);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(274)
      END_STATE();
    case 275:
      if (lookahead == '*') ADVANCE(240);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'z') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 276:
      if (lookahead == '*') ADVANCE(461);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'z') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 277:
      if (lookahead == '*') ADVANCE(463);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'z') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 278:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'C') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 279:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'I') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 280:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'I') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 281:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'K') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 282:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(288);
      if (lookahead == 'u') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 283:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 284:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 285:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 286:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(404);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 287:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 288:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 289:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 290:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 291:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 292:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 293:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 294:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 295:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 296:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 297:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 298:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 299:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 300:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'c') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 301:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'c') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 302:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 303:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'c') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 304:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'c') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 305:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 306:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'd') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 307:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 308:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'd') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 309:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 310:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'd') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 311:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'd') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 312:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 313:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 314:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 315:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 316:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 317:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 318:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 319:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 320:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 321:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 322:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 323:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 324:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 325:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 326:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 327:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 328:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 329:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 330:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'g') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 331:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'g') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 332:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'g') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 333:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'h') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 334:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'h') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 335:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 336:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 337:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 338:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 339:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 340:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 341:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 342:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 343:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 344:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 345:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 346:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 347:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 348:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 349:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 350:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 351:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 352:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 353:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 354:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 355:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 356:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 357:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 358:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'l') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 359:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 360:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 361:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'l') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 362:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'l') ADVANCE(341);
      if (lookahead == 's') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 363:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 364:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 365:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'l') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 366:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 367:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 368:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'm') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 369:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 370:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 371:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 372:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'n') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 373:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 374:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'n') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 375:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 376:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 377:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 378:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 379:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 380:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 381:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'n') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 382:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 383:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'n') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 384:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 385:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'n') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 386:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'n') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 387:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'o') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 388:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'o') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 389:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 390:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'o') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 391:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 392:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 393:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'o') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 394:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 395:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'o') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 396:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'o') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 397:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 398:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 399:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'o') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 400:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'o') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 401:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'o') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 402:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'p') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 403:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'p') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 404:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'p') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 405:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'p') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 406:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 407:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 408:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'r') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 409:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'r') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 410:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 411:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 412:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'r') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 413:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'r') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 414:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 's') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 415:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 416:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 417:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 's') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 418:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 419:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 420:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 's') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 421:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 422:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 's') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 423:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 424:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 's') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 425:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 's') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 426:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 427:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 's') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 428:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 's') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 429:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 't') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 430:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 't') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 431:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 't') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 432:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 433:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 't') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 434:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 't') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 435:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 436:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 't') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 437:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 438:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 439:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 't') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 440:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 't') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 441:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'u') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 442:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'v') ADVANCE(314);
      if (lookahead == 'x') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 443:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'v') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 444:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'v') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 445:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'w') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 446:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'x') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 447:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'y') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 448:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'y') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 449:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'y') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 450:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'z') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 451:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 452:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 453:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 454:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 455:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 456:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 457:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 458:
      if (lookahead == '.') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 459:
      if (lookahead == '.') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 460:
      if (lookahead == '.') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 461:
      if (lookahead == '.') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 462:
      if (lookahead == '.') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 463:
      if (lookahead == '.') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(458);
      END_STATE();
    case 464:
      if (lookahead == 'T') ADVANCE(576);
      END_STATE();
    case 465:
      if (lookahead == 'T') ADVANCE(577);
      END_STATE();
    case 466:
      if (lookahead == 'T') ADVANCE(578);
      END_STATE();
    case 467:
      if (lookahead == '_') ADVANCE(505);
      END_STATE();
    case 468:
      if (lookahead == '_') ADVANCE(529);
      END_STATE();
    case 469:
      if (lookahead == '_') ADVANCE(513);
      END_STATE();
    case 470:
      if (lookahead == '_') ADVANCE(574);
      END_STATE();
    case 471:
      if (lookahead == 'a') ADVANCE(523);
      END_STATE();
    case 472:
      if (lookahead == 'a') ADVANCE(562);
      if (lookahead == 'i') ADVANCE(476);
      END_STATE();
    case 473:
      if (lookahead == 'a') ADVANCE(507);
      END_STATE();
    case 474:
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 475:
      if (lookahead == 'c') ADVANCE(509);
      END_STATE();
    case 476:
      if (lookahead == 'c') ADVANCE(566);
      END_STATE();
    case 477:
      if (lookahead == 'c') ADVANCE(515);
      END_STATE();
    case 478:
      if (lookahead == 'd') ADVANCE(597);
      END_STATE();
    case 479:
      if (lookahead == 'd') ADVANCE(470);
      END_STATE();
    case 480:
      if (lookahead == 'd') ADVANCE(493);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(561);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 500:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 501:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 503:
      if (lookahead == 'f') ADVANCE(504);
      END_STATE();
    case 504:
      if (lookahead == 'f') ADVANCE(560);
      END_STATE();
    case 505:
      if (lookahead == 'f') ADVANCE(511);
      END_STATE();
    case 506:
      if (lookahead == 'f') ADVANCE(516);
      END_STATE();
    case 507:
      if (lookahead == 'g') ADVANCE(554);
      END_STATE();
    case 508:
      if (lookahead == 'h') ADVANCE(594);
      END_STATE();
    case 509:
      if (lookahead == 'h') ADVANCE(510);
      END_STATE();
    case 510:
      if (lookahead == 'i') ADVANCE(573);
      END_STATE();
    case 511:
      if (lookahead == 'i') ADVANCE(520);
      END_STATE();
    case 512:
      if (lookahead == 'i') ADVANCE(528);
      END_STATE();
    case 513:
      if (lookahead == 'i') ADVANCE(478);
      END_STATE();
    case 514:
      if (lookahead == 'i') ADVANCE(531);
      END_STATE();
    case 515:
      if (lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 516:
      if (lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 517:
      if (lookahead == 'i') ADVANCE(564);
      END_STATE();
    case 518:
      if (lookahead == 'i') ADVANCE(568);
      END_STATE();
    case 519:
      if (lookahead == 'i') ADVANCE(569);
      END_STATE();
    case 520:
      if (lookahead == 'l') ADVANCE(496);
      END_STATE();
    case 521:
      if (lookahead == 'l') ADVANCE(488);
      END_STATE();
    case 522:
      if (lookahead == 'm') ADVANCE(530);
      END_STATE();
    case 523:
      if (lookahead == 'm') ADVANCE(483);
      END_STATE();
    case 524:
      if (lookahead == 'n') ADVANCE(480);
      END_STATE();
    case 525:
      if (lookahead == 'n') ADVANCE(599);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(602);
      END_STATE();
    case 527:
      if (lookahead == 'n') ADVANCE(477);
      END_STATE();
    case 528:
      if (lookahead == 'o') ADVANCE(525);
      END_STATE();
    case 529:
      if (lookahead == 'o') ADVANCE(503);
      END_STATE();
    case 530:
      if (lookahead == 'o') ADVANCE(563);
      END_STATE();
    case 531:
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 532:
      if (lookahead == 'o') ADVANCE(546);
      END_STATE();
    case 533:
      if (lookahead == 'o') ADVANCE(551);
      END_STATE();
    case 534:
      if (lookahead == 'p') ADVANCE(545);
      if (lookahead == 'u') ADVANCE(535);
      END_STATE();
    case 535:
      if (lookahead == 'p') ADVANCE(540);
      END_STATE();
    case 536:
      if (lookahead == 'p') ADVANCE(482);
      END_STATE();
    case 537:
      if (lookahead == 'p') ADVANCE(487);
      END_STATE();
    case 538:
      if (lookahead == 'p') ADVANCE(498);
      END_STATE();
    case 539:
      if (lookahead == 'p') ADVANCE(489);
      END_STATE();
    case 540:
      if (lookahead == 'p') ADVANCE(533);
      END_STATE();
    case 541:
      if (lookahead == 'p') ADVANCE(552);
      if (lookahead == 'u') ADVANCE(535);
      END_STATE();
    case 542:
      if (lookahead == 'p') ADVANCE(553);
      END_STATE();
    case 543:
      if (lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 544:
      if (lookahead == 'r') ADVANCE(557);
      END_STATE();
    case 545:
      if (lookahead == 'r') ADVANCE(517);
      END_STATE();
    case 546:
      if (lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 547:
      if (lookahead == 'r') ADVANCE(558);
      END_STATE();
    case 548:
      if (lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 549:
      if (lookahead == 'r') ADVANCE(500);
      END_STATE();
    case 550:
      if (lookahead == 'r') ADVANCE(559);
      END_STATE();
    case 551:
      if (lookahead == 'r') ADVANCE(565);
      END_STATE();
    case 552:
      if (lookahead == 'r') ADVANCE(518);
      END_STATE();
    case 553:
      if (lookahead == 'r') ADVANCE(519);
      END_STATE();
    case 554:
      if (lookahead == 's') ADVANCE(604);
      END_STATE();
    case 555:
      if (lookahead == 's') ADVANCE(588);
      END_STATE();
    case 556:
      if (lookahead == 's') ADVANCE(627);
      END_STATE();
    case 557:
      if (lookahead == 's') ADVANCE(532);
      END_STATE();
    case 558:
      if (lookahead == 's') ADVANCE(512);
      END_STATE();
    case 559:
      if (lookahead == 's') ADVANCE(514);
      END_STATE();
    case 560:
      if (lookahead == 's') ADVANCE(495);
      END_STATE();
    case 561:
      if (lookahead == 't') ADVANCE(629);
      END_STATE();
    case 562:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 563:
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 564:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 565:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 566:
      if (lookahead == 't') ADVANCE(571);
      END_STATE();
    case 567:
      if (lookahead == 't') ADVANCE(572);
      END_STATE();
    case 568:
      if (lookahead == 't') ADVANCE(501);
      END_STATE();
    case 569:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 570:
      if (lookahead == 'u') ADVANCE(544);
      END_STATE();
    case 571:
      if (lookahead == 'u') ADVANCE(548);
      END_STATE();
    case 572:
      if (lookahead == 'u') ADVANCE(549);
      END_STATE();
    case 573:
      if (lookahead == 'v') ADVANCE(485);
      END_STATE();
    case 574:
      if (lookahead == 'v') ADVANCE(499);
      END_STATE();
    case 575:
      if (lookahead == 'x') ADVANCE(567);
      END_STATE();
    case 576:
      if (lookahead == 'y') ADVANCE(537);
      END_STATE();
    case 577:
      if (lookahead == 'y') ADVANCE(538);
      END_STATE();
    case 578:
      if (lookahead == 'y') ADVANCE(539);
      END_STATE();
    case 579:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(633);
      END_STATE();
    case 580:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      END_STATE();
    case 581:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 582:
      if (eof) ADVANCE(587);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 583:
      if (eof) ADVANCE(587);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(582)
      END_STATE();
    case 584:
      if (eof) ADVANCE(587);
      if (lookahead == '\n') SKIP(586)
      END_STATE();
    case 585:
      if (eof) ADVANCE(587);
      if (lookahead == '\n') SKIP(586)
      if (lookahead == '\r') SKIP(584)
      END_STATE();
    case 586:
      if (eof) ADVANCE(587);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(635);
      if (lookahead == '\\') SKIP(585)
      if (lookahead == 'a') ADVANCE(543);
      if (lookahead == 'd') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(471);
      if (lookahead == 'p') ADVANCE(472);
      if (lookahead == 'r') ADVANCE(490);
      if (lookahead == 's') ADVANCE(541);
      if (lookahead == 't') ADVANCE(473);
      if (lookahead == 'v') ADVANCE(494);
      if (lookahead == '}') ADVANCE(590);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(586)
      END_STATE();
    case 587:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_spriteTypes);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_spriteType);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_spriteType);
      if (lookahead == 's') ADVANCE(588);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_archive);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__statement_mod_archive_token1);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_remote_file_id);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__statement_mod_remote_file_id_token1);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__statement_mod_version_token1);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_supported_version);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__statement_mod_supported_version_token1);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token1);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token2);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token3);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token4);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token5);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token6);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token7);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token8);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token9);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token10);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token11);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token12);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token13);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token14);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token15);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token16);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token17);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token18);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token19);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token20);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token21);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token22);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_dependencies);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_texturefile);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_cursor_offset);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_assign_equal);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(580);
      if (lookahead == 'f') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(633);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'f') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(635);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 586},
  [2] = {.lex_state = 586},
  [3] = {.lex_state = 586},
  [4] = {.lex_state = 586},
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
  [29] = {.lex_state = 273},
  [30] = {.lex_state = 273},
  [31] = {.lex_state = 273},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 586},
  [36] = {.lex_state = 273},
  [37] = {.lex_state = 586},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 273},
  [40] = {.lex_state = 273},
  [41] = {.lex_state = 273},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 273},
  [45] = {.lex_state = 273},
  [46] = {.lex_state = 273},
  [47] = {.lex_state = 273},
  [48] = {.lex_state = 586},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 273},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 586},
  [54] = {.lex_state = 586},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 273},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 586},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 586},
  [63] = {.lex_state = 274},
  [64] = {.lex_state = 273},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 273},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 586},
  [71] = {.lex_state = 273},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_spriteTypes] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_spriteType] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_path] = ACTIONS(1),
    [anon_sym_archive] = ACTIONS(1),
    [aux_sym__statement_mod_archive_token1] = ACTIONS(1),
    [anon_sym_remote_file_id] = ACTIONS(1),
    [aux_sym__statement_mod_remote_file_id_token1] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [aux_sym__statement_mod_version_token1] = ACTIONS(1),
    [anon_sym_picture] = ACTIONS(1),
    [anon_sym_supported_version] = ACTIONS(1),
    [aux_sym__statement_mod_supported_version_token1] = ACTIONS(1),
    [anon_sym_tags] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token1] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token2] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token3] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token4] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token5] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token6] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token7] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token8] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token9] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token10] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token11] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token12] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token13] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token14] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token15] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token16] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token17] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token18] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token19] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token20] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token21] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token22] = ACTIONS(1),
    [anon_sym_dependencies] = ACTIONS(1),
    [anon_sym_texturefile] = ACTIONS(1),
    [anon_sym_cursor_offset] = ACTIONS(1),
    [sym_assign_equal] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_file] = STATE(58),
    [sym_dot_mod] = STATE(57),
    [sym_dot_gfx] = STATE(57),
    [sym__spriteTypes] = STATE(37),
    [sym__statement_name] = STATE(6),
    [sym__statement_mod_path] = STATE(6),
    [sym__statement_mod_archive] = STATE(6),
    [sym__statement_mod_remote_file_id] = STATE(6),
    [sym__statement_mod_version] = STATE(6),
    [sym__statement_mod_picture] = STATE(6),
    [sym__statement_mod_supported_version] = STATE(6),
    [sym__statement_mod_tags] = STATE(6),
    [sym__statement_mod_dependencies] = STATE(6),
    [aux_sym_dot_mod_repeat1] = STATE(6),
    [aux_sym_dot_gfx_repeat1] = STATE(37),
    [anon_sym_spriteTypes] = ACTIONS(5),
    [anon_sym_name] = ACTIONS(7),
    [anon_sym_path] = ACTIONS(9),
    [anon_sym_archive] = ACTIONS(11),
    [anon_sym_remote_file_id] = ACTIONS(13),
    [anon_sym_version] = ACTIONS(15),
    [anon_sym_picture] = ACTIONS(17),
    [anon_sym_supported_version] = ACTIONS(19),
    [anon_sym_tags] = ACTIONS(21),
    [anon_sym_dependencies] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(2), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(27), 22,
      aux_sym__mod_tags_keyword_token1,
      aux_sym__mod_tags_keyword_token2,
      aux_sym__mod_tags_keyword_token3,
      aux_sym__mod_tags_keyword_token4,
      aux_sym__mod_tags_keyword_token5,
      aux_sym__mod_tags_keyword_token6,
      aux_sym__mod_tags_keyword_token7,
      aux_sym__mod_tags_keyword_token8,
      aux_sym__mod_tags_keyword_token9,
      aux_sym__mod_tags_keyword_token10,
      aux_sym__mod_tags_keyword_token11,
      aux_sym__mod_tags_keyword_token12,
      aux_sym__mod_tags_keyword_token13,
      aux_sym__mod_tags_keyword_token14,
      aux_sym__mod_tags_keyword_token15,
      aux_sym__mod_tags_keyword_token16,
      aux_sym__mod_tags_keyword_token17,
      aux_sym__mod_tags_keyword_token18,
      aux_sym__mod_tags_keyword_token19,
      aux_sym__mod_tags_keyword_token20,
      aux_sym__mod_tags_keyword_token21,
      aux_sym__mod_tags_keyword_token22,
  [35] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    STATE(2), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(32), 22,
      aux_sym__mod_tags_keyword_token1,
      aux_sym__mod_tags_keyword_token2,
      aux_sym__mod_tags_keyword_token3,
      aux_sym__mod_tags_keyword_token4,
      aux_sym__mod_tags_keyword_token5,
      aux_sym__mod_tags_keyword_token6,
      aux_sym__mod_tags_keyword_token7,
      aux_sym__mod_tags_keyword_token8,
      aux_sym__mod_tags_keyword_token9,
      aux_sym__mod_tags_keyword_token10,
      aux_sym__mod_tags_keyword_token11,
      aux_sym__mod_tags_keyword_token12,
      aux_sym__mod_tags_keyword_token13,
      aux_sym__mod_tags_keyword_token14,
      aux_sym__mod_tags_keyword_token15,
      aux_sym__mod_tags_keyword_token16,
      aux_sym__mod_tags_keyword_token17,
      aux_sym__mod_tags_keyword_token18,
      aux_sym__mod_tags_keyword_token19,
      aux_sym__mod_tags_keyword_token20,
      aux_sym__mod_tags_keyword_token21,
      aux_sym__mod_tags_keyword_token22,
  [70] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(3), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(36), 22,
      aux_sym__mod_tags_keyword_token1,
      aux_sym__mod_tags_keyword_token2,
      aux_sym__mod_tags_keyword_token3,
      aux_sym__mod_tags_keyword_token4,
      aux_sym__mod_tags_keyword_token5,
      aux_sym__mod_tags_keyword_token6,
      aux_sym__mod_tags_keyword_token7,
      aux_sym__mod_tags_keyword_token8,
      aux_sym__mod_tags_keyword_token9,
      aux_sym__mod_tags_keyword_token10,
      aux_sym__mod_tags_keyword_token11,
      aux_sym__mod_tags_keyword_token12,
      aux_sym__mod_tags_keyword_token13,
      aux_sym__mod_tags_keyword_token14,
      aux_sym__mod_tags_keyword_token15,
      aux_sym__mod_tags_keyword_token16,
      aux_sym__mod_tags_keyword_token17,
      aux_sym__mod_tags_keyword_token18,
      aux_sym__mod_tags_keyword_token19,
      aux_sym__mod_tags_keyword_token20,
      aux_sym__mod_tags_keyword_token21,
      aux_sym__mod_tags_keyword_token22,
  [105] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      anon_sym_name,
    ACTIONS(43), 1,
      anon_sym_path,
    ACTIONS(46), 1,
      anon_sym_archive,
    ACTIONS(49), 1,
      anon_sym_remote_file_id,
    ACTIONS(52), 1,
      anon_sym_version,
    ACTIONS(55), 1,
      anon_sym_picture,
    ACTIONS(58), 1,
      anon_sym_supported_version,
    ACTIONS(61), 1,
      anon_sym_tags,
    ACTIONS(64), 1,
      anon_sym_dependencies,
    STATE(5), 10,
      sym__statement_name,
      sym__statement_mod_path,
      sym__statement_mod_archive,
      sym__statement_mod_remote_file_id,
      sym__statement_mod_version,
      sym__statement_mod_picture,
      sym__statement_mod_supported_version,
      sym__statement_mod_tags,
      sym__statement_mod_dependencies,
      aux_sym_dot_mod_repeat1,
  [151] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_name,
    ACTIONS(9), 1,
      anon_sym_path,
    ACTIONS(11), 1,
      anon_sym_archive,
    ACTIONS(13), 1,
      anon_sym_remote_file_id,
    ACTIONS(15), 1,
      anon_sym_version,
    ACTIONS(17), 1,
      anon_sym_picture,
    ACTIONS(19), 1,
      anon_sym_supported_version,
    ACTIONS(21), 1,
      anon_sym_tags,
    ACTIONS(23), 1,
      anon_sym_dependencies,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(5), 10,
      sym__statement_name,
      sym__statement_mod_path,
      sym__statement_mod_archive,
      sym__statement_mod_remote_file_id,
      sym__statement_mod_version,
      sym__statement_mod_picture,
      sym__statement_mod_supported_version,
      sym__statement_mod_tags,
      sym__statement_mod_dependencies,
      aux_sym_dot_mod_repeat1,
  [197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_assign_equal,
    ACTIONS(69), 12,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
      anon_sym_texturefile,
  [218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 12,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
      anon_sym_texturefile,
  [236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_assign_equal,
    ACTIONS(75), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_assign_equal,
    ACTIONS(79), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_assign_equal,
    ACTIONS(83), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_assign_equal,
    ACTIONS(87), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_assign_equal,
    ACTIONS(91), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_assign_equal,
    ACTIONS(95), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_assign_equal,
    ACTIONS(99), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_assign_equal,
    ACTIONS(103), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [580] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    ACTIONS(133), 1,
      anon_sym_spriteType,
    ACTIONS(135), 1,
      anon_sym_cursor_offset,
    STATE(30), 5,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [600] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    ACTIONS(139), 1,
      anon_sym_spriteType,
    ACTIONS(142), 1,
      anon_sym_cursor_offset,
    STATE(30), 5,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_spriteType,
    ACTIONS(135), 1,
      anon_sym_cursor_offset,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(29), 5,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [640] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 1,
      anon_sym_name,
    ACTIONS(152), 1,
      anon_sym_texturefile,
    STATE(42), 1,
      sym__statement_name,
    STATE(32), 2,
      sym__statement_gfx_texturefile,
      aux_sym__spriteType_block_repeat1,
  [660] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_name,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(157), 1,
      anon_sym_texturefile,
    STATE(42), 1,
      sym__statement_name,
    STATE(34), 2,
      sym__statement_gfx_texturefile,
      aux_sym__spriteType_block_repeat1,
  [680] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_name,
    ACTIONS(157), 1,
      anon_sym_texturefile,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym__statement_name,
    STATE(32), 2,
      sym__statement_gfx_texturefile,
      aux_sym__spriteType_block_repeat1,
  [700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 1,
      anon_sym_spriteTypes,
    STATE(35), 2,
      sym__spriteTypes,
      aux_sym_dot_gfx_repeat1,
  [714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 3,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
  [726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_spriteTypes,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    STATE(35), 2,
      sym__spriteTypes,
      aux_sym_dot_gfx_repeat1,
  [740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_assign_equal,
    ACTIONS(172), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
  [752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 3,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
  [761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    ACTIONS(180), 1,
      sym_string,
    STATE(45), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
  [783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
  [792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
  [801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 3,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
  [810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_string,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
  [832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 1,
      sym_string,
    STATE(47), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
  [853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym__mod_tags_block,
  [863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym__spriteTypes_block,
  [873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_RBRACE,
      sym_string,
  [881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym__spriteType_block,
  [891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
  [899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
  [907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym__mod_dependencies_block,
  [917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym_string,
  [924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
  [931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
  [938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym__statement_mod_archive_token1,
  [945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_number,
  [952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_assign_equal,
  [959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym__statement_mod_remote_file_id_token1,
  [966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym__statement_mod_version_token1,
  [973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_string,
  [980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_number,
  [987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_string,
  [994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_assign_equal,
  [1001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_assign_equal,
  [1008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
  [1015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__statement_mod_supported_version_token1,
  [1022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_string,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 151,
  [SMALL_STATE(7)] = 197,
  [SMALL_STATE(8)] = 218,
  [SMALL_STATE(9)] = 236,
  [SMALL_STATE(10)] = 255,
  [SMALL_STATE(11)] = 274,
  [SMALL_STATE(12)] = 293,
  [SMALL_STATE(13)] = 312,
  [SMALL_STATE(14)] = 331,
  [SMALL_STATE(15)] = 350,
  [SMALL_STATE(16)] = 369,
  [SMALL_STATE(17)] = 388,
  [SMALL_STATE(18)] = 404,
  [SMALL_STATE(19)] = 420,
  [SMALL_STATE(20)] = 436,
  [SMALL_STATE(21)] = 452,
  [SMALL_STATE(22)] = 468,
  [SMALL_STATE(23)] = 484,
  [SMALL_STATE(24)] = 500,
  [SMALL_STATE(25)] = 516,
  [SMALL_STATE(26)] = 532,
  [SMALL_STATE(27)] = 548,
  [SMALL_STATE(28)] = 564,
  [SMALL_STATE(29)] = 580,
  [SMALL_STATE(30)] = 600,
  [SMALL_STATE(31)] = 620,
  [SMALL_STATE(32)] = 640,
  [SMALL_STATE(33)] = 660,
  [SMALL_STATE(34)] = 680,
  [SMALL_STATE(35)] = 700,
  [SMALL_STATE(36)] = 714,
  [SMALL_STATE(37)] = 726,
  [SMALL_STATE(38)] = 740,
  [SMALL_STATE(39)] = 752,
  [SMALL_STATE(40)] = 761,
  [SMALL_STATE(41)] = 774,
  [SMALL_STATE(42)] = 783,
  [SMALL_STATE(43)] = 792,
  [SMALL_STATE(44)] = 801,
  [SMALL_STATE(45)] = 810,
  [SMALL_STATE(46)] = 823,
  [SMALL_STATE(47)] = 832,
  [SMALL_STATE(48)] = 845,
  [SMALL_STATE(49)] = 853,
  [SMALL_STATE(50)] = 863,
  [SMALL_STATE(51)] = 873,
  [SMALL_STATE(52)] = 881,
  [SMALL_STATE(53)] = 891,
  [SMALL_STATE(54)] = 899,
  [SMALL_STATE(55)] = 907,
  [SMALL_STATE(56)] = 917,
  [SMALL_STATE(57)] = 924,
  [SMALL_STATE(58)] = 931,
  [SMALL_STATE(59)] = 938,
  [SMALL_STATE(60)] = 945,
  [SMALL_STATE(61)] = 952,
  [SMALL_STATE(62)] = 959,
  [SMALL_STATE(63)] = 966,
  [SMALL_STATE(64)] = 973,
  [SMALL_STATE(65)] = 980,
  [SMALL_STATE(66)] = 987,
  [SMALL_STATE(67)] = 994,
  [SMALL_STATE(68)] = 1001,
  [SMALL_STATE(69)] = 1008,
  [SMALL_STATE(70)] = 1015,
  [SMALL_STATE(71)] = 1022,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(61),
  [7] = {.count = 1, .reusable = true}, SHIFT(7),
  [9] = {.count = 1, .reusable = true}, SHIFT(9),
  [11] = {.count = 1, .reusable = true}, SHIFT(10),
  [13] = {.count = 1, .reusable = true}, SHIFT(11),
  [15] = {.count = 1, .reusable = true}, SHIFT(12),
  [17] = {.count = 1, .reusable = true}, SHIFT(13),
  [19] = {.count = 1, .reusable = true}, SHIFT(14),
  [21] = {.count = 1, .reusable = true}, SHIFT(15),
  [23] = {.count = 1, .reusable = true}, SHIFT(16),
  [25] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2),
  [27] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2), SHIFT_REPEAT(2),
  [30] = {.count = 1, .reusable = true}, SHIFT(17),
  [32] = {.count = 1, .reusable = true}, SHIFT(2),
  [34] = {.count = 1, .reusable = true}, SHIFT(21),
  [36] = {.count = 1, .reusable = true}, SHIFT(3),
  [38] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(7),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(9),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(10),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(11),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(12),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(13),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(14),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(15),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(16),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 1),
  [71] = {.count = 1, .reusable = true}, SHIFT(64),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 3, .production_id = 1),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 1),
  [77] = {.count = 1, .reusable = true}, SHIFT(71),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 1),
  [81] = {.count = 1, .reusable = true}, SHIFT(59),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 1),
  [85] = {.count = 1, .reusable = true}, SHIFT(62),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 1),
  [89] = {.count = 1, .reusable = true}, SHIFT(63),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 1),
  [93] = {.count = 1, .reusable = true}, SHIFT(56),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 1),
  [97] = {.count = 1, .reusable = true}, SHIFT(70),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 1),
  [101] = {.count = 1, .reusable = true}, SHIFT(49),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(55),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 3),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 3),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 3),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 2),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 2),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 3),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 3),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 3),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 3),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 3),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 3),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 3),
  [131] = {.count = 1, .reusable = true}, SHIFT(53),
  [133] = {.count = 1, .reusable = true}, SHIFT(68),
  [135] = {.count = 1, .reusable = true}, SHIFT(67),
  [137] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2),
  [139] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(68),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(67),
  [145] = {.count = 1, .reusable = true}, SHIFT(48),
  [147] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(7),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(38),
  [155] = {.count = 1, .reusable = true}, SHIFT(44),
  [157] = {.count = 1, .reusable = true}, SHIFT(38),
  [159] = {.count = 1, .reusable = true}, SHIFT(39),
  [161] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(61),
  [166] = {.count = 1, .reusable = true}, SHIFT(60),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 2),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gfx, 1),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_texturefile, 1),
  [174] = {.count = 1, .reusable = true}, SHIFT(66),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 3),
  [178] = {.count = 1, .reusable = true}, SHIFT(20),
  [180] = {.count = 1, .reusable = true}, SHIFT(51),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType, 3),
  [184] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 1, .production_id = 3),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_texturefile, 3),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 2),
  [190] = {.count = 1, .reusable = true}, SHIFT(19),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 6),
  [194] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2), SHIFT_REPEAT(51),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 2),
  [201] = {.count = 1, .reusable = true}, SHIFT(4),
  [203] = {.count = 1, .reusable = true}, SHIFT(31),
  [205] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 1, .production_id = 2),
  [207] = {.count = 1, .reusable = true}, SHIFT(33),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 3),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes, 3),
  [213] = {.count = 1, .reusable = true}, SHIFT(40),
  [215] = {.count = 1, .reusable = true}, SHIFT(18),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [219] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [221] = {.count = 1, .reusable = true}, SHIFT(26),
  [223] = {.count = 1, .reusable = true}, SHIFT(65),
  [225] = {.count = 1, .reusable = true}, SHIFT(50),
  [227] = {.count = 1, .reusable = true}, SHIFT(27),
  [229] = {.count = 1, .reusable = true}, SHIFT(28),
  [231] = {.count = 1, .reusable = true}, SHIFT(8),
  [233] = {.count = 1, .reusable = true}, SHIFT(69),
  [235] = {.count = 1, .reusable = true}, SHIFT(43),
  [237] = {.count = 1, .reusable = true}, SHIFT(36),
  [239] = {.count = 1, .reusable = true}, SHIFT(52),
  [241] = {.count = 1, .reusable = true}, SHIFT(46),
  [243] = {.count = 1, .reusable = true}, SHIFT(24),
  [245] = {.count = 1, .reusable = true}, SHIFT(25),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_eu4mod(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
