%{
#include <string.h>
#include <stdio.h>
extern char* yytext;

extern int yylex();


void yyerror(char *s) {
    printf("Error: %s on '%s'\n",s,yytext);
}
%}


%token KEYWRD_VOID KEYWRD_INT KEYWRD_CHAR KEYWRD_IF KEYWRD_ELSE KEYWRD_FOR KEYWRD_RETURN

%token INT_CONST STRING_LITERAL CHAR_CONST ID

%token LT_EQUAL GT_EQUAL EQUAL NOT_EQUAL LOGIC_AND LOGIC_OR ARW_PTR

%token OP_PARENTHESIS CL_PARENTHESIS OP_SQUARE_BRACKET CL_SQUARE_BRACKET OP_FLOWER_BRACKET CL_FLOWER_BRACKET PLUS MINUS STAR MOD NEGATION SLASH DOT COMMA COLON

%token QUES ASIGN SEMICOLON ONE_AND LESS_THAN GREATER_THAN HASH




%%

translation_unit: external_declaration {printf("translation-unit\n");}
                | translation_unit external_declaration {printf("translation-unit\n");}
                ;

external_declaration: declaration {printf("external-declaration\n");}
                    | function_definition {printf("external-declaration\n");}
                    ;

function_definition: type_specifier declarator compound_statement {printf("function-definition\n");}
                    ;

statement: compound_statement {printf("statement\n");}
        | expression_statement {printf("statement\n");}
        | selection_statement {printf("statement\n");}
        | iteration_statement {printf("statement\n");}
        | jump_statement {printf("statement\n");}
        ;

compound_statement: OP_FLOWER_BRACKET block_item_list_opt CL_FLOWER_BRACKET {printf("compound-statement\n");}
                ;

block_item_list_opt: block_item_list
                    |
                    ;

block_item_list: block_item {printf("block-item-list\n");}
                | block_item_list block_item {printf("block-item-list\n");}
                ;

block_item: declaration {printf("block-item\n");}
            | statement {printf("block-item\n");}
            ;

expression_statement: expression_opt SEMICOLON {printf("expression-statement\n");}
                  ;

expression_opt: expression
                | 
                ;

selection_statement: KEYWRD_IF OP_PARENTHESIS expression CL_PARENTHESIS statement {printf("selection-statement\n");}
                 | KEYWRD_IF OP_PARENTHESIS expression CL_PARENTHESIS statement KEYWRD_ELSE statement {printf("selection-statement\n");}
                 ;

iteration_statement: KEYWRD_FOR OP_PARENTHESIS expression_opt SEMICOLON expression_opt SEMICOLON expression_opt CL_PARENTHESIS statement {printf("iteration-statement\n");}
                 ;

jump_statement: KEYWRD_RETURN expression_opt SEMICOLON {printf("jump-statement\n");}
             ;

declaration: type_specifier init_declarator SEMICOLON {printf("declaration\n");}
          ;

init_declarator: declarator {printf("init-declarator\n");}
              | declarator ASIGN initializer {printf("init-declarator\n");}
              ;

type_specifier: KEYWRD_VOID {printf("type-specifier\n");}
             | KEYWRD_CHAR {printf("type-specifier\n");}
             | KEYWRD_INT {printf("type-specifier\n");}
             ;

declarator: pointer_opt direct_declarator {printf("declarator\n");}
         ;

pointer_opt: pointer
            |
            ;

pointer: STAR {printf("pointer\n");}
        ;

direct_declarator: ID {printf("direct-declarator\n");}
                | ID OP_SQUARE_BRACKET INT_CONST CL_SQUARE_BRACKET {printf("direct-declarator\n");}
                | ID OP_PARENTHESIS parameter_list_opt CL_PARENTHESIS {printf("direct-declarator\n");}
                ;

parameter_list_opt: parameter_list
                    |
                    ;

