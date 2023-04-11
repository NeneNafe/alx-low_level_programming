#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of the integer
 * @c: character variable
 * Return: Always Success.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(size * (sizeof(char)));
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
