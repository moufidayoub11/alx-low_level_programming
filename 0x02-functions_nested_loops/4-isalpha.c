#include "main.h"

/**
* _isalpha - Function that check if a given char is an alphabet
*
* @c: The char we need to check
*
* Return: int, 1 is alphabet 0 if else
*/

int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
