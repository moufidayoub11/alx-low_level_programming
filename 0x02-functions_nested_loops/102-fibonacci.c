#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the first 50 numbers in fibb
 *
 * Return: 0 is successful
 */

int main(void)
{
	int i = 0;
	long int a = 1;
	long int b = 2;
	long int sum = b;

	putchar('1');
	printf(", ");
	putchar('2');

	while (i < 48)
	{
		long int next = a + b;

		printf(", ");
		printf("%ld", next);

		if (next % 2 == 0)
		{
			sum += next;
		}

		a = b;
		b = next;
		i++;
	}

	putchar('\n');

	return (0);
}
