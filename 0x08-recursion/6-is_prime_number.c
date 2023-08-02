#include "main.h"

int check_prime_helper(int num, int i);

/**
 * is_prime_number - Function that checks if a number is prime.
 *
 * @n: the number to check.
 *
 * Return: 1 if prime, 0 if not prime.
 */
int is_prime_number(int n)
{
	int temp = n;

	if (n < 0)
		temp = -n;

	return (check_prime_helper(temp, 2));
}

/**
 * check_prime_helper - Helper function to check if a number is prime.
 *
 * @num: the number to check.
 * @i: the divisor, starts from 2.
 *
 * Return: 1 if prime, 0 if not prime.
 */
int check_prime_helper(int num, int i)
{
	if (num <= 1)
		return (0);

	if (i * i > num)
		return (1);

	if (num % i == 0)
		return (0);

	return (check_prime_helper(num, i + 1));
}
