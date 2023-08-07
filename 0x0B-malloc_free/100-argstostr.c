#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Function that concatenates all the arguments of your program.
 *
 * @ac: the size of the args
 * @av: the args
 *
 * Return: char pointer, pointer to the new string or null if failed
 */

char *argstostr(int ac, char **av)
{
	char *str, *temp;
	size_t size = 0, i, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < (size_t) ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
	size += ac;

	str = malloc(sizeof(char) * size);

	if (!str)
		return (NULL);

	temp = str;

	for (i = 0; i < (size_t) ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			*temp++ = av[i][j];
		if (i == (size_t) (ac - 1))
			*temp++ = '\0';
		else
			*temp++ = '\n';
	}

	return (str);
}
