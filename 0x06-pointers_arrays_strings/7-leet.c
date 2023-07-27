#include "main.h"

/**
 * *leet - This function encodes a string into 1337
 * @n: check for this parameter
 * Return: string with changed number
 */
char *leet(char *n)
{
	char letter[] = "aeotlAEOTL";
	char number[] = "4307143071";

	int count;
	int j;

	for (count = 0; n[count] != '\0'; count++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[count] == letter[j])
			{
				n[count] = number[j];
			}
		}
	}
	return (n);
}
