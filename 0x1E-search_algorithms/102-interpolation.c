#include "search_algos.h"

/**
* interpolation_search - Searches for a value in an array of
* integers using the Interpolation search algorithm.
*
* @array: Input array.
* @size: Size of the array.
* @value: Value to search for.
*
* Return: Index of the value if found, -1 otherwise.
*/
int interpolation_search(int *array, size_t size, int value)
{
size_t pos, low, high;
double int_factor;

if (array == NULL)
	return (-1);

low = 0;
high = size - 1;

while (size)
{
	int_factor = (double)(high - low) / (array[high] - array[low]) *
(value - array[low]);
	pos = (size_t)(low + int_factor);
	printf("Value checked array[%d]", (int)pos);

	if (pos >= size)
	{
	printf(" is out of range\n");
	break;
	}
	else
	{
	printf(" = [%d]\n", array[pos]);
	}

	if (array[pos] == value)
	return ((int)pos);

	if (array[pos] < value)
	low = pos + 1;
	else
	high = pos - 1;

	if (low == high)
	break;
}

return (-1);
}
