#include <stdio.h>

/**
 * main - program that prints the sum of all the multiples
 *
 * of 3 or 5 below 1024 (excluded), followed by a new line.
 *
 * Return: returns 0
 */

int main(void)
{
	int num, sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			sum += num;
		}
	}
	printf("%d\n", sum);

	return (0);
}
