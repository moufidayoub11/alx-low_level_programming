#include "main.h"

/**
 * _strncpy - Function that copies a string.
 *
 * @dest: destination string
 * @src: source string
 * @n: bytes to copy from src
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
