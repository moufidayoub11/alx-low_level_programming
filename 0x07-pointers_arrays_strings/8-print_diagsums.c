#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints the sum of the diagonals af 2d array. 
 *
 * @a: the 1d representation of a 2d array of integers.
 * @size: the size of both rows and columns
 *
 * Return: void, returns nothing
 */

void print_diagsums(int *a, int size)
{
	int i, diag1_sum = 0, diag2_sum = 0;

	for (i = 0; i < size; i++)
	{
		diag1_sum += a[i * size + i];
		diag2_sum += a[i * size + size - 1 - i];
	}
	printf("%d, %d\n", diag1_sum, diag2_sum);
}
