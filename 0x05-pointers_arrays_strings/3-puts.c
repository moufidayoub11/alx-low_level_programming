#include "main.h"

/**
 * _puts - Function that prints a given string followed by new line
 *
 * @s: string
 *
 * Return: void, No return value
 */

void _puts(char *s)
{
	while (*s++)
		_putchar(*(s - 1));

	_putchar('\n');
}
