#include "main.h"

/**
 * print_number - Function that prints any digit
 *
 * @n: The digit to print
 *
 * Return: void, doesn't return any value
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n >= 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
