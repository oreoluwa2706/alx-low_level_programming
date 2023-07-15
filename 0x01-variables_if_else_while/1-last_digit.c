#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point to run our program, we need to check for
 * the last digit of our number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lz = n % 10;
	if (lz > 5)
	{
		printf("Last digit of %d is %d and is greater than
				5\n", n, lz);
	}
	else if (lz < 6 && lz != 0)
	{
		printf("Last digit of %d is %d and is less than 6
				and not 0", n, lz);
	}
	else
	{
		printf("Last digit of %d is %d and is 0", n, lz);
	}
	return (0);
}
