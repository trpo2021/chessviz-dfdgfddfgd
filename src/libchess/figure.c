#include <libchess/pawn.h>
#include <stdio.h>

void figure(char board[9][9], int figuref[9], int figureF[9], char turn[6])
{

    if ((board[(56 - turn[1])][(turn[0] - 96)] == 'p')){
        board[(56 - turn[1])][(turn[0] - 96)] = ' ';
        board[(56 - turn[4])][(turn[3] - 96)] = 'p';
    }
    if ((board[(56 - turn[1])][(turn[0] - 96)] == 'P')) {
        board[(56 - turn[1])][(turn[0] - 96)] = ' ';
        board[(56 - turn[4])][(turn[3] - 96)] = 'P';
    }
    if ((board[(56 - turn[1])][(turn[0] - 96)] == 'k')){
        board[(56 - turn[1])][(turn[0] - 96)] = ' ';
        board[(56 - turn[4])][(turn[3] - 96)] = 'k';
    }
    if ((board[(56 - turn[1])][(turn[0] - 96)] == 'K')) {
        board[(56 - turn[1])][(turn[0] - 96)] = ' ';
        board[(56 - turn[4])][(turn[3] - 96)] = 'K';
    }
    if ((board[(56 - turn[1])][(turn[0] - 96)] == 'q')){
        board[(56 - turn[1])][(turn[0] - 96)] = ' ';
        board[(56 - turn[4])][(turn[3] - 96)] = 'q';
    }
    if ((board[(56 - turn[1])][(turn[0] - 96)] == 'Q')) {
        board[(56 - turn[1])][(turn[0] - 96)] = ' ';
        board[(56 - turn[4])][(turn[3] - 96)] = 'Q';
    }
    if ((board[(56 - turn[1])][(turn[0] - 96)] == 'n')){
        board[(56 - turn[1])][(turn[0] - 96)] = ' ';
        board[(56 - turn[4])][(turn[3] - 96)] = 'n';
    }
    if ((board[(56 - turn[1])][(turn[0] - 96)] == 'N')) {
        board[(56 - turn[1])][(turn[0] - 96)] = ' ';
        board[(56 - turn[4])][(turn[3] - 96)] = 'N';
    }
    if ((board[(56 - turn[1])][(turn[0] - 96)] == 'b')){
        board[(56 - turn[1])][(turn[0] - 96)] = ' ';
        board[(56 - turn[4])][(turn[3] - 96)] = 'b';
    }
    if ((board[(56 - turn[1])][(turn[0] - 96)] == 'B')) {
        board[(56 - turn[1])][(turn[0] - 96)] = ' ';
        board[(56 - turn[4])][(turn[3] - 96)] = 'B';
    }
    if ((board[(56 - turn[1])][(turn[0] - 96)] == 'r')){
        board[(56 - turn[1])][(turn[0] - 96)] = ' ';
        board[(56 - turn[4])][(turn[3] - 96)] = 'r';
    }
    if ((board[(56 - turn[1])][(turn[0] - 96)] == 'R')) {
        board[(56 - turn[1])][(turn[0] - 96)] = ' ';
        board[(56 - turn[4])][(turn[3] - 96)] = 'R';
    }
}
