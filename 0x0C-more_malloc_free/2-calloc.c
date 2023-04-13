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
	int i = 0, l = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	ptr = malloc(l);

	if (ptr == NULL)
		return (NULL);

	while (i < l)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
