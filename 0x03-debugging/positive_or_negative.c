#include "main.h"

/**
 * positive_or_negative - Entry point that will check if a number is positive,
 * @i: look for value i
 * Return: void
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);

	}
}
