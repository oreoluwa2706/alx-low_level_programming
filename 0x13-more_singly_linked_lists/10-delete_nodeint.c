#include "lists.h"

/**
 * delete_nodeint_at_index - check for this function
 * @head: check for this parameter
 * @index: check for this parameter
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head, *h;
	unsigned int count;

	if (!head || !*head)
		return (-1);

	if (index != 0)
	{
		for (count = 0; count + 1 < index; count++)
		{
			if (t->next == NULL)
			{
				return (-1);
			}
			t = t->next;
		}
		h = t->next->next;
		free(t->next);
		t->next = h;
		return (1);
	}
	else
	{
		t = (*head)->next;
		free(*head);
		*head = t;
		return (1);
	}
}
