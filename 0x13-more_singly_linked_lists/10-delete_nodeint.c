#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 *
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = (*head);
	listint_t *toDel;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp || !temp->next)
			return (-1);
		temp = temp->next;
		i++;
	}

	toDel = temp->next;
	temp->next = toDel->next;
	free(toDel);
	return (1);
}
