#include "main.h"

/**
 * _isalpha - Entry point that checks for alphabetic character
 * @c: check for character c
 * Return: 1 if c is alphabet either lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
