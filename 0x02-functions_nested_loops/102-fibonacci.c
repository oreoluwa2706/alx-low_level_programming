#include <stdio.h>

/**
 * main - Entry point of a function to print the first 50 fibonacci
 * numbers, starting with 1 and 2 followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int keep;
	unsigned long fibo1 = 0;
	unsigned long fibo2 = 1;
	unsigned long sum;

	for (keep = 0; keep < 50; keep++)
	{
		sum = fibo1 + fibo2;
		printf("%lu", sum);
		fibo1 = fibo2;
		fibo2 = sum;

		if (keep == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
