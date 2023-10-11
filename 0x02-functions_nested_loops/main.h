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

/**
 * print_sign - function to print sign of number
 * @num: num is the parameter to check
 * Return: return 1 if num > 0, 0 if num ==  0, -1 if num < 0
 */

int print_sign(int num);

/**
 * _abs - function to computer the absolute value of integer
 * @int: integer type
 * Return: return the absolute value
 */

int _abs(int);

/**
 * print_last_digit - function that print last digit of a number
 * @int: integer type
 * Return: returns last digit of number
 */

int print_last_digit(int);

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 * Description: starting from  00:00 to 23:59
 */

void jack_bauer(void);

/**
 * times_table - function that prints the 9 times table
 * Description: starting with 0
 */

void times_table(void);

/**
 * add - function that adds two integers and returns the result
 * @num1: first number
 * @num2: second number
 * Return: returns sum which is of type int
 */

int add(int num1, int num2);

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @num: integer paramter
 */

void print_to_98(int num);

/**
 * print_times_table - function that prints the n times table
 * @num: integer argument
 */

void print_times_table(int num);

#endif
