#include "main.h"
#include <stdio.h>

/**
 * print_array - Function that prints a given array
 *
 * @a: array
 * @n: size of the array
 *
 * Return: void, No return value
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != 0)
			printf(", ");
		printf("%d", a[i]);
		i++;
	}

	putchar('\n');
}
