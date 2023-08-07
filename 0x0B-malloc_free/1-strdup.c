#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: the string
 *
 * Return: char pointer, pointer to the string or null if failed
 */

char *_strdup(char *str)
{
	char *array;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		continue;

	array = malloc(sizeof(char) * i + 1); /* +1 for the null char  */

	if (!array)
		return (NULL);

	for (j = 0; j < i; j++)
		array[j] = str[j];

	array[i] = '\0';
	return (array);
}
