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

	while (i < 50)
	{
		long int next = a + b;

		if (next > 4000000)
		{
			break;
		}

		if (next % 2 == 0)
		{
			sum += next;
		}

		a = b;
		b = next;
		i++;
	}

	printf("%ld\n", sum);

	return (0);
}
