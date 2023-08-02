#include "main.h"

/**
 * wildcmp - compares two strings and returns 1
 * if the strings can be considered identical,
 * otherwise return 0.
 * @str1: the normal string
 * @str2: the special string containing "*"
 *
 * Return: 1 if identical, else 0
 */
int wildcmp(char *str1, char *str2)
{
	if (*str2 == '\0' && *str1 == '\0')
		return (1);

	if (*str2 == '*' && *(str2 + 1) != '\0' && *str1 == '\0')
		return (0);

	if (*str1 == *str2)
		return (wildcmp(str1 + 1, str2 + 1));

	if (*str2 == '*')
		return (wildcmp(str1, str2 + 1) || wildcmp(str1 + 1, str2));

	return (0);
}
