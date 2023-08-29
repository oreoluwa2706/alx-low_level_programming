#include "lists.h"

/**
 * *get_nodeint_at_index - check for this function
 * @head: check for this parameter
 * @index: check for this parameter
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *t = head;

	for (count = 0; t && count < index; count++)
	{
		t = t->next;
	}
	if (t == NULL)
		return (NULL);
	else
		return (t);
}
