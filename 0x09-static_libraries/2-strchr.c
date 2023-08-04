#include "main.h"

/**
 * *_strchr - This functurn return pointer to the first occurence
 * @s: check for this parameter
 * @c: check for this parameter
 * Return: char
 */
char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
