#include "main.h"

/**
 * *string_toupper - changes all lowercase letters
 * of a string to uppercase
 * @n: Is a pointer
 * Return: Always 0.
 */

char *string_toupper(char *n)
{
	int j;

	j = 0;
		while (n[j] != '\0')
		{
			if (n[j] >= 'a' && n[j] <= 'Z')
				n[j] = n[j] - 32;
			j++;
		}
	return (n);
}
