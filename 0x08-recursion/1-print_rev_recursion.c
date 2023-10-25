#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @str: The string to print
 */

void _print_rev_recursion(char *str)
{
	if (*str != 0)
	{
		_print_rev_recursion(str + 1);
		_putchar(*str);
	}
}
