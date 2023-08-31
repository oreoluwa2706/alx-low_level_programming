#include "lists.h"

/**
 * reverse_listint - check for this function
 * @head: check fo this parameter
 * Return: listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h1, *bh;

	if (head == NULL || *head == NULL)
		return (NULL);

	bh = NULL;

	while ((*head)->next != NULL)
	{
		h1 = (*head)->next;
		(*head)->next = bh;
		bh = *head;
		*head = h1;
	}

	(*head)->next = bh;

	return (*head);
}
