#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @str: String to search
 * @accept: Bytes accepted
 *
 * Return: a pointer to the byte in str that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *str, char *accept)
{
	unsigned int count1 = 0, count2;
	char *foundByte;

	while (str[count1] != 0)
	{
		count2 = 0;
		while (accept[count2] != 0)
		{
			if (str[count1] == accept[count2])
			{
				foundByte = &str[count1];
				return (foundByte);
			}
			count2++;
		}
		count1++;
	}
	return (0);
}
