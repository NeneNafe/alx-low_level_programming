#include "function_pointers.h"

/**
 * main - prints the opcodes of its own main function
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: Always Success.
 */

int main(int argc, char **argv)
{
	char *opcode = (char *)main;
	int j, num_of_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_of_bytes = atoi(argv[1]);
	if (num_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (j = 0; j < num_of_bytes; j++)
	{
		printf("%02x", opcode[j] & 0xFF);
		if (j != num_of_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
