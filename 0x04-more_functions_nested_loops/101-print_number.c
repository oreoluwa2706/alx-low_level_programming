#include "main.h"

/**
 * print_number - This program prints integer
 * @n: check for parameter n
 * Return: void
 */
void print_number(int n)
{
	unsigned int numbe1;

	if (n < 0)
	{
		numbe1 = -n;
		_putchar('-');
	} else
	{
		numbe1 = n;
	}
	if ((numbe1 / 10) > 0)
	{
		print_number(numbe1 / 10);
	}
	_putchar((numbe1 % 10) + '0');
}
