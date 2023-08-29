#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 *
 * @head: A pointer to the pointer of the first node of the list
 *
 * Return: The head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int tempN;
	listint_t *tempH;

	if (!*head)
		return (0);

	tempN = (*head)->n;
	tempH = (*head)->next;
	free(*head);
	*head = tempH;

	return (tempN);
}
