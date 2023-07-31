#include "main.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes.
 *
 * @s: the string
 * @accept: the substring
 *
 * Return: pointer, Pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;

	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}

	}

	return (s);
}
