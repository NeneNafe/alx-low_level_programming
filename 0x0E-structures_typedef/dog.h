#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - defines a new data type
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog owner
 *
 * Description: the function defines a new data type
 * struct do with elements like; name,age & owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef of the structure
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
