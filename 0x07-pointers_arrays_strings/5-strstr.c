#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: Origin
 * @needle: the substring
 * Return: Always Success
 */

char *_strstr(char *haystack, char *needle)
{
	int j;

	while (*haystack)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (*haystack != needle[j])
				return (needle);
		}
		needle++;
	}
	return (NULL);
}
