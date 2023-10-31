#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - a function that concatenates two strings.
 * @str1: First string
 * @str2: Second string
 *
 * Return: Pointer to new space in memory, return NULL if it fails
 */

char *str_concat(char *str1, char *str2)
{
	char *mallocStr, *emptyStr;
	int count1, count2, length1, length2;

	emptyStr = "";

	if (str1 == NULL)
		str1 = emptyStr;
	if (str2 == NULL)
		str2 = emptyStr;
	count1 = length1 = length2 = 0;

	while (str1[length1] != '\0')
	{
		length1++;
	}
	while (str2[length2] != '\0')
	{
		length2++;
	}
	length2++;
	mallocStr = malloc((length1 + length2) * sizeof(*str1));

	if (mallocStr == NULL)
		return (NULL);
	count1 = 0;

	while (count1 < length1)
	{
		mallocStr[count1] = str1[count1];
		count1++;
	}
	count2 = 0;
	while (count2 <= length2)
	{
		mallocStr[count1] = str2[count2];
		count1++;
		count2++;
	}

	return (mallocStr);
}
