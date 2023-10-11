#include "main.h"

/**
 * print_times_table - program that prints the n times table
 *
 * starting with 0
 *
 * @num: integer argument
 */

void print_times_table(int num)
{
	int row, column, digit;

	if (num >= 0 && num <= 15)
	{
		for (row = 0; row <= num; row++)
		{
			for (column = 0; column <= num; column++)
			{
				digit = (row * column);
				if (column == 0)
					_putchar('0' + digit);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (digit <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + digit);
					}
					else if (digit > 9 && digit < 100)
					{
						_putchar(' ');
						_putchar('0' + (digit / 10));
						_putchar('0' + (digit % 10));
					}
					else if (digit >= 100)
					{
						_putchar('0' + (digit / 100));
						_putchar('0' + ((digit / 10) % 10));
						_putchar('0' + (digit % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
