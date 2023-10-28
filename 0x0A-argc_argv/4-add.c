#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: Number of arguments
 * @argv: Arguments recieved
 *
 * Return: 0 on success, 1 if theres a nondigit arg
 */

int main(int argc, char *argv[])
{
	int sum = 0, count = 1, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
		count++;
	}

	printf("%d\n", sum);
	return (0);
}
