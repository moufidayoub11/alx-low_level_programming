#include "main.h"

/**
* print_square  - Function that prints a square.
*
* @n: the size of the square
*
* Return: void, this function does't return any value
*/

void print_square(int n)
{
	int j, i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
