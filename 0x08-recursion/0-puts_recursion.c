#include "main.h"

/**
 * _puts_recursion - a function that prints a string,
 * followed by a new line.
 * @str: The given string arguement
 */

void _puts_recursion(char *str)
{
	if (*str != '\0')
	{
		_putchar(*str);
		_puts_recursion(str + 1);
	}
	else if (*str == '\0')
	{
		_putchar('\n');
	}
}
