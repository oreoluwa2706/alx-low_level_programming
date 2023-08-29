#include "lists.h"

/**
 * *insert_nodeint_at_index - check for this function
 * @head: check for this parameter
 * @idx: check for this parameter
 * @n: check for this parameter
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *t = *head;
	listint_t *another_node;

	another_node = malloc(sizeof(listint_t));

	if (another_node == NULL || head == NULL)
		return (NULL);
	another_node->n = n;
	another_node->next = NULL;
	if (idx == 0)
	{
		another_node->next = *head;
		*head = another_node;
		return (another_node);
	}

	for (count = 0; t && count < idx; count++)
	{
		if (count == idx - 1)
		{
			another_node->next = t->next;
			t->next = another_node;
			return (another_node);
		}
		else
			t = t->next;
	}
	return (NULL);
}
