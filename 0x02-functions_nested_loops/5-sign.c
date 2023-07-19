#include "main.h"

/**
 * main - Entry point to prin the sign of a number
 * It print + if n is greater than zero
 * print 0 if n is zero and - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
