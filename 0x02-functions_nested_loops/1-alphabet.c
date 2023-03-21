#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet, in lowercase followed by a new line
 */

void print_alphabet(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
}
