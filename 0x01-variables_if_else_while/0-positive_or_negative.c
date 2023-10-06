#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * This program will assign a random number to the variable n
 *
 * print whether the number stored in the variable n is positive or negative
 *
 * Return: returns 0 (for success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}

	return (0);
}
