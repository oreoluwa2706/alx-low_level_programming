#include "main.h"
#include <stdlib.h>

/**
 * _lenstr - check for function
 * @s: check for this parameter
 * Return: int
 */
int _lenstr(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	return (i);
}
/**
 * _strdup - check for this function
 * @str: check for this parameter
 * Return: char
 */
char *_strdup(char *str)
{
	char *ptr;
	int size;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		size = _lenstr(str) + 1;
		ptr = (char *)malloc(size * sizeof(char));
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			ptr[i] = str[i];
		}
	}
	return (ptr);
}
