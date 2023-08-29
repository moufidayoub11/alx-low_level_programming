#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: pointer to the head of the linked list
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head;
	listint_t *slow = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != head)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}