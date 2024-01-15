#include "main.h"

/**
* _strchr - function that locates a character in a string.
* @str: string to search
* @character: char to search for
*
* Return: a pointer to the first occurrence of the character
* in the string, or NULL if the character is not found
*/

char *_strchr(char *str, char character)
{
while (*str != '\0')
{
	if (*str == character)
	{
	return (str);
	}
	else
	str++;
}

if (*str == character)
{
	return (str);
}
else
{
	return ('\0');
}
}

