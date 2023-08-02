#include "main.h"

int _sqrt_helper(int n, int start);

/**
 * _sqrt_recursion - Function that returns the number x to the power of y.
 *
 * @n: the given number.
 *
 * Return: int, returns sqrt(n).
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - Function that helps find the sqrt of n
 *
 * @n: the given number.
 * @start: starting position
 *
 * Return: int, returns sqrt(n).
 */

int _sqrt_helper(int n, int start)
{
	long square = start * start;

	if (n == square)
		return (start);
	else if (square > n)
		return (-1);
	else
		return (_sqrt_helper(n, start + 1));
}
