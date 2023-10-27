#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _strspn - entry point
* @s: string
* @accept: string
*
* Return: strchr
*/

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
