#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: Always Success
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
