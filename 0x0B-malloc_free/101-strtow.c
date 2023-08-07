#include "main.h"
#include <stdlib.h>

/**
 * count_words - helper function to count the number of words in a string
 *
 * @str: string to evaluate
 *
 * Return: number of words in the string
 */
int count_words(char *str)
{
	int in_word, char_index, word_count;

	in_word = 0;
	char_index = 0;
	word_count = 0;

	while (str[char_index] != '\0')
	{
		if (str[char_index] == ' ')
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			word_count++;
		}

		char_index++;
	}

	return (word_count);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer, pointer to a word list or null if failed
 */
char **strtow(char *str)
{
	char **word_matrix, *word_tmp;
	int i, wmi, word_count = 0, str_len = 0, c = 0, word_start, word_end;

	while (str[str_len])
		str_len++;
	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	word_matrix = (char **) malloc(sizeof(char *) * (word_count + 1));
	if (word_matrix == NULL)
		return (NULL);

	for (i = 0; i <= str_len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				word_end = i;
				word_tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (word_tmp == NULL)
					return (NULL);
				while (word_start < word_end)
					*word_tmp++ = str[word_start++];
				*word_tmp = '\0';
				word_matrix[wmi] = word_tmp - c;
				wmi++;
				c = 0;
			}
		}
		else if (c++ == 0)
			word_start = i;
	}

	word_matrix[wmi] = (NULL);

	return (word_matrix);
}
