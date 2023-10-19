#include <stdio.h>
#include "main.h"

/**
 * print_buffer - a function that prints a buffer.
 * @buffer: The buffer to print
 * @size: The size of the buffer
 */
void print_buffer(char *buffer, int size)
{
	int i, j;

	i = 0;
	if (size <= 0)
		putchar('\n');
	else
	{
		while (i < size)
		{
			printf("%08x: ", i);
			j = 0;
			while (j < 10)
			{
				if (j % 2 == 0 && j > 0)
					printf(" ");
				if (j + i > size - 1)
					printf("  ");
				else
					printf("%.2x", buffer[j + i]);
				j++;
			}
			putchar(' ');
			j = 0;
			while (j < 10)
			{
				if (j + i > size - 1)
					break;
				if (buffer[j + i] >= ' ' && buffer[j + i] <= '~')
					putchar(buffer[j + i]);
				else
					putchar('.');
				j++;
			}
			putchar('\n');
			i += 10;
		}
	}
}
