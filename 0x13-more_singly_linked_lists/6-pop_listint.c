#include "lists.h"

/**
 * pop_listint - check for this function
 * @head: check for this parameter
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int n1;
	listint_t *t;

	if (!head || !(*head))
	{
		return (0);
	}
	n1 = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;
	return (n1);
}
