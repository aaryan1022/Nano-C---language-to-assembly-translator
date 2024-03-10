%{
    #include "29_A5.h"
    #include "29_A5.tab.h"
%}

MULTICOMMENT "/*"([^*]|(\*+[^*/]))*\*+"/"
SINGLECOMMENT "//"[^\n]*

WS      [ \t\n] 

CHAR "char"
ELSE "else"
FOR "for"
IF "if"
INT "int"
RETURN "return"
VOID "void"

IDENTIFIER-NONDIGIT [A-Za-z_]
DIGIT [0-9]
IDENTIFIER {IDENTIFIER-NONDIGIT}({IDENTIFIER-NONDIGIT}|{DIGIT})*



SIGN [-+]
NONZERO-DIGIT [1-9]
INTEGER-CONSTANT [0]|{NONZERO-DIGIT}{DIGIT}*
C-CHAR ([^\'\"\\\n]|[\?\\\a\b\t\f\n\r\v])
C-CHAR-SEQUENCE \'{C-CHAR}+\'
ESCAPE-SEQUENCE   ["\'"|"\''"|"\?"|"\\"|"\a"|"\b"|"\f"|"\n"|"\r"|"\t"|"\v"]
CONSTANT  {INTEGER-CONSTANT}|{C-CHAR-SEQUENCE}

S_CHAR ([^\'\"\\\n]|[\?\\\a\b\t\f\n\r\v])
STRING_LITERAL \"{S_CHAR}*\"

PUNCTUATOR [\[\](){}&*+\-/%!?<>=:;,]



%%

{SINGLECOMMENT} ;
{MULTICOMMENT}  ;
{WS}        ;

{INT} {
    return KEYWRD_INT;
    }
{CHAR}  {
    return KEYWRD_CHAR;
    }
{ELSE} {
    return KEYWRD_ELSE;
    }
{FOR}   {
    return KEYWRD_FOR;
    }
{IF}    {
    return KEYWRD_IF;
    }
{RETURN} {
    return KEYWRD_RETURN;
    }
{VOID}  {
    return KEYWRD_VOID;
    }

{PUNCTUATOR} {return yytext[0];} //Return Punctuator single character
"<=" {return LT_EQUAL;}
">=" {return GT_EQUAL;}
"!=" {return NOT_EQUAL;}
"==" {return EQUAL;}
"&&" {return LOGIC_AND;}
"||" {return LOGIC_OR;}
"->" {return ARW_PTR;}

{IDENTIFIER}   {
          yylval.str = strdup(yytext);
          return ID;
        }



{INTEGER-CONSTANT} {
            yylval.n = atoi(yytext);
            return INT_CONST;
          }

{C-CHAR-SEQUENCE} {
      yylval.c = yytext[0];
      return CHAR_CONST;
    }

{STRING_LITERAL} { 
          yylval.str = yytext;
          return STRING_LITERAL; 
        }







%%

int yywrap() {
    return 1;
}

