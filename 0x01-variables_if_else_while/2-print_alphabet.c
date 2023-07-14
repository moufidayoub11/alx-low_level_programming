#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This program prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: (0) if successfull
 */

int main(void)
{
	int i = 97;

	for (; i <= 122; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
