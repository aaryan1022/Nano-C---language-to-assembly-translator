.SUFFIXES: 

translator: 29_A4.y 29_A4.c 29_A4.l
	bison -d 29_A4.y
	flex -o lex.yy.c 29_A4.l
	gcc 29_A4.c 29_A4.tab.c lex.yy.c -Werror -o translator

build: translator

test: translator
	./translator < 29_A4.nc

clean:
	rm -f translator lex.yy.c 29_4.tab.c 29_4.tab.h