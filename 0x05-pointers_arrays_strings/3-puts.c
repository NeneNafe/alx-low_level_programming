#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to sdtout
 * @*str: String pointer
 * Return: Always 0.
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
