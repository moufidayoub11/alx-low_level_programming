#include "variadic_functions.h"

/**
 * sum_them_all - function that sums multiple numbers
 *
 * @n: number of numbers
 * @...: the numbers
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int res;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	res = 0;
	for (i = 0; i < n; i++)
		res += va_arg(numbers, int);

	va_end(numbers);
	return (res);
}
