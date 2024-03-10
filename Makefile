CC = gcc
CFLAGS = -o lexer
LEX = flex

all: lexer

lexer: lex.yy.c 29_A2.c
	$(CC) $(CFLAGS) lex.yy.c 29_A2.c -ll

lex.yy.c: 29_A2.l
	$(LEX) -o lex.yy.c 29_A2.l

build: clean lexer

run: lexer
	./lexer < 29_A2.nc

clean:
	rm -f lexer lex.yy.c
