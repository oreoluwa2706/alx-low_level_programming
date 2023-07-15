#include <stdio.h>

/**
 * main - This program print possible combinations of a single
 * digit number in ascending orde
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ascNum;

	for (ascNum = '0'; ascNum <= '9'; ascNum++)
	{
		putchar(ascNum);
	}
	putchar(',');
	putchar(' ');
	return (0);
}
