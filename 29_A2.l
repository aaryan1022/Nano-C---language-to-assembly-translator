%{

%}

KEYWORD "int"|"char"|"else"|"for"|"if"|"return"|"void"

IDENTIFIER-NONDIGIT [A-Za-z_]
DIGIT [0-9]
IDENTIFIER {IDENTIFIER-NONDIGIT}({IDENTIFIER-NONDIGIT}|{DIGIT})*



SIGN [-+]
NONZERO-DIGIT [1-9]
INTEGER-CONSTANT [0]|{SIGN}?{NONZERO-DIGIT}{DIGIT}*
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

{KEYWORD}      {
            printf("<KEYWORD, %s>", yytext);
    }

{IDENTIFIER}   {
            printf("<IDENTIFIER, %s>", yytext);
    }

{CONSTANT} {
            printf("<CONSTANT, %s>", yytext);
    }

{STRING_LITERAL}    { printf("<STRING_LITERAL, %s>\n", yytext); }

{PUNCTUATOR}   {
            printf("<PUNCTUATOR, %s>", yytext);
}

.       {
            printf("Invalid Input : %s", yytext);
            return yywrap();
}
%%

int yywrap(){
    return 1;
}

