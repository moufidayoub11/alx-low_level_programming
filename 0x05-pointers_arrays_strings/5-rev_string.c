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
	char *temp;

	while (s[count])
		count++;

	temp = malloc(count * sizeof(char));
	while (count--)
		temp  = s[count];

	count = 0;
	while (temp[count])
	{
		s[i] = temp[count];
	}
}
