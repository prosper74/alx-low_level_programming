#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - function that prints half of a string
 * The function should print the second half of the string
 *
 * @val: string to split
 */
void puts_half(char *val)
{
	int counter;
	int check = 0;

	if (_strlen(val) % 2 != 0)
	{
		check += 1;
	}

	for (counter = (_strlen(val) + check) / 2; counter < _strlen(val); counter++)
	{
		_putchar(val[counter]);
	}

	_putchar('\n');
}
