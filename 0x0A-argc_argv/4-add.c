#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: Program that adds positive numbers.
 *
 * @argc: number of arguments
 * @argv: an array of arguments
 *
 * Return: 0 (successful)
 *
 */

int main(int argc, char **argv)
{
	int i, res = 0, num;
	char *char_num;

	for (i = 1; i < argc; i++)
	{
		char_num = argv[i];
		num = atoi(char_num);

		if (*char_num != '0' && num == 0)
		{
			printf("Error\n");
			return (1);
		}

		res += num;
	}

	printf("%d\n", res);

	return (0);
}
