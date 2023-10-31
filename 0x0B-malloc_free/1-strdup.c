#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: String to duplicate
 *
 * Return: Returns NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *mallocStr;
	unsigned int count, length;

	if (str == NULL)
		return (NULL);

	count = length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	length++;
	mallocStr = malloc(length * sizeof(*str));

	if (mallocStr == NULL)
		return (NULL);

	while (count <= length)
	{
		mallocStr[count] = str[count];
		count++;
	}

	return (mallocStr);
}
