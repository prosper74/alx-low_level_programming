#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * string_format - Print the string data type
 * @args: variadic list of strings
 */
void string_format(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s",  str);
}

/**
 * char_format - Print the char data type
 * @args: variadic list char
 */
void char_format(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * int_format - Print the int data type
 * @args: variadic list ints
 */
void int_format(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * float_format - Print the float data type
 * @args: variadic list floats
 */
void float_format(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_all - a function that prints anything.
 * @format: List of types of arguments being passed
 * @...: List of types of arguments being passed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *seperator;
	print_format_t print_format_struct[] = {
		{"c", char_format},
		{"i", int_format},
		{"f", float_format},
		{"s", string_format}
	};
	int count1, count2;

	va_start(args, format);
	count1 = 0;
	seperator = "";

	while (format != NULL && format[count1] != '\0')
	{
		count2 = 0;
		while (count2 < 4)
		{
			if (*print_format_struct[count2].c == format[count1])
			{
				printf("%s", seperator);
				print_format_struct[count2].f(args, seperator);
				seperator = ", ";
			}
			count2++;
		}
		count1++;
	}
	printf("\n");
	va_end(args);
}
