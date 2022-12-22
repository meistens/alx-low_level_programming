#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	/* check if the data (n) is 0 or 1, if so returns the same value */
	if (n == 0 || n == 1)
		return (n);

	/* check if n is negative */
	if (n < 0)
		return (-1);

	/* recursively call the function here, dividing n by 2 */
	int i = _sqrt_recursion(n/2);

		/* is square of current number equal to given number? */
	if (i * i == n)
		return (i);

	/* but if square of current number is less than given number? */
	if (i * i < n)
	{
		/* do some math, compare em and return either j or -1 */
		int j = (i + (n/i)) / 2;

		if (j * j == n)
			return (j);
		else
			return (-1);
	}
	/* if numbee does not have a natural sqrt, return -1 */
	return (-1);
}
