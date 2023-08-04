#include "main.h"

/**
 * _strlen - this function returns the lenght of a string
 * @s: check for this parameter
 * Return: int
 */
int _strlen(char *s)
{
	int s_length = 0;

	while (*s != '\0')
	{
		s_length++;
		s++;
	}
	return (s_length);
}
