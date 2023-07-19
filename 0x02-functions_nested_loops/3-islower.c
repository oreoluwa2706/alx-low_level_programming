#include "main.h"

/**
 * main - Entry point to that checks for lower case character
 * Returns 1 if c is lowercase
 * Returns 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
