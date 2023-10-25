#include "main.h"

/**
 * _strlen_recursion - a recursive function
 * that returns the length of a string.
 * @str: The string to find length of
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *str)
{
	int length = 0;

	if (*str != 0)
	{
		length++;
		return (length + _strlen_recursion(str + 1));
	}

	return (length);
}
