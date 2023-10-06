#include <stdio.h>

/**
 * main - entry point
 *
 * A program that prints the alphabet in lowercase, and then in uppercase
 *
 * Return: returns 0 (for success)
 */

int main(void)
{
	char lowercaseAlphabet = 'a';
	char uppercaseAlphabet = 'A';

	while (lowercaseAlphabet <= 'z')
	{
		putchar(lowercaseAlphabet);
		lowercaseAlphabet++;
	}

	while (uppercaseAlphabet <= 'Z')
	{
		putchar(uppercaseAlphabet);
		uppercaseAlphabet++;
	}

	putchar('\n');

	return (0);
}
