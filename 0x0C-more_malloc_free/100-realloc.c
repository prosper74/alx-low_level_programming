#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block
 * using malloc and free
 * @ptr: pointer to the memory previously allocated (malloc(old_size))
 * @old_size: size previously allocated
 * @new_size: new size to reallocate
 *
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mallocPtr;
	unsigned int count;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mallocPtr = malloc(new_size);
		if (mallocPtr == NULL)
			return (NULL);
		else
			return (mallocPtr);
	}

	mallocPtr = malloc(new_size);
	if (mallocPtr == NULL)
		return (NULL);

	for (count = 0; count < old_size && count < new_size; count++)
		*((char *)mallocPtr + count) = *((char *)ptr + count);

	free(ptr);

	return (mallocPtr);
}
