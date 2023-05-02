#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a
 * listint_t
 * @head: head of the node pointer
 * @n: datatype integer for the struct
 *
 * Return: new element address or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *next_node;
	listint_t *temp_node = *head;

	next_node = malloc(sizeof(listint_t));

	if (next_node != NULL)
	{
		next_node->n = n;
		next_node->next = NULL;
	} else
		return (NULL);
	if (temp_node != NULL)
	{
		while (temp_node->next != NULL)
			temp_node = temp_node->next;

		temp_node->next = next_node;
	} else
		*head = next_node;

	return (next_node);
}
