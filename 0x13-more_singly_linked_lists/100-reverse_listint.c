#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to node head
 *
 * Return: first node pointer of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *nxt_node;

	if (!*head)
		return (0);
	while ((*head)->next != NULL)
	{
		nxt_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = (*head);
		(*head) = nxt_node;
	}

	(*head)->next = prev_node;
	return (*head);
}
