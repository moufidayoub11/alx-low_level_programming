#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: the size of the string
 * @c: the first character of the string
 *
 * Return: char pointer, pointer to the string or null if failed
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
