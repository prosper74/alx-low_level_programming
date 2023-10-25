#include "main.h"

/**
* factorial - a recursive function
* that returns the factorial of a given number.
* @n: Number to find the factorial of
*
* Return: The value of the factorial
*/

int factorial(int n)
{
if (n <= 1)
{
	return (1);
}

return (n * factorial(n - 1));
}
