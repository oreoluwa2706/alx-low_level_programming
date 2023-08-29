#include "lists.h"

/**
 * free_listint - check for this function
 * @head: check for this parameter
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
