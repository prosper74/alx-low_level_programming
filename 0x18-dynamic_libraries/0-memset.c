#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 * @s: Area pointed to
 * @b: Byte to fill it with
 * @n: Amount to fill
 *
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}
