/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs


/* Copy the first part of user declarations.  */
#line 1 "bison_parser.y" /* yacc.c:339  */

/**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>

using namespace hsql;

int yyerror(YYLTYPE* llocp, SQLParserResult* result, yyscan_t scanner, const char *msg) {
	result->setIsValid(false);
	result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
	return 0;
}


#line 103 "bison_parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison_parser.h".  */
#ifndef YY_HSQL_BISON_PARSER_H_INCLUDED
# define YY_HSQL_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 35 "bison_parser.y" /* yacc.c:355  */

// %code requires block

#include "../sql/statements.h"
#include "../SQLParserResult.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION \
		yylloc->first_line = yylloc->last_line; \
		yylloc->first_column = yylloc->last_column; \
		for(int i = 0; yytext[i] != '\0'; i++) { \
			yylloc->total_column++; \
			yylloc->string_length++; \
				if(yytext[i] == '\n') { \
						yylloc->last_line++; \
						yylloc->last_column = 0; \
				} \
				else { \
						yylloc->last_column++; \
				} \
		}

#line 165 "bison_parser.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_IDENTIFIER = 258,
    SQL_STRING = 259,
    SQL_FLOATVAL = 260,
    SQL_INTVAL = 261,
    SQL_DEALLOCATE = 262,
    SQL_PARAMETERS = 263,
    SQL_INTERSECT = 264,
    SQL_TEMPORARY = 265,
    SQL_TIMESTAMP = 266,
    SQL_DISTINCT = 267,
    SQL_NVARCHAR = 268,
    SQL_RESTRICT = 269,
    SQL_TRUNCATE = 270,
    SQL_ANALYZE = 271,
    SQL_BETWEEN = 272,
    SQL_CASCADE = 273,
    SQL_COLUMNS = 274,
    SQL_CONTROL = 275,
    SQL_DEFAULT = 276,
    SQL_EXECUTE = 277,
    SQL_EXPLAIN = 278,
    SQL_INTEGER = 279,
    SQL_NATURAL = 280,
    SQL_PREPARE = 281,
    SQL_PRIMARY = 282,
    SQL_SCHEMAS = 283,
    SQL_SPATIAL = 284,
    SQL_VARCHAR = 285,
    SQL_VIRTUAL = 286,
    SQL_DESCRIBE = 287,
    SQL_BEFORE = 288,
    SQL_COLUMN = 289,
    SQL_CREATE = 290,
    SQL_DELETE = 291,
    SQL_DIRECT = 292,
    SQL_DOUBLE = 293,
    SQL_ESCAPE = 294,
    SQL_EXCEPT = 295,
    SQL_EXISTS = 296,
    SQL_EXTRACT = 297,
    SQL_CAST = 298,
    SQL_FORMAT = 299,
    SQL_GLOBAL = 300,
    SQL_HAVING = 301,
    SQL_IMPORT = 302,
    SQL_INSERT = 303,
    SQL_ISNULL = 304,
    SQL_OFFSET = 305,
    SQL_RENAME = 306,
    SQL_SCHEMA = 307,
    SQL_SELECT = 308,
    SQL_SORTED = 309,
    SQL_TABLES = 310,
    SQL_UNIQUE = 311,
    SQL_UNLOAD = 312,
    SQL_UPDATE = 313,
    SQL_VALUES = 314,
    SQL_AFTER = 315,
    SQL_ALTER = 316,
    SQL_CROSS = 317,
    SQL_DELTA = 318,
    SQL_FLOAT = 319,
    SQL_GROUP = 320,
    SQL_INDEX = 321,
    SQL_INNER = 322,
    SQL_LIMIT = 323,
    SQL_LOCAL = 324,
    SQL_MERGE = 325,
    SQL_MINUS = 326,
    SQL_ORDER = 327,
    SQL_OUTER = 328,
    SQL_RIGHT = 329,
    SQL_TABLE = 330,
    SQL_UNION = 331,
    SQL_USING = 332,
    SQL_WHERE = 333,
    SQL_CALL = 334,
    SQL_CASE = 335,
    SQL_CHAR = 336,
    SQL_COPY = 337,
    SQL_DATE = 338,
    SQL_DATETIME = 339,
    SQL_DESC = 340,
    SQL_DROP = 341,
    SQL_ELSE = 342,
    SQL_FILE = 343,
    SQL_FROM = 344,
    SQL_FULL = 345,
    SQL_HASH = 346,
    SQL_HINT = 347,
    SQL_INTO = 348,
    SQL_JOIN = 349,
    SQL_LEFT = 350,
    SQL_LIKE = 351,
    SQL_LOAD = 352,
    SQL_LONG = 353,
    SQL_NULL = 354,
    SQL_PLAN = 355,
    SQL_SHOW = 356,
    SQL_TEXT = 357,
    SQL_THEN = 358,
    SQL_TIME = 359,
    SQL_VIEW = 360,
    SQL_WHEN = 361,
    SQL_WITH = 362,
    SQL_ADD = 363,
    SQL_ALL = 364,
    SQL_AND = 365,
    SQL_ASC = 366,
    SQL_END = 367,
    SQL_FOR = 368,
    SQL_INT = 369,
    SQL_KEY = 370,
    SQL_NOT = 371,
    SQL_OFF = 372,
    SQL_SET = 373,
    SQL_TOP = 374,
    SQL_AS = 375,
    SQL_BY = 376,
    SQL_IF = 377,
    SQL_IN = 378,
    SQL_IS = 379,
    SQL_OF = 380,
    SQL_ON = 381,
    SQL_OR = 382,
    SQL_TO = 383,
    SQL_ARRAY = 384,
    SQL_CONCAT = 385,
    SQL_ILIKE = 386,
    SQL_SECOND = 387,
    SQL_MINUTE = 388,
    SQL_HOUR = 389,
    SQL_DAY = 390,
    SQL_MONTH = 391,
    SQL_YEAR = 392,
    SQL_TRUE = 393,
    SQL_FALSE = 394,
    SQL_TRANSACTION = 395,
    SQL_BEGIN = 396,
    SQL_COMMIT = 397,
    SQL_ROLLBACK = 398,
    SQL_EQUALS = 399,
    SQL_NOTEQUALS = 400,
    SQL_LESS = 401,
    SQL_GREATER = 402,
    SQL_LESSEQ = 403,
    SQL_GREATEREQ = 404,
    SQL_NOTNULL = 405,
    SQL_UMINUS = 406
  };
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED

union HSQL_STYPE
{
#line 95 "bison_parser.y" /* yacc.c:355  */

	double fval;
	int64_t ival;
	char* sval;
	uintmax_t uval;
	bool bval;

