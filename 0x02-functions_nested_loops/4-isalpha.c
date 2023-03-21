#include "main.h"

/**
 * _isalpha - A function that checks all alphabet characters
 * @c: The checked character
 * Return: 1 if c is a letter, lowercase or uppercase or otherwise 0
 */

int _isalpha(int c)

{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))

	{
		return (1);
	}
	return (0);
}
