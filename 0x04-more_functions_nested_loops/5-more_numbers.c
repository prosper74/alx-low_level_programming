#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers
 * from 0 to 14
 */

void more_numbers(void)
{
	char character;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (character = 0; character <= 14; character++)
		{
			if (character / 10 > 0)
				_putchar((character / 10) + '0');
			_putchar((character % 10) + '0');
		}
		_putchar('\n');
	}
}
