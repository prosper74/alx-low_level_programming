#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * print character "\\" n times
 * @num: number of characters to draw
 */

void print_diagonal(int num)
{
	int draw, space;

	if (num > 0)
	{
		for (draw = 1; draw <= num; draw++)
		{
			for (space = 1; space < draw; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
