#include <stdlib.h>
#include "lists.h"

/**
 * free_list - check for this function
 * @head: check for this parameter
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *n_node;

	while (head != NULL)
	{
		n_node = head->next;
		free(head->str);
		free(head);
		head = n_node;
	}
}
