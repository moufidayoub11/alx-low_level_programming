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

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n >= 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}


/**
* print_to_98 - Function that prints numbers starting from n to 98
*
* @n: The int starting point
*
* Return: void, doesn't return any value
*/

void print_to_98(int n)
{
	int i = n;

	while (i != 98)
	{
		print_number(i);
		_putchar(',');
		_putchar(' ');

		 n > 98 ? i-- : i++;
	}

	print_number(98);
	_putchar('\n');
}
