/* A Bison parser, made by GNU Bison 3.7.6.  */

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
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "sintactico.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/////////////////////////////////////

#define SIZE 100

struct dataItem{
  char* clave;
  void* valor;
  int tipo;
  int bandera;
};

struct dataItem dic[SIZE];
int count = 0;
int aux;

////////////////////////////////////

extern int yylex();
extern int yyparse();
extern FILE* yyin;
void yyerror(const char* s);

void guardar(char*, void*, int);
void actualizar(char*, void*, int);
void inc_dec(char*, int);
int buscar(char*);
float obtNum(char*);
char* cad_print(char*);
int iof(float);
int cad_bool(char*, char*);
char* bool_s_id(char*);

void* iof_p(float);
int * intdup(int*);
float * floatdup(float*);
char* chardup(char*);
char* itoa(int);
char* ftoa(float);

char* iftos(char*);

void imprimir();
void noUsadas();


#line 122 "sintactico.tab.c"

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

#include "sintactico.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ENTERO = 3,                     /* ENTERO  */
  YYSYMBOL_REAL = 4,                       /* REAL  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_CADENA = 6,                     /* CADENA  */
  YYSYMBOL_CARACTER = 7,                   /* CARACTER  */
  YYSYMBOL_TRUE = 8,                       /* TRUE  */
  YYSYMBOL_FALSE = 9,                      /* FALSE  */
  YYSYMBOL_LLAVE_A = 10,                   /* LLAVE_A  */
  YYSYMBOL_LLAVE_C = 11,                   /* LLAVE_C  */
  YYSYMBOL_PARENTESIS_A = 12,              /* PARENTESIS_A  */
  YYSYMBOL_PARENTESIS_C = 13,              /* PARENTESIS_C  */
  YYSYMBOL_CORCHETE_A = 14,                /* CORCHETE_A  */
  YYSYMBOL_CORCHETE_C = 15,                /* CORCHETE_C  */
  YYSYMBOL_IF = 16,                        /* IF  */
  YYSYMBOL_ELSE = 17,                      /* ELSE  */
  YYSYMBOL_WHILE = 18,                     /* WHILE  */
  YYSYMBOL_FOR = 19,                       /* FOR  */
  YYSYMBOL_INT = 20,                       /* INT  */
  YYSYMBOL_FLOAT = 21,                     /* FLOAT  */
  YYSYMBOL_STRING = 22,                    /* STRING  */
  YYSYMBOL_CHAR = 23,                      /* CHAR  */
  YYSYMBOL_PRINT = 24,                     /* PRINT  */
  YYSYMBOL_INPUT = 25,                     /* INPUT  */
  YYSYMBOL_AND = 26,                       /* AND  */
  YYSYMBOL_OR = 27,                        /* OR  */
  YYSYMBOL_BOOL = 28,                      /* BOOL  */
  YYSYMBOL_STRCMP = 29,                    /* STRCMP  */
  YYSYMBOL_OP_SUMA = 30,                   /* OP_SUMA  */
  YYSYMBOL_OP_RESTA = 31,                  /* OP_RESTA  */
  YYSYMBOL_OP_MULT = 32,                   /* OP_MULT  */
  YYSYMBOL_OP_DIV = 33,                    /* OP_DIV  */
  YYSYMBOL_OP_IGUAL = 34,                  /* OP_IGUAL  */
  YYSYMBOL_OP_MENOR = 35,                  /* OP_MENOR  */
  YYSYMBOL_OP_MENORIGUAL = 36,             /* OP_MENORIGUAL  */
  YYSYMBOL_OP_MAYOR = 37,                  /* OP_MAYOR  */
  YYSYMBOL_OP_MAYORIGUAL = 38,             /* OP_MAYORIGUAL  */
  YYSYMBOL_OP_COMP_IGUAL = 39,             /* OP_COMP_IGUAL  */
  YYSYMBOL_OP_NEGACION = 40,               /* OP_NEGACION  */
  YYSYMBOL_OP_DISTINTO = 41,               /* OP_DISTINTO  */
  YYSYMBOL_COMA = 42,                      /* COMA  */
  YYSYMBOL_PUNTOYCOMA = 43,                /* PUNTOYCOMA  */
  YYSYMBOL_GUIONBAJO = 44,                 /* GUIONBAJO  */
  YYSYMBOL_PUNTO = 45,                     /* PUNTO  */
  YYSYMBOL_COMENTARIO = 46,                /* COMENTARIO  */
  YYSYMBOL_47_n_ = 47,                     /* '\n'  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_codigo = 49,                    /* codigo  */
  YYSYMBOL_linea = 50,                     /* linea  */
  YYSYMBOL_op_inc_dec = 51,                /* op_inc_dec  */
  YYSYMBOL_cadena_io = 52,                 /* cadena_io  */
  YYSYMBOL_exp_ari = 53,                   /* exp_ari  */
  YYSYMBOL_exp_bool = 54,                  /* exp_bool  */
  YYSYMBOL_exp_bool_s = 55,                /* exp_bool_s  */
  YYSYMBOL_exp_bool_b = 56                 /* exp_bool_b  */
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   317

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  9
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


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
      47,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   105,   105,   106,   107,   108,   109,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   134,   135,   143,   144,
     145,   148,   149,   150,   151,   152,   153,   154,   155,   158,
     159,   160,   161,   162,   166,   167,   168,   169,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182
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
  "\"end of file\"", "error", "\"invalid token\"", "ENTERO", "REAL", "ID",
  "CADENA", "CARACTER", "TRUE", "FALSE", "LLAVE_A", "LLAVE_C",
  "PARENTESIS_A", "PARENTESIS_C", "CORCHETE_A", "CORCHETE_C", "IF", "ELSE",
  "WHILE", "FOR", "INT", "FLOAT", "STRING", "CHAR", "PRINT", "INPUT",
  "AND", "OR", "BOOL", "STRCMP", "OP_SUMA", "OP_RESTA", "OP_MULT",
  "OP_DIV", "OP_IGUAL", "OP_MENOR", "OP_MENORIGUAL", "OP_MAYOR",
  "OP_MAYORIGUAL", "OP_COMP_IGUAL", "OP_NEGACION", "OP_DISTINTO", "COMA",
  "PUNTOYCOMA", "GUIONBAJO", "PUNTO", "COMENTARIO", "'\\n'", "$accept",
  "codigo", "linea", "op_inc_dec", "cadena_io", "exp_ari", "exp_bool",
  "exp_bool_s", "exp_bool_b", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    10
};
#endif

