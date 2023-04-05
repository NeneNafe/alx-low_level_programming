#include "main.h"
#include <math.h>

int check_prime(int n, int j);

/**
 * is_prime_number - return 1 if the integer is a prime number
 * @n: Am integer variable
 * Return: 1 if prime number otherwise 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Checks if number is a prime
 * @n: base number
 * @j: iterative times
 * Return: 1 when prime number or 0 when not
 */

int check_prime(int n, int j)
{
	if (n <= 1)
		return (0);

	if (n % j == 0 && j > 1)
		return (0);

	if ((n / j) < j)
		return (1);

	return (check_prime(n, j + 1));
}
