#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concat n bytes of a string to another string
 *
 * @s1: string to append to
 * @s2: string to concat from
 * @n: number of bytes from s2 to concat to s1
 *
 * Return: pointer to the result string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		res = malloc(sizeof(char) * (len1 + n + 1));
	else
		res = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!res)
		return (NULL);

	while (i < len1)
	{
		res[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		res[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		res[i++] = s2[j++];

	res[i] = '\0';

	return (res);
}
