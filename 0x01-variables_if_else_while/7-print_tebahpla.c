#include <stdio.h>

/**
 * main - entry point
 *
 * A program that prints lowercase alphabets in reverse order
 *
 * Return: returns 0 (for success)
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');

	return (0);
}
