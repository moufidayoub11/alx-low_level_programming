#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Program that  that prints the number of
 * arguments passed into it.
 *
 * @argc: number of arguments
 * @argv: an array of arguments
 *
 * Return: 0 (successful)
 *
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
