#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: Arg count
 * @argv: Array of arg strings
 *
 * Return: 0 for successful exit
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
