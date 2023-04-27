#include "lists.h"

/**
 * add_node_end - adds a node to end of singly linked list
 * @head: pointer to the head of the list
 * @str: node data to store
 *
 * Return: pointer to new node element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *tmp = *head;

	newNode = malloc(sizeof(*newNode));
	if (newNode)
	{
		newNode->str = strdup(str);
		newNode->len = strlen(str);
		newNode->next = NULL;
		if (!(*head))
		{
			*head = newNode;
			return (newNode);
		}
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = newNode;
	}

	return (newNode);
}
