#include <stdio.h>

/**
 * main - Entry point to print fibonacci sequence by
 * adding previous two terms
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	unsigned long int num1;
	unsigned long int num2;
	unsigned long int num3;
	unsigned long int sum;

	num1 = 1;
	num2 = 2;
	sum = 0;

	for (num = 1; num <= 33; ++num)
	{
		if (num1 < 4000000 && (num1 % 2) == 0)
		{
			sum = sum + num1;
		}
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
	}
	printf("%lu\n", sum);
	return (0);
}
