#include <stdio.h>

/**
* linear_search - the prototype
* @array: The array to search
* @size: the sie og the arr
* @value: value to be searched
* Description: This is a function that searches for a value in an array
* Return: Always 0
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < (int)size; ++i)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
