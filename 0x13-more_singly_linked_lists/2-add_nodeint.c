#include "lists.h"

/**
 * add_nodeint - adds new node at the start of
 * a listint_t list
 * @head: pointer to the head of node
 * @n: datatype integer for the struct
 *
 * Return: new element address or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
