#include "main.h"

/**
 * _strspn - This function return the initial byte
 * @s: check for this parameter
 * @accept: check for this parameter
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	unsigned int c = 0;
	int i;

	while (*s != '\0')
	{
		a = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				a = 1;
				break;
			}
		}
		if (!a)
		{
			break;
		}
		s++;
		c++;
	}
	return (c);
}
