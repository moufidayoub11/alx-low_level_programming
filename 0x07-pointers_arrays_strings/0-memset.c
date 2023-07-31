#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte.
 *
 * @s: the memory area pointed to by s
 * @b: constant byte
 * @n: the number of bytes to fill
 *
 * Return: pointer, Pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
