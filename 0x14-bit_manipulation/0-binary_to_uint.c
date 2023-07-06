#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the character string to be converted
 *
 * Return: Always Success.
 */

unsigned int binary_to_uint(const char *b)
{
	int n = 0, t = 0;

	if (b == NULL)
		return (0);

	while (b[n] != '\0')
	{
		if (b[n] != '0' && b[n] != '1')
		{
			return (0);
		}
		t *= 2;
		if (b[n] == '1')
		{
			t += 1;
		}
		n++;
	}
	return (t);
}
