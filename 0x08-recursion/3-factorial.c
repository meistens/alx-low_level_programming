#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number of the found factorial
 * Return: factorial of n or error
 *
 */

int factorial(int n)
{
int result = n;

if (n < 0)
return (-1);

else if (n >= 0 && n <= 1)
return (1);

result *= factorial(n - 1);
return (result);
}
