#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: Width of grid, aka # of columns
 * @height: Height of grid, aka # of rows
 *
 * Return: Pointer to 2D array, NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int **mallocGrid, count1, count2;

	count1 = 0;
	if (width <= 0 || height <= 0)
		return (NULL);

	mallocGrid = malloc(height * sizeof(*mallocGrid));
	if (mallocGrid == NULL)
	{
		free(mallocGrid);
		return (NULL);
	}

	while (count1 < height)
	{
		mallocGrid[count1] = malloc(width * sizeof(**mallocGrid));
		if (mallocGrid[count1] == NULL)
		{
			count1--;
			while (count1 >= 0)
			{
				free(mallocGrid[count1]);
				count1--;
			}
			free(mallocGrid);
			return (NULL);
		}

		count2 = 0;
		while (count2 < width)
		{
			mallocGrid[count1][count2] = 0;
			count2++;
		}

		count1++;
	}

	count1 = 0;
	return (mallocGrid);
}
