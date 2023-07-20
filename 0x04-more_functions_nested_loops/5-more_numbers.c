#include "main.h"

/**
* more_numbers  - Function that prints the numbers (0 - 14) ten times
*
* Return: void, this function does't return any value
*/

void more_numbers(void)
{
	int j, i;
	
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
