#include "main.h"


/**
 * print_number - Function that prints any given number using _putchar
 *
 * @n: number to print
 *
 * Return: void, this function doesn't return any value
 */

void print_number(int n)
{
	unsigned int temp = n;

	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}

	if (temp >= 10)
		print_number(temp / 10);

	_putchar(temp % 10 + '0');
}
