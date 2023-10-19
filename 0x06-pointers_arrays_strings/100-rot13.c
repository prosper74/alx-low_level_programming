#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13.
 * @str: string to encrypt
 * Return: char value
 */
char *rot13(char *str)
{
	char string1[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char string2[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int a, b = 0;

	for (a = 0; str[a] != '\0'; a++)
	{

		for (b = 0; string1[b] != '\0'; b++)
		{
			if (str[a] == string1[b])
			{
				str[a] = string2[b];
				break;
			}
		}
	}

	return (str);
}