#define YYPACT_NINF (-114)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     147,  -114,  -114,    13,  -114,  -114,  -114,  -114,     7,    15,
      30,    36,     3,    20,    59,    64,    65,    91,   105,  -114,
     118,  -114,  -114,   284,    40,  -114,    35,   103,   104,    78,
    -114,    81,     8,   130,    24,     7,     7,   139,   111,   114,
     115,   123,    86,   124,    12,  -114,  -114,  -114,   301,   301,
     301,   301,     7,     7,   291,   291,   291,   291,   291,   291,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,   301,   148,   284,
    -114,  -114,  -114,  -114,    62,   102,   127,   301,   301,   156,
     165,  -114,  -114,   -10,    93,  -114,    12,   131,    75,    75,
    -114,  -114,  -114,  -114,   291,  -114,  -114,  -114,  -114,  -114,
    -114,    81,    86,   164,   167,   301,   284,   284,  -114,  -114,
    -114,    86,  -114,  -114,   130,    12,    24,    -9,   147,   147,
      67,   136,   166,  -114,   177,   206,     7,  -114,   170,  -114,
      -4,   180,   186,   147,   101,   179,   235,   192,  -114,   147,
     264,  -114
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,    31,    33,    32,    44,    50,    48,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       0,     6,    23,    49,    25,    39,    40,     0,     0,     0,
      32,    49,     0,    39,    40,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     5,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,    27,    32,    16,    17,    18,    19,     0,     0,    15,
      38,    43,    47,    58,     0,     0,     0,     0,     0,     0,
       0,    29,    28,     0,     0,    45,     0,     0,    34,    35,
      36,    37,    41,    42,     0,    54,    55,    52,    53,    56,
      57,     0,     0,     0,     0,     0,     9,    10,    11,    12,
       7,     0,    13,    14,     0,     0,     0,     0,     2,     2,
       0,    30,     0,     8,     0,     0,     0,    46,    20,    22,
       0,     0,     0,     2,     0,     0,     0,     0,    21,     2,
       0,    24
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -114,  -113,   -20,    71,   -71,     1,    -7,    -6,    -1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    20,    21,    22,    83,    23,    24,    25,    26
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      47,    32,    33,   110,   123,   124,   125,    34,    38,    31,
       1,     2,    30,     4,     5,     6,     7,    85,     4,     8,
     136,    71,    52,    53,    86,    39,   140,    35,    74,    75,
      69,   117,   111,   111,    52,    53,    18,    73,    87,   132,
     121,    18,    36,    27,    28,    92,    93,    29,    37,    88,
      89,    90,    91,    95,    96,    97,    98,    99,   100,    54,
      55,    56,    57,    58,    40,    59,    52,    53,   101,    41,
      54,    55,    56,    57,    58,   103,    59,    42,   106,   107,
     114,     1,     2,    62,    63,    64,    65,    66,    52,    53,
      67,    81,    82,   116,    70,    31,    43,    48,    49,    50,
      51,   112,   113,    68,    47,    47,   120,    50,    51,   122,
     126,    48,    49,    50,    51,   104,    47,    44,    45,   130,
      47,     1,     2,     3,     4,     5,     6,     7,    52,    53,
       8,    27,    28,    60,     9,    61,    10,    11,    12,    13,
      14,    15,    16,    72,    76,    77,    17,    18,    78,    79,
       1,     2,     3,     4,     5,     6,     7,    80,    84,     8,
     102,   105,   108,     9,    46,    10,    11,    12,    13,    14,
      15,    16,   109,   115,   118,    17,    18,   119,   111,   127,
       1,     2,     3,     4,     5,     6,     7,   131,   128,     8,
     133,   134,   137,     9,    19,    10,    11,    12,    13,    14,
      15,    16,   139,   135,     0,    17,    18,     0,     0,     1,
       2,     3,     4,     5,     6,     7,     0,   129,     8,     0,
       0,     0,     9,    46,    10,    11,    12,    13,    14,    15,
      16,     0,     0,     0,    17,    18,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     0,   138,     8,     0,     0,
       0,     9,    46,    10,    11,    12,    13,    14,    15,    16,
       0,     0,     0,    17,    18,     0,     0,     1,     2,     3,
       4,     5,     6,     7,     0,   141,     8,     0,     0,     0,
       9,    46,    10,    11,    12,    13,    14,    15,    16,     0,
       0,     0,    17,    18,     1,     2,    62,     0,     5,     6,
       7,     0,     0,    94,     1,     2,    62,     0,     0,     0,
      46,     0,     0,    67,    48,    49,    50,    51
};

