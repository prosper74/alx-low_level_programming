#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function to perform
 * the operation asked by the user.
 * @s: is the operator passed as argument to the program
 * Return: pointer to correct operation function (0-4)
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}};

	int count;

	for (count = 0; ops[count].op != NULL; count++)
	{
		if (*s == *ops[count].op)
		{
			return (ops[count].f);
		}
	}

	return (NULL);
}
