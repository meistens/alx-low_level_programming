#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: chessboard to be printed
 */

void print_chessboard(char (*a)[8])
{
int black, white;

for (black = 0; a[black][7]; black++)
{
for (white = 0; white < 8; white++)
_putchar(a[black][white]);

_putchar('\n');
}
}