parameter_list: parameter_declaration {printf("parameter-list\n");}
             | parameter_list COMMA parameter_declaration {printf("parameter-list\n");}
             ;

parameter_declaration: type_specifier pointer_opt identifier_opt {printf("parameter-declaration\n");}
                   ;

identifier_opt: ID
            |
            ;

initializer: assignment_expression {printf("initializer\n");}
          ;

primary_expression: ID {printf("primary-expression\n");}
    | constant {printf("primary-expression\n");}
    | STRING_LITERAL {printf("primary-expression\n");}
    | OP_PARENTHESIS expression CL_PARENTHESIS {printf("primary-expression\n");}
    ;

constant: INT_CONST
    | CHAR_CONST;

postfix_expression: primary_expression {printf("postfix-expression\n");}
    | postfix_expression OP_SQUARE_BRACKET expression CL_SQUARE_BRACKET {printf("postfix-expression\n");}
    | postfix_expression OP_PARENTHESIS argument_expression_list_opt CL_PARENTHESIS {printf("postfix-expression\n");}
    | postfix_expression ARW_PTR ID {printf("postfix-expression\n");}
    ;

argument_expression_list_opt: argument_expression_list
    | ;

argument_expression_list: assignment_expression {printf("argument-expression-list\n");}
                        | argument_expression_list COMMA assignment_expression {printf("argument-expression-list\n");}
                        ;

unary_expression: postfix_expression {printf("unary-expression\n");}
                | unary_operator unary_expression {printf("unary-expression\n");}
                ;

unary_operator: ONE_AND {printf("unary-operator\n");}
            | STAR {printf("unary-operator\n");}
            | PLUS {printf("unary-operator\n");}
            | MINUS {printf("unary-operator\n");}
            | NEGATION {printf("unary-operator\n");}
            ;

multiplicative_expression: unary_expression {printf("multiplicative-expression\n");}
                      | multiplicative_expression STAR unary_expression {printf("multiplicative-expression\n");}
                      | multiplicative_expression SLASH unary_expression {printf("multiplicative-expression\n");}
                      | multiplicative_expression MOD unary_expression {printf("multiplicative-expression\n");}
                      ;

additive_expression: multiplicative_expression {printf("additive-expression\n");}
                | additive_expression PLUS multiplicative_expression {printf("additive-expression\n");}
                | additive_expression MINUS multiplicative_expression {printf("additive-expression\n");}
                ;

relational_expression: additive_expression {printf("relational-expression\n");}
                  | relational_expression LESS_THAN additive_expression {printf("relational-expression\n");}
                  | relational_expression GREATER_THAN additive_expression {printf("relational-expression\n");}
                  | relational_expression LT_EQUAL additive_expression {printf("relational-expression\n");}
                  | relational_expression GT_EQUAL additive_expression {printf("relational-expression\n");}
                  ;

equality_expression: relational_expression {printf("equality-expression\n");}
                | equality_expression EQUAL relational_expression {printf("equality-expression\n");}
                | equality_expression NEGATION relational_expression {printf("equality-expression\n");}
                ;

logical_AND_expression: equality_expression {printf("logical-AND-expression\n");}
                   | logical_AND_expression LOGIC_AND equality_expression {printf("logical-AND-expression\n");}
                   ;

logical_OR_expression: logical_AND_expression {printf("logical-OR-expression\n");}
                    | logical_OR_expression LOGIC_OR logical_AND_expression {printf("logical-OR-expression\n");}
                    ;

conditional_expression: logical_OR_expression QUES expression COLON conditional_expression {printf("conditional-expression\n");}
                        | logical_OR_expression {printf("conditional-expression\n");}
                        ;

assignment_expression: unary_expression ASIGN assignment_expression {printf("assignment-expression\n");}
                    | conditional_expression {printf("assignment-expression\n");}
                    ;

expression: assignment_expression {printf("expression\n");}
            ;

%%


