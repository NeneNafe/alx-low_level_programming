#include "main.h"
#include <string.h>

/**
 * main - add positive numbers and prints the result
 * @argc: argument count
 * @argv: argument vector
 * Return: Always Success
 */

int main(int argc, char **argv)
{
	int i;
	unsigned int j, sum;
	char *n;

	if (argc >= 1)
	{
		for (i = 1; i < argc; i++)
		{
			n = argv[i];

			for (j = 0; j < strlen(n); j++)
			{
				if (n[j] < 48 || n[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(n);
			n++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
