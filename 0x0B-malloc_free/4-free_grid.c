#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees a 2 dimensional array
 *
 * @grid: 2d array
 * @height: the height of the array
 *
 * Return: void, retuns nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
