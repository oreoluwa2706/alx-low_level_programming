#include "main.h"

/**
 * *_memset - This function fills a string with n bytes
 * @s: check for this parameter
 * @b: check for this parameter
 * @n: check for this parameter
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
