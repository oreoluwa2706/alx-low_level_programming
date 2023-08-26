#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - check for this function
 * @head: check for this parameter
 * @str: check for this parameter
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *prepend;
	list_t *temp = *head;
	size_t indexing = 0;

	if (str != NULL)
	{
		while (str[indexing])
			indexing++;
	}
	prepend = malloc(sizeof(list_t));
	if (!prepend)
		return (NULL);
	prepend->str = strdup(str);
	prepend->len = indexing;
	prepend->next = NULL;
	if (*head == NULL)
	{
		*head = prepend;
		return (prepend);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = prepend;
	return (prepend);
}
