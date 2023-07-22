#include <stdio.h>

/**
 * main - print 1 to 100, for a multiple of 3 print Fizz
 * for a multiple of 5 print Buzz, for multiple of 3 and 5 print FizzBuzz
 * Return: void
 */
int main(void)
{
	int fizzNum;

	for (fizzNum = 1; fizzNum <= 100; fizzNum++)
	{
		if ((fizzNum % 3) == 0 && (fizzNum % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((fizzNum % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((fizzNum % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", fizzNum);
		}
		if (fizzNum == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
