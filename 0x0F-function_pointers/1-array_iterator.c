#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 * @array: pointer to an array of type int
 * @size: size of array
 * @action: pointer to function that we need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;

	if (array != NULL && action != NULL)
	{
		for (count = 0; count < size; count++)
		{
			action(*(array + count));
		}
	}
}
