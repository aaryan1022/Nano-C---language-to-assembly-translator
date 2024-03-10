/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "29_A4.y"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "29_A4.h"

quad *qArray[NSYMS]; 
int quadPtr = 0;    

extern int yylex();
extern char* yytext;
extern symboltable *symlook(char *s);
void yyerror(char *s);
void printrule(char *s);

#line 87 "29_A4.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "29_A4.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_KEYWRD_VOID = 3,                /* KEYWRD_VOID  */
  YYSYMBOL_KEYWRD_INT = 4,                 /* KEYWRD_INT  */
  YYSYMBOL_KEYWRD_CHAR = 5,                /* KEYWRD_CHAR  */
  YYSYMBOL_KEYWRD_IF = 6,                  /* KEYWRD_IF  */
  YYSYMBOL_KEYWRD_ELSE = 7,                /* KEYWRD_ELSE  */
  YYSYMBOL_KEYWRD_FOR = 8,                 /* KEYWRD_FOR  */
  YYSYMBOL_KEYWRD_RETURN = 9,              /* KEYWRD_RETURN  */
  YYSYMBOL_INT_CONST = 10,                 /* INT_CONST  */
  YYSYMBOL_STRING_LITERAL = 11,            /* STRING_LITERAL  */
  YYSYMBOL_CHAR_CONST = 12,                /* CHAR_CONST  */
  YYSYMBOL_ID = 13,                        /* ID  */
  YYSYMBOL_LT_EQUAL = 14,                  /* LT_EQUAL  */
  YYSYMBOL_GT_EQUAL = 15,                  /* GT_EQUAL  */
  YYSYMBOL_EQUAL = 16,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 17,                 /* NOT_EQUAL  */
  YYSYMBOL_LOGIC_AND = 18,                 /* LOGIC_AND  */
  YYSYMBOL_LOGIC_OR = 19,                  /* LOGIC_OR  */
  YYSYMBOL_ARW_PTR = 20,                   /* ARW_PTR  */
  YYSYMBOL_21_ = 21,                       /* '('  */
  YYSYMBOL_22_ = 22,                       /* ')'  */
  YYSYMBOL_23_ = 23,                       /* '['  */
  YYSYMBOL_24_ = 24,                       /* ']'  */
  YYSYMBOL_25_ = 25,                       /* ','  */
  YYSYMBOL_26_ = 26,                       /* '&'  */
  YYSYMBOL_27_ = 27,                       /* '*'  */
  YYSYMBOL_28_ = 28,                       /* '+'  */
  YYSYMBOL_29_ = 29,                       /* '-'  */
  YYSYMBOL_30_ = 30,                       /* '!'  */
  YYSYMBOL_31_ = 31,                       /* '/'  */
  YYSYMBOL_32_ = 32,                       /* '%'  */
  YYSYMBOL_33_ = 33,                       /* '<'  */
  YYSYMBOL_34_ = 34,                       /* '>'  */
  YYSYMBOL_35_ = 35,                       /* '?'  */
  YYSYMBOL_36_ = 36,                       /* ':'  */
  YYSYMBOL_37_ = 37,                       /* '='  */
  YYSYMBOL_38_ = 38,                       /* ';'  */
  YYSYMBOL_39_ = 39,                       /* '{'  */
  YYSYMBOL_40_ = 40,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_primary_expression = 42,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 43,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list_opt = 44, /* argument_expression_list_opt  */
  YYSYMBOL_argument_expression_list = 45,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 46,          /* unary_expression  */
  YYSYMBOL_multiplicative_expression = 47, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 48,       /* additive_expression  */
  YYSYMBOL_relational_expression = 49,     /* relational_expression  */
  YYSYMBOL_equality_expression = 50,       /* equality_expression  */
  YYSYMBOL_logical_AND_expression = 51,    /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 52,     /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 53,    /* conditional_expression  */
  YYSYMBOL_assignment_expression = 54,     /* assignment_expression  */
  YYSYMBOL_expression = 55,                /* expression  */
  YYSYMBOL_declaration = 56,               /* declaration  */
  YYSYMBOL_init_declarator = 57,           /* init_declarator  */
  YYSYMBOL_type_specifier = 58,            /* type_specifier  */
  YYSYMBOL_declarator = 59,                /* declarator  */
  YYSYMBOL_direct_declarator = 60,         /* direct_declarator  */
  YYSYMBOL_parameter_list_opt = 61,        /* parameter_list_opt  */
  YYSYMBOL_pointer = 62,                   /* pointer  */
  YYSYMBOL_parameter_list = 63,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 64,     /* parameter_declaration  */
  YYSYMBOL_identifier_opt = 65,            /* identifier_opt  */
  YYSYMBOL_pointer_opt = 66,               /* pointer_opt  */
  YYSYMBOL_initializer = 67,               /* initializer  */
  YYSYMBOL_statement = 68,                 /* statement  */
  YYSYMBOL_compound_statement = 69,        /* compound_statement  */
  YYSYMBOL_block_item_list_opt = 70,       /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 71,           /* block_item_list  */
  YYSYMBOL_block_item = 72,                /* block_item  */
  YYSYMBOL_expression_statement = 73,      /* expression_statement  */
  YYSYMBOL_expression_opt = 74,            /* expression_opt  */
  YYSYMBOL_selection_statement = 75,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 76,       /* iteration_statement  */
  YYSYMBOL_jump_statement = 77,            /* jump_statement  */
  YYSYMBOL_translation_unit = 78,          /* translation_unit  */
  YYSYMBOL_external_declaration = 79,      /* external_declaration  */
  YYSYMBOL_function_definition = 80        /* function_definition  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   169

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  147

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   275


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    30,     2,     2,     2,    32,    26,     2,
      21,    22,    27,    28,    25,    29,     2,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    36,    38,
      33,    37,    34,    35,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    23,     2,    24,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,     2,    40,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    59,    59,    64,    74,    84,    91,    97,   101,   104,
     105,   108,   109,   112,   113,   116,   120,   123,   127,   131,
     135,   148,   149,   155,   161,   169,   170,   176,   183,   184,
     185,   186,   187,   190,   191,   192,   195,   196,   200,   201,
     205,   207,   210,   216,   219,   227,   234,   235,   251,   255,
     259,   264,   270,   275,   278,   285,   286,   289,   293,   294,
     297,   300,   301,   305,   306,   309,   316,   317,   318,   319,
     320,   323,   326,   327,   330,   331,   334,   335,   338,   341,
     342,   345,   346,   349,   352,   358,   359,   362,   363,   366
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "KEYWRD_VOID",
  "KEYWRD_INT", "KEYWRD_CHAR", "KEYWRD_IF", "KEYWRD_ELSE", "KEYWRD_FOR",
  "KEYWRD_RETURN", "INT_CONST", "STRING_LITERAL", "CHAR_CONST", "ID",
  "LT_EQUAL", "GT_EQUAL", "EQUAL", "NOT_EQUAL", "LOGIC_AND", "LOGIC_OR",
  "ARW_PTR", "'('", "')'", "'['", "']'", "','", "'&'", "'*'", "'+'", "'-'",
  "'!'", "'/'", "'%'", "'<'", "'>'", "'?'", "':'", "'='", "';'", "'{'",
  "'}'", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_AND_expression",
  "logical_OR_expression", "conditional_expression",
  "assignment_expression", "expression", "declaration", "init_declarator",
  "type_specifier", "declarator", "direct_declarator",
  "parameter_list_opt", "pointer", "parameter_list",
  "parameter_declaration", "identifier_opt", "pointer_opt", "initializer",
  "statement", "compound_statement", "block_item_list_opt",
  "block_item_list", "block_item", "expression_statement",
  "expression_opt", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-94)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-81)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      46,   -94,   -94,   -94,   -94,   -24,    27,   -94,   -94,   -94,
       6,    17,   -94,    16,   -94,   -94,   -94,     7,    96,   -94,
      53,   -94,   -94,   -94,   -94,   -94,     7,     7,     7,     7,
       7,     7,   -94,    52,     4,    15,    -7,    -9,    61,    39,
     -12,   -94,   -94,   -94,    62,    63,     7,   -94,   -94,   -94,
     -24,   -94,   -94,    45,    96,   -94,   -94,    51,   -94,   -94,
     -94,    46,    80,    69,   -94,   -94,   -94,   -94,   -94,    79,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,    55,
      57,   -94,   -94,   -94,   -24,    73,    71,   -94,    74,   -94,
     -94,    81,    86,   -94,    89,   -94,   -94,   -94,   -94,   -94,
      15,    15,    -7,    -7,    -7,    -7,    -9,    -9,    61,    39,
      78,    93,    82,   -94,   105,   -94,    46,   -94,   -94,     7,
     -94,     7,   130,     7,   -94,   -94,   -94,   -94,   -94,   112,
      83,   130,     7,   -94,   106,   130,   -94
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    48,    50,    49,    87,    64,     0,    85,    88,    57,
       0,    46,    63,     0,     1,    86,    45,     0,    73,    89,
      52,    51,     4,     5,     3,     2,     0,     0,     0,     0,
       0,     0,     7,    15,    21,    25,    28,    33,    36,    38,
      41,    43,    65,    47,     0,     0,    80,    44,    79,    76,
      64,    77,    66,     0,    72,    74,    67,     0,    68,    69,
      70,    56,     0,     0,    16,    17,    18,    19,    20,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
      46,    71,    75,    78,    64,     0,    55,    58,     0,     6,
      10,     0,    12,    13,     0,    42,    22,    23,    24,    21,
      26,    27,    31,    32,    29,    30,    34,    35,    37,    39,
       0,     0,     0,    84,    62,    54,     0,    53,     9,     0,
       8,     0,    80,    80,    61,    60,    59,    14,    40,    81,
       0,    80,    80,    82,     0,    80,    83
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -94,   -94,   -94,   -94,   -94,   -15,     3,   -70,    -1,    43,
      44,   -94,     1,   -17,     0,   -14,   -94,   -16,    87,   -94,
     -94,   -94,   -94,     5,   -94,    36,   -94,   -93,   122,   -94,
     -94,    90,   -94,   -45,   -94,   -94,   -94,   -94,   139,   -94
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    32,    33,   101,   102,    34,    35,    36,    37,    38,
      39,    40,    41,    47,    48,     4,    10,     5,    11,    21,
      95,    12,    96,    97,   135,    13,    43,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,     6,     7,     8
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,    89,    50,     9,    49,    78,    79,    85,   112,   113,
     114,   115,    64,    65,    66,    67,    68,    22,    23,    24,
      25,    76,    77,    86,    80,    81,    63,    14,    26,    20,
       1,     2,     3,    27,    28,    29,    30,    31,    50,   139,
      49,    72,    73,   122,    16,    94,    74,    75,   143,     1,
       2,     3,   146,   103,    17,   105,    18,    84,   106,   107,
     108,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   104,    69,    70,    61,    71,    62,    82,    83,   110,
     111,   116,   117,    87,    88,    91,   120,   121,   140,    93,
      98,    99,   100,   123,    17,   125,   126,   144,   127,     1,
       2,     3,    44,   128,    45,    46,    22,    23,    24,    25,
      94,   129,   137,   130,   131,   132,   109,    26,   134,   141,
     133,   142,    27,    28,    29,    30,    31,   118,   145,   119,
     124,   136,   138,    19,   -80,    18,    44,    90,    45,    46,
      22,    23,    24,    25,    92,    15,     0,     0,     0,     0,
       0,    26,     0,     0,     0,     0,    27,    28,    29,    30,
      31,     0,     0,     0,     0,     0,     0,     0,     0,    18
};

static const yytype_int16 yycheck[] =
{
      17,    46,    18,    27,    18,    14,    15,    19,    78,    79,
      80,    81,    27,    28,    29,    30,    31,    10,    11,    12,
      13,    28,    29,    35,    33,    34,    26,     0,    21,    13,
       3,     4,     5,    26,    27,    28,    29,    30,    54,   132,
      54,    37,    27,    88,    38,    61,    31,    32,   141,     3,
       4,     5,   145,    70,    37,    72,    39,    18,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    71,    20,    21,    21,    23,    23,    16,    17,    76,
      77,    82,    83,    21,    21,    40,    86,    87,   133,    38,
      10,    22,    13,    38,    37,    22,    25,   142,    24,     3,
       4,     5,     6,    22,     8,     9,    10,    11,    12,    13,
     126,    25,   129,    24,    36,    22,   131,    21,    13,     7,
      38,    38,    26,    27,    28,    29,    30,    84,    22,    85,
      94,   126,   131,    11,    38,    39,     6,    50,     8,     9,
      10,    11,    12,    13,    54,     6,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,    56,    58,    78,    79,    80,    27,
      57,    59,    62,    66,     0,    79,    38,    37,    39,    69,
      13,    60,    10,    11,    12,    13,    21,    26,    27,    28,
      29,    30,    42,    43,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    67,     6,     8,     9,    54,    55,    56,
      58,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    21,    23,    55,    46,    46,    46,    46,    46,    20,
      21,    23,    37,    27,    31,    32,    28,    29,    14,    15,
      33,    34,    16,    17,    18,    19,    35,    21,    21,    74,
      59,    40,    72,    38,    58,    61,    63,    64,    10,    22,
      13,    44,    45,    54,    55,    54,    46,    46,    46,    46,
      47,    47,    48,    48,    48,    48,    49,    49,    50,    51,
      55,    55,    74,    38,    66,    22,    25,    24,    22,    25,
      24,    36,    22,    38,    13,    65,    64,    54,    53,    68,
      74,     7,    38,    68,    74,    22,    68
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    42,    42,    42,    42,    43,    43,    43,
      43,    44,    44,    45,    45,    46,    46,    46,    46,    46,
      46,    47,    47,    47,    47,    48,    48,    48,    49,    49,
      49,    49,    49,    50,    50,    50,    51,    51,    52,    52,
      53,    53,    54,    54,    55,    56,    57,    57,    58,    58,
      58,    59,    60,    60,    60,    61,    61,    62,    63,    63,
      64,    65,    65,    66,    66,    67,    68,    68,    68,    68,
      68,    69,    70,    70,    71,    71,    72,    72,    73,    74,
      74,    75,    75,    76,    77,    78,    78,    79,    79,    80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     4,
       3,     0,     1,     1,     3,     1,     2,     2,     2,     2,
       2,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       5,     1,     3,     1,     1,     3,     1,     3,     1,     1,
       1,     2,     1,     4,     4,     1,     0,     1,     1,     3,
       3,     1,     0,     1,     0,     1,     1,     1,     1,     1,
       1,     3,     1,     0,     1,     2,     1,     1,     2,     1,
       0,     5,     7,     9,     3,     1,     2,     1,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* primary_expression: ID  */
