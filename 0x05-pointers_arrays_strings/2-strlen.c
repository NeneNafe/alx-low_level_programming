#include "main.h"
#include <string.h>

/**
 * _strlen - Returns the lenght of a string
 * @s: the string to be returned
 * Return: Always 0.
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(++s));
}
