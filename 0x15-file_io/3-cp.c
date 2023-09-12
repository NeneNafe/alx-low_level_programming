#include "main.h"

/**
 * file_checker - checks if files can be opened
 * @file_from: starting file
 * @file_to: file destination
 * @argv: argument vector
 *
 * Return: Nothing!
 */

void file_checker(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - checks the argument count and vector
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always (0).
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t new_chars, new_write_read;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_checker(file_from, file_to, argv);

	new_chars = 1024;
	while (new_chars == 1024)
	{
		new_chars = read(file_from, buffer, 1024);
		if (new_chars == -1)
			file_checker(-1, 0, argv);
		new_write_read = write(file_to, buffer, new_chars);
		if (new_write_read == -1)
			file_checker(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close -= close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
