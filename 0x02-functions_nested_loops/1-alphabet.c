#include "main.h"

/**
 * print_alphabet - function that prints lowercase alphabets
 *
 * Return: void, program does not return any type
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
