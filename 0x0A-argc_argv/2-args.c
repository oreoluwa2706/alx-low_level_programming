#include <stdio.h>
#include "main.h"

/**
 * main - check for this function
 * @argc: check for this function
 * @argv: check for this function
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
