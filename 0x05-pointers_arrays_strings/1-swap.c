#include "main.h"

/**
 * swap_int - This function swap two integers
 * @a: check for this parameter
 * @b: check for this parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
