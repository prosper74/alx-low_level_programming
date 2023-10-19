#include "main.h"

/**
* _strncpy - a function that copies a string.
* @destination: copy source to this buffer
* @source: this is the source to copy
* @n: n bytes to be copied
* Return: copied string
*/

char *_strncpy(char *destination, char *source, int n)
{
	int count = 0;

	while (count < n && source[count] != '\0')
	{
		destination[count] = source[count];
		count++;
	}

	while (count < n)
	{
		destination[count] = '\0';
		count++;
	}

	return (destination);
}

