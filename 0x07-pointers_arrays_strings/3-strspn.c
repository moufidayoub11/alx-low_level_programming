#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring.
 *
 * @s: the string
 * @accept: the prefix substring
 *
 * Return: unsigned int, lenght of prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i = 0;

	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
		}

		if (!accept[i])
			return (count);
	}

	return (count);
}
