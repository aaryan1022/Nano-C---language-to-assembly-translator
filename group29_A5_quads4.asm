type-specifier
type-specifier
parameter-declaration
parameter-list
direct-declarator
direct-declarator
declarator

 primary-expression: 
 n 
postfix-expression
unary-expression
multiplicative-expression
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
 n 
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

 primary-expression: 
 fun 
postfix-expression

 primary-expression: 
 n 
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

 primary-expression: 
 n 
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
++++++++++++++sum++++++++++++
direct-declarator
declarator
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
initializer
init-declarator
declaration
block-item
block-item-list

 primary-expression: 
 sum 
postfix-expression
unary-expression

 primary-expression: 
 fun 
postfix-expression

 primary-expression: 
 sum 
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
reduction----------------
assignment-expression
 ---------
assignment-expression
expression
expression-statement
statement
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
fun 	 func 	0 	 	 0 	 	 0 
n 	 (null) 	0 	 	 0 	 	 0 
t00 	 temp 	0 	 	 0 	 	 0 
t01 	 temp 	1 	 	 4 	 	 12 
t02 	 (null) 	-1 	 	 4 	 	 16 
t03 	 (null) 	0 	 	 0 	 	 0 
main 	 func 	0 	 	 0 	 	 0 
sum 	 int 	0 	 	 0 	 	 0 
t04 	 temp 	10 	 	 4 	 	 32 
t05 	 temp 	0 	 	 0 	 	 0 


 Three Address Code 

t00 = 0 
t01 = 1 
t02 = n - t01
t03 = fun + n
t04 = 10 
sum = t04 
sum = fun 
t05 = 0 


 Machine Code: 

main:
	push ebp
	mov ebp, esp
	sub esp, 40 	
	mov eax, [0]
	mov eax, [1]
	sub eax, [n]
	add eax, [fun]
	mov eax, [10]
	mov [t04], eax
	mov eax, [fun]
	mov eax, [0]
	mov esp, ebp
	pop ebp
	ret
	