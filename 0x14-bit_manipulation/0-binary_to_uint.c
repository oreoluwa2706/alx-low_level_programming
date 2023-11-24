#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a;
	int l, b2;

	if (!b)
		return (0);

	a = 0;

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, b2 = 1; l >= 0; l--, b2 *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}

		if (b[l] & 1)
		{
			a += b2;
		}
	}

	return (a);
}
