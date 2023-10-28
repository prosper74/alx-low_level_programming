#include "main.h"

/**
* _strcmp - a function that compares two strings
* @str1: first string
* @str2: second string
* Return: int that tells num spaces in between
*/

int _strcmp(char *str1, char *str2)
{
int count = 0;

while (*(str1 + count) == *(str2 + count) && *(str1 + count))
{
	count++;
}

if (*(str2 + count))
{
	return (*(str1 + count) - *(str2 + count));
}
else
{
	return (0);
}
}
