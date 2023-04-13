#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: Input variable
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
