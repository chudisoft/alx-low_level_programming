#include "lists.h"

/**
 * pop_listint - deletes node head of a listint_t
 * linked list
 * @head: pointer to the head of the node
 *
 * Return: head node's data (n) and 0 if empty
 */

int pop_listint(listint_t **head)
{
	int _data = 0;
	listint_t *t_node;

	if (*head)
	{
		t_node = (*head)->next;
		_data = (*head)->n;
		free(*head);
	}

	*head = t_node;

	return (_data);
}
