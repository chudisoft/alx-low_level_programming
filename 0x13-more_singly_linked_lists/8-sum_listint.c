#include "lists.h"

/**
 * sum_listint - returns the sum of data (n) of a
 * listint_t linked list
 * @head: head node pointer
 *
 * Return: data sum and 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int data_sum = 0;

	while (head)
	{
		data_sum += head->n;
		head = head->next;
	}

	return (data_sum);
}
