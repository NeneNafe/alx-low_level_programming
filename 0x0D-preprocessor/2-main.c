#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file it was compliled from,
 * followed by a new line
 * Return: Succes.
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
