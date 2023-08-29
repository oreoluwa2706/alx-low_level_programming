#include "lists.h"

/**
 * *add_nodeint_end - check for this function
 * @head: check for this paramaeter
 * @n: check for this parameter
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *another_node;
	listint_t *t = *head;

	another_node = malloc(sizeof(listint_t));
	if (another_node == NULL)
		return (NULL);
	another_node->n = n;
	another_node->next = NULL;
	if (*head == NULL)
	{
		*head = another_node;
		return (another_node);
	}
	while (t->next)
		t = t->next;
	t->next = another_node;
	return (another_node);
}
