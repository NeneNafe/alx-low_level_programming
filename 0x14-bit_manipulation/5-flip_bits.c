#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need
 * to flip to get from one number to another
 * @n: unsigned long int input1
 * @m: unsigned long int input2
 *
 * Return: Always success.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int sum = 0;

	while (xor)
	{
		sum += xor & 1;
		xor >>= 1;
	}
	return (sum);
}
