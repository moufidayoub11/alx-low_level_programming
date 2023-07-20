#include "main.h"

/**
* print_triangle  - Function that draws a diagonal line on the terminal.
*
* @n: the length of the line
*
* Return: void, this function does't return any value
*/

void print_triangle(int n)
{
	int j, i, k;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n - j - 1; i++)
		{
			_putchar(' ');
		}

		for (k = 0; k <= j; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
