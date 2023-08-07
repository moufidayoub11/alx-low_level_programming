#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Function that concatenates two strings.
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: char pointer, pointer to the new string or null if failed
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	unsigned int size, i, s1_size = 0, s2_size = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[s1_size] != '\0'; s1_size++)
		continue;

	for (; s2[s2_size] != '\0'; s2_size++)
		continue;

	size = s1_size + s2_size;

	array = malloc(sizeof(char) * size + 1); /* +1 for the null char  */

	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		if (i < s1_size)
		{
			array[i] = s1[i];
		}
		else
			array[i] = s2[i - s1_size];
	}

	array[size] = '\0';
	return (array);
}
