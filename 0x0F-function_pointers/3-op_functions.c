#include "3-calc.h"

/**
 * op_add - function that calculates the sum of two integers
 * @a: first number
 * @b: second number
 *
 * Return: sum result of the addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of two integers
 * @a: first number
 * @b: second number
 *
 * Return: result of the subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two integers
 * @a: first number
 * @b: second number
 *
 * Return: result of the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of two integers
 * @a: first number
 * @b: second number
 *
 * Return: result of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of two integers
 * @a: first number
 * @b: second number
 *
 * Return: return value of the modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
