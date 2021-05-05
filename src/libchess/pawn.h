#ifndef PAWN_H
#define PAWN_H

void pawn(char board[9][9], int pawnp[9], int pawnP[9]);

void figure(char board[9][9], int figuref[9], int figureF[9], char turn[6]);

int victorycondition(char board[9][9]);

int turncheck(char turn[6]);

#endif
