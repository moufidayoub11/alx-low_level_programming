#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This program prints the alphabet in lowercase and in reverse,
 * followed by a new line.
 *
 * Return: (0) if successfull
 */

int main(void)
{
	int i = 122;

	for (; i >= 97; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
