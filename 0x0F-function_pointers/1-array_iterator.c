#include "function_pointers.h"

/**
 * array_iterator - function that iterates an array and preforms an action
 *
 * @array: the array
 * @size: size of the array
 * @action: the action to preform
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action || size <= 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
