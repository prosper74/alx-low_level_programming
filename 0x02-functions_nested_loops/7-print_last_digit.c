#include "main.h"

/**
 * print_last_digit - A program that print last digit of a number
 *
 * @num: num is the argument
 *
 * Return: returns last digit of num
 */

int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar('0' + last_digit);

	return (last_digit);
}
