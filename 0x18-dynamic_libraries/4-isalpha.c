#include "main.h"

/**
 * _isalpha - A program that checks for alphabet character
 *
 * @character: character is ther paramter to check
 *
 * Return: returns 1 if alphabet, returns 0 if not alphabet
 */

int _isalpha(int character)
{
	if ((character >= 'a' && character <= 'z') ||
	(character >= 'A' && character <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
