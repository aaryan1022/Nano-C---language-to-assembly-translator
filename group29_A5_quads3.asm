type-specifier
type-specifier
parameter-declaration
parameter-list
type-specifier
pointer
parameter-declaration
parameter-list
direct-declarator
direct-declarator
declarator
init-declarator
declaration
external-declaration
translation-unit
type-specifier
type-specifier
parameter-declaration
parameter-list
type-specifier
pointer
parameter-declaration
parameter-list
direct-declarator
direct-declarator
declarator
compound-statement
function-definition
external-declaration
translation-unit
type-specifier
direct-declarator
direct-declarator
declarator
type-specifier
++++++++++++++a++++++++++++
direct-declarator
declarator
+++++++++++++++++++1++++++++++++++++++++++
primary-expression: integer_constant
postfix-expression
unary-expression
multiplicative-expression
additive-expression
relational-expression
equality-expression
logical-AND-expression
logical-OR-expression
conditional-expression
assignment-expression
initializer
init-declarator
declaration
block-item
block-item-list

 primary-expression: 
 a 
postfix-expression
unary-expression

 primary-expression: 
 a 
postfix-expression
unary-expression
multiplicative-expression
additive-expression
+++++++++++++++++++1++++++++++++++++++++++
primary-expression: integer_constant
postfix-expression
unary-expression
multiplicative-expression
additive-expression
relational-expression
equality-expression
logical-AND-expression
logical-OR-expression
conditional-expression
assignment-expression
reduction----------------
assignment-expression
 ---------
assignment-expression
expression
expression-statement
statement
block-item
block-item-list
type-specifier
++++++++++++++b++++++++++++
direct-declarator
declarator
+++++++++++++++++++1++++++++++++++++++++++
primary-expression: integer_constant
postfix-expression
unary-expression
multiplicative-expression
additive-expression

 primary-expression: 
 a 
postfix-expression
unary-expression
multiplicative-expression
additive-expression
relational-expression
equality-expression
logical-AND-expression
logical-OR-expression
conditional-expression
assignment-expression
initializer
init-declarator
declaration
block-item
block-item-list
type-specifier
++++++++++++++c++++++++++++
direct-declarator
declarator
+++++++++++++++++++1++++++++++++++++++++++
primary-expression: integer_constant
postfix-expression
unary-expression
multiplicative-expression

 primary-expression: 
 b 
postfix-expression
unary-expression
multiplicative-expression
additive-expression
relational-expression
equality-expression
logical-AND-expression
logical-OR-expression
conditional-expression
assignment-expression
initializer
init-declarator
declaration
block-item
block-item-list

 primary-expression: 
 c 
postfix-expression
unary-expression

 primary-expression: 
 c 
postfix-expression
unary-expression
multiplicative-expression
+++++++++++++++++++2++++++++++++++++++++++
primary-expression: integer_constant
postfix-expression
unary-expression
multiplicative-expression
additive-expression
+++++++++++++++++++10++++++++++++++++++++++
primary-expression: integer_constant
postfix-expression
unary-expression
multiplicative-expression
additive-expression
relational-expression
equality-expression
logical-AND-expression
logical-OR-expression
conditional-expression
assignment-expression
reduction----------------
assignment-expression
 ---------
assignment-expression
expression
expression-statement
statement
block-item
block-item-list
type-specifier
pointer
++++++++++++++d++++++++++++
direct-declarator
declarator
init-declarator
declaration
block-item
block-item-list

 primary-expression: 
 d 
postfix-expression
unary-expression
unary-expression

 primary-expression: 
 c 
postfix-expression
unary-expression
multiplicative-expression

 primary-expression: 
 c 
postfix-expression
unary-expression
multiplicative-expression

 primary-expression: 
 a 
postfix-expression
unary-expression
multiplicative-expression:multiplicative-expression
additive-expression
relational-expression
equality-expression
logical-AND-expression
logical-OR-expression
conditional-expression
assignment-expression
reduction----------------
assignment-expression
 ---------
assignment-expression
expression
expression-statement
statement
block-item
block-item-list
compound-statement
function-definition
external-declaration
translation-unit

 Name 	 Type 	 Initial Value 	 Size 	 Offset 	 Nested Table 
func 	 func 	0 	 	 0 	 	 0 
main 	 func 	0 	 	 0 	 	 0 
a 	 int 	2 	 	 4 	 	 8 
t00 	 temp 	1 	 	 4 	 	 12 
t01 	 temp 	1 	 	 4 	 	 16 
t02 	 (null) 	2 	 	 4 	 	 20 
b 	 int 	-1 	 	 4 	 	 24 
t03 	 temp 	1 	 	 4 	 	 28 
t04 	 (null) 	-1 	 	 4 	 	 32 
c 	 int 	8 	 	 4 	 	 36 
t05 	 temp 	1 	 	 4 	 	 40 
t06 	 (null) 	-1 	 	 4 	 	 44 
t07 	 temp 	2 	 	 4 	 	 48 
t08 	 (null) 	-2 	 	 4 	 	 52 
t09 	 temp 	10 	 	 4 	 	 56 
t10 	 (null) 	8 	 	 4 	 	 60 
d 	 int 	0 	 	 0 	 	 0 
t11 	 (null) 	0 	 	 0 	 	 0 
t12 	 (null) 	64 	 	 4 	 	 72 
t13 	 (null) 	0 	 	 0 	 	 0 


 Three Address Code 

t00 = 1 
a = t00 
t01 = 1 
t02 = a + t01
a = t02 
t03 = 1 
t04 = t03 - a
b = t04 
t05 = 1 
t06 = t05 / b
c = t06 
t07 = 2 
t08 = c * t07
t09 = 10 
t10 = t08 + t09
c = t10 
t11 = *d 
t12 = c * c
t11 = t13 


 Machine Code: 

main:
	push ebp
	mov ebp, esp
	sub esp, 80 	
	mov eax, [1]
	mov [t00], eax
	mov eax, [1]
	add eax, [a]
	mov [t02], eax
	mov eax, [1]
	sub eax, [t03]
	mov [t04], eax
	mov eax, [1]
	idiv eax, [t05]
	mov [t06], eax
	mov eax, [2]
	imul eax, [c]
	mov eax, [10]
	add eax, [t08]
	mov [t10], eax
	mov eax, [d] ; dereference eax
	imul eax, [c]
	imod eax, [t12]
	mov [t13], eax
	mov esp, ebp
	pop ebp
	ret
	