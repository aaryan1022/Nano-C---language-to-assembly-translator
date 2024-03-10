%{
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "29_A5.h"

quad *qArray[NSYMS]; 
int quadPtr = 0;    

extern int yylex();
extern char* yytext;
extern symboltable *symlook(char *s);
void yyerror(char *s);
void printrule(char *s);
%}

%union { 
	int n;
    char c;
    char* str;
	symboltable *symp;
}

%token KEYWRD_VOID KEYWRD_INT KEYWRD_CHAR KEYWRD_IF KEYWRD_ELSE KEYWRD_FOR KEYWRD_RETURN

%token <n> INT_CONST 
%token <str> STRING_LITERAL 
%token <c> CHAR_CONST
%token <str> ID

%token LT_EQUAL GT_EQUAL EQUAL NOT_EQUAL LOGIC_AND LOGIC_OR ARW_PTR

%type <symp> primary_expression
%type <symp> expression
%type <str> type_specifier
%type <symp> multiplicative_expression
%type <symp> additive_expression
%type <symp> postfix_expression
%type <symp> unary_expression
%type <symp> relational_expression
%type <symp> equality_expression
%type <symp> logical_AND_expression
%type <symp> logical_OR_expression
%type <symp> conditional_expression
%type <symp> assignment_expression
%type <symp> direct_declarator
%type <symp> parameter_declaration
%type <symp> parameter_list
%type <symp> init_declarator
%type <symp> declarator
%type <symp> initializer
%type <symp> declaration


%start translation_unit

%%

primary_expression: ID 
          {
          printf("\n primary-expression: \n %s \n", $1); 
          $$ = symlook($1);
          }
    | CHAR_CONST {
        printf("primary-expression: character_constant\n");
        $$ = gentemp();
        $$->initial_value.c = $1;
        $$->type = strdup("temp");
        char tempStr[2];    
        tempStr[0] = $1;    
        tempStr[1] = '\0';   
        qArray[quadPtr++] = new_quad_unary(COPY, $$->name, tempStr); 
      }
    | INT_CONST {
        printf("+++++++++++++++++++%d++++++++++++++++++++++\n", $1);
        printf("primary-expression: integer_constant\n");
        $$ = gentemp();
        $$->initial_value.n = $1;
        $$->type = strdup("temp");
        char tempStr[10]; 
        sprintf(tempStr, "%d", $1);
        qArray[quadPtr++] = new_quad_unary(COPY, $$->name, tempStr); 
        }
    | STRING_LITERAL {
        printf("primary-expression: string_literal\n");
        $$ = gentemp();
        $$->initial_value.str = $1;
        $$->type = strdup("temp");
        qArray[quadPtr++] = new_quad_unary(COPY, $$->name, $1);
    }
    | '(' expression ')' {
          printf("primary-expression: ( expression )\n");
          $$ = $2; 
      }
    ;

postfix_expression: primary_expression {
        printf("postfix-expression\n");
        $$=$1;
      }
    | postfix_expression '[' expression ']' {
      printf("postfix-expression\n");
      }
    | postfix_expression '(' argument_expression_list_opt ')' {printf("postfix-expression\n");}
    | postfix_expression ARW_PTR ID {printf("postfix-expression\n");}
    ;

argument_expression_list_opt: /*empty*/
                            | argument_expression_list
;

argument_expression_list: assignment_expression {printf("argument-expression-list\n");}
                        | argument_expression_list ',' assignment_expression {printf("argument-expression-list\n");}
                        ;

unary_expression: postfix_expression {
        $$=$1;
        printf("unary-expression\n");
  }
    | '&' unary_expression {
        $$=gentemp(); qArray[quadPtr++] = new_quad_unary(AND, $$->name, $2->name); 
        printf("unary-expression\n");}
    | '*' unary_expression {
        $$=gentemp(); qArray[quadPtr++] = new_quad_unary(STAR, $$->name, $2->name); 
        printf("unary-expression\n");
    }
    | '+' unary_expression {
        $$=gentemp(); qArray[quadPtr++] = new_quad_unary(UNARYPLUS, $$->name, $2->name); 
        printf("unary-expression\n");
    }
    | '-' unary_expression {
        $$=gentemp(); qArray[quadPtr++] = new_quad_unary(UNARYMINUS, $$->name, $2->name); 
        printf("unary-expression\n");
    }
    | '!' unary_expression {
        $$=gentemp(); qArray[quadPtr++] = new_quad_unary(EXCLAMATION, $$->name, $2->name); 
        printf("unary-expression\n");
    }
    ;