	hsql::SQLStatement* statement;
	hsql::SelectStatement* 	select_stmt;
	hsql::ImportStatement* 	import_stmt;
	hsql::ExportStatement* 	export_stmt;
	hsql::CreateStatement* 	create_stmt;
	hsql::InsertStatement* 	insert_stmt;
	hsql::DeleteStatement* 	delete_stmt;
	hsql::UpdateStatement* 	update_stmt;
	hsql::DropStatement*   	drop_stmt;
	hsql::PrepareStatement* prep_stmt;
	hsql::ExecuteStatement* exec_stmt;
	hsql::ShowStatement*    show_stmt;
	hsql::TransactionStatement* transaction_stmt;

	hsql::TableName table_name;
	hsql::TableRef* table;
	hsql::Expr* expr;
	hsql::OrderDescription* order;
	hsql::OrderType order_type;
	hsql::WithDescription* with_description_t;
	hsql::DatetimeField datetime_field;
	hsql::LimitDescription* limit;
	hsql::ColumnDefinition* column_t;
	hsql::ColumnType column_type_t;
	hsql::ImportType import_type_t;
	hsql::GroupByDescription* group_t;
	hsql::UpdateClause* update_t;
	hsql::Alias* alias_t;
	hsql::SetOperation* set_operator_t;

	std::vector<hsql::SQLStatement*>* stmt_vec;

	std::vector<char*>* str_vec;
	std::vector<hsql::TableRef*>* table_vec;
	std::vector<hsql::ColumnDefinition*>* column_vec;
	std::vector<hsql::UpdateClause*>* update_vec;
	std::vector<hsql::Expr*>* expr_vec;
	std::vector<hsql::OrderDescription*>* order_vec;
	std::vector<hsql::WithDescription*>* with_description_vec;

#line 377 "bison_parser.cpp" /* yacc.c:355  */
};

typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif



int hsql_parse (hsql::SQLParserResult* result, yyscan_t scanner);

#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 407 "bison_parser.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   738

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  169
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  108
/* YYNRULES -- Number of rules.  */
#define YYNRULES  266
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  483

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   406

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   158,     2,     2,
     163,   164,   156,   154,   167,   155,   165,   157,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   166,
     147,   144,   148,   168,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   161,     2,   162,   159,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   145,
     146,   149,   150,   151,   152,   153,   160
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   269,   269,   290,   296,   305,   309,   313,   316,   319,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   343,
     344,   349,   350,   354,   358,   370,   373,   376,   382,   383,
     390,   397,   400,   404,   418,   424,   433,   450,   454,   457,
     466,   480,   483,   488,   502,   515,   522,   529,   540,   541,
     545,   546,   550,   551,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   571,   572,   573,   577,   578,   581,   582,
     592,   598,   604,   612,   613,   622,   631,   644,   651,   662,
     663,   673,   682,   683,   687,   699,   703,   707,   721,   722,
     725,   726,   737,   738,   742,   752,   765,   772,   776,   780,
     787,   790,   796,   808,   809,   813,   817,   818,   822,   827,
     828,   832,   837,   841,   842,   846,   847,   851,   852,   856,
     860,   861,   862,   868,   869,   873,   874,   875,   876,   877,
     878,   885,   886,   890,   891,   895,   896,   900,   910,   911,
     912,   913,   914,   918,   919,   920,   921,   922,   923,   924,
     925,   926,   927,   928,   932,   933,   937,   938,   939,   940,
     941,   945,   946,   947,   948,   949,   950,   951,   952,   953,
     954,   955,   959,   960,   964,   965,   966,   967,   973,   974,
     975,   976,   980,   981,   985,   986,   990,   991,   992,   993,
     994,   995,   996,  1000,  1001,  1005,  1009,  1013,  1014,  1015,
    1016,  1017,  1018,  1022,  1026,  1030,  1034,  1035,  1036,  1037,
    1041,  1042,  1043,  1044,  1045,  1049,  1053,  1054,  1058,  1059,
    1063,  1067,  1071,  1083,  1084,  1094,  1095,  1099,  1100,  1109,
    1110,  1115,  1126,  1135,  1136,  1141,  1142,  1147,  1148,  1153,
    1154,  1159,  1160,  1169,  1170,  1174,  1178,  1182,  1189,  1202,
    1210,  1220,  1239,  1240,  1241,  1242,  1243,  1244,  1245,  1246,
    1247,  1248,  1253,  1262,  1263,  1268,  1269
};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "FLOATVAL",
  "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT", "TEMPORARY",
  "TIMESTAMP", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE", "ANALYZE",
  "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT", "EXECUTE",
  "EXPLAIN", "INTEGER", "NATURAL", "PREPARE", "PRIMARY", "SCHEMAS",
  "SPATIAL", "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE", "COLUMN",
  "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS",
  "EXTRACT", "CAST", "FORMAT", "GLOBAL", "HAVING", "IMPORT", "INSERT",
  "ISNULL", "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES",
  "UNIQUE", "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS",
  "DELTA", "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE",
  "MINUS", "ORDER", "OUTER", "RIGHT", "TABLE", "UNION", "USING", "WHERE",
  "CALL", "CASE", "CHAR", "COPY", "DATE", "DATETIME", "DESC", "DROP",
  "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT",
  "LIKE", "LOAD", "LONG", "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME",
  "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND", "ASC", "END", "FOR", "INT",
  "KEY", "NOT", "OFF", "SET", "TOP", "AS", "BY", "IF", "IN", "IS", "OF",
  "ON", "OR", "TO", "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR",
  "DAY", "MONTH", "YEAR", "TRUE", "FALSE", "TRANSACTION", "BEGIN",
  "COMMIT", "ROLLBACK", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS",
  "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','",
  "'?'", "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_file_type", "export_statement",
  "show_statement", "create_statement", "opt_not_exists",
  "column_def_commalist", "column_def", "column_type",
  "opt_column_nullable", "opt_unique", "key_columns", "drop_statement",
  "opt_exists", "delete_statement", "truncate_statement",
  "insert_statement", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "select_statement",
  "select_within_set_operation",
  "select_within_set_operation_no_parentheses", "select_with_paren",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_top", "opt_limit",
  "expr_list", "opt_literal_list", "literal_list", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "extract_expr", "cast_expr", "datetime_field",
  "array_expr", "array_index", "between_expr", "column_name", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "param_expr", "table_ref", "table_ref_atomic",
  "nonjoin_table_ref_atomic", "table_ref_commalist", "table_ref_name",
  "table_ref_name_no_alias", "table_name", "table_alias",
  "opt_table_alias", "alias", "opt_alias", "opt_with_clause",
  "with_clause", "with_description_list", "with_description",
  "join_clause", "opt_join_type", "join_condition", "opt_semicolon",
  "ident_commalist", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,    61,   399,   400,    60,    62,   401,
     402,   403,   404,   405,    43,    45,    42,    47,    37,    94,
     406,    91,    93,    40,    41,    46,    59,    44,    63
};
# endif

