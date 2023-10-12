#include <stdio.h>

/**
 * main - program that finds and prints the
 * largest prime factor of the number 612852475143
 * Return: 0 on success
 */

int main(void)
{
	unsigned long num = 612852475143, divider = 2;

	while (divider < num)
	{
		if (num % divider == 0)
		{
			num /= divider;
			divider = 2;
		}
		else
			divider++;
	}
	printf("%lu\n", num);
	return (0);
}
