#include "main.h"

/**
 * puts_half - Function that prints the second half of the string
 *
 * @str: string
 *
 * Return: void, No return value
 */

void puts_half(char *str)
{
	int count = 0;
	int i = 0;

	while (str[count])
		count++;

	if (count % 2)
		i = count / 2;
	else
		i = (count + 1) / 2;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
