#include "main.h"

/**
 * string_toupper - converts string to upper
 * @n: string parameter
 * Return: string
 */
char *string_toupper(char *n)
{
int index = 0;
while (n[index++])
{
if (n[index] >= 'a' && n[index] <= 'z')
n[index] -= 32;
}
return (str);
}
