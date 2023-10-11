#include <stdio.h>

/**
 * positive_or_negative - entry point
 *
 * This programthat prints if integer is positive or negative
 *
 * @num: number to check
 *
 * Return: returns 0 (for success)
 */

int positive_or_negative(int num)
{
	if (num > 0)
	{
		printf("%i is positive\n", num);
	}
	else if (num == 0)
	{
		printf("%i is zero\n", num);
	}
	else if (num < 0)
	{
		printf("%i is negative\n", num);
	}

	return (0);
}
