#include "main.h"

/**
* print_diagonal  - Function that draws a diagonal line on the terminal.
*
* @n: the length of the line
*
* Return: void, this function does't return any value
*/

void print_diagonal(int n)
{
	int j, i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < j; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
