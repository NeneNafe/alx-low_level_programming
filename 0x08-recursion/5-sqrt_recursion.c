#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Integer variable
 * Return: -1 if n is not square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates natural square root
 * @n: the bese number
 * @i: iterate number
 * Return: the natural  square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
