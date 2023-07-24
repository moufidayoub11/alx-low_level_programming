#include "main.h"

/**
 * _strlen - Function that counts how many charin a given string
 *
 * @s: string
 *
 * Return: int, length of s
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s++)
		count++;

	return count
}
