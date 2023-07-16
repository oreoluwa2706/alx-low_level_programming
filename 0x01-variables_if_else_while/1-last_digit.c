#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry to check the last digit of a number
 * and to check if it's greater than 5, 0 or less than 5 and not 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
				n, lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and
				not 0", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is 0", n, lastDigit);
	}
	return (0);
}
