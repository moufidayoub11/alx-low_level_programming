#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer to a 2 dimensional
 * array of integers.
 *
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: pointer, pointer to a 2d array of integers or null if failed
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * width);

	if (!array)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		array[i] = malloc(sizeof(int) * height);

		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[i]);

			free(array);

			return (NULL);
		}

		for (j = 0; j < height; j++)
			array[i][j] = 0;
	}

	return (array);
}
