#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - a function that reverses a string
 *
 * @val: string to print in reverse
 */

void rev_string(char *val)
{
	int i;
	char temp;

	for (i = 0; i < _strlen(val) / 2; i++)
	{
		temp = val[i];
		val[i] = val[_strlen(val) - i - 1];
		val[_strlen(val) - i - 1] = temp;
	}
}
