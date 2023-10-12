#include <stdio.h>

/**
 * main - fizz buzz program,
 * multiples of 3 print Fizz,
 * multiples of 5 print Buzz
 * and multiple of both 3 and 5 print FizzBuzz
 * Return: returns 0 on success
 */

int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (count % 3 == 0)
		{
			printf("Fizz");
		}
		else if (count % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", count);
		}

		if (count < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
