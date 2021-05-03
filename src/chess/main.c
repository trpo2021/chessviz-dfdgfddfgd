#include <libchess/pawn.h>
#include <stdio.h>

int main()
{
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
void display(char board[9][9])
{
	for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                printf("%2c", board[i][j]);
            }
            printf("\n");
        }
}
    //int pawnp[9] = {};
    //int pawnP[9] = {};
    int figuref[9] = {};
    int figureF[9] = {};
    while (0 == 0) {
        display(board);
        //pawn(board, pawnP, pawnP);
        figure(board, figuref, figureF);
        int i = victorycondition(board);
        if (i == 1)
        {
        	display(board);
        	printf("White wins!\n");
        	break;
        }
        if (i == 2)
        {
        	display(board);
        	printf("Black wins!\n");
        	break;
        }
    }
    return 0;
}
