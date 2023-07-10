#include "main.h"

/**
 * create_file - creates a function that creates a file
 * @filename: The name of the file
 * @text_content: The text in the file
 *
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can not be
 * written, write "fails", etc...)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int read_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	read_write = write(fd, text_content, letters);

	if (read_write == -1)
		return (-1);

	close(fd);

	return (1);
}
