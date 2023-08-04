#include <stdio.h>
#include "main.h"

/**
 * main - print the function
 * @argc: check for this parameter
 * @argv: check for this parameter
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (count = 0; *argv; count++, argv++)
			;
		printf("%d\n", count - 1);
	}
	return (0);
}
