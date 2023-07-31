#include "main.h"

/**
 * *_strchr - This functurn return pointer to the first occurence
 * @s: check for this parameter
 * @c: check for this parameter
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
