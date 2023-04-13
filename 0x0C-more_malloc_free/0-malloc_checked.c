#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: Input variable
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(unsigned int *) * b);

	if (p == NULL)

		exit(98);
	return (p);
}
