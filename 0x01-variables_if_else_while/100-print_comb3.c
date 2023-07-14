#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This program prints all possible different
 * combinations of two digits. 01 and 10 are considered
 * the same combination of the two digits 0 and 1
 * seperated by ', '
 * followed by a new line.
 *
 * Return: (0) if successful
 */

int main(void)
{
	int i = 48;
	int j;

	for (; i < 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if (i < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
