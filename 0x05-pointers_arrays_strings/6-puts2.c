#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - function that prints every other character of a string
 * starting with the first character
 *
 * @val: val is the string to print
 */
void puts2(char *val)
{
	int counter;

	for (counter = 0; counter < _strlen(val); counter++)
	{
		if (counter % 2 == 0)
		{
			_putchar(val[counter]);
		}
	}
	_putchar('\n');
}
