#include "main.h"

/**
 * _isupper - Checking if there is an upper case
 * @c: Check for the character c
 * Return: 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	char up;

	for (up = 'A'; up <= 'Z'; up++)
	{
		if (c == up)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
