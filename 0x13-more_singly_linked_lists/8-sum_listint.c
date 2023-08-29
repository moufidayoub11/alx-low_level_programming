#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 *
 * @head: pointer to head of list
 *
 * Return: sum of all the data (n) in the list, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
