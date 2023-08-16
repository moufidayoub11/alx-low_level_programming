#include "function_pointers.h"

/**
 * int_index - function that iterates an array and preforms a comparision
 *
 * @array: the array
 * @size: size of the array
 * @cmp: the compare to preform
 *
 * Return: index to element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
