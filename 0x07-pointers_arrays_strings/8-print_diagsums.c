#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: The matrix
 * @size: The length of the arrays
 */

void print_diagsums(int *a, int size)
{
	int count = 0, sum1, sum2, length;

	sum1 = sum2 = 0;
	length = size * size;

	while (count < length)
	{
		if (count % (size - 1) == 0 && count < length - 1 && count > 0)
		{
			sum2 += *(a + count);
		}

		if (count % (size + 1) == 0 || count == 0)
		{
			sum1 += *(a + count);
		}

		count++;
	}

	printf("%d, %d\n", sum1, sum2);
}
