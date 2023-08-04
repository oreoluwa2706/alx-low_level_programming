#include "main.h"

/**
 * _puts - this function print a string
 * @str: check for this parameter
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
