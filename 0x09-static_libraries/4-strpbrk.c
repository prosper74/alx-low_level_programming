#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _strpbrk - entry point
* @s: string
* @accept: string
*
* Return: strchr
*/

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
