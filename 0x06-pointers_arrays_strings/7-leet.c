#include "main.h"

/**
 * *leet - This function encodes a string into 1337
 * @n: check for this parameter
 * Return: char
 */
char *leet(char *n)
{
	char *nt = n;

	while (*nt)
	{
		char v = *nt;

		if (v == 'a' || v == 'A')
			*nt = '4';
		else if (v == 'e' || v == 'E')
			*nt = '3';
		else if (v == 'o' || v == 'O')
			*nt = '0';
		else if (v == 't' || v == 'T')
			*nt = '7';
		else if (v == 'l' || v == 'L')
			*nt = '1';
		nt++;
	}
	return (n);
}
