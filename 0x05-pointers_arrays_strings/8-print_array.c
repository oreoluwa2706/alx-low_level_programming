#include "main.h"
#include <stdio.h>

/**
 * print_array - This function print n element of an array
 * @a: check for this parameter
 * @n: check for this parameter
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
