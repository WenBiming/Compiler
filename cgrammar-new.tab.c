
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 3 "cgrammar-new.y"

#include "parser.h"

extern int yylineno;
extern int root;

extern int yylex();
extern void addchild(Node *node1, Node *node2);
Node *link(int tid, Node *rExp, ...);

struct Node *parse_tree;

/* Line 189 of yacc.c  */
#line 88 "cgrammar-new.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
#define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
#undef YYERROR_VERBOSE
#define YYERROR_VERBOSE 1
#else
#define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
#define YYTOKEN_TABLE 0
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
#define YYTOKENTYPE
/* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
enum yytokentype
{
    COLON = 258,
    OR_OP = 259,
    AND_OP = 260,
    NE_OP = 261,
    EQ_OP = 262,
    GE_OP = 263,
    LE_OP = 264,
    RIGHT_OP = 265,
    LEFT_OP = 266,
    IDENTIFIER = 267,
    CONSTANT = 268,
    STRING_LITERAL = 269,
    SIZEOF = 270,
    PTR_OP = 271,
    INC_OP = 272,
    DEC_OP = 273,
    MUL_ASSIGN = 274,
    DIV_ASSIGN = 275,
    MOD_ASSIGN = 276,
    ADD_ASSIGN = 277,
    SUB_ASSIGN = 278,
    LEFT_ASSIGN = 279,
    RIGHT_ASSIGN = 280,
    AND_ASSIGN = 281,
    XOR_ASSIGN = 282,
    OR_ASSIGN = 283,
    TYPE_NAME = 284,
    TYPEDEF = 285,
    EXTERN = 286,
    STATIC = 287,
    AUTO = 288,
    REGISTER = 289,
    CHAR = 290,
    SHORT = 291,
    INT = 292,
    LONG = 293,
    SIGNED = 294,
    UNSIGNED = 295,
    FLOAT = 296,
    DOUBLE = 297,
    CONST = 298,
    VOLATILE = 299,
    VOID = 300,
    STRUCT = 301,
    UNION = 302,
    ENUM = 303,
    ELLIPSIS = 304,
    CASE = 305,
    DEFAULT = 306,
    IF = 307,
    ELSE = 308,
    SWITCH = 309,
    WHILE = 310,
    DO = 311,
    FOR = 312,
    GOTO = 313,
    CONTINUE = 314,
    BREAK = 315,
    RETURN = 316
};
#endif

#if !defined YYSTYPE && !defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 222 of yacc.c  */
#line 17 "cgrammar-new.y"

    struct Node *node;

/* Line 222 of yacc.c  */
#line 191 "cgrammar-new.tab.c"
} YYSTYPE;
#define YYSTYPE_IS_TRIVIAL 1
#define yystype YYSTYPE /* obsolescent; will be withdrawn */
#define YYSTYPE_IS_DECLARED 1
#endif

/* Copy the second part of user declarations.  */

/* Line 264 of yacc.c  */
#line 203 "cgrammar-new.tab.c"

#ifdef short
#undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
#ifdef __SIZE_TYPE__
#define YYSIZE_T __SIZE_TYPE__
#elif defined size_t
#define YYSIZE_T size_t
#elif !defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ || defined __cplusplus || defined _MSC_VER)
#include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#define YYSIZE_T size_t
#else
#define YYSIZE_T unsigned int
#endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T)-1)

#ifndef YY_
#if YYENABLE_NLS
#if ENABLE_NLS
#include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#define YY_(msgid) dgettext("bison-runtime", msgid)
#endif
#endif
#ifndef YY_
#define YY_(msgid) msgid
#endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if !defined lint || defined __GNUC__
#define YYUSE(e) ((void)(e))
#else
#define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
#define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ || defined __cplusplus || defined _MSC_VER)
static int
YYID(int yyi)
#else
static int
    YYID(yyi) int yyi;
#endif
{
    return yyi;
}
#endif

#if !defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

#ifdef YYSTACK_USE_ALLOCA
#if YYSTACK_USE_ALLOCA
#ifdef __GNUC__
#define YYSTACK_ALLOC __builtin_alloca
#elif defined __BUILTIN_VA_ARG_INCR
#include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#elif defined _AIX
#define YYSTACK_ALLOC __alloca
#elif defined _MSC_VER
#include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#define alloca _alloca
#else
#define YYSTACK_ALLOC alloca
#if !defined _ALLOCA_H && !defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ || defined __cplusplus || defined _MSC_VER)
#include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#ifndef _STDLIB_H
#define _STDLIB_H 1
#endif
#endif
#endif
#endif
#endif

#ifdef YYSTACK_ALLOC
/* Pacify GCC's `empty if-body' warning.  */
#define YYSTACK_FREE(Ptr) \
    do                    \
    { /* empty */         \
        ;                 \
    } while (YYID(0))
#ifndef YYSTACK_ALLOC_MAXIMUM
/* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#endif
#else
#define YYSTACK_ALLOC YYMALLOC
#define YYSTACK_FREE YYFREE
#ifndef YYSTACK_ALLOC_MAXIMUM
#define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#endif
#if (defined __cplusplus && !defined _STDLIB_H && !((defined YYMALLOC || defined malloc) && (defined YYFREE || defined free)))
#include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#ifndef _STDLIB_H
#define _STDLIB_H 1
#endif
#endif
#ifndef YYMALLOC
#define YYMALLOC malloc
#if !defined malloc && !defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ || defined __cplusplus || defined _MSC_VER)
void *malloc(YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#endif
#endif
#ifndef YYFREE
#define YYFREE free
#if !defined free && !defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ || defined __cplusplus || defined _MSC_VER)
void free(void *);      /* INFRINGES ON USER NAME SPACE */
#endif
#endif
#endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */

#if (!defined yyoverflow && (!defined __cplusplus || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
    yytype_int16 yyss_alloc;
    YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
