#include "main.h"

/**
 * _strcmp - Function that compares two strings.
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: int, the difference between the last compared charachters
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((int) *s1 - (int) *s2);
}
