#include "calc.h"

/**
 * op_add - adds the sum of two integers
 * @a: first int
 * @b: second int
 * Return: Always Success.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first int
 * @b: second int
 * Return: Success.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - gives the product of two integers
 * @a: int 1
 * @b: int 2
 * Return: Success.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: int 1
 * @b: int 2
 * Return: Success.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - gives the remainder of the division of two integers
 * @a: int 1
 * @b: int 2
 * Return: Success.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
