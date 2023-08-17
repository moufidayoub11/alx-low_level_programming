#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints multiple numbers
 *
 * @separator: the string to seperat the numbers
 * @n: number of numbers
 * @...: the numbers
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator)
			printf("%s", separator);
		printf("%d",  va_arg(numbers, int));
	}
	va_end(numbers);

	printf("\n");
}
