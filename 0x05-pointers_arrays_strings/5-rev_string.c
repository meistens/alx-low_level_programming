#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
char tmp;
int i, str1, str2;

str1 = 0;
str2 = 0;

while (s[str1] != '\0')
str1++;

str2 = str1 - 1;
for (i = 0; i < str1 / 2; i++)
{
tmp = s[i];
s[i] = s[str2];
s[str2] = tmp;
str2 -= 1;
}
}

