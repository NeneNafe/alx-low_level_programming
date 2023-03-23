#include "main.h"

/**
 * print_triangle - followed by a new line
 * @size: size of the triangle
 * Return: Nothing
 */

void print_triangle(int size)

{
	int tri1, tri2;

	if (size > 0)
	{
		for (tri1 = 1; tri1 <= size; tri1++)
		{
			for ((tri2 = size - tri1); tri2 > 0; tri2++)
			{
				putchar(' ');
			}
			for (tri2 = 0; tri2 < tri1; tri2++)
			{
				putchar('#');
			}
			if (tri1 == size)
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
