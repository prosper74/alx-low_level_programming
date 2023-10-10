#include "main.h"

/**
 * print_sign - A program that print sign of number
 *
 * @num: number is the paramter to check
 *
 * Return: return 1 if num >  0, 0 if num == 0, -1 if num < 0
 */

int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
