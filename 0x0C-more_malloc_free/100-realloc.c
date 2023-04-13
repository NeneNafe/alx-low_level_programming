#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: Pointer
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: Nothing.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0, j = 0, k = 0;
	int *s;

	i = old_size;
	ptr = malloc(i);

	j = new_size;

	if (i == j)
		return (ptr);

	if (ptr == NULL)
	{
		s = malloc(j);

		if (s == NULL)
			return (NULL);
		return (s);
	}
	else
	{
		if (j == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	s = malloc(j);

	if (s == NULL)
		return (NULL);

	for (k = 0; k < i && k < j; k++)
	{
		s[k] = ((char *) ptr)[k];
	}

	free(ptr);
	return (s);
}
