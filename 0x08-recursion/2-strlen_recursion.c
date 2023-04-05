#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: String variable
 * Return: Always Success
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
