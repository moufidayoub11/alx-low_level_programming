#include "main.h"

/**
* print_line  - Function that prints n times '_'
*
* @n: how many times '_' is printed
*
* Return: void, this function does't return any value
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
