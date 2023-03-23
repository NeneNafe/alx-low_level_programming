#include "main.h"

/**
 * print_diagonal - on the terminal
 * @n: the number of times the character
 * Return: n when the function is 0 or else
 */

void print_diagonal(int n)

{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
		{
			putchar(' ');
		}
	putchar('\\');

	if (len == (n - 1))
	{
		continue;
	}
	putchar('\n');
		}
	}
	putchar('\n');
}
