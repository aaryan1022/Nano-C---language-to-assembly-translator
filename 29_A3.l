%{
    #include "29_A3.tab.h"
    #include <stdio.h>  
%}

KEYWORD "int"|"char"|"else"|"for"|"if"|"return"|"void"

IDENTIFIER-NONDIGIT [A-Za-z_]
DIGIT [0-9]
IDENTIFIER {IDENTIFIER-NONDIGIT}({IDENTIFIER-NONDIGIT}|{DIGIT})*



SIGN [-+]
NONZERO-DIGIT [1-9]
INTEGER-CONSTANT [0]|{NONZERO-DIGIT}{DIGIT}*
C-CHAR '([^'\\]|\\['"?\\abfnrtv])*'
C-CHAR-SEQUENCE {C-CHAR}+
ESCAPE-SEQUENCE   ["\'"|"\''"|"\?"|"\\"|"\a"|"\b"|"\f"|"\n"|"\r"|"\t"|"\v"]
CONSTANT  {INTEGER-CONSTANT}|{C-CHAR-SEQUENCE}

PUNCTUATOR [,|;|(|)|\[|\]|{|}|+|\-|*|/|<|>|=|\&|\:|?|%|!]|"<="|">="|"!="|"=="|"#"|"&&"|"||"|"->"

MULTICOMMENT "/*"([^*]|(\*+[^*/]))*\*+"/"
SINGLECOMMENT "//"[^\n]*

S_CHAR [^"\\\n]|(\\['"?\\abfnrtv])
STRING_LITERAL "\""({S_CHAR}*)?"\""


WS      [ \t\n] 

%%

"\\n"   { printf("<NEWLINE, %s>",yytext); }
{WS}+        {/*IGNORE*/}

{SINGLECOMMENT} { /* Ignore single-line comments */ }
{MULTICOMMENT}  { /* Ignore multi-line comments */ }

"int" {
    return KEYWRD_INT;
    }
"char" {
    return KEYWRD_CHAR;
    }
"else" {
    return KEYWRD_ELSE;
    }
"for"   {
    return KEYWRD_FOR;
    }
"if"    {
    return KEYWRD_IF;
    }
"return" {
    return KEYWRD_RETURN;
    }
"void"  {
    return KEYWRD_VOID;
    }

{IDENTIFIER}   {
            return ID;
    }

{INTEGER-CONSTANT} {
            return INT_CONST;
    }

{C-CHAR} {return CHAR_CONST;}

{STRING_LITERAL}    { return STRING_LITERAL; }


"," {return COMMA;}
";" {return SEMICOLON;}
"(" {return OP_PARENTHESIS;}
")" {return CL_PARENTHESIS;}
"[" {return OP_SQUARE_BRACKET;}
"]" {return CL_SQUARE_BRACKET;}
"{" {return OP_FLOWER_BRACKET;}
"}" {return CL_FLOWER_BRACKET;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return STAR;}
"/" {return SLASH;}
"<" {return LESS_THAN;}
">" {return GREATER_THAN;}
"=" {return ASIGN;}
"&" {return ONE_AND;}
":" {return COLON;}
"?" {return QUES;}
"%" {return MOD;}
"!" {return NEGATION;}
"<=" {return LT_EQUAL;}
">=" {return GT_EQUAL;}
"!=" {return NOT_EQUAL;}
"==" {return EQUAL;}
"#" {return HASH;}
"&&" {return LOGIC_AND;}
"||" {return LOGIC_OR;}
"->" {return ARW_PTR;}

.       {   yyterminate();
            return yywrap();
}
%%

int yywrap(){
    return 1;
}

