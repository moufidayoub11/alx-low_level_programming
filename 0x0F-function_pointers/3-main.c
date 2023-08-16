#include "3-calc.h"

/**
 * main - program that perfroms + - * / %
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int a, b, res;
	char op;
	int (*operation)(int, int) = NULL;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	op = *argv[2];
	b = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n");
		return (99);
	}

	if ((op == '/' || op == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	res = operation(a, b);

	printf("%d\n", res);

	return (0);
}
