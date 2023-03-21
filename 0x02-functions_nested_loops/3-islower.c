#include <stdio.h>
#include "main.h"

/**
 * _islower - A function that checks lowercase characters
 *@c: The character to be checked
 * Return: 1 if c is lowercase; otherwise 0
 */

int _islower(int c)


{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
