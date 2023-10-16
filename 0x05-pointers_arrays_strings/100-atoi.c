#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 * @val: string to convert to int
 *
 * Return: returns integer value
 */

int _atoi(char *val)
{
	int sign = 1;
	unsigned int num = 0;
	char *temp = val;

	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			sign *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			num = num * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (num * sign);
}
