#include "main.h"
#include <string.h>


/**
 * _strlen_recursion - returns lenght of a string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character of the string
 * @s: string variable
 * @m1: smallest variable
 * @m2: biggest variable
 * Return: .
 */

int comparator(char *s, int m1, int m2)
{
	if (*(s + m1) == *(s + m2))
	{
		if (m1 == m2 || m1 == m2 + 1)
			return (1);
	return (0 + comparator(s, m1 + 1, m2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: the string variable
 * Return: 1 if palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
