#include <stdio.h>

/**
 * main - entry point
 *
 * A program that prints all possible different combinations of two digits
 *
 * Return: returns 0 (for success)
 */

int main(void)
{
	int ones;
	int tense = '0';

	while (tense <= '9')
	{
		ones = tense + 1;

		while (ones <= '9')
		{
			putchar(tense);
			putchar(ones);

			if (tense != '8' || ones != '9')
			{
				putchar(',');
				putchar(' ');
			}

			ones++;
		}

		tense++;
	}
	putchar('\n');

	return (0);
}
