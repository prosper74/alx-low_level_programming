#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: Size of memory to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *reservedMemory;

	reservedMemory = malloc(b);
	if (reservedMemory == NULL)
		exit(98);

	return (reservedMemory);
}
