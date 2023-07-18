#include <stdio.h>

/**
 * print_number - Function that prints any given number using _putchar
 *
 * @n: number to print
 *
 * Return: void, this function doesn't return any value
 */
void print_number(int n)
{

	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}

	if (n >= 10)
		print_number(n / 10);

	putchar(n % 10 + '0');
}

/**
 * main - Entry point
 *
 * Description: This program prints all numbers below 1024
 * that are multiples of 3 or 5
 *
 * Return: 0 is successful
 */


int main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	}

	print_number(sum);
	putchar('\n');

	return (0);
}
