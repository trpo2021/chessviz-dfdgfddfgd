all: main

main: main.o pawn.o
	gcc -Wall -Werror -o main main.o pawn.o
main.o: main.c
	gcc -Wall -Werror -c -o main.o main.c
pawn.o: pawn.c
	gcc -Wall -Werror -c -o pawn.o pawn.c
clean:
	rm *.o main
