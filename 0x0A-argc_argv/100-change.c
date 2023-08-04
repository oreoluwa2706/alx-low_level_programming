#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check for this function
 * @argc: check for this parameter
 * @argv: check for this parameter
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, j, ans;

	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	ans = 0;

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && i >= 0; j++)
	{
		while (i >= coin[j])
		{
			ans++;
			i -= coin[j];
		}
	}
	printf("%d\n", ans);
	return (0);
}
