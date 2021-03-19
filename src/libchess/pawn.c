#include <stdio.h>
#include <libchess/pawn.h>

void pawn(char board[9][9], int pawnp[9], int pawnP[9])
{
	char turn[6] = {};
	scanf("%s", turn);

	if((board[(56 - turn[1])][(turn[0] - 96)] == 'p') && ((turn[1] - turn[4]) < 3))
	{
		board[(56 - turn[1])][(turn[0] - 96)] = ' ';
		board[(56 - turn[4])][(turn[3] - 96)] = 'p';
	}
	if((board[(56 - turn[1])][(turn[0] - 96)] == 'P') && ((turn[4] - turn[1]) < 3))
	{
		board[(56 - turn[1])][(turn[0] - 96)] = ' ';
		board[(56 - turn[4])][(turn[3] - 96)] = 'P';
	}
}
