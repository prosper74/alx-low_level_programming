#include "search_algos.h"

/**
* jump_search - Searches for a value in an array of integers
* using the Jump search algorithm.
*
* @array: Pointer to the first element of the array to search in.
* @size: Number of elements in the array.
* @value: Value to search for.
*
* Return: Index of the value if found, -1 otherwise.
*/
int jump_search(int *array, size_t size, int value)
{
int step_size, block_start, block_end, prev_block_end;

/* Check if the array is NULL or empty */
if (array == NULL || size == 0)
	return (-1);

/* Determine the step size */
step_size = (int)sqrt((double)size);
block_start = 0;

/* Perform the jump search */
while (block_start < (int)size && array[block_start] < value)
{
	prev_block_end = block_start;
	block_end = block_start + step_size - 1;

	if (block_end >= (int)size)
	block_end = size - 1;

	printf("Value checked array[%d] = [%d]\n", block_start, array[block_start]);

	if (array[block_end] >= value || block_end == (int)size - 1)
	break;

	block_start += step_size;
}

printf("Value found between indexes [%d] and [%d]\n",
prev_block_end, block_end);

/* Perform linear search within the block */
for (int i = prev_block_end; i <= block_end && i < (int)size; i++)

{
	printf("Value checked array[%d] = [%d]\n", i, array[i]);
	if (array[i] == value)
	return (i);
}

return (-1);
}
