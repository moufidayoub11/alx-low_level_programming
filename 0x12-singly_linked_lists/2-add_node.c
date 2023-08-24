#include "lists.h"
/**
 * add_node - Function that adds a new node at the beginning of a list_t list
 *
 * @head: the head of a ll
 * @str: the value of the node
 *
 * Return: the number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

	while (str[len])
		len++;

	if (!head && !str)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);

	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	new->len = len;
	new->next = *head;

	*head = new;
	return (*head);
}
