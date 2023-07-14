#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This program prints the alphabet except (e & q) in lowercase,
 * followed by a new line.
 *
 * Return: (0) if successfull
 */

int main(void)
{
	int i = 97;

	for (; i <= 122; i++)
	{
		if (i == 101 || i == 113)
			continue;
		putchar(i);
	}

	putchar('\n');

	return (0);
}
