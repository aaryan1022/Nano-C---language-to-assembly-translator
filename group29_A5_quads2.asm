type-specifier
direct-declarator
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
main 	 func 	0 	 	 0 	 	 0 
t00 	 temp 	0 	 	 0 	 	 0 


 Three Address Code 

t00 = 0 


 Machine Code: 

main:
	push ebp
	mov ebp, esp
	sub esp, 8 	
	mov eax, [0]
	mov esp, ebp
	pop ebp
	ret
	