/* unary_operator: '&' {printf("unary-operator\n");}
            | '*' {printf("unary-operator\n");}
            | '+' {printf("unary-operator\n");}
            | '-' {printf("unary-operator\n");}
            | '!' {printf("unary-operator\n");}
            ; */

multiplicative_expression: unary_expression {$$ = $1; printf("multiplicative-expression\n");}
                      | multiplicative_expression '*' unary_expression {
                        $$ = gentemp(); 
                        $$ -> initial_value.n = $1->initial_value.n * $3->initial_value.n;
                        qArray[quadPtr++] = new_quad_binary(MULT, $$->name, $1->name, $3->name);
                        printf("multiplicative-expression\n");}

                      | multiplicative_expression '/' unary_expression {
                        $$ = gentemp();
                        $$ -> initial_value.n = $1->initial_value.n / $3->initial_value.n;
                        qArray[quadPtr++] = new_quad_binary(DIV, $$->name, $1->name, $3->name);
                        printf("multiplicative-expression\n");}

                      | multiplicative_expression '%' unary_expression {
                        $$ = gentemp();
                        $$ -> initial_value.n = $1->initial_value.n % $3->initial_value.n;
                        qArray[quadPtr++] = new_quad_binary(PERCENT, $$->name, $1->name, $3->name);
                        printf("multiplicative-expression:");
                        printf("multiplicative-expression\n");}
                      ;

additive_expression: multiplicative_expression {$$ = $1; printf("additive-expression\n");}
                | additive_expression '+' multiplicative_expression {
                  $$ = gentemp();
                  $$ -> initial_value.n = $1->initial_value.n + $3->initial_value.n;
                  qArray[quadPtr++] = new_quad_binary(PLUS, $$->name, $1->name, $3->name);
                  printf("additive-expression\n");}

                | additive_expression '-' multiplicative_expression {
                  $$ = gentemp();
                  $$ -> initial_value.n = $1->initial_value.n - $3->initial_value.n;
                  qArray[quadPtr++] = new_quad_binary(MINUS, $$->name, $1->name, $3->name);
                  printf("additive-expression\n");}
                ;

relational_expression: additive_expression {printf("relational-expression\n");}
                  | relational_expression '<' additive_expression {printf("relational-expression\n");}
                  | relational_expression '>' additive_expression {printf("relational-expression\n");}
                  | relational_expression LT_EQUAL additive_expression {printf("relational-expression\n");}
                  | relational_expression GT_EQUAL additive_expression {printf("relational-expression\n");}
                  ;

equality_expression: relational_expression {printf("equality-expression\n");}
                | equality_expression EQUAL relational_expression {printf("equality-expression\n");}
              | equality_expression NOT_EQUAL relational_expression {printf("equality-expression\n");} //here 
                ;

logical_AND_expression: equality_expression {$$=$1; printf("logical-AND-expression\n");}
                   | logical_AND_expression LOGIC_AND equality_expression 
                   {$$ = $1; printf("logical-AND-expression\n");}
                   ;

logical_OR_expression: logical_AND_expression {$$ = $1; printf("logical-OR-expression\n");}
                    | logical_OR_expression LOGIC_OR logical_AND_expression 
                    {$$ = $1; printf("logical-OR-expression\n");}
                    ;

conditional_expression: logical_OR_expression '?' expression ':' conditional_expression 
                      {$$ = $1; printf("conditional-expression\n");}
                        | logical_OR_expression {$$ = $1; printf("conditional-expression\n");}
                        ;

assignment_expression: unary_expression '=' assignment_expression {
                          $$->initial_value.n = $3->initial_value.n; 
                          printf("reduction----------------\n");
	                        qArray[quadPtr++] = new_quad_unary(COPY, $$->name, $3->name);
                          printf("assignment-expression\n ---------\n");printf("assignment-expression\n");}

                    | conditional_expression {$$=$1; printf("assignment-expression\n");}
                    ;

