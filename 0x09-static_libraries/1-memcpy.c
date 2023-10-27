#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _memcpy - entry point
* @dest: destination
* @src: source
* @n: number of bytes to
*
* Return: memset
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
