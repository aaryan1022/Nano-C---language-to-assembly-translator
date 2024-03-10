#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "29_A5.h"

symboltable symtab[NSYMS]; // -> Definition

extern void yyerror(char *s);

symboltable *symlook(char *s)
{
  symboltable *sp;
  for (sp = symtab; sp < &symtab[NSYMS]; sp++)
  {
    /* is it already here? */
    if (sp->name &&
        !strcmp(sp->name, s))
      return sp;
    if (!sp->name)
    {
      /* is it free */
      sp->name = strdup(s);
      return sp;
    }
    /* otherwise continue to next */
  }
  yyerror("Too many symbols");
  exit(1); /* cannot continue */
} /* symlook */

/* Generate temporary variable */
symboltable *gentemp()
{
  static int c = 0; /* Temp counter */
  char str[10];     /* Temp name */
  /* Generate temp name */
  sprintf(str, "t%02d", c++);
  /* Add temporary to symtab */
  return symlook(str);
}


#define MAX_ASSEMBLY_LINES 1024

typedef struct AssemblyLine {
    char code[100];  
} AssemblyLine;

AssemblyLine assemblyLines[MAX_ASSEMBLY_LINES];
int assemblyLineCount = 1;

/* Output 3-address codes */
void emit_binary(
    char *s1, // Result
    char *s2, // Arg 1
    char c,   // Operator
    char *s3) // Arg 2
{
  /* Assignment with Binary operator */
  printf("\t%s = %s %c %s\n", s1, s2, c, s3);
}

void emit_unary(
    char *s1, // Result
    char *s2, // Arg 1
    char c)   // Operator
{
  /* Assignment with Unary operator */
  printf("\t%s = %c %s\n", s1, c, s2);
}

void emit_copy(
    char *s1, // Result
    char *s2) // Arg 1
{
  /* Simple Assignment */
  printf("\t%s = %s\n", s1, s2);
}

quad *new_quad_binary(opcodeType op1, char *s1, char *s2, char *s3)
{
  quad *q = (quad *)malloc(sizeof(quad));
  q->op = op1;
  q->result = strdup(s1);
  q->arg1 = strdup(s2);
  q->arg2 = strdup(s3);
  return q;
}

quad *new_quad_unary(opcodeType op1, char *s1, char *s2)
{
  quad *q = (quad *)malloc(sizeof(quad));
  q->op = op1;
  q->result = strdup(s1);
  q->arg1 = strdup(s2);
  q->arg2 = 0;
  return q;
}

void print_quad(quad *q)
{

  convertTACtoAssembly(q);

  if ((q->op <= DIV) && (q->op >= PLUS))
  { // Binary Op
    printf("%s = %s ", q->result, q->arg1);
    switch (q->op)
    {
    case PLUS:
      printf("+");
      break;
    case MINUS:
      printf("-");
      break;
    case MULT:
      printf("*");
      break;
    case DIV:
      printf("/");
      break;
    }
    printf(" %s\n", q->arg2);
  }
  else
  {
    switch (q->op)
    {
    case UNARYMINUS:
      printf("%s = - %s\n", q->result, q->arg1);
      break;
    case AND:
      printf("%s = &%s \n", q->result, q->arg1);
      break;
    case COPY:
      printf("%s = %s \n", q->result, q->arg1);
      break;
    case STAR:
      printf("%s = *%s \n", q->result, q->arg1);
      break;
    case EXCLAMATION:
      printf("%s = !%s \n", q->result, q->arg1);
      break;
    }
  }
}

void print_sym()
{
  int offset = 0;
  symboltable *sp;

  printf("\n Name \t Type \t Initial Value \t Size \t Offset \t Nested Table \n");
  for (sp = symtab; sp < &symtab[NSYMS]; sp++)
  {
    if (sp->name)
    {
      printf("%s \t %s \t", sp->name, sp->type);
      if (sp->initial_value.n)
        printf("%d \t \t %d \t \t %d \n", sp->initial_value.n, 4, offset);
      else if (sp->initial_value.c)
        printf("%d \t \t %c \t \t %d \n", sp->initial_value.c, 1, offset);
      else if (sp->initial_value.str)
        printf("%d \t \t %c \t \t %d \n", sp->initial_value.c, 4, offset);
      else
        printf("%s \t \t %s \t \t %s \n", "0", "0", "0");
      offset = offset + 4;

    
    }
    //     if (strcmp(sp->type, "func") == 1)
    //     {
    //       if (strcmp(sp->type, "int") == 0)
    //         offset = offset + 4;
    //       if (strcmp(sp->type, "char") == 0)
    //         offset = offset + 1;
    //     }
    //   }
  }
}

