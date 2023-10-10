#include "main.h"

/**
 * times_table - a program that prints the 9 times table
 *
 * Description: starting with 0
 */

void times_table(void)
{
	int row, column, digit;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			digit = (row * column);

			if (column == 0)
			{
				_putchar('0' + digit);
			}
			else if (digit <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + digit);
			}
			else if (digit > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (digit / 10));
				_putchar('0' + (digit % 10));
			}
		}
		_putchar('\n');
	}
}
