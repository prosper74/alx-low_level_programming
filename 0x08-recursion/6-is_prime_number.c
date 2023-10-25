#include "main.h"

/**
 * prime_num_helper - recursive function to check if a number is prime
 * @num: Number to check
 * @numChecker: Number to check against
 *
 * Return: 1 if prime, 0 if otherwise
 */

int prime_num_helper(int num, int numChecker)
{
	if (num % numChecker == 0 && numChecker != (num / 2))
		return (0);
	else if (numChecker >= (num / 2))
		return (1);
	else
		return (prime_num_helper(num, numChecker + 1));
}

/**
 * is_prime_number - a recursive function
 * that returns 1 if the input integer is a prime number, otherwise return 0.
 * @n: param to check
 *
 * Return: 1 if prime, 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n > 1)
		return (prime_num_helper(n, 2));
	else if (n < 0)
		return (0);
	return (0);
}
