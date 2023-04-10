#include "main.h"
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: Always Success
 */

int main(int argc, char **argv)
{
	int coins, cents;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	cents = atoi(argv[1]);

			while (cents > 0)
			{
				coins++;
				if ((cents - 25) >= 0)
				{
				cents -= 25;
				continue;
				}
			if ((cents - 10) >= 0)
			{
				cents -= 10;
			continue;
			}
			if ((cents - 5) >= 0)
			{
				cents -= 5;
				continue;
			}
			if ((cents - 2) >= 0)
			{
				cents -= 2;
				continue;
			}
			cents--;
			}
			printf("%d\n", coins);
			return (0);
}
