#include "main.h"

/**
* print_numbers  - Function that prints the numbers (0 - 9)
*
* Return: void, this function does't return any value
*/

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
