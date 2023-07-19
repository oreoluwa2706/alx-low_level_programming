#include "main.h"

/**
 * print_alphabet - Entry point to print alphabet
 * in lower case
 * Return: void
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
