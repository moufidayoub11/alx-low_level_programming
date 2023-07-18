#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all the even numbers in fibb sequence
 *
 * Return: 0 is successful
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int sum = b;

	while (1)
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
	}

	printf("%ld\n", sum);

	return (0);
}
