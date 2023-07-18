#include "main.h"

/**
* print_alphabet  - function that prints the alphabet
*
* Return: No return value
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
