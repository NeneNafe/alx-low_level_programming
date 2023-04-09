#include "main.h"

/**
 * main - priints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: Always Success
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)**argv;
	return (0);
}
