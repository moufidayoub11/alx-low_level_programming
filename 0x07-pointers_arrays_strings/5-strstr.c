#include "main.h"
#include <stddef.h>

/**
 * _strstr - Function that searches a needle inside a haystack.
 *
 * @haystack: the string
 * @needle: the substring
 *
 * Return: pointer, Pointer to the first byte of
 * the word that matches the needle
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;

	if (!*needle)
		return (haystack);

	for (; *haystack; haystack++)
	{
		for (; needle[i] && needle[i] == haystack[i]; i++)
			continue;

		if (needle[i] == '\0')
			return (haystack);
	}

	return (NULL);
}
