#include "main.h"
#include <string.h>

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The string
 * @*s: String pointer
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		putchar(s[c]);
	}
	putchar('\n');
}