void handleMemoryBinding(symboltable *symTab) {
    int offset = 0; 
    for (int i = 0; i < NSYMS; i++) {
        if (symTab[i].name != NULL) {
           
            symTab[i].offset = offset;
            offset += 4; 
        }
    }
}

void convertTACtoAssembly(quad *q) {
    char assembly[100]; 

    
    if (q->op == PLUS) {
        sprintf(assembly, "add eax, [%s]", q->arg1);
        strcpy(assemblyLines[assemblyLineCount++].code, assembly);
    }
    
    if (q->op == MINUS) {
        sprintf(assembly, "sub eax, [%s]", q->arg1);
        strcpy(assemblyLines[assemblyLineCount++].code, assembly);
    }

    if (q->op == MULT) {
        sprintf(assembly, "imul eax, [%s]", q->arg1);
        strcpy(assemblyLines[assemblyLineCount++].code, assembly);
    }

    if (q->op == DIV) {
        sprintf(assembly, "idiv eax, [%s]", q->arg1);
        strcpy(assemblyLines[assemblyLineCount++].code, assembly);
    }

    if (q->op == UNARYMINUS) {
        sprintf(assembly, "neg eax, [%s]", q->arg1);
        strcpy(assemblyLines[assemblyLineCount++].code, assembly);
    }

    if (q->op == COPY) {
      if(q->arg1[0] == 't')
      {
        sprintf(assembly, "mov [%s], eax", q->arg1);
      }
      else
      {
        sprintf(assembly, "mov eax, [%s]", q->arg1);
      }
        strcpy(assemblyLines[assemblyLineCount++].code, assembly);
    }

    if (q->op == AND) {
        sprintf(assembly, "and eax, [%s]", q->arg1);
        strcpy(assemblyLines[assemblyLineCount++].code, assembly);
    }

    if (q->op == STAR) {
        sprintf(assembly, "mov eax, [%s]", q->arg1);
        strcpy(assemblyLines[assemblyLineCount++].code, assembly);
    }

    if (q->op == EXCLAMATION) {
        sprintf(assembly, "not eax, [%s]", q->arg1);
        strcpy(assemblyLines[assemblyLineCount++].code, assembly);
    }

    if (q->op == PERCENT) {
        sprintf(assembly, "imod eax, [%s]", q->arg1);
        strcpy(assemblyLines[assemblyLineCount++].code, assembly);
    }

}

void implementIOFunctions() {
    
    printf(
        "printInt:\n"
        "    mov eax, 4\n"          
        "    mov ebx, 1\n"          
        "    mov ecx, [esp+4]\n"    
        "    mov edx, 4\n"          
        "    int 0x80\n"            
        "    ret\n"
    );

    
    printf(
        "readInt:\n"
        "    mov eax, 3\n"          
        "    mov ebx, 0\n"          
        "    mov ecx, [esp+4]\n"    
        "    mov edx, 4\n"          
        "    int 0x80\n"            
        "    ret\n"
    );

    
    printf(
        "printStr:\n"
        "    mov eax, 4\n"          
        "    mov ebx, 1\n"          
        "    mov ecx, [esp+4]\n"    
        "    mov edx, [esp+8]\n"    
        "    int 0x80\n"            
        "    ret\n"
    );

    
    printf(
        "readStr:\n"
        "    mov eax, 3\n"          
        "    mov ebx, 0\n"          
        "    mov ecx, [esp+4]\n"    
        "    mov edx, [esp+8]\n"    
        "    int 0x80\n"            
        "    ret\n"
    );

    
    printf(
        "exit:\n"
        "    mov eax, 1\n"          
        "    mov ebx, [esp+4]\n"    
        "    int 0x80\n"            
        "    ret\n"
    );

    
}

void generateFunctionPrologue(char *functionName, int localVarsSize) {
    char prologue[100];
    sprintf(prologue, "%s:\n\tpush ebp\n\tmov ebp, esp\n\tsub esp, %d \t", functionName, localVarsSize);
    strcpy(assemblyLines[0].code, prologue);
}

void generateFunctionEpilogue() {
    strcpy(assemblyLines[assemblyLineCount++].code, "mov esp, ebp\n\tpop ebp\n\tret");
}

void printMachineCode() {
  handleMemoryBinding(symtab);
    int s = 0;
    symboltable* sp;
    for (sp = symtab; sp < &symtab[NSYMS]; sp++)
  {
    if (sp->name)
    if(sp->name!="main")
      s++;
  }
    generateFunctionPrologue("main",  s*4);
    generateFunctionEpilogue();
    for (int i = 0; i < assemblyLineCount; i++) {
        printf("%s\n\t", assemblyLines[i].code);
    }
}

