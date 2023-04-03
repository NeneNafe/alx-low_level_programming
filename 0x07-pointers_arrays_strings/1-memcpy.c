#include "main.h"
#include <string.h>

/**
 * *_memcpy - copies memory area
 * @dest: destination
 * @src: string to be copied
 * @n: Unsigned integer
 * Return: Always Success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
