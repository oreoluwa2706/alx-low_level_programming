#include <stdio.h>

/**
 * main - This is a program that print letter a to z in lowercase
 * followed by an uppercase and a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	char let1;
	char let2;

	for (let1 = 'a'; let1 <= 'z'; let1++)
	{
		putchar(let1);
	}
	for (let2 = 'A'; let2 <= 'Z'; let2++)
	{
		putchar(let2);
	}
	putchar('\n');
	return (0);
}
