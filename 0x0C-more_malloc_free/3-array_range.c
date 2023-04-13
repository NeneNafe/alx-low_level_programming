#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum integer value
 * @max: maximum integer values
 * Return: Always Success.
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *str;

	if (min > max)
		return (NULL);
	str = malloc((sizeof(int) * (max - min)) +  sizeof(int));

			if (str == NULL)
			return (NULL);

			while (min <= max)
			{
				str[i] = min;
				i++;
				min++;
			}
			return (str);
}
