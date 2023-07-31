#include "main.h"

/**
 * *_strpbrk - check this function
 * @s: check for this parameter
 * @accept: check for this parameter
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		int count;

		for (count = 0; accept[count] != '\0'; count++)
		{
			if (*s == accept[count])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
