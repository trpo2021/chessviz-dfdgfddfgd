#include "ctest.h"
#include "pawn.h"

CTEST(test, movefigure_test1)
{
	const int expected = 0;
	char turn[6] = {101, 50, 45, 101, 52};
	const int result = turncheck(turn);
	ASSERT_EQUAL(expected, result);
}

CTEST(test, movefigure_test2)
{
	const int expected = 0;
	char turn[6] = {98, 49, 45, 102, 53};
	const int result = turncheck(turn);
	ASSERT_EQUAL(expected, result);
}

CTEST(test, movefigure_test3)
{
	const int expected = 0;
	char turn[6] = {103, 49, 45, 97, 54};
	const int result = turncheck(turn);
	ASSERT_EQUAL(expected, result);
}

CTEST(test, movefigure_test4)
{
	const int expected = 0;
	char turn[6] = {104, 56, 45, 99, 52};
	const int result = turncheck(turn);
	ASSERT_EQUAL(expected, result);
}

CTEST(test, movefigure_test5)
{
	const int expected = 0;
	char turn[6] = {97, 49, 45, 104, 56};
	const int result = turncheck(turn);
	ASSERT_EQUAL(expected, result);
}

CTEST(test, movefigure_test6)
{
	const int expected = 1;
	char turn[6] = {100, 49, 45, 101, 57};
	const int result = turncheck(turn);
	ASSERT_EQUAL(expected, result);
}

CTEST(test, movefigure_test7)
{
	const int expected = 1;
	char turn[6] = {103, 48, 45, 98, 54};
	const int result = turncheck(turn);
	ASSERT_EQUAL(expected, result);
}


CTEST(test, victorycondition_test1)
{
	const int expected = 1;
	char turn[6] = {101, 49, 45, 101, 56};
    	char board[9][9]
            = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
               {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};
	int figuref[9] = {};
    	int figureF[9] = {};
    	figure(board, figuref, figureF, turn);
	const int result = victorycondition(board);
	ASSERT_EQUAL(expected, result);
}

CTEST(test, victorycondition_test2)
{
	const int expected = 2;
	char turn[6] = {98, 55, 45, 101, 49};
    	char board[9][9]
            = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
               {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};
	int figuref[9] = {};
    	int figureF[9] = {};
    	figure(board, figuref, figureF, turn);
	const int result = victorycondition(board);
	ASSERT_EQUAL(expected, result);
}

CTEST(test, victorycondition_test3)
{
	const int expected = 0;
	char turn[6] = {97, 49, 45, 104, 52};
    	char board[9][9]
            = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
               {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};
	int figuref[9] = {};
    	int figureF[9] = {};
    	figure(board, figuref, figureF, turn);
	const int result = victorycondition(board);
	ASSERT_EQUAL(expected, result);
}





