#include "main.h"
#include <stdlib.h>

/**
 * word_count_helper - Count number of words
 * @str: String to check
 *
 * Return: Number of words;
 */

int word_count_helper(char *str)
{
	int flag = 0, count, wordCount = 0;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (str[count] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			wordCount++;
		}
	}

	return (wordCount);
}

/**
 * strtow - a function that splits a string into words.
 * @str: String to split
 *
 * Return: NULL if str == NULL or str == ""
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int count1, count2 = 0, len = 0, words, count = 0, start, end;

	while (*(str + len))
		len++;
	words = word_count_helper(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (count1 = 0; count1 <= len; count1++)
	{
		if (str[count1] == ' ' || str[count1] == '\0')
		{
			if (count)
			{
				end = count1;
				tmp = (char *) malloc(sizeof(char) * (count + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[count2] = tmp - count;
				count2++;
				count = 0;
			}
		}
		else if (count++ == 0)
			start = count1;
	}

	matrix[count2] = NULL;

	return (matrix);
}
