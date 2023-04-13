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
	unsigned int i;
	char *s;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		s = malloc(new_size);

		if (s == NULL)
			return (NULL);
		return (s);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	s = malloc(new_size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		s[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (s);
}
