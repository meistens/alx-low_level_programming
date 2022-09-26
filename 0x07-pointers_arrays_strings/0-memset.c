#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the memory array to be filled
 * @c: char used to fill the memory area
 * @n: number of bytes to be filled
 * Return: pointer to the memory area @s
 */

void *_memset(void *s, int c, size_t n)
{
unsigned int i;
unsigned char *memory = s, value = c;
for (i = 0; i < n; i++)
memory[i] = value;
return (memory);
}
