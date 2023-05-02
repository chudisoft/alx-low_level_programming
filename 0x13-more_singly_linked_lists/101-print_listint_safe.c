#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the node
 *
 * Return: count of nodes in the list, if fails: exit with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	long int _data;

	while (head)
	{
		_data = head - head->next;
		node_count++;

		printf("[%p] %d\n", (void *)head, head->n);
		if (_data > 0)
			head = head->next;

		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (node_count);
}
