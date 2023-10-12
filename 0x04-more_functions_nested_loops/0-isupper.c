#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @character: character to be checked
 * Return: returns 1 if uppercase, 0 if false
 */

int _isupper(int character)
{
	if (character >= 'A' && character <= 'Z')
		return (1);

	return (0);
}
