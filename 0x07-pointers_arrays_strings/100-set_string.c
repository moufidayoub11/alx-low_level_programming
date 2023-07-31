#include "main.h"

/**
 * set_string - Function that sets the value of a pointer to a char.
 *
 * @s: pointer to the pointer of s
 * @to: the char
 *
 * Return: void, returns nothing
 */

void set_string(char **s, char *to)
{
	(*s) = to;
}
