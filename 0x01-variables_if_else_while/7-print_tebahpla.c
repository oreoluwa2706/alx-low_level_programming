#include <stdio.h>

/**
 * main - Entry point to print alphabet in reverse order
 * Only putchar is required for this task
 * Return: Always 0 (Success)
 */
int main(void)
{
	char revAp;

	for (revAp = 'z'; revAp >= 'a'; revAp--)
	{
		putchar(revAp);
	}
	putchar('\n');
	return (0);
}
