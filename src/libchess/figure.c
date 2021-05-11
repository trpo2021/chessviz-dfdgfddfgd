#include <libchess/pawn.h>
#include <stdio.h>

void figure(char board[9][9], char turn[6])
{
    board[(56 - turn[4])][(turn[3] - 96)]
            = board[(56 - turn[1])][(turn[0] - 96)];
    board[(56 - turn[1])][(turn[0] - 96)] = ' ';
}
