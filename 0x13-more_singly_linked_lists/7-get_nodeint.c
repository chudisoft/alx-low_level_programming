#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of
 * a listint_t linked list
 * @head: head node pointer
 * @index: node index
 *
 * Return: node address or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n_address = 0;

	while (head)
	{
		if (n_address++ == index)
			return (head);

		head = head->next;
	}

	return (NULL);
}
