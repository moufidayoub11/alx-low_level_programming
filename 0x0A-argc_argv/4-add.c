#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int i, res = 0;

	for (i = 1; i < argc; i++)
	{
		char *current_arg = argv[i];
		char *ptr = current_arg;

		while (*ptr != '\0')
		{
			if (!isdigit(*ptr))
			{
				printf("Error\n");
				return (1);
			}
			ptr++;
		}

		res += atoi(current_arg);
	}

	printf("%d\n", res);

	return (0);
}
