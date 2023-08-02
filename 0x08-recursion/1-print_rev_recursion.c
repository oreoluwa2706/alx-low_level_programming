#include "main.h"

/**
 * _print_rev_recursion - check for this function
 * @s: check for this paraneter
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
	else
	{
		_putchar('\n');
	}
}
