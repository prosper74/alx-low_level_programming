#include "main.h"

/**
* flip_bits - Function that returns the number of bits you would
* need to flip to get from one number to another.
* @n: the number to flip from
* @m: the number to flip to
*
* Return: 1 if it worked, or -1 if an error occurred
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m;
unsigned int count = 0;

while (xor)
{
	count += xor & 1;
	xor >>= 1;
}

return (count);
}

