#include "main.h"
/**
 * _puts - write string followed by new line
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	char *c;
	int m;

	c = str;
	for (m = 0; c[m]; m++)
	{
		_putchar (c[m]);
	}
	_putchar('\n');
}
