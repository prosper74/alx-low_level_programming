#include "main.h"

/**
 * reverse_array - a function that reverses the elements of an array of ints
 * @arrayParam: array
 * @n: number of elements in array
 */

void reverse_array(int *arrayParam, int n)
{
	int tmp, first = 0, last = n - 1;

	while (first < last)
	{
		tmp = *(arrayParam + first);
		*(arrayParam + first) = *(arrayParam + last);
		*(arrayParam + last) = tmp;
		first++, last--;
	}
}
