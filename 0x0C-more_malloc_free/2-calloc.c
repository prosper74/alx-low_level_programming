#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 * using malloc.
 * @nmemb: size
 * @size: sizeof(datatype)
 *
 * Return: malloc pointer, if malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mallocPointer;
	unsigned int count;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	mallocPointer = malloc(nmemb * size);
	if (mallocPointer == NULL)
		return (NULL);

	for (count = 0; count < nmemb * size; count++)
		*((char *)mallocPointer + count) = 0;

	return (mallocPointer);
}
