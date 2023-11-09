#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of parameters
 * @...: parameters
 * Return: Return the result. If n == 0, return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int count, result = 0;

	va_start(args, n);
	for (count = 0; count < n; count++)
	{
		result += va_arg(args, int);
	}

	va_end(args);
	return (result);
}
