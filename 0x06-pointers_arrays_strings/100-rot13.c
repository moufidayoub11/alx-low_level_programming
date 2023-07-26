#include "main.h"

/**
 * rot13 - encodes a string in rot13
 *
 * @s: string to be encoded
 *
 * Return: pointer to the new string
 */
char *rot13(char *s)
{
	int i, j;

	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13_alp[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; alphabet[j]; j++)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rot13_alp[j];
				break;
			}
		}
	}

	return (s);
}
