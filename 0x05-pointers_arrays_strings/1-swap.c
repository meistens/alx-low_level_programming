#include "main.h"

/**
 * swap_int - swap values between 2 integers
 * @a: first value
 * @b: second value
 */

void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
