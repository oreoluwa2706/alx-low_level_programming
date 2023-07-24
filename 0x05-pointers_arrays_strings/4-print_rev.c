#include "main.h"

/**
 * print_rev - This function print string in a reverse order
 * @s: check for this parameter
 * Return: void
 */
void print_rev(char *s)
{
	int s_length;
	int i;
	int h;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	s_length = i;
	for (h = s_length - 1; h >= 0; h--)
	{
		_putchar(s[h]);
	}
	_putchar('\n');
}
