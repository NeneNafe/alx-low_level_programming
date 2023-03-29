#include "main.h"

/**
 * *rot13 -  encodes a string using rot13
 * @s: input value
 * Return: n value
 */

char *rot13(char *s)
{
	int m;
	int n;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; n < 52; n++)
		{
			if (s[m] == input[n])
			{
				s[m] = output[n];
				break;
			}
		}
	}
	return (s);
}
