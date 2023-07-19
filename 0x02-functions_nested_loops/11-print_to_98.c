#include <stdio.h>
#include "main.h"

/**
 * main - Entry of a function that print natural
 * numbers from n to 98
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int inNum;
	int seNum;

	if (n <= 98)
	{
		for (inNum = n; inNum <= 98; inNum++)
		{
			if (inNum != 98)
				printf("%d, ", inNum);
			else if (inNum == 98)
				printf("%d\n", inNum);
		}
	}
	else if (n >= 98)
	{
		for (seNum = n; seNum >= 98; seNum--)
		{
			if (seNum != 98)
				printf("%d, ", seNum);
			else if (seNum == 98)
				printf("%d\n", seNum);
		}
	}
}
