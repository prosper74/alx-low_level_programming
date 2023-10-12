#include "main.h"

/**
 * print_most_numbers - function that prints the numbers
 *
 * from 0 to 9, do not print 2 and 4
 */

void print_most_numbers(void)
{
	char character;

	for (character = '0'; character <= '9'; character++)
	{
		if (character != '2' && character != '4')
			_putchar(character);
	}
	_putchar('\n');
}
