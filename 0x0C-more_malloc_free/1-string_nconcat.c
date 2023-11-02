#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function that returns the length of a string
 *
 * @val: character to getstring
 * Return: returns length of val
 */

int _strlen(char *val)
{
	int count = 0;

	while (val[count] != '\0')
	{
		count++;
	}

	return (count);
}

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: bytes to concat from string 2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mallocPointer;
	int num = n, len, count1, count2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (num < 0)
		return (NULL);

	if (num >= _strlen(s2))
		num = _strlen(s2);

	len = _strlen(s1) + num + 1;

	mallocPointer = malloc(sizeof(*mallocPointer) * len);
	if (mallocPointer == NULL)
		return (NULL);

	for (count1 = 0; s1[count1] != '\0'; count1++)
		mallocPointer[count1] = s1[count1];

	for (count2 = 0; count2 < num; count2++)
		mallocPointer[count1 + count2] = s2[count2];
	mallocPointer[count1 + count2] = '\0';

	return (mallocPointer);
}
