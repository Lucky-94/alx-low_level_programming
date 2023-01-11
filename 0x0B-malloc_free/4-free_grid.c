#include "main.h"
#include <stdlib.h>

/**
 * free_grid-frees a two dimensional grid
 * @grid: grid to be freed
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	free(grid);
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
