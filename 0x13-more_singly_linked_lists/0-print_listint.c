#include "lists.h"

/**
 * print_listint - check for this function
 * @h: check for this parameter
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t ind = 0;

	while (h)
	{
		printf("%d\n", h->n);
		ind++;
		h = h->next;
	}
	return (ind);
}
