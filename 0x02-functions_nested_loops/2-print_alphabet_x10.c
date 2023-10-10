#include "main.h"

/**
 * print_alphabet_x10 - A function that prints 10 times the alphabet
 * in lowercase
 *
 * Return: 0, return void
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int totalCount;

	for (totalCount = 1; totalCount <= 10; totalCount++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
