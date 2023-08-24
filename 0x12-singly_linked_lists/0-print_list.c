#include "lists.h"
#include <stdio.h>

/**
 * print_list - Function that prints a linked list
 *
 * @h: the linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	char *value;
	size_t numberOfNodes = 0;
	size_t size;

	if (!h)
		return (0);

	while (h)
	{
		value = h->str;
		size = h->len;

		if (!value)
		{
			value = "(nil)";
			size = 0;
		}
		printf("[%lu] %s\n", size, value);

		h = h->next;
		numberOfNodes++;
	}

	return (numberOfNodes);
}
