#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - check for this function
 * @head: check for this parameter
 * @str: check for this parameter
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *append;

	size_t indexing = 0;

	while (str[indexing])
	{
		indexing++;
	}
	append = malloc(sizeof(list_t));
	if (!append)
		return (NULL);
	append->str = strdup(str);
	if (!append->str)
	{
		free(append);
		return (NULL);
	}
	append->len = indexing;
	append->next = *head;
	*head = append;
	return (*head);
}
