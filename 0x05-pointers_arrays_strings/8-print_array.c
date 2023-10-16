#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of integers
 * Numbers must be separated by comma, followed by a space
 *
 * @val: val is the pointer of the array
 * @n: number of times to prints
 *
 */
void print_array(int *val, int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", val[counter]);
		if (counter != n - 1)
			printf(", ");
	}
	printf("\n");
}
