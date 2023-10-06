#include <stdio.h>

/**
 * main - entry point
 *
 * A program that prints the alphabet in lowercase
 *
 * Return: returns 0 (for success)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
