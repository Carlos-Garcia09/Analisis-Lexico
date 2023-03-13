/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SINTACTICO_TAB_H_INCLUDED
# define YY_YY_SINTACTICO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ENTERO = 258,                  /* ENTERO  */
    REAL = 259,                    /* REAL  */
    ID = 260,                      /* ID  */
    CADENA = 261,                  /* CADENA  */
    CARACTER = 262,                /* CARACTER  */
    TRUE = 263,                    /* TRUE  */
    FALSE = 264,                   /* FALSE  */
    LLAVE_A = 265,                 /* LLAVE_A  */
    LLAVE_C = 266,                 /* LLAVE_C  */
    PARENTESIS_A = 267,            /* PARENTESIS_A  */
    PARENTESIS_C = 268,            /* PARENTESIS_C  */
    CORCHETE_A = 269,              /* CORCHETE_A  */
    CORCHETE_C = 270,              /* CORCHETE_C  */
    IF = 271,                      /* IF  */
    ELSE = 272,                    /* ELSE  */
    WHILE = 273,                   /* WHILE  */
    FOR = 274,                     /* FOR  */
    INT = 275,                     /* INT  */
    FLOAT = 276,                   /* FLOAT  */
    STRING = 277,                  /* STRING  */
    CHAR = 278,                    /* CHAR  */
    PRINT = 279,                   /* PRINT  */
    INPUT = 280,                   /* INPUT  */
    AND = 281,                     /* AND  */
    OR = 282,                      /* OR  */
    BOOL = 283,                    /* BOOL  */
    STRCMP = 284,                  /* STRCMP  */
    OP_SUMA = 285,                 /* OP_SUMA  */
    OP_RESTA = 286,                /* OP_RESTA  */
    OP_MULT = 287,                 /* OP_MULT  */
    OP_DIV = 288,                  /* OP_DIV  */
    OP_IGUAL = 289,                /* OP_IGUAL  */
    OP_MENOR = 290,                /* OP_MENOR  */
    OP_MENORIGUAL = 291,           /* OP_MENORIGUAL  */
    OP_MAYOR = 292,                /* OP_MAYOR  */
    OP_MAYORIGUAL = 293,           /* OP_MAYORIGUAL  */
    OP_COMP_IGUAL = 294,           /* OP_COMP_IGUAL  */
    OP_NEGACION = 295,             /* OP_NEGACION  */
    OP_DISTINTO = 296,             /* OP_DISTINTO  */
    COMA = 297,                    /* COMA  */
    PUNTOYCOMA = 298,              /* PUNTOYCOMA  */
    GUIONBAJO = 299,               /* GUIONBAJO  */
    PUNTO = 300,                   /* PUNTO  */
    COMENTARIO = 301               /* COMENTARIO  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 52 "sintactico.y"

  int ival;
  float fval;
  char *str;
  char car;
  void* vd;

#line 118 "sintactico.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTACTICO_TAB_H_INCLUDED  */
