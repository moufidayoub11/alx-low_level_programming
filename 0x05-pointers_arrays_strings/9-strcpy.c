#include "main.h"

/**
 * _strcpy - Function that copies src string into dest string
 *
 * @dest: destination
 * @src: source
 *
 * Return: string, new copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; // Copy the null terminator at the end
	
	return (dest);
}
