#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This program prints the the numbers in base 10 (0 - 9),
 * followed by a new line.
 *
 * Return: (0) if successful
 */

int main(void)
{
	int i = 48;

	for (; i <= 57; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
