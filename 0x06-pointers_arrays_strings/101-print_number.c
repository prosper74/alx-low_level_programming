#include "main.h"

/**
* print_number - a function that prints an integer
* @n: number to be printed
*/

void print_number(int n)
{
unsigned int tens, digit, positive = n;

double start = 1;

if (n == 0)
	_putchar('0');
else
{
	if (n < 0)
	{
	positive = n * -1;
	_putchar('-');
	}

	while (start <= positive)
	{
	start *= 10;
	}

	tens = start / 10;

	while (tens >= 1)
	{
	digit = positive / tens;
	_putchar(digit + '0');
	positive = (positive - (tens * digit));
	tens /= 10;
	}
}
}