#line 60 "29_A4.y"
          {
          printf("\n primary-expression: \n %s \n", (yyvsp[0].str)); 
          (yyval.symp) = symlook((yyvsp[0].str));
          }
#line 1267 "29_A4.tab.c"
    break;

  case 3: /* primary_expression: CHAR_CONST  */
#line 64 "29_A4.y"
                 {
        printf("primary-expression: character_constant\n");
        (yyval.symp) = gentemp();
        (yyval.symp)->initial_value.c = (yyvsp[0].c);
        (yyval.symp)->type = strdup("temp");
        char tempStr[2];    
        tempStr[0] = (yyvsp[0].c);    
        tempStr[1] = '\0';   
        qArray[quadPtr++] = new_quad_unary(COPY, (yyval.symp)->name, tempStr); 
      }
#line 1282 "29_A4.tab.c"
    break;

  case 4: /* primary_expression: INT_CONST  */
#line 74 "29_A4.y"
                {
        printf("+++++++++++++++++++%d++++++++++++++++++++++\n", (yyvsp[0].n));
        printf("primary-expression: integer_constant\n");
        (yyval.symp) = gentemp();
        (yyval.symp)->initial_value.n = (yyvsp[0].n);
        (yyval.symp)->type = strdup("temp");
        char tempStr[10]; 
        sprintf(tempStr, "%d", (yyvsp[0].n));
        qArray[quadPtr++] = new_quad_unary(COPY, (yyval.symp)->name, tempStr); 
        }