#define YYPACT_NINF -358

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-358)))

#define YYTABLE_NINF -264

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-264)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     551,    16,   104,   142,   155,   104,   -37,     7,    22,    86,
     104,   104,   -34,    21,   178,    45,    45,    45,   209,    55,
    -358,   110,  -358,   110,  -358,  -358,  -358,  -358,  -358,  -358,
    -358,  -358,  -358,  -358,  -358,   -36,  -358,   212,    62,  -358,
      73,   149,  -358,   115,   115,   104,   249,   104,   153,  -358,
     -56,   137,   137,   104,  -358,   156,   114,  -358,  -358,  -358,
    -358,  -358,  -358,   463,  -358,   185,  -358,  -358,   163,   -36,
      30,  -358,   293,  -358,   283,    14,   295,   181,   104,   104,
     231,  -358,   222,   157,   318,   322,   322,   291,   104,   104,
    -358,   174,   178,  -358,   193,   332,   347,   199,   200,  -358,
    -358,  -358,   -36,   258,   262,   -36,    17,  -358,  -358,  -358,
    -358,  -358,  -358,  -358,  -358,   220,   218,  -358,  -358,  -358,
    -358,  -358,  -358,  -358,  -358,  -358,   345,   -60,   157,   288,
    -358,   322,   385,     5,   246,   -52,  -358,   282,  -358,   282,
    -358,  -358,  -358,  -358,  -358,   392,  -358,  -358,   288,  -358,
    -358,   324,  -358,  -358,    30,  -358,  -358,   288,   324,   288,
     145,  -358,  -358,    14,  -358,   394,   294,    34,   278,   -88,
     239,   240,   243,   189,   319,   250,   367,  -358,   237,   -15,
     396,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,
    -358,  -358,  -358,  -358,  -358,  -358,  -358,   314,  -358,    84,
     251,  -358,   288,   318,  -358,   371,  -358,  -358,   253,   139,
    -358,   330,   254,  -358,    63,    17,   -36,   255,  -358,   -28,
      17,   -15,   370,   -26,  -358,   335,  -358,   310,  -358,   147,
    -358,   313,   294,    11,    10,   372,   245,   288,   288,    49,
      93,   266,   367,   519,   288,    99,   267,   -41,   288,   288,
     367,  -358,   367,   -62,   269,     1,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   332,   104,  -358,   427,    14,   -15,  -358,   249,    14,
    -358,   392,     9,   231,  -358,   288,  -358,   430,  -358,  -358,
    -358,  -358,   288,  -358,  -358,  -358,  -358,   288,   288,   322,
    -358,   271,  -358,  -358,   273,  -358,  -358,  -358,  -358,    90,
    -358,    34,   434,  -358,  -358,   288,  -358,  -358,   274,  -358,
    -358,  -358,  -358,  -358,  -358,   350,    51,   108,   141,   288,
     288,  -358,   372,   344,     3,  -358,  -358,  -358,   331,   466,
     558,   367,   279,   237,  -358,   351,   285,   558,   558,   558,
     558,   577,   577,   577,   577,    99,    99,   -43,   -43,   -43,
     -67,   287,  -358,  -358,   148,  -358,   152,  -358,   294,  -358,
      31,  -358,   286,  -358,    24,  -358,   387,  -358,  -358,  -358,
     -15,   -15,  -358,   448,   449,  -358,   360,  -358,  -358,   297,
     175,  -358,   288,   310,   288,   288,  -358,   158,   123,   298,
    -358,   367,   558,   237,   300,   182,  -358,  -358,  -358,  -358,
     301,   373,  -358,  -358,  -358,   388,   395,   398,   375,     9,
     469,  -358,  -358,  -358,   352,  -358,   312,   315,  -358,   474,
    -358,    50,   316,   -15,   177,  -358,   288,  -358,   519,   317,
     183,  -358,  -358,    24,     9,  -358,  -358,  -358,     9,   129,
     321,   288,  -358,  -358,  -358,   187,  -358,  -358,  -358,   -15,
    -358,  -358,  -358,  -358,   172,   385,   -24,  -358,   483,   325,
     288,   191,   288,  -358,  -358,    18,   -15,  -358,  -358,   -15,
     326,   329,  -358
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     244,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    29,    29,     0,   264,
       3,    20,    18,    20,    17,     8,     9,     7,    11,    16,
      13,    14,    12,    15,    10,     0,   243,     0,   233,    76,
      32,     0,    43,    49,    49,     0,     0,     0,     0,   232,
       0,    74,    74,     0,    41,     0,   245,   246,    28,    25,
      27,    26,     1,   244,     2,     0,     6,     5,   124,     0,
      85,    86,   116,    72,     0,   134,     0,     0,     0,     0,
     110,    36,     0,    80,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     4,     0,     0,   104,     0,     0,    98,
      99,    97,     0,   101,     0,     0,   130,   234,   215,   218,
     220,   221,   216,   217,   222,     0,   133,   135,   210,   211,
     212,   219,   213,   214,    31,    30,     0,     0,    80,     0,
      75,     0,     0,     0,     0,   110,    82,    39,    37,    39,
      73,    70,    71,   248,   247,     0,   123,   103,     0,    93,
      92,   116,    89,    88,    90,   100,    96,     0,   116,     0,
       0,    94,    33,     0,    48,     0,   244,    67,     0,   206,
       0,     0,     0,     0,     0,     0,     0,   208,     0,   109,
     138,   145,   146,   147,   140,   142,   148,   141,   161,   149,
     150,   151,   152,   144,   139,   154,   155,     0,   265,     0,
       0,    78,     0,     0,    81,     0,    35,    40,    23,     0,
      21,   107,   105,   131,   242,   130,     0,   115,   117,   122,
     130,   126,   128,   125,   136,     0,    46,     0,    66,     0,
      50,     0,   244,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   157,     0,   156,     0,     0,     0,     0,
       0,   158,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,    84,    83,     0,     0,
      19,     0,     0,   110,   106,     0,   240,     0,   241,   137,
      87,    91,     0,   121,   120,   119,    95,     0,     0,     0,
      55,     0,    58,    57,     0,    62,    56,    61,    54,    65,
      45,    67,     0,    47,   193,     0,   207,   209,     0,   197,
     198,   199,   200,   201,   202,     0,     0,     0,     0,     0,
       0,   180,     0,     0,     0,   153,   143,   172,   173,     0,
     168,     0,     0,     0,   159,     0,   171,   170,   186,   187,
     188,   189,   190,   191,   192,   163,   162,   165,   164,   166,
     167,     0,    34,   266,     0,    38,     0,    22,   244,   108,
     223,   225,     0,   227,   238,   226,   112,   132,   239,   118,
     129,   127,    44,     0,     0,    63,     0,    52,    51,     0,
       0,   184,     0,     0,     0,     0,   178,     0,     0,     0,
     203,     0,   169,     0,     0,     0,   160,   204,    77,    24,
       0,     0,   260,   252,   258,   256,   259,   254,     0,     0,
       0,   237,   231,   235,     0,   102,     0,     0,    64,     0,
     194,     0,     0,   182,     0,   181,     0,   185,   205,     0,
       0,   176,   174,   238,     0,   255,   257,   253,     0,   224,
     239,     0,    59,    60,    68,     0,   195,   196,   179,   183,
     177,   175,   228,   249,   261,     0,   114,    53,     0,     0,
       0,     0,     0,   111,    69,     0,   262,   250,   236,   113,
     206,     0,   251
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -358,  -358,  -358,   431,  -358,   467,  -358,   216,  -358,   140,
    -358,  -358,  -358,  -358,   223,   -77,   361,  -358,  -358,  -358,
     458,  -358,   192,   111,  -358,  -358,  -358,  -358,   455,  -358,
    -358,  -358,   380,  -358,  -358,   306,  -152,   -69,  -358,   -10,
     -68,   -57,  -358,  -358,   -70,   280,  -358,  -358,  -358,  -119,
    -358,  -358,  -108,  -358,   224,  -358,  -358,    -8,  -241,  -358,
    -224,   229,  -129,  -128,  -358,  -358,  -358,  -358,  -358,  -358,
     289,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,
      42,   -71,   -79,  -358,  -358,   -87,  -358,  -358,  -358,  -357,
      74,  -358,  -358,  -358,     0,  -358,    81,   311,  -358,  -358,
    -358,  -358,   437,  -358,  -358,  -358,  -358,    66
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    66,   209,   210,    22,    59,
      23,   125,    24,    25,    82,   137,   206,    26,    27,    28,
      78,   229,   230,   309,   387,   231,   455,    29,    88,    30,
      31,    32,   133,    33,   135,   136,    34,   151,   152,   153,
      71,   102,   103,   156,    72,   148,   211,   283,   284,   130,
     425,   473,   106,   217,   218,   295,    96,   161,   212,   115,
     116,   213,   214,   180,   181,   182,   183,   184,   185,   186,
     240,   187,   188,   189,   190,   191,   325,   192,   193,   194,
     195,   196,   118,   119,   120,   121,   122,   123,   369,   370,
     371,   372,   373,    48,   374,   421,   422,   423,   289,    35,
      36,    56,    57,   375,   418,   477,    64,   199
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     179,    98,    39,   334,   117,    42,   138,   138,   146,   139,
      49,    50,    38,   316,   226,   105,   204,    68,   108,   109,
     110,   480,   472,   147,   298,    70,   129,   286,   219,   165,
     221,   223,   154,    85,   341,   154,   158,   227,    43,    99,
      53,    51,    37,   215,   239,    80,   243,    83,   245,   247,
     220,   364,   138,    90,   197,   366,   411,   293,    68,    97,
     166,   342,   449,   256,   200,   201,   286,   159,    44,   248,
     100,    52,    86,   276,   390,   233,    54,   234,   127,   128,
     313,   143,   248,   294,   248,   160,   249,   256,   141,   142,
     228,   464,   224,   412,   271,   248,    45,   216,   413,   249,
     344,   249,   405,   167,   414,   415,   101,    38,   326,   327,
     246,    46,   249,   111,   243,   203,   270,   345,   271,   337,
     338,   416,   339,   336,   340,  -261,   417,    69,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   285,   420,    40,   154,   291,   169,   108,
     109,   110,   112,   113,   411,   238,    60,    61,    41,   248,
     248,   248,   440,   219,   376,   400,   317,   318,   380,   381,
     285,   393,   368,   248,   177,   314,   249,   249,   249,    47,
     329,    55,   114,   287,   361,    58,   170,   171,   172,   385,
     249,   412,   169,   108,   109,   110,   413,   411,  -229,   330,
     397,   398,   414,   415,   117,   331,   386,   290,   117,    62,
     466,   394,   296,   402,   456,    73,   410,    65,   248,   416,
     138,    63,   382,  -261,   417,   173,   436,    74,   395,   256,
     170,   171,   172,   248,   412,   249,    75,    77,    76,   413,
     169,   108,   109,   110,   111,   414,   415,   330,   273,   469,
     249,   274,    81,   396,   222,   267,   268,   269,   270,    87,
     271,   174,   416,   431,   399,   433,   434,   417,   248,   173,
     435,    84,   362,   438,   175,   404,    91,    94,   170,   171,
     172,    92,    95,   112,   113,   249,   107,   248,   111,   458,
      68,   169,   108,   109,   110,   238,  -230,   126,   470,   124,
     176,   177,    99,   280,   249,   174,   281,   459,   178,   129,
     131,   310,   408,   114,   311,   163,   409,   173,   175,   163,
     132,   134,   169,   108,   109,   110,   108,   112,   113,   170,
     171,   172,   140,   100,   300,   439,   111,    69,   110,   430,
     301,   476,   285,   479,   176,   177,   442,   461,   302,   285,
     285,   467,   178,   174,   468,   478,   145,   114,   274,   147,
     241,   171,   172,   149,   150,   104,   175,   155,   173,   101,
     169,   108,   109,   110,   303,   112,   113,   319,   320,   321,
     322,   323,   324,   157,   162,   163,   164,   111,   198,   205,
     202,   304,   176,   177,   305,   208,   104,   225,   232,   173,
     178,    14,   235,   236,   174,   114,   237,   272,   306,   171,
     172,   244,   307,   250,   275,   278,   279,   175,   111,   282,
     297,   285,   292,   299,   308,    68,   112,   113,   312,   332,
     363,   335,   343,   378,   383,   242,   384,   389,   391,   392,
     341,   248,   403,   176,   177,   251,   271,   173,   175,   407,
     406,   178,   424,   419,   426,   427,   114,   112,   113,   428,
     429,   445,   437,  -263,   441,   443,   111,   444,   446,   448,
       1,   447,   450,   451,   176,   177,   452,   454,     2,   453,
     457,   460,   178,   242,   465,     3,   474,   114,   475,     4,
      67,   234,   252,   482,    93,     5,   175,   367,     6,     7,
     207,   365,    79,   388,   432,   112,   113,    89,   168,   277,
       8,     9,   253,   315,   377,   251,   379,   481,   463,   254,
     255,    10,   176,   177,   462,   288,   256,   257,   328,   144,
     178,   471,     0,     0,     0,   114,     0,     0,     0,     0,
     258,   259,   260,   261,   262,    11,     0,   263,   264,    12,
     265,   266,   267,   268,   269,   270,     0,   271,     1,     0,
       0,     0,   252,     0,    13,     0,     2,     0,   251,     0,
      14,     0,     0,     3,     0,     0,   401,     4,     0,     0,
       0,     0,   333,     5,     0,     0,     6,     7,     0,     0,
     255,     0,     0,     0,     0,     0,   256,   257,     8,     9,
       0,     0,     0,     0,    15,    16,    17,   251,     0,    10,
     258,   259,   260,   261,   262,   252,     0,   263,   264,     0,
     265,   266,   267,   268,   269,   270,   251,   271,     0,     0,
       0,     0,     0,    11,     0,   333,     0,    12,     0,     0,
       0,     0,     0,   255,     0,     0,     0,     0,     0,   256,
     257,     0,    13,     0,  -264,     0,     0,     0,    14,     0,
       0,     0,     0,   258,   259,   260,   261,   262,     0,     0,
     263,   264,     0,   265,   266,   267,   268,   269,   270,     0,
     271,     0,   255,     0,     0,     0,     0,     0,   256,  -264,
       0,     0,    15,    16,    17,     0,     0,     0,     0,     0,
       0,   255,  -264,  -264,  -264,   261,   262,   256,     0,   263,
     264,     0,   265,   266,   267,   268,   269,   270,     0,   271,
       0,     0,     0,     0,  -264,  -264,     0,     0,  -264,  -264,
       0,   265,   266,   267,   268,   269,   270,     0,   271
};

