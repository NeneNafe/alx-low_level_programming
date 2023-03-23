#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: is the size of the square
 * Return: void
 */

void print_square(int size)

{
	int a, b;

	if (size > 0)
	{

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < (size -1); b++)
		{
			putchar('#');
		}
		putchar('#');
		putchar('\n');
	}
	}
	else
	{
		putchar('\n');
	}
}