static const yytype_int16 yycheck[] =
{
      20,     8,     8,    13,    13,   118,   119,     8,     5,     8,
       3,     4,     5,     6,     7,     8,     9,     5,     6,    12,
     133,    13,    26,    27,    12,     5,   139,    12,    35,    36,
      29,   102,    42,    42,    26,    27,    29,    13,    44,    43,
     111,    29,    12,    30,    31,    52,    53,    34,    12,    48,
      49,    50,    51,    54,    55,    56,    57,    58,    59,    35,
      36,    37,    38,    39,     5,    41,    26,    27,    67,     5,
      35,    36,    37,    38,    39,    13,    41,    12,    77,    78,
      86,     3,     4,     5,     6,     7,     8,     9,    26,    27,
      12,     5,     6,    94,    13,    94,     5,    30,    31,    32,
      33,     8,     9,    25,   124,   125,   105,    32,    33,   115,
      43,    30,    31,    32,    33,    13,   136,    12,     0,   126,
     140,     3,     4,     5,     6,     7,     8,     9,    26,    27,
      12,    30,    31,    30,    16,    31,    18,    19,    20,    21,
      22,    23,    24,    13,     5,    34,    28,    29,    34,    34,
       3,     4,     5,     6,     7,     8,     9,    34,    34,    12,
      12,    34,     6,    16,    46,    18,    19,    20,    21,    22,
      23,    24,     7,    42,    10,    28,    29,    10,    42,    13,
       3,     4,     5,     6,     7,     8,     9,    17,    11,    12,
      10,     5,    13,    16,    47,    18,    19,    20,    21,    22,
      23,    24,    10,   132,    -1,    28,    29,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    16,    46,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    28,    29,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    16,    46,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    28,    29,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      16,    46,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    28,    29,     3,     4,     5,    -1,     7,     8,
       9,    -1,    -1,    12,     3,     4,     5,    -1,    -1,    -1,
      46,    -1,    -1,    12,    30,    31,    32,    33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    12,    16,
      18,    19,    20,    21,    22,    23,    24,    28,    29,    47,
      49,    50,    51,    53,    54,    55,    56,    30,    31,    34,
       5,    53,    54,    55,    56,    12,    12,    12,     5,     5,
       5,     5,    12,     5,    12,     0,    46,    50,    30,    31,
      32,    33,    26,    27,    35,    36,    37,    38,    39,    41,
      30,    31,     5,     6,     7,     8,     9,    12,    25,    53,
      13,    13,    13,    13,    54,    54,     5,    34,    34,    34,
      34,     5,     6,    52,    34,     5,    12,    55,    53,    53,
      53,    53,    54,    54,    12,    56,    56,    56,    56,    56,
      56,    53,    12,    13,    13,    34,    53,    53,     6,     7,
      13,    42,     8,     9,    55,    42,    56,    52,    10,    10,
      53,    52,    55,    13,    49,    49,    43,    13,    11,    11,
      54,    17,    43,    10,     5,    51,    49,    13,    11,    10,
      49,    11
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    49,    49,    49,    49,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    51,    51,    52,    52,
      52,    53,    53,    53,    53,    53,    53,    53,    53,    54,
      54,    54,    54,    54,    55,    55,    55,    55,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     2,     1,     4,     6,     4,
       4,     4,     4,     4,     4,     3,     3,     3,     3,     3,
       7,    11,     7,     1,    13,     1,     3,     3,     1,     1,
       3,     1,     1,     1,     3,     3,     3,     3,     3,     1,
       1,     3,     3,     3,     1,     1,     6,     3,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 7: /* linea: PRINT PARENTESIS_A cadena_io PARENTESIS_C  */
#line 112 "sintactico.y"
                                                                 {printf("%s\n", (yyvsp[-1].str));}
#line 1294 "sintactico.tab.c"
    break;

  case 9: /* linea: INT ID OP_IGUAL exp_ari  */
#line 114 "sintactico.y"
                                                        {aux = (int)(yyvsp[0].fval); guardar((yyvsp[-2].str), intdup(&aux), 2);}
#line 1300 "sintactico.tab.c"
    break;

  case 10: /* linea: FLOAT ID OP_IGUAL exp_ari  */
#line 115 "sintactico.y"
                                                        {guardar((yyvsp[-2].str), floatdup(&(yyvsp[0].fval)), 3);}
#line 1306 "sintactico.tab.c"
    break;

  case 11: /* linea: STRING ID OP_IGUAL CADENA  */
#line 116 "sintactico.y"
                                                        {guardar((yyvsp[-2].str), strdup((yyvsp[0].str)), 1);}
#line 1312 "sintactico.tab.c"
    break;

  case 12: /* linea: CHAR ID OP_IGUAL CARACTER  */
#line 117 "sintactico.y"
                                                        {guardar((yyvsp[-2].str), chardup(&(yyvsp[0].car)), 1);}
#line 1318 "sintactico.tab.c"
    break;

  case 13: /* linea: BOOL ID OP_IGUAL TRUE  */
#line 118 "sintactico.y"
                                                        {guardar((yyvsp[-2].str), intdup(&(yyvsp[0].ival)), 4);}
#line 1324 "sintactico.tab.c"
    break;

  case 14: /* linea: BOOL ID OP_IGUAL FALSE  */
#line 119 "sintactico.y"
                                                        {guardar((yyvsp[-2].str), intdup(&(yyvsp[0].ival)), 4);}
#line 1330 "sintactico.tab.c"
    break;

  case 15: /* linea: ID OP_IGUAL exp_ari  */
#line 120 "sintactico.y"
                                                        {actualizar((yyvsp[-2].str), iof_p((yyvsp[0].fval)), iof((yyvsp[0].fval)));}
#line 1336 "sintactico.tab.c"
    break;

  case 16: /* linea: ID OP_IGUAL CADENA  */
#line 121 "sintactico.y"
                                                        {actualizar((yyvsp[-2].str), strdup((yyvsp[0].str)), 1);}
#line 1342 "sintactico.tab.c"
    break;

  case 17: /* linea: ID OP_IGUAL CARACTER  */
#line 122 "sintactico.y"
                                                        {actualizar((yyvsp[-2].str), chardup(&(yyvsp[0].car)), 1);}
#line 1348 "sintactico.tab.c"
    break;

  case 18: /* linea: ID OP_IGUAL TRUE  */
#line 123 "sintactico.y"
                                                        {actualizar((yyvsp[-2].str), intdup(&(yyvsp[0].ival)), 4);}
#line 1354 "sintactico.tab.c"
    break;

  case 19: /* linea: ID OP_IGUAL FALSE  */
#line 124 "sintactico.y"
                                                        {actualizar((yyvsp[-2].str), intdup(&(yyvsp[0].ival)), 4);}
#line 1360 "sintactico.tab.c"
    break;

  case 25: /* linea: exp_bool  */
#line 130 "sintactico.y"
                                                                {printf("Resultado: %i\n", (yyvsp[0].ival));}
#line 1366 "sintactico.tab.c"
    break;

  case 26: /* op_inc_dec: ID OP_SUMA OP_SUMA  */
#line 134 "sintactico.y"
                                                { inc_dec((yyvsp[-2].str), 1); }
#line 1372 "sintactico.tab.c"
    break;

  case 27: /* op_inc_dec: ID OP_RESTA OP_RESTA  */
#line 135 "sintactico.y"
                                                { inc_dec((yyvsp[-2].str), 0); }
#line 1378 "sintactico.tab.c"
    break;

  case 28: /* cadena_io: CADENA  */
#line 143 "sintactico.y"
                                                 { (yyval.str) = cad_print((yyvsp[0].str));}
#line 1384 "sintactico.tab.c"
    break;

  case 29: /* cadena_io: ID  */
#line 144 "sintactico.y"
                                                 { (yyval.str) = iftos((yyvsp[0].str));}
#line 1390 "sintactico.tab.c"
    break;

  case 30: /* cadena_io: cadena_io COMA cadena_io  */
#line 145 "sintactico.y"
                                                 { (yyval.str) = strcat((yyvsp[-2].str),(yyvsp[0].str));}
#line 1396 "sintactico.tab.c"
    break;

  case 31: /* exp_ari: ENTERO  */
#line 148 "sintactico.y"
                                                 { (yyval.fval) = (yyvsp[0].ival); }
#line 1402 "sintactico.tab.c"
    break;

  case 32: /* exp_ari: ID  */
#line 149 "sintactico.y"
                                                 { (yyval.fval) = obtNum((yyvsp[0].str));}
#line 1408 "sintactico.tab.c"
    break;

  case 33: /* exp_ari: REAL  */
#line 150 "sintactico.y"
                                                 { (yyval.fval) = (yyvsp[0].fval);}
#line 1414 "sintactico.tab.c"
    break;

  case 34: /* exp_ari: exp_ari OP_SUMA exp_ari  */
#line 151 "sintactico.y"
                                                 { (yyval.fval) = (yyvsp[-2].fval) + (yyvsp[0].fval); }
#line 1420 "sintactico.tab.c"
    break;

  case 35: /* exp_ari: exp_ari OP_RESTA exp_ari  */
#line 152 "sintactico.y"
                                                 { (yyval.fval) = (yyvsp[-2].fval) - (yyvsp[0].fval); }
#line 1426 "sintactico.tab.c"
    break;

  case 36: /* exp_ari: exp_ari OP_MULT exp_ari  */
#line 153 "sintactico.y"
                                                 { (yyval.fval) = (yyvsp[-2].fval) * (yyvsp[0].fval); }
#line 1432 "sintactico.tab.c"
    break;

  case 37: /* exp_ari: exp_ari OP_DIV exp_ari  */
#line 154 "sintactico.y"
                                                 { (yyval.fval) = (yyvsp[-2].fval) / (yyvsp[0].fval); }
#line 1438 "sintactico.tab.c"
    break;

  case 38: /* exp_ari: PARENTESIS_A exp_ari PARENTESIS_C  */
#line 155 "sintactico.y"
                                                 { (yyval.fval) = (yyvsp[-1].fval); }
#line 1444 "sintactico.tab.c"
    break;

  case 39: /* exp_bool: exp_bool_s  */
#line 158 "sintactico.y"
                                                       { (yyval.ival) = *(int*)(yyvsp[0].vd); }
#line 1450 "sintactico.tab.c"
    break;

  case 40: /* exp_bool: exp_bool_b  */
#line 159 "sintactico.y"
                                                                                       { (yyval.ival) = (int)(yyvsp[0].ival); }
#line 1456 "sintactico.tab.c"
    break;

  case 41: /* exp_bool: exp_bool AND exp_bool  */
#line 160 "sintactico.y"
                                                   { (yyval.ival) = (yyvsp[-2].ival) && (yyvsp[0].ival); }
#line 1462 "sintactico.tab.c"
    break;

  case 42: /* exp_bool: exp_bool OR exp_bool  */
#line 161 "sintactico.y"
                                                   { (yyval.ival) = (yyvsp[-2].ival) || (yyvsp[0].ival); }
#line 1468 "sintactico.tab.c"
    break;

  case 43: /* exp_bool: PARENTESIS_A exp_bool PARENTESIS_C  */
#line 162 "sintactico.y"
                                                   { (yyval.ival) = (yyvsp[-1].ival); }
#line 1474 "sintactico.tab.c"
    break;

  case 45: /* exp_bool_s: ID  */
#line 167 "sintactico.y"
                                                   { (yyval.vd) = bool_s_id((yyvsp[0].str)); }
#line 1480 "sintactico.tab.c"
    break;

  case 46: /* exp_bool_s: STRCMP PARENTESIS_A exp_bool_s COMA exp_bool_s PARENTESIS_C  */
#line 168 "sintactico.y"
                                                                                                                        {aux = cad_bool((yyvsp[-3].vd), (yyvsp[-1].vd)); (yyval.vd) = &aux;}
#line 1486 "sintactico.tab.c"
    break;

  case 47: /* exp_bool_s: PARENTESIS_A exp_bool_s PARENTESIS_C  */
#line 169 "sintactico.y"
                                                   { (yyval.vd) = (yyvsp[-1].vd); }
#line 1492 "sintactico.tab.c"
    break;

  case 48: /* exp_bool_b: TRUE  */
#line 172 "sintactico.y"
                                                         { (yyval.ival) = (yyvsp[0].ival); }
#line 1498 "sintactico.tab.c"
    break;

  case 49: /* exp_bool_b: exp_ari  */
#line 173 "sintactico.y"
                                                         { (yyval.ival) = (yyvsp[0].fval); }
#line 1504 "sintactico.tab.c"
    break;

  case 50: /* exp_bool_b: CARACTER  */
#line 174 "sintactico.y"
                                                         { (yyval.ival) = (int)(yyvsp[0].car); }
#line 1510 "sintactico.tab.c"
    break;

  case 51: /* exp_bool_b: FALSE  */
#line 175 "sintactico.y"
                                                         { (yyval.ival) = (yyvsp[0].ival); }
#line 1516 "sintactico.tab.c"
    break;

  case 52: /* exp_bool_b: exp_bool_b OP_MAYOR exp_bool_b  */
#line 176 "sintactico.y"
                                                   { (yyval.ival) = (yyvsp[-2].ival) >  (yyvsp[0].ival); }
#line 1522 "sintactico.tab.c"
    break;

  case 53: /* exp_bool_b: exp_bool_b OP_MAYORIGUAL exp_bool_b  */
#line 177 "sintactico.y"
                                                   { (yyval.ival) = (yyvsp[-2].ival) >= (yyvsp[0].ival); }
#line 1528 "sintactico.tab.c"
    break;

  case 54: /* exp_bool_b: exp_bool_b OP_MENOR exp_bool_b  */
#line 178 "sintactico.y"
                                                   { (yyval.ival) = (yyvsp[-2].ival) <  (yyvsp[0].ival); }
#line 1534 "sintactico.tab.c"
    break;

  case 55: /* exp_bool_b: exp_bool_b OP_MENORIGUAL exp_bool_b  */
#line 179 "sintactico.y"
                                                   { (yyval.ival) = (yyvsp[-2].ival) <= (yyvsp[0].ival); }
#line 1540 "sintactico.tab.c"
    break;

  case 56: /* exp_bool_b: exp_bool_b OP_COMP_IGUAL exp_bool_b  */
#line 180 "sintactico.y"
                                                   { (yyval.ival) = (yyvsp[-2].ival) == (yyvsp[0].ival); }
#line 1546 "sintactico.tab.c"
    break;

  case 57: /* exp_bool_b: exp_bool_b OP_DISTINTO exp_bool_b  */
#line 181 "sintactico.y"
                                                   { (yyval.ival) = (yyvsp[-2].ival) != (yyvsp[0].ival); }
#line 1552 "sintactico.tab.c"
    break;

  case 58: /* exp_bool_b: PARENTESIS_A exp_bool_b PARENTESIS_C  */
#line 182 "sintactico.y"
                                                   { (yyval.ival) = (yyvsp[-1].ival);}
#line 1558 "sintactico.tab.c"
    break;


#line 1562 "sintactico.tab.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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

#line 185 "sintactico.y"


int main(){
  yyin = fopen("codigo.txt", "r");
  yyparse();
  imprimir();
  noUsadas();
  return 0;
}

void guardar(char* clave, void* valor, int tipo) {
  if(count != SIZE){
    for (int i = 0; i < count; i++){
      if (strcmp(dic[i].clave,clave) == 0){
        printf("El identificador %s ya se habia declarado previamente\n", clave);
        exit(1);
      }
  }
    dic[count].clave = clave; 
    dic[count].valor = valor;
    dic[count].tipo = tipo;
    count++;
  }
  else{
    printf("Memoria llena.\n");
  }
}

void actualizar(char* clave, void* valor, int tipo){
  int index = buscar(clave);

  if(index == -1){
    printf("Variable %s no declarada\n", clave);
    exit(1);
  }

  if (dic[index].tipo != tipo){
    printf("Nuevo valor de %s no compatible\n", clave);
    exit(1);
  }

  int aux = strlen(dic[index].valor);
  int temp = strlen(valor);

  if ((aux == 1 && temp > aux)) {
    printf("Nuevo valor de %s no compatible\n", clave);
    exit(1);
  }

  dic[index].valor = valor;

}

void inc_dec(char* id, int bandera){
  int index = buscar(id);

  if(index == -1){
    printf("Variable %s no declarada\n", id);
    exit(1);
  }

  if(dic[index].tipo == 1 || dic[index].tipo == 4){
    printf("Operador no valido con tipo de datos string/bool\n");
    exit(1);
  }

  if(bandera){
		if(dic[index].tipo == 2){
	    int x = *(int*)dic[index].valor + 1;
	    dic[index].valor = intdup(&x);
	  }
	
	  if(dic[index].tipo == 3){
	    float y = *(float*)dic[index].valor + 1;
	    dic[index].valor = floatdup(&y);
	  }
	}
	else{
		if(dic[index].tipo == 2){
	    int x = *(int*)dic[index].valor - 1;
	    dic[index].valor = intdup(&x);
	  }
	
	  if(dic[index].tipo == 3){
	    float y = *(float*)dic[index].valor - 1;
	    dic[index].valor = floatdup(&y);
	  }
	}
    
}

int buscar(char * id){
  int i;

  for(i = 0; i != count; i++){
    if(strcmp(id,dic[i].clave)==0){
      dic[i].bandera = 1;
      return i;
    }
  }

  return -1;
}

float obtNum(char * id){
  int index = buscar(id);

  if(index == -1){
     printf("Aun no se ha declarado la variable %s\n", id);
     exit(1);
  }

  if(dic[index].tipo == 4){
    printf("Variable bool %s no apta para operaciones aritmeticas\n", id);
    exit(1);
  }

	if(dic[index].tipo == 1){
		int num = strlen(strdup(dic[index].valor));
		if(num == 1)
			return (float)(*(char*)dic[index].valor);

		printf("Variable string %s no apta para operaciones aritmeticas\n", id);
    exit(1);
	}

  if(dic[index].tipo == 2)
    return (float)(*(int*)dic[index].valor);

  return *(float*)dic[index].valor;
}

int cad_bool(char* cadena, char* cadena2){
  int index = strcmp(cadena, cadena2);

  if(index != 0)
    return 0;

  return 1;
}

char* bool_s_id(char* id){
	int index = buscar(id);

	if(index == -1){
     printf("Aun no se ha declarado la variable %s\n", id);
     exit(1);
  }

	if(dic[index].tipo != 1){
		printf("strcmp no acepta variables de tipo int/float/bool\n");
		exit(1);
	}

  int aux;
  aux = strlen(strdup(dic[index].valor));
  if (aux == 1){
		printf("strcmp no acepta variables de tipo char\n");
		exit(1);
	}

  return strdup(dic[index].valor);
}

char* cad_print(char* cadena){
  char aux[128];
  int i;
  int count = 0;
	int size = strlen(cadena);

	if(size == 1){
		return strdup(cadena);	
	}

	for(i = 1; i < strlen(cadena)-1; i++){
    aux[count] = cadena[i];
    count++;
  }

	aux[count] = '\0';
  
	return strdup(aux);
}

int iof(float num){ 
  int x;
  x = num;

  if(num - x)
    return 3;

  return 2;
}

void* iof_p(float num){
  int x;
  x = num;

  if(num - x)
    return floatdup(&num);

  return intdup(&x);
}

int * intdup(int* num){
   int * p = malloc(sizeof(int));
   memcpy(p, num, sizeof(int));
   return p;
}

float * floatdup(float* num){
   float * p = malloc(sizeof(float));
   memcpy(p, num, sizeof(float));
   return p;
}

char * chardup(char* cad){
   char * p = malloc(sizeof(char));
   memcpy(p, cad, sizeof(char));
   return p;
}

char* itoa(int numero) {
  char str[255];
  sprintf(str, "%i", numero);
  return strdup(str);
}

char* ftoa(float numero){
  char str[255];
  sprintf(str, "%f", numero);
  return strdup(str);
}

char* iftos(char* id){
  int index = buscar(id);

  if(index == -1){
     printf("Aun no se ha declarado la variable %s\n", id);
     exit(1);
  }

  if(dic[index].tipo == 2)
    return itoa(*(int*)dic[index].valor);

  if(dic[index].tipo == 3)
    return ftoa(*(float*)dic[index].valor);

	return cad_print(dic[index].valor);  
}

void imprimir(){
  int i;
  int y;
  printf("{\n");
  for(i = 0; i != count; i++){
    printf("%s : ", dic[i].clave);
    y = dic[i].tipo;
    switch(y){
      case 1:
        printf("\t %s \n", strdup(dic[i].valor));
        break;
      case 2:
        printf("\t %i \n", *(int*)dic[i].valor);
        break;
      case 3:
        printf("\t %f \n", *(float*)dic[i].valor);  
        break;
      case 4:
        if(*(int*)dic[i].valor == 1)
          printf("\t true \n");
        else
          printf("\t false \n");
        break;
    }
  }
  printf("}\n");
}

void noUsadas(){
  int warning = 0;
  char w_noUsadas[100] = "Warning! variables no usadas: ";
  for (int i = 0; i != count; i++){
    if (dic[i].bandera == 0){
      warning = 1;
      strcat(w_noUsadas,dic[i].clave);
      strcat(w_noUsadas,", ");
    }
  }
  if (warning == 1){
    printf("%s \n",w_noUsadas);
  }
}


void yyerror(const char* s) {
    printf("Parse error: %s\n", s);
    exit(1);
}
