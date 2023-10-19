#include "main.h"

/**
* string_toupper - a function that changes all lowercase letters
* of a string to uppercase
* @str: string to manipulate
* Return: string with all letters capitalized
*/

char *string_toupper(char *str)
{
while (*str)
{
	if (*str >= 'a' && *str <= 'z')
	{
	*str = *str - 'a' + 'A';
	}

	str++;
}

return (str)
}