static const yytype_int16 yycheck[] =
{
     129,    69,     2,   244,    75,     5,    85,    86,    95,    86,
      10,    11,     3,     3,   166,    72,   135,    53,     4,     5,
       6,     3,    46,    12,    50,    35,    78,     3,   157,    89,
     159,   160,   102,    89,    96,   105,   105,     3,    75,     9,
      19,    75,    26,   151,   173,    45,   174,    47,   176,   178,
     158,   275,   131,    53,   131,   279,    25,    85,    53,    69,
     120,   123,   419,   130,    59,   133,     3,    50,   105,   110,
      40,   105,   128,   202,   315,   163,    55,   165,    78,    79,
     232,    91,   110,   111,   110,    68,   127,   130,    88,    89,
      56,   448,   163,    62,   161,   110,    89,   154,    67,   127,
      99,   127,   343,   163,    73,    74,    76,     3,   237,   238,
     178,    89,   127,    99,   242,   167,   159,   116,   161,   248,
     249,    90,   250,   164,   252,    94,    95,   163,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   167,   120,     3,   216,   216,     3,     4,
       5,     6,   138,   139,    25,   106,    16,    17,     3,   110,
     110,   110,   403,   292,   283,   162,   156,   235,   297,   298,
     167,   120,   163,   110,   156,   164,   127,   127,   127,    93,
      87,     3,   168,   120,   271,   140,    41,    42,    43,    99,
     127,    62,     3,     4,     5,     6,    67,    25,   167,   106,
     329,   330,    73,    74,   275,   112,   116,   215,   279,     0,
     451,   103,   220,   341,   164,     3,   368,   107,   110,    90,
     299,   166,   299,    94,    95,    80,   103,   165,    87,   130,
      41,    42,    43,   110,    62,   127,   163,   122,    89,    67,
       3,     4,     5,     6,    99,    73,    74,   106,   164,    77,
     127,   167,     3,   112,   109,   156,   157,   158,   159,   122,
     161,   116,    90,   392,   332,   394,   395,    95,   110,    80,
     112,   118,   272,   401,   129,   343,   120,    92,    41,    42,
      43,   167,   119,   138,   139,   127,     3,   110,    99,   112,
      53,     3,     4,     5,     6,   106,   167,   116,   126,     4,
     155,   156,     9,   164,   127,   116,   167,   436,   163,    78,
      88,   164,   164,   168,   167,   167,   164,    80,   129,   167,
     163,     3,     3,     4,     5,     6,     4,   138,   139,    41,
      42,    43,    41,    40,    24,   403,    99,   163,     6,   164,
      30,   470,   167,   472,   155,   156,   164,   164,    38,   167,
     167,   164,   163,   116,   167,   164,   163,   168,   167,    12,
      41,    42,    43,   164,   164,    72,   129,   109,    80,    76,
       3,     4,     5,     6,    64,   138,   139,   132,   133,   134,
     135,   136,   137,   121,   164,   167,    41,    99,     3,   107,
     144,    81,   155,   156,    84,     3,    72,     3,   120,    80,
     163,   107,   163,   163,   116,   168,   163,    93,    98,    42,
      43,   161,   102,    17,   163,    44,   163,   129,    99,    89,
      50,   167,   167,    88,   114,    53,   138,   139,   115,   163,
       3,   164,   163,     3,   163,   116,   163,     3,   164,    89,
      96,   110,   163,   155,   156,    49,   161,    80,   129,   162,
      99,   163,    65,   167,     6,     6,   168,   138,   139,    99,
     163,    73,   164,     0,   164,   164,    99,    94,    73,    94,
       7,    73,     3,   121,   155,   156,   164,     3,    15,   164,
     164,   164,   163,   116,   163,    22,     3,   168,   163,    26,
      23,   165,    96,   164,    63,    32,   129,   281,    35,    36,
     139,   278,    44,   311,   393,   138,   139,    52,   128,   203,
      47,    48,   116,   233,   285,    49,   292,   475,   444,   123,
     124,    58,   155,   156,   443,   214,   130,   131,   239,    92,
     163,   465,    -1,    -1,    -1,   168,    -1,    -1,    -1,    -1,
     144,   145,   146,   147,   148,    82,    -1,   151,   152,    86,
     154,   155,   156,   157,   158,   159,    -1,   161,     7,    -1,
      -1,    -1,    96,    -1,   101,    -1,    15,    -1,    49,    -1,
     107,    -1,    -1,    22,    -1,    -1,   110,    26,    -1,    -1,
      -1,    -1,   116,    32,    -1,    -1,    35,    36,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,   130,   131,    47,    48,
      -1,    -1,    -1,    -1,   141,   142,   143,    49,    -1,    58,
     144,   145,   146,   147,   148,    96,    -1,   151,   152,    -1,
     154,   155,   156,   157,   158,   159,    49,   161,    -1,    -1,
      -1,    -1,    -1,    82,    -1,   116,    -1,    86,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,   130,
     131,    -1,   101,    -1,    96,    -1,    -1,    -1,   107,    -1,
      -1,    -1,    -1,   144,   145,   146,   147,   148,    -1,    -1,
     151,   152,    -1,   154,   155,   156,   157,   158,   159,    -1,
     161,    -1,   124,    -1,    -1,    -1,    -1,    -1,   130,   131,
      -1,    -1,   141,   142,   143,    -1,    -1,    -1,    -1,    -1,
      -1,   124,   144,   145,   146,   147,   148,   130,    -1,   151,
     152,    -1,   154,   155,   156,   157,   158,   159,    -1,   161,
      -1,    -1,    -1,    -1,   147,   148,    -1,    -1,   151,   152,
      -1,   154,   155,   156,   157,   158,   159,    -1,   161
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,    15,    22,    26,    32,    35,    36,    47,    48,
      58,    82,    86,   101,   107,   141,   142,   143,   170,   171,
     172,   173,   177,   179,   181,   182,   186,   187,   188,   196,
     198,   199,   200,   202,   205,   268,   269,    26,     3,   263,
       3,     3,   263,    75,   105,    89,    89,    93,   262,   263,
     263,    75,   105,    19,    55,     3,   270,   271,   140,   178,
     178,   178,     0,   166,   275,   107,   174,   174,    53,   163,
     208,   209,   213,     3,   165,   163,    89,   122,   189,   189,
     263,     3,   183,   263,   118,    89,   128,   122,   197,   197,
     263,   120,   167,   172,    92,   119,   225,   208,   209,     9,
      40,    76,   210,   211,    72,   210,   221,     3,     4,     5,
       6,    99,   138,   139,   168,   228,   229,   250,   251,   252,
     253,   254,   255,   256,     4,   180,   116,   263,   263,    78,
     218,    88,   163,   201,     3,   203,   204,   184,   251,   184,
      41,   263,   263,   208,   271,   163,   254,    12,   214,   164,
     164,   206,   207,   208,   213,   109,   212,   121,   206,    50,
      68,   226,   164,   167,    41,    89,   120,   163,   201,     3,
      41,    42,    43,    80,   116,   129,   155,   156,   163,   231,
     232,   233,   234,   235,   236,   237,   238,   240,   241,   242,
     243,   244,   246,   247,   248,   249,   250,   184,     3,   276,
      59,   209,   144,   167,   218,   107,   185,   185,     3,   175,
     176,   215,   227,   230,   231,   221,   210,   222,   223,   231,
     221,   231,   109,   231,   250,     3,   205,     3,    56,   190,
     191,   194,   120,   163,   165,   163,   163,   163,   106,   231,
     239,    41,   116,   232,   161,   232,   209,   231,   110,   127,
      17,    49,    96,   116,   123,   124,   130,   131,   144,   145,
     146,   147,   148,   151,   152,   154,   155,   156,   157,   158,
     159,   161,    93,   164,   167,   163,   231,   204,    44,   163,
     164,   167,    89,   216,   217,   167,     3,   120,   266,   267,
     226,   206,   167,    85,   111,   224,   226,    50,    50,    88,
      24,    30,    38,    64,    81,    84,    98,   102,   114,   192,
     164,   167,   115,   205,   164,   214,     3,   156,   209,   132,
     133,   134,   135,   136,   137,   245,   231,   231,   239,    87,
     106,   112,   163,   116,   227,   164,   164,   231,   231,   232,
     232,    96,   123,   163,    99,   116,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   254,   263,     3,   229,   183,   229,   176,   163,   257,
     258,   259,   260,   261,   263,   272,   218,   230,     3,   223,
     231,   231,   184,   163,   163,    99,   116,   193,   191,     3,
     227,   164,    89,   120,   103,    87,   112,   231,   231,   209,
     162,   110,   232,   163,   209,   227,    99,   162,   164,   164,
     205,    25,    62,    67,    73,    74,    90,    95,   273,   167,
     120,   264,   265,   266,    65,   219,     6,     6,    99,   163,
     164,   231,   192,   231,   231,   112,   103,   164,   232,   209,
     227,   164,   164,   164,    94,    73,    73,    73,    94,   258,
       3,   121,   164,   164,     3,   195,   164,   164,   112,   231,
     164,   164,   265,   259,   258,   163,   227,   164,   167,    77,
     126,   276,    46,   220,     3,   163,   231,   274,   164,   231,
       3,   249,   164
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   169,   170,   171,   171,   172,   172,   172,   172,   172,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   174,
     174,   175,   175,   176,   176,   177,   177,   177,   178,   178,
     179,   180,   181,   181,   182,   182,   183,   184,   185,   185,
     186,   187,   187,   187,   188,   188,   188,   188,   189,   189,
     190,   190,   191,   191,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   193,   193,   193,   194,   194,   195,   195,
     196,   196,   196,   197,   197,   198,   199,   200,   200,   201,
     201,   202,   203,   203,   204,   205,   205,   205,   206,   206,
     207,   207,   208,   208,   209,   209,   210,   211,   211,   211,
     212,   212,   213,   214,   214,   215,   216,   216,   217,   218,
     218,   219,   219,   220,   220,   221,   221,   222,   222,   223,
     224,   224,   224,   225,   225,   226,   226,   226,   226,   226,
     226,   227,   227,   228,   228,   229,   229,   230,   231,   231,
     231,   231,   231,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   233,   233,   234,   234,   234,   234,
     234,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   236,   236,   237,   237,   237,   237,   238,   238,
     238,   238,   239,   239,   240,   240,   241,   241,   241,   241,
     241,   241,   241,   242,   242,   243,   244,   245,   245,   245,
     245,   245,   245,   246,   247,   248,   249,   249,   249,   249,
     250,   250,   250,   250,   250,   251,   252,   252,   253,   253,
     254,   255,   256,   257,   257,   258,   258,   259,   259,   260,
     260,   261,   262,   263,   263,   264,   264,   265,   265,   266,
     266,   267,   267,   268,   268,   269,   270,   270,   271,   272,
     272,   272,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   274,   275,   275,   276,   276
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       0,     1,     3,     1,     4,     2,     2,     2,     1,     0,
       4,     1,     2,     5,     7,     5,     1,     1,     3,     0,
       5,     2,     3,     2,     8,     7,     6,     7,     3,     0,
       1,     3,     3,     6,     1,     1,     1,     1,     1,     4,
       4,     1,     1,     1,     2,     0,     1,     0,     1,     3,
       4,     4,     3,     2,     0,     4,     2,     8,     5,     3,
       0,     5,     1,     3,     3,     2,     2,     6,     1,     1,
       1,     3,     3,     3,     3,     5,     2,     1,     1,     1,
       1,     0,     7,     1,     0,     1,     1,     0,     2,     2,
       0,     4,     0,     2,     0,     3,     0,     1,     3,     2,
       1,     1,     0,     2,     0,     2,     2,     4,     2,     4,
       0,     1,     3,     1,     0,     1,     3,     2,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     2,     2,     2,     3,
       4,     1,     3,     3,     3,     3,     3,     3,     3,     4,
       3,     3,     3,     3,     5,     6,     5,     6,     4,     6,
       3,     5,     4,     5,     4,     5,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     6,     6,     1,     1,     1,
       1,     1,     1,     4,     4,     5,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     4,     1,
       3,     2,     1,     1,     3,     1,     5,     1,     0,     2,
       1,     1,     0,     1,     0,     2,     1,     3,     3,     4,
       6,     8,     1,     2,     1,     2,     1,     2,     1,     1,
       1,     0,     1,     1,     0,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* IDENTIFIER  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1763 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1769 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1775 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1781 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 171: /* statement_list  */
#line 150 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1794 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 172: /* statement  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1800 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 173: /* preparable_statement  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1806 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 174: /* opt_hints  */
#line 150 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1819 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 175: /* hint_list  */
#line 150 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1832 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 176: /* hint  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1838 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 177: /* transaction_statement  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).transaction_stmt)); }
#line 1844 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 179: /* prepare_statement  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1850 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 180: /* prepare_target_query  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1856 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 181: /* execute_statement  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1862 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 182: /* import_statement  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1868 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 183: /* file_type  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1874 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 184: /* file_path  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1880 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 185: /* opt_file_type  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1886 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 186: /* export_statement  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).export_stmt)); }
#line 1892 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 187: /* show_statement  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).show_stmt)); }
#line 1898 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 188: /* create_statement  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1904 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 189: /* opt_not_exists  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1910 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 190: /* column_def_commalist  */
#line 150 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1923 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 191: /* column_def  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 1929 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 192: /* column_type  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1935 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 193: /* opt_column_nullable  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1941 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 194: /* opt_unique  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1947 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 195: /* key_columns  */
#line 150 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1960 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 196: /* drop_statement  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1966 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 197: /* opt_exists  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1972 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 198: /* delete_statement  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1978 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 199: /* truncate_statement  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1984 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* insert_statement  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1990 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* opt_column_list  */
#line 150 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2003 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* update_statement  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 2009 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 203: /* update_clause_commalist  */
#line 150 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 2022 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 204: /* update_clause  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 2028 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 205: /* select_statement  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2034 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* select_within_set_operation  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2040 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* select_within_set_operation_no_parentheses  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2046 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* select_with_paren  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2052 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* select_no_paren  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2058 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* set_operator  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).set_operator_t)); }
#line 2064 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* set_type  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).set_operator_t)); }
#line 2070 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* opt_all  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2076 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* select_clause  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2082 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* opt_distinct  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2088 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* select_list  */
#line 150 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2101 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* opt_from_clause  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2107 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* from_clause  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2113 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* opt_where  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2119 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* opt_group  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 2125 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* opt_having  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2131 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* opt_order  */
#line 150 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2144 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* order_list  */
#line 150 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2157 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* order_desc  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 2163 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* opt_order_type  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2169 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* opt_top  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2175 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* opt_limit  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2181 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* expr_list  */
#line 150 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2194 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* opt_literal_list  */
#line 150 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2207 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* literal_list  */
#line 150 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2220 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* expr_alias  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2226 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* expr  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2232 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* operand  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2238 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* scalar_expr  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2244 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* unary_expr  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2250 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* binary_expr  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2256 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* logic_expr  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2262 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* in_expr  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2268 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* case_expr  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2274 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* case_list  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2280 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* exists_expr  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2286 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* comp_expr  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2292 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* function_expr  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2298 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* extract_expr  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2304 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* cast_expr  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2310 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* datetime_field  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2316 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* array_expr  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2322 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* array_index  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2328 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* between_expr  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2334 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 249: /* column_name  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2340 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* literal  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2346 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 251: /* string_literal  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2352 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 252: /* bool_literal  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2358 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 253: /* num_literal  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2364 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 254: /* int_literal  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2370 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 255: /* null_literal  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2376 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 256: /* param_expr  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2382 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 257: /* table_ref  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2388 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 258: /* table_ref_atomic  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2394 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 259: /* nonjoin_table_ref_atomic  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2400 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 260: /* table_ref_commalist  */
#line 150 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2413 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 261: /* table_ref_name  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2419 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 262: /* table_ref_name_no_alias  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2425 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 263: /* table_name  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2431 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 264: /* table_alias  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2437 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 265: /* opt_table_alias  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2443 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 266: /* alias  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2449 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 267: /* opt_alias  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2455 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 268: /* opt_with_clause  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2461 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 269: /* with_clause  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2467 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 270: /* with_description_list  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2473 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 271: /* with_description  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_t)); }
#line 2479 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 272: /* join_clause  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2485 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 273: /* opt_join_type  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2491 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 274: /* join_condition  */
#line 158 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2497 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 276: /* ident_commalist  */
#line 150 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2510 "bison_parser.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (hsql::SQLParserResult* result, yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 73 "bison_parser.y" /* yacc.c:1429  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
	yylloc.string_length = 0;
}

