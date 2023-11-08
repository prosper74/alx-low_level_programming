#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the opcodes of its own main function.
 * @argc: Number of args given
 * @argv: Argument of number of bytes to print
 *
 * Return: 0 on success, If the number of argument is not the correct one,
 * printError, followed by a new line, and exit with the status 1.
 * If the number of bytes is negative, print Error, followed by a new line,
 * and exit with the status 2
 */

int main(int argc, char *argv[])
{
	char *add;
	int count, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	add = (char *)&main;
	bytes = atoi(argv[1]);
	count = 0;

	while (count < bytes - 1)
	{
		printf("%02hhx ", add[count]);
		count++;
	}

	printf("%02hhx\n", add[count]);
	return (0);
}
