#include <stdio.h>

/**
 * main - entry point
 *
 * A program that prints all possible different combinations of three digits
 *
 * Return: returns 0 (for success)
 */

int main(void)
{
	int ones, tens, hundreds = '0';

	while (hundreds <= '9')
	{
		tens = hundreds + 1;

		while (tens <= '9')
		{
			ones = tens + 1;
			while (ones <= '9')
			{
				putchar(hundreds);
				putchar(tens);
				putchar(ones);

				if (hundreds != '7' || tens != '8' || ones != '9')
				{
					putchar(',');
					putchar(' ');
				}

				ones++;
			}

			tens++;
		}

		hundreds++;
	}
	putchar('\n');

	return (0);
}
