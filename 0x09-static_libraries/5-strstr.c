#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* _strstr - entry point
* @haystack: string
* @needle: string
*
* Return: strchr
*/

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
