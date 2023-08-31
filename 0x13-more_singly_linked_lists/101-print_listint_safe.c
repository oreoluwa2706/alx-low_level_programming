#include "lists.h"
#include <stdio.h>

size_t check_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - check for this function
 * @head: Check for this parameter
 * Return: size_t
 */
size_t check_len(const listint_t *head)
{
	const listint_t *a, *b;
	size_t n1 = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	a = head->next;
	b = (head->next)->next;

	while (b)
	{
		if (a == b)
		{
			a = b;
			while (a != b)
			{
				n1++;
				a = a->next;
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
 * print_listint_safe - check for this function.
 * @head: Check for this parameter.
 * Return: size_t.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n1, i = 0;

	n1 = check_len(head);

	if (n1 == 0)
	{
		for (; head != NULL; n1++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < n1; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (n1);
}
