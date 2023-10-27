#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _memset - entry point
* @s: string 1
* @b: string 2
* @n: number of bytes to
*
* Return: memset
*/

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
