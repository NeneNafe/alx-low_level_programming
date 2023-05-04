#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: unsigned long int input
 * @index: the index, starting from 0
 * of the bit you want to set.
 *
 * Return: 1 if it works, or -1 on error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
