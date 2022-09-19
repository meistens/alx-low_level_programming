#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string printed
 */

void print_rev(char *s)
{
int i, q;

q = 0;
while (s[q] != '\0')
q++;
for (i = q - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
