#include "main.h"

/**
* _islower - Function that check if a given char is uppercase
*
* @c: The char we need to check
*
* Return: int, 1 is uppercase 0 if else
*/

int _islower(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