#line 2629 "bison_parser.cpp" /* yacc.c:1429  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 269 "bison_parser.y" /* yacc.c:1646  */
    {
			for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
				// Transfers ownership of the statement.
				result->addStatement(stmt);
			}

			unsigned param_id = 0;
			for (void* param : yyloc.param_list) {
				if (param != nullptr) {
					Expr* expr = (Expr*) param;
					expr->ival = param_id;
					result->addParameter(expr);
					++param_id;
				}
			}
			delete (yyvsp[-1].stmt_vec);
		}
#line 2834 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 290 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2845 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 296 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2856 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 305 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2865 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 309 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2874 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 313 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2882 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 316 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 2890 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 319 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 2898 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 326 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2904 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 327 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2910 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 328 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2916 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 329 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2922 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 330 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2928 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 331 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2934 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 332 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2940 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 333 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2946 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 334 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 2952 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 343 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2958 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 344 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 2964 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 349 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2970 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 350 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2976 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 354 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2985 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 358 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2995 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 370 "bison_parser.y" /* yacc.c:1646  */
    {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3003 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 373 "bison_parser.y" /* yacc.c:1646  */
    {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3011 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 376 "bison_parser.y" /* yacc.c:1646  */
    {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3019 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 390 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3029 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 400 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3038 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 404 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3048 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 418 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3059 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 424 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3070 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 433 "bison_parser.y" /* yacc.c:1646  */
    {
			if (strcasecmp((yyvsp[0].sval), "csv") == 0) {
				(yyval.import_type_t) = kImportCSV;
			} else if (strcasecmp((yyvsp[0].sval), "tbl") == 0) {
				(yyval.import_type_t) = kImportTbl;
			} else if (strcasecmp((yyvsp[0].sval), "binary") == 0 || strcasecmp((yyvsp[0].sval), "bin") == 0) {
				(yyval.import_type_t) = kImportBinary;
			} else {
				free((yyvsp[0].sval));
				yyerror(&yyloc, result, scanner, "File type is unknown.");
				YYERROR;
			}
			free((yyvsp[0].sval));
		}
#line 3089 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 450 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3095 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 454 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3103 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 457 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.import_type_t) = kImportAuto; }
#line 3109 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 466 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3120 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 480 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3128 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 483 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3138 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 488 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3148 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 502 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			if (strcasecmp((yyvsp[-2].sval), "tbl") != 0) {
				free((yyvsp[-2].sval));
				yyerror(&yyloc, result, scanner, "File type is unknown.");
			 	YYERROR;
			}
			free((yyvsp[-2].sval));
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 3166 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 515 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 3178 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 522 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3190 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 529 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3203 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 540 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3209 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 541 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3215 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 545 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3221 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 546 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3227 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 550 "bison_parser.y" /* yacc.c:1646  */
    {(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));}
#line 3233 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 551 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.column_t) = new ColumnDefinition(NULL, DataType::UNKNOWN, false);
			(yyval.column_t)->key=new KeyDefinition((yyvsp[-3].sval),(yyvsp[-5].bval));printf("keyname=%s\n",(yyvsp[-3].sval));
			(yyval.column_t)->key->keyColumns=(yyvsp[-1].str_vec);
		}
