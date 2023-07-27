#include "main.h"

/**
 * *rot13 - this functions encodes string using rot13
 * @n: check for this parameter
 * Return: char
 */
char *rot13(char *n)
{
	char *nt = n;

	while (*nt)
	{
		char v = *nt;

		if ((v >= 'a' && v <= 'z'))
		{
			if (v + 13 <= 'z')
				*nt = v + 13;
			else
				*nt = v - 13;
		}
		else if ((v >= 'A' && v <= 'Z'))
		{
			if (v + 13 <= 'Z')
				*nt = v + 13;
			else
				*nt = v - 13;
		}
		nt++;
	}
	return (n);
}
