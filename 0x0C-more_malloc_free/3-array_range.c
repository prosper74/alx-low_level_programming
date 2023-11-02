#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum number
 * @max: maximum number
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *mallocPointer, count, n = (max - min + 1);

	if (min > max)
		return (NULL);

	mallocPointer = malloc(sizeof(int) * n);
	if (mallocPointer == NULL)
		return (NULL);

	for (count = 0; count < n; count++)
		mallocPointer[count] = min++;

	return (mallocPointer);
}
