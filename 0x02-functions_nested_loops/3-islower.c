#include "main.h"

/**
* _islower - Function that check if a given char is lowercase
*
* @c: The char we need to check
*
* Return: int, 1 is lowercase 0 if else
*/

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
