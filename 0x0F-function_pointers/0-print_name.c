#include "function_pointers.h"

/**
 * print_name - function that takes a name and the operation function pointer
 *
 * @name: name to be printed
 * @f: operation function pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}
