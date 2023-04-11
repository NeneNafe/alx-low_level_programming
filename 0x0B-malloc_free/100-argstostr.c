#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: Argument count
 * @av: Argument vector
 * Return: Success.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;

	char *arg;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}

	l += ac;


	arg = malloc(l + 1 * sizeof(char));

	if (arg == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arg[k] = av[i][j];

			k++;
		}
		if (arg[k] == '\0')
		{
			arg[k++] = '\n';
		}
	}

	return (arg);
}
