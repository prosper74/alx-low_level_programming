#include "main.h"

/**
* is_prime_number - a recursive function
* that returns 1 if the input integer is a prime number, otherwise return 0.
* @n: Number to check
*
* Return: 1 if prime, 0 if otherwise
*/

int is_prime_number(int n)
{
	if (n > 1)
	{
		if (n % 2 == 0 && 2 != (n / 2))
			return (0);
		else if (2 >= (n / 2))
			return (1);
		else
			return (prime_check(n, 2 + 1));
	}
	else if (n < 0)
		return (0);
	return (0);
}
