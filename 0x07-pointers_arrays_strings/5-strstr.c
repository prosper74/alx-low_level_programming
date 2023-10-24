#include "main.h"

/**
* _strstr -  a function that locates a substring.
* finds the first occurrence of the substring needle in the string haystack.
* The terminating null bytes (\0) are not compared
* @haystack: String to search
* @needle: String to search for
*
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	char *begin, *search;

	while (*haystack != '\0')
	{
		begin = haystack;
		search = needle;
		while (*search == *haystack && *haystack != 0
		       && *search != 0)
		{
			haystack++;
			search++;
		}

		if (*search == 0)
		{
			return (begin);
		}

		haystack = begin + 1;
	}

	return (0);
}