#define YYSTACK_GAP_MAXIMUM (sizeof(union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
#define YYSTACK_BYTES(N) \
    ((N) * (sizeof(yytype_int16) + sizeof(YYSTYPE)) + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
#ifndef YYCOPY
#if defined __GNUC__ && 1 < __GNUC__
#define YYCOPY(To, From, Count) \
    __builtin_memcpy(To, From, (Count) * sizeof(*(From)))
#else
#define YYCOPY(To, From, Count)             \
    do                                      \
    {                                       \
        YYSIZE_T yyi;                       \
        for (yyi = 0; yyi < (Count); yyi++) \
            (To)[yyi] = (From)[yyi];        \
    } while (YYID(0))
#endif
#endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
#define YYSTACK_RELOCATE(Stack_alloc, Stack)                             \
    do                                                                   \
    {                                                                    \
        YYSIZE_T yynewbytes;                                             \
        YYCOPY(&yyptr->Stack_alloc, Stack, yysize);                      \
        Stack = &yyptr->Stack_alloc;                                     \
        yynewbytes = yystacksize * sizeof(*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof(*yyptr);                            \
    } while (YYID(0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL 61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST 1402

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS 86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS 51
/* YYNRULES -- Number of rules.  */
#define YYNRULES 203
/* YYNRULES -- Number of states.  */
#define YYNSTATES 356

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK 2
#define YYMAXUTOK 316

#define YYTRANSLATE(YYX) \
    ((unsigned int)(YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
    {
        0, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 80, 2, 2, 2, 22, 9, 2,
        73, 74, 20, 18, 78, 19, 77, 21, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 81, 83,
        12, 82, 13, 3, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 75, 2, 76, 8, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 84, 7, 85, 79, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 1, 2, 4, 5,
        6, 10, 11, 14, 15, 16, 17, 23, 24, 25,
        26, 27, 28, 29, 30, 31, 32, 33, 34, 35,
        36, 37, 38, 39, 40, 41, 42, 43, 44, 45,
        46, 47, 48, 49, 50, 51, 52, 53, 54, 55,
        56, 57, 58, 59, 60, 61, 62, 63, 64, 65,
        66, 67, 68, 69, 70, 71, 72};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
    {
        0, 0, 3, 5, 7, 9, 13, 15, 20, 24,
        29, 33, 37, 40, 43, 45, 49, 51, 54, 57,
        60, 63, 66, 69, 72, 75, 78, 83, 85, 90,
        92, 98, 102, 106, 110, 114, 118, 122, 126, 130,
        134, 138, 142, 146, 150, 154, 158, 162, 166, 170,
        172, 176, 180, 184, 188, 192, 196, 200, 204, 208,
        212, 216, 218, 222, 224, 227, 231, 233, 236, 238,
        241, 243, 246, 248, 252, 254, 258, 260, 262, 264,
        266, 268, 270, 272, 274, 276, 278, 280, 282, 284,
        286, 288, 290, 292, 294, 296, 298, 301, 307, 312,
        315, 321, 326, 329, 331, 334, 338, 341, 343, 346,
        348, 350, 354, 356, 359, 363, 368, 374, 377, 379,
        383, 385, 389, 392, 394, 396, 400, 405, 409, 414,
        419, 423, 425, 428, 431, 435, 437, 441, 443, 447,
        450, 453, 455, 457, 461, 463, 466, 468, 470, 473,
        477, 480, 484, 488, 493, 496, 500, 504, 509, 511,
        515, 520, 522, 526, 530, 535, 539, 541, 543, 546,
        552, 560, 566, 572, 580, 590, 594, 597, 600, 603,
        607, 608, 610, 611, 613, 614, 616, 619, 623, 627,
        632, 634, 637, 639, 642, 644, 647, 649, 651, 654,
        658, 661, 664, 666};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
    {
        132, 0, -1, 23, -1, 24, -1, 25, -1, 73,
        94, 74, -1, 87, -1, 88, 75, 94, 76, -1,
        88, 73, 74, -1, 88, 73, 89, 74, -1, 88,
        77, 23, -1, 88, 27, 23, -1, 88, 28, -1,
        88, 29, -1, 93, -1, 89, 78, 93, -1, 88,
        -1, 28, 90, -1, 29, 90, -1, 9, 91, -1,
        20, 91, -1, 18, 91, -1, 19, 91, -1, 79,
        91, -1, 80, 91, -1, 26, 90, -1, 26, 73,
        120, 74, -1, 90, -1, 73, 120, 74, 91, -1,
        91, -1, 92, 3, 94, 81, 92, -1, 92, 5,
        92, -1, 92, 6, 92, -1, 92, 7, 92, -1,
        92, 8, 92, -1, 92, 9, 92, -1, 92, 11,
        92, -1, 92, 10, 92, -1, 92, 12, 92, -1,
        92, 13, 92, -1, 92, 15, 92, -1, 92, 14,
        92, -1, 92, 17, 92, -1, 92, 16, 92, -1,
        92, 18, 92, -1, 92, 19, 92, -1, 92, 20,
        92, -1, 92, 21, 92, -1, 92, 22, 92, -1,
        92, -1, 90, 82, 93, -1, 90, 30, 93, -1,
        90, 31, 93, -1, 90, 32, 93, -1, 90, 33,
        93, -1, 90, 34, 93, -1, 90, 35, 93, -1,
        90, 36, 93, -1, 90, 37, 93, -1, 90, 38,
        93, -1, 90, 39, 93, -1, 93, -1, 94, 78,
        93, -1, 92, -1, 97, 83, -1, 97, 98, 83,
        -1, 100, -1, 100, 97, -1, 101, -1, 101, 97,
        -1, 102, -1, 102, 97, -1, 99, -1, 98, 78,
        99, -1, 113, -1, 113, 82, 123, -1, 41, -1,
        42, -1, 43, -1, 44, -1, 45, -1, 56, -1,
        46, -1, 47, -1, 48, -1, 49, -1, 52, -1,
        53, -1, 50, -1, 51, -1, 104, -1, 110, -1,
        40, -1, 54, -1, 55, -1, 102, -1, 103, 102,
        -1, 57, 23, 84, 105, 85, -1, 57, 84, 105,
        85, -1, 57, 23, -1, 58, 23, 84, 105, 85,
        -1, 58, 84, 105, 85, -1, 58, 23, -1, 106,
        -1, 105, 106, -1, 107, 108, 83, -1, 101, 107,
        -1, 101, -1, 102, 107, -1, 102, -1, 109, -1,
        108, 78, 109, -1, 113, -1, 81, 95, -1, 113,
        81, 95, -1, 59, 84, 111, 85, -1, 59, 23,
        84, 111, 85, -1, 59, 23, -1, 112, -1, 111,
        78, 112, -1, 23, -1, 23, 82, 95, -1, 115,
        114, -1, 114, -1, 23, -1, 73, 113, 74, -1,
        114, 75, 95, 76, -1, 114, 75, 76, -1, 114,
        73, 116, 74, -1, 114, 73, 119, 74, -1, 114,
        73, 74, -1, 20, -1, 20, 103, -1, 20, 115,
        -1, 20, 103, 115, -1, 117, -1, 117, 78, 60,
        -1, 118, -1, 117, 78, 118, -1, 97, 113, -1,
        97, 121, -1, 97, -1, 23, -1, 119, 78, 23,
        -1, 107, -1, 107, 121, -1, 115, -1, 122, -1,
        115, 122, -1, 73, 121, 74, -1, 75, 76, -1,
        75, 95, 76, -1, 122, 75, 76, -1, 122, 75,
        95, 76, -1, 73, 74, -1, 73, 116, 74, -1,
        122, 73, 74, -1, 122, 73, 116, 74, -1, 93,
        -1, 84, 124, 85, -1, 84, 124, 78, 85, -1,
        123, -1, 124, 78, 123, -1, 23, 81, 125, -1,
        61, 95, 81, 125, -1, 62, 81, 125, -1, 129,
        -1, 83, -1, 94, 83, -1, 63, 73, 94, 74,
        125, -1, 63, 73, 94, 74, 125, 64, 125, -1,
        65, 73, 94, 74, 125, -1, 66, 73, 94, 74,
        125, -1, 67, 125, 66, 73, 94, 74, 83, -1,
        68, 73, 126, 83, 127, 83, 128, 74, 125, -1,
        69, 23, 83, -1, 70, 83, -1, 71, 83, -1,
        72, 83, -1, 72, 94, 83, -1, -1, 94, -1,
        -1, 94, -1, -1, 94, -1, 84, 85, -1, 84,
        131, 85, -1, 84, 130, 85, -1, 84, 130, 131,
        85, -1, 96, -1, 130, 96, -1, 125, -1, 131,
        125, -1, 133, -1, 132, 133, -1, 134, -1, 96,
        -1, 135, 136, -1, 97, 113, 130, -1, 97, 113,
        -1, 113, 130, -1, 113, -1, 129, -1};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
    {
        0, 68, 68, 69, 70, 71, 75, 76, 77, 78,
        79, 80, 81, 82, 86, 87, 91, 92, 93, 94,
        95, 96, 97, 98, 99, 100, 101, 105, 106, 110,
        111, 112, 113, 114, 115, 116, 117, 118, 119, 120,
        121, 122, 123, 124, 125, 126, 127, 128, 129, 133,
        134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
        144, 148, 149, 153, 157, 158, 162, 163, 164, 165,
        166, 167, 171, 172, 176, 177, 181, 182, 183, 184,
        185, 189, 190, 191, 192, 193, 194, 195, 196, 197,
        198, 199, 200, 204, 205, 209, 210, 214, 215, 216,
        217, 218, 219, 224, 225, 229, 233, 234, 235, 236,
        240, 241, 245, 246, 247, 251, 252, 253, 257, 258,
        262, 263, 267, 268, 272, 273, 274, 275, 276, 277,
        278, 282, 283, 284, 285, 289, 290, 294, 295, 299,
        300, 301, 305, 306, 310, 311, 315, 316, 317, 321,
        322, 323, 324, 325, 326, 327, 328, 329, 333, 334,
        335, 339, 340, 344, 345, 346, 348, 349, 350, 352,
        353, 354, 356, 357, 358, 360, 361, 362, 363, 364,
        368, 369, 373, 374, 378, 379, 383, 384, 385, 386,
        390, 391, 395, 396, 400, 401, 405, 406, 410, 414,
        415, 416, 417, 421};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
    {
        "$end", "error", "$undefined", "'?'", "COLON", "OR_OP", "AND_OP", "'|'",
        "'^'", "'&'", "NE_OP", "EQ_OP", "'<'", "'>'", "GE_OP", "LE_OP",
        "RIGHT_OP", "LEFT_OP", "'+'", "'-'", "'*'", "'/'", "'%'", "IDENTIFIER",
        "CONSTANT", "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP",
        "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
        "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
        "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR",
        "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
        "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
        "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
        "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "','",
        "'~'", "'!'", "':'", "'='", "';'", "'{'", "'}'", "$accept", "PrimaryExp",
        "PostfixExp", "ArgExpList", "UnaryExp", "CastExp", "CondExp",
        "AssignExp", "Exp", "ConstExp", "Declaration", "Declaration_Spec",
        "init_decl_s", "init_decl", "StorageSpec", "TypeSpec", "TypeQua",
        "TypeQua_s", "StructUnionSpec", "struct_Declaration_s",
        "struct_Declaration", "SpecQua_s", "struct_decl_s", "struct_decl",
        "EnumSpec", "Enum_s", "Enum", "declarator", "direct_decl", "pointer",
        "ParamType_s", "Param_s", "Param_Declaration", "Ident_s", "type_name",
        "abs_decl", "direct_abs_decl", "Init", "Init_s", "Stmt", "Exp1", "Exp2",
        "Exp3", "Block", "Declaration_s", "Stmt_s", "TransUnit", "ExternalDef",
        "FunctionDef", "FunctionDecl", "FunctionBody", 0};
#endif

#ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
    {
        0, 256, 257, 63, 258, 259, 260, 124, 94, 38,
        261, 262, 60, 62, 263, 264, 265, 266, 43, 45,
        42, 47, 37, 267, 268, 269, 270, 271, 272, 273,
        274, 275, 276, 277, 278, 279, 280, 281, 282, 283,
        284, 285, 286, 287, 288, 289, 290, 291, 292, 293,
        294, 295, 296, 297, 298, 299, 300, 301, 302, 303,
        304, 305, 306, 307, 308, 309, 310, 311, 312, 313,
        314, 315, 316, 40, 41, 91, 93, 46, 44, 126,
        33, 58, 61, 59, 123, 125};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
    {
        0, 86, 87, 87, 87, 87, 88, 88, 88, 88,
        88, 88, 88, 88, 89, 89, 90, 90, 90, 90,
        90, 90, 90, 90, 90, 90, 90, 91, 91, 92,
        92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
        92, 92, 92, 92, 92, 92, 92, 92, 92, 93,
        93, 93, 93, 93, 93, 93, 93, 93, 93, 93,
        93, 94, 94, 95, 96, 96, 97, 97, 97, 97,
        97, 97, 98, 98, 99, 99, 100, 100, 100, 100,
        100, 101, 101, 101, 101, 101, 101, 101, 101, 101,
        101, 101, 101, 102, 102, 103, 103, 104, 104, 104,
        104, 104, 104, 105, 105, 106, 107, 107, 107, 107,
        108, 108, 109, 109, 109, 110, 110, 110, 111, 111,
        112, 112, 113, 113, 114, 114, 114, 114, 114, 114,
        114, 115, 115, 115, 115, 116, 116, 117, 117, 118,
        118, 118, 119, 119, 120, 120, 121, 121, 121, 122,
        122, 122, 122, 122, 122, 122, 122, 122, 123, 123,
        123, 124, 124, 125, 125, 125, 125, 125, 125, 125,
        125, 125, 125, 125, 125, 125, 125, 125, 125, 125,
        126, 126, 127, 127, 128, 128, 129, 129, 129, 129,
        130, 130, 131, 131, 132, 132, 133, 133, 134, 135,
        135, 135, 135, 136};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
    {
        0, 2, 1, 1, 1, 3, 1, 4, 3, 4,
        3, 3, 2, 2, 1, 3, 1, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 4, 1, 4, 1,
        5, 3, 3, 3, 3, 3, 3, 3, 3, 3,
        3, 3, 3, 3, 3, 3, 3, 3, 3, 1,
        3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
        3, 1, 3, 1, 2, 3, 1, 2, 1, 2,
        1, 2, 1, 3, 1, 3, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 2, 5, 4, 2,
        5, 4, 2, 1, 2, 3, 2, 1, 2, 1,
        1, 3, 1, 2, 3, 4, 5, 2, 1, 3,
        1, 3, 2, 1, 1, 3, 4, 3, 4, 4,
        3, 1, 2, 2, 3, 1, 3, 1, 3, 2,
        2, 1, 1, 3, 1, 2, 1, 1, 2, 3,
        2, 3, 3, 4, 2, 3, 3, 4, 1, 3,
        4, 1, 3, 3, 4, 3, 1, 1, 2, 5,
        7, 5, 5, 7, 9, 3, 2, 2, 2, 3,
        0, 1, 0, 1, 0, 1, 2, 3, 3, 4,
        1, 2, 1, 2, 1, 2, 1, 1, 2, 3,
        2, 2, 1, 1};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
    {
        0, 131, 124, 92, 76, 77, 78, 79, 80, 82,
        83, 84, 85, 88, 89, 86, 87, 93, 94, 81,
        0, 0, 0, 0, 197, 0, 66, 68, 70, 90,
        91, 202, 123, 0, 0, 194, 196, 0, 95, 132,
        133, 99, 0, 102, 0, 117, 0, 0, 64, 0,
        72, 74, 67, 69, 71, 190, 0, 201, 0, 0,
        122, 1, 195, 0, 203, 198, 96, 134, 0, 107,
        109, 0, 103, 0, 0, 0, 0, 120, 0, 118,
        125, 0, 65, 0, 199, 74, 191, 142, 130, 141,
        0, 135, 137, 0, 0, 0, 0, 0, 2, 3,
        4, 0, 0, 0, 0, 127, 0, 0, 6, 16,
        27, 29, 63, 0, 2, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 167, 186, 27, 49,
        61, 0, 192, 166, 0, 0, 0, 106, 108, 98,
        104, 0, 0, 110, 112, 0, 101, 0, 0, 0,
        115, 73, 0, 158, 75, 0, 0, 139, 146, 140,
        147, 128, 0, 129, 0, 19, 21, 22, 20, 0,
        25, 0, 17, 18, 0, 144, 0, 23, 24, 0,
        12, 13, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 126, 0, 0, 0, 0, 0,
        0, 0, 180, 0, 176, 177, 178, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        168, 188, 0, 187, 193, 97, 113, 0, 105, 0,
        100, 116, 121, 119, 161, 0, 154, 0, 0, 150,
        0, 148, 0, 0, 136, 138, 143, 0, 5, 0,
        146, 145, 0, 11, 8, 0, 14, 0, 10, 0,
        31, 32, 33, 34, 35, 37, 36, 38, 39, 41,
        40, 43, 42, 44, 45, 46, 47, 48, 163, 0,
        165, 0, 0, 0, 0, 181, 0, 175, 179, 51,
        52, 53, 54, 55, 56, 57, 58, 59, 60, 50,
        62, 189, 111, 114, 0, 159, 155, 149, 151, 156,
        0, 152, 0, 26, 28, 9, 0, 7, 0, 164,
        0, 0, 0, 0, 182, 160, 162, 157, 153, 15,
        30, 169, 171, 172, 0, 183, 0, 0, 0, 184,
        170, 173, 185, 0, 0, 174};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
    {
        -1, 108, 109, 265, 128, 111, 129, 130, 131, 113,
        55, 56, 49, 50, 26, 27, 28, 39, 29, 71,
        72, 73, 142, 143, 30, 78, 79, 31, 32, 33,
        247, 91, 92, 93, 176, 248, 160, 154, 245, 132,
        296, 346, 353, 133, 57, 135, 34, 35, 36, 37,
        65};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -156
static const yytype_int16 yypact[] =
    {
        1005, 39, -156, -156, -156, -156, -156, -156, -156, -156,
        -156, -156, -156, -156, -156, -156, -156, -156, -156, -156,
        -6, 4, 8, 99, -156, -7, 1243, 1243, 1243, -156,
        -156, 1243, 126, 6, 645, -156, -156, -78, -156, 39,
        -156, -63, 1263, -52, 1263, -39, 35, 1, -156, 20,
        -156, 1167, -156, -156, -156, -156, -7, 1243, 1052, 754,
        126, -156, -156, 341, -156, -156, -156, -156, 1263, 1263,
        1263, 870, -156, 40, 1263, 1081, 35, 36, -23, -156,
        -156, 99, -156, 582, 1243, 102, -156, -156, -156, 41,
        12, 17, -156, -50, 859, 859, 859, 859, -156, -156,
        -156, 871, 883, 883, 696, -156, 859, 859, -156, 237,
        -156, -156, 1182, 48, 110, 859, 111, 134, 135, 148,
        570, 149, 225, 168, 172, 594, -156, -156, 1035, 1182,
        -156, 42, -156, -156, 409, 477, 1101, -156, -156, -156,
        -156, 859, 96, -156, 150, 1121, -156, 88, 859, 35,
        -156, -156, 582, -156, -156, 925, 772, -156, 31, -156,
        208, -156, 1222, -156, 238, -156, -156, -156, -156, 696,
        -156, 859, -156, -156, -44, -5, 193, -156, -156, 247,
        -156, -156, 784, 859, 248, 859, 859, 859, 859, 859,
        859, 859, 859, 859, 859, 859, 859, 859, 859, 859,
        859, 859, 859, 859, -156, 570, 196, 570, 859, 859,
        859, 212, 859, 203, -156, -156, -156, 104, 859, 859,
        859, 859, 859, 859, 859, 859, 859, 859, 859, 859,
        -156, -156, 502, -156, -156, -156, -156, 40, -156, 859,
        -156, -156, -156, -156, -156, 98, -156, 224, 230, -156,
        229, 208, 1187, 796, -156, -156, -156, 234, -156, 965,
        218, -156, 859, -156, -156, -1, -156, 221, -156, 45,
        1335, 1351, 1366, 1380, 1069, 974, 974, 309, 309, 309,
        309, 195, 195, 268, 268, -156, -156, -156, -156, 570,
        -156, 112, 119, 132, 236, 235, 233, -156, -156, -156,
        -156, -156, -156, -156, -156, -156, -156, -156, -156, -156,
        -156, -156, -156, -156, 200, -156, -156, -156, -156, -156,
        241, -156, 243, -156, -156, -156, 859, -156, 859, -156,
        570, 570, 570, 859, 859, -156, -156, -156, -156, -156,
        1318, 253, -156, -156, 176, 235, 239, 570, 240, 859,
        -156, -156, 235, 246, 570, -156};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
    {
        -156, -156, -156, -156, -59, -87, -41, 18, -100, -76,
        33, 23, -156, 254, -156, 232, 188, -156, -156, 137,
        -49, -58, -156, 84, -156, 261, 189, 179, 7, 13,
        -57, -156, 177, -156, 171, -84, -155, -150, -156, -36,
        -156, -156, -156, 304, -10, 209, -156, 308, -156, -156,
        -156};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -201
static const yytype_int16 yytable[] =
    {
        110, 90, 244, 251, 174, 159, 63, 165, 166, 167,
        168, 137, 138, 1, 40, 1, 2, 41, 112, 177,
        178, 68, 140, 25, 163, 217, 140, 43, 164, 2,
        258, 45, 74, 24, 229, 110, 110, 110, 110, 206,
        60, 84, 170, 172, 173, 76, 175, 110, 110, 52,
        53, 54, 67, 134, 2, 149, 110, 25, 77, 1,
        1, 1, 150, 2, 2, 236, 23, 24, 259, 174,
        156, 174, 242, 325, 112, 80, 48, 326, 42, 23,
        250, 89, 110, 267, 211, 269, 161, 140, 44, 110,
        86, 261, 46, 17, 18, 162, 140, 110, 81, 234,
        112, 153, 158, 82, 155, 251, 156, 112, 291, 292,
        293, 175, 295, 23, 155, 112, 156, 86, 148, 1,
        229, 141, 2, 229, 204, 230, 328, 110, 110, 110,
        110, 110, 110, 110, 110, 110, 110, 110, 110, 110,
        110, 110, 110, 110, 110, 270, 271, 272, 273, 274,
        275, 276, 277, 278, 279, 280, 281, 282, 283, 284,
        285, 286, 287, 313, 336, 60, 149, 86, 158, 288,
        153, 290, 23, 241, 237, 324, 314, 322, 89, 238,
        110, 75, 229, 315, 83, 89, 330, 298, 260, 38,
        229, 205, 207, 331, 110, 320, 234, 229, 112, 58,
        266, 59, 47, 110, 51, 136, 332, 208, 209, 94,
        229, 145, 112, 199, 200, 201, 202, 203, 95, 96,
        97, 210, 212, 98, 99, 100, 101, 66, 102, 103,
        70, 239, 70, 344, 345, 85, 299, 300, 301, 302,
        303, 304, 305, 306, 307, 308, 309, 310, 213, 352,
        348, 214, 144, 329, 229, 215, 70, 70, 70, 70,
        85, 256, 70, 70, 179, 180, 181, 262, 157, 110,
        263, 268, 260, 104, 69, 89, 69, 289, 294, 106,
        107, 252, 89, 253, 152, 335, 297, 340, 201, 202,
        203, 259, 70, 156, 341, 342, 343, 327, 316, 229,
        69, 69, 69, 69, 317, 318, 69, 69, 323, 333,
        182, 350, 183, 229, 184, 337, 334, 347, 355, 338,
        354, 312, 349, 351, 70, 197, 198, 199, 200, 201,
        202, 203, 153, 70, 47, 151, 69, 147, 243, 255,
        257, 64, 62, 232, 339, 0, 0, 0, 0, 0,
        94, 0, 0, 0, 0, 0, 0, 70, 0, 95,
        96, 97, 0, 0, 114, 99, 100, 101, 69, 102,
        103, 0, 0, 0, 0, 0, 0, 69, 0, 0,
        0, 3, 4, 5, 6, 7, 8, 9, 10, 11,
        12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
        22, 69, 115, 116, 117, 0, 118, 119, 120, 121,
        122, 123, 124, 125, 104, 0, 144, 0, 94, 0,
        106, 107, 0, 0, 126, 63, 127, 95, 96, 97,
        0, 0, 114, 99, 100, 101, 0, 102, 103, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 3,
        4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
        14, 15, 16, 17, 18, 19, 20, 21, 22, 0,
        115, 116, 117, 0, 118, 119, 120, 121, 122, 123,
        124, 125, 104, 0, 0, 0, 94, 0, 106, 107,
        0, 0, 126, 63, 231, 95, 96, 97, 0, 0,
        114, 99, 100, 101, 0, 102, 103, 0, 0, 0,
        0, 94, 0, 0, 0, 0, 0, 0, 0, 0,
        95, 96, 97, 0, 0, 114, 99, 100, 101, 0,
        102, 103, 0, 0, 0, 0, 0, 0, 115, 116,
        117, 0, 118, 119, 120, 121, 122, 123, 124, 125,
        104, 0, 0, 0, 0, 0, 106, 107, 0, 0,
        126, 63, 233, 115, 116, 117, 0, 118, 119, 120,
        121, 122, 123, 124, 125, 104, 0, 0, 0, 94,
        0, 106, 107, 0, 0, 126, 63, 311, 95, 96,
        97, 94, 0, 114, 99, 100, 101, 0, 102, 103,
        95, 96, 97, 94, 0, 98, 99, 100, 101, 0,
        102, 103, 95, 96, 97, 0, 0, 98, 99, 100,
        101, 0, 102, 103, 0, 0, 0, 0, 0, 0,
        0, 115, 116, 117, 0, 118, 119, 120, 121, 122,
        123, 124, 125, 104, 0, 61, 0, 0, 0, 106,
        107, 0, 0, 126, 63, 104, 0, 0, 0, 0,
        0, 106, 107, 0, 0, 1, 152, 104, 2, 0,
        0, 0, 0, 106, 107, 0, 0, 216, 0, 0,
        0, 0, 0, 0, 0, 3, 4, 5, 6, 7,
        8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
        18, 19, 20, 21, 22, 94, 0, 0, 0, 0,
        0, 0, 0, 0, 95, 96, 97, 0, 23, 98,
        99, 100, 101, 0, 102, 103, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 3, 0, 0, 0,
        0, 0, 9, 10, 11, 12, 13, 14, 15, 16,
        17, 18, 19, 20, 21, 22, 0, 0, 0, 0,
        0, 0, 0, 94, 0, 0, 0, 0, 0, 104,
        0, 0, 95, 96, 97, 106, 107, 98, 99, 100,
        101, 94, 102, 103, 0, 0, 0, 0, 0, 0,
        95, 96, 97, 94, 0, 98, 99, 100, 101, 0,
        102, 103, 95, 96, 97, 94, 0, 98, 99, 100,
        101, 0, 102, 103, 95, 96, 97, 0, 0, 98,
        99, 100, 101, 0, 102, 103, 0, 104, 0, 0,
        105, 0, 0, 106, 107, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 104, 0, 0, 249, 0,
        0, 106, 107, 0, 0, 0, 0, 104, 264, 0,
        0, 0, 0, 106, 107, 0, 0, 0, 94, 104,
        0, 0, 321, 0, 0, 106, 107, 95, 96, 97,
        94, 0, 98, 99, 100, 101, 0, 102, 103, 95,
        96, 97, 94, 0, 98, 99, 100, 101, 0, 102,
        103, 95, 96, 97, 0, 0, 98, 99, 100, 101,
        3, 102, 103, 0, 0, 0, 9, 10, 11, 12,
        13, 14, 15, 16, 17, 18, 19, 20, 21, 22,
        0, 0, 104, 0, 0, 0, 0, 0, 106, 107,
        0, 0, 0, 0, 169, 1, 0, 0, 2, 0,
        106, 107, 0, 0, 0, 139, 171, 0, 0, 0,
        0, 0, 106, 107, 0, 3, 4, 5, 6, 7,
        8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
        18, 19, 20, 21, 22, 1, 193, 194, 195, 196,
        197, 198, 199, 200, 201, 202, 203, 0, 155, 246,
        156, 0, 0, 0, 0, 3, 4, 5, 6, 7,
        8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
        18, 19, 20, 21, 22, 1, 0, 0, 2, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 259, 246,
        156, 0, 0, 0, 0, 3, 4, 5, 6, 7,
        8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
        18, 19, 20, 21, 22, 218, 219, 220, 221, 222,
        223, 224, 225, 226, 227, 87, 0, 0, 23, 191,
        192, 193, 194, 195, 196, 197, 198, 199, 200, 201,
        202, 203, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 22, 0, 0, 0, 0, 0, 228, 0, 0,
        0, 3, 0, 0, 0, 0, 88, 9, 10, 11,
        12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
        22, 3, 0, 0, 0, 0, 0, 9, 10, 11,
        12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
        22, 3, 0, 0, 0, 0, 146, 9, 10, 11,
        12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
        22, 0, 0, 0, 0, 185, 235, 186, 187, 188,
        189, 190, 191, 192, 193, 194, 195, 196, 197, 198,
        199, 200, 201, 202, 203, 0, 240, 3, 4, 5,
        6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
        16, 17, 18, 19, 20, 21, 22, 3, 4, 5,
        6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
        16, 17, 18, 19, 20, 21, 22, 0, 0, 83,
        0, -200, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 319, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 22, 254, 3, 4, 5, 6, 7, 8, 9,
        10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
        20, 21, 22, 3, 0, 0, 0, 0, 0, 9,
        10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
        20, 21, 22, 186, 187, 188, 189, 190, 191, 192,
        193, 194, 195, 196, 197, 198, 199, 200, 201, 202,
        203, 187, 188, 189, 190, 191, 192, 193, 194, 195,
        196, 197, 198, 199, 200, 201, 202, 203, 188, 189,
        190, 191, 192, 193, 194, 195, 196, 197, 198, 199,
        200, 201, 202, 203, 189, 190, 191, 192, 193, 194,
        195, 196, 197, 198, 199, 200, 201, 202, 203, 190,
        191, 192, 193, 194, 195, 196, 197, 198, 199, 200,
        201, 202, 203};

static const yytype_int16 yycheck[] =
    {
        59, 58, 152, 158, 104, 89, 84, 94, 95, 96,
        97, 69, 70, 20, 1, 20, 23, 23, 59, 106,
        107, 84, 71, 0, 74, 125, 75, 23, 78, 23,
        74, 23, 84, 0, 78, 94, 95, 96, 97, 115,
        33, 51, 101, 102, 103, 84, 104, 106, 107, 26,
        27, 28, 39, 63, 23, 78, 115, 34, 23, 20,
        20, 20, 85, 23, 23, 141, 73, 34, 73, 169,
        75, 171, 148, 74, 115, 74, 83, 78, 84, 73,
        156, 58, 141, 183, 120, 185, 74, 136, 84, 148,
        57, 175, 84, 54, 55, 78, 145, 156, 78, 135,
        141, 83, 89, 83, 73, 260, 75, 148, 208, 209,
        210, 169, 212, 73, 73, 156, 75, 84, 82, 20,
        78, 81, 23, 78, 76, 83, 81, 186, 187, 188,
        189, 190, 191, 192, 193, 194, 195, 196, 197, 198,
        199, 200, 201, 202, 203, 186, 187, 188, 189, 190,
        191, 192, 193, 194, 195, 196, 197, 198, 199, 200,
        201, 202, 203, 239, 314, 158, 78, 134, 155, 205,
        152, 207, 73, 85, 78, 262, 78, 253, 155, 83,
        239, 44, 78, 85, 82, 162, 74, 83, 175, 1,
        78, 81, 81, 74, 253, 252, 232, 78, 239, 73,
        182, 75, 23, 262, 25, 68, 74, 73, 73, 9,
        78, 74, 253, 18, 19, 20, 21, 22, 18, 19,
        20, 73, 73, 23, 24, 25, 26, 39, 28, 29,
        42, 81, 44, 333, 334, 56, 218, 219, 220, 221,
        222, 223, 224, 225, 226, 227, 228, 229, 23, 349,
        74, 83, 73, 289, 78, 83, 68, 69, 70, 71,
        81, 23, 74, 75, 27, 28, 29, 74, 89, 328,
        23, 23, 259, 73, 42, 252, 44, 81, 66, 79,
        80, 73, 259, 75, 84, 85, 83, 328, 20, 21,
        22, 73, 104, 75, 330, 331, 332, 76, 74, 78,
        68, 69, 70, 71, 74, 76, 74, 75, 74, 73,
        73, 347, 75, 78, 77, 74, 83, 64, 354, 76,
        74, 237, 83, 83, 136, 16, 17, 18, 19, 20,
        21, 22, 314, 145, 155, 81, 104, 76, 149, 162,
        169, 37, 34, 134, 326, -1, -1, -1, -1, -1,
        9, -1, -1, -1, -1, -1, -1, 169, -1, 18,
        19, 20, -1, -1, 23, 24, 25, 26, 136, 28,
        29, -1, -1, -1, -1, -1, -1, 145, -1, -1,
        -1, 40, 41, 42, 43, 44, 45, 46, 47, 48,
        49, 50, 51, 52, 53, 54, 55, 56, 57, 58,
        59, 169, 61, 62, 63, -1, 65, 66, 67, 68,
        69, 70, 71, 72, 73, -1, 237, -1, 9, -1,
        79, 80, -1, -1, 83, 84, 85, 18, 19, 20,
        -1, -1, 23, 24, 25, 26, -1, 28, 29, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, 40,
        41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
        51, 52, 53, 54, 55, 56, 57, 58, 59, -1,
        61, 62, 63, -1, 65, 66, 67, 68, 69, 70,
        71, 72, 73, -1, -1, -1, 9, -1, 79, 80,
        -1, -1, 83, 84, 85, 18, 19, 20, -1, -1,
        23, 24, 25, 26, -1, 28, 29, -1, -1, -1,
        -1, 9, -1, -1, -1, -1, -1, -1, -1, -1,
        18, 19, 20, -1, -1, 23, 24, 25, 26, -1,
        28, 29, -1, -1, -1, -1, -1, -1, 61, 62,
        63, -1, 65, 66, 67, 68, 69, 70, 71, 72,
        73, -1, -1, -1, -1, -1, 79, 80, -1, -1,
        83, 84, 85, 61, 62, 63, -1, 65, 66, 67,
        68, 69, 70, 71, 72, 73, -1, -1, -1, 9,
        -1, 79, 80, -1, -1, 83, 84, 85, 18, 19,
        20, 9, -1, 23, 24, 25, 26, -1, 28, 29,
        18, 19, 20, 9, -1, 23, 24, 25, 26, -1,
        28, 29, 18, 19, 20, -1, -1, 23, 24, 25,
        26, -1, 28, 29, -1, -1, -1, -1, -1, -1,
        -1, 61, 62, 63, -1, 65, 66, 67, 68, 69,
        70, 71, 72, 73, -1, 0, -1, -1, -1, 79,
        80, -1, -1, 83, 84, 73, -1, -1, -1, -1,
        -1, 79, 80, -1, -1, 20, 84, 73, 23, -1,
        -1, -1, -1, 79, 80, -1, -1, 83, -1, -1,
        -1, -1, -1, -1, -1, 40, 41, 42, 43, 44,
        45, 46, 47, 48, 49, 50, 51, 52, 53, 54,
        55, 56, 57, 58, 59, 9, -1, -1, -1, -1,
        -1, -1, -1, -1, 18, 19, 20, -1, 73, 23,
        24, 25, 26, -1, 28, 29, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, 40, -1, -1, -1,
        -1, -1, 46, 47, 48, 49, 50, 51, 52, 53,
        54, 55, 56, 57, 58, 59, -1, -1, -1, -1,
        -1, -1, -1, 9, -1, -1, -1, -1, -1, 73,
        -1, -1, 18, 19, 20, 79, 80, 23, 24, 25,
        26, 9, 28, 29, -1, -1, -1, -1, -1, -1,
        18, 19, 20, 9, -1, 23, 24, 25, 26, -1,
        28, 29, 18, 19, 20, 9, -1, 23, 24, 25,
        26, -1, 28, 29, 18, 19, 20, -1, -1, 23,
        24, 25, 26, -1, 28, 29, -1, 73, -1, -1,
        76, -1, -1, 79, 80, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, 73, -1, -1, 76, -1,
        -1, 79, 80, -1, -1, -1, -1, 73, 74, -1,
        -1, -1, -1, 79, 80, -1, -1, -1, 9, 73,
        -1, -1, 76, -1, -1, 79, 80, 18, 19, 20,
        9, -1, 23, 24, 25, 26, -1, 28, 29, 18,
        19, 20, 9, -1, 23, 24, 25, 26, -1, 28,
        29, 18, 19, 20, -1, -1, 23, 24, 25, 26,
        40, 28, 29, -1, -1, -1, 46, 47, 48, 49,
        50, 51, 52, 53, 54, 55, 56, 57, 58, 59,
        -1, -1, 73, -1, -1, -1, -1, -1, 79, 80,
        -1, -1, -1, -1, 73, 20, -1, -1, 23, -1,
        79, 80, -1, -1, -1, 85, 73, -1, -1, -1,
        -1, -1, 79, 80, -1, 40, 41, 42, 43, 44,
        45, 46, 47, 48, 49, 50, 51, 52, 53, 54,
        55, 56, 57, 58, 59, 20, 12, 13, 14, 15,
        16, 17, 18, 19, 20, 21, 22, -1, 73, 74,
        75, -1, -1, -1, -1, 40, 41, 42, 43, 44,
        45, 46, 47, 48, 49, 50, 51, 52, 53, 54,
        55, 56, 57, 58, 59, 20, -1, -1, 23, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, 73, 74,
        75, -1, -1, -1, -1, 40, 41, 42, 43, 44,
        45, 46, 47, 48, 49, 50, 51, 52, 53, 54,
        55, 56, 57, 58, 59, 30, 31, 32, 33, 34,
        35, 36, 37, 38, 39, 23, -1, -1, 73, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 22, 40, 41, 42, 43, 44, 45, 46, 47,
        48, 49, 50, 51, 52, 53, 54, 55, 56, 57,
        58, 59, -1, -1, -1, -1, -1, 82, -1, -1,
        -1, 40, -1, -1, -1, -1, 74, 46, 47, 48,
        49, 50, 51, 52, 53, 54, 55, 56, 57, 58,
        59, 40, -1, -1, -1, -1, -1, 46, 47, 48,
        49, 50, 51, 52, 53, 54, 55, 56, 57, 58,
        59, 40, -1, -1, -1, -1, 85, 46, 47, 48,
        49, 50, 51, 52, 53, 54, 55, 56, 57, 58,
        59, -1, -1, -1, -1, 3, 85, 5, 6, 7,
        8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
        18, 19, 20, 21, 22, -1, 85, 40, 41, 42,
        43, 44, 45, 46, 47, 48, 49, 50, 51, 52,
        53, 54, 55, 56, 57, 58, 59, 40, 41, 42,
        43, 44, 45, 46, 47, 48, 49, 50, 51, 52,
        53, 54, 55, 56, 57, 58, 59, -1, -1, 82,
        -1, 84, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, 74, 40, 41, 42, 43, 44, 45, 46, 47,
        48, 49, 50, 51, 52, 53, 54, 55, 56, 57,
        58, 59, 60, 40, 41, 42, 43, 44, 45, 46,
        47, 48, 49, 50, 51, 52, 53, 54, 55, 56,
        57, 58, 59, 40, -1, -1, -1, -1, -1, 46,
        47, 48, 49, 50, 51, 52, 53, 54, 55, 56,
        57, 58, 59, 5, 6, 7, 8, 9, 10, 11,
        12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
        22, 6, 7, 8, 9, 10, 11, 12, 13, 14,
        15, 16, 17, 18, 19, 20, 21, 22, 7, 8,
        9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
        19, 20, 21, 22, 8, 9, 10, 11, 12, 13,
        14, 15, 16, 17, 18, 19, 20, 21, 22, 9,
        10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
        20, 21, 22};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
    {
        0, 20, 23, 40, 41, 42, 43, 44, 45, 46,
        47, 48, 49, 50, 51, 52, 53, 54, 55, 56,
        57, 58, 59, 73, 96, 97, 100, 101, 102, 104,
        110, 113, 114, 115, 132, 133, 134, 135, 102, 103,
        115, 23, 84, 23, 84, 23, 84, 113, 83, 98,
        99, 113, 97, 97, 97, 96, 97, 130, 73, 75,
        114, 0, 133, 84, 129, 136, 102, 115, 84, 101,
        102, 105, 106, 107, 84, 105, 84, 23, 111, 112,
        74, 78, 83, 82, 130, 113, 96, 23, 74, 97,
        116, 117, 118, 119, 9, 18, 19, 20, 23, 24,
        25, 26, 28, 29, 73, 76, 79, 80, 87, 88,
        90, 91, 92, 95, 23, 61, 62, 63, 65, 66,
        67, 68, 69, 70, 71, 72, 83, 85, 90, 92,
        93, 94, 125, 129, 130, 131, 105, 107, 107, 85,
        106, 81, 108, 109, 113, 105, 85, 111, 82, 78,
        85, 99, 84, 93, 123, 73, 75, 113, 115, 121,
        122, 74, 78, 74, 78, 91, 91, 91, 91, 73,
        90, 73, 90, 90, 94, 107, 120, 91, 91, 27,
        28, 29, 73, 75, 77, 3, 5, 6, 7, 8,
        9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
        19, 20, 21, 22, 76, 81, 95, 81, 73, 73,
        73, 125, 73, 23, 83, 83, 83, 94, 30, 31,
        32, 33, 34, 35, 36, 37, 38, 39, 82, 78,
        83, 85, 131, 85, 125, 85, 95, 78, 83, 81,
        85, 85, 95, 112, 123, 124, 74, 116, 121, 76,
        95, 122, 73, 75, 60, 118, 23, 120, 74, 73,
        115, 121, 74, 23, 74, 89, 93, 94, 23, 94,
        92, 92, 92, 92, 92, 92, 92, 92, 92, 92,
        92, 92, 92, 92, 92, 92, 92, 92, 125, 81,
        125, 94, 94, 94, 66, 94, 126, 83, 83, 93,
        93, 93, 93, 93, 93, 93, 93, 93, 93, 93,
        93, 85, 109, 95, 78, 85, 74, 74, 76, 74,
        116, 76, 95, 74, 91, 74, 78, 76, 81, 125,
        74, 74, 74, 73, 83, 85, 123, 74, 76, 93,
        92, 125, 125, 125, 94, 94, 127, 64, 74, 83,
        125, 83, 94, 128, 74, 125};

#define yyerrok (yyerrstatus = 0)
#define yyclearin (yychar = YYEMPTY)
#define YYEMPTY (-2)
#define YYEOF 0

#define YYACCEPT goto yyacceptlab
#define YYABORT goto yyabortlab
#define YYERROR goto yyerrorlab

/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL goto yyerrlab

#define YYRECOVERING() (!!yyerrstatus)

#define YYBACKUP(Token, Value)                            \
    do                                                    \
        if (yychar == YYEMPTY && yylen == 1)              \
        {                                                 \
            yychar = (Token);                             \
            yylval = (Value);                             \
            yytoken = YYTRANSLATE(yychar);                \
            YYPOPSTACK(1);                                \
            goto yybackup;                                \
        }                                                 \
        else                                              \
        {                                                 \
            yyerror(YY_("syntax error: cannot back up")); \
            YYERROR;                                      \
        }                                                 \
    while (YYID(0))

#define YYTERROR 1
#define YYERRCODE 256

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
#define YYLLOC_DEFAULT(Current, Rhs, N)                             \
    do                                                              \
        if (YYID(N))                                                \
        {                                                           \
            (Current).first_line = YYRHSLOC(Rhs, 1).first_line;     \
            (Current).first_column = YYRHSLOC(Rhs, 1).first_column; \
            (Current).last_line = YYRHSLOC(Rhs, N).last_line;       \
            (Current).last_column = YYRHSLOC(Rhs, N).last_column;   \
        }                                                           \
        else                                                        \
        {                                                           \
            (Current).first_line = (Current).last_line =            \
                YYRHSLOC(Rhs, 0).last_line;                         \
            (Current).first_column = (Current).last_column =        \
                YYRHSLOC(Rhs, 0).last_column;                       \
        }                                                           \
    while (YYID(0))
#endif

/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
#if YYLTYPE_IS_TRIVIAL
#define YY_LOCATION_PRINT(File, Loc)              \
    fprintf(File, "%d.%d-%d.%d",                  \
            (Loc).first_line, (Loc).first_column, \
            (Loc).last_line, (Loc).last_column)
#else
#define YY_LOCATION_PRINT(File, Loc) ((void)0)
#endif
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
#define YYLEX yylex(YYLEX_PARAM)
#else
#define YYLEX yylex()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

#ifndef YYFPRINTF
#include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#define YYFPRINTF fprintf
#endif

#define YYDPRINTF(Args)     \
    do                      \
    {                       \
        if (yydebug)        \
            YYFPRINTF Args; \
    } while (YYID(0))

#define YY_SYMBOL_PRINT(Title, Type, Value, Location) \
    do                                                \
    {                                                 \
        if (yydebug)                                  \
        {                                             \
            YYFPRINTF(stderr, "%s ", Title);          \
            yy_symbol_print(stderr,                   \
                            Type, Value);             \
            YYFPRINTF(stderr, "\n");                  \
        }                                             \
    } while (YYID(0))

/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print(FILE *yyoutput, int yytype, YYSTYPE const *const yyvaluep)
#else
static void
    yy_symbol_value_print(yyoutput, yytype, yyvaluep)
        FILE *yyoutput;
int yytype;
YYSTYPE const *const yyvaluep;
#endif
{
    if (!yyvaluep)
        return;
#ifdef YYPRINT
    if (yytype < YYNTOKENS)
        YYPRINT(yyoutput, yytoknum[yytype], *yyvaluep);
#else
    YYUSE(yyoutput);
#endif
    switch (yytype)
    {
    default:
        break;
    }
}

/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print(FILE *yyoutput, int yytype, YYSTYPE const *const yyvaluep)
#else
static void
    yy_symbol_print(yyoutput, yytype, yyvaluep)
        FILE *yyoutput;
int yytype;
YYSTYPE const *const yyvaluep;
#endif
{
    if (yytype < YYNTOKENS)
        YYFPRINTF(yyoutput, "token %s (", yytname[yytype]);
    else
        YYFPRINTF(yyoutput, "nterm %s (", yytname[yytype]);

    yy_symbol_value_print(yyoutput, yytype, yyvaluep);
    YYFPRINTF(yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print(yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
    yy_stack_print(yybottom, yytop)
        yytype_int16 *yybottom;
yytype_int16 *yytop;
#endif
{
    YYFPRINTF(stderr, "Stack now");
    for (; yybottom <= yytop; yybottom++)
    {
        int yybot = *yybottom;
        YYFPRINTF(stderr, " %d", yybot);
    }
    YYFPRINTF(stderr, "\n");
}

#define YY_STACK_PRINT(Bottom, Top)          \
    do                                       \
    {                                        \
        if (yydebug)                         \
            yy_stack_print((Bottom), (Top)); \
    } while (YYID(0))

/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print(YYSTYPE *yyvsp, int yyrule)
#else
static void
    yy_reduce_print(yyvsp, yyrule)
        YYSTYPE *yyvsp;
int yyrule;
#endif
{
    int yynrhs = yyr2[yyrule];
    int yyi;
    unsigned long int yylno = yyrline[yyrule];
    YYFPRINTF(stderr, "Reducing stack by rule %d (line %lu):\n",
              yyrule - 1, yylno);
    /* The symbols being reduced.  */
    for (yyi = 0; yyi < yynrhs; yyi++)
    {
        YYFPRINTF(stderr, "   $%d = ", yyi + 1);
        yy_symbol_print(stderr, yyrhs[yyprhs[yyrule] + yyi],
                        &(yyvsp[(yyi + 1) - (yynrhs)]));
        YYFPRINTF(stderr, "\n");
    }
}

#define YY_REDUCE_PRINT(Rule)             \
    do                                    \
    {                                     \
        if (yydebug)                      \
            yy_reduce_print(yyvsp, Rule); \
    } while (YYID(0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
#define YYDPRINTF(Args)
#define YY_SYMBOL_PRINT(Title, Type, Value, Location)
#define YY_STACK_PRINT(Bottom, Top)
#define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
#define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

#if YYERROR_VERBOSE

#ifndef yystrlen
#if defined __GLIBC__ && defined _STRING_H
#define yystrlen strlen
#else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen(const char *yystr)
#else
static YYSIZE_T
    yystrlen(yystr)
        const char *yystr;
#endif
{
    YYSIZE_T yylen;
    for (yylen = 0; yystr[yylen]; yylen++)
        continue;
    return yylen;
}
#endif
#endif

#ifndef yystpcpy
#if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#define yystpcpy stpcpy
#else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy(char *yydest, const char *yysrc)
#else
static char *
    yystpcpy(yydest, yysrc) char *yydest;
const char *yysrc;
#endif
{
    char *yyd = yydest;
    const char *yys = yysrc;

    while ((*yyd++ = *yys++) != '\0')
        continue;

    return yyd - 1;
}
#endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr(char *yyres, const char *yystr)
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
    do_not_strip_quotes:;
    }

    if (!yyres)
        return yystrlen(yystr);

    return yystpcpy(yyres, yystr) - yyres;
}
#endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error(char *yyresult, int yystate, int yychar)
{
    int yyn = yypact[yystate];

    if (!(YYPACT_NINF < yyn && yyn <= YYLAST))
        return 0;
    else
    {
        int yytype = YYTRANSLATE(yychar);
        YYSIZE_T yysize0 = yytnamerr(0, yytname[yytype]);
        YYSIZE_T yysize = yysize0;
        YYSIZE_T yysize1;
        int yysize_overflow = 0;
        enum
        {
            YYERROR_VERBOSE_ARGS_MAXIMUM = 5
        };
        char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
        int yyx;

#if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
        char *yyfmt;
        char const *yyf;
        static char const yyunexpected[] = "syntax error, unexpected %s";
        static char const yyexpecting[] = ", expecting %s";
        static char const yyor[] = " or %s";
        char yyformat[sizeof yyunexpected + sizeof yyexpecting - 1 + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2) * (sizeof yyor - 1))];
        char const *yyprefix = yyexpecting;

        /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
        int yyxbegin = yyn < 0 ? -yyn : 0;

        /* Stay within bounds of both yycheck and yytname.  */
        int yychecklim = YYLAST - yyn + 1;
        int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        int yycount = 1;

        yyarg[0] = yytname[yytype];
        yyfmt = yystpcpy(yyformat, yyunexpected);

        for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
            {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                {
                    yycount = 1;
                    yysize = yysize0;
                    yyformat[sizeof yyunexpected - 1] = '\0';
                    break;
                }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr(0, yytname[yyx]);
                yysize_overflow |= (yysize1 < yysize);
                yysize = yysize1;
                yyfmt = yystpcpy(yyfmt, yyprefix);
                yyprefix = yyor;
            }

        yyf = YY_(yyformat);
        yysize1 = yysize + yystrlen(yyf);
        yysize_overflow |= (yysize1 < yysize);
        yysize = yysize1;

        if (yysize_overflow)
            return YYSIZE_MAXIMUM;

        if (yyresult)
        {
            /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
            char *yyp = yyresult;
            int yyi = 0;
            while ((*yyp = *yyf) != '\0')
            {
                if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
                {
                    yyp += yytnamerr(yyp, yyarg[yyi++]);
                    yyf += 2;
                }
                else
                {
                    yyp++;
                    yyf++;
                }
            }
        }
        return yysize;
    }
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ || defined __cplusplus || defined _MSC_VER)
static void
yydestruct(const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
    yydestruct(yymsg, yytype, yyvaluep)
        const char *yymsg;
int yytype;
YYSTYPE *yyvaluep;
#endif
{
    YYUSE(yyvaluep);

    if (!yymsg)
        yymsg = "Deleting";
    YY_SYMBOL_PRINT(yymsg, yytype, yyvaluep, yylocationp);

    switch (yytype)
    {

    default:
        break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
// #ifdef YYPARSE_PARAM
// #if defined __STDC__ || defined __cplusplus
// int yyparse (void *YYPARSE_PARAM);
// #else
// int yyparse ();
// #endif
// #else /* ! YYPARSE_PARAM */
// #if defined __STDC__ || defined __cplusplus
// int yyparse (void);
// #else
// int yyparse ();
// #endif
// #endif /* ! YYPARSE_PARAM */
int yyparse(void)
