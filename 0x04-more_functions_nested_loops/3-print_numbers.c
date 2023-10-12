#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 */

void print_numbers(void)
{
	char character;

	for (character = '0'; character <= '9'; character++)
	{
		_putchar(character);
	}

	_putchar('\n');
}
