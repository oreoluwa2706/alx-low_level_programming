#include "main.h"
#include <stdio.h>

/**
 * print_times_table - This print n times table starting from 0
 * @n: check for n
 * Return: void
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int first;

		for (first = 0; first <= n; first++)
		{
			int second;

			for (second = 0; second <= n; second++)
			{
				int table = second * first;

				if (second == 0)
				{
					printf("%d", table);
				}
				else if (table < 10)
				{
					printf(",   %d", table);
				}
				else if (table >= 10 && table < 100)
				{
					printf(",   %d", table);
				}
				else if (table >= 100)
				{
					printf(", %d", table);
				}
			}
			printf("\n");
		}
	}
}
