#include "main.h"

/**
 * _pow_recursion - Function that returns the number x to the power of y.
 *
 * @x: the given number.
 * @y: the power.
 *
 * Return: int, returns x^y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
