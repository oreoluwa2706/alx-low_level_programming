#include "main.h"

/**
 * flip_bits - check for this function
 * @n: check for this parameter
 * @m: check for this parameter
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a;

	for (a = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			a++;
	}

	return (a);
}
