#include "dog.h"

/**
 * _strlen - returns the length of the string
 * @s: the string to be returned
 * Return: Success
 */

int _strlen(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

/**
 * *_strcpy - copies a string
 * @dest: destination
 * @src: string to be copied
 * Return: Success.
 */

char *_strcpy(char *dest, char *src)
{
	int n, len;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (n = 0; n < len; n++)
	{
		dest[n] = src[n];
	}

	return (dest);
}

/**
 * *new_dog - creates a new dog
 * @name: Name of new dog
 * @age: New age of dog
 * @owner: New owner
 * Return: Success.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int s1, s2;

	s1 = _strlen(name);
	s2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (s1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (s2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
