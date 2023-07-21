#include <stdio.h>

/**
 * main - print 1 to 100, for a multiple of 3 print Fizz
 * for a multiple of 5 print Buzz, for multiple of 3 and 5 print FizzBuzz
 * Return: void
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
