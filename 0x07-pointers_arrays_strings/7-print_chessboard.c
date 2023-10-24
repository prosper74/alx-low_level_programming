#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: array param
 */

void print_chessboard(char (*a)[8])
{
	unsigned int count1, count2;

	count1 = 0;
	while (count1 < 8)
	{
		count2 = 0;
		while (count2 < 8)
		{
			_putchar(a[count1][count2]);
			count2++;
		}
		_putchar('\n');
		count1++;
	}
}
