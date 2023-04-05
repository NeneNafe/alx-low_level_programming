#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: an integer variable
 * Return: -1 if n is lower than 0 = error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
