#include "main.h"

/**
 * *cap_string - This function capitalize first word of each letter
 * @n: check for this parameter
 * Return: char
 */
char *cap_string(char *n)
{

	int capital = 1;

	while (*n)
	{
		if (*n == ' ' || *n == '\t' || *n == '\n' || *n == ',' ||
				*n == ';' || *n == '.' || *n == '!' ||  *n ==
				 '?' || *n == '"' || *n == '(' || *n == ')'
				 || *n == '{' || *n == '}')
		{
			capital = 1;
		}
	else if (capital)
	{
		if (*n >= 'a' && *n <= 'z')
		{
			*n = *n - 'a' + 'A';
		}
		capital = 0;
	}
	n++;
	}
	return (n);
}
