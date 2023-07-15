#include <stdio.h>

/**
 * main - Entry point to print a to z except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char _a;

	for (_a = 'a'; _a <= 'z'; _a++)
	{
		if (_a != 'e' && _a != 'q')
		{
			putchar(_a);
		}
		putchar('\n');
	}
	return (0);
}
