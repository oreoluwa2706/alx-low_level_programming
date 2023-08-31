#include "lists.h"

size_t check_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t check_count(listint_t *head)
{
	listint_t *a, *b;
	size_t n1 = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	a = head->next;
	b = (head->next)->next;

	while (b)
	{
		if (a == b)
		{
			a = head;
			while (a != b)
			{
				n1++;
				a = b->next;
				b = b->next;
			}

			a = a->next;
			while (a != b)
			{
				n1++;
				a = a->next;
			}

			return (n1);
		}

		a = a->next;
		b = (b->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - check for this function
 * @h: check for this parameter
 * Return: size_t
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *t;
	size_t n1, i;

	n1 = check_count(*h);

	if (n1 == 0)
	{
		for (; h != NULL && *h != NULL; n1++)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
		}
	}

	else
	{
		for (i = 0; i < n1; i++)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
		}

		*h = NULL;
	}

	h = NULL;

	return (n1);
}
