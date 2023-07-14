#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This program prints all possible different
 * combinations of three digits. 012 and 120 are considered
 * the same combination of the three digits 0 and 1 and 2
 * seperated by ', '
 * followed by a new line.
 *
 * Return: (0) if successful
 */

int main(void)
{
	int i = 48;
	int j;
	int z;

	for (; i <= 55; i++)
	{
		for (j = i + 1; j <= 56; j++)
		{
			for (z = j + 1; z <= 57; z++)
			{
				putchar(i);
				putchar(j);
				putchar(z);

				if (i < 55)
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}

	putchar('\n');

	return (0);
}
