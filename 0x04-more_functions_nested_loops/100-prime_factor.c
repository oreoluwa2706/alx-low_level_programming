#include <stdio.h>

/**
 * main - Entry point to print prime factors
 * This program prints the largest prime factor
 * Return: void
 */
int main(void)
{
	long prFact = 612852475143, divi;

	while (divi < (prFact / 2))
	{
		if ((prFact % 2) == 0)
		{
			prFact /= 2;
			continue;
		}

		for (divi = 3; divi < (prFact / 2); divi += 2)
		{
			if ((prFact % divi) == 0)
				prFact /= divi;
		}
	}
	printf("%ld\n", prFact);
	return (0);
}
