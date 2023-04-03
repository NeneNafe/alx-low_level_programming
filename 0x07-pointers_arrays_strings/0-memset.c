#include "main.h"
#include <string.h>

/**
 * *_memset - Fills memory with a constant byte
 * @s: A pointer to be returned
 * @b: character variable
 * @n: unsigned integer
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
