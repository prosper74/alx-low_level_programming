#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: Size of the array
 * @c: Char to initialize with
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *mallocArray;
	unsigned int count = 0;

	if (size != 0)
		mallocArray = malloc(size * sizeof(c));
	else
		return (NULL);
	if (mallocArray == NULL)
		return (NULL);

	while (count < size)
	{
		mallocArray[count] = c;
		count++;
	}

	return (mallocArray);
}
