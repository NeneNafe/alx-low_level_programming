#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: Array of nmemb
 * @size: number of bytes
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
