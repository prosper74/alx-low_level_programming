#include "main.h"

/**
* string_toupper - a function that changes all lowercase letters
* of a string to uppercase
* @str: string to manipulate
* Return: string with all letters capitalized
*/

char *string_toupper(char *str)
{

int count;

for (count = 0; str[count] != '\0'; count++)
{
	if (str[count] >= 'a' && str[count] <= 'z')
	str[count] = str[count] - 'a' + 'A';
}
return (str);
}
