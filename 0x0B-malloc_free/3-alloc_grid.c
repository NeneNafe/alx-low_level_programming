#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: Always Success.
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;

	int **d;

	if (width <= 0 || height <= 0)
		return (NULL);

	d = malloc(height * sizeof(int *));

				if (d == NULL)

				return (NULL);
	for (i = 0; i < height; i++)
	{
		d[i] = malloc(width * sizeof(int *));

		if (d[i] == NULL)
		{
			for (; i >= 0; i--)
				free(d[i]);

			free(d);

			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)

			d[i][j] = 0;
	}

	return (d);
}
