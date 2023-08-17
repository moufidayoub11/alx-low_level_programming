#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints multiple variables with different data types
 *
 * @format: is a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list list;
	char *s;

	va_start(list, format);
	i = 0;

	while (format[i])
	{
		if (i != 0)
			printf(", ");

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				s = va_arg(list, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				break;
		}

		i++;
	}
	va_end(list);

	printf("\n");
}
