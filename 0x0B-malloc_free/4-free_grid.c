#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up a 2d array
 * @grid: grid to be frreed
 * @height: height of the grid
 *
 * Return: void
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
