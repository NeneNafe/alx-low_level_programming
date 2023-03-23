#include "main.h"

/**
 * print_line - that  draws a straight line in the terminal
 * @n: the number of times the character
 * Return: if n is 0 or less, print \n
 */

void print_line(int n)

{
	while (n-- > 0)
	{
		putchar('_');
	}
		putchar('\n');
}
