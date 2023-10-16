#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @num1: first integer
 * @num2: second integer
 */
void swap_int(int *num1, int *num2)
{
	int num3 = *num2, num4 = *num1;
	*num1 = num3;
	*num2 = num4;
}
