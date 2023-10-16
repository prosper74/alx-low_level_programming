#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - a function that convert a string to an integer
 * @val: string to convert to int
 *
 * Return: returns integer value
 */
int _atoi(char *val)
{
	int counter, sign = 0, digitCount, positionValue = 1, num = 0;

	for (counter = 0; counter < _strlen(val); counter++)
	{
		if (!(val[counter] >= '0' && val[counter] <= '9') && digitCount > 0)
			break;
		if (val[counter] == '-')
			sign--;
		if (val[counter] == '+')
			sign++;
		if (val[counter] >= '0' && val[counter] <= '9')
		{
			digitCount++;
		}
	}
	while (digitCount > 0)
	{
		num += ((val[counter - 1] - '0') * positionValue);
		counter--;
		digitCount--;
		positionValue *= 10;
	}
	if (sign >= 0)
	{
		num *= 1;
	} else
	{
		num *= -1;
	}
	return (num);
}
