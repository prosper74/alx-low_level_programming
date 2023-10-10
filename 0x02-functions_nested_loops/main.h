#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character to standard output
 * @character: parameter to print
 * Return: 1 or 0
*/

int _putchar(char character);

/**
 * print_alphabet - A function that print lowercase alphabet
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - print lowercase alphabet 10 times
 */

void print_alphabet_x10(void);

/**
 * _islower - a function that checks for lowercase
 * @character: the character to check
 * Return: returns int type
 */

int _islower(int character);

/**
 * _isalpha - function that checks for alphabet character
 * @character: character is the parameter to check
 * Return: return 1 if alphabet, return 0 if not alphabet
 */

int _isalpha(int character);

#endif
