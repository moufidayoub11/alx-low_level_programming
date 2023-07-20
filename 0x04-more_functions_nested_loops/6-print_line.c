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
	if (n <= 0)
	{
		_putcharr('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
