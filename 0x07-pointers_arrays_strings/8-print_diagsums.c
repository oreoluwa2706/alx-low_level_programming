#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check for tis function
 * @a: check for this parameter
 * @size: check for this parameter
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum_first = 0;
	int sum_second = 0;
	int count;

	for (count = 0; count < size; count++)
	{
		sum_first += a[count * size + count];
	}
	for (count = 0; count < size; count++)
	{
		sum_second += a[count * size + (size - 1 - count)];
	}
	printf("%d, %d\n", sum_first, sum_second);
}
