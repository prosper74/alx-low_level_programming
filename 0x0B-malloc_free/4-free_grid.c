#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid
 * previously created by alloc_grid function.
 * @grid: The 2D array to free memory from
 * @height: The height of the 2D array
 */

void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
	{
		free(grid[count]);
	}

	free(grid);
}
