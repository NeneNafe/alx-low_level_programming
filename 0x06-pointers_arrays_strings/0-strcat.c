#include "main.h"

/**
 * *_strcat - concanates two strings
 * @dest: The destination
 * @src: The string
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int m;
	int n;

	m = 0;
		while (dest[m] != '\0')
		{
			m++;
		}
	n = 0;
		while (src[n] != '\0')
		{
			dest[m] = src[n];
			m++;
			n++;
		}
	dest[m] = '\0';
	return (dest);
}
