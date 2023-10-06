#include <stdio.h>

/**
 * main - entry point
 *
 * A program that prints the alphabets in lowercase, except q and e
 *
 * Return: returns 0 (for success)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');

	return (0);
}