#line 3243 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 559 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3249 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 560 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3255 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 561 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3261 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 562 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3267 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 563 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3273 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 564 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3279 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 565 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3285 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 566 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3291 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 567 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3297 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 571 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3303 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 572 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3309 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 573 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3315 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 577 "bison_parser.y" /* yacc.c:1646  */
    {(yyval.bval) = true;}
#line 3321 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 578 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3327 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 581 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 3333 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 582 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 3339 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 592 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3350 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 598 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3361 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 604 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3371 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 612 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3377 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 613 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3383 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 622 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3394 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 631 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3404 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 644 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3416 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 651 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3428 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 662 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3434 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 663 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = nullptr; }
#line 3440 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 673 "bison_parser.y" /* yacc.c:1646  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3451 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 682 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3457 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 683 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3463 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 687 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3473 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 699 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3482 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 703 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3491 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 707 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			if ((yyval.select_stmt)->setOperations == nullptr) {
				(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
			}
			(yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
			(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
			(yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-5].with_description_vec);
		}
#line 3507 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 725 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3513 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 726 "bison_parser.y" /* yacc.c:1646  */
    {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3526 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 737 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3532 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 738 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3538 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 742 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3553 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 752 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			if ((yyval.select_stmt)->setOperations == nullptr) {
				(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
			}
			(yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
			(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
			(yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
		}
#line 3568 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 765 "bison_parser.y" /* yacc.c:1646  */
    {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3577 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 772 "bison_parser.y" /* yacc.c:1646  */
    {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 3586 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 776 "bison_parser.y" /* yacc.c:1646  */
    {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 3595 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 780 "bison_parser.y" /* yacc.c:1646  */
    {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 3604 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 787 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.bval) = true;
		}
#line 3612 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 790 "bison_parser.y" /* yacc.c:1646  */
    {
		(yyval.bval) = false;
	}
#line 3620 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 796 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3634 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 808 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3640 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 809 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3646 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 817 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3652 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 818 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = nullptr; }
#line 3658 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 822 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3664 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 827 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3670 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 828 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 3676 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 832 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3686 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 837 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.group_t) = nullptr; }
#line 3692 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 841 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3698 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 842 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 3704 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 846 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3710 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 847 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = nullptr; }
#line 3716 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 851 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3722 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 852 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3728 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 856 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3734 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 860 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 3740 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 861 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderDesc; }
#line 3746 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 862 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 3752 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 868 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3758 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 869 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 3764 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 873 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3770 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 874 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3776 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 875 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3782 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 876 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3788 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 877 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3794 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 878 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 3800 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 885 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3806 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 886 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3812 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 890 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3818 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 891 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 3824 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 895 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3830 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 896 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3836 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 900 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3848 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 918 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3854 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 928 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3860 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 937 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3866 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 938 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3872 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 939 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3878 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 940 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3884 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 941 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3890 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 946 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3896 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 947 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3902 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 948 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3908 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 949 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3914 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 950 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3920 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 951 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3926 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 952 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3932 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 953 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3938 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 954 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3944 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 955 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3950 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 959 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3956 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 960 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3962 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 964 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3968 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 965 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3974 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 966 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3980 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 967 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3986 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 973 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3992 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 974 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3998 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 975 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4004 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 976 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4010 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 980 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4016 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 981 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4022 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 985 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4028 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 986 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4034 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 990 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4040 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 991 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4046 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 992 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4052 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 993 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4058 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 994 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4064 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 995 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4070 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 996 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4076 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1000 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4082 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1001 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4088 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1005 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4094 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1009 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4100 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1013 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 4106 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1014 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 4112 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1015 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 4118 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1016 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 4124 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1017 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 4130 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1018 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 4136 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1022 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4142 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1026 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4148 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1030 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4154 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1034 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4160 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1035 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4166 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1036 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar(); }
#line 4172 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1037 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4178 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1049 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4184 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1053 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 4190 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1054 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 4196 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1058 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4202 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1063 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4208 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1067 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4214 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1071 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4224 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1084 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4235 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1100 "bison_parser.y" /* yacc.c:1646  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4246 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1109 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4252 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1110 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4258 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1115 "bison_parser.y" /* yacc.c:1646  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4270 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1126 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4280 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1135 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4286 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1136 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4292 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1142 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4298 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1148 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = nullptr; }
#line 4304 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1153 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4310 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1154 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4316 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1160 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = nullptr; }
#line 4322 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1170 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.with_description_vec) = nullptr; }
#line 4328 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1174 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4334 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1178 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4343 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1182 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4352 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1189 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4362 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1203 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4374 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1211 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4387 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1221 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-6].uval);
			(yyval.table)->join->left = (yyvsp[-7].table);
			(yyval.table)->join->right = (yyvsp[-4].table);
			auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) left_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-7].table)->getName() != nullptr) left_col->table = strdup((yyvsp[-7].table)->getName());
			auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) right_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-4].table)->getName() != nullptr) right_col->table = strdup((yyvsp[-4].table)->getName());
			(yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
			delete (yyvsp[-1].expr);
		}
#line 4407 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1239 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinInner; }
#line 4413 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1240 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinLeft; }
#line 4419 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1241 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinLeft; }
#line 4425 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1242 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinRight; }
#line 4431 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1243 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinRight; }
#line 4437 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1244 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinFull; }
#line 4443 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1245 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinFull; }
#line 4449 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1246 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinFull; }
#line 4455 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1247 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinCross; }
#line 4461 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1248 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinInner; }
#line 4467 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1268 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4473 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1269 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4479 "bison_parser.cpp" /* yacc.c:1646  */
    break;


#line 4483 "bison_parser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, result, scanner, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1272 "bison_parser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
