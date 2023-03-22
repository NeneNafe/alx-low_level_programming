#include <stdio.h>

/**
 * main - Prints the sum of all the multiples of 3 or 5 below 1024
 * Return: Always (Success)
 */

int main(void)


{
	int a, d = 0;

	while (a < 1024)
	{
	if ((a % 3 == 0) || (a % 5 == 0))
	{
	d += a;
	}
	a++;
	}
	printf("%d\n", d);
	return (0);
}
