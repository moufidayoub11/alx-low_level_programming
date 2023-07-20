#include "main.h"

/**
* print_most_numbers  - Function that prints the numbers (0 - 14) ten times
*
* Return: void, this function does't return any value
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
			_putchar(i / 10 + '0');
		else
		{
			_putchar(i % 10 + '0');
		}
	}

	_putchar('\n');
}
