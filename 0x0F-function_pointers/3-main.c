#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point.
 * This function takes two numbers from the user, and an operator
 * Then calculate the result and print it to stdout
 * @argc: argument counter
 * @argv: arguments
 * User atoi to convert the strings from user input to integer
 * Return: 0 on sucess
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	func_ptr = get_op_func(argv[2]);
	num2 = atoi(argv[3]);

	if (func_ptr == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", func_ptr(num1, num2));

	return (0);
}
