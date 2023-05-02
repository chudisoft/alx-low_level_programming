#include "lists.h"

/**
 * listint_len - returns linked listint_t list
 * elements count
 *
 * @h: pointer of the struct
 *
 * Return: elements count
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
