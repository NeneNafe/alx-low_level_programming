#include "main.h"

/**
 * print_number - an integer
 * @n: The integer
 * Return: Nothing
 */

void print_number(int n)

{
	unsigned int i = n;

	if (n < 0)
	{
		putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	putchar(i % 10 + '0');
}
