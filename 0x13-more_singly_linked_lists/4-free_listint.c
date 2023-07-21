#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of the node pointer
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *_node;

	while (head != NULL)
	{
		_node = head;
		head = head->next;
		free(_node);
	}
}
