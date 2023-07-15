#include <stdio.h>

/**
 * main - Entry point to print numbers from in base 10 starting from 0
 * only putchar is allowed for this task
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;

	for (num1 = 0; num1 <= 9; num1++)
	{
		putchar((num1 % 10) + '0');
	}
	putchar('\n');
	return (0);
}
