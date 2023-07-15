#include <stdio.h>
/**
 * main- Entry point to write a program in base 16
 * It's mandated to use putchar for this program
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;
	char alp;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (alp = 'a'; alp <= 'f'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
