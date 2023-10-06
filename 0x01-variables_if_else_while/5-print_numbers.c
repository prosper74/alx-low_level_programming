#include <stdio.h>

/**
 * main - entry point
 *
 * A program that prints all single digit numbers of base 10 starting from 0
 *
 * Return: returns 0 (for success)
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
