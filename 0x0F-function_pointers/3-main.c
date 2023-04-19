#include "3-calc.h"

/**
 * main - prints all arguments
 *
 * @argv: argument vector
 * @argc: argument count
 * Return: Success.
 */

int main(int argc, char **argv)
{
	int num1, num2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (99);
	}

	f = get_op_func(argv[2]);


	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", f(num1, num2));

	return (0);
}
