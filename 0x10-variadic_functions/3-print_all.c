#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments
 *
 * Description: print_all is a function that prints anything
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	char *str, *j = "";
	int i = 0;
	va_list prints;

	va_start(prints, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", j, va_arg(prints, int));
					break;
				case 'i':
					printf("%s%d", j, va_arg(prints, int));
					break;
				case 'f':
					printf("%s%f", j, va_arg(prints, double));
					break;
				case 's':
					str = va_arg(prints, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", j, str);
					break;
				default:
					i++;
					continue;
			}
			j = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(prints);
}
