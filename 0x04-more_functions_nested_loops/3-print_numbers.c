#include "main.h"

/**
 * print_number - This print number from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	char e;

	for (e = '0'; e <= '9'; e++)
	{
		_putchar(e);
	}
	_putchar('\n');
}
