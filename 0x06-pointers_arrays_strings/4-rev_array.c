#include "main.h"
#include <stdio.h>

/**
 * reverse_array - This function reverse an array
 * @a: check for this parameter
 * @n: check for this parameter
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
