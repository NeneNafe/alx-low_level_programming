#include "function_pointers.h"

/**
 * array_iterator - executes a funtion given as a parameter
 * on each element of an array
 * @array: The array
 * @size: size of the array
 * @action: a pointer to the function you need to use
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array && action)
		for (n = 0; n < size; n++)
			action(array[n]);
}
