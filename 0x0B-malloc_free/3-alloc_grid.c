#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: Always Success.
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int m, n, l, p;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (m = 0; m < height; m++)
	{
		arr[m] = malloc(sizeof(int) * width);

		if (arr[m] == NULL)
		{
			for (n = m; n >= 0; n--)
			{
				free(arr[m]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (l = 0; l < height; l++)
	{
		for (p = 0; p < width; p++)
		{
			arr[l][p] = 0;
		}
	}
	return (arr);
}
