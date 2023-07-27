#include "main.h"

/**
 * *rot13 - this functions encodes string using rot13
 * @n: check for this parameter
 * Return: char
 */
char *rot13(char *n)
{
	int count;
	int j;
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (count = 0; n[count] != '\0'; count++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[count] == rot1[j])
			{
				n[count] = rot13[j];
				break;
			}
		}
	}
	return (n);
}
