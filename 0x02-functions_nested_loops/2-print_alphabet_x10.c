#include "main.h"

/**
* print_alphabet_x10  - Function that prints the alphabet 10 times
*
* Return: void, this function does't return any value
*/

void print_alphabet_x10((void)
{

	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
	}

	_putchar('\n');
}
