#include "main.h"

/**
 * _isupper - Checking if there is an upper case
 * @c: Check for the character c
 * Return: 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <='Z')
		return (1);
	else
		return (0);
}
