#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
void *mem = malloc(b);
if (mem == NULL)
exit(98);

return (mem);
}
