#include "main.h"
/**
 * main - Entry point that print alphabet
 * in lower case 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alp;
	int num;

	for (num = 0; num < 10; num++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
