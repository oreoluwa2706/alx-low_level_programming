#include "main.h"

/**
 * main - Entry point to print alphabet
 * in lower case
 * Return: Always 0 (Success)
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
