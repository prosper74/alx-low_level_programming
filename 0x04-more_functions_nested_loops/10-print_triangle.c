#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * with given size
 * @size: size of triangle to draw
 */

void print_triangle(int size)
{
	int height, width, draw;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (height = 1; height <= size; height++)
	{
		for (width = 1; width <= (size - height); width++)
		{
			_putchar(' ');
		}

		for (draw = 1; draw <= height; draw++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
