#include "main.h"

/**
 * swap_int - Function that swaps two given integers
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: void, No return value
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
