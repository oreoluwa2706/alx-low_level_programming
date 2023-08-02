#include "main.h"

/**
 * pal2 - check for this function
 * @i: check for this parameter
 * @j: check for this parameter
 * Return: int
 */
int pal2(char *i, int j)
{
	if (*i == 0)
		return (j - 1);
	return (pal2(i + 1, j + 1));
}
/**
 * pal3 - check for this parameter
 * @i: check for this parameter
 * @j: check for this parameter
 * Return: int
 */
int pal3(char *i, int j)
{
	if (*i != *(i + j))
		return (0);
	else if (*i == 0)
		return (1);
	return (pal3(i + 1, j - 2));
}
/**
 * is_palindrome - check for this function
 * @s: check for this parameter
 * Return: int
 */
int is_palindrome(char *s)
{
	int z;

	z = pal2(s, 0);
	return (pal3(s, z));
}
