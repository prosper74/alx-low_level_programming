#include "main.h"

/**
 * _puts - function that prints a string,
 * followed by a new line, to stdout
 *
 * @val: string to print
 */

void _puts(char *val)
{
	int i;

	for (i = 0; *(val + i) != '\0'; i++)
	{
		_putchar(*(val + i));
	}
	_putchar('\n');
}
