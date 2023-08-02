#include "main.h"

int is_palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - Function that returns
 * 1 if a string is a palindrome and 0 if not.
 *
 * @s: the string to check
 *
 * Return: int, 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int len = 0;
	char *temp = s;

	if (!s || *s == '\0')
		return (1);
	while (*temp++)
		len++;

	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - Function that helps is palindrome.
 *
 * @s: the string to check
 * @start: the start of the string
 * @end: the end of the string
 *
 * Return: int, 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}
