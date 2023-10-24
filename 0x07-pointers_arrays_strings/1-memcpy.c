#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * copies n bytes from memory area source to memory area dest
 * @destination: Memory area to copy to
 * @source: Memory area to copy from
 * @n: Amount to copy
 *
 * Return: Returns a pointer to destination
 */

char *_memcpy(char *destination, char *source, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		destination[count] = source[count];
		count++;
	}

	return (destination);
}
