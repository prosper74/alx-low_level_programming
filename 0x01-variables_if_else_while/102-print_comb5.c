#include <stdio.h>

/**
 * main - entry point
 *
 * A program that prints digits from 01 to 99
 *
 * Return: returns 0 (for success)
 */

int main(void)
{
	int num1 = 0, num2;

	while (num1 <= 99)
	{
		num2 = num1 + 1;

		while (num2 <= 99)
		{
			putchar(num1 / 10 + '0');
			putchar(num1 % 10 + '0');
			putchar(' ');
			putchar(num2 / 10 + '0');
			putchar(num2 % 10 + '0');

			if (!(num1 == 98 && num2 == 99))
			{
				putchar(',');
				putchar(' ');
			}

			num2++;
		}

		num1++;
	}
	putchar('\n');

	return (0);
}
