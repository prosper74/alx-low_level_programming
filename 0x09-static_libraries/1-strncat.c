#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * it will use at most n bytes from source
 * @destination: string to be appended to
 * @source: string to append
 * @n: append n number of bytes(chars)
 * Return: concatenated string
 */

char *_strncat(char *destination, char *source, int n)
{
	int destCount = 0, srcCount = 0;

	while (destination[destCount] != '\0')
		destCount++;

	while (source[srcCount] != source[n])
	{
		destination[destCount] = source[srcCount];
		destCount++;
		srcCount++;
	}
	destination[destCount] = '\0';

	return (destination);
}
