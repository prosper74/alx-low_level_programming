#include "main.h"
/**
 * _strlen - function that returns the length of a string
 *
 * @val: character to getstring
 * Return: returns length of val
 */
int _strlen(char *val)
{
	int i = 0;

	while (val[i] != '\0')
	{
		i++;
	}
	return (i);
}
