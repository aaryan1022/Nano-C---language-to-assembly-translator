.SUFFIXES: 

compiler: 29_A5.y 29_A5.c 29_A5.l
	bison -d 29_A5.y
	flex -o lex.yy.c 29_A5.l
	gcc 29_A5.c 29_A5.tab.c lex.yy.c -Werror -o compiler

build: compiler

test:
	for i in 1 2 3 4 5 6 ; do \
		./compiler < test$$i.nc > group29_A5_quads$$i.asm ; \
	done

clean:
	rm -f compiler lex.yy.c 29_A5.tab.c 29_A5.tab.h group29_A5_quads*.asm

