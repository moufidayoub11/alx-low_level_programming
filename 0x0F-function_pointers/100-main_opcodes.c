#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints its own opcodes
 *
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int opcodeCount, i;
	char *codeBytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	opcodeCount = atoi(argv[1]);

	if (opcodeCount < 0)
	{
		printf("Error\n");
		return (2);
	}

	codeBytes = (char *)main;

	for (i = 0; i < opcodeCount; i++)
	{
		printf("%02hhx", codeBytes[i]);
		if (i != opcodeCount - 1)
			putchar(' ');
	}

	putchar('\n');

	return (0);
}
