#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_KEY_LEN 7
#define RAND_MOD 63

int get_max_char(char *str, int len);
int multiply_chars(char *str, int len);
int generate_rand_char(char *str);

/**
 * get_max_char - finds the biggest number
 * @str: username
 * @len: length of username
 *
 * Return: the biggest number
 */
int get_max_char(char *str, int len)
{
	int max_char, current_char;
	unsigned int random_number;

	current_char = *str;
	max_char = 0;

	while (max_char < len)
	{
		if (current_char < str[max_char])
			current_char = str[max_char];
		max_char += 1;
	}

	srand(current_char ^ 14);
	random_number = rand();
	return (random_number & RAND_MOD);
}

/**
 * multiply_chars - multiplies each char of username
 * @str: username
 * @len: length of username
 *
 * Return: multiplied char
 */
int multiply_chars(char *str, int len)
{
	int max_char, current_char;

	max_char = current_char = 0;

	while (current_char < len)
	{
		max_char = max_char + str[current_char] * str[current_char];
		current_char += 1;
	}

	return (((unsigned int)max_char ^ 239) & RAND_MOD);
}

/**
 * generate_rand_char - generates a random char
 * @str: username
 *
 * Return: a random char
 */
int generate_rand_char(char *str)
{
	int max_char, current_char;

	max_char = current_char = 0;

	while (current_char < *str)
	{
		max_char = rand();
		current_char += 1;
	}

	return (((unsigned int)max_char ^ 229) & RAND_MOD);
}

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	(void) argc;
	char keygen[MAX_KEY_LEN];
	int len, max_char, current_char;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };

	for (len = 0; argv[1][len]; len++)
		;
	keygen[0] = ((char *)alph)[(len ^ 59) & RAND_MOD];
	max_char = current_char = 0;
	while (current_char < len)
	{
		max_char = max_char + argv[1][current_char];
		current_char = current_char + 1;
	}
	keygen[1] = ((char *)alph)[(max_char ^ 79) & RAND_MOD];
	max_char = 1;
	current_char = 0;
	while (current_char < len)
	{
		max_char = argv[1][current_char] * max_char;
		current_char = current_char + 1;
	}
	keygen[3] = ((char *)alph)[get_max_char(argv[1], len)];
	keygen[4] = ((char *)alph)[multiply_chars(argv[1], len)];
	keygen[5] = ((char *)alph)[generate_rand_char(argv[1])];
	keygen[6] = '\0';
	for (max_char = 0; keygen[max_char]; max_char++)
		printf("%c", keygen[max_char]);

	return (0);
}
