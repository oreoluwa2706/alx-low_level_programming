#include "lists.h"

/**
 * listint_len - check for this function
 * @h: check for this parameter
 * Return: size_T
 */
size_t listint_len(const listint_t *h)
{
	size_t ind = 0;

	while (h)
	{
		ind++;
		h = h->next;
	}
	return (ind);
}
