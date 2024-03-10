type-specifier
++++++++++++++d++++++++++++
direct-declarator
declarator
+++++++++++++++++++99++++++++++++++++++++++
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
external-declaration
translation-unit
type-specifier
type-specifier
parameter-declaration
parameter-list
direct-declarator
direct-declarator
declarator

 primary-expression: 
 c 
postfix-expression
unary-expression
multiplicative-expression

 primary-expression: 
 d 
postfix-expression
unary-expression
multiplicative-expression:multiplicative-expression
additive-expression
relational-expression
equality-expression
+++++++++++++++++++0++++++++++++++++++++++
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
expression

 primary-expression: 
 fun2 
postfix-expression

 primary-expression: 
 c 
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
argument-expression-list
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
expression
jump-statement
statement

 primary-expression: 
 fun 
postfix-expression

 primary-expression: 
 c 
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
argument-expression-list
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
expression
jump-statement
statement
selection-statement
statement
block-item
block-item-list
compound-statement
function-definition
external-declaration
translation-unit
type-specifier
pointer
type-specifier
parameter-declaration
parameter-list
direct-declarator
direct-declarator
declarator
type-specifier
pointer
++++++++++++++e++++++++++++
direct-declarator
declarator
+++++++++++++++++++0++++++++++++++++++++++
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
 e 
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
expression
jump-statement
statement
block-item
block-item-list
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
type-specifier
pointer
++++++++++++++ret++++++++++++
direct-declarator
declarator

 primary-expression: 
 fun 
postfix-expression

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
argument-expression-list
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
+++++++++++++++++++0++++++++++++++++++++++
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
expression
jump-statement
statement
block-item
block-item-list
compound-statement
function-definition
external-declaration
translation-unit

 Name 	 Type 	 Initial Value 	 Size 	 Offset 	 Nested Table 
d 	 int 	99 	 	 4 	 	 0 
t00 	 temp 	99 	 	 4 	 	 4 
fun 	 func 	0 	 	 0 	 	 0 
c 	 (null) 	0 	 	 0 	 	 0 
t01 	 (null) 	0 	 	 0 	 	 0 
t02 	 temp 	0 	 	 0 	 	 0 
fun2 	 func 	0 	 	 0 	 	 0 
t03 	 temp 	1 	 	 4 	 	 28 
t04 	 (null) 	1 	 	 4 	 	 32 
e 	 int 	0 	 	 0 	 	 0 
t05 	 temp 	0 	 	 0 	 	 0 
main 	 func 	0 	 	 0 	 	 0 
a 	 int 	1 	 	 4 	 	 48 
t06 	 temp 	1 	 	 4 	 	 52 
ret 	 int 	0 	 	 0 	 	 0 
t07 	 temp 	0 	 	 0 	 	 0 


 Three Address Code 

t00 = 99 
d = t00 
t02 = 0 
t03 = 1 
t04 = c + t03
t05 = 0 
e = t05 
t06 = 1 
a = t06 
ret = fun 
t07 = 0 


 Machine Code: 

main:
	push ebp
	mov ebp, esp
	sub esp, 64 	
	mov eax, [99]
	mov [t00], eax
	imod eax, [c]
	mov eax, [0]
	mov eax, [1]
	add eax, [c]
	mov eax, [0]
	mov [t05], eax
	mov eax, [1]
	mov [t06], eax
	mov eax, [fun]
	mov eax, [0]
	mov esp, ebp
	pop ebp
	ret
	