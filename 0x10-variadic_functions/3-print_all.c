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
	int valid;

	va_start(list, format);
	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				valid = 1;
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				valid = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				valid = 1;
				break;
			case 's':
				s = va_arg(list, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				valid = 1;
				break;
			default:
				valid = 0;
				break;
		}
		if (valid && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(list);
	printf("\n");
}
