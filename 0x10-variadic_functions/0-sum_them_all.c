#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: constant unsigned integer
 *
 * Return: Always Success
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argsum;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(argsum, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(argsum, int);
	}
	va_end(argsum);

	return (sum);
}

