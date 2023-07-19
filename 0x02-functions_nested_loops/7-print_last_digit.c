#include "main.h"

/**
 * main - Entry point of a function that print
 * the last digit of a number
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int lad;

	lad = n % 10;
	_putchar(lad + '0');
	return (lad);
}
