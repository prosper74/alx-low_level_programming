#include "main.h"

/**
 * print_number - function that prints an integer
 * @num: number to be printed
 */

void print_number(int num)
{
	unsigned int tens, digit, positiveNumber = num;
	double intChecker = 1;

	if (num == 0)
		_putchar('0');
	else
	{
		if (num < 0)
		{
			positiveNumber = num * -1;
			_putchar('-');
		}

		while (intChecker <= positiveNumber)
			intChecker *= 10;
		tens = intChecker / 10;

		while (tens >= 1)
		{
			digit = positiveNumber / tens;
			_putchar(digit + '0');
			positiveNumber = (positiveNumber - (tens * digit));
			tens /= 10;
		}
	}
}
