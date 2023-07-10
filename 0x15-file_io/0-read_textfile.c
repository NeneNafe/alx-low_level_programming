#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: the name of the file
 * @letters: the text to be printed
 *
 * Return: Always (0).
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t to_read, written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	to_read = read(fd, buffer, letters);
	if (to_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	buffer[to_read] = '\0';

	written = write(STDOUT_FILENO, buffer, to_read);
	if (written == -1 || written != to_read)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);

	return (written);
}
