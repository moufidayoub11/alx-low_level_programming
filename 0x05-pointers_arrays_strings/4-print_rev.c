#include "main.h"

/**
 * print_rev - Function that prints a given string in reverse followed by new line
 *
 * @s: string
 *
 * Return: void, No return value
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	
	while (count--)
		_putchar(*(s + count));


	_putchar('\n');
}
