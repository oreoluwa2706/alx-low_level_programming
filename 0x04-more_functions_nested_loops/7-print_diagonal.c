#include "main.h"

/**
 * print_diagonal - This uses _putchar to print diagonal line
 * @n: check for the parameter n
 * Return: void
 */
void print_diagonal(int n)
{
	int length1;
	int dist;

	if (n > 0)
	{
		for (length1 = 0; length1 < n; length1++)
		{
			for (dist = 0; dist < length1; dist++)
				_putchar(' ');
			_putchar('\\');

			if (length1 == (n - 1))
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
