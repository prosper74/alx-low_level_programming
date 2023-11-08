#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array of integers
 * @size: size of the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: returns the index of the first element for which
 * the cmp function does not return 0. If no element matches,
 * return -1. If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (count = 0; count < size; count++)
	{
		if (cmp(*(array + count)))
			return (count);
	}

	return (-1);
}
