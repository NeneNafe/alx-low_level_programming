#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @b: The number to be computed
 * Return: Absolute value of number or zero
 */

int _abs(int b)

{
	if (b < 0)
	{
		int abs_val;

		abs_val = b * -1;
		return (abs_val);
	}
	return (b);
}
