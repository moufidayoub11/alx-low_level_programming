#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints multiple strings
 *
 * @separator: separator between strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (!str)
			str = "(nil)";
		if (i != 0 && separator)
			printf("%s", separator);
		printf("%s",  str);
	}
	va_end(strings);

	printf("\n");
}
