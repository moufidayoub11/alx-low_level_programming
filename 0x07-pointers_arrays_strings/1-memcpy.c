#include "main.h"

/**
 * _memcpy - Function that copies the first n bytes memory area from src
 * to dest.
 *
 * @dest: destination memory area
 * @src: source memory area
 * @n: the number of bytes to copy
 *
 * Return: pointer, Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = *(src++);

	return (dest);
}
