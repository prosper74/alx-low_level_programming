#include "main.h"
#include <stdlib.h>

/**
* argstostr - a function that concatenates all the arguments of your program.
* @ac: Arg count
* @av: Array of arguments
*
* Return: a pointer to a new string, or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	char *mallocStr;
	int count1, count2, count3, length;

	if (ac == 0 || av == NULL)
		return (NULL);
	count1 = length = 0;
	while (count1 < ac)
	{
		count2 = 0;
		while (av[count1][count2] != '\0')
		{
			length++;
			count2++;
		}
		length++;
		count1++;
	}
	length++;
	mallocStr = malloc(length * sizeof(char));
	if (mallocStr == NULL)
		return (NULL);
	count1 = count3 = 0;
	while (count1 < ac)
	{
		count2 = 0;
		while (av[count1][count2] != 0)
		{
			mallocStr[count3] = av[count1][count2];
			count3++;
			count2++;
		}
		mallocStr[count3] = '\n';
		count3++;
		count1++;
	}

	return (mallocStr);
}
