build: 
	bison 29_A3.y --defines=29_A3.tab.h -o 29_A3.tab.c
	flex -o lex.yy.c 29_A3.l
	gcc -o parser lex.yy.c 29_A3.tab.c 29_A3.c -lfl -Werror

make clean:
	rm -f lex.yy.c 29_A3.tab.c 29_A3.tab.h parser