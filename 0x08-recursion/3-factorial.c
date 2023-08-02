#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number.
 *
 * @n: the given number.
 *
 * Return: int, returns the factorial of n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