#line 1297 "29_A4.tab.c"
    break;

  case 5: /* primary_expression: STRING_LITERAL  */
#line 84 "29_A4.y"
                     {
        printf("primary-expression: string_literal\n");
        (yyval.symp) = gentemp();
        (yyval.symp)->initial_value.str = (yyvsp[0].str);
        (yyval.symp)->type = strdup("temp");
        qArray[quadPtr++] = new_quad_unary(COPY, (yyval.symp)->name, (yyvsp[0].str));
    }
#line 1309 "29_A4.tab.c"
    break;

  case 6: /* primary_expression: '(' expression ')'  */
#line 91 "29_A4.y"
                         {
          printf("primary-expression: ( expression )\n");
          (yyval.symp) = (yyvsp[-1].symp); 
      }
#line 1318 "29_A4.tab.c"
    break;

  case 7: /* postfix_expression: primary_expression  */
#line 97 "29_A4.y"
                                       {
        printf("postfix-expression\n");
        (yyval.symp)=(yyvsp[0].symp);
      }
#line 1327 "29_A4.tab.c"
    break;

  case 8: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 101 "29_A4.y"
                                            {
      printf("postfix-expression\n");
      }
#line 1335 "29_A4.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression '(' argument_expression_list_opt ')'  */
#line 104 "29_A4.y"
                                                              {printf("postfix-expression\n");}
