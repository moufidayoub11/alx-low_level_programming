#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This program prints the alphabet in lowercase,
 * followed by the alphabet in uppercase.
 * followed by a new line.
 *
 * Return: (0) if successful
 */

int main(void)
{
	int i = 97;

	for (; i <= 122; i++)
		putchar(i);
	i = 65;

	for (; i <= 90; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
