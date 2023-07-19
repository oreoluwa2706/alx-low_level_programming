#include <stdio.h>

/**
 * main - Entry point to find and print the first 98
 * Fibonacci numbers, starting with 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int fib0;

	printf("%lu, %lu", num1, num2);

	for (num = 3; num <= 98; num++)
	{
		fib0 = num1 + num2;
		printf(", %lu", fib0);
		num1 = num2;
		num2 = fib0;
	}
	printf("\n");
	return (0);
}
