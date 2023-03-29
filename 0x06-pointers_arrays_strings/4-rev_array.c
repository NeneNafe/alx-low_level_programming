#include "main.h"

/**
 * reverse_array - reverses the conent of an array of integers
 * @a: An Integer
 * @n: Second integer
 * Return: Nothing!
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
