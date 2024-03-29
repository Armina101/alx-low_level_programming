#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: grid
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int n;

	if (grid == NULL || height == 0)
		return;

	for (n = 0; n < height; n++)
		free(grid[n]);

	free(grid);
}
