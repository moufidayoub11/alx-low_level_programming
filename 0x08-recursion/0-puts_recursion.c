#include "main.h"

/**
 * _puts_recursion - Function that prints a string, followed by a new line.
 *
 * @s: the string to print
 *
 * Return: void, returns nothing
 */

void _puts_recursion(char *s)
{
	if (!s || *s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s++);

	_puts_recursion(s);
}
