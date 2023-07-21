#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: datatype pointer of the struct
 *
 * Return: size of the freed list, sets the head to NULL
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int next_data;
	listint_t *tmp_list;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		next_data = *h - (*h)->next;
		if (next_data > 0)
		{
			tmp_list = (*h)->next;
			free(*h);
			*h = tmp_list;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;
	return (count);
}
