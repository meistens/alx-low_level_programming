#include "main.h"

/**
 * _strchr - locates the character of a string
 * @s: string
 * @c: character
 * Return: ponter of first occourence of char c in s or null
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return ('\0');
}
