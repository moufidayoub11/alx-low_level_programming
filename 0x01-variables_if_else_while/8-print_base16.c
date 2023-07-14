#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This program prints the hexadecimal charachters,
 * followed by a new line.
 *
 * Return: (0) if successful
 */

int main(void)
{
	int i = 48;

	for (; i <= 57; i++)
		putchar(i);

	i = 97;

	for (; i <= 102; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
