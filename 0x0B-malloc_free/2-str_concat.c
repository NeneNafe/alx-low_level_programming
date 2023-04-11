#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: String 1
 * @s2: string 2
 * Return: Success.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	s3 = malloc((i + j + 1) * sizeof(char));

	while (s3 == NULL)
		return (NULL);
	i = j = 0;

	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		s3[i] = s2[j];
		i++, j++;
	}

	s3[i] = '\0';

	return (s3);
}
