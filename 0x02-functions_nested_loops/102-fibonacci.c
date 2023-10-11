#include <stdio.h>

/**
 * main - entry point
 *
 * program that prints the first 50 Fibonacci numbers
 *
 * starting with 1 and 2, followed by a new line.
 *
 * Return: returns 0
 */

int main(void)
{
	int counter, countTo = 50;
	long a = 1, b = 2;

	for (counter = 1; counter <= (countTo / 2); counter++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (countTo % 2 == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}
