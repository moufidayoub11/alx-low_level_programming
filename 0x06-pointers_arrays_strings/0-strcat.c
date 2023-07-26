#include "main.h"

/**
 * _strcat - Function that appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end)
		dest_end++;

	while (*src)
	{
		*dest_end = *src;
		src++;
		dest_end++;
	}

	*dest_end = '\0';

	return (dest);
}
