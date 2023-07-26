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
	char *temp_dest = dest;

	while (n && *src)
	{
		*temp_dest = *src;
		src++;
		temp_dest++;
		n--;
	}

	while (n)
	{
		temp_dest = '\0';
		temp_dest++;
		n--;
	}

	return (dest);
}
