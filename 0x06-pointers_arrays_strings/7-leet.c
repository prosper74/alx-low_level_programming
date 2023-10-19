#include "main.h"

/**
* leet - a function that encodes a string into 1337
* Letters a and A should be replaced by 4
* Letters e and E should be replaced by 3
* Letters o and O should be replaced by 0
* Letters t and T should be replaced by 7
* Letters l and L should be replaced by 1
* @str: string to manipulate
* Return: string
*/

char *leet(char *str)
{
int stringArray[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'},

	intArray[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

int a, b;

for (b = 0; str[b] != '\0'; b++)
{
	for (a = 0; stringArray[a] != '\0'; a++)
	{
	if (str[b] == stringArray[a])
	{
		str[b] = intArray[a];
	}
	}
}

return (str);
}

