#include "holberton.h"
/**
* print_chessboard - print chess board.
*
*@a : pionter.
*
* Return : Viod (success).
*/
void print_chessboard(char (*a)[8])
{
int i = 0;
int j;
while (i < 8)
{
j = 0;
while (j < 8)
_putchar(a[i][j++]);
_putchar('\n');
i++;
}
}
