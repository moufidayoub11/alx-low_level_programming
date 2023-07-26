#include "main.h"

/**
 * _strncat - Function that concatenates two strings.
 *
 * @dest: destination string
 * @src: source string
 * @n: bytes to copy from src
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;

	while (*dest_end)
		dest_end++;

	while (n && *src)
	{
		*dest_end = *src;
		src++;
		dest_end++;
		n--;
	}

	*dest_end = '\0';

	return (dest);
}
