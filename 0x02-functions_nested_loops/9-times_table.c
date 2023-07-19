#include "main.h"

/**
 * main - Entry point to print the 9 times
 * table, starting from 0
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int just;
	int be;
	int you;

	for (just = 0; just < 10; just++)
	{
		for (be = 0; be < 10; be++)
		{
			you = be * just;
			if (be == 0)
			{
				_putchar(you + '0');
			}
			if (you < 10 && be != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(you + '0');
			}
			else if (you >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((you / 10) + '0');
				_putchar((you % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
