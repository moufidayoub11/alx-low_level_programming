#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: pointer to pointer of first node of listint_t list.
 * @idx: the index of the list where the new node should be added.
 * @n: integer data for the new node.
 *
 * Return: Address of the new node or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = (*head);

	if (!new)
		return (NULL);

	new->n = n;

	while (temp)
	{
		if (i == idx - 1)
			break;
		temp = temp->next;
		i++;
	}

	if (!temp)
		return (NULL);

	new->next = temp->next;
	temp->next = new;

	return (new);
}
