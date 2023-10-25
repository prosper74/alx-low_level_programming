#include "main.h"

/**
 * wildcmp - a function that compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0.
 * @str1: First string to compare
 * @str2: Second string to compare
 *
 * Return: 1 if considered identical, 0 otherwise
 */

int wildcmp(char *str1, char *str2)
{
	if (*str1 == '\0' && *str2 == '\0')
	{
		return (1);
	}

	if (*str1 == *str2)
	{
		return (wildcmp(str1 + 1, str2 + 1));
	}

	if (*str2 == '*')
	{
		if (*(str2 + 1) == '*')
		{
			return (wildcmp(str1, str2 + 1));
		}

		if (wildcmp(str1 + 1, str2) || wildcmp(str1, str2 + 1))
		{
			return (1);
		}
	}

	return (0);
}
