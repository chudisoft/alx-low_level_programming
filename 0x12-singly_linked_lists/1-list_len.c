#include "lists.h"

/**
 * list_len - counts items in a linked list_t list
 * @h: the list
 *
 * Return: count of items in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t els;

	for (els = 0; h; h = h->next)
		els++;

	return (els);
}
