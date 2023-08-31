#include "main.h"

/**
 * binary_to_uint - print dicimal representation of a binary number
 *
 * @b: binary number
 *
 * Return: the decimal representation
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = strlen(b) - 1; /* 0 indexed */
	int digit = 0;

	if (b == NULL || strlen(b) == 0)
		return (0);

	while (len >= 0)
	{
		digit = b[len] - '0';
		if (digit < 0 || digit > 1)
			return (0);

		result |= (digit << (strlen(b) - 1 - len));
		len--;
	}

	return (result);
}
