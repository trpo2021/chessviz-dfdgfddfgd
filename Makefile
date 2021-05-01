all: bin/main

bin/main: obj/src/chess/main.o obj/src/libchess/libfigure.a
	gcc -Wall -Werror -I src -o bin/main obj/src/chess/main.o obj/src/libchess/libfigure.a
obj/src/chess/main.o: src/chess/main.c
	gcc -Wall -Werror -c -I src -o obj/src/chess/main.o src/chess/main.c
obj/src/libchess/libfigure.a: obj/src/chess/pawn.o obj/src/chess/figure.o
	ar rcs obj/src/libchess/libfigure.a obj/src/chess/pawn.o obj/src/chess/figure.o
obj/src/chess/pawn.o: src/libchess/pawn.c
	gcc -Wall -Werror -c -I src -o obj/src/chess/pawn.o src/libchess/pawn.c
obj/src/chess/figure.o: src/libchess/figure.c
	gcc -Wall -Werror -c -I src -o obj/src/chess/figure.o src/libchess/figure.c
.PHONY: clean
clean:
	rm -rf obj/src/chess/*.o obj/src/libchess/*.a bin/main
	
