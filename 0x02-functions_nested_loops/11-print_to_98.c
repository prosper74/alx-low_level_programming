#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 *
 * @num: integer parameter
 */

void print_to_98(int num)
{
	while (num < 98)
	{
		printf("%d, ", num);
		num++;
	}

	while (num > 98)
	{
		printf("%d, ", num);
		num--;
	}

	if (num == 98)
		printf("%d", num);

	printf("\n");
}
