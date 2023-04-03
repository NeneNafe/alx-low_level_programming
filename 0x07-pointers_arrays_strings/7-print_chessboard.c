#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: pointer
 * Return: Always Success
 */

void print_chessboard(char (*a)[8])
{
	int j, k;

	j = k = 0;
	while (j < 8)
	{
		k = 0;
		while (k < 8)
		{
			_putchar(a[j][k]);
			k++;
		}
		_putchar('\n');
		j++;
	}
}
