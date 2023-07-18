#include "main.h"

/**
* main - Entry point
*
* Description: A program that prints '_putchar'
*
* Return: 0 (successful)
*/

int main(void)
{
	char string[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');

	return (0);
}
