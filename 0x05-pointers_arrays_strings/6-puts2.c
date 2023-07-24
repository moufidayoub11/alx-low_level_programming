#include "main.h"

/**
 * puts2 - Function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @s: string
 *
 * Return: void, No return value
 */

void puts2(char *str)
{
	int i;
	int length;

	while (s[length])
		length++;

	for (i = 0; i < length; i += 2)
	{
		if (i >= length || !s[i])
			break;
		_putchar(s[i]);
	}

	_putchar('\n');
}
