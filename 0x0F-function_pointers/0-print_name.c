#include "function_pointers.h"

/**
 * print_name - this function prints a name
 * @name: the name of the character to be printed
 * @f: pointer to the function that return nothing
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
