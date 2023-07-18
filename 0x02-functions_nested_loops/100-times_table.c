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
* print_times_table  - Function that prints the time table of n
*
* @n: the integer n
*
* Return: void, this function does't return any value
*/

void print_times_table(int n)
{
	int i;
	int j;
	int res;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (res < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else if (res < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				print_number(res);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				print_number(res);
			}
		}

		_putchar('\n');
	}
}
