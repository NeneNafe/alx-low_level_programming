#include "main.h"

/**
 * _strlen - prints the length of the string
 * @s: the stringvto be printed
 * Return: Success.
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(++s));
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: What the text says.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int length;
	int rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	length = _strlen(text_content);
	rwr = write(fd, text_content, length);
	if (rwr < 1 || rwr != length)
		return (-1);
	return (1);
}