#line 1341 "29_A4.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression ARW_PTR ID  */
#line 105 "29_A4.y"
                                    {printf("postfix-expression\n");}
#line 1347 "29_A4.tab.c"
    break;

  case 13: /* argument_expression_list: assignment_expression  */
#line 112 "29_A4.y"
                                                {printf("argument-expression-list\n");}
#line 1353 "29_A4.tab.c"
    break;

  case 14: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 113 "29_A4.y"
                                                                             {printf("argument-expression-list\n");}
#line 1359 "29_A4.tab.c"
    break;

  case 15: /* unary_expression: postfix_expression  */
#line 116 "29_A4.y"
                                     {
        (yyval.symp)=(yyvsp[0].symp);
        printf("unary-expression\n");
  }
#line 1368 "29_A4.tab.c"
    break;

  case 16: /* unary_expression: '&' unary_expression  */
#line 120 "29_A4.y"
                           {
        (yyval.symp)=gentemp(); qArray[quadPtr++] = new_quad_unary(AND, (yyval.symp)->name, (yyvsp[0].symp)->name); 
        printf("unary-expression\n");}
#line 1376 "29_A4.tab.c"
    break;

  case 17: /* unary_expression: '*' unary_expression  */
#line 123 "29_A4.y"
                           {
        (yyval.symp)=gentemp(); qArray[quadPtr++] = new_quad_unary(STAR, (yyval.symp)->name, (yyvsp[0].symp)->name); 
        printf("unary-expression\n");
    }
