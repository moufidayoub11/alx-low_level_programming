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
	size_t numberOfNodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		char *value = h->str;
		size_t size = h->len;

		if (!value)
		{
			value = "(nil)";
			size = 0;
		}
		printf("[%u] %s\n", size, value);

		h = h->next;
		numberOfNodes++;
	}

	return (numberOfNodes);
}
