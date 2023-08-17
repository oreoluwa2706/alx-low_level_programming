#include <stdio.h>
#include <stdlib.h>
/**
 * main - check for this function
 * @a: check for this parameter
 * @b: check for this parameter
 * Return: int
 */
int main(int a, char *b[])
{
	char *list;
	int ch_size, index;

	if (a != 2)
	{
		printf("Error\n");
		return (1);
	}
	ch_size = atoi(b[1]);
	if (ch_size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	list = (char *)main;
	for (index = 0; index < ch_size; index++)
	{
		if (index == ch_size - 1)
		{
			printf("%02hhx\n", list[index]);
			break;
		}
	}
}
