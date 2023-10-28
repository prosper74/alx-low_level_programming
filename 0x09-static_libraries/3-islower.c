#include "main.h"

/**
 * _islower - A function that checks for lowercase character
 *
 * @character: character is the parameter to check
 *
 * Return: return 1 if lowercase, return 0 if uppercase
 */

int _islower(int character)
{
	if (character >= 'a' && character <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
