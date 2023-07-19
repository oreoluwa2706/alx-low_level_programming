#include "main.h"

/**
 * _islower - Entry point to that checks for lower case character
 * @c: check for character c
 * Return: 1 if lowercase and 0 for any other option
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
