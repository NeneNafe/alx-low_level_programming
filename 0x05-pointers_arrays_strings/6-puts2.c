#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character
 * followed by a new line
 * @str: A string
 * Return: Always 0.
 */

void puts2(char *str)
{
	int n;
	int m = 0;

	while (str[m] != '\0')
	{
		m++;
	}

	for (n = 0; n < m; n += 2)
	{
		putchar(str[n]);
	}
	putchar('\n');
}
