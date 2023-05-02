#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * of a linked list
 * @head: pointer to the head of the node
 * @index: node index
 *
 * Return: 1 if success, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old_node = NULL;
	listint_t *prev_node = NULL;
	unsigned int address = 0, list_len = listint_len(*head);

	if ((index >  list_len) || (list_len == 0))
		return (-1);

	while (head != NULL)
	{
		if (address == index)
		{
			old_node = *head;
			if (address == 0)
			{
				*head = old_node->next;
				free(old_node);
				return (1);
			}
			prev_node->next = old_node->next;
			free(old_node);
			return (1);
		}
		else if ((address + 1) == index)
			prev_node = *head;
		head = &((*head)->next);
		address++;
	}
	return (-1);
}

/**
 * listint_len - count the number of nodes in a
 * linked list
 * @head: pointer to the node head
 *
 * Return: number of element in nodes
 */

size_t listint_len(const listint_t *head)
{
	const listint_t *newNode = head;
	size_t count = 0;

	while (newNode != NULL)
	{
		count += 1;
		newNode = newNode->next;
	}
	return (count);
}
