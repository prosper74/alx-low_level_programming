#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _islower - entry point
* @c: arguement
*
* Return: return lowercase
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
