#include <stdio.h>
#include <math.h>

/**
* largest_prime_factor - Function that finds the largest prime number
*
* @n: the number
*
* Return: int, the answer
*/

int largest_prime_factor(long int n)
{
	int i;

	while (n % 2 == 0)
		n /= 2;

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
			n /= i;
	}

	if (n > 2)
		return (n);

	return (2);
}

/**
* main - Entry point
*
* Description: A program that finds the largest prime factor
*
* Return: 0 (successful)
*/

int main(void)
{
	long int i = 612852475143;
	int answer = largest_prime_factor(i);

	printf("%d\n", answer);

	return (0);
}
