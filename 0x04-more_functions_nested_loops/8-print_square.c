#include "main.h"

/**
 * print_square - This function print square
 * @size: use size as parameter
 * Return: void
 */
void print_square(int size)
{
	int num1;
	int num2;

	if (size > 0)
	{
		for (num1 = 0; num1 < size; num1++)
		{
			for (num2 = 0; num2 < size; num2++)
				_putchar('#');
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

