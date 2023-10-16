#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - function that prints a string in reverse
 *
 * @val: the  string to print
 */
void print_rev(char *val)
{
	int i;

	for (i = _strlen(val) - 1; i >= 0; i--)
	{
		_putchar(*(val + i));
	}
	_putchar('\n');
}
