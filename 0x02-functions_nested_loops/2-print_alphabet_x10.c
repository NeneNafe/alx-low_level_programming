#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet in lowercace ten times
 * Return: void
 */

void print_alphabet_x10(void)

{
	int b;
	int c;

	for (b = 0; b <  10; b++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
