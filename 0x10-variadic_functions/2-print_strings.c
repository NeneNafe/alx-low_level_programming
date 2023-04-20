#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: A string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *s;
	unsigned int j;

	va_start(str, n);

	for (j = 0; j < n; j++)
	{
		s = va_arg(str, char *);
		if (s == NULL)
			printf("(nil)");
		else
		printf("%s", s);

		if (j != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