#line 1385 "29_A4.tab.c"
    break;

  case 18: /* unary_expression: '+' unary_expression  */
#line 127 "29_A4.y"
                           {
        (yyval.symp)=gentemp(); qArray[quadPtr++] = new_quad_unary(UNARYPLUS, (yyval.symp)->name, (yyvsp[0].symp)->name); 
        printf("unary-expression\n");
    }
#line 1394 "29_A4.tab.c"
    break;

  case 19: /* unary_expression: '-' unary_expression  */
#line 131 "29_A4.y"
                           {
        (yyval.symp)=gentemp(); qArray[quadPtr++] = new_quad_unary(UNARYMINUS, (yyval.symp)->name, (yyvsp[0].symp)->name); 
        printf("unary-expression\n");
    }
#line 1403 "29_A4.tab.c"
    break;

  case 20: /* unary_expression: '!' unary_expression  */
#line 135 "29_A4.y"
                           {
        (yyval.symp)=gentemp(); qArray[quadPtr++] = new_quad_unary(EXCLAMATION, (yyval.symp)->name, (yyvsp[0].symp)->name); 
        printf("unary-expression\n");
    }
#line 1412 "29_A4.tab.c"
    break;

  case 21: /* multiplicative_expression: unary_expression  */
#line 148 "29_A4.y"
                                            {(yyval.symp) = (yyvsp[0].symp); printf("multiplicative-expression\n");}
