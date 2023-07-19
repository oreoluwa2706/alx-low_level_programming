#include "main.h"

/**
 * main - Entry point that checks for alphabetic character
 * Return 1 if c is alphabet
 * Either lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
