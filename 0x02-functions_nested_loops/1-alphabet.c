#include "main.h"

/**
* print_alphabet  - Function that prints the alphabet
*
* Return: void, this function does't return any value
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