#line 1418 "29_A4.tab.c"
    break;

  case 22: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 149 "29_A4.y"
                                                                       {
                        (yyval.symp) = gentemp(); 
                        (yyval.symp) -> initial_value.n = (yyvsp[-2].symp)->initial_value.n * (yyvsp[0].symp)->initial_value.n;
                        qArray[quadPtr++] = new_quad_binary(MULT, (yyval.symp)->name, (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);
                        printf("multiplicative-expression\n");}
#line 1428 "29_A4.tab.c"
    break;

  case 23: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 155 "29_A4.y"
                                                                       {
                        (yyval.symp) = gentemp();
                        (yyval.symp) -> initial_value.n = (yyvsp[-2].symp)->initial_value.n / (yyvsp[0].symp)->initial_value.n;
                        qArray[quadPtr++] = new_quad_binary(DIV, (yyval.symp)->name, (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);
                        printf("multiplicative-expression\n");}
#line 1438 "29_A4.tab.c"
    break;

  case 24: /* multiplicative_expression: multiplicative_expression '%' unary_expression  */
#line 161 "29_A4.y"
                                                                       {
                        (yyval.symp) = gentemp();
                        (yyval.symp) -> initial_value.n = (yyvsp[-2].symp)->initial_value.n % (yyvsp[0].symp)->initial_value.n;
                        qArray[quadPtr++] = new_quad_binary(PERCENT, (yyval.symp)->name, (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);
                        printf("multiplicative-expression:");
                        printf("multiplicative-expression\n");}
#line 1449 "29_A4.tab.c"
    break;

  case 25: /* additive_expression: multiplicative_expression  */
#line 169 "29_A4.y"
                                               {(yyval.symp) = (yyvsp[0].symp); printf("additive-expression\n");}
#line 1455 "29_A4.tab.c"
    break;

  case 26: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 170 "29_A4.y"
                                                                    {
                  (yyval.symp) = gentemp();
                  (yyval.symp) -> initial_value.n = (yyvsp[-2].symp)->initial_value.n + (yyvsp[0].symp)->initial_value.n;
                  qArray[quadPtr++] = new_quad_binary(PLUS, (yyval.symp)->name, (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);
                  printf("additive-expression\n");}
#line 1465 "29_A4.tab.c"
    break;

  case 27: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 176 "29_A4.y"
                                                                    {
                  (yyval.symp) = gentemp();
                  (yyval.symp) -> initial_value.n = (yyvsp[-2].symp)->initial_value.n - (yyvsp[0].symp)->initial_value.n;
                  qArray[quadPtr++] = new_quad_binary(MINUS, (yyval.symp)->name, (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);
                  printf("additive-expression\n");}
#line 1475 "29_A4.tab.c"
    break;

  case 28: /* relational_expression: additive_expression  */
#line 183 "29_A4.y"
                                           {printf("relational-expression\n");}
#line 1481 "29_A4.tab.c"
    break;

  case 29: /* relational_expression: relational_expression '<' additive_expression  */
#line 184 "29_A4.y"
                                                                  {printf("relational-expression\n");}
#line 1487 "29_A4.tab.c"
    break;

  case 30: /* relational_expression: relational_expression '>' additive_expression  */
#line 185 "29_A4.y"
                                                                  {printf("relational-expression\n");}
#line 1493 "29_A4.tab.c"
    break;

  case 31: /* relational_expression: relational_expression LT_EQUAL additive_expression  */
#line 186 "29_A4.y"
                                                                       {printf("relational-expression\n");}
#line 1499 "29_A4.tab.c"
    break;

  case 32: /* relational_expression: relational_expression GT_EQUAL additive_expression  */
#line 187 "29_A4.y"
                                                                       {printf("relational-expression\n");}
#line 1505 "29_A4.tab.c"
    break;

  case 33: /* equality_expression: relational_expression  */
#line 190 "29_A4.y"
                                           {printf("equality-expression\n");}
#line 1511 "29_A4.tab.c"
    break;

  case 34: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 191 "29_A4.y"
                                                                  {printf("equality-expression\n");}
#line 1517 "29_A4.tab.c"
    break;

  case 35: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 192 "29_A4.y"
                                                                    {printf("equality-expression\n");}
#line 1523 "29_A4.tab.c"
    break;

  case 36: /* logical_AND_expression: equality_expression  */
#line 195 "29_A4.y"
                                            {(yyval.symp)=(yyvsp[0].symp); printf("logical-AND-expression\n");}
#line 1529 "29_A4.tab.c"
    break;

  case 37: /* logical_AND_expression: logical_AND_expression LOGIC_AND equality_expression  */
#line 197 "29_A4.y"
                   {(yyval.symp) = (yyvsp[-2].symp); printf("logical-AND-expression\n");}
#line 1535 "29_A4.tab.c"
    break;

  case 38: /* logical_OR_expression: logical_AND_expression  */
#line 200 "29_A4.y"
                                              {(yyval.symp) = (yyvsp[0].symp); printf("logical-OR-expression\n");}
#line 1541 "29_A4.tab.c"
    break;

  case 39: /* logical_OR_expression: logical_OR_expression LOGIC_OR logical_AND_expression  */
#line 202 "29_A4.y"
                    {(yyval.symp) = (yyvsp[-2].symp); printf("logical-OR-expression\n");}
#line 1547 "29_A4.tab.c"
    break;

  case 40: /* conditional_expression: logical_OR_expression '?' expression ':' conditional_expression  */
#line 206 "29_A4.y"
                      {(yyval.symp) = (yyvsp[-4].symp); printf("conditional-expression\n");}
#line 1553 "29_A4.tab.c"
    break;

  case 41: /* conditional_expression: logical_OR_expression  */
#line 207 "29_A4.y"
                                                {(yyval.symp) = (yyvsp[0].symp); printf("conditional-expression\n");}
#line 1559 "29_A4.tab.c"
    break;

  case 42: /* assignment_expression: unary_expression '=' assignment_expression  */
#line 210 "29_A4.y"
                                                                  {
                          (yyval.symp)->initial_value.n = (yyvsp[0].symp)->initial_value.n; 
                          printf("reduction----------------\n");
	                        qArray[quadPtr++] = new_quad_unary(COPY, (yyval.symp)->name, (yyvsp[0].symp)->name);
                          printf("assignment-expression\n ---------\n");printf("assignment-expression\n");}
#line 1569 "29_A4.tab.c"
    break;

  case 43: /* assignment_expression: conditional_expression  */
#line 216 "29_A4.y"
                                             {(yyval.symp)=(yyvsp[0].symp); printf("assignment-expression\n");}
#line 1575 "29_A4.tab.c"
    break;

  case 44: /* expression: assignment_expression  */
#line 219 "29_A4.y"
                                  {(yyval.symp)=(yyvsp[0].symp); printf("expression\n");}
#line 1581 "29_A4.tab.c"
    break;

  case 45: /* declaration: type_specifier init_declarator ';'  */
#line 228 "29_A4.y"
          {
            (yyval.symp) = (yyvsp[-1].symp); 
            (yyval.symp)->type = (yyvsp[-2].str);
            printf("declaration\n");}
#line 1590 "29_A4.tab.c"
    break;

  case 46: /* init_declarator: declarator  */
#line 234 "29_A4.y"
                            {(yyval.symp) = (yyvsp[0].symp); printf("init-declarator\n");}
#line 1596 "29_A4.tab.c"
    break;

  case 47: /* init_declarator: declarator '=' initializer  */
#line 236 "29_A4.y"
              { if((yyvsp[0].symp)->initial_value.n){
                  (yyvsp[-2].symp)->initial_value.n = (yyvsp[0].symp)->initial_value.n;
                  }
                if((yyvsp[0].symp)->initial_value.c){
                  (yyvsp[-2].symp)->initial_value.c = (yyvsp[0].symp)->initial_value.c;
                }
                if((yyvsp[0].symp)->initial_value.str){
                  (yyvsp[-2].symp)->initial_value.str = (yyvsp[0].symp)->initial_value.str;
                }
                (yyvsp[-2].symp)->type = (yyvsp[0].symp)->type;
                (yyval.symp) = (yyvsp[-2].symp); 
	              qArray[quadPtr++] = new_quad_unary(COPY, (yyval.symp)->name, (yyvsp[0].symp)->name);
                printf("init-declarator\n");}
#line 1614 "29_A4.tab.c"
    break;

  case 48: /* type_specifier: KEYWRD_VOID  */
#line 251 "29_A4.y"
                            {        
            printf("type-specifier\n");
            (yyval.str) = "void";}
#line 1622 "29_A4.tab.c"
    break;

  case 49: /* type_specifier: KEYWRD_CHAR  */
#line 255 "29_A4.y"
                           {
              (yyval.str) = "char";
              printf("type-specifier\n");}
#line 1630 "29_A4.tab.c"
    break;

  case 50: /* type_specifier: KEYWRD_INT  */
#line 259 "29_A4.y"
                          {
              (yyval.str) = "int";
              printf("type-specifier\n");}
#line 1638 "29_A4.tab.c"
    break;

  case 51: /* declarator: pointer_opt direct_declarator  */
#line 264 "29_A4.y"
                                          {
          (yyval.symp) = (yyvsp[0].symp);
          (yyval.symp)->type = strdup("func");
          printf("declarator\n");}
#line 1647 "29_A4.tab.c"
    break;

  case 52: /* direct_declarator: ID  */
#line 270 "29_A4.y"
                      {
            (yyval.symp) = symlook((yyvsp[0].str));
            (yyval.symp)->type = strdup("Local");
            printf("++++++++++++++%s++++++++++++\n", (yyval.symp)->name);
            printf("direct-declarator\n");}
#line 1657 "29_A4.tab.c"
    break;

  case 53: /* direct_declarator: ID '[' INT_CONST ']'  */
#line 275 "29_A4.y"
                                       {
                  printf("direct-declarator\n");}
#line 1664 "29_A4.tab.c"
    break;

  case 54: /* direct_declarator: ID '(' parameter_list_opt ')'  */
#line 278 "29_A4.y"
                                                {
                  printf("direct-declarator\n");
                  (yyval.symp) = symlook((yyvsp[-3].str));
                  (yyval.symp)->type = strdup("func");
                  printf("direct-declarator\n");}
#line 1674 "29_A4.tab.c"
    break;

  case 57: /* pointer: '*'  */
#line 289 "29_A4.y"
             {printf("pointer\n");}
#line 1680 "29_A4.tab.c"
    break;

  case 58: /* parameter_list: parameter_declaration  */
#line 293 "29_A4.y"
                                      {printf("parameter-list\n");}
#line 1686 "29_A4.tab.c"
    break;

  case 59: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 294 "29_A4.y"
                                                        {printf("parameter-list\n");}
#line 1692 "29_A4.tab.c"
    break;

  case 60: /* parameter_declaration: type_specifier pointer_opt identifier_opt  */
#line 297 "29_A4.y"
                                                                 {printf("parameter-declaration\n");}
#line 1698 "29_A4.tab.c"
    break;

  case 65: /* initializer: assignment_expression  */
#line 309 "29_A4.y"
                                   {(yyval.symp) = (yyvsp[0].symp); printf("initializer\n");}
#line 1704 "29_A4.tab.c"
    break;

  case 66: /* statement: compound_statement  */
#line 316 "29_A4.y"
                              {printf("statement\n");}
#line 1710 "29_A4.tab.c"
    break;

  case 67: /* statement: expression_statement  */
#line 317 "29_A4.y"
                               {printf("statement\n");}
#line 1716 "29_A4.tab.c"
    break;

  case 68: /* statement: selection_statement  */
#line 318 "29_A4.y"
                              {printf("statement\n");}
#line 1722 "29_A4.tab.c"
    break;

  case 69: /* statement: iteration_statement  */
#line 319 "29_A4.y"
                              {printf("statement\n");}
#line 1728 "29_A4.tab.c"
    break;

  case 70: /* statement: jump_statement  */
#line 320 "29_A4.y"
                         {printf("statement\n");}
#line 1734 "29_A4.tab.c"
    break;

  case 71: /* compound_statement: '{' block_item_list_opt '}'  */
#line 323 "29_A4.y"
                                               {printf("compound-statement\n");}
#line 1740 "29_A4.tab.c"
    break;

  case 74: /* block_item_list: block_item  */
#line 330 "29_A4.y"
                            {printf("block-item-list\n");}
#line 1746 "29_A4.tab.c"
    break;

  case 75: /* block_item_list: block_item_list block_item  */
#line 331 "29_A4.y"
                                             {printf("block-item-list\n");}
#line 1752 "29_A4.tab.c"
    break;

  case 76: /* block_item: declaration  */
#line 334 "29_A4.y"
                        {printf("block-item\n");}
#line 1758 "29_A4.tab.c"
    break;

  case 77: /* block_item: statement  */
#line 335 "29_A4.y"
                        {printf("block-item\n");}
#line 1764 "29_A4.tab.c"
    break;

  case 78: /* expression_statement: expression_opt ';'  */
#line 338 "29_A4.y"
                                         {printf("expression-statement\n");}
#line 1770 "29_A4.tab.c"
    break;

  case 81: /* selection_statement: KEYWRD_IF '(' expression ')' statement  */
#line 345 "29_A4.y"
                                                            {printf("selection-statement\n");}
#line 1776 "29_A4.tab.c"
    break;

  case 82: /* selection_statement: KEYWRD_IF '(' expression ')' statement KEYWRD_ELSE statement  */
#line 346 "29_A4.y"
                                                                                {printf("selection-statement\n");}
#line 1782 "29_A4.tab.c"
    break;

  case 83: /* iteration_statement: KEYWRD_FOR '(' expression_opt ';' expression_opt ';' expression_opt ')' statement  */
#line 349 "29_A4.y"
                                                                                                       {printf("iteration-statement\n");}
#line 1788 "29_A4.tab.c"
    break;

  case 84: /* jump_statement: KEYWRD_RETURN expression_opt ';'  */
#line 352 "29_A4.y"
                                                 {printf("jump-statement\n");}
#line 1794 "29_A4.tab.c"
    break;

  case 85: /* translation_unit: external_declaration  */
#line 358 "29_A4.y"
                                       {printf("translation-unit\n");}
#line 1800 "29_A4.tab.c"
    break;

  case 86: /* translation_unit: translation_unit external_declaration  */
#line 359 "29_A4.y"
                                                        {printf("translation-unit\n");}
#line 1806 "29_A4.tab.c"
    break;

  case 87: /* external_declaration: declaration  */
#line 362 "29_A4.y"
                                  {printf("external-declaration\n");}
#line 1812 "29_A4.tab.c"
    break;

  case 88: /* external_declaration: function_definition  */
#line 363 "29_A4.y"
                                          {printf("external-declaration\n");}
#line 1818 "29_A4.tab.c"
    break;

  case 89: /* function_definition: type_specifier declarator compound_statement  */
#line 366 "29_A4.y"
                                                                  {printf("function-definition\n");}
#line 1824 "29_A4.tab.c"
    break;


#line 1828 "29_A4.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

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
                      yytoken, &yylval);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 370 "29_A4.y"



void yyerror(char *s) {
    printf("Error: %s on '%s'\n",s,yytext);
}

void print_array() {
    for (int i = 0; i < quadPtr; i = i + 1)
		print_quad(qArray[i]);
}

int main(){
    yyparse();
    print_array();
    print_sym();
}
