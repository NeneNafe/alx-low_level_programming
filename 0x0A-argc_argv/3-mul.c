#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: if program != 2 arg print error, then \n and 1
 */

int main(int argc, char **argv)
{
	int product, j, k;

	if (argc < 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	j = atoi(argv[1]);
	k = atoi(argv[2]);
	product = j * k;

	printf("%d\n", product);
	return (0);
}
