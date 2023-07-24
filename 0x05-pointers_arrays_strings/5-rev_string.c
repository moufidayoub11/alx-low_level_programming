#include "main.h"

/**
 * rev_string - Function that reverse a given string
 *
 * @s: string
 *
 * Return: void, No return value
 */

void rev_string(char *s)
{
	int count = 0;
	int i;
	char temp;

	while (s[count])
		count++;

	for (i = 0; i < count / 2; i++)
	{
		temp  = s[i];
		s[i] = s[count - i - 1];
		s[count - i - 1] = temp;
	}
}
