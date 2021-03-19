all: bin/main

bin/main: obj/main.o obj/libfigure.a
	gcc -Wall -Werror -I src -o bin/main obj/main.o obj/pawn.o
obj/main.o: src/chess/main.c
	gcc -Wall -Werror -c -I src -o obj/main.o src/chess/main.c
obj/libfigure.a: obj/pawn.o
	ar rcs obj/libefigure.a obj/pawn.o
obj/pawn.o: src/libchess/pawn.c
	gcc -Wall -Werror -c -I src -o obj/pawn.o src/libchess/pawn.c
.PHONY: clean
clean:
	rm -rf obj/*.o obj/*.a bin/main
