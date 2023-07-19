#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the first 98 numbers in fibb
 *
 * Return: 0 is successful
 */

int main(void)
{
	unsigned long int index, fib_current, fib_next;
	unsigned long int high_part_current, low_part_current;
	unsigned long int high_part_next, low_part_next;

	fib_current = 1;
	fib_next = 2;
	printf("%lu", fib_current);
	for (index = 1; index < 91; index++)
	{
		printf(", %lu", fib_next);
		fib_next = fib_next + fib_current;
		fib_current = fib_next - fib_current;
	}
	high_part_current = fib_current / 1000000000;
	low_part_current = fib_current % 1000000000;
	high_part_next = fib_next / 1000000000;
	low_part_next = fib_next % 1000000000;
	for (index = 92; index < 99; ++index)
	{
		printf(", %lu", high_part_next + (low_part_next / 1000000000));
		printf("%lu", low_part_next % 1000000000);
		high_part_next = high_part_next + high_part_current;
		high_part_current = high_part_next - high_part_current;
		low_part_next = low_part_next + low_part_current;
		low_part_current = low_part_next - low_part_current;
	}
	printf("\n");
	return (0);
}
