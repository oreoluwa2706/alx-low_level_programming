#include "main.h"

/**
 * get_endianness - check for this function
 * Return: int
 */
int get_endianness(void)
{
	unsigned int a;
	char *b;

	a = 1;
	b = (char *) &a;

	return ((int)*b);
}
