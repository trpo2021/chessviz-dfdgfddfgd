#include "pawn.h"

int turncheck(char turn[6])
{
    int ascii = 96;
    int ascii_i = 105;
    int ascii_0 = 48;
    int ascii_9 = 57;
    if ((turn[0] > ascii) && (turn[0] < ascii_i) && (turn[3] > ascii) && (turn[3] < ascii_i)
        && (turn[1] > ascii_0) && (turn[1] > ascii_0) && (turn[1] < ascii_9) && (turn[4] > ascii_0)
        && (turn[4] < ascii_9))
        return 0;
    else
        return 1;
}
