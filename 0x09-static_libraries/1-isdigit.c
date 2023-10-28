#include "main.h"

/**
 * _isdigit - function that checks for a digit 0 through 9
 * @character: arguement to be checked
 * Return: returns 1 if digit, 0 if false
 */

int _isdigit(int character)
{
	if (character >= '0' && character <= '9')
	{
		return (1);
	}

	return (0);
}
