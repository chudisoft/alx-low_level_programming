#include "lists.h"

/**
 * print_listint - prints listint_t list members
 * @h: pointer to the struct
 *
 * Return: number of child nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int nodeCount = 0;
	const listint_t *new_node = h;

	for (; new_node; new_node = new_node->next)
	{
		printf("%d\n", new_node->n);
		nodeCount++;
	}

	return (nodeCount);
}
