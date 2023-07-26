#include "main.h"

/**
 * *string_toupper - This function changes the string of lower case to upper
 * @n  : check for this parameter
 * Return: char
 */
char *string_toupper(char *n)
{
	char *st =  n;

	while (*st)
	{
		if (*st >= 'a' && *st <= 'z')
		{
			*st = *st - 'a' + 'A';
		}
		st++;
	}
	return (n);
}
