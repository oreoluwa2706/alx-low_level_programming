#include "main.h"

/**
 *  _isdigit - check if it is digit
 * @c: check for character c
 * Return: 1 if it is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
