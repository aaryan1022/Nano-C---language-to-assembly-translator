type-specifier
type-specifier
parameter-declaration
parameter-list
direct-declarator
direct-declarator
declarator
type-specifier
++++++++++++++num++++++++++++
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
type-specifier
++++++++++++++cnt++++++++++++
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
 num 
postfix-expression
unary-expression
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
reduction----------------
assignment-expression
 ---------
assignment-expression
expression

 primary-expression: 
 num 
postfix-expression
unary-expression
multiplicative-expression
additive-expression
relational-expression

 primary-expression: 
 lim 
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
 num 
postfix-expression
unary-expression

 primary-expression: 
 num 
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
type-specifier
++++++++++++++copy++++++++++++
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
type-specifier
++++++++++++++sum++++++++++++
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
 copy 
postfix-expression
unary-expression

 primary-expression: 
 num 
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

 primary-expression: 
 sum 
postfix-expression
unary-expression
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
reduction----------------
assignment-expression
 ---------
assignment-expression
expression
expression-statement
statement
block-item
block-item-list

 primary-expression: 
 while 
postfix-expression

 primary-expression: 
 num 
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
Error: syntax error on '{'

 Name 	 Type 	 Initial Value 	 Size 	 Offset 	 Nested Table 
armstrong 	 func 	0 	 	 0 	 	 0 
num 	 int 	1 	 	 4 	 	 4 
t00 	 temp 	0 	 	 0 	 	 0 
cnt 	 int 	0 	 	 0 	 	 0 
t01 	 temp 	0 	 	 0 	 	 0 
t02 	 temp 	0 	 	 0 	 	 0 
lim 	 (null) 	0 	 	 0 	 	 0 
t03 	 temp 	1 	 	 4 	 	 28 
t04 	 (null) 	1 	 	 4 	 	 32 
copy 	 int 	1 	 	 4 	 	 36 
t05 	 temp 	0 	 	 0 	 	 0 
sum 	 int 	0 	 	 0 	 	 0 
t06 	 temp 	0 	 	 0 	 	 0 
t07 	 temp 	0 	 	 0 	 	 0 
while 	 (null) 	0 	 	 0 	 	 0 
t08 	 temp 	0 	 	 0 	 	 0 


 Three Address Code 

t00 = 0 
num = t00 
t01 = 0 
cnt = t01 
t02 = 0 
num = t02 
t03 = 1 
t04 = num + t03
num = t04 
t05 = 0 
copy = t05 
t06 = 0 
sum = t06 
copy = num 
t07 = 0 
sum = t07 
t08 = 0 


 Machine Code: 

main:
	push ebp
	mov ebp, esp
	sub esp, 64 	
	mov eax, [0]
	mov [t00], eax
	mov eax, [0]
	mov [t01], eax
	mov eax, [0]
	mov [t02], eax
	mov eax, [1]
	add eax, [num]
	mov [t04], eax
	mov eax, [0]
	mov [t05], eax
	mov eax, [0]
	mov [t06], eax
	mov eax, [num]
	mov eax, [0]
	mov [t07], eax
	mov eax, [0]
	mov esp, ebp
	pop ebp
	ret
	