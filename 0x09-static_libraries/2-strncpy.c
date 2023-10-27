#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _strncpy - entry point
* @dest: destination
* @src: source
* @n: number of bytes to copy
*
* Return: strncpy
*/

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
