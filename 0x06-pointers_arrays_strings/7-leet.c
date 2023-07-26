#include "main.h"

/**
 * leet - Function that encodes a string into 1337.
 *
 * @s: string
 *
 * Return: pointer to the new string
 */

char *leet(char *s)
{
	char *temp = s;
	char replacements[256] = {0};

	replacements['a'] = '4';
	replacements['A'] = '4';
	replacements['e'] = '3';
	replacements['E'] = '3';
	replacements['o'] = '0';
	replacements['O'] = '0';
	replacements['t'] = '7';
	replacements['T'] = '7';
	replacements['l'] = '1';
	replacements['L'] = '1';

	while (*temp)
	{
		char ch = *temp;
		int new_ch = replacements[(unsigned char) ch];

		if (((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) && new_ch)
			*temp = new_ch;

		temp++;
	}

	return (s);
}
