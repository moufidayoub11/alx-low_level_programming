#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Program that prints its name, followed by a new line.
 *
 * @argc: number of arguments
 * @argv: an array of arguments
 *
 * Return: 0 (successful)
 *
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	char *program_name = argv[0];

	printf("%s\n", program_name);

	return (0);
}
