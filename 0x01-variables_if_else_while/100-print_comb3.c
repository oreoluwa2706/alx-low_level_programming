#include <stdio.h>

/**
 * main - Printing the combination of a two digits number
 * the nuber must be unique and only putchar is allowed
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 8 && num2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
