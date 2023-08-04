#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: Program hat multiplies two numbers.
 *
 * @argc: number of arguments
 * @argv: an array of arguments
 *
 * Return: 0 (successful)
 *
 */

int main(int argc, char **argv)
{
	int i;
	int res = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		res *= atoi(argv[i]);
	}

	printf("%d\n", res);

	return (0);
}
