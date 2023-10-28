#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @destination: string to be appended to
 * @source: string to append
 * Return: concatenated string
 */

char *_strcat(char *destination, char *source)
{
	int destinationCount = 0, sourceCount = 0;

	while (destination[destinationCount] != '\0')
		destinationCount++;

	while (source[sourceCount] != '\0')
	{
		destination[destinationCount] = source[sourceCount];
		destinationCount++;
		sourceCount++;
	}
	destination[destinationCount] = '\0';

	return (destination);
}
