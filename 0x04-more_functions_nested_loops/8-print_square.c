#include "main.h"

/**
 * print_square - function that prints a square
 * @size: size to draw
 */

void print_square(int size)
{
	int rows, columns;

	if (size > 0)
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (columns = 1; columns <= size; columns++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
