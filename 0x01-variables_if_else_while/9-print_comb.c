#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This program prints numbers in ascending order (0-9),
 * seperated by ', '
 * followed by a new line.
 *
 * Return: (0) if successful
 */

int main(void)
{
	int i = 48;

	for (; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
