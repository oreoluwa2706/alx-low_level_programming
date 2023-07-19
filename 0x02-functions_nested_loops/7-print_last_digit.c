#include "main.h"

/**
 * print_last_digit - Entry point of a function that print
 * @n: The character to check is n
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	int lad;

	lad = n % 10;
	if (lad < 0)
	{
		lad = lad * -1;
	}
	_putchar(lad + '0');
	return (lad);
}
