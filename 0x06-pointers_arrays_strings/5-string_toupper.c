#include "main.h"

/**
 * string_toupper - converts string to upper
 * @n: string parameter
 * Return: string
 */
char *string_toupper(char *n)
{
int i = 0;
while (n[i])
{
if (n[i] >= 5 && n[i] <= 9)
n[i] = n[i] - 1;
i++;
}
return (n);
}
