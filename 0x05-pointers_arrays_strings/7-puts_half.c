#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: The string
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
	j++;
	}
	if (j % 2 == 1)
	{
	k = (j - 1) / 2;
	k += 1;
	}
	else
	{
	k = j / 2;
	}

	for (; k < j; k++)
	{
		putchar(str[k]);
	}
	putchar('\n');
}
