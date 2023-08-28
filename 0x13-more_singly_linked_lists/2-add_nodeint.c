#include "lists.h"

/**
 * *add_nodeint - check for this function
 * @head: check for this parameter
 * @n: check for this parameter
 * Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *attached_node;

	attached_node = malloc(sizeof(listint_t));

	if (attached_node == NULL)
		return (NULL);
	attached_node->n = n;
	attached_node->next = *head;
	*head = attached_node;

	return (attached_node);
}
