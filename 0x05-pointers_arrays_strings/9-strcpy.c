#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - a function that copies the string pointed to by source
 * including the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @destination: destination to copy strings to
 * @source: source is the string to copy
 *
 * Return: returns the pointer to dest
 */
char *_strcpy(char *destination, char *source)
{
	int counter;

	for (counter = 0; counter <= _strlen(source); counter++)
	{
		destination[counter] = source[counter];
	}
	return (destination);
}
