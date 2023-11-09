#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator:  is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * If separator is NULL, don’t print it.
 * If one of the string is NULL, print (nil) instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int count;

	va_start(strings, n);

	for (count = 0; count < n; count++)
	{
		str = va_arg(strings, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (count < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(strings);
}
