#include <stdio.h>

/**
 * main - This program print possible combinations of a single
 * digit number in ascending orde
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ascNum;

	for (ascNum = 0; ascNum <= 9; ascNum++)
	{
		putchar((ascNum % 10) + '0');
		if (ascNum == 9)
			continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
