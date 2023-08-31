#include "main.h"

/**
 * get_bit - check for this function
 * @n: check for this parameter
 * @index: check for this parameter
 * Return: void
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
