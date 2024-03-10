/* A Bison parser, made by GNU Bison 3.8.2.  */

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

#ifndef YY_YY_29_A4_TAB_H_INCLUDED
# define YY_YY_29_A4_TAB_H_INCLUDED
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
    KEYWRD_VOID = 258,             /* KEYWRD_VOID  */
    KEYWRD_INT = 259,              /* KEYWRD_INT  */
    KEYWRD_CHAR = 260,             /* KEYWRD_CHAR  */
    KEYWRD_IF = 261,               /* KEYWRD_IF  */
    KEYWRD_ELSE = 262,             /* KEYWRD_ELSE  */
    KEYWRD_FOR = 263,              /* KEYWRD_FOR  */
    KEYWRD_RETURN = 264,           /* KEYWRD_RETURN  */
    INT_CONST = 265,               /* INT_CONST  */
    STRING_LITERAL = 266,          /* STRING_LITERAL  */
    CHAR_CONST = 267,              /* CHAR_CONST  */
    ID = 268,                      /* ID  */
    LT_EQUAL = 269,                /* LT_EQUAL  */
    GT_EQUAL = 270,                /* GT_EQUAL  */
    EQUAL = 271,                   /* EQUAL  */
    NOT_EQUAL = 272,               /* NOT_EQUAL  */
    LOGIC_AND = 273,               /* LOGIC_AND  */
    LOGIC_OR = 274,                /* LOGIC_OR  */
    ARW_PTR = 275                  /* ARW_PTR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "29_A4.y"
 
	int n;
    char c;
    char* str;
	symboltable *symp;

#line 91 "29_A4.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_29_A4_TAB_H_INCLUDED  */
