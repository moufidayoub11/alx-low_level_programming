#include "main.h"

/**
 * reverse_array - Function that reverse a given array
 *
 * @a: array
 * @n: size of the array
 *
 * Return: void, No return value
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp  = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
