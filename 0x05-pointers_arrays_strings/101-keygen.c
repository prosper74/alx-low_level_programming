#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - a program that generates random valid
* passwords for the program 101-crackme
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int password[70], counter, sum = 0, n;

	srand(time(NULL));

	for (counter = 0; counter < 70; counter++)
	{
		password[counter] = rand() % 78;
		sum += (password[counter] + '0');
		putchar(password[counter] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			printf("\n");
			break;
		}
	}

	return (0);
}

