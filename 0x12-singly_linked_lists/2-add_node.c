#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - counts a string
 * @s: the string
 *
 * Return: count of string char
 */

int _strlen(const char *s)
{
	int j;

	for (j = 0; s[j]; j++)
		;
	return (j);
}

/**
 * add_node - adds new nodes to the list
 * @head: current index of the list
 * @str: string to add to the head
 *
 * Return: pointer to the current position in the list
 */

list_t *add_node(list_t **head, const char *str)
{
	int j, strCount;
	char *content;
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);
	strCount = _strlen(str);
	new = *head;
	content = malloc((strCount + 1) * sizeof(char));
	if (content == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		content[j] = str[j];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(content);
		return (NULL);
	}
	new->str = content;
	new->len = strCount;
	new->next = *head;
	*head = new;

	return (new);
}
