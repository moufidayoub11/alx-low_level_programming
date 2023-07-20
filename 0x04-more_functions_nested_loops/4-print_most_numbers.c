#include "main.h"

/**
* print_most_numbers  - Function that prints the numbers (0 - 9) except (2 - 4)
*
* Return: void, this function does't return any value
*/

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
	}

	_putchar('\n');
}
