#include "main.h"
#include <string.h>

/**
 * reverse_array - reverse content of array of integer
 * @a: array
 * @n: number of the elements of the array
 *
 */
void reverse_array(int *a, int n)
{
int *p, i, j, k;
p = a;
for (i = 0; i < n; i++)
p++;
for (k = 0; k <= n / 2; k++)
{
j = a[k];
a[k] = *p;
*p = j;
p--;
}
}
