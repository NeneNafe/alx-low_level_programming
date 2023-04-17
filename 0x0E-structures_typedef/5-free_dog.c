#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer to the function
 * Return: Nothing.
 */

void free_dog(dog_t *d)
{
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		free(d->name);
	free(d->owner);
	free(d);
}
