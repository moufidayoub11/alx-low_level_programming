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
	unsigned int temp;
	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
		temp = n;

	if (temp >= 10)
		print_number(temp / 10);

	_putchar(temp % 10 + '0');
}
