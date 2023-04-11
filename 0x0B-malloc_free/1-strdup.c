#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: string variable
 * Return: Always Success.
 */

char *_strdup(char *str)
{
	char *s;
	int i, n = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	s = malloc((i + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (n = 0; str[n]; n++)
		s[n] = str[n];

	return (s);
}
