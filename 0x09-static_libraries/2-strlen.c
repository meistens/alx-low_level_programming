#include "main.h"
#include <string.h>
/**
 * _strlen - get the length of a string
 * @s: string pointer passed to this function
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
