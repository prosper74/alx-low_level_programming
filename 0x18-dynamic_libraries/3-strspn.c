#include "main.h"

/**
* _strspn - function that gets the length of a prefix substring.
* @str: String to search
* @accept: The acceptable bytes string can contain
*
* Return: function that gets the length of a prefix substring.
*/

unsigned int _strspn(char *str, char *accept)
{
	unsigned int count, i, j, a;

	count = i = 0;
	while (str[count] != 0)
	{
		j = 0;
		a = 0;

		while (accept[j] != 0)
		{
			if (str[count] != accept[j])
			{
				j++;
			}
			else if (str[count] == accept[j])
			{
				a++;
				i++;
				j++;
			}
		}

		if (a == 0)
		{
			return (i);
		}

		count++;
	}

	return (i);
}
