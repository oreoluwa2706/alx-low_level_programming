#include "main.h"

/**
 * set_bit - check for this function
 * @n: check for this parameter.
 * @index: check for this parameter
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;
	*n = (*n | a);
	return (1);
}
