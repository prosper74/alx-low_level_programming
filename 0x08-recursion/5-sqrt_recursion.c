#include "main.h"

/**
 * sqrt_helper - Function to Find the square root
 * @num: Number to find square root of
 * @checkNum: The number checked to see if it's the sqrt of num
 *
 * Return: The square root value
 */
int sqrt_helper(int num, int checkNum)
{
	if (checkNum * checkNum == num)
		return (checkNum);
	else if (checkNum >= num / 2)
		return (-1);
	return (sqrt_helper(num, checkNum + 1));
}

/**
 * _sqrt_recursion - a recursive function
 * that returns the natural square root of a number.
 * @n: Number given to find root of
 *
 * Return: The square root or -1 if there is no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	return (sqrt_helper(n, 1));
}
