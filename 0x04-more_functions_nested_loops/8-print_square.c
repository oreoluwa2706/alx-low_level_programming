#include "main.h"

/**
 * print_square - This function print square
 * @size: use size as parameter
 * Return: void
 */
void print_square(int size)
{
	int squareNum1;
	int squareNum2;

	if (size > 0)
	{
		for (squareNum1 = 0; squareNum1 < size; squareNum1++)
		{
			for (squareNum2 = 0; squareNum2 < size; squareNum2++)
				_putchar('#');
			if (squareNum1 == size - 1)
				continue;
			_putchar('\n');
		}
	}
		_putchar('\n');
}

