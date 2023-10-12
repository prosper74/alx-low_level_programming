#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * n is the number of times the character "_" should be printed
 * @num: number of characters to draw
 */

void print_line(int num)
{
	int times = num;

	for (times = num; times > 0; times--)
		_putchar('_');

	_putchar('\n');
}
