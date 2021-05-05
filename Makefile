all: bin/main

bin/main: obj/src/chess/main.o obj/src/libchess/libfigure.a
	gcc -Wall -Werror -I src -o bin/main obj/src/chess/main.o obj/src/libchess/libfigure.a
obj/src/chess/main.o: src/chess/main.c
	gcc -Wall -Werror -c -I src -o obj/src/chess/main.o src/chess/main.c
obj/test/libfigure.a: obj/src/chess/pawn.o obj/src/chess/figure.o obj/src/chess/victorycondition.o obj/src/chess/turncheck.o
	ar rcs obj/src/libchess/libfigure.a obj/src/chess/pawn.o obj/src/chess/figure.o obj/src/chess/victorycondition.o obj/src/chess/turncheck.o
obj/src/libchess/libfigure.a: obj/src/chess/pawn.o obj/src/chess/figure.o obj/src/chess/victorycondition.o obj/src/chess/turncheck.o
	ar rcs obj/src/libchess/libfigure.a obj/src/chess/pawn.o obj/src/chess/figure.o obj/src/chess/victorycondition.o obj/src/chess/turncheck.o
obj/src/chess/pawn.o: src/libchess/pawn.c
	gcc -Wall -Werror -c -I src -o obj/src/chess/pawn.o src/libchess/pawn.c
obj/src/chess/figure.o: src/libchess/figure.c
	gcc -Wall -Werror -c -I src -o obj/src/chess/figure.o src/libchess/figure.c
obj/src/chess/victorycondition.o: src/libchess/victorycondition.c
	gcc -Wall -Werror -c -I src -o obj/src/chess/victorycondition.o src/libchess/victorycondition.c
obj/src/chess/turncheck.o: src/libchess/turncheck.c
	gcc -Wall -Werror -c -I src -o obj/src/chess/turncheck.o src/libchess/turncheck.c

test: bin/test

bin/test: obj/test/tests.o obj/test/testmain.o obj/test/libfigure.a
	gcc -Wall -Werror -I thirdparty -I src/libchess -o bin/test.bin obj/test/tests.o obj/test/testmain.o obj/src/libchess/libfigure.a
obj/test/testmain.o: test/main.c
	gcc -Wall -Werror -c -I thirdparty -I src/libchess -o obj/test/testmain.o test/main.c
obj/test/tests.o: test/tests.c
	gcc -Wall -Werror -c -I thirdparty -I src/libchess -o obj/test/tests.o test/tests.c
.PHONY: clean
clean:
	rm -rf obj/src/chess/*.o obj/src/libchess/*.a obj/test/*.o bin/main bin/test.bin
	
