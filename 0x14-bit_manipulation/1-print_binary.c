#include "main.h"

/**
* print_binary - Function that prints the binary representation of a number.
* @n: the number to print in binary format
*/
void print_binary(unsigned long int n)
{
	unsigned long int rev_num, count;

	rev_num = count = 0;

	if (n == 0)
		_putchar('0');

	while (n > 0)
	{
		rev_num = rev_num << 1;
		rev_num += n & 1;
		count++;
		n = n >> 1;
	}

	while (rev_num > 0)
	{
		_putchar((rev_num & 1) + '0');
		rev_num = rev_num >> 1;
		count--;
	}

	if (count > 0)
	{
		while (count != 0)
		{
			_putchar('0');
			count--;
		}
	}
}

