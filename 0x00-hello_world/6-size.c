#include <stdio.h>

/**
 * main - A program that prints the size of various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int e;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu btye(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
