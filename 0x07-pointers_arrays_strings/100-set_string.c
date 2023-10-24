#include <stdio.h>
#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: Pointer to the pointer we are chaning
 * @toValue: Pointer to what we are setting it to
 */

void set_string(char **s, char *toValue)
{
	*s = toValue;
}
