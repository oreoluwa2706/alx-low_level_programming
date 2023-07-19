#include <stdio.h>

/**
 * main - Entry point to compute a number with multple of 3 and 5
 * The number should be below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numb;
	int sumNumb;

	sumNumb = 0;

	for (numb = 0; numb < 1024; numb++)
	{
		if ((numb % 3) == 0 || (numb % 5) == 0)
			sumNumb += numb;
	}
	printf("%d\n", sumNumb);
	return (0);
}
