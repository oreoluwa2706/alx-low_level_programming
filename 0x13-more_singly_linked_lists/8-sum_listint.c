#include "lists.h"

/**
 * sum_listint - check for this function
 * @head: check for this parameter
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *t = head;

	while (t)
	{
		sum += t->n;
		t = t->next;
	}
	return (sum);
}