expression: assignment_expression {$$=$1; printf("expression\n");}
            ;



////


declaration: type_specifier init_declarator ';' 
          {
            $$ = $2; 
            $$->type = $1;
            printf("declaration\n");}
          ;

init_declarator: declarator {$$ = $1; printf("init-declarator\n");}
              | declarator '=' initializer 
              { if($3->initial_value.n){
                  $1->initial_value.n = $3->initial_value.n;
                  }
                if($3->initial_value.c){
                  $1->initial_value.c = $3->initial_value.c;
                }
                if($3->initial_value.str){
                  $1->initial_value.str = $3->initial_value.str;
                }
                $1->type = $3->type;
                $$ = $1; 
	              qArray[quadPtr++] = new_quad_unary(COPY, $$->name, $3->name);
                printf("init-declarator\n");}
              ;

type_specifier: KEYWRD_VOID {        
            printf("type-specifier\n");
            $$ = "void";}

             | KEYWRD_CHAR {
              $$ = "char";
              printf("type-specifier\n");}

             | KEYWRD_INT {
              $$ = "int";
              printf("type-specifier\n");}
             ;

declarator: pointer_opt direct_declarator {
          $$ = $2;
          $$->type = strdup("func");
          printf("declarator\n");}
         ;

direct_declarator: ID {
            $$ = symlook($1);
            $$->type = strdup("Local");
            printf("++++++++++++++%s++++++++++++\n", $$->name);
            printf("direct-declarator\n");}
                | ID '[' INT_CONST ']' {
                  printf("direct-declarator\n");}

                | ID '(' parameter_list_opt ')' {
                  printf("direct-declarator\n");
                  $$ = symlook($1);
                  $$->type = strdup("func");
                  printf("direct-declarator\n");}
                ;

parameter_list_opt: parameter_list
                    |
                    ;

pointer: '*' {printf("pointer\n");}
        ;


parameter_list: parameter_declaration {printf("parameter-list\n");}
             | parameter_list ',' parameter_declaration {printf("parameter-list\n");}
             ;

parameter_declaration: type_specifier pointer_opt identifier_opt {printf("parameter-declaration\n");}
                   ;

identifier_opt: ID
            |
            ;


pointer_opt: pointer
            |
            ;

initializer: assignment_expression {$$ = $1; printf("initializer\n");}
          ;


////


statement: compound_statement {printf("statement\n");}
        | expression_statement {printf("statement\n");}
        | selection_statement {printf("statement\n");}
        | iteration_statement {printf("statement\n");}
        | jump_statement {printf("statement\n");}
        ;

compound_statement: '{' block_item_list_opt'}' {printf("compound-statement\n");}
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

expression_statement: expression_opt ';' {printf("expression-statement\n");}
                  ;

expression_opt: expression
                | 
                ;

selection_statement: KEYWRD_IF '(' expression ')' statement {printf("selection-statement\n");}
                 | KEYWRD_IF '(' expression ')' statement KEYWRD_ELSE statement {printf("selection-statement\n");}
                 ;

iteration_statement: KEYWRD_FOR '(' expression_opt ';' expression_opt ';' expression_opt ')' statement {printf("iteration-statement\n");}
                 ;

jump_statement: KEYWRD_RETURN expression_opt ';' {printf("jump-statement\n");}
             ;

////


translation_unit: external_declaration {printf("translation-unit\n");}
                | translation_unit external_declaration {printf("translation-unit\n");}
                ;

external_declaration: declaration {printf("external-declaration\n");}
                    | function_definition {printf("external-declaration\n");}
                    ;

function_definition: type_specifier declarator compound_statement {printf("function-definition\n");}
                    ;


%%


void yyerror(char *s) {
    printf("Error: %s on '%s'\n",s,yytext);
}



void print_array() {
    FILE *fp = fopen("output.out", "w");
    if (fp == NULL) {
        perror("Error opening file");
        return;
    }
    for (int i = 0; i < quadPtr; i = i + 1)
		print_quad(qArray[i]);
    
    fclose(fp);
}

int main(){
    yyparse();
    print_sym();
    printf("\n\n Three Address Code \n\n");
    print_array();
    printf("\n\n Machine Code: \n\n");
    printMachineCode();
}