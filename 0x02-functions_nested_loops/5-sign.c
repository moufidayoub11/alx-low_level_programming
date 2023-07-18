#include "main.h"

/**
* print_sign - Function that prints the a given integer
*
* @n: The int we need to check
*
* Return: int, 1 if n is positive 0 if n is 0 and -1 if n is negative
*/

int print_sign(int n)
{

	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
