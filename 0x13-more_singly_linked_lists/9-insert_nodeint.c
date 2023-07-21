#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given
 * position
 * @head: head node pointer
 * @idx: index to add at
 * @n: new node contents
 *
 * Return: new node address or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *next_node = NULL;
	listint_t *prev_node = NULL;
	unsigned int node = 0;

	next_node = malloc(sizeof(listint_t));
	if (next_node == NULL || idx > listint_len(*head))
	{
		free(next_node);
		return (NULL);
	}

	next_node->n = n;
	next_node->next = NULL;

	while (head != NULL)
	{
		if (node == idx)
		{
			if (node == 0)
			{
				next_node->next = *head;
				*head = next_node;

				return (next_node);
			}
			next_node->next = prev_node->next;
			prev_node->next = next_node;
			return (next_node);
		}
		else if ((node + 1) == idx)
			prev_node = *head;
		head = &((*head)->next);
		node++;
	}
	return (NULL);
}

/**
 * listint_len - counts nodes in
 * a linke list
 * @h: head node pointer
 *
 * Return: nodes count
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *c = h;
	size_t count = 0;

	while (c != NULL)
	{
		count += 1;
		c = c->next;
	}
	return (count);
}
