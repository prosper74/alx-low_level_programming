#include <stdio.h>

/**
 * main - entry point
 *
 * program that finds and prints the first 98 Fibonacci numbers
 *
 * starting with 1 and 2, followed by a new line.
 *
 * Return: returns 0
 */

int main(void)
{
	int counter = 2;
	float a = 1, b = a + 1, c = a + b;

	printf("%.0f, ", a);
	printf("%.0f, ", b);
	while (counter < 98)
	{
		counter++;
		printf("%.0f", c);
		a = b;
		b = c;
		c = a + b;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
