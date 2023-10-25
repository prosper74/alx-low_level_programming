#include "main.h"
#include "2-strlen_recursion.c"

/**
 * palindrome_helper - Actual check for palindrome
 * @str: String to check
 * @length: Length of string
 *
 * Return: 1 if palindrome, 0 if otherwise
 */

int palindrome_helper(char *str, int length)
{
	if (length <= 1)
		return (1);
	if (*str != str[length - 1])
		return (0);
	else
		return (palindrome_helper((str + 1), (length - 2)));
}

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * and 0 if not.
 * @s: String to check
 *
 * Return: 1 if palindrome, else return 0
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length <= 1)
		return (1);
	return (palindrome_helper(s, length));
}
