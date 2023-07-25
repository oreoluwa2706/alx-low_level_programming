#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This function generates a random valid password
 * Return: void
 */
int main(void)
{
	int paswd[1000];
	int a, sum, b;

	sum = 0;
	srand((unsigned int)time(NULL));

	for (a = 0; a < 1000; a++)
	{
		paswd[a] = rand() % 78;
		sum += (paswd[a] + '0');
		putchar(paswd[a] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			b = 2772 - sum - '0';
			sum += b;
			putchar(b + '0');
			break;
		}
	}
	putchar('\n');
	return (0);
}


