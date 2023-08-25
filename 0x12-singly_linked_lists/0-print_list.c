#include <stdio.h>
#include "lists.h"

/**
 * print_list - check for this function
 * @h: check for this parameter
 * Return: size:t
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t indexing = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		indexing++;
	}
	return (indexing);
}
