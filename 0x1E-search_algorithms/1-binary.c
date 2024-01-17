#include "search_algos.h"

/**
* binary_search - The prototype
* @array: the array to seach
* @size: the size of the array
* @value: the integer value
*
* Description: a function that searches for a value in a sorted
* array of integers using the Binary search algorithm
* Return: -1
*/
int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;

	int i;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
