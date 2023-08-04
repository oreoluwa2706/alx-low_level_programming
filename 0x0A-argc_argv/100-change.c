#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * coChanger - check for this function
 * @a: check for this parameter
 * Return: int
 */
int coChanger(int a)
{
	int count = 0;

	while (a != 0)
	{
		if (a % 10 == 9 || a % 10 == 7)
			a -= 2;
		else if (a % 25 == 0)
			a -= 25;
		else if (a % 10 == 0)
			a -= 10;
		else if (a % 5 == 0)
			a -= 5;
		else if (a % 2 == 0)
		{
			if (a % 10 == 6)
				a -= 1;
			else
				a -= 2;
		}
		else
			a -= 1;
		count++;
	}
	return (count);
}
/**
 * main - check for this function
 * @argc: check for this parameter
 * @argv: check for this parameter
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int a, co;

	co = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);

	if (a < 0)
		printf("0\n");
	else
	{
		co = coChanger(a);

		printf("%d\n", co);
	}

	return (0);
}
