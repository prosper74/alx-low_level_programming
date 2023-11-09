#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: is the string to be printed between numbers
 * @n:  is the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int count;

	va_start(numbers, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(numbers, int));
		if (count < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(numbers);
}
