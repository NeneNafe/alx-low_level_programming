#include "main.h"

int count_words(char *str);
int word_len(char *str);
char **strtow(char *str);

/**
 * word_len - locates the length of string
 * @str: string to be searched
 * Return: Success.
 */

int word_len(char *str)
{
	int index = 0, lngth = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		lngth++;
		index++;
	}
	return (lngth);
}

/**
 * count_words - counts words in a string
 * @str: The string to be counted
 * Return: Success
 */

int count_words(char *str)
{
	int index = 0, wrds = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			wrds++;
			index += word_len(str + index);
		}
	}
	return (wrds);
}
/**
 * **strtow - splits a string into words
 * @str: string variables
 * Return: Always Success
 */

char **strtow(char *str)
{
	char **strngs;
	int index = 0, wrds, n, letters, m;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wrds = count_words(str);
	if (wrds == 0)
		return (NULL);
	strngs = malloc(sizeof(char *) * (wrds + 1));
	if (strngs == NULL)
		return (NULL);
	for (n = 0; n < wrds; n++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);

		strngs[n] = malloc(sizeof(char) * (letters + 1));

		if (strngs[n] == NULL)
		{
			for (; n >= 0; n--)
				free(strngs[n]);

			free(strngs);
			return (NULL);
		}

		for (m = 0; m < letters; m++)
			strngs[n][m] = str[index++];

		strngs[n][m] = '\0';
	}

	return (strngs);
}
