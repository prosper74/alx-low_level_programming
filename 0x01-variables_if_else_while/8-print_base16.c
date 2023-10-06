#include <stdio.h>

/**
 * main - entry point
 *
 * A program that prints all the numbers of base 16 in lowercase
 *
 * You can only use putchar
 *
 * Return: returns 0 (for success)
 */

int main(void)
{
	int num = '0', hexadecimalAlphabet = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (hexadecimalAlphabet <= 'f')
	{
		putchar(hexadecimalAlphabet);
		hexadecimalAlphabet++;
	}
	putchar('\n');

	return (0);
}
