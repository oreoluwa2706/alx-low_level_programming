#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * list_len - check for this parameter
 * @h: check for this function
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t indexing = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		indexing++;
		temp = temp->next;
	}
	return (indexing);
}
