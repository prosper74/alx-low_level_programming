#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow_helper - helps function for string to word function
 * @word: wordcount
 * @length: length
 * @str: string to go through
 * @s: array you are assigning
 * Return: char value
 */

char **strtow_helper(int word, int length, char *str, char **s)
{
	int count1, count2 = 0, count3;

	for (count1 = 0; count1 < word; count1++)
	{
		count3 = 0;
		for (; count2 < length; count2++)
		{
			if (str[0] != ' ' || str[count2] != ' ')
			{
				s[count1][count3] = str[count2];
				count3++;
			}
			if (count2 != 0 && str[count2] == ' ' && str[count2 - 1] != ' ')
			{
				count2++;
				break;
			}
		}
		s[count1][count3 + 1] = '\0';
	}
	s[word + 1] = NULL;
	return (s);
}

/**
 * strtow - a function that splits a string into words.
 * @str: string to check
 * Return: return char value
 */

char **strtow(char *str)
{
	int length, count1, count2, count3, size, word;
	char **s;

	if (str == NULL)
		return (NULL);
	length = 0;
	word = 0;
	while (str[length] != '\0')
	{
		if (str[0] != ' ')
		word++;
		if (str[length] != ' ' && str[length - 1] == ' ' && length != 0)
			word++;
		length++;
	}
	s = (char **)malloc(sizeof(char *) * word + 1);
	if (s == NULL)
		return (NULL);
	count2 = 0;
	for (count1 = 0; count1 < word; count1++)
	{
		size = 0;
		for (; count2 < length; count2++)
		{
			if (str[0] != ' ' || str[count2] != ' ')
				size++;
			if (str[count2] == ' ' && size > 0)
				break;
		}
		printf("%d\n", size);
		s[count1] = (char *)malloc(sizeof(char) * size + 1);
		if (s[count1] == NULL)
		{
			for (count3 = count1 - 1; count3 >= 0; count3--)
				free(s[count3]);
			free(s);
		}
	}
	s = strtow_helper(word, length, str, s);
	return (s);
}
