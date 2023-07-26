#include "main.h"

/**
 * cap_string - Function that capitalize each word in a strings
 *
 * @s: string
 *
 * Return: pointer to the new string
 */

char *cap_string(char *s)
{
	char *temp_s = s;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.',
			'!', '?', '"', '(', ')', '{', '}'};
	int i = 0;

	while (*temp_s)
	{
		if (i == 0 && *temp_s >= 'a' && *temp_s <= 'z')
			*temp_s -= 32; /* 'a' - 'A' = 32  */

		for (i = 0; i < 13; i++)
		{
			if (*temp_s == sep[i])
			{
				if (*(temp_s + 1) >= 'a' && *(temp_s + 1) <= 'z')
					*(temp_s + 1) -= 32; /* 'a' - 'A' = 32  */
			}
		}
		temp_s++;
	}

	return (s);
}
