#include "main.h"

/**
* get_endianness - Function that checks the endianness.
* need to flip to get from one number to another.
*
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *)&i;

if (*c)
	return (1);
else
	return (0);
}

