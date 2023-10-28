#include "main.h"

/**
 * _abs - A program to compute absolute value of integer
 *
 * @num: num is the integer argument
 *
 * Return: returns the absolute value of num
 */

int _abs(int num)
{
	if (num > 0)
		return (num);
	else if (num < 0)
		return (-num);

	return (0);
}
