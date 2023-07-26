#include "main.h"

/**
 * _strcmp - this function compare two strings
 * @s1: check for this parameter
 * @s2: check for this parameter
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (int)(*s1) - (int)(*s2);
}
