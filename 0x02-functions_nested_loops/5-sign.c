#include "main.h"

/**
 * print_sign - Printe the sign of a number
 * @n: The number to be printed
 * Return: 1 for positive run, -1 fro netive run or 0 for anything else
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
