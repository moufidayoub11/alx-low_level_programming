#include "lists.h"
/**
 * free_list - Function that frees a linked list
 *
 * @head: the head of a ll
 *
 * Return: void, returns nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
