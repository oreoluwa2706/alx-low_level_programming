#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check for this function
 * @argc: check for this parameter
 * @argv: check for this parameter
 * Return: 1 if not enough arguments passed, and 0 if otherwise
 */

int main(int argc, char *argv[])
{
	int count, count1;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		count1 = 1;

		for (count = 1; count < 3; count++)
			count1 *= atoi(argv[count]);

		printf("%d\n", count1);
	}

	return (0);
}
