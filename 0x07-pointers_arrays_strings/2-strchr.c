#include "main.h"

/**
 * _strchr - Function that locates a charachter in a string.
 *
 * @s: the string
 * @c: character to find
 *
 * Return: pointer, Pointer to c
 */

char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}

	return (s);
}
