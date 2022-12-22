#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	int i;
	/* check if the data (n) is 0 or 1, if so returns the same value */
	if (n == 0 || n == 1)
		return (n);

	/* else loop to iterate the numbers, starting from 1 to i value */
	for (i = 1; i * i <= n; i++)
	{
		/* is square of current number equal to given number? */
		if (i * i == n)
			return (i);
	}
	/* if numbee does not have a natural sqrt, return -1 */
	return (-1);
}
