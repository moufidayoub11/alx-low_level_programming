#include "main.h"

/**
 * string_toupper - Function that turns every lowercase char in a strings
 * to uppercase
 *
 * @s: string
 *
 * Return: int, the difference between the last compared charachters
 */

char *string_toupper(char *s)
{
	char *temp_s = s;

	while (*temp_s)
	{
		if (*temp_s >= 'a' && *temp_s <= 'z')
			*temp_s -= 32; /* 'a' - 'A' = 32  */
		temp_s++;
	}

	return (s);
}
