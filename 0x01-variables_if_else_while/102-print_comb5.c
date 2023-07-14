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
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);

				putchar(' ');

				putchar((j / 10) + 48);
				putchar((j % 10) + 48);

				if (i != 98 || j != 99)
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
