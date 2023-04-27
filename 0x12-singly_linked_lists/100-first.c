#include <stdio.h>

/**
 * startupfun - prints before the main
 *
 * Return: ALways Success
 */

void __attribute__ ((constructor)) startupfun()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
